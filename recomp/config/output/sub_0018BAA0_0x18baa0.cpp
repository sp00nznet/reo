#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018BAA0
// Address: 0x18baa0 - 0x18bc70
void sub_0018BAA0_0x18baa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18baa0u;

label_18baa0:
    // 0x18baa0: 0x27bdff70
    ctx->pc = 0x18baa0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
label_18baa4:
    // 0x18baa4: 0x3c030023
    ctx->pc = 0x18baa4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
label_18baa8:
    // 0x18baa8: 0xffbf0080
    ctx->pc = 0x18baa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_18baac:
    // 0x18baac: 0x2463fd40
    ctx->pc = 0x18baacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294966592));
label_18bab0:
    // 0x18bab0: 0x7fb40070
    ctx->pc = 0x18bab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_18bab4:
    // 0x18bab4: 0x2ca10006
    ctx->pc = 0x18bab4u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 5), 6));
label_18bab8:
    // 0x18bab8: 0x7fb30060
    ctx->pc = 0x18bab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_18babc:
    // 0x18babc: 0x80a02d
    ctx->pc = 0x18babcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18bac0:
    // 0x18bac0: 0x7fb20050
    ctx->pc = 0x18bac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_18bac4:
    // 0x18bac4: 0x52080
    ctx->pc = 0x18bac4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 2));
label_18bac8:
    // 0x18bac8: 0x7fb10040
    ctx->pc = 0x18bac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_18bacc:
    // 0x18bacc: 0x641821
    ctx->pc = 0x18baccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18bad0:
    // 0x18bad0: 0x7fb00030
    ctx->pc = 0x18bad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_18bad4:
    // 0x18bad4: 0xc0982d
    ctx->pc = 0x18bad4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18bad8:
    // 0x18bad8: 0x8c710000
    ctx->pc = 0x18bad8u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_18badc:
    // 0x18badc: 0x10200059
label_18bae0:
    if (ctx->pc == 0x18BAE0u) {
        ctx->pc = 0x18BAE0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18BAE4u;
        goto label_18bae4;
    }
    ctx->pc = 0x18BADCu;
    {
        const bool branch_taken_0x18badc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x18BAE0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18badc) {
            ctx->pc = 0x18BC44u;
            goto label_18bc44;
        }
    }
    ctx->pc = 0x18BAE4u;
label_18bae4:
    // 0x18bae4: 0x3c030024
    ctx->pc = 0x18bae4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
label_18bae8:
    // 0x18bae8: 0x24631bd0
    ctx->pc = 0x18bae8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7120));
label_18baec:
    // 0x18baec: 0x831821
    ctx->pc = 0x18baecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_18baf0:
    // 0x18baf0: 0x8c630000
    ctx->pc = 0x18baf0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_18baf4:
    // 0x18baf4: 0x600008
label_18baf8:
    if (ctx->pc == 0x18BAF8u) {
        ctx->pc = 0x18BAFCu;
        goto label_18bafc;
    }
    ctx->pc = 0x18BAF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18BAA0u: goto label_18baa0;
            case 0x18BAA4u: goto label_18baa4;
            case 0x18BAA8u: goto label_18baa8;
            case 0x18BAACu: goto label_18baac;
            case 0x18BAB0u: goto label_18bab0;
            case 0x18BAB4u: goto label_18bab4;
            case 0x18BAB8u: goto label_18bab8;
            case 0x18BABCu: goto label_18babc;
            case 0x18BAC0u: goto label_18bac0;
            case 0x18BAC4u: goto label_18bac4;
            case 0x18BAC8u: goto label_18bac8;
            case 0x18BACCu: goto label_18bacc;
            case 0x18BAD0u: goto label_18bad0;
            case 0x18BAD4u: goto label_18bad4;
            case 0x18BAD8u: goto label_18bad8;
            case 0x18BADCu: goto label_18badc;
            case 0x18BAE0u: goto label_18bae0;
            case 0x18BAE4u: goto label_18bae4;
            case 0x18BAE8u: goto label_18bae8;
            case 0x18BAECu: goto label_18baec;
            case 0x18BAF0u: goto label_18baf0;
            case 0x18BAF4u: goto label_18baf4;
            case 0x18BAF8u: goto label_18baf8;
            case 0x18BAFCu: goto label_18bafc;
            case 0x18BB00u: goto label_18bb00;
            case 0x18BB04u: goto label_18bb04;
            case 0x18BB08u: goto label_18bb08;
            case 0x18BB0Cu: goto label_18bb0c;
            case 0x18BB10u: goto label_18bb10;
            case 0x18BB14u: goto label_18bb14;
            case 0x18BB18u: goto label_18bb18;
            case 0x18BB1Cu: goto label_18bb1c;
            case 0x18BB20u: goto label_18bb20;
            case 0x18BB24u: goto label_18bb24;
            case 0x18BB28u: goto label_18bb28;
            case 0x18BB2Cu: goto label_18bb2c;
            case 0x18BB30u: goto label_18bb30;
            case 0x18BB34u: goto label_18bb34;
            case 0x18BB38u: goto label_18bb38;
            case 0x18BB3Cu: goto label_18bb3c;
            case 0x18BB40u: goto label_18bb40;
            case 0x18BB44u: goto label_18bb44;
            case 0x18BB48u: goto label_18bb48;
            case 0x18BB4Cu: goto label_18bb4c;
            case 0x18BB50u: goto label_18bb50;
            case 0x18BB54u: goto label_18bb54;
            case 0x18BB58u: goto label_18bb58;
            case 0x18BB5Cu: goto label_18bb5c;
            case 0x18BB60u: goto label_18bb60;
            case 0x18BB64u: goto label_18bb64;
            case 0x18BB68u: goto label_18bb68;
            case 0x18BB6Cu: goto label_18bb6c;
            case 0x18BB70u: goto label_18bb70;
            case 0x18BB74u: goto label_18bb74;
            case 0x18BB78u: goto label_18bb78;
            case 0x18BB7Cu: goto label_18bb7c;
            case 0x18BB80u: goto label_18bb80;
            case 0x18BB84u: goto label_18bb84;
            case 0x18BB88u: goto label_18bb88;
            case 0x18BB8Cu: goto label_18bb8c;
            case 0x18BB90u: goto label_18bb90;
            case 0x18BB94u: goto label_18bb94;
            case 0x18BB98u: goto label_18bb98;
            case 0x18BB9Cu: goto label_18bb9c;
            case 0x18BBA0u: goto label_18bba0;
            case 0x18BBA4u: goto label_18bba4;
            case 0x18BBA8u: goto label_18bba8;
            case 0x18BBACu: goto label_18bbac;
            case 0x18BBB0u: goto label_18bbb0;
            case 0x18BBB4u: goto label_18bbb4;
            case 0x18BBB8u: goto label_18bbb8;
            case 0x18BBBCu: goto label_18bbbc;
            case 0x18BBC0u: goto label_18bbc0;
            case 0x18BBC4u: goto label_18bbc4;
            case 0x18BBC8u: goto label_18bbc8;
            case 0x18BBCCu: goto label_18bbcc;
            case 0x18BBD0u: goto label_18bbd0;
            case 0x18BBD4u: goto label_18bbd4;
            case 0x18BBD8u: goto label_18bbd8;
            case 0x18BBDCu: goto label_18bbdc;
            case 0x18BBE0u: goto label_18bbe0;
            case 0x18BBE4u: goto label_18bbe4;
            case 0x18BBE8u: goto label_18bbe8;
            case 0x18BBECu: goto label_18bbec;
            case 0x18BBF0u: goto label_18bbf0;
            case 0x18BBF4u: goto label_18bbf4;
            case 0x18BBF8u: goto label_18bbf8;
            case 0x18BBFCu: goto label_18bbfc;
            case 0x18BC00u: goto label_18bc00;
            case 0x18BC04u: goto label_18bc04;
            case 0x18BC08u: goto label_18bc08;
            case 0x18BC0Cu: goto label_18bc0c;
            case 0x18BC10u: goto label_18bc10;
            case 0x18BC14u: goto label_18bc14;
            case 0x18BC18u: goto label_18bc18;
            case 0x18BC1Cu: goto label_18bc1c;
            case 0x18BC20u: goto label_18bc20;
            case 0x18BC24u: goto label_18bc24;
            case 0x18BC28u: goto label_18bc28;
            case 0x18BC2Cu: goto label_18bc2c;
            case 0x18BC30u: goto label_18bc30;
            case 0x18BC34u: goto label_18bc34;
            case 0x18BC38u: goto label_18bc38;
            case 0x18BC3Cu: goto label_18bc3c;
            case 0x18BC40u: goto label_18bc40;
            case 0x18BC44u: goto label_18bc44;
            case 0x18BC48u: goto label_18bc48;
            case 0x18BC4Cu: goto label_18bc4c;
            case 0x18BC50u: goto label_18bc50;
            case 0x18BC54u: goto label_18bc54;
            case 0x18BC58u: goto label_18bc58;
            case 0x18BC5Cu: goto label_18bc5c;
            case 0x18BC60u: goto label_18bc60;
            case 0x18BC64u: goto label_18bc64;
            case 0x18BC68u: goto label_18bc68;
            case 0x18BC6Cu: goto label_18bc6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18BAFCu;
label_18bafc:
    // 0x18bafc: 0x1000000c
label_18bb00:
    if (ctx->pc == 0x18BB00u) {
        ctx->pc = 0x18BB00u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18BB04u;
        goto label_18bb04;
    }
    ctx->pc = 0x18BAFCu;
    {
        const bool branch_taken_0x18bafc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18BB00u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18bafc) {
            ctx->pc = 0x18BB30u;
            goto label_18bb30;
        }
    }
    ctx->pc = 0x18BB04u;
label_18bb04:
    // 0x18bb04: 0x8e440000
    ctx->pc = 0x18bb04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_18bb08:
    // 0x18bb08: 0x26650040
    ctx->pc = 0x18bb08u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 64));
label_18bb0c:
    // 0x18bb0c: 0x26660050
    ctx->pc = 0x18bb0cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 19), 80));
label_18bb10:
    // 0x18bb10: 0x26670060
    ctx->pc = 0x18bb10u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 19), 96));
label_18bb14:
    // 0x18bb14: 0x26680070
    ctx->pc = 0x18bb14u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 19), 112));
label_18bb18:
    // 0x18bb18: 0x26690080
    ctx->pc = 0x18bb18u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 19), 128));
label_18bb1c:
    // 0x18bb1c: 0xc062f1c
label_18bb20:
    if (ctx->pc == 0x18BB20u) {
        ctx->pc = 0x18BB20u;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 19), 144));
        ctx->pc = 0x18BB24u;
        goto label_18bb24;
    }
    ctx->pc = 0x18BB1Cu;
    SET_GPR_U32(ctx, 31, 0x18BB24u);
    ctx->pc = 0x18BB20u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 19), 144));
    ctx->pc = 0x18BC70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018BC70_0x18bc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BB24u; }
    }
    if (ctx->pc != 0x18BB24u) { return; }
    ctx->pc = 0x18BB24u;
label_18bb24:
    // 0x18bb24: 0x2719821
    ctx->pc = 0x18bb24u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_18bb28:
    // 0x18bb28: 0x26520004
    ctx->pc = 0x18bb28u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
label_18bb2c:
    // 0x18bb2c: 0x26100001
    ctx->pc = 0x18bb2cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_18bb30:
    // 0x18bb30: 0x214182a
    ctx->pc = 0x18bb30u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 20)));
label_18bb34:
    // 0x18bb34: 0x1460fff3
label_18bb38:
    if (ctx->pc == 0x18BB38u) {
        ctx->pc = 0x18BB3Cu;
        goto label_18bb3c;
    }
    ctx->pc = 0x18BB34u;
    {
        const bool branch_taken_0x18bb34 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x18bb34) {
            ctx->pc = 0x18BB04u;
            goto label_18bb04;
        }
    }
    ctx->pc = 0x18BB3Cu;
label_18bb3c:
    // 0x18bb3c: 0x10000042
label_18bb40:
    if (ctx->pc == 0x18BB40u) {
        ctx->pc = 0x18BB40u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x18BB44u;
        goto label_18bb44;
    }
    ctx->pc = 0x18BB3Cu;
    {
        const bool branch_taken_0x18bb3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18BB40u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x18bb3c) {
            ctx->pc = 0x18BC48u;
            goto label_18bc48;
        }
    }
    ctx->pc = 0x18BB44u;
label_18bb44:
    // 0x18bb44: 0x1000000c
label_18bb48:
    if (ctx->pc == 0x18BB48u) {
        ctx->pc = 0x18BB48u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18BB4Cu;
        goto label_18bb4c;
    }
    ctx->pc = 0x18BB44u;
    {
        const bool branch_taken_0x18bb44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18BB48u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18bb44) {
            ctx->pc = 0x18BB78u;
            goto label_18bb78;
        }
    }
    ctx->pc = 0x18BB4Cu;
label_18bb4c:
    // 0x18bb4c: 0x8e440000
    ctx->pc = 0x18bb4cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_18bb50:
    // 0x18bb50: 0x26650040
    ctx->pc = 0x18bb50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 64));
label_18bb54:
    // 0x18bb54: 0x26660050
    ctx->pc = 0x18bb54u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 19), 80));
label_18bb58:
    // 0x18bb58: 0x26670060
    ctx->pc = 0x18bb58u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 19), 96));
label_18bb5c:
    // 0x18bb5c: 0x26680070
    ctx->pc = 0x18bb5cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 19), 112));
label_18bb60:
    // 0x18bb60: 0x26690080
    ctx->pc = 0x18bb60u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 19), 128));
label_18bb64:
    // 0x18bb64: 0xc062f1c
label_18bb68:
    if (ctx->pc == 0x18BB68u) {
        ctx->pc = 0x18BB68u;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 19), 144));
        ctx->pc = 0x18BB6Cu;
        goto label_18bb6c;
    }
    ctx->pc = 0x18BB64u;
    SET_GPR_U32(ctx, 31, 0x18BB6Cu);
    ctx->pc = 0x18BB68u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 19), 144));
    ctx->pc = 0x18BC70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018BC70_0x18bc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BB6Cu; }
    }
    if (ctx->pc != 0x18BB6Cu) { return; }
    ctx->pc = 0x18BB6Cu;
label_18bb6c:
    // 0x18bb6c: 0x2719821
    ctx->pc = 0x18bb6cu;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_18bb70:
    // 0x18bb70: 0x26520004
    ctx->pc = 0x18bb70u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
label_18bb74:
    // 0x18bb74: 0x26100001
    ctx->pc = 0x18bb74u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_18bb78:
    // 0x18bb78: 0x214182a
    ctx->pc = 0x18bb78u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 20)));
label_18bb7c:
    // 0x18bb7c: 0x1460fff3
label_18bb80:
    if (ctx->pc == 0x18BB80u) {
        ctx->pc = 0x18BB84u;
        goto label_18bb84;
    }
    ctx->pc = 0x18BB7Cu;
    {
        const bool branch_taken_0x18bb7c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x18bb7c) {
            ctx->pc = 0x18BB4Cu;
            goto label_18bb4c;
        }
    }
    ctx->pc = 0x18BB84u;
label_18bb84:
    // 0x18bb84: 0x1000002f
label_18bb88:
    if (ctx->pc == 0x18BB88u) {
        ctx->pc = 0x18BB8Cu;
        goto label_18bb8c;
    }
    ctx->pc = 0x18BB84u;
    {
        const bool branch_taken_0x18bb84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x18bb84) {
            ctx->pc = 0x18BC44u;
            goto label_18bc44;
        }
    }
    ctx->pc = 0x18BB8Cu;
label_18bb8c:
    // 0x18bb8c: 0x1000000c
label_18bb90:
    if (ctx->pc == 0x18BB90u) {
        ctx->pc = 0x18BB90u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18BB94u;
        goto label_18bb94;
    }
    ctx->pc = 0x18BB8Cu;
    {
        const bool branch_taken_0x18bb8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18BB90u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18bb8c) {
            ctx->pc = 0x18BBC0u;
            goto label_18bbc0;
        }
    }
    ctx->pc = 0x18BB94u;
label_18bb94:
    // 0x18bb94: 0x8e440000
    ctx->pc = 0x18bb94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_18bb98:
    // 0x18bb98: 0x26650040
    ctx->pc = 0x18bb98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 64));
label_18bb9c:
    // 0x18bb9c: 0x26660050
    ctx->pc = 0x18bb9cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 19), 80));
label_18bba0:
    // 0x18bba0: 0x26670060
    ctx->pc = 0x18bba0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 19), 96));
label_18bba4:
    // 0x18bba4: 0x26680070
    ctx->pc = 0x18bba4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 19), 112));
label_18bba8:
    // 0x18bba8: 0x26690080
    ctx->pc = 0x18bba8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 19), 128));
label_18bbac:
    // 0x18bbac: 0xc062f1c
label_18bbb0:
    if (ctx->pc == 0x18BBB0u) {
        ctx->pc = 0x18BBB0u;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 19), 144));
        ctx->pc = 0x18BBB4u;
        goto label_18bbb4;
    }
    ctx->pc = 0x18BBACu;
    SET_GPR_U32(ctx, 31, 0x18BBB4u);
    ctx->pc = 0x18BBB0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 19), 144));
    ctx->pc = 0x18BC70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018BC70_0x18bc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BBB4u; }
    }
    if (ctx->pc != 0x18BBB4u) { return; }
    ctx->pc = 0x18BBB4u;
label_18bbb4:
    // 0x18bbb4: 0x2719821
    ctx->pc = 0x18bbb4u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_18bbb8:
    // 0x18bbb8: 0x26520004
    ctx->pc = 0x18bbb8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
label_18bbbc:
    // 0x18bbbc: 0x26100001
    ctx->pc = 0x18bbbcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_18bbc0:
    // 0x18bbc0: 0x214182a
    ctx->pc = 0x18bbc0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 20)));
label_18bbc4:
    // 0x18bbc4: 0x1460fff3
label_18bbc8:
    if (ctx->pc == 0x18BBC8u) {
        ctx->pc = 0x18BBCCu;
        goto label_18bbcc;
    }
    ctx->pc = 0x18BBC4u;
    {
        const bool branch_taken_0x18bbc4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x18bbc4) {
            ctx->pc = 0x18BB94u;
            goto label_18bb94;
        }
    }
    ctx->pc = 0x18BBCCu;
label_18bbcc:
    // 0x18bbcc: 0x1000001d
label_18bbd0:
    if (ctx->pc == 0x18BBD0u) {
        ctx->pc = 0x18BBD4u;
        goto label_18bbd4;
    }
    ctx->pc = 0x18BBCCu;
    {
        const bool branch_taken_0x18bbcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x18bbcc) {
            ctx->pc = 0x18BC44u;
            goto label_18bc44;
        }
    }
    ctx->pc = 0x18BBD4u;
label_18bbd4:
    // 0x18bbd4: 0x10000018
label_18bbd8:
    if (ctx->pc == 0x18BBD8u) {
        ctx->pc = 0x18BBD8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18BBDCu;
        goto label_18bbdc;
    }
    ctx->pc = 0x18BBD4u;
    {
        const bool branch_taken_0x18bbd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18BBD8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18bbd4) {
            ctx->pc = 0x18BC38u;
            goto label_18bc38;
        }
    }
    ctx->pc = 0x18BBDCu;
label_18bbdc:
    // 0x18bbdc: 0x266200a0
    ctx->pc = 0x18bbdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 160));
label_18bbe0:
    // 0x18bbe0: 0x266300b0
    ctx->pc = 0x18bbe0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 19), 176));
label_18bbe4:
    // 0x18bbe4: 0xffa20000
    ctx->pc = 0x18bbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_18bbe8:
    // 0x18bbe8: 0x3c010029
    ctx->pc = 0x18bbe8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
label_18bbec:
    // 0x18bbec: 0xffa30008
    ctx->pc = 0x18bbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_18bbf0:
    // 0x18bbf0: 0x266200c0
    ctx->pc = 0x18bbf0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 192));
label_18bbf4:
    // 0x18bbf4: 0xffa20010
    ctx->pc = 0x18bbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_18bbf8:
    // 0x18bbf8: 0x266300d0
    ctx->pc = 0x18bbf8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 19), 208));
label_18bbfc:
    // 0x18bbfc: 0x266200e0
    ctx->pc = 0x18bbfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 224));
label_18bc00:
    // 0x18bc00: 0xffa30018
    ctx->pc = 0x18bc00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_18bc04:
    // 0x18bc04: 0xffa20020
    ctx->pc = 0x18bc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
label_18bc08:
    // 0x18bc08: 0x26650040
    ctx->pc = 0x18bc08u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 64));
label_18bc0c:
    // 0x18bc0c: 0x8e440000
    ctx->pc = 0x18bc0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_18bc10:
    // 0x18bc10: 0x26660050
    ctx->pc = 0x18bc10u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 19), 80));
label_18bc14:
    // 0x18bc14: 0x8c2b4e64
    ctx->pc = 0x18bc14u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 1), 20068)));
label_18bc18:
    // 0x18bc18: 0x26670060
    ctx->pc = 0x18bc18u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 19), 96));
label_18bc1c:
    // 0x18bc1c: 0x26680070
    ctx->pc = 0x18bc1cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 19), 112));
label_18bc20:
    // 0x18bc20: 0x26690080
    ctx->pc = 0x18bc20u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 19), 128));
label_18bc24:
    // 0x18bc24: 0xc062f58
label_18bc28:
    if (ctx->pc == 0x18BC28u) {
        ctx->pc = 0x18BC28u;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 19), 144));
        ctx->pc = 0x18BC2Cu;
        goto label_18bc2c;
    }
    ctx->pc = 0x18BC24u;
    SET_GPR_U32(ctx, 31, 0x18BC2Cu);
    ctx->pc = 0x18BC28u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 19), 144));
    ctx->pc = 0x18BD60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018BD60_0x18bd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BC2Cu; }
    }
    if (ctx->pc != 0x18BC2Cu) { return; }
    ctx->pc = 0x18BC2Cu;
label_18bc2c:
    // 0x18bc2c: 0x2719821
    ctx->pc = 0x18bc2cu;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_18bc30:
    // 0x18bc30: 0x26520004
    ctx->pc = 0x18bc30u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
label_18bc34:
    // 0x18bc34: 0x26100001
    ctx->pc = 0x18bc34u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_18bc38:
    // 0x18bc38: 0x214182a
    ctx->pc = 0x18bc38u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 20)));
label_18bc3c:
    // 0x18bc3c: 0x1460ffe7
label_18bc40:
    if (ctx->pc == 0x18BC40u) {
        ctx->pc = 0x18BC44u;
        goto label_18bc44;
    }
    ctx->pc = 0x18BC3Cu;
    {
        const bool branch_taken_0x18bc3c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x18bc3c) {
            ctx->pc = 0x18BBDCu;
            goto label_18bbdc;
        }
    }
    ctx->pc = 0x18BC44u;
label_18bc44:
    // 0x18bc44: 0xdfbf0080
    ctx->pc = 0x18bc44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_18bc48:
    // 0x18bc48: 0x7bb40070
    ctx->pc = 0x18bc48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_18bc4c:
    // 0x18bc4c: 0x7bb30060
    ctx->pc = 0x18bc4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18bc50:
    // 0x18bc50: 0x7bb20050
    ctx->pc = 0x18bc50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_18bc54:
    // 0x18bc54: 0x7bb10040
    ctx->pc = 0x18bc54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18bc58:
    // 0x18bc58: 0x7bb00030
    ctx->pc = 0x18bc58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18bc5c:
    // 0x18bc5c: 0x3e00008
label_18bc60:
    if (ctx->pc == 0x18BC60u) {
        ctx->pc = 0x18BC60u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x18BC64u;
        goto label_18bc64;
    }
    ctx->pc = 0x18BC5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BC60u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18BAA0u: goto label_18baa0;
            case 0x18BAA4u: goto label_18baa4;
            case 0x18BAA8u: goto label_18baa8;
            case 0x18BAACu: goto label_18baac;
            case 0x18BAB0u: goto label_18bab0;
            case 0x18BAB4u: goto label_18bab4;
            case 0x18BAB8u: goto label_18bab8;
            case 0x18BABCu: goto label_18babc;
            case 0x18BAC0u: goto label_18bac0;
            case 0x18BAC4u: goto label_18bac4;
            case 0x18BAC8u: goto label_18bac8;
            case 0x18BACCu: goto label_18bacc;
            case 0x18BAD0u: goto label_18bad0;
            case 0x18BAD4u: goto label_18bad4;
            case 0x18BAD8u: goto label_18bad8;
            case 0x18BADCu: goto label_18badc;
            case 0x18BAE0u: goto label_18bae0;
            case 0x18BAE4u: goto label_18bae4;
            case 0x18BAE8u: goto label_18bae8;
            case 0x18BAECu: goto label_18baec;
            case 0x18BAF0u: goto label_18baf0;
            case 0x18BAF4u: goto label_18baf4;
            case 0x18BAF8u: goto label_18baf8;
            case 0x18BAFCu: goto label_18bafc;
            case 0x18BB00u: goto label_18bb00;
            case 0x18BB04u: goto label_18bb04;
            case 0x18BB08u: goto label_18bb08;
            case 0x18BB0Cu: goto label_18bb0c;
            case 0x18BB10u: goto label_18bb10;
            case 0x18BB14u: goto label_18bb14;
            case 0x18BB18u: goto label_18bb18;
            case 0x18BB1Cu: goto label_18bb1c;
            case 0x18BB20u: goto label_18bb20;
            case 0x18BB24u: goto label_18bb24;
            case 0x18BB28u: goto label_18bb28;
            case 0x18BB2Cu: goto label_18bb2c;
            case 0x18BB30u: goto label_18bb30;
            case 0x18BB34u: goto label_18bb34;
            case 0x18BB38u: goto label_18bb38;
            case 0x18BB3Cu: goto label_18bb3c;
            case 0x18BB40u: goto label_18bb40;
            case 0x18BB44u: goto label_18bb44;
            case 0x18BB48u: goto label_18bb48;
            case 0x18BB4Cu: goto label_18bb4c;
            case 0x18BB50u: goto label_18bb50;
            case 0x18BB54u: goto label_18bb54;
            case 0x18BB58u: goto label_18bb58;
            case 0x18BB5Cu: goto label_18bb5c;
            case 0x18BB60u: goto label_18bb60;
            case 0x18BB64u: goto label_18bb64;
            case 0x18BB68u: goto label_18bb68;
            case 0x18BB6Cu: goto label_18bb6c;
            case 0x18BB70u: goto label_18bb70;
            case 0x18BB74u: goto label_18bb74;
            case 0x18BB78u: goto label_18bb78;
            case 0x18BB7Cu: goto label_18bb7c;
            case 0x18BB80u: goto label_18bb80;
            case 0x18BB84u: goto label_18bb84;
            case 0x18BB88u: goto label_18bb88;
            case 0x18BB8Cu: goto label_18bb8c;
            case 0x18BB90u: goto label_18bb90;
            case 0x18BB94u: goto label_18bb94;
            case 0x18BB98u: goto label_18bb98;
            case 0x18BB9Cu: goto label_18bb9c;
            case 0x18BBA0u: goto label_18bba0;
            case 0x18BBA4u: goto label_18bba4;
            case 0x18BBA8u: goto label_18bba8;
            case 0x18BBACu: goto label_18bbac;
            case 0x18BBB0u: goto label_18bbb0;
            case 0x18BBB4u: goto label_18bbb4;
            case 0x18BBB8u: goto label_18bbb8;
            case 0x18BBBCu: goto label_18bbbc;
            case 0x18BBC0u: goto label_18bbc0;
            case 0x18BBC4u: goto label_18bbc4;
            case 0x18BBC8u: goto label_18bbc8;
            case 0x18BBCCu: goto label_18bbcc;
            case 0x18BBD0u: goto label_18bbd0;
            case 0x18BBD4u: goto label_18bbd4;
            case 0x18BBD8u: goto label_18bbd8;
            case 0x18BBDCu: goto label_18bbdc;
            case 0x18BBE0u: goto label_18bbe0;
            case 0x18BBE4u: goto label_18bbe4;
            case 0x18BBE8u: goto label_18bbe8;
            case 0x18BBECu: goto label_18bbec;
            case 0x18BBF0u: goto label_18bbf0;
            case 0x18BBF4u: goto label_18bbf4;
            case 0x18BBF8u: goto label_18bbf8;
            case 0x18BBFCu: goto label_18bbfc;
            case 0x18BC00u: goto label_18bc00;
            case 0x18BC04u: goto label_18bc04;
            case 0x18BC08u: goto label_18bc08;
            case 0x18BC0Cu: goto label_18bc0c;
            case 0x18BC10u: goto label_18bc10;
            case 0x18BC14u: goto label_18bc14;
            case 0x18BC18u: goto label_18bc18;
            case 0x18BC1Cu: goto label_18bc1c;
            case 0x18BC20u: goto label_18bc20;
            case 0x18BC24u: goto label_18bc24;
            case 0x18BC28u: goto label_18bc28;
            case 0x18BC2Cu: goto label_18bc2c;
            case 0x18BC30u: goto label_18bc30;
            case 0x18BC34u: goto label_18bc34;
            case 0x18BC38u: goto label_18bc38;
            case 0x18BC3Cu: goto label_18bc3c;
            case 0x18BC40u: goto label_18bc40;
            case 0x18BC44u: goto label_18bc44;
            case 0x18BC48u: goto label_18bc48;
            case 0x18BC4Cu: goto label_18bc4c;
            case 0x18BC50u: goto label_18bc50;
            case 0x18BC54u: goto label_18bc54;
            case 0x18BC58u: goto label_18bc58;
            case 0x18BC5Cu: goto label_18bc5c;
            case 0x18BC60u: goto label_18bc60;
            case 0x18BC64u: goto label_18bc64;
            case 0x18BC68u: goto label_18bc68;
            case 0x18BC6Cu: goto label_18bc6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18BC64u;
label_18bc64:
    // 0x18bc64: 0x0
    ctx->pc = 0x18bc64u;
    // NOP
label_18bc68:
    // 0x18bc68: 0x0
    ctx->pc = 0x18bc68u;
    // NOP
label_18bc6c:
    // 0x18bc6c: 0x0
    ctx->pc = 0x18bc6cu;
    // NOP
}
