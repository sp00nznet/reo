#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C6310
// Address: 0x1c6310 - 0x1c64c0
void sub_001C6310_0x1c6310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c6310u;

label_1c6310:
    // 0x1c6310: 0x8c8301ac
    ctx->pc = 0x1c6310u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 428)));
    // 0x1c6314: 0x14600003
    ctx->pc = 0x1C6314u;
    {
        const bool branch_taken_0x1c6314 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c6314) {
            ctx->pc = 0x1C6324u;
            goto label_1c6324;
        }
    }
    ctx->pc = 0x1C631Cu;
    // 0x1c631c: 0x8c8301a8
    ctx->pc = 0x1c631cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 424)));
    // 0x1c6320: 0xac8301ac
    ctx->pc = 0x1c6320u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 428), GPR_U32(ctx, 3));
label_1c6324:
    // 0x1c6324: 0x8c8301b8
    ctx->pc = 0x1c6324u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 440)));
    // 0x1c6328: 0x3e00008
    ctx->pc = 0x1C6328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C632Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 444), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C6310u: goto label_1c6310;
            case 0x1C6324u: goto label_1c6324;
            case 0x1C6360u: goto label_1c6360;
            case 0x1C6384u: goto label_1c6384;
            case 0x1C6388u: goto label_1c6388;
            case 0x1C63F0u: goto label_1c63f0;
            case 0x1C63F4u: goto label_1c63f4;
            case 0x1C6450u: goto label_1c6450;
            case 0x1C6458u: goto label_1c6458;
            case 0x1C64A0u: goto label_1c64a0;
            case 0x1C64A4u: goto label_1c64a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C6330u;
    // 0x1c6330: 0x80720d4
    ctx->pc = 0x1C6330u;
    ctx->pc = 0x1C6334u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 40));
    ctx->pc = 0x1C8350u;
    entry_1c8350_0x1c8420(rdram, ctx, runtime); return;
    ctx->pc = 0x1C6338u;
    // 0x1c6338: 0x0
    ctx->pc = 0x1c6338u;
    // NOP
    // 0x1c633c: 0x0
    ctx->pc = 0x1c633cu;
    // NOP
    // 0x1c6340: 0x8072108
    ctx->pc = 0x1C6340u;
    ctx->pc = 0x1C6344u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 40));
    ctx->pc = 0x1C8420u;
    entry_1c8420_0x1c8430(rdram, ctx, runtime); return;
    ctx->pc = 0x1C6348u;
    // 0x1c6348: 0x0
    ctx->pc = 0x1c6348u;
    // NOP
    // 0x1c634c: 0x0
    ctx->pc = 0x1c634cu;
    // NOP
    // 0x1c6350: 0x807210c
    ctx->pc = 0x1C6350u;
    ctx->pc = 0x1C6354u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 40));
    ctx->pc = 0x1C8430u;
    entry_1c8430_0x1c8440(rdram, ctx, runtime); return;
    ctx->pc = 0x1C6358u;
    // 0x1c6358: 0x0
    ctx->pc = 0x1c6358u;
    // NOP
    // 0x1c635c: 0x0
    ctx->pc = 0x1c635cu;
    // NOP
label_1c6360:
    // 0x1c6360: 0x27bdfff0
    ctx->pc = 0x1c6360u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6364: 0xffbf0000
    ctx->pc = 0x1c6364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c6368: 0xc0721fc
    ctx->pc = 0x1C6368u;
    SET_GPR_U32(ctx, 31, 0x1C6370u);
    ctx->pc = 0x1C636Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 40));
    ctx->pc = 0x1C87F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C87F0_0x1c87f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6370u; }
    }
    if (ctx->pc != 0x1C6370u) { return; }
    ctx->pc = 0x1C6370u;
    // 0x1c6370: 0x24030003
    ctx->pc = 0x1c6370u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c6374: 0x14430003
    ctx->pc = 0x1C6374u;
    {
        const bool branch_taken_0x1c6374 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1c6374) {
            ctx->pc = 0x1C6384u;
            goto label_1c6384;
        }
    }
    ctx->pc = 0x1C637Cu;
    // 0x1c637c: 0x10000002
    ctx->pc = 0x1C637Cu;
    {
        const bool branch_taken_0x1c637c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C6380u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1c637c) {
            ctx->pc = 0x1C6388u;
            goto label_1c6388;
        }
    }
    ctx->pc = 0x1C6384u;
label_1c6384:
    // 0x1c6384: 0x102d
    ctx->pc = 0x1c6384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6388:
    // 0x1c6388: 0xdfbf0000
    ctx->pc = 0x1c6388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c638c: 0x3e00008
    ctx->pc = 0x1C638Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6390u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C6310u: goto label_1c6310;
            case 0x1C6324u: goto label_1c6324;
            case 0x1C6360u: goto label_1c6360;
            case 0x1C6384u: goto label_1c6384;
            case 0x1C6388u: goto label_1c6388;
            case 0x1C63F0u: goto label_1c63f0;
            case 0x1C63F4u: goto label_1c63f4;
            case 0x1C6450u: goto label_1c6450;
            case 0x1C6458u: goto label_1c6458;
            case 0x1C64A0u: goto label_1c64a0;
            case 0x1C64A4u: goto label_1c64a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C6394u;
    // 0x1c6394: 0x0
    ctx->pc = 0x1c6394u;
    // NOP
    // 0x1c6398: 0x0
    ctx->pc = 0x1c6398u;
    // NOP
    // 0x1c639c: 0x0
    ctx->pc = 0x1c639cu;
    // NOP
    // 0x1c63a0: 0x80718d8
    ctx->pc = 0x1C63A0u;
    ctx->pc = 0x1C6360u;
    goto label_1c6360;
    ctx->pc = 0x1C63A8u;
    // 0x1c63a8: 0x0
    ctx->pc = 0x1c63a8u;
    // NOP
    // 0x1c63ac: 0x0
    ctx->pc = 0x1c63acu;
    // NOP
    // 0x1c63b0: 0x27bdffe0
    ctx->pc = 0x1c63b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c63b4: 0xffbf0010
    ctx->pc = 0x1c63b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c63b8: 0x7fb00000
    ctx->pc = 0x1c63b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c63bc: 0x80802d
    ctx->pc = 0x1c63bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c63c0: 0xc072110
    ctx->pc = 0x1C63C0u;
    SET_GPR_U32(ctx, 31, 0x1C63C8u);
    ctx->pc = 0x1C63C4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 40));
    ctx->pc = 0x1C8440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8440_0x1c8440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C63C8u; }
    }
    if (ctx->pc != 0x1C63C8u) { return; }
    ctx->pc = 0x1C63C8u;
    // 0x1c63c8: 0x960201e0
    ctx->pc = 0x1c63c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 480)));
    // 0x1c63cc: 0x26040028
    ctx->pc = 0x1c63ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 40));
    // 0x1c63d0: 0x24420001
    ctx->pc = 0x1c63d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c63d4: 0xc0721fc
    ctx->pc = 0x1C63D4u;
    SET_GPR_U32(ctx, 31, 0x1C63DCu);
    ctx->pc = 0x1C63D8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 480), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1C87F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C87F0_0x1c87f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C63DCu; }
    }
    if (ctx->pc != 0x1C63DCu) { return; }
    ctx->pc = 0x1C63DCu;
    // 0x1c63dc: 0x24030003
    ctx->pc = 0x1c63dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c63e0: 0x14430003
    ctx->pc = 0x1C63E0u;
    {
        const bool branch_taken_0x1c63e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1c63e0) {
            ctx->pc = 0x1C63F0u;
            goto label_1c63f0;
        }
    }
    ctx->pc = 0x1C63E8u;
    // 0x1c63e8: 0x10000002
    ctx->pc = 0x1C63E8u;
    {
        const bool branch_taken_0x1c63e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C63ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1c63e8) {
            ctx->pc = 0x1C63F4u;
            goto label_1c63f4;
        }
    }
    ctx->pc = 0x1C63F0u;
label_1c63f0:
    // 0x1c63f0: 0x102d
    ctx->pc = 0x1c63f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c63f4:
    // 0x1c63f4: 0xdfbf0010
    ctx->pc = 0x1c63f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c63f8: 0x7bb00000
    ctx->pc = 0x1c63f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c63fc: 0x3e00008
    ctx->pc = 0x1C63FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6400u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C6310u: goto label_1c6310;
            case 0x1C6324u: goto label_1c6324;
            case 0x1C6360u: goto label_1c6360;
            case 0x1C6384u: goto label_1c6384;
            case 0x1C6388u: goto label_1c6388;
            case 0x1C63F0u: goto label_1c63f0;
            case 0x1C63F4u: goto label_1c63f4;
            case 0x1C6450u: goto label_1c6450;
            case 0x1C6458u: goto label_1c6458;
            case 0x1C64A0u: goto label_1c64a0;
            case 0x1C64A4u: goto label_1c64a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C6404u;
    // 0x1c6404: 0x0
    ctx->pc = 0x1c6404u;
    // NOP
    // 0x1c6408: 0x0
    ctx->pc = 0x1c6408u;
    // NOP
    // 0x1c640c: 0x0
    ctx->pc = 0x1c640cu;
    // NOP
    // 0x1c6410: 0x27bdffd0
    ctx->pc = 0x1c6410u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c6414: 0x30a200ff
    ctx->pc = 0x1c6414u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 255));
    // 0x1c6418: 0xffbf0020
    ctx->pc = 0x1c6418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c641c: 0x7fb10010
    ctx->pc = 0x1c641cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c6420: 0x7fb00000
    ctx->pc = 0x1c6420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c6424: 0x80882d
    ctx->pc = 0x1c6424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6428: 0x1440000b
    ctx->pc = 0x1C6428u;
    {
        const bool branch_taken_0x1c6428 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C642Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c6428) {
            ctx->pc = 0x1C6458u;
            goto label_1c6458;
        }
    }
    ctx->pc = 0x1C6430u;
    // 0x1c6430: 0xc071830
    ctx->pc = 0x1C6430u;
    SET_GPR_U32(ctx, 31, 0x1C6438u);
    ctx->pc = 0x1C60C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C60C0_0x1c60c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6438u; }
    }
    if (ctx->pc != 0x1C6438u) { return; }
    ctx->pc = 0x1C6438u;
    // 0x1c6438: 0x1040001a
    ctx->pc = 0x1C6438u;
    {
        const bool branch_taken_0x1c6438 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C643Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c6438) {
            ctx->pc = 0x1C64A4u;
            goto label_1c64a4;
        }
    }
    ctx->pc = 0x1C6440u;
    // 0x1c6440: 0xc071930
    ctx->pc = 0x1C6440u;
    SET_GPR_U32(ctx, 31, 0x1C6448u);
    ctx->pc = 0x1C64C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C64C0_0x1c64c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6448u; }
    }
    if (ctx->pc != 0x1C6448u) { return; }
    ctx->pc = 0x1C6448u;
    // 0x1c6448: 0xc0718c4
    ctx->pc = 0x1C6448u;
    SET_GPR_U32(ctx, 31, 0x1C6450u);
    ctx->pc = 0x1C644Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C6310u;
    goto label_1c6310;
    ctx->pc = 0x1C6450u;
label_1c6450:
    // 0x1c6450: 0x10000014
    ctx->pc = 0x1C6450u;
    {
        const bool branch_taken_0x1c6450 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C6454u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1c6450) {
            ctx->pc = 0x1C64A4u;
            goto label_1c64a4;
        }
    }
    ctx->pc = 0x1C6458u;
label_1c6458:
    // 0x1c6458: 0xc072170
    ctx->pc = 0x1C6458u;
    SET_GPR_U32(ctx, 31, 0x1C6460u);
    ctx->pc = 0x1C645Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 40));
    ctx->pc = 0x1C85C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C85C0_0x1c85c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6460u; }
    }
    if (ctx->pc != 0x1C6460u) { return; }
    ctx->pc = 0x1C6460u;
    // 0x1c6460: 0x304200ff
    ctx->pc = 0x1c6460u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1c6464: 0x28410002
    ctx->pc = 0x1c6464u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 2));
    // 0x1c6468: 0x1020000e
    ctx->pc = 0x1C6468u;
    {
        const bool branch_taken_0x1c6468 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C646Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c6468) {
            ctx->pc = 0x1C64A4u;
            goto label_1c64a4;
        }
    }
    ctx->pc = 0x1C6470u;
    // 0x1c6470: 0xc071830
    ctx->pc = 0x1C6470u;
    SET_GPR_U32(ctx, 31, 0x1C6478u);
    ctx->pc = 0x1C6474u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 480), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1C60C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C60C0_0x1c60c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6478u; }
    }
    if (ctx->pc != 0x1C6478u) { return; }
    ctx->pc = 0x1C6478u;
    // 0x1c6478: 0x1040000a
    ctx->pc = 0x1C6478u;
    {
        const bool branch_taken_0x1c6478 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C647Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c6478) {
            ctx->pc = 0x1C64A4u;
            goto label_1c64a4;
        }
    }
    ctx->pc = 0x1C6480u;
    // 0x1c6480: 0xc071930
    ctx->pc = 0x1C6480u;
    SET_GPR_U32(ctx, 31, 0x1C6488u);
    ctx->pc = 0x1C64C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C64C0_0x1c64c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6488u; }
    }
    if (ctx->pc != 0x1C6488u) { return; }
    ctx->pc = 0x1C6488u;
    // 0x1c6488: 0x26240028
    ctx->pc = 0x1c6488u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 40));
    // 0x1c648c: 0x282d
    ctx->pc = 0x1c648cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6490: 0xc072188
    ctx->pc = 0x1C6490u;
    SET_GPR_U32(ctx, 31, 0x1C6498u);
    ctx->pc = 0x1C6494u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 20));
    ctx->pc = 0x1C8620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8620_0x1c8620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6498u; }
    }
    if (ctx->pc != 0x1C6498u) { return; }
    ctx->pc = 0x1C6498u;
    // 0x1c6498: 0xc0718c4
    ctx->pc = 0x1C6498u;
    SET_GPR_U32(ctx, 31, 0x1C64A0u);
    ctx->pc = 0x1C649Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C6310u;
    goto label_1c6310;
    ctx->pc = 0x1C64A0u;
label_1c64a0:
    // 0x1c64a0: 0x24100001
    ctx->pc = 0x1c64a0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_1c64a4:
    // 0x1c64a4: 0x200102d
    ctx->pc = 0x1c64a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c64a8: 0xdfbf0020
    ctx->pc = 0x1c64a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c64ac: 0x7bb10010
    ctx->pc = 0x1c64acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c64b0: 0x7bb00000
    ctx->pc = 0x1c64b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c64b4: 0x3e00008
    ctx->pc = 0x1C64B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C64B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C6310u: goto label_1c6310;
            case 0x1C6324u: goto label_1c6324;
            case 0x1C6360u: goto label_1c6360;
            case 0x1C6384u: goto label_1c6384;
            case 0x1C6388u: goto label_1c6388;
            case 0x1C63F0u: goto label_1c63f0;
            case 0x1C63F4u: goto label_1c63f4;
            case 0x1C6450u: goto label_1c6450;
            case 0x1C6458u: goto label_1c6458;
            case 0x1C64A0u: goto label_1c64a0;
            case 0x1C64A4u: goto label_1c64a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C64BCu;
    // 0x1c64bc: 0x0
    ctx->pc = 0x1c64bcu;
    // NOP
}
