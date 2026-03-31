#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012F9C0
// Address: 0x12f9c0 - 0x12fae8
void sub_0012F9C0_0x12f9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12f9c0u;

label_12f9c0:
    // 0x12f9c0: 0x27bdffb0
    ctx->pc = 0x12f9c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_12f9c4:
    // 0x12f9c4: 0xffb10018
    ctx->pc = 0x12f9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_12f9c8:
    // 0x12f9c8: 0x80882d
    ctx->pc = 0x12f9c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12f9cc:
    // 0x12f9cc: 0xffb50038
    ctx->pc = 0x12f9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_12f9d0:
    // 0x12f9d0: 0xffb00010
    ctx->pc = 0x12f9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_12f9d4:
    // 0x12f9d4: 0xffb20020
    ctx->pc = 0x12f9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_12f9d8:
    // 0x12f9d8: 0xffb30028
    ctx->pc = 0x12f9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_12f9dc:
    // 0x12f9dc: 0xffb40030
    ctx->pc = 0x12f9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_12f9e0:
    // 0x12f9e0: 0xffbf0040
    ctx->pc = 0x12f9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_12f9e4:
    // 0x12f9e4: 0x8e230058
    ctx->pc = 0x12f9e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_12f9e8:
    // 0x12f9e8: 0x1860002f
label_12f9ec:
    if (ctx->pc == 0x12F9ECu) {
        ctx->pc = 0x12F9ECu;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F9F0u;
        goto label_12f9f0;
    }
    ctx->pc = 0x12F9E8u;
    {
        const bool branch_taken_0x12f9e8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x12F9ECu;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12f9e8) {
            ctx->pc = 0x12FAA8u;
            goto label_12faa8;
        }
    }
    ctx->pc = 0x12F9F0u;
label_12f9f0:
    // 0x12f9f0: 0xa02d
    ctx->pc = 0x12f9f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f9f4:
    // 0x12f9f4: 0x0
    ctx->pc = 0x12f9f4u;
    // NOP
label_12f9f8:
    // 0x12f9f8: 0x8e220068
    ctx->pc = 0x12f9f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_12f9fc:
    // 0x12f9fc: 0x28040
    ctx->pc = 0x12f9fcu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 2), 1));
label_12fa00:
    // 0x12fa00: 0x1a000025
label_12fa04:
    if (ctx->pc == 0x12FA04u) {
        ctx->pc = 0x12FA04u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12FA08u;
        goto label_12fa08;
    }
    ctx->pc = 0x12FA00u;
    {
        const bool branch_taken_0x12fa00 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12FA04u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12fa00) {
            ctx->pc = 0x12FA98u;
            goto label_12fa98;
        }
    }
    ctx->pc = 0x12FA08u;
label_12fa08:
    // 0x12fa08: 0x26330004
    ctx->pc = 0x12fa08u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 17), 4));
label_12fa0c:
    // 0x12fa0c: 0x282d
    ctx->pc = 0x12fa0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12fa10:
    // 0x12fa10: 0x2749021
    ctx->pc = 0x12fa10u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_12fa14:
    // 0x12fa14: 0x8e440000
    ctx->pc = 0x12fa14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12fa18:
    // 0x12fa18: 0x8c830000
    ctx->pc = 0x12fa18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12fa1c:
    // 0x12fa1c: 0x8c620018
    ctx->pc = 0x12fa1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_12fa20:
    // 0x12fa20: 0x40f809
label_12fa24:
    if (ctx->pc == 0x12FA24u) {
        ctx->pc = 0x12FA24u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12FA28u;
        goto label_12fa28;
    }
    ctx->pc = 0x12FA20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12FA28u);
        ctx->pc = 0x12FA24u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12F9C0u: goto label_12f9c0;
            case 0x12F9C4u: goto label_12f9c4;
            case 0x12F9C8u: goto label_12f9c8;
            case 0x12F9CCu: goto label_12f9cc;
            case 0x12F9D0u: goto label_12f9d0;
            case 0x12F9D4u: goto label_12f9d4;
            case 0x12F9D8u: goto label_12f9d8;
            case 0x12F9DCu: goto label_12f9dc;
            case 0x12F9E0u: goto label_12f9e0;
            case 0x12F9E4u: goto label_12f9e4;
            case 0x12F9E8u: goto label_12f9e8;
            case 0x12F9ECu: goto label_12f9ec;
            case 0x12F9F0u: goto label_12f9f0;
            case 0x12F9F4u: goto label_12f9f4;
            case 0x12F9F8u: goto label_12f9f8;
            case 0x12F9FCu: goto label_12f9fc;
            case 0x12FA00u: goto label_12fa00;
            case 0x12FA04u: goto label_12fa04;
            case 0x12FA08u: goto label_12fa08;
            case 0x12FA0Cu: goto label_12fa0c;
            case 0x12FA10u: goto label_12fa10;
            case 0x12FA14u: goto label_12fa14;
            case 0x12FA18u: goto label_12fa18;
            case 0x12FA1Cu: goto label_12fa1c;
            case 0x12FA20u: goto label_12fa20;
            case 0x12FA24u: goto label_12fa24;
            case 0x12FA28u: goto label_12fa28;
            case 0x12FA2Cu: goto label_12fa2c;
            case 0x12FA30u: goto label_12fa30;
            case 0x12FA34u: goto label_12fa34;
            case 0x12FA38u: goto label_12fa38;
            case 0x12FA3Cu: goto label_12fa3c;
            case 0x12FA40u: goto label_12fa40;
            case 0x12FA44u: goto label_12fa44;
            case 0x12FA48u: goto label_12fa48;
            case 0x12FA4Cu: goto label_12fa4c;
            case 0x12FA50u: goto label_12fa50;
            case 0x12FA54u: goto label_12fa54;
            case 0x12FA58u: goto label_12fa58;
            case 0x12FA5Cu: goto label_12fa5c;
            case 0x12FA60u: goto label_12fa60;
            case 0x12FA64u: goto label_12fa64;
            case 0x12FA68u: goto label_12fa68;
            case 0x12FA6Cu: goto label_12fa6c;
            case 0x12FA70u: goto label_12fa70;
            case 0x12FA74u: goto label_12fa74;
            case 0x12FA78u: goto label_12fa78;
            case 0x12FA7Cu: goto label_12fa7c;
            case 0x12FA80u: goto label_12fa80;
            case 0x12FA84u: goto label_12fa84;
            case 0x12FA88u: goto label_12fa88;
            case 0x12FA8Cu: goto label_12fa8c;
            case 0x12FA90u: goto label_12fa90;
            case 0x12FA94u: goto label_12fa94;
            case 0x12FA98u: goto label_12fa98;
            case 0x12FA9Cu: goto label_12fa9c;
            case 0x12FAA0u: goto label_12faa0;
            case 0x12FAA4u: goto label_12faa4;
            case 0x12FAA8u: goto label_12faa8;
            case 0x12FAACu: goto label_12faac;
            case 0x12FAB0u: goto label_12fab0;
            case 0x12FAB4u: goto label_12fab4;
            case 0x12FAB8u: goto label_12fab8;
            case 0x12FABCu: goto label_12fabc;
            case 0x12FAC0u: goto label_12fac0;
            case 0x12FAC4u: goto label_12fac4;
            case 0x12FAC8u: goto label_12fac8;
            case 0x12FACCu: goto label_12facc;
            case 0x12FAD0u: goto label_12fad0;
            case 0x12FAD4u: goto label_12fad4;
            case 0x12FAD8u: goto label_12fad8;
            case 0x12FADCu: goto label_12fadc;
            case 0x12FAE0u: goto label_12fae0;
            case 0x12FAE4u: goto label_12fae4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12FA28u; }
            if (ctx->pc != 0x12FA28u) { return; }
        }
    }
    ctx->pc = 0x12FA28u;
label_12fa28:
    // 0x12fa28: 0x282d
    ctx->pc = 0x12fa28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12fa2c:
    // 0x12fa2c: 0x8fa20004
    ctx->pc = 0x12fa2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_12fa30:
    // 0x12fa30: 0x1050000f
label_12fa34:
    if (ctx->pc == 0x12FA34u) {
        ctx->pc = 0x12FA34u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12FA38u;
        goto label_12fa38;
    }
    ctx->pc = 0x12FA30u;
    {
        const bool branch_taken_0x12fa30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 16));
        ctx->pc = 0x12FA34u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12fa30) {
            ctx->pc = 0x12FA70u;
            goto label_12fa70;
        }
    }
    ctx->pc = 0x12FA38u;
label_12fa38:
    // 0x12fa38: 0x8e440000
    ctx->pc = 0x12fa38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12fa3c:
    // 0x12fa3c: 0x8c830000
    ctx->pc = 0x12fa3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12fa40:
    // 0x12fa40: 0x8c62001c
    ctx->pc = 0x12fa40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_12fa44:
    // 0x12fa44: 0x40f809
label_12fa48:
    if (ctx->pc == 0x12FA48u) {
        ctx->pc = 0x12FA48u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12FA4Cu;
        goto label_12fa4c;
    }
    ctx->pc = 0x12FA44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12FA4Cu);
        ctx->pc = 0x12FA48u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12F9C0u: goto label_12f9c0;
            case 0x12F9C4u: goto label_12f9c4;
            case 0x12F9C8u: goto label_12f9c8;
            case 0x12F9CCu: goto label_12f9cc;
            case 0x12F9D0u: goto label_12f9d0;
            case 0x12F9D4u: goto label_12f9d4;
            case 0x12F9D8u: goto label_12f9d8;
            case 0x12F9DCu: goto label_12f9dc;
            case 0x12F9E0u: goto label_12f9e0;
            case 0x12F9E4u: goto label_12f9e4;
            case 0x12F9E8u: goto label_12f9e8;
            case 0x12F9ECu: goto label_12f9ec;
            case 0x12F9F0u: goto label_12f9f0;
            case 0x12F9F4u: goto label_12f9f4;
            case 0x12F9F8u: goto label_12f9f8;
            case 0x12F9FCu: goto label_12f9fc;
            case 0x12FA00u: goto label_12fa00;
            case 0x12FA04u: goto label_12fa04;
            case 0x12FA08u: goto label_12fa08;
            case 0x12FA0Cu: goto label_12fa0c;
            case 0x12FA10u: goto label_12fa10;
            case 0x12FA14u: goto label_12fa14;
            case 0x12FA18u: goto label_12fa18;
            case 0x12FA1Cu: goto label_12fa1c;
            case 0x12FA20u: goto label_12fa20;
            case 0x12FA24u: goto label_12fa24;
            case 0x12FA28u: goto label_12fa28;
            case 0x12FA2Cu: goto label_12fa2c;
            case 0x12FA30u: goto label_12fa30;
            case 0x12FA34u: goto label_12fa34;
            case 0x12FA38u: goto label_12fa38;
            case 0x12FA3Cu: goto label_12fa3c;
            case 0x12FA40u: goto label_12fa40;
            case 0x12FA44u: goto label_12fa44;
            case 0x12FA48u: goto label_12fa48;
            case 0x12FA4Cu: goto label_12fa4c;
            case 0x12FA50u: goto label_12fa50;
            case 0x12FA54u: goto label_12fa54;
            case 0x12FA58u: goto label_12fa58;
            case 0x12FA5Cu: goto label_12fa5c;
            case 0x12FA60u: goto label_12fa60;
            case 0x12FA64u: goto label_12fa64;
            case 0x12FA68u: goto label_12fa68;
            case 0x12FA6Cu: goto label_12fa6c;
            case 0x12FA70u: goto label_12fa70;
            case 0x12FA74u: goto label_12fa74;
            case 0x12FA78u: goto label_12fa78;
            case 0x12FA7Cu: goto label_12fa7c;
            case 0x12FA80u: goto label_12fa80;
            case 0x12FA84u: goto label_12fa84;
            case 0x12FA88u: goto label_12fa88;
            case 0x12FA8Cu: goto label_12fa8c;
            case 0x12FA90u: goto label_12fa90;
            case 0x12FA94u: goto label_12fa94;
            case 0x12FA98u: goto label_12fa98;
            case 0x12FA9Cu: goto label_12fa9c;
            case 0x12FAA0u: goto label_12faa0;
            case 0x12FAA4u: goto label_12faa4;
            case 0x12FAA8u: goto label_12faa8;
            case 0x12FAACu: goto label_12faac;
            case 0x12FAB0u: goto label_12fab0;
            case 0x12FAB4u: goto label_12fab4;
            case 0x12FAB8u: goto label_12fab8;
            case 0x12FABCu: goto label_12fabc;
            case 0x12FAC0u: goto label_12fac0;
            case 0x12FAC4u: goto label_12fac4;
            case 0x12FAC8u: goto label_12fac8;
            case 0x12FACCu: goto label_12facc;
            case 0x12FAD0u: goto label_12fad0;
            case 0x12FAD4u: goto label_12fad4;
            case 0x12FAD8u: goto label_12fad8;
            case 0x12FADCu: goto label_12fadc;
            case 0x12FAE0u: goto label_12fae0;
            case 0x12FAE4u: goto label_12fae4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12FA4Cu; }
            if (ctx->pc != 0x12FA4Cu) { return; }
        }
    }
    ctx->pc = 0x12FA4Cu;
label_12fa4c:
    // 0x12fa4c: 0x0
    ctx->pc = 0x12fa4cu;
    // NOP
label_12fa50:
    // 0x12fa50: 0x0
    ctx->pc = 0x12fa50u;
    // NOP
label_12fa54:
    // 0x12fa54: 0x0
    ctx->pc = 0x12fa54u;
    // NOP
label_12fa58:
    // 0x12fa58: 0x0
    ctx->pc = 0x12fa58u;
    // NOP
label_12fa5c:
    // 0x12fa5c: 0x0
    ctx->pc = 0x12fa5cu;
    // NOP
label_12fa60:
    // 0x12fa60: 0x0
    ctx->pc = 0x12fa60u;
    // NOP
label_12fa64:
    // 0x12fa64: 0x1000fffa
label_12fa68:
    if (ctx->pc == 0x12FA68u) {
        ctx->pc = 0x12FA6Cu;
        goto label_12fa6c;
    }
    ctx->pc = 0x12FA64u;
    {
        const bool branch_taken_0x12fa64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x12fa64) {
            ctx->pc = 0x12FA50u;
            goto label_12fa50;
        }
    }
    ctx->pc = 0x12FA6Cu;
label_12fa6c:
    // 0x12fa6c: 0x0
    ctx->pc = 0x12fa6cu;
    // NOP
label_12fa70:
    // 0x12fa70: 0xc041f1a
label_12fa74:
    if (ctx->pc == 0x12FA74u) {
        ctx->pc = 0x12FA74u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x12FA78u;
        goto label_12fa78;
    }
    ctx->pc = 0x12FA70u;
    SET_GPR_U32(ctx, 31, 0x12FA78u);
    ctx->pc = 0x12FA74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FA78u; }
    }
    if (ctx->pc != 0x12FA78u) { return; }
    ctx->pc = 0x12FA78u;
label_12fa78:
    // 0x12fa78: 0x2741821
    ctx->pc = 0x12fa78u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_12fa7c:
    // 0x12fa7c: 0x8c640000
    ctx->pc = 0x12fa7cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_12fa80:
    // 0x12fa80: 0x24050001
    ctx->pc = 0x12fa80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_12fa84:
    // 0x12fa84: 0x8c830000
    ctx->pc = 0x12fa84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12fa88:
    // 0x12fa88: 0x8c620020
    ctx->pc = 0x12fa88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_12fa8c:
    // 0x12fa8c: 0x40f809
label_12fa90:
    if (ctx->pc == 0x12FA90u) {
        ctx->pc = 0x12FA90u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12FA94u;
        goto label_12fa94;
    }
    ctx->pc = 0x12FA8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12FA94u);
        ctx->pc = 0x12FA90u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12F9C0u: goto label_12f9c0;
            case 0x12F9C4u: goto label_12f9c4;
            case 0x12F9C8u: goto label_12f9c8;
            case 0x12F9CCu: goto label_12f9cc;
            case 0x12F9D0u: goto label_12f9d0;
            case 0x12F9D4u: goto label_12f9d4;
            case 0x12F9D8u: goto label_12f9d8;
            case 0x12F9DCu: goto label_12f9dc;
            case 0x12F9E0u: goto label_12f9e0;
            case 0x12F9E4u: goto label_12f9e4;
            case 0x12F9E8u: goto label_12f9e8;
            case 0x12F9ECu: goto label_12f9ec;
            case 0x12F9F0u: goto label_12f9f0;
            case 0x12F9F4u: goto label_12f9f4;
            case 0x12F9F8u: goto label_12f9f8;
            case 0x12F9FCu: goto label_12f9fc;
            case 0x12FA00u: goto label_12fa00;
            case 0x12FA04u: goto label_12fa04;
            case 0x12FA08u: goto label_12fa08;
            case 0x12FA0Cu: goto label_12fa0c;
            case 0x12FA10u: goto label_12fa10;
            case 0x12FA14u: goto label_12fa14;
            case 0x12FA18u: goto label_12fa18;
            case 0x12FA1Cu: goto label_12fa1c;
            case 0x12FA20u: goto label_12fa20;
            case 0x12FA24u: goto label_12fa24;
            case 0x12FA28u: goto label_12fa28;
            case 0x12FA2Cu: goto label_12fa2c;
            case 0x12FA30u: goto label_12fa30;
            case 0x12FA34u: goto label_12fa34;
            case 0x12FA38u: goto label_12fa38;
            case 0x12FA3Cu: goto label_12fa3c;
            case 0x12FA40u: goto label_12fa40;
            case 0x12FA44u: goto label_12fa44;
            case 0x12FA48u: goto label_12fa48;
            case 0x12FA4Cu: goto label_12fa4c;
            case 0x12FA50u: goto label_12fa50;
            case 0x12FA54u: goto label_12fa54;
            case 0x12FA58u: goto label_12fa58;
            case 0x12FA5Cu: goto label_12fa5c;
            case 0x12FA60u: goto label_12fa60;
            case 0x12FA64u: goto label_12fa64;
            case 0x12FA68u: goto label_12fa68;
            case 0x12FA6Cu: goto label_12fa6c;
            case 0x12FA70u: goto label_12fa70;
            case 0x12FA74u: goto label_12fa74;
            case 0x12FA78u: goto label_12fa78;
            case 0x12FA7Cu: goto label_12fa7c;
            case 0x12FA80u: goto label_12fa80;
            case 0x12FA84u: goto label_12fa84;
            case 0x12FA88u: goto label_12fa88;
            case 0x12FA8Cu: goto label_12fa8c;
            case 0x12FA90u: goto label_12fa90;
            case 0x12FA94u: goto label_12fa94;
            case 0x12FA98u: goto label_12fa98;
            case 0x12FA9Cu: goto label_12fa9c;
            case 0x12FAA0u: goto label_12faa0;
            case 0x12FAA4u: goto label_12faa4;
            case 0x12FAA8u: goto label_12faa8;
            case 0x12FAACu: goto label_12faac;
            case 0x12FAB0u: goto label_12fab0;
            case 0x12FAB4u: goto label_12fab4;
            case 0x12FAB8u: goto label_12fab8;
            case 0x12FABCu: goto label_12fabc;
            case 0x12FAC0u: goto label_12fac0;
            case 0x12FAC4u: goto label_12fac4;
            case 0x12FAC8u: goto label_12fac8;
            case 0x12FACCu: goto label_12facc;
            case 0x12FAD0u: goto label_12fad0;
            case 0x12FAD4u: goto label_12fad4;
            case 0x12FAD8u: goto label_12fad8;
            case 0x12FADCu: goto label_12fadc;
            case 0x12FAE0u: goto label_12fae0;
            case 0x12FAE4u: goto label_12fae4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12FA94u; }
            if (ctx->pc != 0x12FA94u) { return; }
        }
    }
    ctx->pc = 0x12FA94u;
label_12fa94:
    // 0x12fa94: 0x8e230058
    ctx->pc = 0x12fa94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_12fa98:
    // 0x12fa98: 0x26b50001
    ctx->pc = 0x12fa98u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
label_12fa9c:
    // 0x12fa9c: 0x2a3102a
    ctx->pc = 0x12fa9cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 3)));
label_12faa0:
    // 0x12faa0: 0x1440ffd5
label_12faa4:
    if (ctx->pc == 0x12FAA4u) {
        ctx->pc = 0x12FAA4u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x12FAA8u;
        goto label_12faa8;
    }
    ctx->pc = 0x12FAA0u;
    {
        const bool branch_taken_0x12faa0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12FAA4u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4));
        if (branch_taken_0x12faa0) {
            ctx->pc = 0x12F9F8u;
            goto label_12f9f8;
        }
    }
    ctx->pc = 0x12FAA8u;
label_12faa8:
    // 0x12faa8: 0x24020001
    ctx->pc = 0x12faa8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_12faac:
    // 0x12faac: 0xae200028
    ctx->pc = 0x12faacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_12fab0:
    // 0x12fab0: 0xa2220001
    ctx->pc = 0x12fab0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_12fab4:
    // 0x12fab4: 0xae20002c
    ctx->pc = 0x12fab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_12fab8:
    // 0x12fab8: 0xae200030
    ctx->pc = 0x12fab8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_12fabc:
    // 0x12fabc: 0xa2200003
    ctx->pc = 0x12fabcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
label_12fac0:
    // 0x12fac0: 0xdfb00010
    ctx->pc = 0x12fac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12fac4:
    // 0x12fac4: 0xdfb10018
    ctx->pc = 0x12fac4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_12fac8:
    // 0x12fac8: 0xdfb20020
    ctx->pc = 0x12fac8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12facc:
    // 0x12facc: 0xdfb30028
    ctx->pc = 0x12faccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_12fad0:
    // 0x12fad0: 0xdfb40030
    ctx->pc = 0x12fad0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_12fad4:
    // 0x12fad4: 0xdfb50038
    ctx->pc = 0x12fad4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_12fad8:
    // 0x12fad8: 0xdfbf0040
    ctx->pc = 0x12fad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_12fadc:
    // 0x12fadc: 0x3e00008
label_12fae0:
    if (ctx->pc == 0x12FAE0u) {
        ctx->pc = 0x12FAE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x12FAE4u;
        goto label_12fae4;
    }
    ctx->pc = 0x12FADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FAE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12F9C0u: goto label_12f9c0;
            case 0x12F9C4u: goto label_12f9c4;
            case 0x12F9C8u: goto label_12f9c8;
            case 0x12F9CCu: goto label_12f9cc;
            case 0x12F9D0u: goto label_12f9d0;
            case 0x12F9D4u: goto label_12f9d4;
            case 0x12F9D8u: goto label_12f9d8;
            case 0x12F9DCu: goto label_12f9dc;
            case 0x12F9E0u: goto label_12f9e0;
            case 0x12F9E4u: goto label_12f9e4;
            case 0x12F9E8u: goto label_12f9e8;
            case 0x12F9ECu: goto label_12f9ec;
            case 0x12F9F0u: goto label_12f9f0;
            case 0x12F9F4u: goto label_12f9f4;
            case 0x12F9F8u: goto label_12f9f8;
            case 0x12F9FCu: goto label_12f9fc;
            case 0x12FA00u: goto label_12fa00;
            case 0x12FA04u: goto label_12fa04;
            case 0x12FA08u: goto label_12fa08;
            case 0x12FA0Cu: goto label_12fa0c;
            case 0x12FA10u: goto label_12fa10;
            case 0x12FA14u: goto label_12fa14;
            case 0x12FA18u: goto label_12fa18;
            case 0x12FA1Cu: goto label_12fa1c;
            case 0x12FA20u: goto label_12fa20;
            case 0x12FA24u: goto label_12fa24;
            case 0x12FA28u: goto label_12fa28;
            case 0x12FA2Cu: goto label_12fa2c;
            case 0x12FA30u: goto label_12fa30;
            case 0x12FA34u: goto label_12fa34;
            case 0x12FA38u: goto label_12fa38;
            case 0x12FA3Cu: goto label_12fa3c;
            case 0x12FA40u: goto label_12fa40;
            case 0x12FA44u: goto label_12fa44;
            case 0x12FA48u: goto label_12fa48;
            case 0x12FA4Cu: goto label_12fa4c;
            case 0x12FA50u: goto label_12fa50;
            case 0x12FA54u: goto label_12fa54;
            case 0x12FA58u: goto label_12fa58;
            case 0x12FA5Cu: goto label_12fa5c;
            case 0x12FA60u: goto label_12fa60;
            case 0x12FA64u: goto label_12fa64;
            case 0x12FA68u: goto label_12fa68;
            case 0x12FA6Cu: goto label_12fa6c;
            case 0x12FA70u: goto label_12fa70;
            case 0x12FA74u: goto label_12fa74;
            case 0x12FA78u: goto label_12fa78;
            case 0x12FA7Cu: goto label_12fa7c;
            case 0x12FA80u: goto label_12fa80;
            case 0x12FA84u: goto label_12fa84;
            case 0x12FA88u: goto label_12fa88;
            case 0x12FA8Cu: goto label_12fa8c;
            case 0x12FA90u: goto label_12fa90;
            case 0x12FA94u: goto label_12fa94;
            case 0x12FA98u: goto label_12fa98;
            case 0x12FA9Cu: goto label_12fa9c;
            case 0x12FAA0u: goto label_12faa0;
            case 0x12FAA4u: goto label_12faa4;
            case 0x12FAA8u: goto label_12faa8;
            case 0x12FAACu: goto label_12faac;
            case 0x12FAB0u: goto label_12fab0;
            case 0x12FAB4u: goto label_12fab4;
            case 0x12FAB8u: goto label_12fab8;
            case 0x12FABCu: goto label_12fabc;
            case 0x12FAC0u: goto label_12fac0;
            case 0x12FAC4u: goto label_12fac4;
            case 0x12FAC8u: goto label_12fac8;
            case 0x12FACCu: goto label_12facc;
            case 0x12FAD0u: goto label_12fad0;
            case 0x12FAD4u: goto label_12fad4;
            case 0x12FAD8u: goto label_12fad8;
            case 0x12FADCu: goto label_12fadc;
            case 0x12FAE0u: goto label_12fae0;
            case 0x12FAE4u: goto label_12fae4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12FAE4u;
label_12fae4:
    // 0x12fae4: 0x0
    ctx->pc = 0x12fae4u;
    // NOP
}
