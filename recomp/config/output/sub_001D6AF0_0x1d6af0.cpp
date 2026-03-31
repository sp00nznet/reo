#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D6AF0
// Address: 0x1d6af0 - 0x1d6b50
void sub_001D6AF0_0x1d6af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d6af0u;

    // 0x1d6af0: 0x27bdffe0
    ctx->pc = 0x1d6af0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d6af4: 0x102d
    ctx->pc = 0x1d6af4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6af8: 0xffbf0010
    ctx->pc = 0x1d6af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d6afc: 0x7fb00000
    ctx->pc = 0x1d6afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d6b00: 0x8c830000
    ctx->pc = 0x1d6b00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d6b04: 0x60082a
    ctx->pc = 0x1d6b04u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 0)));
    // 0x1d6b08: 0x1420000b
    ctx->pc = 0x1D6B08u;
    {
        const bool branch_taken_0x1d6b08 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D6B0Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d6b08) {
            ctx->pc = 0x1D6B38u;
            goto label_1d6b38;
        }
    }
    ctx->pc = 0x1D6B10u;
    // 0x1d6b10: 0x3243c
    ctx->pc = 0x1d6b10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1d6b14: 0xc075f18
    ctx->pc = 0x1D6B14u;
    SET_GPR_U32(ctx, 31, 0x1D6B1Cu);
    ctx->pc = 0x1D6B18u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->pc = 0x1D7C60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7C60_0x1d7c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6B1Cu; }
    }
    if (ctx->pc != 0x1D6B1Cu) { return; }
    ctx->pc = 0x1D6B1Cu;
    // 0x1d6b1c: 0x2243c
    ctx->pc = 0x1d6b1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d6b20: 0x2402ffff
    ctx->pc = 0x1d6b20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d6b24: 0x4243f
    ctx->pc = 0x1d6b24u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1d6b28: 0xc0759b4
    ctx->pc = 0x1D6B28u;
    SET_GPR_U32(ctx, 31, 0x1D6B30u);
    ctx->pc = 0x1D6B2Cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1D66D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D66D0_0x1d66d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6B30u; }
    }
    if (ctx->pc != 0x1D6B30u) { return; }
    ctx->pc = 0x1D6B30u;
    // 0x1d6b30: 0x10000003
    ctx->pc = 0x1D6B30u;
    {
        const bool branch_taken_0x1d6b30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d6b30) {
            ctx->pc = 0x1D6B40u;
            goto label_1d6b40;
        }
    }
    ctx->pc = 0x1D6B38u;
label_1d6b38:
    // 0x1d6b38: 0x2403ffff
    ctx->pc = 0x1d6b38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d6b3c: 0xae030000
    ctx->pc = 0x1d6b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1d6b40:
    // 0x1d6b40: 0xdfbf0010
    ctx->pc = 0x1d6b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6b44: 0x7bb00000
    ctx->pc = 0x1d6b44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6b48: 0x3e00008
    ctx->pc = 0x1D6B48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6B4Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D6B38u: goto label_1d6b38;
            case 0x1D6B40u: goto label_1d6b40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D6B50u;
}
