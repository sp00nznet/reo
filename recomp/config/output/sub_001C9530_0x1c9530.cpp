#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C9530
// Address: 0x1c9530 - 0x1c96b0
void sub_001C9530_0x1c9530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c9530u;

    // 0x1c9530: 0x27bdffd0
    ctx->pc = 0x1c9530u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c9534: 0x3c010034
    ctx->pc = 0x1c9534u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c9538: 0xffbf0000
    ctx->pc = 0x1c9538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c953c: 0x302d
    ctx->pc = 0x1c953cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9540: 0x8c23d158
    ctx->pc = 0x1c9540u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294955352)));
    // 0x1c9544: 0x10600043
    ctx->pc = 0x1C9544u;
    {
        const bool branch_taken_0x1c9544 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C9548u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c9544) {
            ctx->pc = 0x1C9654u;
            goto label_1c9654;
        }
    }
    ctx->pc = 0x1C954Cu;
    // 0x1c954c: 0x3c010034
    ctx->pc = 0x1c954cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c9550: 0x8c22ca38
    ctx->pc = 0x1c9550u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294953528)));
    // 0x1c9554: 0x10400004
    ctx->pc = 0x1C9554u;
    {
        const bool branch_taken_0x1c9554 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C9558u;
        SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
        if (branch_taken_0x1c9554) {
            ctx->pc = 0x1C9568u;
            goto label_1c9568;
        }
    }
    ctx->pc = 0x1C955Cu;
    // 0x1c955c: 0x8c22ca30
    ctx->pc = 0x1c955cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294953520)));
    // 0x1c9560: 0x14400027
    ctx->pc = 0x1C9560u;
    {
        const bool branch_taken_0x1c9560 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c9560) {
            ctx->pc = 0x1C9600u;
            goto label_1c9600;
        }
    }
    ctx->pc = 0x1C9568u;
label_1c9568:
    // 0x1c9568: 0x8c630000
    ctx->pc = 0x1c9568u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c956c: 0x24020001
    ctx->pc = 0x1c956cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9570: 0x1062000b
    ctx->pc = 0x1C9570u;
    {
        const bool branch_taken_0x1c9570 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C9574u;
        SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
        if (branch_taken_0x1c9570) {
            ctx->pc = 0x1C95A0u;
            goto label_1c95a0;
        }
    }
    ctx->pc = 0x1C9578u;
    // 0x1c9578: 0x24020002
    ctx->pc = 0x1c9578u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c957c: 0x10620003
    ctx->pc = 0x1C957Cu;
    {
        const bool branch_taken_0x1c957c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1c957c) {
            ctx->pc = 0x1C958Cu;
            goto label_1c958c;
        }
    }
    ctx->pc = 0x1C9584u;
    // 0x1c9584: 0x1000001e
    ctx->pc = 0x1C9584u;
    {
        const bool branch_taken_0x1c9584 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c9584) {
            ctx->pc = 0x1C9600u;
            goto label_1c9600;
        }
    }
    ctx->pc = 0x1C958Cu;
label_1c958c:
    // 0x1c958c: 0xc075b8c
    ctx->pc = 0x1C958Cu;
    SET_GPR_U32(ctx, 31, 0x1C9594u);
    ctx->pc = 0x1C9590u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1D6E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6E30_0x1d6e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9594u; }
    }
    if (ctx->pc != 0x1C9594u) { return; }
    ctx->pc = 0x1C9594u;
    // 0x1c9594: 0x8fa4001c
    ctx->pc = 0x1c9594u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1c9598: 0x10000019
    ctx->pc = 0x1C9598u;
    {
        const bool branch_taken_0x1c9598 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C959Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 24)));
        if (branch_taken_0x1c9598) {
            ctx->pc = 0x1C9600u;
            goto label_1c9600;
        }
    }
    ctx->pc = 0x1C95A0u;
label_1c95a0:
    // 0x1c95a0: 0x8023cc48
    ctx->pc = 0x1c95a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294954056)));
    // 0x1c95a4: 0x1062000d
    ctx->pc = 0x1C95A4u;
    {
        const bool branch_taken_0x1c95a4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1c95a4) {
            ctx->pc = 0x1C95DCu;
            goto label_1c95dc;
        }
    }
    ctx->pc = 0x1C95ACu;
    // 0x1c95ac: 0x10600014
    ctx->pc = 0x1C95ACu;
    {
        const bool branch_taken_0x1c95ac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c95ac) {
            ctx->pc = 0x1C9600u;
            goto label_1c9600;
        }
    }
    ctx->pc = 0x1C95B4u;
    // 0x1c95b4: 0x24020002
    ctx->pc = 0x1c95b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c95b8: 0x10620003
    ctx->pc = 0x1C95B8u;
    {
        const bool branch_taken_0x1c95b8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1c95b8) {
            ctx->pc = 0x1C95C8u;
            goto label_1c95c8;
        }
    }
    ctx->pc = 0x1C95C0u;
    // 0x1c95c0: 0x1000000f
    ctx->pc = 0x1C95C0u;
    {
        const bool branch_taken_0x1c95c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c95c0) {
            ctx->pc = 0x1C9600u;
            goto label_1c9600;
        }
    }
    ctx->pc = 0x1C95C8u;
label_1c95c8:
    // 0x1c95c8: 0xc075b8c
    ctx->pc = 0x1C95C8u;
    SET_GPR_U32(ctx, 31, 0x1C95D0u);
    ctx->pc = 0x1C95CCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1D6E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6E30_0x1d6e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C95D0u; }
    }
    if (ctx->pc != 0x1C95D0u) { return; }
    ctx->pc = 0x1C95D0u;
    // 0x1c95d0: 0x8fa4001c
    ctx->pc = 0x1c95d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1c95d4: 0x1000000a
    ctx->pc = 0x1C95D4u;
    {
        const bool branch_taken_0x1c95d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C95D8u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 24)));
        if (branch_taken_0x1c95d4) {
            ctx->pc = 0x1C9600u;
            goto label_1c9600;
        }
    }
    ctx->pc = 0x1C95DCu;
label_1c95dc:
    // 0x1c95dc: 0x3c040034
    ctx->pc = 0x1c95dcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x1c95e0: 0x3c050034
    ctx->pc = 0x1c95e0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1c95e4: 0x2484ca40
    ctx->pc = 0x1c95e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953536));
    // 0x1c95e8: 0xc075d8c
    ctx->pc = 0x1C95E8u;
    SET_GPR_U32(ctx, 31, 0x1C95F0u);
    ctx->pc = 0x1C95ECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294948448));
    ctx->pc = 0x1D7630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7630_0x1d7630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C95F0u; }
    }
    if (ctx->pc != 0x1C95F0u) { return; }
    ctx->pc = 0x1C95F0u;
    // 0x1c95f0: 0x3c010034
    ctx->pc = 0x1c95f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c95f4: 0x8c26b660
    ctx->pc = 0x1c95f4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294948448)));
    // 0x1c95f8: 0x3c010034
    ctx->pc = 0x1c95f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c95fc: 0x8c24b664
    ctx->pc = 0x1c95fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294948452)));
label_1c9600:
    // 0x1c9600: 0x3c010034
    ctx->pc = 0x1c9600u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c9604: 0x8c25ca38
    ctx->pc = 0x1c9604u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294953528)));
    // 0x1c9608: 0x10a00003
    ctx->pc = 0x1C9608u;
    {
        const bool branch_taken_0x1c9608 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c9608) {
            ctx->pc = 0x1C9618u;
            goto label_1c9618;
        }
    }
    ctx->pc = 0x1C9610u;
    // 0x1c9610: 0x10000002
    ctx->pc = 0x1C9610u;
    {
        const bool branch_taken_0x1c9610 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c9610) {
            ctx->pc = 0x1C961Cu;
            goto label_1c961c;
        }
    }
    ctx->pc = 0x1C9618u;
label_1c9618:
    // 0x1c9618: 0xc0282d
    ctx->pc = 0x1c9618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1c961c:
    // 0x1c961c: 0x3c010034
    ctx->pc = 0x1c961cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c9620: 0x8c26ca30
    ctx->pc = 0x1c9620u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294953520)));
    // 0x1c9624: 0x10c00003
    ctx->pc = 0x1C9624u;
    {
        const bool branch_taken_0x1c9624 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c9624) {
            ctx->pc = 0x1C9634u;
            goto label_1c9634;
        }
    }
    ctx->pc = 0x1C962Cu;
    // 0x1c962c: 0x10000002
    ctx->pc = 0x1C962Cu;
    {
        const bool branch_taken_0x1c962c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c962c) {
            ctx->pc = 0x1C9638u;
            goto label_1c9638;
        }
    }
    ctx->pc = 0x1C9634u;
label_1c9634:
    // 0x1c9634: 0x80302d
    ctx->pc = 0x1c9634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c9638:
    // 0x1c9638: 0x3c040034
    ctx->pc = 0x1c9638u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x1c963c: 0xc075b08
    ctx->pc = 0x1C963Cu;
    SET_GPR_U32(ctx, 31, 0x1C9644u);
    ctx->pc = 0x1C9640u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953536));
    ctx->pc = 0x1D6C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6C20_0x1d6c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9644u; }
    }
    if (ctx->pc != 0x1C9644u) { return; }
    ctx->pc = 0x1C9644u;
    // 0x1c9644: 0xc0724ac
    ctx->pc = 0x1C9644u;
    SET_GPR_U32(ctx, 31, 0x1C964Cu);
    ctx->pc = 0x1C92B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C92B0_0x1c92b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C964Cu; }
    }
    if (ctx->pc != 0x1C964Cu) { return; }
    ctx->pc = 0x1C964Cu;
    // 0x1c964c: 0xc0768cc
    ctx->pc = 0x1C964Cu;
    SET_GPR_U32(ctx, 31, 0x1C9654u);
    ctx->pc = 0x1DA330u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA330_0x1da330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9654u; }
    }
    if (ctx->pc != 0x1C9654u) { return; }
    ctx->pc = 0x1C9654u;
label_1c9654:
    // 0x1c9654: 0xdfbf0000
    ctx->pc = 0x1c9654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9658: 0x3e00008
    ctx->pc = 0x1C9658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C965Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C9568u: goto label_1c9568;
            case 0x1C958Cu: goto label_1c958c;
            case 0x1C95A0u: goto label_1c95a0;
            case 0x1C95C8u: goto label_1c95c8;
            case 0x1C95DCu: goto label_1c95dc;
            case 0x1C9600u: goto label_1c9600;
            case 0x1C9618u: goto label_1c9618;
            case 0x1C961Cu: goto label_1c961c;
            case 0x1C9634u: goto label_1c9634;
            case 0x1C9638u: goto label_1c9638;
            case 0x1C9654u: goto label_1c9654;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C9660u;
    // 0x1c9660: 0x3c040034
    ctx->pc = 0x1c9660u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x1c9664: 0x3c050034
    ctx->pc = 0x1c9664u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1c9668: 0x3c060034
    ctx->pc = 0x1c9668u;
    SET_GPR_U32(ctx, 6, ((uint32_t)52 << 16));
    // 0x1c966c: 0x3c070034
    ctx->pc = 0x1c966cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1c9670: 0x3c080034
    ctx->pc = 0x1c9670u;
    SET_GPR_U32(ctx, 8, ((uint32_t)52 << 16));
    // 0x1c9674: 0x3c090034
    ctx->pc = 0x1c9674u;
    SET_GPR_U32(ctx, 9, ((uint32_t)52 << 16));
    // 0x1c9678: 0x3c0a0034
    ctx->pc = 0x1c9678u;
    SET_GPR_U32(ctx, 10, ((uint32_t)52 << 16));
    // 0x1c967c: 0x3c0b0034
    ctx->pc = 0x1c967cu;
    SET_GPR_U32(ctx, 11, ((uint32_t)52 << 16));
    // 0x1c9680: 0x2484c6e1
    ctx->pc = 0x1c9680u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952673));
    // 0x1c9684: 0x24a5c6e2
    ctx->pc = 0x1c9684u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294952674));
    // 0x1c9688: 0x24c6c6e3
    ctx->pc = 0x1c9688u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294952675));
    // 0x1c968c: 0x24e7c6e4
    ctx->pc = 0x1c968cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294952676));
    // 0x1c9690: 0x2508c6e6
    ctx->pc = 0x1c9690u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294952678));
    // 0x1c9694: 0x2529c6e8
    ctx->pc = 0x1c9694u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294952680));
    // 0x1c9698: 0x254ac6ea
    ctx->pc = 0x1c9698u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294952682));
    // 0x1c969c: 0x807261c
    ctx->pc = 0x1C969Cu;
    ctx->pc = 0x1C96A0u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4294952687));
    ctx->pc = 0x1C9870u;
    entry_1c9870_0x1cb180(rdram, ctx, runtime); return;
    ctx->pc = 0x1C96A4u;
    // 0x1c96a4: 0x0
    ctx->pc = 0x1c96a4u;
    // NOP
    // 0x1c96a8: 0x0
    ctx->pc = 0x1c96a8u;
    // NOP
    // 0x1c96ac: 0x0
    ctx->pc = 0x1c96acu;
    // NOP
}
