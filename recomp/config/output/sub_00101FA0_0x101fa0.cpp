#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00101FA0
// Address: 0x101fa0 - 0x101fb0
void sub_00101FA0_0x101fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x101fa0u;

    // 0x101fa0: 0x3084ffff
    ctx->pc = 0x101fa0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x101fa4: 0x48c4d800
    ctx->pc = 0x101fa4u;
    ctx->vu0_xitop = GPR_U32(ctx, 4) & 0x3FF;
    // 0x101fa8: 0x3e00008
    ctx->pc = 0x101FA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101FACu;
        {     uint16_t instr_index = ctx->vi[27] & 0x1FF;     uint32_t target_byte_addr = (uint32_t)instr_index << 3;     ctx->vu0_pc = target_byte_addr;     runtime->vu0StartMicroProgram(rdram, ctx, target_byte_addr); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x101FB0u;
}
