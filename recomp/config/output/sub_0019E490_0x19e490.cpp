#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0019E490
// Address: 0x19e490 - 0x19e5d0
void sub_0019E490_0x19e490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x19e490u;

    // 0x19e490: 0x27bddf30
    ctx->pc = 0x19e490u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294958896));
    // 0x19e494: 0x2484ffff
    ctx->pc = 0x19e494u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x19e498: 0xffbf0090
    ctx->pc = 0x19e498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x19e49c: 0x419c3
    ctx->pc = 0x19e49cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 7));
    // 0x19e4a0: 0x7fbe0080
    ctx->pc = 0x19e4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x19e4a4: 0x7fb70070
    ctx->pc = 0x19e4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x19e4a8: 0x7fb60060
    ctx->pc = 0x19e4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x19e4ac: 0xe0b82d
    ctx->pc = 0x19e4acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e4b0: 0x7fb50050
    ctx->pc = 0x19e4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19e4b4: 0xc0b02d
    ctx->pc = 0x19e4b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e4b8: 0x7fb40040
    ctx->pc = 0x19e4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19e4bc: 0x7fb30030
    ctx->pc = 0x19e4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19e4c0: 0x7fb20020
    ctx->pc = 0x19e4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19e4c4: 0x7fb10010
    ctx->pc = 0x19e4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19e4c8: 0x4810003
    ctx->pc = 0x19E4C8u;
    {
        const bool branch_taken_0x19e4c8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x19E4CCu;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        if (branch_taken_0x19e4c8) {
            ctx->pc = 0x19E4D8u;
            goto label_19e4d8;
        }
    }
    ctx->pc = 0x19E4D0u;
    // 0x19e4d0: 0x2483007f
    ctx->pc = 0x19e4d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 127));
    // 0x19e4d4: 0x319c3
    ctx->pc = 0x19e4d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 7));
label_19e4d8:
    // 0x19e4d8: 0x24720001
    ctx->pc = 0x19e4d8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 3), 1));
    // 0x19e4dc: 0x24a4ffff
    ctx->pc = 0x19e4dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x19e4e0: 0x4810003
    ctx->pc = 0x19E4E0u;
    {
        const bool branch_taken_0x19e4e0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x19E4E4u;
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 7));
        if (branch_taken_0x19e4e0) {
            ctx->pc = 0x19E4F0u;
            goto label_19e4f0;
        }
    }
    ctx->pc = 0x19E4E8u;
    // 0x19e4e8: 0x2483007f
    ctx->pc = 0x19e4e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 127));
    // 0x19e4ec: 0x319c3
    ctx->pc = 0x19e4ecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 7));
label_19e4f0:
    // 0x19e4f0: 0x247e0001
    ctx->pc = 0x19e4f0u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 3), 1));
    // 0x19e4f4: 0xa82d
    ctx->pc = 0x19e4f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e4f8: 0x121980
    ctx->pc = 0x19e4f8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 6));
    // 0x19e4fc: 0x10000022
    ctx->pc = 0x19E4FCu;
    {
        const bool branch_taken_0x19e4fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E500u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        if (branch_taken_0x19e4fc) {
            ctx->pc = 0x19E588u;
            goto label_19e588;
        }
    }
    ctx->pc = 0x19E504u;
label_19e504:
    // 0x19e504: 0xa02d
    ctx->pc = 0x19e504u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e508: 0x2432018
    ctx->pc = 0x19e508u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x19e50c: 0x2c41821
    ctx->pc = 0x19e50cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x19e510: 0xafa300b0
    ctx->pc = 0x19e510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x19e514: 0x2e41821
    ctx->pc = 0x19e514u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x19e518: 0x10000017
    ctx->pc = 0x19E518u;
    {
        const bool branch_taken_0x19e518 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E51Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        if (branch_taken_0x19e518) {
            ctx->pc = 0x19E578u;
            goto label_19e578;
        }
    }
    ctx->pc = 0x19E520u;
label_19e520:
    // 0x19e520: 0x8fa200b0
    ctx->pc = 0x19e520u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19e524: 0x141980
    ctx->pc = 0x19e524u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 6));
    // 0x19e528: 0x27b000d0
    ctx->pc = 0x19e528u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 208));
    // 0x19e52c: 0x982d
    ctx->pc = 0x19e52cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e530: 0x438821
    ctx->pc = 0x19e530u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19e534:
    // 0x19e534: 0x200202d
    ctx->pc = 0x19e534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e538: 0x220282d
    ctx->pc = 0x19e538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e53c: 0xc041eac
    ctx->pc = 0x19E53Cu;
    SET_GPR_U32(ctx, 31, 0x19E544u);
    ctx->pc = 0x19E540u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E544u; }
    }
    if (ctx->pc != 0x19E544u) { return; }
    ctx->pc = 0x19E544u;
    // 0x19e544: 0x8fa200c0
    ctx->pc = 0x19e544u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x19e548: 0x26730001
    ctx->pc = 0x19e548u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x19e54c: 0x2228821
    ctx->pc = 0x19e54cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x19e550: 0x2a620080
    ctx->pc = 0x19e550u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 128));
    // 0x19e554: 0x1440fff7
    ctx->pc = 0x19E554u;
    {
        const bool branch_taken_0x19e554 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19E558u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 64));
        if (branch_taken_0x19e554) {
            ctx->pc = 0x19E534u;
            goto label_19e534;
        }
    }
    ctx->pc = 0x19E55Cu;
    // 0x19e55c: 0x8fa200a0
    ctx->pc = 0x19e55cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19e560: 0x141a00
    ctx->pc = 0x19e560u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 8));
    // 0x19e564: 0x27a400d0
    ctx->pc = 0x19e564u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 208));
    // 0x19e568: 0x240302d
    ctx->pc = 0x19e568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e56c: 0xc067974
    ctx->pc = 0x19E56Cu;
    SET_GPR_U32(ctx, 31, 0x19E574u);
    ctx->pc = 0x19E570u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x19E5D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E5D0_0x19e5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E574u; }
    }
    if (ctx->pc != 0x19E574u) { return; }
    ctx->pc = 0x19E574u;
    // 0x19e574: 0x26940001
    ctx->pc = 0x19e574u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_19e578:
    // 0x19e578: 0x292182a
    ctx->pc = 0x19e578u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 18)));
    // 0x19e57c: 0x1460ffe8
    ctx->pc = 0x19E57Cu;
    {
        const bool branch_taken_0x19e57c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x19e57c) {
            ctx->pc = 0x19E520u;
            goto label_19e520;
        }
    }
    ctx->pc = 0x19E584u;
    // 0x19e584: 0x26b50001
    ctx->pc = 0x19e584u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
label_19e588:
    // 0x19e588: 0x2be182a
    ctx->pc = 0x19e588u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 30)));
    // 0x19e58c: 0x1460ffdd
    ctx->pc = 0x19E58Cu;
    {
        const bool branch_taken_0x19e58c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x19E590u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 21), 13));
        if (branch_taken_0x19e58c) {
            ctx->pc = 0x19E504u;
            goto label_19e504;
        }
    }
    ctx->pc = 0x19E594u;
    // 0x19e594: 0xdfbf0090
    ctx->pc = 0x19e594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19e598: 0x7bbe0080
    ctx->pc = 0x19e598u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19e59c: 0x7bb70070
    ctx->pc = 0x19e59cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19e5a0: 0x7bb60060
    ctx->pc = 0x19e5a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19e5a4: 0x7bb50050
    ctx->pc = 0x19e5a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19e5a8: 0x7bb40040
    ctx->pc = 0x19e5a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19e5ac: 0x7bb30030
    ctx->pc = 0x19e5acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19e5b0: 0x7bb20020
    ctx->pc = 0x19e5b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e5b4: 0x7bb10010
    ctx->pc = 0x19e5b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e5b8: 0x7bb00000
    ctx->pc = 0x19e5b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e5bc: 0x3e00008
    ctx->pc = 0x19E5BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E5C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 8400));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E4D8u: goto label_19e4d8;
            case 0x19E4F0u: goto label_19e4f0;
            case 0x19E504u: goto label_19e504;
            case 0x19E520u: goto label_19e520;
            case 0x19E534u: goto label_19e534;
            case 0x19E578u: goto label_19e578;
            case 0x19E588u: goto label_19e588;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19E5C4u;
    // 0x19e5c4: 0x0
    ctx->pc = 0x19e5c4u;
    // NOP
    // 0x19e5c8: 0x0
    ctx->pc = 0x19e5c8u;
    // NOP
    // 0x19e5cc: 0x0
    ctx->pc = 0x19e5ccu;
    // NOP
}
