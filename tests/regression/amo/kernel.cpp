#include <stdint.h>
#include <vx_intrinsics.h>
#include <vx_spawn.h>
#include "common.h"
#include <vx_print.h>

void kernel_body(int task_id, kernel_arg_t* __UNIFORM__ arg) {
	auto src0_ptr = reinterpret_cast<TYPE*>(arg->src0_addr);
	auto src1_ptr = reinterpret_cast<TYPE*>(arg->src1_addr);
	auto dst_ptr  = reinterpret_cast<TYPE*>(arg->dst_addr);

	auto x = src0_ptr[task_id]+10000;
	dst_ptr[task_id] = vx_amo_add(src0_ptr[task_id],src1_ptr[task_id]);
	// should be sum, 2nd operand, write value, 2nd operand - 10000
	vx_printf("LL SC Amoadd clobber: %d %d %d %d\n",src0_ptr[task_id],src1_ptr[task_id],dst_ptr[task_id],x-src0_ptr[task_id]);
}

int main() {
	kernel_arg_t* arg = (kernel_arg_t*)csr_read(VX_CSR_MSCRATCH);
	vx_spawn_tasks(arg->num_points, (vx_spawn_tasks_cb)kernel_body, arg);
	return 0;
}
