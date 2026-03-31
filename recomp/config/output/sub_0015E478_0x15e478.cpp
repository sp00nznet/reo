#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015E478
// Address: 0x15e478 - 0x15e570
void sub_0015E478_0x15e478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15e478u;

    // 0x15e478: 0x27bdfff0
    ctx->pc = 0x15e478u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15e47c: 0xffb00000
    ctx->pc = 0x15e47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15e480: 0xffbf0008
    ctx->pc = 0x15e480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x15e484: 0xc057ff0
    ctx->pc = 0x15E484u;
    SET_GPR_U32(ctx, 31, 0x15E48Cu);
    ctx->pc = 0x15E488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E48Cu; }
    }
    if (ctx->pc != 0x15E48Cu) { return; }
    ctx->pc = 0x15E48Cu;
    // 0x15e48c: 0x54400005
    ctx->pc = 0x15E48Cu;
    {
        const bool branch_taken_0x15e48c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x15e48c) {
            ctx->pc = 0x15E490u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 132)));
            ctx->pc = 0x15E4A4u;
            goto label_15e4a4;
        }
    }
    ctx->pc = 0x15E494u;
    // 0x15e494: 0x3c040024
    ctx->pc = 0x15e494u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15e498: 0xc058dd4
    ctx->pc = 0x15E498u;
    SET_GPR_U32(ctx, 31, 0x15E4A0u);
    ctx->pc = 0x15E49Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962576));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E4A0u; }
    }
    if (ctx->pc != 0x15E4A0u) { return; }
    ctx->pc = 0x15E4A0u;
    // 0x15e4a0: 0x102d
    ctx->pc = 0x15e4a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e4a4:
    // 0x15e4a4: 0xdfb00000
    ctx->pc = 0x15e4a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e4a8: 0xdfbf0008
    ctx->pc = 0x15e4a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15e4ac: 0x3e00008
    ctx->pc = 0x15E4ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E4B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15E4A4u: goto label_15e4a4;
            case 0x15E52Cu: goto label_15e52c;
            case 0x15E540u: goto label_15e540;
            case 0x15E558u: goto label_15e558;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15E4B4u;
    // 0x15e4b4: 0x0
    ctx->pc = 0x15e4b4u;
    // NOP
    // 0x15e4b8: 0x27bdffd0
    ctx->pc = 0x15e4b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15e4bc: 0xffb00010
    ctx->pc = 0x15e4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x15e4c0: 0x3a0282d
    ctx->pc = 0x15e4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e4c4: 0xffb10018
    ctx->pc = 0x15e4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x15e4c8: 0x27a60004
    ctx->pc = 0x15e4c8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
    // 0x15e4cc: 0xffbf0020
    ctx->pc = 0x15e4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15e4d0: 0xc05d668
    ctx->pc = 0x15E4D0u;
    SET_GPR_U32(ctx, 31, 0x15E4D8u);
    ctx->pc = 0x15E4D4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    ctx->pc = 0x1759A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001759A0_0x1759a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E4D8u; }
    }
    if (ctx->pc != 0x15E4D8u) { return; }
    ctx->pc = 0x15E4D8u;
    // 0x15e4d8: 0x1440001f
    ctx->pc = 0x15E4D8u;
    {
        const bool branch_taken_0x15e4d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15E4DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x15e4d8) {
            ctx->pc = 0x15E558u;
            goto label_15e558;
        }
    }
    ctx->pc = 0x15E4E0u;
    // 0x15e4e0: 0x8fa50004
    ctx->pc = 0x15e4e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15e4e4: 0x2ca20800
    ctx->pc = 0x15e4e4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), 2048));
    // 0x15e4e8: 0x5440001b
    ctx->pc = 0x15E4E8u;
    {
        const bool branch_taken_0x15e4e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x15e4e8) {
            ctx->pc = 0x15E4ECu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->pc = 0x15E558u;
            goto label_15e558;
        }
    }
    ctx->pc = 0x15E4F0u;
    // 0x15e4f0: 0x8fa40000
    ctx->pc = 0x15e4f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e4f4: 0x50800018
    ctx->pc = 0x15E4F4u;
    {
        const bool branch_taken_0x15e4f4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x15e4f4) {
            ctx->pc = 0x15E4F8u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->pc = 0x15E558u;
            goto label_15e558;
        }
    }
    ctx->pc = 0x15E4FCu;
    // 0x15e4fc: 0xc05e43c
    ctx->pc = 0x15E4FCu;
    SET_GPR_U32(ctx, 31, 0x15E504u);
    ctx->pc = 0x1790F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001790F0_0x1790f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E504u; }
    }
    if (ctx->pc != 0x15E504u) { return; }
    ctx->pc = 0x15E504u;
    // 0x15e504: 0x40882d
    ctx->pc = 0x15e504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e508: 0x12200013
    ctx->pc = 0x15E508u;
    {
        const bool branch_taken_0x15e508 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x15E50Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x15e508) {
            ctx->pc = 0x15E558u;
            goto label_15e558;
        }
    }
    ctx->pc = 0x15E510u;
    // 0x15e510: 0x220202d
    ctx->pc = 0x15e510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e514: 0xc05e4c2
    ctx->pc = 0x15E514u;
    SET_GPR_U32(ctx, 31, 0x15E51Cu);
    ctx->pc = 0x15E518u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 8));
    ctx->pc = 0x179308u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00179308_0x179308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E51Cu; }
    }
    if (ctx->pc != 0x15E51Cu) { return; }
    ctx->pc = 0x15E51Cu;
    // 0x15e51c: 0x10400003
    ctx->pc = 0x15E51Cu;
    {
        const bool branch_taken_0x15e51c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15E520u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x15e51c) {
            ctx->pc = 0x15E52Cu;
            goto label_15e52c;
        }
    }
    ctx->pc = 0x15E524u;
    // 0x15e524: 0x14400006
    ctx->pc = 0x15E524u;
    {
        const bool branch_taken_0x15e524 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x15e524) {
            ctx->pc = 0x15E540u;
            goto label_15e540;
        }
    }
    ctx->pc = 0x15E52Cu;
label_15e52c:
    // 0x15e52c: 0xc05e46e
    ctx->pc = 0x15E52Cu;
    SET_GPR_U32(ctx, 31, 0x15E534u);
    ctx->pc = 0x15E530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1791B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001791B8_0x1791b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E534u; }
    }
    if (ctx->pc != 0x15E534u) { return; }
    ctx->pc = 0x15E534u;
    // 0x15e534: 0x10000008
    ctx->pc = 0x15E534u;
    {
        const bool branch_taken_0x15e534 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15E538u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x15e534) {
            ctx->pc = 0x15E558u;
            goto label_15e558;
        }
    }
    ctx->pc = 0x15E53Cu;
    // 0x15e53c: 0x0
    ctx->pc = 0x15e53cu;
    // NOP
label_15e540:
    // 0x15e540: 0xc05795c
    ctx->pc = 0x15E540u;
    SET_GPR_U32(ctx, 31, 0x15E548u);
    ctx->pc = 0x15E544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15E570u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E570_0x15e570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E548u; }
    }
    if (ctx->pc != 0x15E548u) { return; }
    ctx->pc = 0x15E548u;
    // 0x15e548: 0x220202d
    ctx->pc = 0x15e548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e54c: 0xc05e46e
    ctx->pc = 0x15E54Cu;
    SET_GPR_U32(ctx, 31, 0x15E554u);
    ctx->pc = 0x15E550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1791B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001791B8_0x1791b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E554u; }
    }
    if (ctx->pc != 0x15E554u) { return; }
    ctx->pc = 0x15E554u;
    // 0x15e554: 0x200102d
    ctx->pc = 0x15e554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15e558:
    // 0x15e558: 0xdfb00010
    ctx->pc = 0x15e558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e55c: 0xdfb10018
    ctx->pc = 0x15e55cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15e560: 0xdfbf0020
    ctx->pc = 0x15e560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e564: 0x3e00008
    ctx->pc = 0x15E564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E568u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15E4A4u: goto label_15e4a4;
            case 0x15E52Cu: goto label_15e52c;
            case 0x15E540u: goto label_15e540;
            case 0x15E558u: goto label_15e558;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15E56Cu;
    // 0x15e56c: 0x0
    ctx->pc = 0x15e56cu;
    // NOP
}
