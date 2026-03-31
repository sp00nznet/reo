#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A9480
// Address: 0x1a9480 - 0x1a9500
void sub_001A9480_0x1a9480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a9480u;

    // 0x1a9480: 0x27bdffd0
    ctx->pc = 0x1a9480u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a9484: 0x3c02006f
    ctx->pc = 0x1a9484u;
    SET_GPR_U32(ctx, 2, ((uint32_t)111 << 16));
    // 0x1a9488: 0xffbf0020
    ctx->pc = 0x1a9488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a948c: 0x3442574d
    ctx->pc = 0x1a948cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 22349));
    // 0x1a9490: 0x7fb10010
    ctx->pc = 0x1a9490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a9494: 0x7fb00000
    ctx->pc = 0x1a9494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a9498: 0x8c830000
    ctx->pc = 0x1a9498u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a949c: 0x31a3c
    ctx->pc = 0x1a949cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x1a94a0: 0x31a3e
    ctx->pc = 0x1a94a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x1a94a4: 0x10620003
    ctx->pc = 0x1A94A4u;
    {
        const bool branch_taken_0x1a94a4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1A94A8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a94a4) {
            ctx->pc = 0x1A94B4u;
            goto label_1a94b4;
        }
    }
    ctx->pc = 0x1A94ACu;
    // 0x1a94ac: 0x1000000e
    ctx->pc = 0x1A94ACu;
    {
        const bool branch_taken_0x1a94ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A94B0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a94ac) {
            ctx->pc = 0x1A94E8u;
            goto label_1a94e8;
        }
    }
    ctx->pc = 0x1A94B4u;
label_1a94b4:
    // 0x1a94b4: 0x8cb00008
    ctx->pc = 0x1a94b4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a94b8: 0x8ca20018
    ctx->pc = 0x1a94b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1a94bc: 0x508823
    ctx->pc = 0x1a94bcu;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a94c0: 0x1e200003
    ctx->pc = 0x1A94C0u;
    {
        const bool branch_taken_0x1a94c0 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x1A94C4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a94c0) {
            ctx->pc = 0x1A94D0u;
            goto label_1a94d0;
        }
    }
    ctx->pc = 0x1A94C8u;
    // 0x1a94c8: 0x10000007
    ctx->pc = 0x1A94C8u;
    {
        const bool branch_taken_0x1a94c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A94CCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a94c8) {
            ctx->pc = 0x1A94E8u;
            goto label_1a94e8;
        }
    }
    ctx->pc = 0x1A94D0u;
label_1a94d0:
    // 0x1a94d0: 0xc041eac
    ctx->pc = 0x1A94D0u;
    SET_GPR_U32(ctx, 31, 0x1A94D8u);
    ctx->pc = 0x1A94D4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A94D8u; }
    }
    if (ctx->pc != 0x1A94D8u) { return; }
    ctx->pc = 0x1A94D8u;
    // 0x1a94d8: 0x200202d
    ctx->pc = 0x1a94d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a94dc: 0xc060094
    ctx->pc = 0x1A94DCu;
    SET_GPR_U32(ctx, 31, 0x1A94E4u);
    ctx->pc = 0x1A94E0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x180250u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00180250_0x180250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A94E4u; }
    }
    if (ctx->pc != 0x1A94E4u) { return; }
    ctx->pc = 0x1A94E4u;
    // 0x1a94e4: 0x24020001
    ctx->pc = 0x1a94e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1a94e8:
    // 0x1a94e8: 0xdfbf0020
    ctx->pc = 0x1a94e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a94ec: 0x7bb10010
    ctx->pc = 0x1a94ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a94f0: 0x7bb00000
    ctx->pc = 0x1a94f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a94f4: 0x3e00008
    ctx->pc = 0x1A94F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A94F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A94B4u: goto label_1a94b4;
            case 0x1A94D0u: goto label_1a94d0;
            case 0x1A94E8u: goto label_1a94e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A94FCu;
    // 0x1a94fc: 0x0
    ctx->pc = 0x1a94fcu;
    // NOP
}
