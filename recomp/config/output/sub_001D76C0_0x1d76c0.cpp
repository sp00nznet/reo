#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D76C0
// Address: 0x1d76c0 - 0x1d7730
void sub_001D76C0_0x1d76c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d76c0u;

    // 0x1d76c0: 0x27bdffe0
    ctx->pc = 0x1d76c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d76c4: 0x3c010034
    ctx->pc = 0x1d76c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d76c8: 0xffbf0010
    ctx->pc = 0x1d76c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d76cc: 0x7fb00000
    ctx->pc = 0x1d76ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d76d0: 0x902245d8
    ctx->pc = 0x1d76d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17880)));
    // 0x1d76d4: 0x10400006
    ctx->pc = 0x1D76D4u;
    {
        const bool branch_taken_0x1d76d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D76D8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d76d4) {
            ctx->pc = 0x1D76F0u;
            goto label_1d76f0;
        }
    }
    ctx->pc = 0x1D76DCu;
    // 0x1d76dc: 0x3c010034
    ctx->pc = 0x1d76dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d76e0: 0x24020001
    ctx->pc = 0x1d76e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d76e4: 0x8c2345e0
    ctx->pc = 0x1d76e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 17888)));
    // 0x1d76e8: 0x1000000d
    ctx->pc = 0x1D76E8u;
    {
        const bool branch_taken_0x1d76e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D76ECu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x1d76e8) {
            ctx->pc = 0x1D7720u;
            goto label_1d7720;
        }
    }
    ctx->pc = 0x1D76F0u;
label_1d76f0:
    // 0x1d76f0: 0xc0764a0
    ctx->pc = 0x1D76F0u;
    SET_GPR_U32(ctx, 31, 0x1D76F8u);
    ctx->pc = 0x1D9280u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9280_0x1d9280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D76F8u; }
    }
    if (ctx->pc != 0x1D76F8u) { return; }
    ctx->pc = 0x1D76F8u;
    // 0x1d76f8: 0x2143c
    ctx->pc = 0x1d76f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d76fc: 0x2143f
    ctx->pc = 0x1d76fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d7700: 0x10400007
    ctx->pc = 0x1D7700u;
    {
        const bool branch_taken_0x1d7700 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D7704u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1d7700) {
            ctx->pc = 0x1D7720u;
            goto label_1d7720;
        }
    }
    ctx->pc = 0x1D7708u;
    // 0x1d7708: 0x3c010034
    ctx->pc = 0x1d7708u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d770c: 0xa02345d8
    ctx->pc = 0x1d770cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17880), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d7710: 0x8e030000
    ctx->pc = 0x1d7710u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d7714: 0x3c010034
    ctx->pc = 0x1d7714u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d7718: 0xac2345e0
    ctx->pc = 0x1d7718u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17888), GPR_U32(ctx, 3));
    // 0x1d771c: 0x0
    ctx->pc = 0x1d771cu;
    // NOP
label_1d7720:
    // 0x1d7720: 0xdfbf0010
    ctx->pc = 0x1d7720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7724: 0x7bb00000
    ctx->pc = 0x1d7724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7728: 0x3e00008
    ctx->pc = 0x1D7728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D772Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D76F0u: goto label_1d76f0;
            case 0x1D7720u: goto label_1d7720;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D7730u;
}
