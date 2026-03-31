#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011C7B8
// Address: 0x11c7b8 - 0x11cad8
void sub_0011C7B8_0x11c7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11c7b8u;

label_11c7b8:
    // 0x11c7b8: 0x27bdff90
    ctx->pc = 0x11c7b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11c7bc: 0xffb40050
    ctx->pc = 0x11c7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x11c7c0: 0xffb30040
    ctx->pc = 0x11c7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11c7c4: 0xc0a02d
    ctx->pc = 0x11c7c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c7c8: 0xffb20030
    ctx->pc = 0x11c7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11c7cc: 0xe0982d
    ctx->pc = 0x11c7ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c7d0: 0xffb00010
    ctx->pc = 0x11c7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11c7d4: 0xa0902d
    ctx->pc = 0x11c7d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c7d8: 0xffbf0060
    ctx->pc = 0x11c7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x11c7dc: 0x80802d
    ctx->pc = 0x11c7dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c7e0: 0xc046f5e
    ctx->pc = 0x11C7E0u;
    SET_GPR_U32(ctx, 31, 0x11C7E8u);
    ctx->pc = 0x11C7E4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    ctx->pc = 0x11BD78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011BD78_0x11bd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C7E8u; }
    }
    if (ctx->pc != 0x11C7E8u) { return; }
    ctx->pc = 0x11C7E8u;
    // 0x11c7e8: 0x440002c
    ctx->pc = 0x11C7E8u;
    {
        const bool branch_taken_0x11c7e8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11C7ECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
        if (branch_taken_0x11c7e8) {
            ctx->pc = 0x11C89Cu;
            goto label_11c89c;
        }
    }
    ctx->pc = 0x11C7F0u;
    // 0x11c7f0: 0xc046f9e
    ctx->pc = 0x11C7F0u;
    SET_GPR_U32(ctx, 31, 0x11C7F8u);
    ctx->pc = 0x11BE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011BE78_0x11be78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C7F8u; }
    }
    if (ctx->pc != 0x11C7F8u) { return; }
    ctx->pc = 0x11C7F8u;
    // 0x11c7f8: 0x50400004
    ctx->pc = 0x11C7F8u;
    {
        const bool branch_taken_0x11c7f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x11c7f8) {
            ctx->pc = 0x11C7FCu;
            SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
            ctx->pc = 0x11C80Cu;
            goto label_11c80c;
        }
    }
    ctx->pc = 0x11C800u;
    // 0x11c800: 0x3c02fffe
    ctx->pc = 0x11c800u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65534 << 16));
    // 0x11c804: 0x10000025
    ctx->pc = 0x11C804u;
    {
        const bool branch_taken_0x11c804 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C808u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65532));
        if (branch_taken_0x11c804) {
            ctx->pc = 0x11C89Cu;
            goto label_11c89c;
        }
    }
    ctx->pc = 0x11C80Cu;
label_11c80c:
    // 0x11c80c: 0x200282d
    ctx->pc = 0x11c80cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c810: 0x2451e408
    ctx->pc = 0x11c810u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294960136));
    // 0x11c814: 0x240600fc
    ctx->pc = 0x11c814u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 252));
    // 0x11c818: 0x220202d
    ctx->pc = 0x11c818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c81c: 0xc042d7e
    ctx->pc = 0x11C81Cu;
    SET_GPR_U32(ctx, 31, 0x11C824u);
    ctx->pc = 0x11C820u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 4294967288));
    ctx->pc = 0x10B5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B5F8_0x10b5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C824u; }
    }
    if (ctx->pc != 0x11C824u) { return; }
    ctx->pc = 0x11C824u;
    // 0x11c824: 0x240282d
    ctx->pc = 0x11c824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c828: 0xa2000103
    ctx->pc = 0x11c828u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 259), (uint8_t)GPR_U32(ctx, 0));
    // 0x11c82c: 0x262400fc
    ctx->pc = 0x11c82cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 252));
    // 0x11c830: 0xc042d7e
    ctx->pc = 0x11C830u;
    SET_GPR_U32(ctx, 31, 0x11C838u);
    ctx->pc = 0x11C834u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 252));
    ctx->pc = 0x10B5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B5F8_0x10b5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C838u; }
    }
    if (ctx->pc != 0x11C838u) { return; }
    ctx->pc = 0x11C838u;
    // 0x11c838: 0x3c040026
    ctx->pc = 0x11c838u;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x11c83c: 0xa20001ff
    ctx->pc = 0x11c83cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 511), (uint8_t)GPR_U32(ctx, 0));
    // 0x11c840: 0x260282d
    ctx->pc = 0x11c840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c844: 0x2484e600
    ctx->pc = 0x11c844u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294960640));
    // 0x11c848: 0xafa00000
    ctx->pc = 0x11c848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11c84c: 0x302d
    ctx->pc = 0x11c84cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c850: 0x200382d
    ctx->pc = 0x11c850u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c854: 0x24080200
    ctx->pc = 0x11c854u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 512));
    // 0x11c858: 0x200482d
    ctx->pc = 0x11c858u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c85c: 0x240a0010
    ctx->pc = 0x11c85cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 16));
    // 0x11c860: 0xc045e7a
    ctx->pc = 0x11C860u;
    SET_GPR_U32(ctx, 31, 0x11C868u);
    ctx->pc = 0x11C864u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C868u; }
    }
    if (ctx->pc != 0x11C868u) { return; }
    ctx->pc = 0x11C868u;
    // 0x11c868: 0x4430004
    ctx->pc = 0x11C868u;
    {
        const bool branch_taken_0x11c868 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11c868) {
            ctx->pc = 0x11C86Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294967288)));
            ctx->pc = 0x11C87Cu;
            goto label_11c87c;
        }
    }
    ctx->pc = 0x11C870u;
    // 0x11c870: 0x3c02fffe
    ctx->pc = 0x11c870u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65534 << 16));
    // 0x11c874: 0x10000009
    ctx->pc = 0x11C874u;
    {
        const bool branch_taken_0x11c874 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C878u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
        if (branch_taken_0x11c874) {
            ctx->pc = 0x11C89Cu;
            goto label_11c89c;
        }
    }
    ctx->pc = 0x11C87Cu;
label_11c87c:
    // 0x11c87c: 0x54400004
    ctx->pc = 0x11C87Cu;
    {
        const bool branch_taken_0x11c87c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11c87c) {
            ctx->pc = 0x11C880u;
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
            ctx->pc = 0x11C890u;
            goto label_11c890;
        }
    }
    ctx->pc = 0x11C884u;
    // 0x11c884: 0x3c02fffe
    ctx->pc = 0x11c884u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65534 << 16));
    // 0x11c888: 0x10000004
    ctx->pc = 0x11C888u;
    {
        const bool branch_taken_0x11c888 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C88Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65533));
        if (branch_taken_0x11c888) {
            ctx->pc = 0x11C89Cu;
            goto label_11c89c;
        }
    }
    ctx->pc = 0x11C890u;
label_11c890:
    // 0x11c890: 0x102d
    ctx->pc = 0x11c890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c894: 0x8e030004
    ctx->pc = 0x11c894u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11c898: 0xae830004
    ctx->pc = 0x11c898u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_11c89c:
    // 0x11c89c: 0xdfbf0060
    ctx->pc = 0x11c89cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11c8a0: 0xdfb40050
    ctx->pc = 0x11c8a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11c8a4: 0xdfb30040
    ctx->pc = 0x11c8a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11c8a8: 0xdfb20030
    ctx->pc = 0x11c8a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c8ac: 0xdfb10020
    ctx->pc = 0x11c8acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c8b0: 0xdfb00010
    ctx->pc = 0x11c8b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c8b4: 0x3e00008
    ctx->pc = 0x11C8B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C8B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C7B8u: goto label_11c7b8;
            case 0x11C80Cu: goto label_11c80c;
            case 0x11C87Cu: goto label_11c87c;
            case 0x11C890u: goto label_11c890;
            case 0x11C89Cu: goto label_11c89c;
            case 0x11C8D0u: goto label_11c8d0;
            case 0x11C8FCu: goto label_11c8fc;
            case 0x11C940u: goto label_11c940;
            case 0x11C994u: goto label_11c994;
            case 0x11C9A8u: goto label_11c9a8;
            case 0x11C9BCu: goto label_11c9bc;
            case 0x11C9C4u: goto label_11c9c4;
            case 0x11C9D0u: goto label_11c9d0;
            case 0x11C9D4u: goto label_11c9d4;
            case 0x11C9D8u: goto label_11c9d8;
            case 0x11CA2Cu: goto label_11ca2c;
            case 0x11CA48u: goto label_11ca48;
            case 0x11CA60u: goto label_11ca60;
            case 0x11CA74u: goto label_11ca74;
            case 0x11CA78u: goto label_11ca78;
            case 0x11CABCu: goto label_11cabc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11C8BCu;
    // 0x11c8bc: 0x0
    ctx->pc = 0x11c8bcu;
    // NOP
    // 0x11c8c0: 0x27bdfff0
    ctx->pc = 0x11c8c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11c8c4: 0xffbf0000
    ctx->pc = 0x11c8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11c8c8: 0xc0471ee
    ctx->pc = 0x11C8C8u;
    SET_GPR_U32(ctx, 31, 0x11C8D0u);
    ctx->pc = 0x11C8CCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x11C7B8u;
    goto label_11c7b8;
    ctx->pc = 0x11C8D0u;
label_11c8d0:
    // 0x11c8d0: 0xdfbf0000
    ctx->pc = 0x11c8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c8d4: 0x3e00008
    ctx->pc = 0x11C8D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C8D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C7B8u: goto label_11c7b8;
            case 0x11C80Cu: goto label_11c80c;
            case 0x11C87Cu: goto label_11c87c;
            case 0x11C890u: goto label_11c890;
            case 0x11C89Cu: goto label_11c89c;
            case 0x11C8D0u: goto label_11c8d0;
            case 0x11C8FCu: goto label_11c8fc;
            case 0x11C940u: goto label_11c940;
            case 0x11C994u: goto label_11c994;
            case 0x11C9A8u: goto label_11c9a8;
            case 0x11C9BCu: goto label_11c9bc;
            case 0x11C9C4u: goto label_11c9c4;
            case 0x11C9D0u: goto label_11c9d0;
            case 0x11C9D4u: goto label_11c9d4;
            case 0x11C9D8u: goto label_11c9d8;
            case 0x11CA2Cu: goto label_11ca2c;
            case 0x11CA48u: goto label_11ca48;
            case 0x11CA60u: goto label_11ca60;
            case 0x11CA74u: goto label_11ca74;
            case 0x11CA78u: goto label_11ca78;
            case 0x11CABCu: goto label_11cabc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11C8DCu;
    // 0x11c8dc: 0x0
    ctx->pc = 0x11c8dcu;
    // NOP
    // 0x11c8e0: 0xa0302d
    ctx->pc = 0x11c8e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c8e4: 0x27bdfff0
    ctx->pc = 0x11c8e4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11c8e8: 0x3c050024
    ctx->pc = 0x11c8e8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x11c8ec: 0xffbf0000
    ctx->pc = 0x11c8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11c8f0: 0x24a58b98
    ctx->pc = 0x11c8f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294937496));
    // 0x11c8f4: 0xc0471ee
    ctx->pc = 0x11C8F4u;
    SET_GPR_U32(ctx, 31, 0x11C8FCu);
    ctx->pc = 0x11C8F8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x11C7B8u;
    goto label_11c7b8;
    ctx->pc = 0x11C8FCu;
label_11c8fc:
    // 0x11c8fc: 0xdfbf0000
    ctx->pc = 0x11c8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c900: 0x3e00008
    ctx->pc = 0x11C900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C904u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C7B8u: goto label_11c7b8;
            case 0x11C80Cu: goto label_11c80c;
            case 0x11C87Cu: goto label_11c87c;
            case 0x11C890u: goto label_11c890;
            case 0x11C89Cu: goto label_11c89c;
            case 0x11C8D0u: goto label_11c8d0;
            case 0x11C8FCu: goto label_11c8fc;
            case 0x11C940u: goto label_11c940;
            case 0x11C994u: goto label_11c994;
            case 0x11C9A8u: goto label_11c9a8;
            case 0x11C9BCu: goto label_11c9bc;
            case 0x11C9C4u: goto label_11c9c4;
            case 0x11C9D0u: goto label_11c9d0;
            case 0x11C9D4u: goto label_11c9d4;
            case 0x11C9D8u: goto label_11c9d8;
            case 0x11CA2Cu: goto label_11ca2c;
            case 0x11CA48u: goto label_11ca48;
            case 0x11CA60u: goto label_11ca60;
            case 0x11CA74u: goto label_11ca74;
            case 0x11CA78u: goto label_11ca78;
            case 0x11CABCu: goto label_11cabc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11C908u;
    // 0x11c908: 0x27bdffa0
    ctx->pc = 0x11c908u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11c90c: 0xffb30040
    ctx->pc = 0x11c90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11c910: 0xffb20030
    ctx->pc = 0x11c910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11c914: 0x80982d
    ctx->pc = 0x11c914u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c918: 0xffb00010
    ctx->pc = 0x11c918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11c91c: 0xa0902d
    ctx->pc = 0x11c91cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c920: 0xffbf0050
    ctx->pc = 0x11c920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x11c924: 0xc0802d
    ctx->pc = 0x11c924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c928: 0xc046f5e
    ctx->pc = 0x11C928u;
    SET_GPR_U32(ctx, 31, 0x11C930u);
    ctx->pc = 0x11C92Cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    ctx->pc = 0x11BD78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011BD78_0x11bd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C930u; }
    }
    if (ctx->pc != 0x11C930u) { return; }
    ctx->pc = 0x11C930u;
    // 0x11c930: 0x4410003
    ctx->pc = 0x11C930u;
    {
        const bool branch_taken_0x11c930 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11C934u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 3));
        if (branch_taken_0x11c930) {
            ctx->pc = 0x11C940u;
            goto label_11c940;
        }
    }
    ctx->pc = 0x11C938u;
    // 0x11c938: 0x10000027
    ctx->pc = 0x11C938u;
    {
        const bool branch_taken_0x11c938 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C93Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
        if (branch_taken_0x11c938) {
            ctx->pc = 0x11C9D8u;
            goto label_11c9d8;
        }
    }
    ctx->pc = 0x11C940u;
label_11c940:
    // 0x11c940: 0x10400020
    ctx->pc = 0x11C940u;
    {
        const bool branch_taken_0x11c940 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C944u;
        SET_GPR_U32(ctx, 17, ((uint32_t)38 << 16));
        if (branch_taken_0x11c940) {
            ctx->pc = 0x11C9C4u;
            goto label_11c9c4;
        }
    }
    ctx->pc = 0x11C948u;
    // 0x11c948: 0x3c040026
    ctx->pc = 0x11c948u;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x11c94c: 0x2622e400
    ctx->pc = 0x11c94cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4294960128));
    // 0x11c950: 0xae33e400
    ctx->pc = 0x11c950u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294960128), GPR_U32(ctx, 19));
    // 0x11c954: 0x40382d
    ctx->pc = 0x11c954u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c958: 0xac500004
    ctx->pc = 0x11c958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x11c95c: 0x2484e600
    ctx->pc = 0x11c95cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294960640));
    // 0x11c960: 0x24050003
    ctx->pc = 0x11c960u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x11c964: 0xafa00000
    ctx->pc = 0x11c964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11c968: 0x302d
    ctx->pc = 0x11c968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c96c: 0x24080020
    ctx->pc = 0x11c96cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
    // 0x11c970: 0xe0482d
    ctx->pc = 0x11c970u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c974: 0x240a0020
    ctx->pc = 0x11c974u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 32));
    // 0x11c978: 0xc045e7a
    ctx->pc = 0x11C978u;
    SET_GPR_U32(ctx, 31, 0x11C980u);
    ctx->pc = 0x11C97Cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C980u; }
    }
    if (ctx->pc != 0x11C980u) { return; }
    ctx->pc = 0x11C980u;
    // 0x11c980: 0x4410004
    ctx->pc = 0x11C980u;
    {
        const bool branch_taken_0x11c980 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11c980) {
            ctx->pc = 0x11C994u;
            goto label_11c994;
        }
    }
    ctx->pc = 0x11C988u;
    // 0x11c988: 0x3c02fffe
    ctx->pc = 0x11c988u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65534 << 16));
    // 0x11c98c: 0x10000012
    ctx->pc = 0x11C98Cu;
    {
        const bool branch_taken_0x11c98c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C990u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
        if (branch_taken_0x11c98c) {
            ctx->pc = 0x11C9D8u;
            goto label_11c9d8;
        }
    }
    ctx->pc = 0x11C994u;
label_11c994:
    // 0x11c994: 0x16000004
    ctx->pc = 0x11C994u;
    {
        const bool branch_taken_0x11c994 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x11C998u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x11c994) {
            ctx->pc = 0x11C9A8u;
            goto label_11c9a8;
        }
    }
    ctx->pc = 0x11C99Cu;
    // 0x11c99c: 0x9222e400
    ctx->pc = 0x11c99cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294960128)));
    // 0x11c9a0: 0x1000000c
    ctx->pc = 0x11C9A0u;
    {
        const bool branch_taken_0x11c9a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C9A4u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x11c9a0) {
            ctx->pc = 0x11C9D4u;
            goto label_11c9d4;
        }
    }
    ctx->pc = 0x11C9A8u;
label_11c9a8:
    // 0x11c9a8: 0x16020004
    ctx->pc = 0x11C9A8u;
    {
        const bool branch_taken_0x11c9a8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x11C9ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x11c9a8) {
            ctx->pc = 0x11C9BCu;
            goto label_11c9bc;
        }
    }
    ctx->pc = 0x11C9B0u;
    // 0x11c9b0: 0x9622e400
    ctx->pc = 0x11c9b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294960128)));
    // 0x11c9b4: 0x10000007
    ctx->pc = 0x11C9B4u;
    {
        const bool branch_taken_0x11c9b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C9B8u;
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x11c9b4) {
            ctx->pc = 0x11C9D4u;
            goto label_11c9d4;
        }
    }
    ctx->pc = 0x11C9BCu;
label_11c9bc:
    // 0x11c9bc: 0x52020004
    ctx->pc = 0x11C9BCu;
    {
        const bool branch_taken_0x11c9bc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        if (branch_taken_0x11c9bc) {
            ctx->pc = 0x11C9C0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294960128)));
            ctx->pc = 0x11C9D0u;
            goto label_11c9d0;
        }
    }
    ctx->pc = 0x11C9C4u;
label_11c9c4:
    // 0x11c9c4: 0x3c02fffe
    ctx->pc = 0x11c9c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65534 << 16));
    // 0x11c9c8: 0x10000003
    ctx->pc = 0x11C9C8u;
    {
        const bool branch_taken_0x11c9c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C9CCu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65534));
        if (branch_taken_0x11c9c8) {
            ctx->pc = 0x11C9D8u;
            goto label_11c9d8;
        }
    }
    ctx->pc = 0x11C9D0u;
label_11c9d0:
    // 0x11c9d0: 0xae420000
    ctx->pc = 0x11c9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_11c9d4:
    // 0x11c9d4: 0x102d
    ctx->pc = 0x11c9d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11c9d8:
    // 0x11c9d8: 0xdfbf0050
    ctx->pc = 0x11c9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11c9dc: 0xdfb30040
    ctx->pc = 0x11c9dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11c9e0: 0xdfb20030
    ctx->pc = 0x11c9e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c9e4: 0xdfb10020
    ctx->pc = 0x11c9e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c9e8: 0xdfb00010
    ctx->pc = 0x11c9e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c9ec: 0x3e00008
    ctx->pc = 0x11C9ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C9F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C7B8u: goto label_11c7b8;
            case 0x11C80Cu: goto label_11c80c;
            case 0x11C87Cu: goto label_11c87c;
            case 0x11C890u: goto label_11c890;
            case 0x11C89Cu: goto label_11c89c;
            case 0x11C8D0u: goto label_11c8d0;
            case 0x11C8FCu: goto label_11c8fc;
            case 0x11C940u: goto label_11c940;
            case 0x11C994u: goto label_11c994;
            case 0x11C9A8u: goto label_11c9a8;
            case 0x11C9BCu: goto label_11c9bc;
            case 0x11C9C4u: goto label_11c9c4;
            case 0x11C9D0u: goto label_11c9d0;
            case 0x11C9D4u: goto label_11c9d4;
            case 0x11C9D8u: goto label_11c9d8;
            case 0x11CA2Cu: goto label_11ca2c;
            case 0x11CA48u: goto label_11ca48;
            case 0x11CA60u: goto label_11ca60;
            case 0x11CA74u: goto label_11ca74;
            case 0x11CA78u: goto label_11ca78;
            case 0x11CABCu: goto label_11cabc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11C9F4u;
    // 0x11c9f4: 0x0
    ctx->pc = 0x11c9f4u;
    // NOP
    // 0x11c9f8: 0x27bdffb0
    ctx->pc = 0x11c9f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11c9fc: 0xffb20030
    ctx->pc = 0x11c9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11ca00: 0xffb10020
    ctx->pc = 0x11ca00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11ca04: 0x80902d
    ctx->pc = 0x11ca04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca08: 0xffb00010
    ctx->pc = 0x11ca08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11ca0c: 0xa0882d
    ctx->pc = 0x11ca0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca10: 0xffbf0040
    ctx->pc = 0x11ca10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11ca14: 0xc046f5e
    ctx->pc = 0x11CA14u;
    SET_GPR_U32(ctx, 31, 0x11CA1Cu);
    ctx->pc = 0x11CA18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11BD78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011BD78_0x11bd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CA1Cu; }
    }
    if (ctx->pc != 0x11CA1Cu) { return; }
    ctx->pc = 0x11CA1Cu;
    // 0x11ca1c: 0x4410003
    ctx->pc = 0x11CA1Cu;
    {
        const bool branch_taken_0x11ca1c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11CA20u;
        SET_GPR_U32(ctx, 7, ((uint32_t)38 << 16));
        if (branch_taken_0x11ca1c) {
            ctx->pc = 0x11CA2Cu;
            goto label_11ca2c;
        }
    }
    ctx->pc = 0x11CA24u;
    // 0x11ca24: 0x10000025
    ctx->pc = 0x11CA24u;
    {
        const bool branch_taken_0x11ca24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11CA28u;
        SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
        if (branch_taken_0x11ca24) {
            ctx->pc = 0x11CABCu;
            goto label_11cabc;
        }
    }
    ctx->pc = 0x11CA2Cu;
label_11ca2c:
    // 0x11ca2c: 0x24e3e400
    ctx->pc = 0x11ca2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 7), 4294960128));
    // 0x11ca30: 0xacf2e400
    ctx->pc = 0x11ca30u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960128), GPR_U32(ctx, 18));
    // 0x11ca34: 0x16000004
    ctx->pc = 0x11CA34u;
    {
        const bool branch_taken_0x11ca34 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x11CA38u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
        if (branch_taken_0x11ca34) {
            ctx->pc = 0x11CA48u;
            goto label_11ca48;
        }
    }
    ctx->pc = 0x11CA3Cu;
    // 0x11ca3c: 0x92220000
    ctx->pc = 0x11ca3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11ca40: 0x1000000d
    ctx->pc = 0x11CA40u;
    {
        const bool branch_taken_0x11ca40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11CA44u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x11ca40) {
            ctx->pc = 0x11CA78u;
            goto label_11ca78;
        }
    }
    ctx->pc = 0x11CA48u;
label_11ca48:
    // 0x11ca48: 0x24020001
    ctx->pc = 0x11ca48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ca4c: 0x16020004
    ctx->pc = 0x11CA4Cu;
    {
        const bool branch_taken_0x11ca4c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x11CA50u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x11ca4c) {
            ctx->pc = 0x11CA60u;
            goto label_11ca60;
        }
    }
    ctx->pc = 0x11CA54u;
    // 0x11ca54: 0x96220000
    ctx->pc = 0x11ca54u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11ca58: 0x10000007
    ctx->pc = 0x11CA58u;
    {
        const bool branch_taken_0x11ca58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11CA5Cu;
        WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x11ca58) {
            ctx->pc = 0x11CA78u;
            goto label_11ca78;
        }
    }
    ctx->pc = 0x11CA60u;
label_11ca60:
    // 0x11ca60: 0x52020004
    ctx->pc = 0x11CA60u;
    {
        const bool branch_taken_0x11ca60 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        if (branch_taken_0x11ca60) {
            ctx->pc = 0x11CA64u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x11CA74u;
            goto label_11ca74;
        }
    }
    ctx->pc = 0x11CA68u;
    // 0x11ca68: 0x3c02fffe
    ctx->pc = 0x11ca68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65534 << 16));
    // 0x11ca6c: 0x10000013
    ctx->pc = 0x11CA6Cu;
    {
        const bool branch_taken_0x11ca6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11CA70u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65534));
        if (branch_taken_0x11ca6c) {
            ctx->pc = 0x11CABCu;
            goto label_11cabc;
        }
    }
    ctx->pc = 0x11CA74u;
label_11ca74:
    // 0x11ca74: 0xac620008
    ctx->pc = 0x11ca74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_11ca78:
    // 0x11ca78: 0x24e7e400
    ctx->pc = 0x11ca78u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294960128));
    // 0x11ca7c: 0x3c040026
    ctx->pc = 0x11ca7cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x11ca80: 0x2484e600
    ctx->pc = 0x11ca80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294960640));
    // 0x11ca84: 0xafa00000
    ctx->pc = 0x11ca84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11ca88: 0x24050002
    ctx->pc = 0x11ca88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x11ca8c: 0x302d
    ctx->pc = 0x11ca8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca90: 0x24080020
    ctx->pc = 0x11ca90u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
    // 0x11ca94: 0xe0482d
    ctx->pc = 0x11ca94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca98: 0x240a0010
    ctx->pc = 0x11ca98u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 16));
    // 0x11ca9c: 0xc045e7a
    ctx->pc = 0x11CA9Cu;
    SET_GPR_U32(ctx, 31, 0x11CAA4u);
    ctx->pc = 0x11CAA0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CAA4u; }
    }
    if (ctx->pc != 0x11CAA4u) { return; }
    ctx->pc = 0x11CAA4u;
    // 0x11caa4: 0x3c04fffe
    ctx->pc = 0x11caa4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65534 << 16));
    // 0x11caa8: 0x2403ffff
    ctx->pc = 0x11caa8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11caac: 0x62182a
    ctx->pc = 0x11caacu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x11cab0: 0x3484ffff
    ctx->pc = 0x11cab0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x11cab4: 0x80102d
    ctx->pc = 0x11cab4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cab8: 0x3100b
    ctx->pc = 0x11cab8u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
label_11cabc:
    // 0x11cabc: 0xdfbf0040
    ctx->pc = 0x11cabcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11cac0: 0xdfb20030
    ctx->pc = 0x11cac0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11cac4: 0xdfb10020
    ctx->pc = 0x11cac4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11cac8: 0xdfb00010
    ctx->pc = 0x11cac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11cacc: 0x3e00008
    ctx->pc = 0x11CACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CAD0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C7B8u: goto label_11c7b8;
            case 0x11C80Cu: goto label_11c80c;
            case 0x11C87Cu: goto label_11c87c;
            case 0x11C890u: goto label_11c890;
            case 0x11C89Cu: goto label_11c89c;
            case 0x11C8D0u: goto label_11c8d0;
            case 0x11C8FCu: goto label_11c8fc;
            case 0x11C940u: goto label_11c940;
            case 0x11C994u: goto label_11c994;
            case 0x11C9A8u: goto label_11c9a8;
            case 0x11C9BCu: goto label_11c9bc;
            case 0x11C9C4u: goto label_11c9c4;
            case 0x11C9D0u: goto label_11c9d0;
            case 0x11C9D4u: goto label_11c9d4;
            case 0x11C9D8u: goto label_11c9d8;
            case 0x11CA2Cu: goto label_11ca2c;
            case 0x11CA48u: goto label_11ca48;
            case 0x11CA60u: goto label_11ca60;
            case 0x11CA74u: goto label_11ca74;
            case 0x11CA78u: goto label_11ca78;
            case 0x11CABCu: goto label_11cabc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11CAD4u;
    // 0x11cad4: 0x0
    ctx->pc = 0x11cad4u;
    // NOP
}
