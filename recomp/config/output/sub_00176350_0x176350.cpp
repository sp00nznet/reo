#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00176350
// Address: 0x176350 - 0x176418
void sub_00176350_0x176350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x176350u;

    // 0x176350: 0x27bdfff0
    ctx->pc = 0x176350u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x176354: 0x24890cc0
    ctx->pc = 0x176354u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 4), 3264));
    // 0x176358: 0xffbf0000
    ctx->pc = 0x176358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17635c: 0x2402fffb
    ctx->pc = 0x17635cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x176360: 0xa0382d
    ctx->pc = 0x176360u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176364: 0x8d230248
    ctx->pc = 0x176364u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 584)));
    // 0x176368: 0x14620005
    ctx->pc = 0x176368u;
    {
        const bool branch_taken_0x176368 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x17636Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x176368) {
            ctx->pc = 0x176380u;
            goto label_176380;
        }
    }
    ctx->pc = 0x176370u;
    // 0x176370: 0xdfbf0000
    ctx->pc = 0x176370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176374: 0x805d906
    ctx->pc = 0x176374u;
    ctx->pc = 0x176378u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x176418u;
    sub_00176418_0x176418(rdram, ctx, runtime); return;
    ctx->pc = 0x17637Cu;
    // 0x17637c: 0x0
    ctx->pc = 0x17637cu;
    // NOP
label_176380:
    // 0x176380: 0xace30000
    ctx->pc = 0x176380u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x176384: 0x102d
    ctx->pc = 0x176384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176388: 0xdfbf0000
    ctx->pc = 0x176388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17638c: 0x8d23024c
    ctx->pc = 0x17638cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 588)));
    // 0x176390: 0xad030000
    ctx->pc = 0x176390u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x176394: 0x3e00008
    ctx->pc = 0x176394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176398u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176380u: goto label_176380;
            case 0x1763F8u: goto label_1763f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17639Cu;
    // 0x17639c: 0x0
    ctx->pc = 0x17639cu;
    // NOP
    // 0x1763a0: 0x27bdffe0
    ctx->pc = 0x1763a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1763a4: 0xffb00000
    ctx->pc = 0x1763a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1763a8: 0x80802d
    ctx->pc = 0x1763a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1763ac: 0xffb10008
    ctx->pc = 0x1763acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1763b0: 0xc0882d
    ctx->pc = 0x1763b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1763b4: 0xffb20010
    ctx->pc = 0x1763b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1763b8: 0xffbf0018
    ctx->pc = 0x1763b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1763bc: 0xc05a78c
    ctx->pc = 0x1763BCu;
    SET_GPR_U32(ctx, 31, 0x1763C4u);
    ctx->pc = 0x1763C0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1763C4u; }
    }
    if (ctx->pc != 0x1763C4u) { return; }
    ctx->pc = 0x1763C4u;
    // 0x1763c4: 0x3c05ff00
    ctx->pc = 0x1763c4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1763c8: 0x200202d
    ctx->pc = 0x1763c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1763cc: 0x220302d
    ctx->pc = 0x1763ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1763d0: 0x10400009
    ctx->pc = 0x1763D0u;
    {
        const bool branch_taken_0x1763d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1763D4u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 296));
        if (branch_taken_0x1763d0) {
            ctx->pc = 0x1763F8u;
            goto label_1763f8;
        }
    }
    ctx->pc = 0x1763D8u;
    // 0x1763d8: 0xdfb00000
    ctx->pc = 0x1763d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1763dc: 0x202d
    ctx->pc = 0x1763dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1763e0: 0xdfb10008
    ctx->pc = 0x1763e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1763e4: 0xdfb20010
    ctx->pc = 0x1763e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1763e8: 0xdfbf0018
    ctx->pc = 0x1763e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1763ec: 0x805a704
    ctx->pc = 0x1763ECu;
    ctx->pc = 0x1763F0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x1763F4u;
    // 0x1763f4: 0x0
    ctx->pc = 0x1763f4u;
    // NOP
label_1763f8:
    // 0x1763f8: 0x240282d
    ctx->pc = 0x1763f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1763fc: 0xdfb20010
    ctx->pc = 0x1763fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176400: 0xdfb00000
    ctx->pc = 0x176400u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176404: 0xdfb10008
    ctx->pc = 0x176404u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x176408: 0xdfbf0018
    ctx->pc = 0x176408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17640c: 0x805d906
    ctx->pc = 0x17640Cu;
    ctx->pc = 0x176410u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x176418u;
    sub_00176418_0x176418(rdram, ctx, runtime); return;
    ctx->pc = 0x176414u;
    // 0x176414: 0x0
    ctx->pc = 0x176414u;
    // NOP
}
