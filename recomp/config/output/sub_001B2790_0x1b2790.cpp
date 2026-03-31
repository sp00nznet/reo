#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B2790
// Address: 0x1b2790 - 0x1b2810
void sub_001B2790_0x1b2790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b2790u;

    // 0x1b2790: 0x27bdffe0
    ctx->pc = 0x1b2790u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b2794: 0x3c010031
    ctx->pc = 0x1b2794u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1b2798: 0xffbf0010
    ctx->pc = 0x1b2798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b279c: 0x7fb00000
    ctx->pc = 0x1b279cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b27a0: 0x842268c8
    ctx->pc = 0x1b27a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 26824)));
    // 0x1b27a4: 0x14400003
    ctx->pc = 0x1B27A4u;
    {
        const bool branch_taken_0x1b27a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B27A8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
        if (branch_taken_0x1b27a4) {
            ctx->pc = 0x1B27B4u;
            goto label_1b27b4;
        }
    }
    ctx->pc = 0x1B27ACu;
    // 0x1b27ac: 0x10000012
    ctx->pc = 0x1B27ACu;
    {
        const bool branch_taken_0x1b27ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B27B0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b27ac) {
            ctx->pc = 0x1B27F8u;
            goto label_1b27f8;
        }
    }
    ctx->pc = 0x1B27B4u;
label_1b27b4:
    // 0x1b27b4: 0x2444ffff
    ctx->pc = 0x1b27b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b27b8: 0x8c2366b0
    ctx->pc = 0x1b27b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 26288)));
    // 0x1b27bc: 0x3c020031
    ctx->pc = 0x1b27bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x1b27c0: 0x244268e0
    ctx->pc = 0x1b27c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26848));
    // 0x1b27c4: 0x282d
    ctx->pc = 0x1b27c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b27c8: 0x24060020
    ctx->pc = 0x1b27c8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b27cc: 0x94670000
    ctx->pc = 0x1b27ccu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b27d0: 0x3c010031
    ctx->pc = 0x1b27d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1b27d4: 0x24630002
    ctx->pc = 0x1b27d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x1b27d8: 0xac2366b0
    ctx->pc = 0x1b27d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26288), GPR_U32(ctx, 3));
    // 0x1b27dc: 0x71940
    ctx->pc = 0x1b27dcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 5));
    // 0x1b27e0: 0x3c010031
    ctx->pc = 0x1b27e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1b27e4: 0x438021
    ctx->pc = 0x1b27e4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b27e8: 0xa42468c8
    ctx->pc = 0x1b27e8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 26824), (uint16_t)GPR_U32(ctx, 4));
    // 0x1b27ec: 0xc041f1a
    ctx->pc = 0x1B27ECu;
    SET_GPR_U32(ctx, 31, 0x1B27F4u);
    ctx->pc = 0x1B27F0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B27F4u; }
    }
    if (ctx->pc != 0x1B27F4u) { return; }
    ctx->pc = 0x1B27F4u;
    // 0x1b27f4: 0x200102d
    ctx->pc = 0x1b27f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b27f8:
    // 0x1b27f8: 0xdfbf0010
    ctx->pc = 0x1b27f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b27fc: 0x7bb00000
    ctx->pc = 0x1b27fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2800: 0x3e00008
    ctx->pc = 0x1B2800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2804u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B27B4u: goto label_1b27b4;
            case 0x1B27F8u: goto label_1b27f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B2808u;
    // 0x1b2808: 0x0
    ctx->pc = 0x1b2808u;
    // NOP
    // 0x1b280c: 0x0
    ctx->pc = 0x1b280cu;
    // NOP
}
