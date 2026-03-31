#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0019D440
// Address: 0x19d440 - 0x19d5b0
void sub_0019D440_0x19d440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x19d440u;

    // 0x19d440: 0x2485ffff
    ctx->pc = 0x19d440u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x19d444: 0x27bdffe0
    ctx->pc = 0x19d444u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19d448: 0x518c0
    ctx->pc = 0x19d448u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x19d44c: 0xffbf0010
    ctx->pc = 0x19d44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19d450: 0x3c02002a
    ctx->pc = 0x19d450u;
    SET_GPR_U32(ctx, 2, ((uint32_t)42 << 16));
    // 0x19d454: 0x651823
    ctx->pc = 0x19d454u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19d458: 0x7fb00000
    ctx->pc = 0x19d458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19d45c: 0x24428680
    ctx->pc = 0x19d45cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294936192));
    // 0x19d460: 0x318c0
    ctx->pc = 0x19d460u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x19d464: 0x14800003
    ctx->pc = 0x19D464u;
    {
        const bool branch_taken_0x19d464 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x19D468u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x19d464) {
            ctx->pc = 0x19D474u;
            goto label_19d474;
        }
    }
    ctx->pc = 0x19D46Cu;
    // 0x19d46c: 0x1000001e
    ctx->pc = 0x19D46Cu;
    {
        const bool branch_taken_0x19d46c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D470u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19d46c) {
            ctx->pc = 0x19D4E8u;
            goto label_19d4e8;
        }
    }
    ctx->pc = 0x19D474u;
label_19d474:
    // 0x19d474: 0x2c810101
    ctx->pc = 0x19d474u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 4), 257));
    // 0x19d478: 0x14200003
    ctx->pc = 0x19D478u;
    {
        const bool branch_taken_0x19d478 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x19D47Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19d478) {
            ctx->pc = 0x19D488u;
            goto label_19d488;
        }
    }
    ctx->pc = 0x19D480u;
    // 0x19d480: 0x1000001a
    ctx->pc = 0x19D480u;
    {
        const bool branch_taken_0x19d480 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D484u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x19d480) {
            ctx->pc = 0x19D4ECu;
            goto label_19d4ec;
        }
    }
    ctx->pc = 0x19D488u;
label_19d488:
    // 0x19d488: 0x82020034
    ctx->pc = 0x19d488u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x19d48c: 0x14400003
    ctx->pc = 0x19D48Cu;
    {
        const bool branch_taken_0x19d48c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19D490u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19d48c) {
            ctx->pc = 0x19D49Cu;
            goto label_19d49c;
        }
    }
    ctx->pc = 0x19D494u;
    // 0x19d494: 0x10000014
    ctx->pc = 0x19D494u;
    {
        const bool branch_taken_0x19d494 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x19d494) {
            ctx->pc = 0x19D4E8u;
            goto label_19d4e8;
        }
    }
    ctx->pc = 0x19D49Cu;
label_19d49c:
    // 0x19d49c: 0xc0635b0
    ctx->pc = 0x19D49Cu;
    SET_GPR_U32(ctx, 31, 0x19D4A4u);
    ctx->pc = 0x18D6C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018D6C0_0x18d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D4A4u; }
    }
    if (ctx->pc != 0x19D4A4u) { return; }
    ctx->pc = 0x19D4A4u;
    // 0x19d4a4: 0xc067bb4
    ctx->pc = 0x19D4A4u;
    SET_GPR_U32(ctx, 31, 0x19D4ACu);
    ctx->pc = 0x19D4A8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19EED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019EED0_0x19eed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D4ACu; }
    }
    if (ctx->pc != 0x19D4ACu) { return; }
    ctx->pc = 0x19D4ACu;
    // 0x19d4ac: 0x8e040024
    ctx->pc = 0x19d4acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19d4b0: 0x10800003
    ctx->pc = 0x19D4B0u;
    {
        const bool branch_taken_0x19d4b0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x19d4b0) {
            ctx->pc = 0x19D4C0u;
            goto label_19d4c0;
        }
    }
    ctx->pc = 0x19D4B8u;
    // 0x19d4b8: 0xc063724
    ctx->pc = 0x19D4B8u;
    SET_GPR_U32(ctx, 31, 0x19D4C0u);
    ctx->pc = 0x18DC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DC90_0x18dc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D4C0u; }
    }
    if (ctx->pc != 0x19D4C0u) { return; }
    ctx->pc = 0x19D4C0u;
label_19d4c0:
    // 0x19d4c0: 0x200202d
    ctx->pc = 0x19d4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d4c4: 0x282d
    ctx->pc = 0x19d4c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d4c8: 0xc0636e0
    ctx->pc = 0x19D4C8u;
    SET_GPR_U32(ctx, 31, 0x19D4D0u);
    ctx->pc = 0x19D4CCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 56));
    ctx->pc = 0x18DB80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DB80_0x18db80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D4D0u; }
    }
    if (ctx->pc != 0x19D4D0u) { return; }
    ctx->pc = 0x19D4D0u;
    // 0x19d4d0: 0x3c01002a
    ctx->pc = 0x19d4d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19d4d4: 0x24020001
    ctx->pc = 0x19d4d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d4d8: 0x8c23fee0
    ctx->pc = 0x19d4d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294967008)));
    // 0x19d4dc: 0x2463ffff
    ctx->pc = 0x19d4dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19d4e0: 0x3c01002a
    ctx->pc = 0x19d4e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19d4e4: 0xac23fee0
    ctx->pc = 0x19d4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294967008), GPR_U32(ctx, 3));
label_19d4e8:
    // 0x19d4e8: 0xdfbf0010
    ctx->pc = 0x19d4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19d4ec:
    // 0x19d4ec: 0x7bb00000
    ctx->pc = 0x19d4ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d4f0: 0x3e00008
    ctx->pc = 0x19D4F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D4F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D474u: goto label_19d474;
            case 0x19D488u: goto label_19d488;
            case 0x19D49Cu: goto label_19d49c;
            case 0x19D4C0u: goto label_19d4c0;
            case 0x19D4E8u: goto label_19d4e8;
            case 0x19D4ECu: goto label_19d4ec;
            case 0x19D534u: goto label_19d534;
            case 0x19D548u: goto label_19d548;
            case 0x19D55Cu: goto label_19d55c;
            case 0x19D578u: goto label_19d578;
            case 0x19D5A0u: goto label_19d5a0;
            case 0x19D5A4u: goto label_19d5a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19D4F8u;
    // 0x19d4f8: 0x0
    ctx->pc = 0x19d4f8u;
    // NOP
    // 0x19d4fc: 0x0
    ctx->pc = 0x19d4fcu;
    // NOP
    // 0x19d500: 0x2485ffff
    ctx->pc = 0x19d500u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x19d504: 0x27bdffe0
    ctx->pc = 0x19d504u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19d508: 0x518c0
    ctx->pc = 0x19d508u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x19d50c: 0xffbf0010
    ctx->pc = 0x19d50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19d510: 0x3c02002a
    ctx->pc = 0x19d510u;
    SET_GPR_U32(ctx, 2, ((uint32_t)42 << 16));
    // 0x19d514: 0x651823
    ctx->pc = 0x19d514u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19d518: 0x7fb00000
    ctx->pc = 0x19d518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19d51c: 0x24428680
    ctx->pc = 0x19d51cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294936192));
    // 0x19d520: 0x318c0
    ctx->pc = 0x19d520u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x19d524: 0x14800003
    ctx->pc = 0x19D524u;
    {
        const bool branch_taken_0x19d524 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x19D528u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x19d524) {
            ctx->pc = 0x19D534u;
            goto label_19d534;
        }
    }
    ctx->pc = 0x19D52Cu;
    // 0x19d52c: 0x1000001c
    ctx->pc = 0x19D52Cu;
    {
        const bool branch_taken_0x19d52c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D530u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19d52c) {
            ctx->pc = 0x19D5A0u;
            goto label_19d5a0;
        }
    }
    ctx->pc = 0x19D534u;
label_19d534:
    // 0x19d534: 0x2c810101
    ctx->pc = 0x19d534u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 4), 257));
    // 0x19d538: 0x14200003
    ctx->pc = 0x19D538u;
    {
        const bool branch_taken_0x19d538 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x19D53Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19d538) {
            ctx->pc = 0x19D548u;
            goto label_19d548;
        }
    }
    ctx->pc = 0x19D540u;
    // 0x19d540: 0x10000018
    ctx->pc = 0x19D540u;
    {
        const bool branch_taken_0x19d540 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D544u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x19d540) {
            ctx->pc = 0x19D5A4u;
            goto label_19d5a4;
        }
    }
    ctx->pc = 0x19D548u;
label_19d548:
    // 0x19d548: 0x82020034
    ctx->pc = 0x19d548u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x19d54c: 0x14400003
    ctx->pc = 0x19D54Cu;
    {
        const bool branch_taken_0x19d54c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19D550u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19d54c) {
            ctx->pc = 0x19D55Cu;
            goto label_19d55c;
        }
    }
    ctx->pc = 0x19D554u;
    // 0x19d554: 0x10000012
    ctx->pc = 0x19D554u;
    {
        const bool branch_taken_0x19d554 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D558u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19d554) {
            ctx->pc = 0x19D5A0u;
            goto label_19d5a0;
        }
    }
    ctx->pc = 0x19D55Cu;
label_19d55c:
    // 0x19d55c: 0xc067bb4
    ctx->pc = 0x19D55Cu;
    SET_GPR_U32(ctx, 31, 0x19D564u);
    ctx->pc = 0x19EED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019EED0_0x19eed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D564u; }
    }
    if (ctx->pc != 0x19D564u) { return; }
    ctx->pc = 0x19D564u;
    // 0x19d564: 0x8e040024
    ctx->pc = 0x19d564u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19d568: 0x10800003
    ctx->pc = 0x19D568u;
    {
        const bool branch_taken_0x19d568 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x19d568) {
            ctx->pc = 0x19D578u;
            goto label_19d578;
        }
    }
    ctx->pc = 0x19D570u;
    // 0x19d570: 0xc063724
    ctx->pc = 0x19D570u;
    SET_GPR_U32(ctx, 31, 0x19D578u);
    ctx->pc = 0x18DC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DC90_0x18dc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D578u; }
    }
    if (ctx->pc != 0x19D578u) { return; }
    ctx->pc = 0x19D578u;
label_19d578:
    // 0x19d578: 0x200202d
    ctx->pc = 0x19d578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d57c: 0x282d
    ctx->pc = 0x19d57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d580: 0xc0636e0
    ctx->pc = 0x19D580u;
    SET_GPR_U32(ctx, 31, 0x19D588u);
    ctx->pc = 0x19D584u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 56));
    ctx->pc = 0x18DB80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DB80_0x18db80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D588u; }
    }
    if (ctx->pc != 0x19D588u) { return; }
    ctx->pc = 0x19D588u;
    // 0x19d588: 0x3c01002a
    ctx->pc = 0x19d588u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19d58c: 0x24020001
    ctx->pc = 0x19d58cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d590: 0x8c23fee0
    ctx->pc = 0x19d590u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294967008)));
    // 0x19d594: 0x2463ffff
    ctx->pc = 0x19d594u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19d598: 0x3c01002a
    ctx->pc = 0x19d598u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19d59c: 0xac23fee0
    ctx->pc = 0x19d59cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294967008), GPR_U32(ctx, 3));
label_19d5a0:
    // 0x19d5a0: 0xdfbf0010
    ctx->pc = 0x19d5a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19d5a4:
    // 0x19d5a4: 0x7bb00000
    ctx->pc = 0x19d5a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d5a8: 0x3e00008
    ctx->pc = 0x19D5A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D5ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D474u: goto label_19d474;
            case 0x19D488u: goto label_19d488;
            case 0x19D49Cu: goto label_19d49c;
            case 0x19D4C0u: goto label_19d4c0;
            case 0x19D4E8u: goto label_19d4e8;
            case 0x19D4ECu: goto label_19d4ec;
            case 0x19D534u: goto label_19d534;
            case 0x19D548u: goto label_19d548;
            case 0x19D55Cu: goto label_19d55c;
            case 0x19D578u: goto label_19d578;
            case 0x19D5A0u: goto label_19d5a0;
            case 0x19D5A4u: goto label_19d5a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19D5B0u;
}
