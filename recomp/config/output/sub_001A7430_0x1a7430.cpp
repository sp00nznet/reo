#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A7430
// Address: 0x1a7430 - 0x1a7550
void sub_001A7430_0x1a7430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a7430u;

    // 0x1a7430: 0x27bdfff0
    ctx->pc = 0x1a7430u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a7434: 0x3c02007f
    ctx->pc = 0x1a7434u;
    SET_GPR_U32(ctx, 2, ((uint32_t)127 << 16));
    // 0x1a7438: 0xffbf0000
    ctx->pc = 0x1a7438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a743c: 0x3c01002b
    ctx->pc = 0x1a743cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a7440: 0x8c2c0a70
    ctx->pc = 0x1a7440u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 1), 2672)));
    // 0x1a7444: 0x34477f7f
    ctx->pc = 0x1a7444u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 2), 32639));
    // 0x1a7448: 0x3c02002b
    ctx->pc = 0x1a7448u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1a744c: 0x24060008
    ctx->pc = 0x1a744cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a7450: 0x875824
    ctx->pc = 0x1a7450u;
    SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1a7454: 0x3c057f00
    ctx->pc = 0x1a7454u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32512 << 16));
    // 0x1a7458: 0x3c01002b
    ctx->pc = 0x1a7458u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a745c: 0x8c2a0a68
    ctx->pc = 0x1a745cu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 1), 2664)));
    // 0x1a7460: 0x10000011
    ctx->pc = 0x1A7460u;
    {
        const bool branch_taken_0x1a7460 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7464u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2688));
        if (branch_taken_0x1a7460) {
            ctx->pc = 0x1A74A8u;
            goto label_1a74a8;
        }
    }
    ctx->pc = 0x1A7468u;
label_1a7468:
    // 0x1a7468: 0x146b0008
    ctx->pc = 0x1A7468u;
    {
        const bool branch_taken_0x1a7468 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 11));
        ctx->pc = 0x1A746Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 12), 1));
        if (branch_taken_0x1a7468) {
            ctx->pc = 0x1A748Cu;
            goto label_1a748c;
        }
    }
    ctx->pc = 0x1A7470u;
    // 0x1a7470: 0x81e03
    ctx->pc = 0x1a7470u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 8), 24));
    // 0x1a7474: 0x14660003
    ctx->pc = 0x1A7474u;
    {
        const bool branch_taken_0x1a7474 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 6));
        if (branch_taken_0x1a7474) {
            ctx->pc = 0x1A7484u;
            goto label_1a7484;
        }
    }
    ctx->pc = 0x1A747Cu;
    // 0x1a747c: 0x1000002e
    ctx->pc = 0x1A747Cu;
    {
        const bool branch_taken_0x1a747c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7480u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a747c) {
            ctx->pc = 0x1A7538u;
            goto label_1a7538;
        }
    }
    ctx->pc = 0x1A7484u;
label_1a7484:
    // 0x1a7484: 0xad250000
    ctx->pc = 0x1a7484u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x1a7488: 0x25830001
    ctx->pc = 0x1a7488u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 12), 1));
label_1a748c:
    // 0x1a748c: 0x4610004
    ctx->pc = 0x1A748Cu;
    {
        const bool branch_taken_0x1a748c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1A7490u;
        SET_GPR_U32(ctx, 12, AND32(GPR_U32(ctx, 3), 31));
        if (branch_taken_0x1a748c) {
            ctx->pc = 0x1A74A0u;
            goto label_1a74a0;
        }
    }
    ctx->pc = 0x1A7494u;
    // 0x1a7494: 0x11800002
    ctx->pc = 0x1A7494u;
    {
        const bool branch_taken_0x1a7494 = (GPR_U32(ctx, 12) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a7494) {
            ctx->pc = 0x1A74A0u;
            goto label_1a74a0;
        }
    }
    ctx->pc = 0x1A749Cu;
    // 0x1a749c: 0x258cffe0
    ctx->pc = 0x1a749cu;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 4294967264));
label_1a74a0:
    // 0x1a74a0: 0x118a0009
    ctx->pc = 0x1A74A0u;
    {
        const bool branch_taken_0x1a74a0 = (GPR_U32(ctx, 12) == GPR_U32(ctx, 10));
        ctx->pc = 0x1A74A4u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 10), 1));
        if (branch_taken_0x1a74a0) {
            ctx->pc = 0x1A74C8u;
            goto label_1a74c8;
        }
    }
    ctx->pc = 0x1A74A8u;
label_1a74a8:
    // 0x1a74a8: 0xc1840
    ctx->pc = 0x1a74a8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 12), 1));
    // 0x1a74ac: 0x6c1821
    ctx->pc = 0x1a74acu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1a74b0: 0x31880
    ctx->pc = 0x1a74b0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a74b4: 0x434821
    ctx->pc = 0x1a74b4u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a74b8: 0x8d280000
    ctx->pc = 0x1a74b8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1a74bc: 0x501ffea
    ctx->pc = 0x1A74BCu;
    {
        const bool branch_taken_0x1a74bc = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1A74C0u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        if (branch_taken_0x1a74bc) {
            ctx->pc = 0x1A7468u;
            goto label_1a7468;
        }
    }
    ctx->pc = 0x1A74C4u;
    // 0x1a74c4: 0xa1840
    ctx->pc = 0x1a74c4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 10), 1));
label_1a74c8:
    // 0x1a74c8: 0x3c02002b
    ctx->pc = 0x1a74c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1a74cc: 0x6a1821
    ctx->pc = 0x1a74ccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1a74d0: 0x24420a80
    ctx->pc = 0x1a74d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2688));
    // 0x1a74d4: 0x31880
    ctx->pc = 0x1a74d4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a74d8: 0x432821
    ctx->pc = 0x1a74d8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a74dc: 0x8ca20000
    ctx->pc = 0x1a74dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a74e0: 0x4400006
    ctx->pc = 0x1A74E0u;
    {
        const bool branch_taken_0x1a74e0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A74E4u;
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 8));
        if (branch_taken_0x1a74e0) {
            ctx->pc = 0x1A74FCu;
            goto label_1a74fc;
        }
    }
    ctx->pc = 0x1A74E8u;
    // 0x1a74e8: 0x3c040024
    ctx->pc = 0x1a74e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1a74ec: 0xc0423b4
    ctx->pc = 0x1A74ECu;
    SET_GPR_U32(ctx, 31, 0x1A74F4u);
    ctx->pc = 0x1A74F0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8432));
    ctx->pc = 0x108ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108ED0_0x108ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A74F4u; }
    }
    if (ctx->pc != 0x1A74F4u) { return; }
    ctx->pc = 0x1A74F4u;
    // 0x1a74f4: 0x10000010
    ctx->pc = 0x1A74F4u;
    {
        const bool branch_taken_0x1a74f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A74F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a74f4) {
            ctx->pc = 0x1A7538u;
            goto label_1a7538;
        }
    }
    ctx->pc = 0x1A74FCu;
label_1a74fc:
    // 0x1a74fc: 0x3c01002b
    ctx->pc = 0x1a74fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a7500: 0x8c240a68
    ctx->pc = 0x1a7500u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 2664)));
    // 0x1a7504: 0x31a3e
    ctx->pc = 0x1a7504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x1a7508: 0x3c020800
    ctx->pc = 0x1a7508u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2048 << 16));
    // 0x1a750c: 0x621025
    ctx->pc = 0x1a750cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a7510: 0xaca20000
    ctx->pc = 0x1a7510u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1a7514: 0x24830001
    ctx->pc = 0x1a7514u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a7518: 0x4610004
    ctx->pc = 0x1A7518u;
    {
        const bool branch_taken_0x1a7518 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1A751Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 31));
        if (branch_taken_0x1a7518) {
            ctx->pc = 0x1A752Cu;
            goto label_1a752c;
        }
    }
    ctx->pc = 0x1A7520u;
    // 0x1a7520: 0x10400002
    ctx->pc = 0x1A7520u;
    {
        const bool branch_taken_0x1a7520 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a7520) {
            ctx->pc = 0x1A752Cu;
            goto label_1a752c;
        }
    }
    ctx->pc = 0x1A7528u;
    // 0x1a7528: 0x2442ffe0
    ctx->pc = 0x1a7528u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967264));
label_1a752c:
    // 0x1a752c: 0x3c01002b
    ctx->pc = 0x1a752cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a7530: 0xac220a68
    ctx->pc = 0x1a7530u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2664), GPR_U32(ctx, 2));
    // 0x1a7534: 0x102d
    ctx->pc = 0x1a7534u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7538:
    // 0x1a7538: 0xdfbf0000
    ctx->pc = 0x1a7538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a753c: 0x3e00008
    ctx->pc = 0x1A753Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7540u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7468u: goto label_1a7468;
            case 0x1A7484u: goto label_1a7484;
            case 0x1A748Cu: goto label_1a748c;
            case 0x1A74A0u: goto label_1a74a0;
            case 0x1A74A8u: goto label_1a74a8;
            case 0x1A74C8u: goto label_1a74c8;
            case 0x1A74FCu: goto label_1a74fc;
            case 0x1A752Cu: goto label_1a752c;
            case 0x1A7538u: goto label_1a7538;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A7544u;
    // 0x1a7544: 0x0
    ctx->pc = 0x1a7544u;
    // NOP
    // 0x1a7548: 0x0
    ctx->pc = 0x1a7548u;
    // NOP
    // 0x1a754c: 0x0
    ctx->pc = 0x1a754cu;
    // NOP
}
