#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CEE40
// Address: 0x1cee40 - 0x1cee90
void sub_001CEE40_0x1cee40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cee40u;

    // 0x1cee40: 0x27bdffe0
    ctx->pc = 0x1cee40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cee44: 0xffbf0010
    ctx->pc = 0x1cee44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cee48: 0x7fb00000
    ctx->pc = 0x1cee48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cee4c: 0x90830000
    ctx->pc = 0x1cee4cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cee50: 0x2463ffff
    ctx->pc = 0x1cee50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1cee54: 0xa0830000
    ctx->pc = 0x1cee54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cee58: 0x306300ff
    ctx->pc = 0x1cee58u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x1cee5c: 0x14600005
    ctx->pc = 0x1CEE5Cu;
    {
        const bool branch_taken_0x1cee5c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CEE60u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cee5c) {
            ctx->pc = 0x1CEE74u;
            goto label_1cee74;
        }
    }
    ctx->pc = 0x1CEE64u;
    // 0x1cee64: 0xc06c528
    ctx->pc = 0x1CEE64u;
    SET_GPR_U32(ctx, 31, 0x1CEE6Cu);
    ctx->pc = 0x1CEE68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x1B14A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B14A0_0x1b14a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEE6Cu; }
    }
    if (ctx->pc != 0x1CEE6Cu) { return; }
    ctx->pc = 0x1CEE6Cu;
    // 0x1cee6c: 0xa2000003
    ctx->pc = 0x1cee6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cee70: 0xa2000008
    ctx->pc = 0x1cee70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
label_1cee74:
    // 0x1cee74: 0xdfbf0010
    ctx->pc = 0x1cee74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cee78: 0x7bb00000
    ctx->pc = 0x1cee78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cee7c: 0x3e00008
    ctx->pc = 0x1CEE7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEE80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CEE74u: goto label_1cee74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CEE84u;
    // 0x1cee84: 0x0
    ctx->pc = 0x1cee84u;
    // NOP
    // 0x1cee88: 0x0
    ctx->pc = 0x1cee88u;
    // NOP
    // 0x1cee8c: 0x0
    ctx->pc = 0x1cee8cu;
    // NOP
}
