#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016E4B0
// Address: 0x16e4b0 - 0x16e668
void sub_0016E4B0_0x16e4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16e4b0u;

    // 0x16e4b0: 0x27bdfff0
    ctx->pc = 0x16e4b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e4b4: 0x80682d
    ctx->pc = 0x16e4b4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e4b8: 0xffbf0000
    ctx->pc = 0x16e4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e4bc: 0x8dac1b30
    ctx->pc = 0x16e4bcu;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 13), 6960)));
    // 0x16e4c0: 0x8ca70004
    ctx->pc = 0x16e4c0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x16e4c4: 0x258b0004
    ctx->pc = 0x16e4c4u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 12), 4));
    // 0x16e4c8: 0x8ca60000
    ctx->pc = 0x16e4c8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16e4cc: 0x8d620008
    ctx->pc = 0x16e4ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x16e4d0: 0x8d63000c
    ctx->pc = 0x16e4d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x16e4d4: 0xc72818
    ctx->pc = 0x16e4d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x16e4d8: 0x8dae0038
    ctx->pc = 0x16e4d8u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 13), 56)));
    // 0x16e4dc: 0x431018
    ctx->pc = 0x16e4dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x16e4e0: 0x45102a
    ctx->pc = 0x16e4e0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 5)));
    // 0x16e4e4: 0x10400006
    ctx->pc = 0x16E4E4u;
    {
        const bool branch_taken_0x16e4e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16E4E8u;
        SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 11), 28)));
        if (branch_taken_0x16e4e4) {
            ctx->pc = 0x16E500u;
            goto label_16e500;
        }
    }
    ctx->pc = 0x16E4ECu;
    // 0x16e4ec: 0x3c05ff00
    ctx->pc = 0x16e4ecu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x16e4f0: 0xdfbf0000
    ctx->pc = 0x16e4f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e4f4: 0x34a50f17
    ctx->pc = 0x16e4f4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3863));
    // 0x16e4f8: 0x805a704
    ctx->pc = 0x16E4F8u;
    ctx->pc = 0x16E4FCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x16E500u;
label_16e500:
    // 0x16e500: 0x24c5000f
    ctx->pc = 0x16e500u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 15));
    // 0x16e504: 0x28c30000
    ctx->pc = 0x16e504u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 0));
    // 0x16e508: 0x28e20000
    ctx->pc = 0x16e508u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 0));
    // 0x16e50c: 0x24e4000f
    ctx->pc = 0x16e50cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 7), 15));
    // 0x16e510: 0xa3300b
    ctx->pc = 0x16e510u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 5));
    // 0x16e514: 0x24030002
    ctx->pc = 0x16e514u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x16e518: 0x82380b
    ctx->pc = 0x16e518u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 4));
    // 0x16e51c: 0x62903
    ctx->pc = 0x16e51cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 4));
    // 0x16e520: 0x15c30005
    ctx->pc = 0x16E520u;
    {
        const bool branch_taken_0x16e520 = (GPR_U32(ctx, 14) != GPR_U32(ctx, 3));
        ctx->pc = 0x16E524u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 4));
        if (branch_taken_0x16e520) {
            ctx->pc = 0x16E538u;
            goto label_16e538;
        }
    }
    ctx->pc = 0x16E528u;
    // 0x16e528: 0xa21018
    ctx->pc = 0x16e528u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x16e52c: 0x10000006
    ctx->pc = 0x16E52Cu;
    {
        const bool branch_taken_0x16e52c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16E530u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 10));
        if (branch_taken_0x16e52c) {
            ctx->pc = 0x16E548u;
            goto label_16e548;
        }
    }
    ctx->pc = 0x16E534u;
    // 0x16e534: 0x0
    ctx->pc = 0x16e534u;
    // NOP
label_16e538:
    // 0x16e538: 0xa21818
    ctx->pc = 0x16e538u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x16e53c: 0x31040
    ctx->pc = 0x16e53cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x16e540: 0x431021
    ctx->pc = 0x16e540u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16e544: 0x211c0
    ctx->pc = 0x16e544u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 7));
label_16e548:
    // 0x16e548: 0x244a0040
    ctx->pc = 0x16e548u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 64));
    // 0x16e54c: 0x8d630014
    ctx->pc = 0x16e54cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x16e550: 0x24080002
    ctx->pc = 0x16e550u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 2));
    // 0x16e554: 0x8d620018
    ctx->pc = 0x16e554u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x16e558: 0x2467000f
    ctx->pc = 0x16e558u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 15));
    // 0x16e55c: 0x28650000
    ctx->pc = 0x16e55cu;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 3), 0));
    // 0x16e560: 0x2446000f
    ctx->pc = 0x16e560u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 15));
    // 0x16e564: 0x28440000
    ctx->pc = 0x16e564u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 0));
    // 0x16e568: 0xe5180b
    ctx->pc = 0x16e568u;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 7));
    // 0x16e56c: 0xc4100b
    ctx->pc = 0x16e56cu;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 6));
    // 0x16e570: 0x31903
    ctx->pc = 0x16e570u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x16e574: 0x15c8000a
    ctx->pc = 0x16E574u;
    {
        const bool branch_taken_0x16e574 = (GPR_U32(ctx, 14) != GPR_U32(ctx, 8));
        ctx->pc = 0x16E578u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
        if (branch_taken_0x16e574) {
            ctx->pc = 0x16E5A0u;
            goto label_16e5a0;
        }
    }
    ctx->pc = 0x16E57Cu;
    // 0x16e57c: 0x621018
    ctx->pc = 0x16e57cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x16e580: 0x21280
    ctx->pc = 0x16e580u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 10));
    // 0x16e584: 0x24420040
    ctx->pc = 0x16e584u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 64));
    // 0x16e588: 0x4a102b
    ctx->pc = 0x16e588u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x16e58c: 0x1440000c
    ctx->pc = 0x16E58Cu;
    {
        const bool branch_taken_0x16e58c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16e58c) {
            ctx->pc = 0x16E5C0u;
            goto label_16e5c0;
        }
    }
    ctx->pc = 0x16E594u;
    // 0x16e594: 0x10000010
    ctx->pc = 0x16E594u;
    {
        const bool branch_taken_0x16e594 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16E598u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 11), 32)));
        if (branch_taken_0x16e594) {
            ctx->pc = 0x16E5D8u;
            goto label_16e5d8;
        }
    }
    ctx->pc = 0x16E59Cu;
    // 0x16e59c: 0x0
    ctx->pc = 0x16e59cu;
    // NOP
label_16e5a0:
    // 0x16e5a0: 0x621818
    ctx->pc = 0x16e5a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x16e5a4: 0x31040
    ctx->pc = 0x16e5a4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x16e5a8: 0x431021
    ctx->pc = 0x16e5a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16e5ac: 0x211c0
    ctx->pc = 0x16e5acu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 7));
    // 0x16e5b0: 0x24420040
    ctx->pc = 0x16e5b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 64));
    // 0x16e5b4: 0x4a102b
    ctx->pc = 0x16e5b4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x16e5b8: 0x50400007
    ctx->pc = 0x16E5B8u;
    {
        const bool branch_taken_0x16e5b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16e5b8) {
            ctx->pc = 0x16E5BCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 11), 32)));
            ctx->pc = 0x16E5D8u;
            goto label_16e5d8;
        }
    }
    ctx->pc = 0x16E5C0u;
label_16e5c0:
    // 0x16e5c0: 0x3c05ff00
    ctx->pc = 0x16e5c0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x16e5c4: 0xdfbf0000
    ctx->pc = 0x16e5c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e5c8: 0x1a0202d
    ctx->pc = 0x16e5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e5cc: 0x34a50f18
    ctx->pc = 0x16e5ccu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3864));
    // 0x16e5d0: 0x805a704
    ctx->pc = 0x16E5D0u;
    ctx->pc = 0x16E5D4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x16E5D8u;
label_16e5d8:
    // 0x16e5d8: 0x1040000f
    ctx->pc = 0x16E5D8u;
    {
        const bool branch_taken_0x16e5d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16e5d8) {
            ctx->pc = 0x16E618u;
            goto label_16e618;
        }
    }
    ctx->pc = 0x16E5E0u;
    // 0x16e5e0: 0x19200018
    ctx->pc = 0x16E5E0u;
    {
        const bool branch_taken_0x16e5e0 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x16E5E4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16e5e0) {
            ctx->pc = 0x16E644u;
            goto label_16e644;
        }
    }
    ctx->pc = 0x16E5E8u;
    // 0x16e5e8: 0x40202d
    ctx->pc = 0x16e5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e5ec: 0x25830030
    ctx->pc = 0x16e5ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 12), 48));
label_16e5f0:
    // 0x16e5f0: 0x24a50001
    ctx->pc = 0x16e5f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x16e5f4: 0xac640000
    ctx->pc = 0x16e5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x16e5f8: 0xa9102a
    ctx->pc = 0x16e5f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 9)));
    // 0x16e5fc: 0x24630004
    ctx->pc = 0x16e5fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x16e600: 0x0
    ctx->pc = 0x16e600u;
    // NOP
    // 0x16e604: 0x1440fffa
    ctx->pc = 0x16E604u;
    {
        const bool branch_taken_0x16e604 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16E608u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
        if (branch_taken_0x16e604) {
            ctx->pc = 0x16E5F0u;
            goto label_16e5f0;
        }
    }
    ctx->pc = 0x16E60Cu;
    // 0x16e60c: 0x1000000e
    ctx->pc = 0x16E60Cu;
    {
        const bool branch_taken_0x16e60c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16E610u;
        WRITE32(ADD32(GPR_U32(ctx, 12), 312), GPR_U32(ctx, 9));
        if (branch_taken_0x16e60c) {
            ctx->pc = 0x16E648u;
            goto label_16e648;
        }
    }
    ctx->pc = 0x16E614u;
    // 0x16e614: 0x0
    ctx->pc = 0x16e614u;
    // NOP
label_16e618:
    // 0x16e618: 0x5920000b
    ctx->pc = 0x16E618u;
    {
        const bool branch_taken_0x16e618 = (GPR_S32(ctx, 9) <= 0);
        if (branch_taken_0x16e618) {
            ctx->pc = 0x16E61Cu;
            WRITE32(ADD32(GPR_U32(ctx, 12), 312), GPR_U32(ctx, 9));
            ctx->pc = 0x16E648u;
            goto label_16e648;
        }
    }
    ctx->pc = 0x16E620u;
    // 0x16e620: 0x120282d
    ctx->pc = 0x16e620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e624: 0x24a5ffff
    ctx->pc = 0x16e624u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
label_16e628:
    // 0x16e628: 0x0
    ctx->pc = 0x16e628u;
    // NOP
    // 0x16e62c: 0x0
    ctx->pc = 0x16e62cu;
    // NOP
    // 0x16e630: 0x0
    ctx->pc = 0x16e630u;
    // NOP
    // 0x16e634: 0x0
    ctx->pc = 0x16e634u;
    // NOP
    // 0x16e638: 0x0
    ctx->pc = 0x16e638u;
    // NOP
    // 0x16e63c: 0x14a0fffa
    ctx->pc = 0x16E63Cu;
    {
        const bool branch_taken_0x16e63c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x16E640u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
        if (branch_taken_0x16e63c) {
            ctx->pc = 0x16E628u;
            goto label_16e628;
        }
    }
    ctx->pc = 0x16E644u;
label_16e644:
    // 0x16e644: 0xad890138
    ctx->pc = 0x16e644u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 312), GPR_U32(ctx, 9));
label_16e648:
    // 0x16e648: 0x25850030
    ctx->pc = 0x16e648u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 12), 48));
    // 0x16e64c: 0x120302d
    ctx->pc = 0x16e64cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e650: 0xc05befc
    ctx->pc = 0x16E650u;
    SET_GPR_U32(ctx, 31, 0x16E658u);
    ctx->pc = 0x16E654u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 12), 316));
    ctx->pc = 0x16FBF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016FBF0_0x16fbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E658u; }
    }
    if (ctx->pc != 0x16E658u) { return; }
    ctx->pc = 0x16E658u;
    // 0x16e658: 0x102d
    ctx->pc = 0x16e658u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e65c: 0xdfbf0000
    ctx->pc = 0x16e65cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e660: 0x3e00008
    ctx->pc = 0x16E660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E664u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E500u: goto label_16e500;
            case 0x16E538u: goto label_16e538;
            case 0x16E548u: goto label_16e548;
            case 0x16E5A0u: goto label_16e5a0;
            case 0x16E5C0u: goto label_16e5c0;
            case 0x16E5D8u: goto label_16e5d8;
            case 0x16E5F0u: goto label_16e5f0;
            case 0x16E618u: goto label_16e618;
            case 0x16E628u: goto label_16e628;
            case 0x16E644u: goto label_16e644;
            case 0x16E648u: goto label_16e648;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16E668u;
}
