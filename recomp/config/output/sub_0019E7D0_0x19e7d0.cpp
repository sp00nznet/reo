#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0019E7D0
// Address: 0x19e7d0 - 0x19e910
void sub_0019E7D0_0x19e7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x19e7d0u;

    // 0x19e7d0: 0x27bddf30
    ctx->pc = 0x19e7d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294958896));
    // 0x19e7d4: 0x2484ffff
    ctx->pc = 0x19e7d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x19e7d8: 0xffbf0090
    ctx->pc = 0x19e7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x19e7dc: 0x419c3
    ctx->pc = 0x19e7dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 7));
    // 0x19e7e0: 0x7fbe0080
    ctx->pc = 0x19e7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x19e7e4: 0x7fb70070
    ctx->pc = 0x19e7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x19e7e8: 0x7fb60060
    ctx->pc = 0x19e7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x19e7ec: 0xe0b82d
    ctx->pc = 0x19e7ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e7f0: 0x7fb50050
    ctx->pc = 0x19e7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19e7f4: 0xc0b02d
    ctx->pc = 0x19e7f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e7f8: 0x7fb40040
    ctx->pc = 0x19e7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19e7fc: 0x7fb30030
    ctx->pc = 0x19e7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19e800: 0x7fb20020
    ctx->pc = 0x19e800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19e804: 0x7fb10010
    ctx->pc = 0x19e804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19e808: 0x4810003
    ctx->pc = 0x19E808u;
    {
        const bool branch_taken_0x19e808 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x19E80Cu;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        if (branch_taken_0x19e808) {
            ctx->pc = 0x19E818u;
            goto label_19e818;
        }
    }
    ctx->pc = 0x19E810u;
    // 0x19e810: 0x2483007f
    ctx->pc = 0x19e810u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 127));
    // 0x19e814: 0x319c3
    ctx->pc = 0x19e814u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 7));
label_19e818:
    // 0x19e818: 0x24720001
    ctx->pc = 0x19e818u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 3), 1));
    // 0x19e81c: 0x24a4ffff
    ctx->pc = 0x19e81cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x19e820: 0x4810003
    ctx->pc = 0x19E820u;
    {
        const bool branch_taken_0x19e820 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x19E824u;
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 6));
        if (branch_taken_0x19e820) {
            ctx->pc = 0x19E830u;
            goto label_19e830;
        }
    }
    ctx->pc = 0x19E828u;
    // 0x19e828: 0x2483003f
    ctx->pc = 0x19e828u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 63));
    // 0x19e82c: 0x31983
    ctx->pc = 0x19e82cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_19e830:
    // 0x19e830: 0x247e0001
    ctx->pc = 0x19e830u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 3), 1));
    // 0x19e834: 0xa82d
    ctx->pc = 0x19e834u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e838: 0x1219c0
    ctx->pc = 0x19e838u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 7));
    // 0x19e83c: 0x10000022
    ctx->pc = 0x19E83Cu;
    {
        const bool branch_taken_0x19e83c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E840u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        if (branch_taken_0x19e83c) {
            ctx->pc = 0x19E8C8u;
            goto label_19e8c8;
        }
    }
    ctx->pc = 0x19E844u;
label_19e844:
    // 0x19e844: 0xa02d
    ctx->pc = 0x19e844u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e848: 0x2432018
    ctx->pc = 0x19e848u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x19e84c: 0x2c41821
    ctx->pc = 0x19e84cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x19e850: 0xafa300b0
    ctx->pc = 0x19e850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x19e854: 0x2e41821
    ctx->pc = 0x19e854u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x19e858: 0x10000017
    ctx->pc = 0x19E858u;
    {
        const bool branch_taken_0x19e858 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E85Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        if (branch_taken_0x19e858) {
            ctx->pc = 0x19E8B8u;
            goto label_19e8b8;
        }
    }
    ctx->pc = 0x19E860u;
label_19e860:
    // 0x19e860: 0x8fa200b0
    ctx->pc = 0x19e860u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19e864: 0x1419c0
    ctx->pc = 0x19e864u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 7));
    // 0x19e868: 0x27b000d0
    ctx->pc = 0x19e868u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 208));
    // 0x19e86c: 0x982d
    ctx->pc = 0x19e86cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e870: 0x438821
    ctx->pc = 0x19e870u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19e874:
    // 0x19e874: 0x200202d
    ctx->pc = 0x19e874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e878: 0x220282d
    ctx->pc = 0x19e878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e87c: 0xc041eac
    ctx->pc = 0x19E87Cu;
    SET_GPR_U32(ctx, 31, 0x19E884u);
    ctx->pc = 0x19E880u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 128));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E884u; }
    }
    if (ctx->pc != 0x19E884u) { return; }
    ctx->pc = 0x19E884u;
    // 0x19e884: 0x8fa200c0
    ctx->pc = 0x19e884u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x19e888: 0x26730001
    ctx->pc = 0x19e888u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x19e88c: 0x2228821
    ctx->pc = 0x19e88cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x19e890: 0x2a620040
    ctx->pc = 0x19e890u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 64));
    // 0x19e894: 0x1440fff7
    ctx->pc = 0x19E894u;
    {
        const bool branch_taken_0x19e894 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19E898u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 128));
        if (branch_taken_0x19e894) {
            ctx->pc = 0x19E874u;
            goto label_19e874;
        }
    }
    ctx->pc = 0x19E89Cu;
    // 0x19e89c: 0x8fa200a0
    ctx->pc = 0x19e89cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19e8a0: 0x141a00
    ctx->pc = 0x19e8a0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 8));
    // 0x19e8a4: 0x27a400d0
    ctx->pc = 0x19e8a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 208));
    // 0x19e8a8: 0x240302d
    ctx->pc = 0x19e8a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e8ac: 0xc067a44
    ctx->pc = 0x19E8ACu;
    SET_GPR_U32(ctx, 31, 0x19E8B4u);
    ctx->pc = 0x19E8B0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x19E910u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E910_0x19e910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E8B4u; }
    }
    if (ctx->pc != 0x19E8B4u) { return; }
    ctx->pc = 0x19E8B4u;
    // 0x19e8b4: 0x26940001
    ctx->pc = 0x19e8b4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_19e8b8:
    // 0x19e8b8: 0x292182a
    ctx->pc = 0x19e8b8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 18)));
    // 0x19e8bc: 0x1460ffe8
    ctx->pc = 0x19E8BCu;
    {
        const bool branch_taken_0x19e8bc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x19e8bc) {
            ctx->pc = 0x19E860u;
            goto label_19e860;
        }
    }
    ctx->pc = 0x19E8C4u;
    // 0x19e8c4: 0x26b50001
    ctx->pc = 0x19e8c4u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
label_19e8c8:
    // 0x19e8c8: 0x2be182a
    ctx->pc = 0x19e8c8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 30)));
    // 0x19e8cc: 0x1460ffdd
    ctx->pc = 0x19E8CCu;
    {
        const bool branch_taken_0x19e8cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x19E8D0u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 21), 13));
        if (branch_taken_0x19e8cc) {
            ctx->pc = 0x19E844u;
            goto label_19e844;
        }
    }
    ctx->pc = 0x19E8D4u;
    // 0x19e8d4: 0xdfbf0090
    ctx->pc = 0x19e8d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19e8d8: 0x7bbe0080
    ctx->pc = 0x19e8d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19e8dc: 0x7bb70070
    ctx->pc = 0x19e8dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19e8e0: 0x7bb60060
    ctx->pc = 0x19e8e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19e8e4: 0x7bb50050
    ctx->pc = 0x19e8e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19e8e8: 0x7bb40040
    ctx->pc = 0x19e8e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19e8ec: 0x7bb30030
    ctx->pc = 0x19e8ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19e8f0: 0x7bb20020
    ctx->pc = 0x19e8f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e8f4: 0x7bb10010
    ctx->pc = 0x19e8f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e8f8: 0x7bb00000
    ctx->pc = 0x19e8f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e8fc: 0x3e00008
    ctx->pc = 0x19E8FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E900u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 8400));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E818u: goto label_19e818;
            case 0x19E830u: goto label_19e830;
            case 0x19E844u: goto label_19e844;
            case 0x19E860u: goto label_19e860;
            case 0x19E874u: goto label_19e874;
            case 0x19E8B8u: goto label_19e8b8;
            case 0x19E8C8u: goto label_19e8c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19E904u;
    // 0x19e904: 0x0
    ctx->pc = 0x19e904u;
    // NOP
    // 0x19e908: 0x0
    ctx->pc = 0x19e908u;
    // NOP
    // 0x19e90c: 0x0
    ctx->pc = 0x19e90cu;
    // NOP
}
