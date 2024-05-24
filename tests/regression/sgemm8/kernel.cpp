#include <stdint.h>
#include <vx_intrinsics.h>
#include <vx_spawn.h>
#include "common.h"

inline char is_log2(uint32_t x) {
    return ((x & (x-1)) == 0);
}

void kernel_body(uint32_t task_id, kernel_arg_t* __UNIFORM__ arg) {
	auto A = reinterpret_cast<const int8_t*>(arg->A_addr);
	auto B = reinterpret_cast<const int8_t*>(arg->B_addr);
	auto C = reinterpret_cast<int32_t*>(arg->C_addr);
    auto size = arg->size;

    uint32_t row = task_id / size;
    uint32_t col = task_id % size;
    // if (is_log2(size)) {
    //     row = task_id >> arg->log2_size;
    //     col = task_id & (size-1);
    // } else {
    //     row = task_id / size;
    //     col = task_id % size;
    // }

    int32_t sum(0);
    int n = size / 4;
    for (int e = 0; e < n; ++e) {
        uint32_t packed_a(0);
        uint32_t packed_b(0);
        for (int i = 0; i < 4; ++i) {
            packed_a |= static_cast<int32_t>(A[row * size + e * 4 + i]) << (i * 8);
            packed_b |= static_cast<int32_t>(B[(e * 4 + i) * size + col]) << (i * 8);
        }
        sum += vx_dot8(packed_a, packed_b);
    }
    C[task_id] = sum;
}

int main() {
	kernel_arg_t* arg = (kernel_arg_t*)csr_read(VX_CSR_MSCRATCH);
	vx_spawn_tasks(arg->num_tasks, (vx_spawn_tasks_cb)kernel_body, arg);
	return 0;
}
