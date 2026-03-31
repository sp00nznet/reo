#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00146908
// Address: 0x146908 - 0x1469a8
void sub_00146908_0x146908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x146908u;

    // 0x146908: 0x27bdfed0
    ctx->pc = 0x146908u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x14690c: 0xffb00100
    ctx->pc = 0x14690cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x146910: 0xffbf0120
    ctx->pc = 0x146910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x146914: 0x80802d
    ctx->pc = 0x146914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146918: 0xffb10110
    ctx->pc = 0x146918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x14691c: 0x8e0400f8
    ctx->pc = 0x14691cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x146920: 0x1080000a
    ctx->pc = 0x146920u;
    {
        const bool branch_taken_0x146920 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x146924u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x146920) {
            ctx->pc = 0x14694Cu;
            goto label_14694c;
        }
    }
    ctx->pc = 0x146928u;
    // 0x146928: 0x8e0200f4
    ctx->pc = 0x146928u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x14692c: 0x8cc30004
    ctx->pc = 0x14692cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x146930: 0x43102a
    ctx->pc = 0x146930u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x146934: 0x1440000b
    ctx->pc = 0x146934u;
    {
        const bool branch_taken_0x146934 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x146938u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x146934) {
            ctx->pc = 0x146964u;
            goto label_146964;
        }
    }
    ctx->pc = 0x14693Cu;
    // 0x14693c: 0x8cc20008
    ctx->pc = 0x14693cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x146940: 0x82102a
    ctx->pc = 0x146940u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
    // 0x146944: 0x10000007
    ctx->pc = 0x146944u;
    {
        const bool branch_taken_0x146944 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x146948u;
        SET_GPR_U32(ctx, 17, XOR32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x146944) {
            ctx->pc = 0x146964u;
            goto label_146964;
        }
    }
    ctx->pc = 0x14694Cu;
label_14694c:
    // 0x14694c: 0x8cc3000c
    ctx->pc = 0x14694cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x146950: 0x8cc40010
    ctx->pc = 0x146950u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x146954: 0x8e0200fc
    ctx->pc = 0x146954u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x146958: 0x641818
    ctx->pc = 0x146958u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x14695c: 0x43102a
    ctx->pc = 0x14695cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x146960: 0x38510001
    ctx->pc = 0x146960u;
    SET_GPR_U32(ctx, 17, XOR32(GPR_U32(ctx, 2), 1));
label_146964:
    // 0x146964: 0x1620000b
    ctx->pc = 0x146964u;
    {
        const bool branch_taken_0x146964 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x146968u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x146964) {
            ctx->pc = 0x146994u;
            goto label_146994;
        }
    }
    ctx->pc = 0x14696Cu;
    // 0x14696c: 0x8cc70008
    ctx->pc = 0x14696cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x146970: 0x3c050024
    ctx->pc = 0x146970u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x146974: 0x8cc60004
    ctx->pc = 0x146974u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x146978: 0x24a5dfc0
    ctx->pc = 0x146978u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294959040));
    // 0x14697c: 0xc042a0c
    ctx->pc = 0x14697Cu;
    SET_GPR_U32(ctx, 31, 0x146984u);
    ctx->pc = 0x146980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146984u; }
    }
    if (ctx->pc != 0x146984u) { return; }
    ctx->pc = 0x146984u;
    // 0x146984: 0x200202d
    ctx->pc = 0x146984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146988: 0xc05221c
    ctx->pc = 0x146988u;
    SET_GPR_U32(ctx, 31, 0x146990u);
    ctx->pc = 0x14698Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x148870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00148870_0x148870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146990u; }
    }
    if (ctx->pc != 0x146990u) { return; }
    ctx->pc = 0x146990u;
    // 0x146990: 0x220102d
    ctx->pc = 0x146990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_146994:
    // 0x146994: 0xdfbf0120
    ctx->pc = 0x146994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x146998: 0xdfb10110
    ctx->pc = 0x146998u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x14699c: 0xdfb00100
    ctx->pc = 0x14699cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1469a0: 0x3e00008
    ctx->pc = 0x1469A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1469A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14694Cu: goto label_14694c;
            case 0x146964u: goto label_146964;
            case 0x146994u: goto label_146994;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1469A8u;
}
