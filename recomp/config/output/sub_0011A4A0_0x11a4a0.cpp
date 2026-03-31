#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011A4A0
// Address: 0x11a4a0 - 0x11ad80
void sub_0011A4A0_0x11a4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11a4a0u;

    // 0x11a4a0: 0x27bdff70
    ctx->pc = 0x11a4a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x11a4a4: 0xffb10050
    ctx->pc = 0x11a4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x11a4a8: 0xffb30070
    ctx->pc = 0x11a4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x11a4ac: 0xa0882d
    ctx->pc = 0x11a4acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a4b0: 0xffb20060
    ctx->pc = 0x11a4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x11a4b4: 0x3c130026
    ctx->pc = 0x11a4b4u;
    SET_GPR_U32(ctx, 19, ((uint32_t)38 << 16));
    // 0x11a4b8: 0xffb00040
    ctx->pc = 0x11a4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x11a4bc: 0xffbf0080
    ctx->pc = 0x11a4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x11a4c0: 0xc04607e
    ctx->pc = 0x11A4C0u;
    SET_GPR_U32(ctx, 31, 0x11A4C8u);
    ctx->pc = 0x11A4C4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 19), 4294953536));
    ctx->pc = 0x1181F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001181F8_0x1181f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A4C8u; }
    }
    if (ctx->pc != 0x11A4C8u) { return; }
    ctx->pc = 0x11A4C8u;
    // 0x11a4c8: 0x40802d
    ctx->pc = 0x11a4c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a4cc: 0xc04619c
    ctx->pc = 0x11A4CCu;
    SET_GPR_U32(ctx, 31, 0x11A4D4u);
    ctx->pc = 0x11A4D0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 11));
    ctx->pc = 0x118670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118670_0x118670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A4D4u; }
    }
    if (ctx->pc != 0x11A4D4u) { return; }
    ctx->pc = 0x11A4D4u;
    // 0x11a4d4: 0x3c020021
    ctx->pc = 0x11a4d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x11a4d8: 0x8c439ddc
    ctx->pc = 0x11a4d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294942172)));
    // 0x11a4dc: 0x14600005
    ctx->pc = 0x11A4DCu;
    {
        const bool branch_taken_0x11a4dc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x11a4dc) {
            ctx->pc = 0x11A4F4u;
            goto label_11a4f4;
        }
    }
    ctx->pc = 0x11A4E4u;
    // 0x11a4e4: 0xc0461a8
    ctx->pc = 0x11A4E4u;
    SET_GPR_U32(ctx, 31, 0x11A4ECu);
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A4ECu; }
    }
    if (ctx->pc != 0x11A4ECu) { return; }
    ctx->pc = 0x11A4ECu;
    // 0x11a4ec: 0x1000003b
    ctx->pc = 0x11A4ECu;
    {
        const bool branch_taken_0x11a4ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11A4F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x11a4ec) {
            ctx->pc = 0x11A5DCu;
            goto label_11a5dc;
        }
    }
    ctx->pc = 0x11A4F4u;
label_11a4f4:
    // 0x11a4f4: 0x12000004
    ctx->pc = 0x11A4F4u;
    {
        const bool branch_taken_0x11a4f4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x11a4f4) {
            ctx->pc = 0x11A508u;
            goto label_11a508;
        }
    }
    ctx->pc = 0x11A4FCu;
    // 0x11a4fc: 0x8e020004
    ctx->pc = 0x11a4fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11a500: 0x54400005
    ctx->pc = 0x11A500u;
    {
        const bool branch_taken_0x11a500 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11a500) {
            ctx->pc = 0x11A504u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x11A518u;
            goto label_11a518;
        }
    }
    ctx->pc = 0x11A508u;
label_11a508:
    // 0x11a508: 0xc0461a8
    ctx->pc = 0x11A508u;
    SET_GPR_U32(ctx, 31, 0x11A510u);
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A510u; }
    }
    if (ctx->pc != 0x11A510u) { return; }
    ctx->pc = 0x11A510u;
    // 0x11a510: 0x10000032
    ctx->pc = 0x11A510u;
    {
        const bool branch_taken_0x11a510 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11A514u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967287));
        if (branch_taken_0x11a510) {
            ctx->pc = 0x11A5DCu;
            goto label_11a5dc;
        }
    }
    ctx->pc = 0x11A518u;
label_11a518:
    // 0x11a518: 0x24030001
    ctx->pc = 0x11a518u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a51c: 0xae510010
    ctx->pc = 0x11a51cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
    // 0x11a520: 0x27a40010
    ctx->pc = 0x11a520u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x11a524: 0xae42000c
    ctx->pc = 0x11a524u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x11a528: 0xafa30014
    ctx->pc = 0x11a528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x11a52c: 0xafa00018
    ctx->pc = 0x11a52cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x11a530: 0xc045188
    ctx->pc = 0x11A530u;
    SET_GPR_U32(ctx, 31, 0x11A538u);
    ctx->pc = 0x11A534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->pc = 0x114620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114620_0x114620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A538u; }
    }
    if (ctx->pc != 0x11A538u) { return; }
    ctx->pc = 0x11A538u;
    // 0x11a538: 0x40882d
    ctx->pc = 0x11a538u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a53c: 0x27a30030
    ctx->pc = 0x11a53cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 48));
    // 0x11a540: 0x3c020026
    ctx->pc = 0x11a540u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x11a544: 0xae71ca40
    ctx->pc = 0x11a544u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294953536), GPR_U32(ctx, 17));
    // 0x11a548: 0x2450d680
    ctx->pc = 0x11a548u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x11a54c: 0x3c040026
    ctx->pc = 0x11a54cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x11a550: 0x24020004
    ctx->pc = 0x11a550u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x11a554: 0xae430004
    ctx->pc = 0x11a554u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x11a558: 0xae420008
    ctx->pc = 0x11a558u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x11a55c: 0x2484e140
    ctx->pc = 0x11a55cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959424));
    // 0x11a560: 0x240382d
    ctx->pc = 0x11a560u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a564: 0x2405000b
    ctx->pc = 0x11a564u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 11));
    // 0x11a568: 0xafa00000
    ctx->pc = 0x11a568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11a56c: 0x302d
    ctx->pc = 0x11a56cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a570: 0x24080020
    ctx->pc = 0x11a570u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
    // 0x11a574: 0x200482d
    ctx->pc = 0x11a574u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a578: 0x240a0004
    ctx->pc = 0x11a578u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4));
    // 0x11a57c: 0xc045e7a
    ctx->pc = 0x11A57Cu;
    SET_GPR_U32(ctx, 31, 0x11A584u);
    ctx->pc = 0x11A580u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A584u; }
    }
    if (ctx->pc != 0x11A584u) { return; }
    ctx->pc = 0x11A584u;
    // 0x11a584: 0x4410007
    ctx->pc = 0x11A584u;
    {
        const bool branch_taken_0x11a584 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11A588u;
        SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
        if (branch_taken_0x11a584) {
            ctx->pc = 0x11A5A4u;
            goto label_11a5a4;
        }
    }
    ctx->pc = 0x11A58Cu;
    // 0x11a58c: 0xc045198
    ctx->pc = 0x11A58Cu;
    SET_GPR_U32(ctx, 31, 0x11A594u);
    ctx->pc = 0x11A590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A594u; }
    }
    if (ctx->pc != 0x11A594u) { return; }
    ctx->pc = 0x11A594u;
    // 0x11a594: 0xc0461a8
    ctx->pc = 0x11A594u;
    SET_GPR_U32(ctx, 31, 0x11A59Cu);
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A59Cu; }
    }
    if (ctx->pc != 0x11A59Cu) { return; }
    ctx->pc = 0x11A59Cu;
    // 0x11a59c: 0x1000000f
    ctx->pc = 0x11A59Cu;
    {
        const bool branch_taken_0x11a59c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11A5A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967285));
        if (branch_taken_0x11a59c) {
            ctx->pc = 0x11A5DCu;
            goto label_11a5dc;
        }
    }
    ctx->pc = 0x11A5A4u;
label_11a5a4:
    // 0x11a5a4: 0x2021025
    ctx->pc = 0x11a5a4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x11a5a8: 0xc0461a8
    ctx->pc = 0x11A5A8u;
    SET_GPR_U32(ctx, 31, 0x11A5B0u);
    ctx->pc = 0x11A5ACu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A5B0u; }
    }
    if (ctx->pc != 0x11A5B0u) { return; }
    ctx->pc = 0x11A5B0u;
    // 0x11a5b0: 0x16000005
    ctx->pc = 0x11A5B0u;
    {
        const bool branch_taken_0x11a5b0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x11a5b0) {
            ctx->pc = 0x11A5C8u;
            goto label_11a5c8;
        }
    }
    ctx->pc = 0x11A5B8u;
    // 0x11a5b8: 0xc04518c
    ctx->pc = 0x11A5B8u;
    SET_GPR_U32(ctx, 31, 0x11A5C0u);
    ctx->pc = 0x11A5BCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A5C0u; }
    }
    if (ctx->pc != 0x11A5C0u) { return; }
    ctx->pc = 0x11A5C0u;
    // 0x11a5c0: 0x10000006
    ctx->pc = 0x11A5C0u;
    {
        const bool branch_taken_0x11a5c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11A5C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967285));
        if (branch_taken_0x11a5c0) {
            ctx->pc = 0x11A5DCu;
            goto label_11a5dc;
        }
    }
    ctx->pc = 0x11A5C8u;
label_11a5c8:
    // 0x11a5c8: 0xc045198
    ctx->pc = 0x11A5C8u;
    SET_GPR_U32(ctx, 31, 0x11A5D0u);
    ctx->pc = 0x11A5CCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A5D0u; }
    }
    if (ctx->pc != 0x11A5D0u) { return; }
    ctx->pc = 0x11A5D0u;
    // 0x11a5d0: 0xc04518c
    ctx->pc = 0x11A5D0u;
    SET_GPR_U32(ctx, 31, 0x11A5D8u);
    ctx->pc = 0x11A5D4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A5D8u; }
    }
    if (ctx->pc != 0x11A5D8u) { return; }
    ctx->pc = 0x11A5D8u;
    // 0x11a5d8: 0x8fa20030
    ctx->pc = 0x11a5d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11a5dc:
    // 0x11a5dc: 0xdfbf0080
    ctx->pc = 0x11a5dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11a5e0: 0xdfb30070
    ctx->pc = 0x11a5e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11a5e4: 0xdfb20060
    ctx->pc = 0x11a5e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11a5e8: 0xdfb10050
    ctx->pc = 0x11a5e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11a5ec: 0xdfb00040
    ctx->pc = 0x11a5ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11a5f0: 0x3e00008
    ctx->pc = 0x11A5F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A5F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11A4F4u: goto label_11a4f4;
            case 0x11A508u: goto label_11a508;
            case 0x11A518u: goto label_11a518;
            case 0x11A5A4u: goto label_11a5a4;
            case 0x11A5C8u: goto label_11a5c8;
            case 0x11A5DCu: goto label_11a5dc;
            case 0x11A654u: goto label_11a654;
            case 0x11A670u: goto label_11a670;
            case 0x11A698u: goto label_11a698;
            case 0x11A6A4u: goto label_11a6a4;
            case 0x11A6A8u: goto label_11a6a8;
            case 0x11A6BCu: goto label_11a6bc;
            case 0x11A734u: goto label_11a734;
            case 0x11A758u: goto label_11a758;
            case 0x11A76Cu: goto label_11a76c;
            case 0x11A7FCu: goto label_11a7fc;
            case 0x11A818u: goto label_11a818;
            case 0x11A840u: goto label_11a840;
            case 0x11A84Cu: goto label_11a84c;
            case 0x11A850u: goto label_11a850;
            case 0x11A860u: goto label_11a860;
            case 0x11A96Cu: goto label_11a96c;
            case 0x11A990u: goto label_11a990;
            case 0x11A9A4u: goto label_11a9a4;
            case 0x11AA30u: goto label_11aa30;
            case 0x11AA50u: goto label_11aa50;
            case 0x11AA7Cu: goto label_11aa7c;
            case 0x11AA88u: goto label_11aa88;
            case 0x11AA8Cu: goto label_11aa8c;
            case 0x11AA94u: goto label_11aa94;
            case 0x11AAB0u: goto label_11aab0;
            case 0x11AAD4u: goto label_11aad4;
            case 0x11AAE0u: goto label_11aae0;
            case 0x11AB68u: goto label_11ab68;
            case 0x11AB8Cu: goto label_11ab8c;
            case 0x11ABA0u: goto label_11aba0;
            case 0x11AC40u: goto label_11ac40;
            case 0x11AC60u: goto label_11ac60;
            case 0x11AC8Cu: goto label_11ac8c;
            case 0x11AC98u: goto label_11ac98;
            case 0x11AC9Cu: goto label_11ac9c;
            case 0x11ACA4u: goto label_11aca4;
            case 0x11AD20u: goto label_11ad20;
            case 0x11AD44u: goto label_11ad44;
            case 0x11AD58u: goto label_11ad58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11A5F8u;
    // 0x11a5f8: 0x27bdff30
    ctx->pc = 0x11a5f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x11a5fc: 0xffb10050
    ctx->pc = 0x11a5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x11a600: 0xffb600a0
    ctx->pc = 0x11a600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x11a604: 0x80882d
    ctx->pc = 0x11a604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a608: 0xffb700b0
    ctx->pc = 0x11a608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x11a60c: 0xa0b02d
    ctx->pc = 0x11a60cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a610: 0xffb20060
    ctx->pc = 0x11a610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x11a614: 0x2404000c
    ctx->pc = 0x11a614u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
    // 0x11a618: 0xffbf00c0
    ctx->pc = 0x11a618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x11a61c: 0x3c170026
    ctx->pc = 0x11a61cu;
    SET_GPR_U32(ctx, 23, ((uint32_t)38 << 16));
    // 0x11a620: 0xffb50090
    ctx->pc = 0x11a620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x11a624: 0x26f2ca40
    ctx->pc = 0x11a624u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 23), 4294953536));
    // 0x11a628: 0xffb40080
    ctx->pc = 0x11a628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x11a62c: 0xffb30070
    ctx->pc = 0x11a62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x11a630: 0xc04619c
    ctx->pc = 0x11A630u;
    SET_GPR_U32(ctx, 31, 0x11A638u);
    ctx->pc = 0x11A634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->pc = 0x118670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118670_0x118670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A638u; }
    }
    if (ctx->pc != 0x11A638u) { return; }
    ctx->pc = 0x11A638u;
    // 0x11a638: 0x3c020021
    ctx->pc = 0x11a638u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x11a63c: 0x8c439ddc
    ctx->pc = 0x11a63cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294942172)));
    // 0x11a640: 0x54600004
    ctx->pc = 0x11A640u;
    {
        const bool branch_taken_0x11a640 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x11a640) {
            ctx->pc = 0x11A644u;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x11A654u;
            goto label_11a654;
        }
    }
    ctx->pc = 0x11A648u;
    // 0x11a648: 0xc0461e8
    ctx->pc = 0x11A648u;
    SET_GPR_U32(ctx, 31, 0x11A650u);
    ctx->pc = 0x1187A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001187A0_0x1187a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A650u; }
    }
    if (ctx->pc != 0x11A650u) { return; }
    ctx->pc = 0x11A650u;
    // 0x11a650: 0x92220000
    ctx->pc = 0x11a650u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_11a654:
    // 0x11a654: 0x802d
    ctx->pc = 0x11a654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a658: 0x40182d
    ctx->pc = 0x11a658u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a65c: 0x1060000e
    ctx->pc = 0x11A65Cu;
    {
        const bool branch_taken_0x11a65c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x11A660u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x11a65c) {
            ctx->pc = 0x11A698u;
            goto label_11a698;
        }
    }
    ctx->pc = 0x11A664u;
    // 0x11a664: 0x27b30030
    ctx->pc = 0x11a664u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 48));
    // 0x11a668: 0x3c150026
    ctx->pc = 0x11a668u;
    SET_GPR_U32(ctx, 21, ((uint32_t)38 << 16));
    // 0x11a66c: 0x3c140026
    ctx->pc = 0x11a66cu;
    SET_GPR_U32(ctx, 20, ((uint32_t)38 << 16));
label_11a670:
    // 0x11a670: 0x26100001
    ctx->pc = 0x11a670u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x11a674: 0x2a020400
    ctx->pc = 0x11a674u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 1024));
    // 0x11a678: 0x1040000a
    ctx->pc = 0x11A678u;
    {
        const bool branch_taken_0x11a678 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11A67Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        if (branch_taken_0x11a678) {
            ctx->pc = 0x11A6A4u;
            goto label_11a6a4;
        }
    }
    ctx->pc = 0x11A680u;
    // 0x11a680: 0x2502021
    ctx->pc = 0x11a680u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x11a684: 0x90430000
    ctx->pc = 0x11a684u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11a688: 0x1460fff9
    ctx->pc = 0x11A688u;
    {
        const bool branch_taken_0x11a688 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x11A68Cu;
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x11a688) {
            ctx->pc = 0x11A670u;
            goto label_11a670;
        }
    }
    ctx->pc = 0x11A690u;
    // 0x11a690: 0x10000005
    ctx->pc = 0x11A690u;
    {
        const bool branch_taken_0x11a690 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11A694u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1024));
        if (branch_taken_0x11a690) {
            ctx->pc = 0x11A6A8u;
            goto label_11a6a8;
        }
    }
    ctx->pc = 0x11A698u;
label_11a698:
    // 0x11a698: 0x27b30030
    ctx->pc = 0x11a698u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 48));
    // 0x11a69c: 0x3c150026
    ctx->pc = 0x11a69cu;
    SET_GPR_U32(ctx, 21, ((uint32_t)38 << 16));
    // 0x11a6a0: 0x3c140026
    ctx->pc = 0x11a6a0u;
    SET_GPR_U32(ctx, 20, ((uint32_t)38 << 16));
label_11a6a4:
    // 0x11a6a4: 0x24020400
    ctx->pc = 0x11a6a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1024));
label_11a6a8:
    // 0x11a6a8: 0x56020004
    ctx->pc = 0x11A6A8u;
    {
        const bool branch_taken_0x11a6a8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        if (branch_taken_0x11a6a8) {
            ctx->pc = 0x11A6ACu;
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
            ctx->pc = 0x11A6BCu;
            goto label_11a6bc;
        }
    }
    ctx->pc = 0x11A6B0u;
    // 0x11a6b0: 0xa240040f
    ctx->pc = 0x11a6b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1039), (uint8_t)GPR_U32(ctx, 0));
    // 0x11a6b4: 0x241003ff
    ctx->pc = 0x11a6b4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1023));
    // 0x11a6b8: 0xae56000c
    ctx->pc = 0x11a6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
label_11a6bc:
    // 0x11a6bc: 0x24020001
    ctx->pc = 0x11a6bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a6c0: 0xafa20014
    ctx->pc = 0x11a6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x11a6c4: 0x27a40010
    ctx->pc = 0x11a6c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x11a6c8: 0xafa00018
    ctx->pc = 0x11a6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x11a6cc: 0x2694d680
    ctx->pc = 0x11a6ccu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294956672));
    // 0x11a6d0: 0xc045188
    ctx->pc = 0x11A6D0u;
    SET_GPR_U32(ctx, 31, 0x11A6D8u);
    ctx->pc = 0x11A6D4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->pc = 0x114620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114620_0x114620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A6D8u; }
    }
    if (ctx->pc != 0x11A6D8u) { return; }
    ctx->pc = 0x11A6D8u;
    // 0x11a6d8: 0x40882d
    ctx->pc = 0x11a6d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a6dc: 0xae530004
    ctx->pc = 0x11a6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x11a6e0: 0x24020004
    ctx->pc = 0x11a6e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x11a6e4: 0xae510000
    ctx->pc = 0x11a6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x11a6e8: 0xae420008
    ctx->pc = 0x11a6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x11a6ec: 0x26a4e140
    ctx->pc = 0x11a6ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 4294959424));
    // 0x11a6f0: 0x26e7ca40
    ctx->pc = 0x11a6f0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 23), 4294953536));
    // 0x11a6f4: 0x26080011
    ctx->pc = 0x11a6f4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 17));
    // 0x11a6f8: 0xafa00000
    ctx->pc = 0x11a6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11a6fc: 0x2405000c
    ctx->pc = 0x11a6fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 12));
    // 0x11a700: 0x302d
    ctx->pc = 0x11a700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a704: 0x280482d
    ctx->pc = 0x11a704u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a708: 0x240a0004
    ctx->pc = 0x11a708u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4));
    // 0x11a70c: 0xc045e7a
    ctx->pc = 0x11A70Cu;
    SET_GPR_U32(ctx, 31, 0x11A714u);
    ctx->pc = 0x11A710u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A714u; }
    }
    if (ctx->pc != 0x11A714u) { return; }
    ctx->pc = 0x11A714u;
    // 0x11a714: 0x4410007
    ctx->pc = 0x11A714u;
    {
        const bool branch_taken_0x11a714 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11A718u;
        SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
        if (branch_taken_0x11a714) {
            ctx->pc = 0x11A734u;
            goto label_11a734;
        }
    }
    ctx->pc = 0x11A71Cu;
    // 0x11a71c: 0xc04518c
    ctx->pc = 0x11A71Cu;
    SET_GPR_U32(ctx, 31, 0x11A724u);
    ctx->pc = 0x11A720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A724u; }
    }
    if (ctx->pc != 0x11A724u) { return; }
    ctx->pc = 0x11A724u;
    // 0x11a724: 0xc0461a8
    ctx->pc = 0x11A724u;
    SET_GPR_U32(ctx, 31, 0x11A72Cu);
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A72Cu; }
    }
    if (ctx->pc != 0x11A72Cu) { return; }
    ctx->pc = 0x11A72Cu;
    // 0x11a72c: 0x1000000f
    ctx->pc = 0x11A72Cu;
    {
        const bool branch_taken_0x11a72c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11A730u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967285));
        if (branch_taken_0x11a72c) {
            ctx->pc = 0x11A76Cu;
            goto label_11a76c;
        }
    }
    ctx->pc = 0x11A734u;
label_11a734:
    // 0x11a734: 0x2821025
    ctx->pc = 0x11a734u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x11a738: 0xc0461a8
    ctx->pc = 0x11A738u;
    SET_GPR_U32(ctx, 31, 0x11A740u);
    ctx->pc = 0x11A73Cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A740u; }
    }
    if (ctx->pc != 0x11A740u) { return; }
    ctx->pc = 0x11A740u;
    // 0x11a740: 0x16000005
    ctx->pc = 0x11A740u;
    {
        const bool branch_taken_0x11a740 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x11a740) {
            ctx->pc = 0x11A758u;
            goto label_11a758;
        }
    }
    ctx->pc = 0x11A748u;
    // 0x11a748: 0xc04518c
    ctx->pc = 0x11A748u;
    SET_GPR_U32(ctx, 31, 0x11A750u);
    ctx->pc = 0x11A74Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A750u; }
    }
    if (ctx->pc != 0x11A750u) { return; }
    ctx->pc = 0x11A750u;
    // 0x11a750: 0x10000006
    ctx->pc = 0x11A750u;
    {
        const bool branch_taken_0x11a750 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11A754u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967285));
        if (branch_taken_0x11a750) {
            ctx->pc = 0x11A76Cu;
            goto label_11a76c;
        }
    }
    ctx->pc = 0x11A758u;
label_11a758:
    // 0x11a758: 0xc045198
    ctx->pc = 0x11A758u;
    SET_GPR_U32(ctx, 31, 0x11A760u);
    ctx->pc = 0x11A75Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A760u; }
    }
    if (ctx->pc != 0x11A760u) { return; }
    ctx->pc = 0x11A760u;
    // 0x11a760: 0xc04518c
    ctx->pc = 0x11A760u;
    SET_GPR_U32(ctx, 31, 0x11A768u);
    ctx->pc = 0x11A764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A768u; }
    }
    if (ctx->pc != 0x11A768u) { return; }
    ctx->pc = 0x11A768u;
    // 0x11a768: 0x8fa20030
    ctx->pc = 0x11a768u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11a76c:
    // 0x11a76c: 0xdfbf00c0
    ctx->pc = 0x11a76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x11a770: 0xdfb700b0
    ctx->pc = 0x11a770u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11a774: 0xdfb600a0
    ctx->pc = 0x11a774u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11a778: 0xdfb50090
    ctx->pc = 0x11a778u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11a77c: 0xdfb40080
    ctx->pc = 0x11a77cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11a780: 0xdfb30070
    ctx->pc = 0x11a780u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11a784: 0xdfb20060
    ctx->pc = 0x11a784u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11a788: 0xdfb10050
    ctx->pc = 0x11a788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11a78c: 0xdfb00040
    ctx->pc = 0x11a78cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11a790: 0x3e00008
    ctx->pc = 0x11A790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A794u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11A4F4u: goto label_11a4f4;
            case 0x11A508u: goto label_11a508;
            case 0x11A518u: goto label_11a518;
            case 0x11A5A4u: goto label_11a5a4;
            case 0x11A5C8u: goto label_11a5c8;
            case 0x11A5DCu: goto label_11a5dc;
            case 0x11A654u: goto label_11a654;
            case 0x11A670u: goto label_11a670;
            case 0x11A698u: goto label_11a698;
            case 0x11A6A4u: goto label_11a6a4;
            case 0x11A6A8u: goto label_11a6a8;
            case 0x11A6BCu: goto label_11a6bc;
            case 0x11A734u: goto label_11a734;
            case 0x11A758u: goto label_11a758;
            case 0x11A76Cu: goto label_11a76c;
            case 0x11A7FCu: goto label_11a7fc;
            case 0x11A818u: goto label_11a818;
            case 0x11A840u: goto label_11a840;
            case 0x11A84Cu: goto label_11a84c;
            case 0x11A850u: goto label_11a850;
            case 0x11A860u: goto label_11a860;
            case 0x11A96Cu: goto label_11a96c;
            case 0x11A990u: goto label_11a990;
            case 0x11A9A4u: goto label_11a9a4;
            case 0x11AA30u: goto label_11aa30;
            case 0x11AA50u: goto label_11aa50;
            case 0x11AA7Cu: goto label_11aa7c;
            case 0x11AA88u: goto label_11aa88;
            case 0x11AA8Cu: goto label_11aa8c;
            case 0x11AA94u: goto label_11aa94;
            case 0x11AAB0u: goto label_11aab0;
            case 0x11AAD4u: goto label_11aad4;
            case 0x11AAE0u: goto label_11aae0;
            case 0x11AB68u: goto label_11ab68;
            case 0x11AB8Cu: goto label_11ab8c;
            case 0x11ABA0u: goto label_11aba0;
            case 0x11AC40u: goto label_11ac40;
            case 0x11AC60u: goto label_11ac60;
            case 0x11AC8Cu: goto label_11ac8c;
            case 0x11AC98u: goto label_11ac98;
            case 0x11AC9Cu: goto label_11ac9c;
            case 0x11ACA4u: goto label_11aca4;
            case 0x11AD20u: goto label_11ad20;
            case 0x11AD44u: goto label_11ad44;
            case 0x11AD58u: goto label_11ad58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11A798u;
    // 0x11a798: 0x27bdff20
    ctx->pc = 0x11a798u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x11a79c: 0xffb20060
    ctx->pc = 0x11a79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x11a7a0: 0xffb700b0
    ctx->pc = 0x11a7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x11a7a4: 0x80902d
    ctx->pc = 0x11a7a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7a8: 0xffb00040
    ctx->pc = 0x11a7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x11a7ac: 0xc0b82d
    ctx->pc = 0x11a7acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7b0: 0xffbe00c0
    ctx->pc = 0x11a7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x11a7b4: 0xa0802d
    ctx->pc = 0x11a7b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7b8: 0xffb30070
    ctx->pc = 0x11a7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x11a7bc: 0x2404000d
    ctx->pc = 0x11a7bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 13));
    // 0x11a7c0: 0xffbf00d0
    ctx->pc = 0x11a7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x11a7c4: 0x3c1e0026
    ctx->pc = 0x11a7c4u;
    SET_GPR_U32(ctx, 30, ((uint32_t)38 << 16));
    // 0x11a7c8: 0xffb600a0
    ctx->pc = 0x11a7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x11a7cc: 0x27d3ca40
    ctx->pc = 0x11a7ccu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 30), 4294953536));
    // 0x11a7d0: 0xffb50090
    ctx->pc = 0x11a7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x11a7d4: 0xffb40080
    ctx->pc = 0x11a7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x11a7d8: 0xc04619c
    ctx->pc = 0x11A7D8u;
    SET_GPR_U32(ctx, 31, 0x11A7E0u);
    ctx->pc = 0x11A7DCu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    ctx->pc = 0x118670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118670_0x118670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A7E0u; }
    }
    if (ctx->pc != 0x11A7E0u) { return; }
    ctx->pc = 0x11A7E0u;
    // 0x11a7e0: 0x3c030021
    ctx->pc = 0x11a7e0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x11a7e4: 0x8c629ddc
    ctx->pc = 0x11a7e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294942172)));
    // 0x11a7e8: 0x54400004
    ctx->pc = 0x11A7E8u;
    {
        const bool branch_taken_0x11a7e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11a7e8) {
            ctx->pc = 0x11A7ECu;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x11A7FCu;
            goto label_11a7fc;
        }
    }
    ctx->pc = 0x11A7F0u;
    // 0x11a7f0: 0xc0461e8
    ctx->pc = 0x11A7F0u;
    SET_GPR_U32(ctx, 31, 0x11A7F8u);
    ctx->pc = 0x1187A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001187A0_0x1187a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A7F8u; }
    }
    if (ctx->pc != 0x11A7F8u) { return; }
    ctx->pc = 0x11A7F8u;
    // 0x11a7f8: 0x92420000
    ctx->pc = 0x11a7f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_11a7fc:
    // 0x11a7fc: 0x882d
    ctx->pc = 0x11a7fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a800: 0x40182d
    ctx->pc = 0x11a800u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a804: 0x1060000e
    ctx->pc = 0x11A804u;
    {
        const bool branch_taken_0x11a804 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x11A808u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 80), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x11a804) {
            ctx->pc = 0x11A840u;
            goto label_11a840;
        }
    }
    ctx->pc = 0x11A80Cu;
    // 0x11a80c: 0x27b40030
    ctx->pc = 0x11a80cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 29), 48));
    // 0x11a810: 0x3c160026
    ctx->pc = 0x11a810u;
    SET_GPR_U32(ctx, 22, ((uint32_t)38 << 16));
    // 0x11a814: 0x3c150026
    ctx->pc = 0x11a814u;
    SET_GPR_U32(ctx, 21, ((uint32_t)38 << 16));
label_11a818:
    // 0x11a818: 0x26310001
    ctx->pc = 0x11a818u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x11a81c: 0x2a220400
    ctx->pc = 0x11a81cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 1024));
    // 0x11a820: 0x1040000a
    ctx->pc = 0x11A820u;
    {
        const bool branch_taken_0x11a820 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11A824u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        if (branch_taken_0x11a820) {
            ctx->pc = 0x11A84Cu;
            goto label_11a84c;
        }
    }
    ctx->pc = 0x11A828u;
    // 0x11a828: 0x2712021
    ctx->pc = 0x11a828u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x11a82c: 0x90430000
    ctx->pc = 0x11a82cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11a830: 0x1460fff9
    ctx->pc = 0x11A830u;
    {
        const bool branch_taken_0x11a830 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x11A834u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x11a830) {
            ctx->pc = 0x11A818u;
            goto label_11a818;
        }
    }
    ctx->pc = 0x11A838u;
    // 0x11a838: 0x10000005
    ctx->pc = 0x11A838u;
    {
        const bool branch_taken_0x11a838 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11A83Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1024));
        if (branch_taken_0x11a838) {
            ctx->pc = 0x11A850u;
            goto label_11a850;
        }
    }
    ctx->pc = 0x11A840u;
label_11a840:
    // 0x11a840: 0x27b40030
    ctx->pc = 0x11a840u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 29), 48));
    // 0x11a844: 0x3c160026
    ctx->pc = 0x11a844u;
    SET_GPR_U32(ctx, 22, ((uint32_t)38 << 16));
    // 0x11a848: 0x3c150026
    ctx->pc = 0x11a848u;
    SET_GPR_U32(ctx, 21, ((uint32_t)38 << 16));
label_11a84c:
    // 0x11a84c: 0x24020400
    ctx->pc = 0x11a84cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1024));
label_11a850:
    // 0x11a850: 0x16220003
    ctx->pc = 0x11A850u;
    {
        const bool branch_taken_0x11a850 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x11a850) {
            ctx->pc = 0x11A860u;
            goto label_11a860;
        }
    }
    ctx->pc = 0x11A858u;
    // 0x11a858: 0xa260044f
    ctx->pc = 0x11a858u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1103), (uint8_t)GPR_U32(ctx, 0));
    // 0x11a85c: 0x241103ff
    ctx->pc = 0x11a85cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1023));
label_11a860:
    // 0x11a860: 0x6a030007
    ctx->pc = 0x11a860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x11a864: 0x6e030000
    ctx->pc = 0x11a864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x11a868: 0x6a04000f
    ctx->pc = 0x11a868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x11a86c: 0x6e040008
    ctx->pc = 0x11a86cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x11a870: 0x6a050017
    ctx->pc = 0x11a870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x11a874: 0x6e050010
    ctx->pc = 0x11a874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x11a878: 0x6a06001f
    ctx->pc = 0x11a878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x11a87c: 0x6e060018
    ctx->pc = 0x11a87cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x11a880: 0xb2630017
    ctx->pc = 0x11a880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11a884: 0xb6630010
    ctx->pc = 0x11a884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11a888: 0xb264001f
    ctx->pc = 0x11a888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11a88c: 0xb6640018
    ctx->pc = 0x11a88cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11a890: 0xb2650027
    ctx->pc = 0x11a890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 39); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11a894: 0xb6650020
    ctx->pc = 0x11a894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11a898: 0xb266002f
    ctx->pc = 0x11a898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 47); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11a89c: 0xb6660028
    ctx->pc = 0x11a89cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 40); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11a8a0: 0x6a030027
    ctx->pc = 0x11a8a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x11a8a4: 0x6e030020
    ctx->pc = 0x11a8a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x11a8a8: 0x6a04002f
    ctx->pc = 0x11a8a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x11a8ac: 0x6e040028
    ctx->pc = 0x11a8acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x11a8b0: 0x6a050037
    ctx->pc = 0x11a8b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x11a8b4: 0x6e050030
    ctx->pc = 0x11a8b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x11a8b8: 0x6a06003f
    ctx->pc = 0x11a8b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x11a8bc: 0x6e060038
    ctx->pc = 0x11a8bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x11a8c0: 0xb2630037
    ctx->pc = 0x11a8c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 55); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11a8c4: 0xb6630030
    ctx->pc = 0x11a8c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 48); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11a8c8: 0xb264003f
    ctx->pc = 0x11a8c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 63); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11a8cc: 0xb6640038
    ctx->pc = 0x11a8ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 56); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11a8d0: 0xb2650047
    ctx->pc = 0x11a8d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 71); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11a8d4: 0xb6650040
    ctx->pc = 0x11a8d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 64); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11a8d8: 0xb266004f
    ctx->pc = 0x11a8d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 79); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11a8dc: 0xb6660048
    ctx->pc = 0x11a8dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 72); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11a8e0: 0x24020001
    ctx->pc = 0x11a8e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a8e4: 0xae77000c
    ctx->pc = 0x11a8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 23));
    // 0x11a8e8: 0x27a40010
    ctx->pc = 0x11a8e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x11a8ec: 0xafa20014
    ctx->pc = 0x11a8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x11a8f0: 0x27d0ca40
    ctx->pc = 0x11a8f0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 30), 4294953536));
    // 0x11a8f4: 0xafa00018
    ctx->pc = 0x11a8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x11a8f8: 0x26b5d680
    ctx->pc = 0x11a8f8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294956672));
    // 0x11a8fc: 0xc045188
    ctx->pc = 0x11A8FCu;
    SET_GPR_U32(ctx, 31, 0x11A904u);
    ctx->pc = 0x11A900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->pc = 0x114620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114620_0x114620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A904u; }
    }
    if (ctx->pc != 0x11A904u) { return; }
    ctx->pc = 0x11A904u;
    // 0x11a904: 0x40902d
    ctx->pc = 0x11a904u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a908: 0x200202d
    ctx->pc = 0x11a908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a90c: 0x24020004
    ctx->pc = 0x11a90cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x11a910: 0xae740004
    ctx->pc = 0x11a910u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
    // 0x11a914: 0xae620008
    ctx->pc = 0x11a914u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x11a918: 0x24050450
    ctx->pc = 0x11a918u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1104));
    // 0x11a91c: 0xc045bf4
    ctx->pc = 0x11A91Cu;
    SET_GPR_U32(ctx, 31, 0x11A924u);
    ctx->pc = 0x11A920u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
    ctx->pc = 0x116FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116FD0_0x116fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A924u; }
    }
    if (ctx->pc != 0x11A924u) { return; }
    ctx->pc = 0x11A924u;
    // 0x11a924: 0x26c4e140
    ctx->pc = 0x11a924u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 4294959424));
    // 0x11a928: 0x200382d
    ctx->pc = 0x11a928u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a92c: 0x26280051
    ctx->pc = 0x11a92cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 17), 81));
    // 0x11a930: 0xafa00000
    ctx->pc = 0x11a930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11a934: 0x2405000d
    ctx->pc = 0x11a934u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 13));
    // 0x11a938: 0x302d
    ctx->pc = 0x11a938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a93c: 0x2a0482d
    ctx->pc = 0x11a93cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a940: 0x240a0004
    ctx->pc = 0x11a940u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4));
    // 0x11a944: 0xc045e7a
    ctx->pc = 0x11A944u;
    SET_GPR_U32(ctx, 31, 0x11A94Cu);
    ctx->pc = 0x11A948u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A94Cu; }
    }
    if (ctx->pc != 0x11A94Cu) { return; }
    ctx->pc = 0x11A94Cu;
    // 0x11a94c: 0x4410007
    ctx->pc = 0x11A94Cu;
    {
        const bool branch_taken_0x11a94c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11A950u;
        SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
        if (branch_taken_0x11a94c) {
            ctx->pc = 0x11A96Cu;
            goto label_11a96c;
        }
    }
    ctx->pc = 0x11A954u;
    // 0x11a954: 0xc04518c
    ctx->pc = 0x11A954u;
    SET_GPR_U32(ctx, 31, 0x11A95Cu);
    ctx->pc = 0x11A958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A95Cu; }
    }
    if (ctx->pc != 0x11A95Cu) { return; }
    ctx->pc = 0x11A95Cu;
    // 0x11a95c: 0xc0461a8
    ctx->pc = 0x11A95Cu;
    SET_GPR_U32(ctx, 31, 0x11A964u);
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A964u; }
    }
    if (ctx->pc != 0x11A964u) { return; }
    ctx->pc = 0x11A964u;
    // 0x11a964: 0x1000000f
    ctx->pc = 0x11A964u;
    {
        const bool branch_taken_0x11a964 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11A968u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967285));
        if (branch_taken_0x11a964) {
            ctx->pc = 0x11A9A4u;
            goto label_11a9a4;
        }
    }
    ctx->pc = 0x11A96Cu;
label_11a96c:
    // 0x11a96c: 0x2a21025
    ctx->pc = 0x11a96cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x11a970: 0xc0461a8
    ctx->pc = 0x11A970u;
    SET_GPR_U32(ctx, 31, 0x11A978u);
    ctx->pc = 0x11A974u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A978u; }
    }
    if (ctx->pc != 0x11A978u) { return; }
    ctx->pc = 0x11A978u;
    // 0x11a978: 0x16000005
    ctx->pc = 0x11A978u;
    {
        const bool branch_taken_0x11a978 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x11a978) {
            ctx->pc = 0x11A990u;
            goto label_11a990;
        }
    }
    ctx->pc = 0x11A980u;
    // 0x11a980: 0xc04518c
    ctx->pc = 0x11A980u;
    SET_GPR_U32(ctx, 31, 0x11A988u);
    ctx->pc = 0x11A984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A988u; }
    }
    if (ctx->pc != 0x11A988u) { return; }
    ctx->pc = 0x11A988u;
    // 0x11a988: 0x10000006
    ctx->pc = 0x11A988u;
    {
        const bool branch_taken_0x11a988 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11A98Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967285));
        if (branch_taken_0x11a988) {
            ctx->pc = 0x11A9A4u;
            goto label_11a9a4;
        }
    }
    ctx->pc = 0x11A990u;
label_11a990:
    // 0x11a990: 0xc045198
    ctx->pc = 0x11A990u;
    SET_GPR_U32(ctx, 31, 0x11A998u);
    ctx->pc = 0x11A994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A998u; }
    }
    if (ctx->pc != 0x11A998u) { return; }
    ctx->pc = 0x11A998u;
    // 0x11a998: 0xc04518c
    ctx->pc = 0x11A998u;
    SET_GPR_U32(ctx, 31, 0x11A9A0u);
    ctx->pc = 0x11A99Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A9A0u; }
    }
    if (ctx->pc != 0x11A9A0u) { return; }
    ctx->pc = 0x11A9A0u;
    // 0x11a9a0: 0x8fa20030
    ctx->pc = 0x11a9a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11a9a4:
    // 0x11a9a4: 0xdfbf00d0
    ctx->pc = 0x11a9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x11a9a8: 0xdfbe00c0
    ctx->pc = 0x11a9a8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x11a9ac: 0xdfb700b0
    ctx->pc = 0x11a9acu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11a9b0: 0xdfb600a0
    ctx->pc = 0x11a9b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11a9b4: 0xdfb50090
    ctx->pc = 0x11a9b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11a9b8: 0xdfb40080
    ctx->pc = 0x11a9b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11a9bc: 0xdfb30070
    ctx->pc = 0x11a9bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11a9c0: 0xdfb20060
    ctx->pc = 0x11a9c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11a9c4: 0xdfb10050
    ctx->pc = 0x11a9c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11a9c8: 0xdfb00040
    ctx->pc = 0x11a9c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11a9cc: 0x3e00008
    ctx->pc = 0x11A9CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A9D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11A4F4u: goto label_11a4f4;
            case 0x11A508u: goto label_11a508;
            case 0x11A518u: goto label_11a518;
            case 0x11A5A4u: goto label_11a5a4;
            case 0x11A5C8u: goto label_11a5c8;
            case 0x11A5DCu: goto label_11a5dc;
            case 0x11A654u: goto label_11a654;
            case 0x11A670u: goto label_11a670;
            case 0x11A698u: goto label_11a698;
            case 0x11A6A4u: goto label_11a6a4;
            case 0x11A6A8u: goto label_11a6a8;
            case 0x11A6BCu: goto label_11a6bc;
            case 0x11A734u: goto label_11a734;
            case 0x11A758u: goto label_11a758;
            case 0x11A76Cu: goto label_11a76c;
            case 0x11A7FCu: goto label_11a7fc;
            case 0x11A818u: goto label_11a818;
            case 0x11A840u: goto label_11a840;
            case 0x11A84Cu: goto label_11a84c;
            case 0x11A850u: goto label_11a850;
            case 0x11A860u: goto label_11a860;
            case 0x11A96Cu: goto label_11a96c;
            case 0x11A990u: goto label_11a990;
            case 0x11A9A4u: goto label_11a9a4;
            case 0x11AA30u: goto label_11aa30;
            case 0x11AA50u: goto label_11aa50;
            case 0x11AA7Cu: goto label_11aa7c;
            case 0x11AA88u: goto label_11aa88;
            case 0x11AA8Cu: goto label_11aa8c;
            case 0x11AA94u: goto label_11aa94;
            case 0x11AAB0u: goto label_11aab0;
            case 0x11AAD4u: goto label_11aad4;
            case 0x11AAE0u: goto label_11aae0;
            case 0x11AB68u: goto label_11ab68;
            case 0x11AB8Cu: goto label_11ab8c;
            case 0x11ABA0u: goto label_11aba0;
            case 0x11AC40u: goto label_11ac40;
            case 0x11AC60u: goto label_11ac60;
            case 0x11AC8Cu: goto label_11ac8c;
            case 0x11AC98u: goto label_11ac98;
            case 0x11AC9Cu: goto label_11ac9c;
            case 0x11ACA4u: goto label_11aca4;
            case 0x11AD20u: goto label_11ad20;
            case 0x11AD44u: goto label_11ad44;
            case 0x11AD58u: goto label_11ad58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11A9D4u;
    // 0x11a9d4: 0x0
    ctx->pc = 0x11a9d4u;
    // NOP
    // 0x11a9d8: 0x27bdff40
    ctx->pc = 0x11a9d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x11a9dc: 0xffb10050
    ctx->pc = 0x11a9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x11a9e0: 0xffb00040
    ctx->pc = 0x11a9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x11a9e4: 0x80882d
    ctx->pc = 0x11a9e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a9e8: 0xffb600a0
    ctx->pc = 0x11a9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x11a9ec: 0xa0802d
    ctx->pc = 0x11a9ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a9f0: 0xffb20060
    ctx->pc = 0x11a9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x11a9f4: 0x24040011
    ctx->pc = 0x11a9f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 17));
    // 0x11a9f8: 0xffbf00b0
    ctx->pc = 0x11a9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x11a9fc: 0x3c160026
    ctx->pc = 0x11a9fcu;
    SET_GPR_U32(ctx, 22, ((uint32_t)38 << 16));
    // 0x11aa00: 0xffb50090
    ctx->pc = 0x11aa00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x11aa04: 0x26d2ca40
    ctx->pc = 0x11aa04u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 22), 4294953536));
    // 0x11aa08: 0xffb40080
    ctx->pc = 0x11aa08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x11aa0c: 0xc04619c
    ctx->pc = 0x11AA0Cu;
    SET_GPR_U32(ctx, 31, 0x11AA14u);
    ctx->pc = 0x11AA10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->pc = 0x118670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118670_0x118670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AA14u; }
    }
    if (ctx->pc != 0x11AA14u) { return; }
    ctx->pc = 0x11AA14u;
    // 0x11aa14: 0x3c020021
    ctx->pc = 0x11aa14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x11aa18: 0x8c439ddc
    ctx->pc = 0x11aa18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294942172)));
    // 0x11aa1c: 0x54600004
    ctx->pc = 0x11AA1Cu;
    {
        const bool branch_taken_0x11aa1c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x11aa1c) {
            ctx->pc = 0x11AA20u;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x11AA30u;
            goto label_11aa30;
        }
    }
    ctx->pc = 0x11AA24u;
    // 0x11aa24: 0xc0461e8
    ctx->pc = 0x11AA24u;
    SET_GPR_U32(ctx, 31, 0x11AA2Cu);
    ctx->pc = 0x1187A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001187A0_0x1187a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AA2Cu; }
    }
    if (ctx->pc != 0x11AA2Cu) { return; }
    ctx->pc = 0x11AA2Cu;
    // 0x11aa2c: 0x92220000
    ctx->pc = 0x11aa2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_11aa30:
    // 0x11aa30: 0x282d
    ctx->pc = 0x11aa30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aa34: 0x21e00
    ctx->pc = 0x11aa34u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 24));
    // 0x11aa38: 0x10600010
    ctx->pc = 0x11AA38u;
    {
        const bool branch_taken_0x11aa38 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x11AA3Cu;
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x11aa38) {
            ctx->pc = 0x11AA7Cu;
            goto label_11aa7c;
        }
    }
    ctx->pc = 0x11AA40u;
    // 0x11aa40: 0x27b30030
    ctx->pc = 0x11aa40u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 48));
    // 0x11aa44: 0x3c150026
    ctx->pc = 0x11aa44u;
    SET_GPR_U32(ctx, 21, ((uint32_t)38 << 16));
    // 0x11aa48: 0x3c140026
    ctx->pc = 0x11aa48u;
    SET_GPR_U32(ctx, 20, ((uint32_t)38 << 16));
    // 0x11aa4c: 0x24a50001
    ctx->pc = 0x11aa4cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_11aa50:
    // 0x11aa50: 0x28a20400
    ctx->pc = 0x11aa50u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 1024));
    // 0x11aa54: 0x1040000c
    ctx->pc = 0x11AA54u;
    {
        const bool branch_taken_0x11aa54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11AA58u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        if (branch_taken_0x11aa54) {
            ctx->pc = 0x11AA88u;
            goto label_11aa88;
        }
    }
    ctx->pc = 0x11AA5Cu;
    // 0x11aa5c: 0x2452021
    ctx->pc = 0x11aa5cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x11aa60: 0x90430000
    ctx->pc = 0x11aa60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11aa64: 0xa083000c
    ctx->pc = 0x11aa64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x11aa68: 0x31e00
    ctx->pc = 0x11aa68u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 24));
    // 0x11aa6c: 0x5460fff8
    ctx->pc = 0x11AA6Cu;
    {
        const bool branch_taken_0x11aa6c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x11aa6c) {
            ctx->pc = 0x11AA70u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x11AA50u;
            goto label_11aa50;
        }
    }
    ctx->pc = 0x11AA74u;
    // 0x11aa74: 0x10000005
    ctx->pc = 0x11AA74u;
    {
        const bool branch_taken_0x11aa74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11AA78u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1024));
        if (branch_taken_0x11aa74) {
            ctx->pc = 0x11AA8Cu;
            goto label_11aa8c;
        }
    }
    ctx->pc = 0x11AA7Cu;
label_11aa7c:
    // 0x11aa7c: 0x27b30030
    ctx->pc = 0x11aa7cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 48));
    // 0x11aa80: 0x3c150026
    ctx->pc = 0x11aa80u;
    SET_GPR_U32(ctx, 21, ((uint32_t)38 << 16));
    // 0x11aa84: 0x3c140026
    ctx->pc = 0x11aa84u;
    SET_GPR_U32(ctx, 20, ((uint32_t)38 << 16));
label_11aa88:
    // 0x11aa88: 0x24020400
    ctx->pc = 0x11aa88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1024));
label_11aa8c:
    // 0x11aa8c: 0x50a20001
    ctx->pc = 0x11AA8Cu;
    {
        const bool branch_taken_0x11aa8c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x11aa8c) {
            ctx->pc = 0x11AA90u;
            WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x11AA94u;
            goto label_11aa94;
        }
    }
    ctx->pc = 0x11AA94u;
label_11aa94:
    // 0x11aa94: 0x92020000
    ctx->pc = 0x11aa94u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11aa98: 0x282d
    ctx->pc = 0x11aa98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aa9c: 0x21e00
    ctx->pc = 0x11aa9cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 24));
    // 0x11aaa0: 0x1060000c
    ctx->pc = 0x11AAA0u;
    {
        const bool branch_taken_0x11aaa0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x11AAA4u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 1036), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x11aaa0) {
            ctx->pc = 0x11AAD4u;
            goto label_11aad4;
        }
    }
    ctx->pc = 0x11AAA8u;
    // 0x11aaa8: 0x2646040c
    ctx->pc = 0x11aaa8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 1036));
    // 0x11aaac: 0x24a50001
    ctx->pc = 0x11aaacu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_11aab0:
    // 0x11aab0: 0x28a20400
    ctx->pc = 0x11aab0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 1024));
    // 0x11aab4: 0x10400007
    ctx->pc = 0x11AAB4u;
    {
        const bool branch_taken_0x11aab4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11AAB8u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        if (branch_taken_0x11aab4) {
            ctx->pc = 0x11AAD4u;
            goto label_11aad4;
        }
    }
    ctx->pc = 0x11AABCu;
    // 0x11aabc: 0xc52021
    ctx->pc = 0x11aabcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x11aac0: 0x90430000
    ctx->pc = 0x11aac0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11aac4: 0xa0830000
    ctx->pc = 0x11aac4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x11aac8: 0x31e00
    ctx->pc = 0x11aac8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 24));
    // 0x11aacc: 0x5460fff8
    ctx->pc = 0x11AACCu;
    {
        const bool branch_taken_0x11aacc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x11aacc) {
            ctx->pc = 0x11AAD0u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x11AAB0u;
            goto label_11aab0;
        }
    }
    ctx->pc = 0x11AAD4u;
label_11aad4:
    // 0x11aad4: 0x24020400
    ctx->pc = 0x11aad4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1024));
    // 0x11aad8: 0x50a20001
    ctx->pc = 0x11AAD8u;
    {
        const bool branch_taken_0x11aad8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x11aad8) {
            ctx->pc = 0x11AADCu;
            WRITE8(ADD32(GPR_U32(ctx, 18), 2059), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x11AAE0u;
            goto label_11aae0;
        }
    }
    ctx->pc = 0x11AAE0u;
label_11aae0:
    // 0x11aae0: 0x24020001
    ctx->pc = 0x11aae0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11aae4: 0xafa00018
    ctx->pc = 0x11aae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x11aae8: 0xafa20014
    ctx->pc = 0x11aae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x11aaec: 0x27a40010
    ctx->pc = 0x11aaecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x11aaf0: 0xafa00024
    ctx->pc = 0x11aaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x11aaf4: 0xc045188
    ctx->pc = 0x11AAF4u;
    SET_GPR_U32(ctx, 31, 0x11AAFCu);
    ctx->pc = 0x11AAF8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 22), 4294953536));
    ctx->pc = 0x114620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114620_0x114620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AAFCu; }
    }
    if (ctx->pc != 0x11AAFCu) { return; }
    ctx->pc = 0x11AAFCu;
    // 0x11aafc: 0x2694d680
    ctx->pc = 0x11aafcu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294956672));
    // 0x11ab00: 0x40882d
    ctx->pc = 0x11ab00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab04: 0x200202d
    ctx->pc = 0x11ab04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab08: 0x24020004
    ctx->pc = 0x11ab08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x11ab0c: 0xae530004
    ctx->pc = 0x11ab0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x11ab10: 0xae420008
    ctx->pc = 0x11ab10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x11ab14: 0x2405080c
    ctx->pc = 0x11ab14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2060));
    // 0x11ab18: 0xc045bf4
    ctx->pc = 0x11AB18u;
    SET_GPR_U32(ctx, 31, 0x11AB20u);
    ctx->pc = 0x11AB1Cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    ctx->pc = 0x116FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116FD0_0x116fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AB20u; }
    }
    if (ctx->pc != 0x11AB20u) { return; }
    ctx->pc = 0x11AB20u;
    // 0x11ab20: 0x26a4e140
    ctx->pc = 0x11ab20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 4294959424));
    // 0x11ab24: 0x200382d
    ctx->pc = 0x11ab24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab28: 0xafa00000
    ctx->pc = 0x11ab28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11ab2c: 0x24050011
    ctx->pc = 0x11ab2cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 17));
    // 0x11ab30: 0x302d
    ctx->pc = 0x11ab30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab34: 0x2408080c
    ctx->pc = 0x11ab34u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 2060));
    // 0x11ab38: 0x280482d
    ctx->pc = 0x11ab38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab3c: 0x240a0004
    ctx->pc = 0x11ab3cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4));
    // 0x11ab40: 0xc045e7a
    ctx->pc = 0x11AB40u;
    SET_GPR_U32(ctx, 31, 0x11AB48u);
    ctx->pc = 0x11AB44u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AB48u; }
    }
    if (ctx->pc != 0x11AB48u) { return; }
    ctx->pc = 0x11AB48u;
    // 0x11ab48: 0x4410007
    ctx->pc = 0x11AB48u;
    {
        const bool branch_taken_0x11ab48 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11AB4Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
        if (branch_taken_0x11ab48) {
            ctx->pc = 0x11AB68u;
            goto label_11ab68;
        }
    }
    ctx->pc = 0x11AB50u;
    // 0x11ab50: 0xc04518c
    ctx->pc = 0x11AB50u;
    SET_GPR_U32(ctx, 31, 0x11AB58u);
    ctx->pc = 0x11AB54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AB58u; }
    }
    if (ctx->pc != 0x11AB58u) { return; }
    ctx->pc = 0x11AB58u;
    // 0x11ab58: 0xc0461a8
    ctx->pc = 0x11AB58u;
    SET_GPR_U32(ctx, 31, 0x11AB60u);
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AB60u; }
    }
    if (ctx->pc != 0x11AB60u) { return; }
    ctx->pc = 0x11AB60u;
    // 0x11ab60: 0x1000000f
    ctx->pc = 0x11AB60u;
    {
        const bool branch_taken_0x11ab60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11AB64u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967285));
        if (branch_taken_0x11ab60) {
            ctx->pc = 0x11ABA0u;
            goto label_11aba0;
        }
    }
    ctx->pc = 0x11AB68u;
label_11ab68:
    // 0x11ab68: 0x2821025
    ctx->pc = 0x11ab68u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x11ab6c: 0xc0461a8
    ctx->pc = 0x11AB6Cu;
    SET_GPR_U32(ctx, 31, 0x11AB74u);
    ctx->pc = 0x11AB70u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AB74u; }
    }
    if (ctx->pc != 0x11AB74u) { return; }
    ctx->pc = 0x11AB74u;
    // 0x11ab74: 0x16000005
    ctx->pc = 0x11AB74u;
    {
        const bool branch_taken_0x11ab74 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x11ab74) {
            ctx->pc = 0x11AB8Cu;
            goto label_11ab8c;
        }
    }
    ctx->pc = 0x11AB7Cu;
    // 0x11ab7c: 0xc04518c
    ctx->pc = 0x11AB7Cu;
    SET_GPR_U32(ctx, 31, 0x11AB84u);
    ctx->pc = 0x11AB80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AB84u; }
    }
    if (ctx->pc != 0x11AB84u) { return; }
    ctx->pc = 0x11AB84u;
    // 0x11ab84: 0x10000006
    ctx->pc = 0x11AB84u;
    {
        const bool branch_taken_0x11ab84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11AB88u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967285));
        if (branch_taken_0x11ab84) {
            ctx->pc = 0x11ABA0u;
            goto label_11aba0;
        }
    }
    ctx->pc = 0x11AB8Cu;
label_11ab8c:
    // 0x11ab8c: 0xc045198
    ctx->pc = 0x11AB8Cu;
    SET_GPR_U32(ctx, 31, 0x11AB94u);
    ctx->pc = 0x11AB90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AB94u; }
    }
    if (ctx->pc != 0x11AB94u) { return; }
    ctx->pc = 0x11AB94u;
    // 0x11ab94: 0xc04518c
    ctx->pc = 0x11AB94u;
    SET_GPR_U32(ctx, 31, 0x11AB9Cu);
    ctx->pc = 0x11AB98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AB9Cu; }
    }
    if (ctx->pc != 0x11AB9Cu) { return; }
    ctx->pc = 0x11AB9Cu;
    // 0x11ab9c: 0x8fa20030
    ctx->pc = 0x11ab9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11aba0:
    // 0x11aba0: 0xdfbf00b0
    ctx->pc = 0x11aba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11aba4: 0xdfb600a0
    ctx->pc = 0x11aba4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11aba8: 0xdfb50090
    ctx->pc = 0x11aba8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11abac: 0xdfb40080
    ctx->pc = 0x11abacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11abb0: 0xdfb30070
    ctx->pc = 0x11abb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11abb4: 0xdfb20060
    ctx->pc = 0x11abb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11abb8: 0xdfb10050
    ctx->pc = 0x11abb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11abbc: 0xdfb00040
    ctx->pc = 0x11abbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11abc0: 0x3e00008
    ctx->pc = 0x11ABC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11ABC4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11A4F4u: goto label_11a4f4;
            case 0x11A508u: goto label_11a508;
            case 0x11A518u: goto label_11a518;
            case 0x11A5A4u: goto label_11a5a4;
            case 0x11A5C8u: goto label_11a5c8;
            case 0x11A5DCu: goto label_11a5dc;
            case 0x11A654u: goto label_11a654;
            case 0x11A670u: goto label_11a670;
            case 0x11A698u: goto label_11a698;
            case 0x11A6A4u: goto label_11a6a4;
            case 0x11A6A8u: goto label_11a6a8;
            case 0x11A6BCu: goto label_11a6bc;
            case 0x11A734u: goto label_11a734;
            case 0x11A758u: goto label_11a758;
            case 0x11A76Cu: goto label_11a76c;
            case 0x11A7FCu: goto label_11a7fc;
            case 0x11A818u: goto label_11a818;
            case 0x11A840u: goto label_11a840;
            case 0x11A84Cu: goto label_11a84c;
            case 0x11A850u: goto label_11a850;
            case 0x11A860u: goto label_11a860;
            case 0x11A96Cu: goto label_11a96c;
            case 0x11A990u: goto label_11a990;
            case 0x11A9A4u: goto label_11a9a4;
            case 0x11AA30u: goto label_11aa30;
            case 0x11AA50u: goto label_11aa50;
            case 0x11AA7Cu: goto label_11aa7c;
            case 0x11AA88u: goto label_11aa88;
            case 0x11AA8Cu: goto label_11aa8c;
            case 0x11AA94u: goto label_11aa94;
            case 0x11AAB0u: goto label_11aab0;
            case 0x11AAD4u: goto label_11aad4;
            case 0x11AAE0u: goto label_11aae0;
            case 0x11AB68u: goto label_11ab68;
            case 0x11AB8Cu: goto label_11ab8c;
            case 0x11ABA0u: goto label_11aba0;
            case 0x11AC40u: goto label_11ac40;
            case 0x11AC60u: goto label_11ac60;
            case 0x11AC8Cu: goto label_11ac8c;
            case 0x11AC98u: goto label_11ac98;
            case 0x11AC9Cu: goto label_11ac9c;
            case 0x11ACA4u: goto label_11aca4;
            case 0x11AD20u: goto label_11ad20;
            case 0x11AD44u: goto label_11ad44;
            case 0x11AD58u: goto label_11ad58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11ABC8u;
    // 0x11abc8: 0x27bdfff0
    ctx->pc = 0x11abc8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11abcc: 0xffbf0000
    ctx->pc = 0x11abccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11abd0: 0xc0466ca
    ctx->pc = 0x11ABD0u;
    SET_GPR_U32(ctx, 31, 0x11ABD8u);
    ctx->pc = 0x11ABD4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 18));
    ctx->pc = 0x119B28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00119B28_0x119b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ABD8u; }
    }
    if (ctx->pc != 0x11ABD8u) { return; }
    ctx->pc = 0x11ABD8u;
    // 0x11abd8: 0xdfbf0000
    ctx->pc = 0x11abd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11abdc: 0x3e00008
    ctx->pc = 0x11ABDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11ABE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11A4F4u: goto label_11a4f4;
            case 0x11A508u: goto label_11a508;
            case 0x11A518u: goto label_11a518;
            case 0x11A5A4u: goto label_11a5a4;
            case 0x11A5C8u: goto label_11a5c8;
            case 0x11A5DCu: goto label_11a5dc;
            case 0x11A654u: goto label_11a654;
            case 0x11A670u: goto label_11a670;
            case 0x11A698u: goto label_11a698;
            case 0x11A6A4u: goto label_11a6a4;
            case 0x11A6A8u: goto label_11a6a8;
            case 0x11A6BCu: goto label_11a6bc;
            case 0x11A734u: goto label_11a734;
            case 0x11A758u: goto label_11a758;
            case 0x11A76Cu: goto label_11a76c;
            case 0x11A7FCu: goto label_11a7fc;
            case 0x11A818u: goto label_11a818;
            case 0x11A840u: goto label_11a840;
            case 0x11A84Cu: goto label_11a84c;
            case 0x11A850u: goto label_11a850;
            case 0x11A860u: goto label_11a860;
            case 0x11A96Cu: goto label_11a96c;
            case 0x11A990u: goto label_11a990;
            case 0x11A9A4u: goto label_11a9a4;
            case 0x11AA30u: goto label_11aa30;
            case 0x11AA50u: goto label_11aa50;
            case 0x11AA7Cu: goto label_11aa7c;
            case 0x11AA88u: goto label_11aa88;
            case 0x11AA8Cu: goto label_11aa8c;
            case 0x11AA94u: goto label_11aa94;
            case 0x11AAB0u: goto label_11aab0;
            case 0x11AAD4u: goto label_11aad4;
            case 0x11AAE0u: goto label_11aae0;
            case 0x11AB68u: goto label_11ab68;
            case 0x11AB8Cu: goto label_11ab8c;
            case 0x11ABA0u: goto label_11aba0;
            case 0x11AC40u: goto label_11ac40;
            case 0x11AC60u: goto label_11ac60;
            case 0x11AC8Cu: goto label_11ac8c;
            case 0x11AC98u: goto label_11ac98;
            case 0x11AC9Cu: goto label_11ac9c;
            case 0x11ACA4u: goto label_11aca4;
            case 0x11AD20u: goto label_11ad20;
            case 0x11AD44u: goto label_11ad44;
            case 0x11AD58u: goto label_11ad58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11ABE4u;
    // 0x11abe4: 0x0
    ctx->pc = 0x11abe4u;
    // NOP
    // 0x11abe8: 0x27bdff40
    ctx->pc = 0x11abe8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x11abec: 0xffb10050
    ctx->pc = 0x11abecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x11abf0: 0xffb50090
    ctx->pc = 0x11abf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x11abf4: 0x80882d
    ctx->pc = 0x11abf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11abf8: 0xffb600a0
    ctx->pc = 0x11abf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x11abfc: 0xa0a82d
    ctx->pc = 0x11abfcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac00: 0xffb00040
    ctx->pc = 0x11ac00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x11ac04: 0x24040013
    ctx->pc = 0x11ac04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 19));
    // 0x11ac08: 0xffbf00b0
    ctx->pc = 0x11ac08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x11ac0c: 0x3c160026
    ctx->pc = 0x11ac0cu;
    SET_GPR_U32(ctx, 22, ((uint32_t)38 << 16));
    // 0x11ac10: 0xffb40080
    ctx->pc = 0x11ac10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x11ac14: 0x26d0ca40
    ctx->pc = 0x11ac14u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 22), 4294953536));
    // 0x11ac18: 0xffb30070
    ctx->pc = 0x11ac18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x11ac1c: 0xc04619c
    ctx->pc = 0x11AC1Cu;
    SET_GPR_U32(ctx, 31, 0x11AC24u);
    ctx->pc = 0x11AC20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    ctx->pc = 0x118670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118670_0x118670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AC24u; }
    }
    if (ctx->pc != 0x11AC24u) { return; }
    ctx->pc = 0x11AC24u;
    // 0x11ac24: 0x3c020021
    ctx->pc = 0x11ac24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x11ac28: 0x8c439ddc
    ctx->pc = 0x11ac28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294942172)));
    // 0x11ac2c: 0x54600004
    ctx->pc = 0x11AC2Cu;
    {
        const bool branch_taken_0x11ac2c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x11ac2c) {
            ctx->pc = 0x11AC30u;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x11AC40u;
            goto label_11ac40;
        }
    }
    ctx->pc = 0x11AC34u;
    // 0x11ac34: 0xc0461e8
    ctx->pc = 0x11AC34u;
    SET_GPR_U32(ctx, 31, 0x11AC3Cu);
    ctx->pc = 0x1187A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001187A0_0x1187a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AC3Cu; }
    }
    if (ctx->pc != 0x11AC3Cu) { return; }
    ctx->pc = 0x11AC3Cu;
    // 0x11ac3c: 0x92220000
    ctx->pc = 0x11ac3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_11ac40:
    // 0x11ac40: 0x282d
    ctx->pc = 0x11ac40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac44: 0x21e00
    ctx->pc = 0x11ac44u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 24));
    // 0x11ac48: 0x10600010
    ctx->pc = 0x11AC48u;
    {
        const bool branch_taken_0x11ac48 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x11AC4Cu;
        WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x11ac48) {
            ctx->pc = 0x11AC8Cu;
            goto label_11ac8c;
        }
    }
    ctx->pc = 0x11AC50u;
    // 0x11ac50: 0x27b20030
    ctx->pc = 0x11ac50u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 48));
    // 0x11ac54: 0x3c140026
    ctx->pc = 0x11ac54u;
    SET_GPR_U32(ctx, 20, ((uint32_t)38 << 16));
    // 0x11ac58: 0x3c130026
    ctx->pc = 0x11ac58u;
    SET_GPR_U32(ctx, 19, ((uint32_t)38 << 16));
    // 0x11ac5c: 0x24a50001
    ctx->pc = 0x11ac5cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_11ac60:
    // 0x11ac60: 0x28a20400
    ctx->pc = 0x11ac60u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 1024));
    // 0x11ac64: 0x1040000c
    ctx->pc = 0x11AC64u;
    {
        const bool branch_taken_0x11ac64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11AC68u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        if (branch_taken_0x11ac64) {
            ctx->pc = 0x11AC98u;
            goto label_11ac98;
        }
    }
    ctx->pc = 0x11AC6Cu;
    // 0x11ac6c: 0x2052021
    ctx->pc = 0x11ac6cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x11ac70: 0x90430000
    ctx->pc = 0x11ac70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11ac74: 0xa0830014
    ctx->pc = 0x11ac74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x11ac78: 0x31e00
    ctx->pc = 0x11ac78u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 24));
    // 0x11ac7c: 0x5460fff8
    ctx->pc = 0x11AC7Cu;
    {
        const bool branch_taken_0x11ac7c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x11ac7c) {
            ctx->pc = 0x11AC80u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x11AC60u;
            goto label_11ac60;
        }
    }
    ctx->pc = 0x11AC84u;
    // 0x11ac84: 0x10000005
    ctx->pc = 0x11AC84u;
    {
        const bool branch_taken_0x11ac84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11AC88u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1024));
        if (branch_taken_0x11ac84) {
            ctx->pc = 0x11AC9Cu;
            goto label_11ac9c;
        }
    }
    ctx->pc = 0x11AC8Cu;
label_11ac8c:
    // 0x11ac8c: 0x27b20030
    ctx->pc = 0x11ac8cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 48));
    // 0x11ac90: 0x3c140026
    ctx->pc = 0x11ac90u;
    SET_GPR_U32(ctx, 20, ((uint32_t)38 << 16));
    // 0x11ac94: 0x3c130026
    ctx->pc = 0x11ac94u;
    SET_GPR_U32(ctx, 19, ((uint32_t)38 << 16));
label_11ac98:
    // 0x11ac98: 0x24020400
    ctx->pc = 0x11ac98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1024));
label_11ac9c:
    // 0x11ac9c: 0x50a20001
    ctx->pc = 0x11AC9Cu;
    {
        const bool branch_taken_0x11ac9c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x11ac9c) {
            ctx->pc = 0x11ACA0u;
            WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x11ACA4u;
            goto label_11aca4;
        }
    }
    ctx->pc = 0x11ACA4u;
label_11aca4:
    // 0x11aca4: 0xae150010
    ctx->pc = 0x11aca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 21));
    // 0x11aca8: 0x24020001
    ctx->pc = 0x11aca8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11acac: 0xafa20014
    ctx->pc = 0x11acacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x11acb0: 0x27a40010
    ctx->pc = 0x11acb0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x11acb4: 0xafa00018
    ctx->pc = 0x11acb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x11acb8: 0x2673d680
    ctx->pc = 0x11acb8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294956672));
    // 0x11acbc: 0xc045188
    ctx->pc = 0x11ACBCu;
    SET_GPR_U32(ctx, 31, 0x11ACC4u);
    ctx->pc = 0x11ACC0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->pc = 0x114620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114620_0x114620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ACC4u; }
    }
    if (ctx->pc != 0x11ACC4u) { return; }
    ctx->pc = 0x11ACC4u;
    // 0x11acc4: 0x40882d
    ctx->pc = 0x11acc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11acc8: 0xae120004
    ctx->pc = 0x11acc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x11accc: 0x24020004
    ctx->pc = 0x11acccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x11acd0: 0xae110000
    ctx->pc = 0x11acd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x11acd4: 0xae020008
    ctx->pc = 0x11acd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x11acd8: 0x2684e140
    ctx->pc = 0x11acd8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 4294959424));
    // 0x11acdc: 0x26c7ca40
    ctx->pc = 0x11acdcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 22), 4294953536));
    // 0x11ace0: 0x24050013
    ctx->pc = 0x11ace0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 19));
    // 0x11ace4: 0xafa00000
    ctx->pc = 0x11ace4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11ace8: 0x302d
    ctx->pc = 0x11ace8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11acec: 0x24080414
    ctx->pc = 0x11acecu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1044));
    // 0x11acf0: 0x260482d
    ctx->pc = 0x11acf0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11acf4: 0x240a0004
    ctx->pc = 0x11acf4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4));
    // 0x11acf8: 0xc045e7a
    ctx->pc = 0x11ACF8u;
    SET_GPR_U32(ctx, 31, 0x11AD00u);
    ctx->pc = 0x11ACFCu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AD00u; }
    }
    if (ctx->pc != 0x11AD00u) { return; }
    ctx->pc = 0x11AD00u;
    // 0x11ad00: 0x4410007
    ctx->pc = 0x11AD00u;
    {
        const bool branch_taken_0x11ad00 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11AD04u;
        SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
        if (branch_taken_0x11ad00) {
            ctx->pc = 0x11AD20u;
            goto label_11ad20;
        }
    }
    ctx->pc = 0x11AD08u;
    // 0x11ad08: 0xc04518c
    ctx->pc = 0x11AD08u;
    SET_GPR_U32(ctx, 31, 0x11AD10u);
    ctx->pc = 0x11AD0Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AD10u; }
    }
    if (ctx->pc != 0x11AD10u) { return; }
    ctx->pc = 0x11AD10u;
    // 0x11ad10: 0xc0461a8
    ctx->pc = 0x11AD10u;
    SET_GPR_U32(ctx, 31, 0x11AD18u);
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AD18u; }
    }
    if (ctx->pc != 0x11AD18u) { return; }
    ctx->pc = 0x11AD18u;
    // 0x11ad18: 0x1000000f
    ctx->pc = 0x11AD18u;
    {
        const bool branch_taken_0x11ad18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11AD1Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967285));
        if (branch_taken_0x11ad18) {
            ctx->pc = 0x11AD58u;
            goto label_11ad58;
        }
    }
    ctx->pc = 0x11AD20u;
label_11ad20:
    // 0x11ad20: 0x2621025
    ctx->pc = 0x11ad20u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x11ad24: 0xc0461a8
    ctx->pc = 0x11AD24u;
    SET_GPR_U32(ctx, 31, 0x11AD2Cu);
    ctx->pc = 0x11AD28u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AD2Cu; }
    }
    if (ctx->pc != 0x11AD2Cu) { return; }
    ctx->pc = 0x11AD2Cu;
    // 0x11ad2c: 0x16000005
    ctx->pc = 0x11AD2Cu;
    {
        const bool branch_taken_0x11ad2c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x11ad2c) {
            ctx->pc = 0x11AD44u;
            goto label_11ad44;
        }
    }
    ctx->pc = 0x11AD34u;
    // 0x11ad34: 0xc04518c
    ctx->pc = 0x11AD34u;
    SET_GPR_U32(ctx, 31, 0x11AD3Cu);
    ctx->pc = 0x11AD38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AD3Cu; }
    }
    if (ctx->pc != 0x11AD3Cu) { return; }
    ctx->pc = 0x11AD3Cu;
    // 0x11ad3c: 0x10000006
    ctx->pc = 0x11AD3Cu;
    {
        const bool branch_taken_0x11ad3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11AD40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967285));
        if (branch_taken_0x11ad3c) {
            ctx->pc = 0x11AD58u;
            goto label_11ad58;
        }
    }
    ctx->pc = 0x11AD44u;
label_11ad44:
    // 0x11ad44: 0xc045198
    ctx->pc = 0x11AD44u;
    SET_GPR_U32(ctx, 31, 0x11AD4Cu);
    ctx->pc = 0x11AD48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AD4Cu; }
    }
    if (ctx->pc != 0x11AD4Cu) { return; }
    ctx->pc = 0x11AD4Cu;
    // 0x11ad4c: 0xc04518c
    ctx->pc = 0x11AD4Cu;
    SET_GPR_U32(ctx, 31, 0x11AD54u);
    ctx->pc = 0x11AD50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AD54u; }
    }
    if (ctx->pc != 0x11AD54u) { return; }
    ctx->pc = 0x11AD54u;
    // 0x11ad54: 0x8fa20030
    ctx->pc = 0x11ad54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11ad58:
    // 0x11ad58: 0xdfbf00b0
    ctx->pc = 0x11ad58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11ad5c: 0xdfb600a0
    ctx->pc = 0x11ad5cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11ad60: 0xdfb50090
    ctx->pc = 0x11ad60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11ad64: 0xdfb40080
    ctx->pc = 0x11ad64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11ad68: 0xdfb30070
    ctx->pc = 0x11ad68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11ad6c: 0xdfb20060
    ctx->pc = 0x11ad6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11ad70: 0xdfb10050
    ctx->pc = 0x11ad70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11ad74: 0xdfb00040
    ctx->pc = 0x11ad74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11ad78: 0x3e00008
    ctx->pc = 0x11AD78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AD7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11A4F4u: goto label_11a4f4;
            case 0x11A508u: goto label_11a508;
            case 0x11A518u: goto label_11a518;
            case 0x11A5A4u: goto label_11a5a4;
            case 0x11A5C8u: goto label_11a5c8;
            case 0x11A5DCu: goto label_11a5dc;
            case 0x11A654u: goto label_11a654;
            case 0x11A670u: goto label_11a670;
            case 0x11A698u: goto label_11a698;
            case 0x11A6A4u: goto label_11a6a4;
            case 0x11A6A8u: goto label_11a6a8;
            case 0x11A6BCu: goto label_11a6bc;
            case 0x11A734u: goto label_11a734;
            case 0x11A758u: goto label_11a758;
            case 0x11A76Cu: goto label_11a76c;
            case 0x11A7FCu: goto label_11a7fc;
            case 0x11A818u: goto label_11a818;
            case 0x11A840u: goto label_11a840;
            case 0x11A84Cu: goto label_11a84c;
            case 0x11A850u: goto label_11a850;
            case 0x11A860u: goto label_11a860;
            case 0x11A96Cu: goto label_11a96c;
            case 0x11A990u: goto label_11a990;
            case 0x11A9A4u: goto label_11a9a4;
            case 0x11AA30u: goto label_11aa30;
            case 0x11AA50u: goto label_11aa50;
            case 0x11AA7Cu: goto label_11aa7c;
            case 0x11AA88u: goto label_11aa88;
            case 0x11AA8Cu: goto label_11aa8c;
            case 0x11AA94u: goto label_11aa94;
            case 0x11AAB0u: goto label_11aab0;
            case 0x11AAD4u: goto label_11aad4;
            case 0x11AAE0u: goto label_11aae0;
            case 0x11AB68u: goto label_11ab68;
            case 0x11AB8Cu: goto label_11ab8c;
            case 0x11ABA0u: goto label_11aba0;
            case 0x11AC40u: goto label_11ac40;
            case 0x11AC60u: goto label_11ac60;
            case 0x11AC8Cu: goto label_11ac8c;
            case 0x11AC98u: goto label_11ac98;
            case 0x11AC9Cu: goto label_11ac9c;
            case 0x11ACA4u: goto label_11aca4;
            case 0x11AD20u: goto label_11ad20;
            case 0x11AD44u: goto label_11ad44;
            case 0x11AD58u: goto label_11ad58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11AD80u;
}
