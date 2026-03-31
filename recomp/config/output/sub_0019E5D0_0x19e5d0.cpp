#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0019E5D0
// Address: 0x19e5d0 - 0x19e6b0
void sub_0019E5D0_0x19e5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x19e5d0u;

    // 0x19e5d0: 0x27bdff80
    ctx->pc = 0x19e5d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x19e5d4: 0xffbf0070
    ctx->pc = 0x19e5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x19e5d8: 0x7fb60060
    ctx->pc = 0x19e5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x19e5dc: 0x7fb50050
    ctx->pc = 0x19e5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19e5e0: 0x80b02d
    ctx->pc = 0x19e5e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e5e4: 0x7fb40040
    ctx->pc = 0x19e5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19e5e8: 0xa0a82d
    ctx->pc = 0x19e5e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e5ec: 0x7fb30030
    ctx->pc = 0x19e5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19e5f0: 0xc0a02d
    ctx->pc = 0x19e5f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e5f4: 0x7fb20020
    ctx->pc = 0x19e5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19e5f8: 0x982d
    ctx->pc = 0x19e5f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e5fc: 0x7fb10010
    ctx->pc = 0x19e5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19e600: 0x3c110023
    ctx->pc = 0x19e600u;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
    // 0x19e604: 0x7fb00000
    ctx->pc = 0x19e604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19e608: 0x26310890
    ctx->pc = 0x19e608u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 2192));
label_19e60c:
    // 0x19e60c: 0x131280
    ctx->pc = 0x19e60cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 10));
    // 0x19e610: 0x902d
    ctx->pc = 0x19e610u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e614: 0x2c28021
    ctx->pc = 0x19e614u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_19e618:
    // 0x19e618: 0x8e250000
    ctx->pc = 0x19e618u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19e61c: 0x3c030023
    ctx->pc = 0x19e61cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x19e620: 0x121100
    ctx->pc = 0x19e620u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 4));
    // 0x19e624: 0x24630810
    ctx->pc = 0x19e624u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2064));
    // 0x19e628: 0x2022021
    ctx->pc = 0x19e628u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x19e62c: 0x280302d
    ctx->pc = 0x19e62cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e630: 0x3c020023
    ctx->pc = 0x19e630u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x19e634: 0x24420790
    ctx->pc = 0x19e634u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1936));
    // 0x19e638: 0x52880
    ctx->pc = 0x19e638u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x19e63c: 0x26310004
    ctx->pc = 0x19e63cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
    // 0x19e640: 0x651821
    ctx->pc = 0x19e640u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19e644: 0x451021
    ctx->pc = 0x19e644u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x19e648: 0x8c630000
    ctx->pc = 0x19e648u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19e64c: 0x8c420000
    ctx->pc = 0x19e64cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19e650: 0x31ac0
    ctx->pc = 0x19e650u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 11));
    // 0x19e654: 0x2831818
    ctx->pc = 0x19e654u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x19e658: 0x21140
    ctx->pc = 0x19e658u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x19e65c: 0x2a31821
    ctx->pc = 0x19e65cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x19e660: 0xc0679ac
    ctx->pc = 0x19E660u;
    SET_GPR_U32(ctx, 31, 0x19E668u);
    ctx->pc = 0x19E664u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x19E6B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E6B0_0x19e6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E668u; }
    }
    if (ctx->pc != 0x19E668u) { return; }
    ctx->pc = 0x19E668u;
    // 0x19e668: 0x26520001
    ctx->pc = 0x19e668u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x19e66c: 0x2a430004
    ctx->pc = 0x19e66cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 18), 4));
    // 0x19e670: 0x1460ffe9
    ctx->pc = 0x19E670u;
    {
        const bool branch_taken_0x19e670 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x19e670) {
            ctx->pc = 0x19E618u;
            goto label_19e618;
        }
    }
    ctx->pc = 0x19E678u;
    // 0x19e678: 0x26730001
    ctx->pc = 0x19e678u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x19e67c: 0x2a630008
    ctx->pc = 0x19e67cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), 8));
    // 0x19e680: 0x1460ffe2
    ctx->pc = 0x19E680u;
    {
        const bool branch_taken_0x19e680 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x19e680) {
            ctx->pc = 0x19E60Cu;
            goto label_19e60c;
        }
    }
    ctx->pc = 0x19E688u;
    // 0x19e688: 0xdfbf0070
    ctx->pc = 0x19e688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19e68c: 0x7bb60060
    ctx->pc = 0x19e68cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19e690: 0x7bb50050
    ctx->pc = 0x19e690u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19e694: 0x7bb40040
    ctx->pc = 0x19e694u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19e698: 0x7bb30030
    ctx->pc = 0x19e698u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19e69c: 0x7bb20020
    ctx->pc = 0x19e69cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e6a0: 0x7bb10010
    ctx->pc = 0x19e6a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e6a4: 0x7bb00000
    ctx->pc = 0x19e6a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e6a8: 0x3e00008
    ctx->pc = 0x19E6A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E6ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E60Cu: goto label_19e60c;
            case 0x19E618u: goto label_19e618;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19E6B0u;
}
