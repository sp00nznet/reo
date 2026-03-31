#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0019E910
// Address: 0x19e910 - 0x19e9f0
void sub_0019E910_0x19e910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x19e910u;

    // 0x19e910: 0x27bdff80
    ctx->pc = 0x19e910u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x19e914: 0xffbf0070
    ctx->pc = 0x19e914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x19e918: 0x7fb60060
    ctx->pc = 0x19e918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x19e91c: 0x7fb50050
    ctx->pc = 0x19e91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19e920: 0x80b02d
    ctx->pc = 0x19e920u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e924: 0x7fb40040
    ctx->pc = 0x19e924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19e928: 0xa0a82d
    ctx->pc = 0x19e928u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e92c: 0x7fb30030
    ctx->pc = 0x19e92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19e930: 0xc0a02d
    ctx->pc = 0x19e930u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e934: 0x7fb20020
    ctx->pc = 0x19e934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19e938: 0x982d
    ctx->pc = 0x19e938u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e93c: 0x7fb10010
    ctx->pc = 0x19e93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19e940: 0x3c110023
    ctx->pc = 0x19e940u;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
    // 0x19e944: 0x7fb00000
    ctx->pc = 0x19e944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19e948: 0x26310910
    ctx->pc = 0x19e948u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 2320));
label_19e94c:
    // 0x19e94c: 0x1312c0
    ctx->pc = 0x19e94cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 11));
    // 0x19e950: 0x902d
    ctx->pc = 0x19e950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e954: 0x2c28021
    ctx->pc = 0x19e954u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_19e958:
    // 0x19e958: 0x8e250000
    ctx->pc = 0x19e958u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19e95c: 0x3c030023
    ctx->pc = 0x19e95cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x19e960: 0x121100
    ctx->pc = 0x19e960u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 4));
    // 0x19e964: 0x24630810
    ctx->pc = 0x19e964u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2064));
    // 0x19e968: 0x2022021
    ctx->pc = 0x19e968u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x19e96c: 0x280302d
    ctx->pc = 0x19e96cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e970: 0x3c020023
    ctx->pc = 0x19e970u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x19e974: 0x24420790
    ctx->pc = 0x19e974u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1936));
    // 0x19e978: 0x52880
    ctx->pc = 0x19e978u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x19e97c: 0x26310004
    ctx->pc = 0x19e97cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
    // 0x19e980: 0x651821
    ctx->pc = 0x19e980u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19e984: 0x451021
    ctx->pc = 0x19e984u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x19e988: 0x8c630000
    ctx->pc = 0x19e988u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19e98c: 0x8c420000
    ctx->pc = 0x19e98cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19e990: 0x31ac0
    ctx->pc = 0x19e990u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 11));
    // 0x19e994: 0x2831818
    ctx->pc = 0x19e994u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x19e998: 0x21140
    ctx->pc = 0x19e998u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x19e99c: 0x2a31821
    ctx->pc = 0x19e99cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x19e9a0: 0xc067a7c
    ctx->pc = 0x19E9A0u;
    SET_GPR_U32(ctx, 31, 0x19E9A8u);
    ctx->pc = 0x19E9A4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x19E9F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E9F0_0x19e9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E9A8u; }
    }
    if (ctx->pc != 0x19E9A8u) { return; }
    ctx->pc = 0x19E9A8u;
    // 0x19e9a8: 0x26520001
    ctx->pc = 0x19e9a8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x19e9ac: 0x2a430008
    ctx->pc = 0x19e9acu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 18), 8));
    // 0x19e9b0: 0x1460ffe9
    ctx->pc = 0x19E9B0u;
    {
        const bool branch_taken_0x19e9b0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x19e9b0) {
            ctx->pc = 0x19E958u;
            goto label_19e958;
        }
    }
    ctx->pc = 0x19E9B8u;
    // 0x19e9b8: 0x26730001
    ctx->pc = 0x19e9b8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x19e9bc: 0x2a630004
    ctx->pc = 0x19e9bcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), 4));
    // 0x19e9c0: 0x1460ffe2
    ctx->pc = 0x19E9C0u;
    {
        const bool branch_taken_0x19e9c0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x19e9c0) {
            ctx->pc = 0x19E94Cu;
            goto label_19e94c;
        }
    }
    ctx->pc = 0x19E9C8u;
    // 0x19e9c8: 0xdfbf0070
    ctx->pc = 0x19e9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19e9cc: 0x7bb60060
    ctx->pc = 0x19e9ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19e9d0: 0x7bb50050
    ctx->pc = 0x19e9d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19e9d4: 0x7bb40040
    ctx->pc = 0x19e9d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19e9d8: 0x7bb30030
    ctx->pc = 0x19e9d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19e9dc: 0x7bb20020
    ctx->pc = 0x19e9dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e9e0: 0x7bb10010
    ctx->pc = 0x19e9e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e9e4: 0x7bb00000
    ctx->pc = 0x19e9e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e9e8: 0x3e00008
    ctx->pc = 0x19E9E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E9ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E94Cu: goto label_19e94c;
            case 0x19E958u: goto label_19e958;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19E9F0u;
}
