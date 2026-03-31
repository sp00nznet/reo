#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A7730
// Address: 0x1a7730 - 0x1a77d0
void sub_001A7730_0x1a7730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a7730u;

    // 0x1a7730: 0x27bdfff0
    ctx->pc = 0x1a7730u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a7734: 0x3c02002b
    ctx->pc = 0x1a7734u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1a7738: 0xffbf0000
    ctx->pc = 0x1a7738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a773c: 0x3c01002b
    ctx->pc = 0x1a773cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a7740: 0x8c260a68
    ctx->pc = 0x1a7740u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 2664)));
    // 0x1a7744: 0x24420a80
    ctx->pc = 0x1a7744u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2688));
    // 0x1a7748: 0x61840
    ctx->pc = 0x1a7748u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 1));
    // 0x1a774c: 0x661821
    ctx->pc = 0x1a774cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a7750: 0x31880
    ctx->pc = 0x1a7750u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7754: 0x433021
    ctx->pc = 0x1a7754u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7758: 0x8cc20000
    ctx->pc = 0x1a7758u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a775c: 0x4400006
    ctx->pc = 0x1A775Cu;
    {
        const bool branch_taken_0x1a775c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A7760u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 255));
        if (branch_taken_0x1a775c) {
            ctx->pc = 0x1A7778u;
            goto label_1a7778;
        }
    }
    ctx->pc = 0x1A7764u;
    // 0x1a7764: 0x3c040024
    ctx->pc = 0x1a7764u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1a7768: 0xc0423b4
    ctx->pc = 0x1A7768u;
    SET_GPR_U32(ctx, 31, 0x1A7770u);
    ctx->pc = 0x1A776Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8576));
    ctx->pc = 0x108ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108ED0_0x108ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7770u; }
    }
    if (ctx->pc != 0x1A7770u) { return; }
    ctx->pc = 0x1A7770u;
    // 0x1a7770: 0x10000014
    ctx->pc = 0x1A7770u;
    {
        const bool branch_taken_0x1a7770 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7774u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a7770) {
            ctx->pc = 0x1A77C4u;
            goto label_1a77c4;
        }
    }
    ctx->pc = 0x1A7778u;
label_1a7778:
    // 0x1a7778: 0x30a3ffff
    ctx->pc = 0x1a7778u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 65535));
    // 0x1a777c: 0x22400
    ctx->pc = 0x1a777cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a7780: 0x3c01002b
    ctx->pc = 0x1a7780u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a7784: 0x831825
    ctx->pc = 0x1a7784u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a7788: 0x3c024c00
    ctx->pc = 0x1a7788u;
    SET_GPR_U32(ctx, 2, ((uint32_t)19456 << 16));
    // 0x1a778c: 0x31a3c
    ctx->pc = 0x1a778cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x1a7790: 0x31a3e
    ctx->pc = 0x1a7790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x1a7794: 0x621025
    ctx->pc = 0x1a7794u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a7798: 0xacc20000
    ctx->pc = 0x1a7798u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1a779c: 0x8c220a68
    ctx->pc = 0x1a779cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2664)));
    // 0x1a77a0: 0x24430001
    ctx->pc = 0x1a77a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a77a4: 0x4610004
    ctx->pc = 0x1A77A4u;
    {
        const bool branch_taken_0x1a77a4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1A77A8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 31));
        if (branch_taken_0x1a77a4) {
            ctx->pc = 0x1A77B8u;
            goto label_1a77b8;
        }
    }
    ctx->pc = 0x1A77ACu;
    // 0x1a77ac: 0x10400002
    ctx->pc = 0x1A77ACu;
    {
        const bool branch_taken_0x1a77ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a77ac) {
            ctx->pc = 0x1A77B8u;
            goto label_1a77b8;
        }
    }
    ctx->pc = 0x1A77B4u;
    // 0x1a77b4: 0x2442ffe0
    ctx->pc = 0x1a77b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967264));
label_1a77b8:
    // 0x1a77b8: 0x3c01002b
    ctx->pc = 0x1a77b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a77bc: 0xac220a68
    ctx->pc = 0x1a77bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2664), GPR_U32(ctx, 2));
    // 0x1a77c0: 0x102d
    ctx->pc = 0x1a77c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a77c4:
    // 0x1a77c4: 0xdfbf0000
    ctx->pc = 0x1a77c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a77c8: 0x3e00008
    ctx->pc = 0x1A77C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A77CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7778u: goto label_1a7778;
            case 0x1A77B8u: goto label_1a77b8;
            case 0x1A77C4u: goto label_1a77c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A77D0u;
}
