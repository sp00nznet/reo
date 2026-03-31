#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013F9F0
// Address: 0x13f9f0 - 0x13ffb8
void sub_0013F9F0_0x13f9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13f9f0u;

label_13f9f0:
    // 0x13f9f0: 0x27bdfff0
    ctx->pc = 0x13f9f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_13f9f4:
    // 0x13f9f4: 0xffb00000
    ctx->pc = 0x13f9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13f9f8:
    // 0x13f9f8: 0xffbf0008
    ctx->pc = 0x13f9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_13f9fc:
    // 0x13f9fc: 0xc04fc96
label_13fa00:
    if (ctx->pc == 0x13FA00u) {
        ctx->pc = 0x13FA00u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13FA04u;
        goto label_13fa04;
    }
    ctx->pc = 0x13F9FCu;
    SET_GPR_U32(ctx, 31, 0x13FA04u);
    ctx->pc = 0x13FA00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13F258u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F258_0x13f258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FA04u; }
    }
    if (ctx->pc != 0x13FA04u) { return; }
    ctx->pc = 0x13FA04u;
label_13fa04:
    // 0x13fa04: 0x8e020020
    ctx->pc = 0x13fa04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_13fa08:
    // 0x13fa08: 0xae000034
    ctx->pc = 0x13fa08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_13fa0c:
    // 0x13fa0c: 0xae020010
    ctx->pc = 0x13fa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_13fa10:
    // 0x13fa10: 0xae00000c
    ctx->pc = 0x13fa10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_13fa14:
    // 0x13fa14: 0xae000014
    ctx->pc = 0x13fa14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_13fa18:
    // 0x13fa18: 0xae000018
    ctx->pc = 0x13fa18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_13fa1c:
    // 0x13fa1c: 0xae000028
    ctx->pc = 0x13fa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_13fa20:
    // 0x13fa20: 0xae00002c
    ctx->pc = 0x13fa20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_13fa24:
    // 0x13fa24: 0xae000030
    ctx->pc = 0x13fa24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_13fa28:
    // 0x13fa28: 0xdfbf0008
    ctx->pc = 0x13fa28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13fa2c:
    // 0x13fa2c: 0xdfb00000
    ctx->pc = 0x13fa2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13fa30:
    // 0x13fa30: 0x804fc9c
label_13fa34:
    if (ctx->pc == 0x13FA34u) {
        ctx->pc = 0x13FA34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x13FA38u;
        goto label_13fa38;
    }
    ctx->pc = 0x13FA30u;
    ctx->pc = 0x13FA34u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13F270u;
    sub_0013F270_0x13f270(rdram, ctx, runtime); return;
    ctx->pc = 0x13FA38u;
label_13fa38:
    // 0x13fa38: 0x27bdfff0
    ctx->pc = 0x13fa38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_13fa3c:
    // 0x13fa3c: 0x24020001
    ctx->pc = 0x13fa3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_13fa40:
    // 0x13fa40: 0x14a20003
label_13fa44:
    if (ctx->pc == 0x13FA44u) {
        ctx->pc = 0x13FA44u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x13FA48u;
        goto label_13fa48;
    }
    ctx->pc = 0x13FA40u;
    {
        const bool branch_taken_0x13fa40 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x13FA44u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x13fa40) {
            ctx->pc = 0x13FA50u;
            goto label_13fa50;
        }
    }
    ctx->pc = 0x13FA48u;
label_13fa48:
    // 0x13fa48: 0x1000000b
label_13fa4c:
    if (ctx->pc == 0x13FA4Cu) {
        ctx->pc = 0x13FA4Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->pc = 0x13FA50u;
        goto label_13fa50;
    }
    ctx->pc = 0x13FA48u;
    {
        const bool branch_taken_0x13fa48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13FA4Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
        if (branch_taken_0x13fa48) {
            ctx->pc = 0x13FA78u;
            goto label_13fa78;
        }
    }
    ctx->pc = 0x13FA50u;
label_13fa50:
    // 0x13fa50: 0x54a00003
label_13fa54:
    if (ctx->pc == 0x13FA54u) {
        ctx->pc = 0x13FA54u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->pc = 0x13FA58u;
        goto label_13fa58;
    }
    ctx->pc = 0x13FA50u;
    {
        const bool branch_taken_0x13fa50 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x13fa50) {
            ctx->pc = 0x13FA54u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 56)));
            ctx->pc = 0x13FA60u;
            goto label_13fa60;
        }
    }
    ctx->pc = 0x13FA58u;
label_13fa58:
    // 0x13fa58: 0x10000007
label_13fa5c:
    if (ctx->pc == 0x13FA5Cu) {
        ctx->pc = 0x13FA5Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->pc = 0x13FA60u;
        goto label_13fa60;
    }
    ctx->pc = 0x13FA58u;
    {
        const bool branch_taken_0x13fa58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13FA5Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
        if (branch_taken_0x13fa58) {
            ctx->pc = 0x13FA78u;
            goto label_13fa78;
        }
    }
    ctx->pc = 0x13FA60u;
label_13fa60:
    // 0x13fa60: 0x50400005
label_13fa64:
    if (ctx->pc == 0x13FA64u) {
        ctx->pc = 0x13FA64u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13FA68u;
        goto label_13fa68;
    }
    ctx->pc = 0x13FA60u;
    {
        const bool branch_taken_0x13fa60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x13fa60) {
            ctx->pc = 0x13FA64u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x13FA78u;
            goto label_13fa78;
        }
    }
    ctx->pc = 0x13FA68u;
label_13fa68:
    // 0x13fa68: 0x8c84003c
    ctx->pc = 0x13fa68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_13fa6c:
    // 0x13fa6c: 0x40f809
label_13fa70:
    if (ctx->pc == 0x13FA70u) {
        ctx->pc = 0x13FA70u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x13FA74u;
        goto label_13fa74;
    }
    ctx->pc = 0x13FA6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13FA74u);
        ctx->pc = 0x13FA70u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F9F0u: goto label_13f9f0;
            case 0x13F9F4u: goto label_13f9f4;
            case 0x13F9F8u: goto label_13f9f8;
            case 0x13F9FCu: goto label_13f9fc;
            case 0x13FA00u: goto label_13fa00;
            case 0x13FA04u: goto label_13fa04;
            case 0x13FA08u: goto label_13fa08;
            case 0x13FA0Cu: goto label_13fa0c;
            case 0x13FA10u: goto label_13fa10;
            case 0x13FA14u: goto label_13fa14;
            case 0x13FA18u: goto label_13fa18;
            case 0x13FA1Cu: goto label_13fa1c;
            case 0x13FA20u: goto label_13fa20;
            case 0x13FA24u: goto label_13fa24;
            case 0x13FA28u: goto label_13fa28;
            case 0x13FA2Cu: goto label_13fa2c;
            case 0x13FA30u: goto label_13fa30;
            case 0x13FA34u: goto label_13fa34;
            case 0x13FA38u: goto label_13fa38;
            case 0x13FA3Cu: goto label_13fa3c;
            case 0x13FA40u: goto label_13fa40;
            case 0x13FA44u: goto label_13fa44;
            case 0x13FA48u: goto label_13fa48;
            case 0x13FA4Cu: goto label_13fa4c;
            case 0x13FA50u: goto label_13fa50;
            case 0x13FA54u: goto label_13fa54;
            case 0x13FA58u: goto label_13fa58;
            case 0x13FA5Cu: goto label_13fa5c;
            case 0x13FA60u: goto label_13fa60;
            case 0x13FA64u: goto label_13fa64;
            case 0x13FA68u: goto label_13fa68;
            case 0x13FA6Cu: goto label_13fa6c;
            case 0x13FA70u: goto label_13fa70;
            case 0x13FA74u: goto label_13fa74;
            case 0x13FA78u: goto label_13fa78;
            case 0x13FA7Cu: goto label_13fa7c;
            case 0x13FA80u: goto label_13fa80;
            case 0x13FA84u: goto label_13fa84;
            case 0x13FA88u: goto label_13fa88;
            case 0x13FA8Cu: goto label_13fa8c;
            case 0x13FA90u: goto label_13fa90;
            case 0x13FA94u: goto label_13fa94;
            case 0x13FA98u: goto label_13fa98;
            case 0x13FA9Cu: goto label_13fa9c;
            case 0x13FAA0u: goto label_13faa0;
            case 0x13FAA4u: goto label_13faa4;
            case 0x13FAA8u: goto label_13faa8;
            case 0x13FAACu: goto label_13faac;
            case 0x13FAB0u: goto label_13fab0;
            case 0x13FAB4u: goto label_13fab4;
            case 0x13FAB8u: goto label_13fab8;
            case 0x13FABCu: goto label_13fabc;
            case 0x13FAC0u: goto label_13fac0;
            case 0x13FAC4u: goto label_13fac4;
            case 0x13FAC8u: goto label_13fac8;
            case 0x13FACCu: goto label_13facc;
            case 0x13FAD0u: goto label_13fad0;
            case 0x13FAD4u: goto label_13fad4;
            case 0x13FAD8u: goto label_13fad8;
            case 0x13FADCu: goto label_13fadc;
            case 0x13FAE0u: goto label_13fae0;
            case 0x13FAE4u: goto label_13fae4;
            case 0x13FAE8u: goto label_13fae8;
            case 0x13FAECu: goto label_13faec;
            case 0x13FAF0u: goto label_13faf0;
            case 0x13FAF4u: goto label_13faf4;
            case 0x13FAF8u: goto label_13faf8;
            case 0x13FAFCu: goto label_13fafc;
            case 0x13FB00u: goto label_13fb00;
            case 0x13FB04u: goto label_13fb04;
            case 0x13FB08u: goto label_13fb08;
            case 0x13FB0Cu: goto label_13fb0c;
            case 0x13FB10u: goto label_13fb10;
            case 0x13FB14u: goto label_13fb14;
            case 0x13FB18u: goto label_13fb18;
            case 0x13FB1Cu: goto label_13fb1c;
            case 0x13FB20u: goto label_13fb20;
            case 0x13FB24u: goto label_13fb24;
            case 0x13FB28u: goto label_13fb28;
            case 0x13FB2Cu: goto label_13fb2c;
            case 0x13FB30u: goto label_13fb30;
            case 0x13FB34u: goto label_13fb34;
            case 0x13FB38u: goto label_13fb38;
            case 0x13FB3Cu: goto label_13fb3c;
            case 0x13FB40u: goto label_13fb40;
            case 0x13FB44u: goto label_13fb44;
            case 0x13FB48u: goto label_13fb48;
            case 0x13FB4Cu: goto label_13fb4c;
            case 0x13FB50u: goto label_13fb50;
            case 0x13FB54u: goto label_13fb54;
            case 0x13FB58u: goto label_13fb58;
            case 0x13FB5Cu: goto label_13fb5c;
            case 0x13FB60u: goto label_13fb60;
            case 0x13FB64u: goto label_13fb64;
            case 0x13FB68u: goto label_13fb68;
            case 0x13FB6Cu: goto label_13fb6c;
            case 0x13FB70u: goto label_13fb70;
            case 0x13FB74u: goto label_13fb74;
            case 0x13FB78u: goto label_13fb78;
            case 0x13FB7Cu: goto label_13fb7c;
            case 0x13FB80u: goto label_13fb80;
            case 0x13FB84u: goto label_13fb84;
            case 0x13FB88u: goto label_13fb88;
            case 0x13FB8Cu: goto label_13fb8c;
            case 0x13FB90u: goto label_13fb90;
            case 0x13FB94u: goto label_13fb94;
            case 0x13FB98u: goto label_13fb98;
            case 0x13FB9Cu: goto label_13fb9c;
            case 0x13FBA0u: goto label_13fba0;
            case 0x13FBA4u: goto label_13fba4;
            case 0x13FBA8u: goto label_13fba8;
            case 0x13FBACu: goto label_13fbac;
            case 0x13FBB0u: goto label_13fbb0;
            case 0x13FBB4u: goto label_13fbb4;
            case 0x13FBB8u: goto label_13fbb8;
            case 0x13FBBCu: goto label_13fbbc;
            case 0x13FBC0u: goto label_13fbc0;
            case 0x13FBC4u: goto label_13fbc4;
            case 0x13FBC8u: goto label_13fbc8;
            case 0x13FBCCu: goto label_13fbcc;
            case 0x13FBD0u: goto label_13fbd0;
            case 0x13FBD4u: goto label_13fbd4;
            case 0x13FBD8u: goto label_13fbd8;
            case 0x13FBDCu: goto label_13fbdc;
            case 0x13FBE0u: goto label_13fbe0;
            case 0x13FBE4u: goto label_13fbe4;
            case 0x13FBE8u: goto label_13fbe8;
            case 0x13FBECu: goto label_13fbec;
            case 0x13FBF0u: goto label_13fbf0;
            case 0x13FBF4u: goto label_13fbf4;
            case 0x13FBF8u: goto label_13fbf8;
            case 0x13FBFCu: goto label_13fbfc;
            case 0x13FC00u: goto label_13fc00;
            case 0x13FC04u: goto label_13fc04;
            case 0x13FC08u: goto label_13fc08;
            case 0x13FC0Cu: goto label_13fc0c;
            case 0x13FC10u: goto label_13fc10;
            case 0x13FC14u: goto label_13fc14;
            case 0x13FC18u: goto label_13fc18;
            case 0x13FC1Cu: goto label_13fc1c;
            case 0x13FC20u: goto label_13fc20;
            case 0x13FC24u: goto label_13fc24;
            case 0x13FC28u: goto label_13fc28;
            case 0x13FC2Cu: goto label_13fc2c;
            case 0x13FC30u: goto label_13fc30;
            case 0x13FC34u: goto label_13fc34;
            case 0x13FC38u: goto label_13fc38;
            case 0x13FC3Cu: goto label_13fc3c;
            case 0x13FC40u: goto label_13fc40;
            case 0x13FC44u: goto label_13fc44;
            case 0x13FC48u: goto label_13fc48;
            case 0x13FC4Cu: goto label_13fc4c;
            case 0x13FC50u: goto label_13fc50;
            case 0x13FC54u: goto label_13fc54;
            case 0x13FC58u: goto label_13fc58;
            case 0x13FC5Cu: goto label_13fc5c;
            case 0x13FC60u: goto label_13fc60;
            case 0x13FC64u: goto label_13fc64;
            case 0x13FC68u: goto label_13fc68;
            case 0x13FC6Cu: goto label_13fc6c;
            case 0x13FC70u: goto label_13fc70;
            case 0x13FC74u: goto label_13fc74;
            case 0x13FC78u: goto label_13fc78;
            case 0x13FC7Cu: goto label_13fc7c;
            case 0x13FC80u: goto label_13fc80;
            case 0x13FC84u: goto label_13fc84;
            case 0x13FC88u: goto label_13fc88;
            case 0x13FC8Cu: goto label_13fc8c;
            case 0x13FC90u: goto label_13fc90;
            case 0x13FC94u: goto label_13fc94;
            case 0x13FC98u: goto label_13fc98;
            case 0x13FC9Cu: goto label_13fc9c;
            case 0x13FCA0u: goto label_13fca0;
            case 0x13FCA4u: goto label_13fca4;
            case 0x13FCA8u: goto label_13fca8;
            case 0x13FCACu: goto label_13fcac;
            case 0x13FCB0u: goto label_13fcb0;
            case 0x13FCB4u: goto label_13fcb4;
            case 0x13FCB8u: goto label_13fcb8;
            case 0x13FCBCu: goto label_13fcbc;
            case 0x13FCC0u: goto label_13fcc0;
            case 0x13FCC4u: goto label_13fcc4;
            case 0x13FCC8u: goto label_13fcc8;
            case 0x13FCCCu: goto label_13fccc;
            case 0x13FCD0u: goto label_13fcd0;
            case 0x13FCD4u: goto label_13fcd4;
            case 0x13FCD8u: goto label_13fcd8;
            case 0x13FCDCu: goto label_13fcdc;
            case 0x13FCE0u: goto label_13fce0;
            case 0x13FCE4u: goto label_13fce4;
            case 0x13FCE8u: goto label_13fce8;
            case 0x13FCECu: goto label_13fcec;
            case 0x13FCF0u: goto label_13fcf0;
            case 0x13FCF4u: goto label_13fcf4;
            case 0x13FCF8u: goto label_13fcf8;
            case 0x13FCFCu: goto label_13fcfc;
            case 0x13FD00u: goto label_13fd00;
            case 0x13FD04u: goto label_13fd04;
            case 0x13FD08u: goto label_13fd08;
            case 0x13FD0Cu: goto label_13fd0c;
            case 0x13FD10u: goto label_13fd10;
            case 0x13FD14u: goto label_13fd14;
            case 0x13FD18u: goto label_13fd18;
            case 0x13FD1Cu: goto label_13fd1c;
            case 0x13FD20u: goto label_13fd20;
            case 0x13FD24u: goto label_13fd24;
            case 0x13FD28u: goto label_13fd28;
            case 0x13FD2Cu: goto label_13fd2c;
            case 0x13FD30u: goto label_13fd30;
            case 0x13FD34u: goto label_13fd34;
            case 0x13FD38u: goto label_13fd38;
            case 0x13FD3Cu: goto label_13fd3c;
            case 0x13FD40u: goto label_13fd40;
            case 0x13FD44u: goto label_13fd44;
            case 0x13FD48u: goto label_13fd48;
            case 0x13FD4Cu: goto label_13fd4c;
            case 0x13FD50u: goto label_13fd50;
            case 0x13FD54u: goto label_13fd54;
            case 0x13FD58u: goto label_13fd58;
            case 0x13FD5Cu: goto label_13fd5c;
            case 0x13FD60u: goto label_13fd60;
            case 0x13FD64u: goto label_13fd64;
            case 0x13FD68u: goto label_13fd68;
            case 0x13FD6Cu: goto label_13fd6c;
            case 0x13FD70u: goto label_13fd70;
            case 0x13FD74u: goto label_13fd74;
            case 0x13FD78u: goto label_13fd78;
            case 0x13FD7Cu: goto label_13fd7c;
            case 0x13FD80u: goto label_13fd80;
            case 0x13FD84u: goto label_13fd84;
            case 0x13FD88u: goto label_13fd88;
            case 0x13FD8Cu: goto label_13fd8c;
            case 0x13FD90u: goto label_13fd90;
            case 0x13FD94u: goto label_13fd94;
            case 0x13FD98u: goto label_13fd98;
            case 0x13FD9Cu: goto label_13fd9c;
            case 0x13FDA0u: goto label_13fda0;
            case 0x13FDA4u: goto label_13fda4;
            case 0x13FDA8u: goto label_13fda8;
            case 0x13FDACu: goto label_13fdac;
            case 0x13FDB0u: goto label_13fdb0;
            case 0x13FDB4u: goto label_13fdb4;
            case 0x13FDB8u: goto label_13fdb8;
            case 0x13FDBCu: goto label_13fdbc;
            case 0x13FDC0u: goto label_13fdc0;
            case 0x13FDC4u: goto label_13fdc4;
            case 0x13FDC8u: goto label_13fdc8;
            case 0x13FDCCu: goto label_13fdcc;
            case 0x13FDD0u: goto label_13fdd0;
            case 0x13FDD4u: goto label_13fdd4;
            case 0x13FDD8u: goto label_13fdd8;
            case 0x13FDDCu: goto label_13fddc;
            case 0x13FDE0u: goto label_13fde0;
            case 0x13FDE4u: goto label_13fde4;
            case 0x13FDE8u: goto label_13fde8;
            case 0x13FDECu: goto label_13fdec;
            case 0x13FDF0u: goto label_13fdf0;
            case 0x13FDF4u: goto label_13fdf4;
            case 0x13FDF8u: goto label_13fdf8;
            case 0x13FDFCu: goto label_13fdfc;
            case 0x13FE00u: goto label_13fe00;
            case 0x13FE04u: goto label_13fe04;
            case 0x13FE08u: goto label_13fe08;
            case 0x13FE0Cu: goto label_13fe0c;
            case 0x13FE10u: goto label_13fe10;
            case 0x13FE14u: goto label_13fe14;
            case 0x13FE18u: goto label_13fe18;
            case 0x13FE1Cu: goto label_13fe1c;
            case 0x13FE20u: goto label_13fe20;
            case 0x13FE24u: goto label_13fe24;
            case 0x13FE28u: goto label_13fe28;
            case 0x13FE2Cu: goto label_13fe2c;
            case 0x13FE30u: goto label_13fe30;
            case 0x13FE34u: goto label_13fe34;
            case 0x13FE38u: goto label_13fe38;
            case 0x13FE3Cu: goto label_13fe3c;
            case 0x13FE40u: goto label_13fe40;
            case 0x13FE44u: goto label_13fe44;
            case 0x13FE48u: goto label_13fe48;
            case 0x13FE4Cu: goto label_13fe4c;
            case 0x13FE50u: goto label_13fe50;
            case 0x13FE54u: goto label_13fe54;
            case 0x13FE58u: goto label_13fe58;
            case 0x13FE5Cu: goto label_13fe5c;
            case 0x13FE60u: goto label_13fe60;
            case 0x13FE64u: goto label_13fe64;
            case 0x13FE68u: goto label_13fe68;
            case 0x13FE6Cu: goto label_13fe6c;
            case 0x13FE70u: goto label_13fe70;
            case 0x13FE74u: goto label_13fe74;
            case 0x13FE78u: goto label_13fe78;
            case 0x13FE7Cu: goto label_13fe7c;
            case 0x13FE80u: goto label_13fe80;
            case 0x13FE84u: goto label_13fe84;
            case 0x13FE88u: goto label_13fe88;
            case 0x13FE8Cu: goto label_13fe8c;
            case 0x13FE90u: goto label_13fe90;
            case 0x13FE94u: goto label_13fe94;
            case 0x13FE98u: goto label_13fe98;
            case 0x13FE9Cu: goto label_13fe9c;
            case 0x13FEA0u: goto label_13fea0;
            case 0x13FEA4u: goto label_13fea4;
            case 0x13FEA8u: goto label_13fea8;
            case 0x13FEACu: goto label_13feac;
            case 0x13FEB0u: goto label_13feb0;
            case 0x13FEB4u: goto label_13feb4;
            case 0x13FEB8u: goto label_13feb8;
            case 0x13FEBCu: goto label_13febc;
            case 0x13FEC0u: goto label_13fec0;
            case 0x13FEC4u: goto label_13fec4;
            case 0x13FEC8u: goto label_13fec8;
            case 0x13FECCu: goto label_13fecc;
            case 0x13FED0u: goto label_13fed0;
            case 0x13FED4u: goto label_13fed4;
            case 0x13FED8u: goto label_13fed8;
            case 0x13FEDCu: goto label_13fedc;
            case 0x13FEE0u: goto label_13fee0;
            case 0x13FEE4u: goto label_13fee4;
            case 0x13FEE8u: goto label_13fee8;
            case 0x13FEECu: goto label_13feec;
            case 0x13FEF0u: goto label_13fef0;
            case 0x13FEF4u: goto label_13fef4;
            case 0x13FEF8u: goto label_13fef8;
            case 0x13FEFCu: goto label_13fefc;
            case 0x13FF00u: goto label_13ff00;
            case 0x13FF04u: goto label_13ff04;
            case 0x13FF08u: goto label_13ff08;
            case 0x13FF0Cu: goto label_13ff0c;
            case 0x13FF10u: goto label_13ff10;
            case 0x13FF14u: goto label_13ff14;
            case 0x13FF18u: goto label_13ff18;
            case 0x13FF1Cu: goto label_13ff1c;
            case 0x13FF20u: goto label_13ff20;
            case 0x13FF24u: goto label_13ff24;
            case 0x13FF28u: goto label_13ff28;
            case 0x13FF2Cu: goto label_13ff2c;
            case 0x13FF30u: goto label_13ff30;
            case 0x13FF34u: goto label_13ff34;
            case 0x13FF38u: goto label_13ff38;
            case 0x13FF3Cu: goto label_13ff3c;
            case 0x13FF40u: goto label_13ff40;
            case 0x13FF44u: goto label_13ff44;
            case 0x13FF48u: goto label_13ff48;
            case 0x13FF4Cu: goto label_13ff4c;
            case 0x13FF50u: goto label_13ff50;
            case 0x13FF54u: goto label_13ff54;
            case 0x13FF58u: goto label_13ff58;
            case 0x13FF5Cu: goto label_13ff5c;
            case 0x13FF60u: goto label_13ff60;
            case 0x13FF64u: goto label_13ff64;
            case 0x13FF68u: goto label_13ff68;
            case 0x13FF6Cu: goto label_13ff6c;
            case 0x13FF70u: goto label_13ff70;
            case 0x13FF74u: goto label_13ff74;
            case 0x13FF78u: goto label_13ff78;
            case 0x13FF7Cu: goto label_13ff7c;
            case 0x13FF80u: goto label_13ff80;
            case 0x13FF84u: goto label_13ff84;
            case 0x13FF88u: goto label_13ff88;
            case 0x13FF8Cu: goto label_13ff8c;
            case 0x13FF90u: goto label_13ff90;
            case 0x13FF94u: goto label_13ff94;
            case 0x13FF98u: goto label_13ff98;
            case 0x13FF9Cu: goto label_13ff9c;
            case 0x13FFA0u: goto label_13ffa0;
            case 0x13FFA4u: goto label_13ffa4;
            case 0x13FFA8u: goto label_13ffa8;
            case 0x13FFACu: goto label_13ffac;
            case 0x13FFB0u: goto label_13ffb0;
            case 0x13FFB4u: goto label_13ffb4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13FA74u; }
            if (ctx->pc != 0x13FA74u) { return; }
        }
    }
    ctx->pc = 0x13FA74u;
label_13fa74:
    // 0x13fa74: 0x102d
    ctx->pc = 0x13fa74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13fa78:
    // 0x13fa78: 0xdfbf0000
    ctx->pc = 0x13fa78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13fa7c:
    // 0x13fa7c: 0x3e00008
label_13fa80:
    if (ctx->pc == 0x13FA80u) {
        ctx->pc = 0x13FA80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x13FA84u;
        goto label_13fa84;
    }
    ctx->pc = 0x13FA7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FA80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F9F0u: goto label_13f9f0;
            case 0x13F9F4u: goto label_13f9f4;
            case 0x13F9F8u: goto label_13f9f8;
            case 0x13F9FCu: goto label_13f9fc;
            case 0x13FA00u: goto label_13fa00;
            case 0x13FA04u: goto label_13fa04;
            case 0x13FA08u: goto label_13fa08;
            case 0x13FA0Cu: goto label_13fa0c;
            case 0x13FA10u: goto label_13fa10;
            case 0x13FA14u: goto label_13fa14;
            case 0x13FA18u: goto label_13fa18;
            case 0x13FA1Cu: goto label_13fa1c;
            case 0x13FA20u: goto label_13fa20;
            case 0x13FA24u: goto label_13fa24;
            case 0x13FA28u: goto label_13fa28;
            case 0x13FA2Cu: goto label_13fa2c;
            case 0x13FA30u: goto label_13fa30;
            case 0x13FA34u: goto label_13fa34;
            case 0x13FA38u: goto label_13fa38;
            case 0x13FA3Cu: goto label_13fa3c;
            case 0x13FA40u: goto label_13fa40;
            case 0x13FA44u: goto label_13fa44;
            case 0x13FA48u: goto label_13fa48;
            case 0x13FA4Cu: goto label_13fa4c;
            case 0x13FA50u: goto label_13fa50;
            case 0x13FA54u: goto label_13fa54;
            case 0x13FA58u: goto label_13fa58;
            case 0x13FA5Cu: goto label_13fa5c;
            case 0x13FA60u: goto label_13fa60;
            case 0x13FA64u: goto label_13fa64;
            case 0x13FA68u: goto label_13fa68;
            case 0x13FA6Cu: goto label_13fa6c;
            case 0x13FA70u: goto label_13fa70;
            case 0x13FA74u: goto label_13fa74;
            case 0x13FA78u: goto label_13fa78;
            case 0x13FA7Cu: goto label_13fa7c;
            case 0x13FA80u: goto label_13fa80;
            case 0x13FA84u: goto label_13fa84;
            case 0x13FA88u: goto label_13fa88;
            case 0x13FA8Cu: goto label_13fa8c;
            case 0x13FA90u: goto label_13fa90;
            case 0x13FA94u: goto label_13fa94;
            case 0x13FA98u: goto label_13fa98;
            case 0x13FA9Cu: goto label_13fa9c;
            case 0x13FAA0u: goto label_13faa0;
            case 0x13FAA4u: goto label_13faa4;
            case 0x13FAA8u: goto label_13faa8;
            case 0x13FAACu: goto label_13faac;
            case 0x13FAB0u: goto label_13fab0;
            case 0x13FAB4u: goto label_13fab4;
            case 0x13FAB8u: goto label_13fab8;
            case 0x13FABCu: goto label_13fabc;
            case 0x13FAC0u: goto label_13fac0;
            case 0x13FAC4u: goto label_13fac4;
            case 0x13FAC8u: goto label_13fac8;
            case 0x13FACCu: goto label_13facc;
            case 0x13FAD0u: goto label_13fad0;
            case 0x13FAD4u: goto label_13fad4;
            case 0x13FAD8u: goto label_13fad8;
            case 0x13FADCu: goto label_13fadc;
            case 0x13FAE0u: goto label_13fae0;
            case 0x13FAE4u: goto label_13fae4;
            case 0x13FAE8u: goto label_13fae8;
            case 0x13FAECu: goto label_13faec;
            case 0x13FAF0u: goto label_13faf0;
            case 0x13FAF4u: goto label_13faf4;
            case 0x13FAF8u: goto label_13faf8;
            case 0x13FAFCu: goto label_13fafc;
            case 0x13FB00u: goto label_13fb00;
            case 0x13FB04u: goto label_13fb04;
            case 0x13FB08u: goto label_13fb08;
            case 0x13FB0Cu: goto label_13fb0c;
            case 0x13FB10u: goto label_13fb10;
            case 0x13FB14u: goto label_13fb14;
            case 0x13FB18u: goto label_13fb18;
            case 0x13FB1Cu: goto label_13fb1c;
            case 0x13FB20u: goto label_13fb20;
            case 0x13FB24u: goto label_13fb24;
            case 0x13FB28u: goto label_13fb28;
            case 0x13FB2Cu: goto label_13fb2c;
            case 0x13FB30u: goto label_13fb30;
            case 0x13FB34u: goto label_13fb34;
            case 0x13FB38u: goto label_13fb38;
            case 0x13FB3Cu: goto label_13fb3c;
            case 0x13FB40u: goto label_13fb40;
            case 0x13FB44u: goto label_13fb44;
            case 0x13FB48u: goto label_13fb48;
            case 0x13FB4Cu: goto label_13fb4c;
            case 0x13FB50u: goto label_13fb50;
            case 0x13FB54u: goto label_13fb54;
            case 0x13FB58u: goto label_13fb58;
            case 0x13FB5Cu: goto label_13fb5c;
            case 0x13FB60u: goto label_13fb60;
            case 0x13FB64u: goto label_13fb64;
            case 0x13FB68u: goto label_13fb68;
            case 0x13FB6Cu: goto label_13fb6c;
            case 0x13FB70u: goto label_13fb70;
            case 0x13FB74u: goto label_13fb74;
            case 0x13FB78u: goto label_13fb78;
            case 0x13FB7Cu: goto label_13fb7c;
            case 0x13FB80u: goto label_13fb80;
            case 0x13FB84u: goto label_13fb84;
            case 0x13FB88u: goto label_13fb88;
            case 0x13FB8Cu: goto label_13fb8c;
            case 0x13FB90u: goto label_13fb90;
            case 0x13FB94u: goto label_13fb94;
            case 0x13FB98u: goto label_13fb98;
            case 0x13FB9Cu: goto label_13fb9c;
            case 0x13FBA0u: goto label_13fba0;
            case 0x13FBA4u: goto label_13fba4;
            case 0x13FBA8u: goto label_13fba8;
            case 0x13FBACu: goto label_13fbac;
            case 0x13FBB0u: goto label_13fbb0;
            case 0x13FBB4u: goto label_13fbb4;
            case 0x13FBB8u: goto label_13fbb8;
            case 0x13FBBCu: goto label_13fbbc;
            case 0x13FBC0u: goto label_13fbc0;
            case 0x13FBC4u: goto label_13fbc4;
            case 0x13FBC8u: goto label_13fbc8;
            case 0x13FBCCu: goto label_13fbcc;
            case 0x13FBD0u: goto label_13fbd0;
            case 0x13FBD4u: goto label_13fbd4;
            case 0x13FBD8u: goto label_13fbd8;
            case 0x13FBDCu: goto label_13fbdc;
            case 0x13FBE0u: goto label_13fbe0;
            case 0x13FBE4u: goto label_13fbe4;
            case 0x13FBE8u: goto label_13fbe8;
            case 0x13FBECu: goto label_13fbec;
            case 0x13FBF0u: goto label_13fbf0;
            case 0x13FBF4u: goto label_13fbf4;
            case 0x13FBF8u: goto label_13fbf8;
            case 0x13FBFCu: goto label_13fbfc;
            case 0x13FC00u: goto label_13fc00;
            case 0x13FC04u: goto label_13fc04;
            case 0x13FC08u: goto label_13fc08;
            case 0x13FC0Cu: goto label_13fc0c;
            case 0x13FC10u: goto label_13fc10;
            case 0x13FC14u: goto label_13fc14;
            case 0x13FC18u: goto label_13fc18;
            case 0x13FC1Cu: goto label_13fc1c;
            case 0x13FC20u: goto label_13fc20;
            case 0x13FC24u: goto label_13fc24;
            case 0x13FC28u: goto label_13fc28;
            case 0x13FC2Cu: goto label_13fc2c;
            case 0x13FC30u: goto label_13fc30;
            case 0x13FC34u: goto label_13fc34;
            case 0x13FC38u: goto label_13fc38;
            case 0x13FC3Cu: goto label_13fc3c;
            case 0x13FC40u: goto label_13fc40;
            case 0x13FC44u: goto label_13fc44;
            case 0x13FC48u: goto label_13fc48;
            case 0x13FC4Cu: goto label_13fc4c;
            case 0x13FC50u: goto label_13fc50;
            case 0x13FC54u: goto label_13fc54;
            case 0x13FC58u: goto label_13fc58;
            case 0x13FC5Cu: goto label_13fc5c;
            case 0x13FC60u: goto label_13fc60;
            case 0x13FC64u: goto label_13fc64;
            case 0x13FC68u: goto label_13fc68;
            case 0x13FC6Cu: goto label_13fc6c;
            case 0x13FC70u: goto label_13fc70;
            case 0x13FC74u: goto label_13fc74;
            case 0x13FC78u: goto label_13fc78;
            case 0x13FC7Cu: goto label_13fc7c;
            case 0x13FC80u: goto label_13fc80;
            case 0x13FC84u: goto label_13fc84;
            case 0x13FC88u: goto label_13fc88;
            case 0x13FC8Cu: goto label_13fc8c;
            case 0x13FC90u: goto label_13fc90;
            case 0x13FC94u: goto label_13fc94;
            case 0x13FC98u: goto label_13fc98;
            case 0x13FC9Cu: goto label_13fc9c;
            case 0x13FCA0u: goto label_13fca0;
            case 0x13FCA4u: goto label_13fca4;
            case 0x13FCA8u: goto label_13fca8;
            case 0x13FCACu: goto label_13fcac;
            case 0x13FCB0u: goto label_13fcb0;
            case 0x13FCB4u: goto label_13fcb4;
            case 0x13FCB8u: goto label_13fcb8;
            case 0x13FCBCu: goto label_13fcbc;
            case 0x13FCC0u: goto label_13fcc0;
            case 0x13FCC4u: goto label_13fcc4;
            case 0x13FCC8u: goto label_13fcc8;
            case 0x13FCCCu: goto label_13fccc;
            case 0x13FCD0u: goto label_13fcd0;
            case 0x13FCD4u: goto label_13fcd4;
            case 0x13FCD8u: goto label_13fcd8;
            case 0x13FCDCu: goto label_13fcdc;
            case 0x13FCE0u: goto label_13fce0;
            case 0x13FCE4u: goto label_13fce4;
            case 0x13FCE8u: goto label_13fce8;
            case 0x13FCECu: goto label_13fcec;
            case 0x13FCF0u: goto label_13fcf0;
            case 0x13FCF4u: goto label_13fcf4;
            case 0x13FCF8u: goto label_13fcf8;
            case 0x13FCFCu: goto label_13fcfc;
            case 0x13FD00u: goto label_13fd00;
            case 0x13FD04u: goto label_13fd04;
            case 0x13FD08u: goto label_13fd08;
            case 0x13FD0Cu: goto label_13fd0c;
            case 0x13FD10u: goto label_13fd10;
            case 0x13FD14u: goto label_13fd14;
            case 0x13FD18u: goto label_13fd18;
            case 0x13FD1Cu: goto label_13fd1c;
            case 0x13FD20u: goto label_13fd20;
            case 0x13FD24u: goto label_13fd24;
            case 0x13FD28u: goto label_13fd28;
            case 0x13FD2Cu: goto label_13fd2c;
            case 0x13FD30u: goto label_13fd30;
            case 0x13FD34u: goto label_13fd34;
            case 0x13FD38u: goto label_13fd38;
            case 0x13FD3Cu: goto label_13fd3c;
            case 0x13FD40u: goto label_13fd40;
            case 0x13FD44u: goto label_13fd44;
            case 0x13FD48u: goto label_13fd48;
            case 0x13FD4Cu: goto label_13fd4c;
            case 0x13FD50u: goto label_13fd50;
            case 0x13FD54u: goto label_13fd54;
            case 0x13FD58u: goto label_13fd58;
            case 0x13FD5Cu: goto label_13fd5c;
            case 0x13FD60u: goto label_13fd60;
            case 0x13FD64u: goto label_13fd64;
            case 0x13FD68u: goto label_13fd68;
            case 0x13FD6Cu: goto label_13fd6c;
            case 0x13FD70u: goto label_13fd70;
            case 0x13FD74u: goto label_13fd74;
            case 0x13FD78u: goto label_13fd78;
            case 0x13FD7Cu: goto label_13fd7c;
            case 0x13FD80u: goto label_13fd80;
            case 0x13FD84u: goto label_13fd84;
            case 0x13FD88u: goto label_13fd88;
            case 0x13FD8Cu: goto label_13fd8c;
            case 0x13FD90u: goto label_13fd90;
            case 0x13FD94u: goto label_13fd94;
            case 0x13FD98u: goto label_13fd98;
            case 0x13FD9Cu: goto label_13fd9c;
            case 0x13FDA0u: goto label_13fda0;
            case 0x13FDA4u: goto label_13fda4;
            case 0x13FDA8u: goto label_13fda8;
            case 0x13FDACu: goto label_13fdac;
            case 0x13FDB0u: goto label_13fdb0;
            case 0x13FDB4u: goto label_13fdb4;
            case 0x13FDB8u: goto label_13fdb8;
            case 0x13FDBCu: goto label_13fdbc;
            case 0x13FDC0u: goto label_13fdc0;
            case 0x13FDC4u: goto label_13fdc4;
            case 0x13FDC8u: goto label_13fdc8;
            case 0x13FDCCu: goto label_13fdcc;
            case 0x13FDD0u: goto label_13fdd0;
            case 0x13FDD4u: goto label_13fdd4;
            case 0x13FDD8u: goto label_13fdd8;
            case 0x13FDDCu: goto label_13fddc;
            case 0x13FDE0u: goto label_13fde0;
            case 0x13FDE4u: goto label_13fde4;
            case 0x13FDE8u: goto label_13fde8;
            case 0x13FDECu: goto label_13fdec;
            case 0x13FDF0u: goto label_13fdf0;
            case 0x13FDF4u: goto label_13fdf4;
            case 0x13FDF8u: goto label_13fdf8;
            case 0x13FDFCu: goto label_13fdfc;
            case 0x13FE00u: goto label_13fe00;
            case 0x13FE04u: goto label_13fe04;
            case 0x13FE08u: goto label_13fe08;
            case 0x13FE0Cu: goto label_13fe0c;
            case 0x13FE10u: goto label_13fe10;
            case 0x13FE14u: goto label_13fe14;
            case 0x13FE18u: goto label_13fe18;
            case 0x13FE1Cu: goto label_13fe1c;
            case 0x13FE20u: goto label_13fe20;
            case 0x13FE24u: goto label_13fe24;
            case 0x13FE28u: goto label_13fe28;
            case 0x13FE2Cu: goto label_13fe2c;
            case 0x13FE30u: goto label_13fe30;
            case 0x13FE34u: goto label_13fe34;
            case 0x13FE38u: goto label_13fe38;
            case 0x13FE3Cu: goto label_13fe3c;
            case 0x13FE40u: goto label_13fe40;
            case 0x13FE44u: goto label_13fe44;
            case 0x13FE48u: goto label_13fe48;
            case 0x13FE4Cu: goto label_13fe4c;
            case 0x13FE50u: goto label_13fe50;
            case 0x13FE54u: goto label_13fe54;
            case 0x13FE58u: goto label_13fe58;
            case 0x13FE5Cu: goto label_13fe5c;
            case 0x13FE60u: goto label_13fe60;
            case 0x13FE64u: goto label_13fe64;
            case 0x13FE68u: goto label_13fe68;
            case 0x13FE6Cu: goto label_13fe6c;
            case 0x13FE70u: goto label_13fe70;
            case 0x13FE74u: goto label_13fe74;
            case 0x13FE78u: goto label_13fe78;
            case 0x13FE7Cu: goto label_13fe7c;
            case 0x13FE80u: goto label_13fe80;
            case 0x13FE84u: goto label_13fe84;
            case 0x13FE88u: goto label_13fe88;
            case 0x13FE8Cu: goto label_13fe8c;
            case 0x13FE90u: goto label_13fe90;
            case 0x13FE94u: goto label_13fe94;
            case 0x13FE98u: goto label_13fe98;
            case 0x13FE9Cu: goto label_13fe9c;
            case 0x13FEA0u: goto label_13fea0;
            case 0x13FEA4u: goto label_13fea4;
            case 0x13FEA8u: goto label_13fea8;
            case 0x13FEACu: goto label_13feac;
            case 0x13FEB0u: goto label_13feb0;
            case 0x13FEB4u: goto label_13feb4;
            case 0x13FEB8u: goto label_13feb8;
            case 0x13FEBCu: goto label_13febc;
            case 0x13FEC0u: goto label_13fec0;
            case 0x13FEC4u: goto label_13fec4;
            case 0x13FEC8u: goto label_13fec8;
            case 0x13FECCu: goto label_13fecc;
            case 0x13FED0u: goto label_13fed0;
            case 0x13FED4u: goto label_13fed4;
            case 0x13FED8u: goto label_13fed8;
            case 0x13FEDCu: goto label_13fedc;
            case 0x13FEE0u: goto label_13fee0;
            case 0x13FEE4u: goto label_13fee4;
            case 0x13FEE8u: goto label_13fee8;
            case 0x13FEECu: goto label_13feec;
            case 0x13FEF0u: goto label_13fef0;
            case 0x13FEF4u: goto label_13fef4;
            case 0x13FEF8u: goto label_13fef8;
            case 0x13FEFCu: goto label_13fefc;
            case 0x13FF00u: goto label_13ff00;
            case 0x13FF04u: goto label_13ff04;
            case 0x13FF08u: goto label_13ff08;
            case 0x13FF0Cu: goto label_13ff0c;
            case 0x13FF10u: goto label_13ff10;
            case 0x13FF14u: goto label_13ff14;
            case 0x13FF18u: goto label_13ff18;
            case 0x13FF1Cu: goto label_13ff1c;
            case 0x13FF20u: goto label_13ff20;
            case 0x13FF24u: goto label_13ff24;
            case 0x13FF28u: goto label_13ff28;
            case 0x13FF2Cu: goto label_13ff2c;
            case 0x13FF30u: goto label_13ff30;
            case 0x13FF34u: goto label_13ff34;
            case 0x13FF38u: goto label_13ff38;
            case 0x13FF3Cu: goto label_13ff3c;
            case 0x13FF40u: goto label_13ff40;
            case 0x13FF44u: goto label_13ff44;
            case 0x13FF48u: goto label_13ff48;
            case 0x13FF4Cu: goto label_13ff4c;
            case 0x13FF50u: goto label_13ff50;
            case 0x13FF54u: goto label_13ff54;
            case 0x13FF58u: goto label_13ff58;
            case 0x13FF5Cu: goto label_13ff5c;
            case 0x13FF60u: goto label_13ff60;
            case 0x13FF64u: goto label_13ff64;
            case 0x13FF68u: goto label_13ff68;
            case 0x13FF6Cu: goto label_13ff6c;
            case 0x13FF70u: goto label_13ff70;
            case 0x13FF74u: goto label_13ff74;
            case 0x13FF78u: goto label_13ff78;
            case 0x13FF7Cu: goto label_13ff7c;
            case 0x13FF80u: goto label_13ff80;
            case 0x13FF84u: goto label_13ff84;
            case 0x13FF88u: goto label_13ff88;
            case 0x13FF8Cu: goto label_13ff8c;
            case 0x13FF90u: goto label_13ff90;
            case 0x13FF94u: goto label_13ff94;
            case 0x13FF98u: goto label_13ff98;
            case 0x13FF9Cu: goto label_13ff9c;
            case 0x13FFA0u: goto label_13ffa0;
            case 0x13FFA4u: goto label_13ffa4;
            case 0x13FFA8u: goto label_13ffa8;
            case 0x13FFACu: goto label_13ffac;
            case 0x13FFB0u: goto label_13ffb0;
            case 0x13FFB4u: goto label_13ffb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13FA84u;
label_13fa84:
    // 0x13fa84: 0x0
    ctx->pc = 0x13fa84u;
    // NOP
label_13fa88:
    // 0x13fa88: 0x27bdffd0
    ctx->pc = 0x13fa88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_13fa8c:
    // 0x13fa8c: 0xffb20010
    ctx->pc = 0x13fa8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_13fa90:
    // 0x13fa90: 0xa0902d
    ctx->pc = 0x13fa90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13fa94:
    // 0x13fa94: 0xffb00000
    ctx->pc = 0x13fa94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13fa98:
    // 0x13fa98: 0x80802d
    ctx->pc = 0x13fa98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13fa9c:
    // 0x13fa9c: 0xffb10008
    ctx->pc = 0x13fa9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13faa0:
    // 0x13faa0: 0xe0882d
    ctx->pc = 0x13faa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_13faa4:
    // 0x13faa4: 0xffb30018
    ctx->pc = 0x13faa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_13faa8:
    // 0x13faa8: 0xffbf0020
    ctx->pc = 0x13faa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_13faac:
    // 0x13faac: 0xc04fc96
label_13fab0:
    if (ctx->pc == 0x13FAB0u) {
        ctx->pc = 0x13FAB0u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13FAB4u;
        goto label_13fab4;
    }
    ctx->pc = 0x13FAACu;
    SET_GPR_U32(ctx, 31, 0x13FAB4u);
    ctx->pc = 0x13FAB0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13F258u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F258_0x13f258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FAB4u; }
    }
    if (ctx->pc != 0x13FAB4u) { return; }
    ctx->pc = 0x13FAB4u;
label_13fab4:
    // 0x13fab4: 0x16400020
label_13fab8:
    if (ctx->pc == 0x13FAB8u) {
        ctx->pc = 0x13FAB8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x13FABCu;
        goto label_13fabc;
    }
    ctx->pc = 0x13FAB4u;
    {
        const bool branch_taken_0x13fab4 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x13FAB8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x13fab4) {
            ctx->pc = 0x13FB38u;
            goto label_13fb38;
        }
    }
    ctx->pc = 0x13FABCu;
label_13fabc:
    // 0x13fabc: 0x8e030014
    ctx->pc = 0x13fabcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_13fac0:
    // 0x13fac0: 0x8e020020
    ctx->pc = 0x13fac0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_13fac4:
    // 0x13fac4: 0x8e040024
    ctx->pc = 0x13fac4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_13fac8:
    // 0x13fac8: 0x8e050010
    ctx->pc = 0x13fac8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_13facc:
    // 0x13facc: 0x431023
    ctx->pc = 0x13faccu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13fad0:
    // 0x13fad0: 0x441021
    ctx->pc = 0x13fad0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_13fad4:
    // 0x13fad4: 0x8e06001c
    ctx->pc = 0x13fad4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_13fad8:
    // 0x13fad8: 0xa2182a
    ctx->pc = 0x13fad8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
label_13fadc:
    // 0x13fadc: 0xa3100b
    ctx->pc = 0x13fadcu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
label_13fae0:
    // 0x13fae0: 0x53202a
    ctx->pc = 0x13fae0u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 19)));
label_13fae4:
    // 0x13fae4: 0x264100a
    ctx->pc = 0x13fae4u;
    if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 19));
label_13fae8:
    // 0x13fae8: 0xae220004
    ctx->pc = 0x13fae8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_13faec:
    // 0x13faec: 0x8e040014
    ctx->pc = 0x13faecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_13faf0:
    // 0x13faf0: 0x8e030020
    ctx->pc = 0x13faf0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_13faf4:
    // 0x13faf4: 0x821021
    ctx->pc = 0x13faf4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_13faf8:
    // 0x13faf8: 0xc43021
    ctx->pc = 0x13faf8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_13fafc:
    // 0x13fafc: 0x43001a
    ctx->pc = 0x13fafcu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_13fb00:
    // 0x13fb00: 0xae260000
    ctx->pc = 0x13fb00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_13fb04:
    // 0x13fb04: 0x50600001
label_13fb08:
    if (ctx->pc == 0x13FB08u) {
        ctx->pc = 0x13FB08u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x13FB0Cu;
        goto label_13fb0c;
    }
    ctx->pc = 0x13FB04u;
    {
        const bool branch_taken_0x13fb04 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x13fb04) {
            ctx->pc = 0x13FB08u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x13FB0Cu;
            goto label_13fb0c;
        }
    }
    ctx->pc = 0x13FB0Cu;
label_13fb0c:
    // 0x13fb0c: 0x8e040010
    ctx->pc = 0x13fb0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_13fb10:
    // 0x13fb10: 0x8e030028
    ctx->pc = 0x13fb10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_13fb14:
    // 0x13fb14: 0x2810
    ctx->pc = 0x13fb14u;
    SET_GPR_U32(ctx, 5, ctx->hi);
label_13fb18:
    // 0x13fb18: 0xae050014
    ctx->pc = 0x13fb18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 5));
label_13fb1c:
    // 0x13fb1c: 0x8e220004
    ctx->pc = 0x13fb1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13fb20:
    // 0x13fb20: 0x822023
    ctx->pc = 0x13fb20u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_13fb24:
    // 0x13fb24: 0xae040010
    ctx->pc = 0x13fb24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_13fb28:
    // 0x13fb28: 0x8e220004
    ctx->pc = 0x13fb28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13fb2c:
    // 0x13fb2c: 0x621821
    ctx->pc = 0x13fb2cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_13fb30:
    // 0x13fb30: 0x10000029
label_13fb34:
    if (ctx->pc == 0x13FB34u) {
        ctx->pc = 0x13FB34u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
        ctx->pc = 0x13FB38u;
        goto label_13fb38;
    }
    ctx->pc = 0x13FB30u;
    {
        const bool branch_taken_0x13fb30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13FB34u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
        if (branch_taken_0x13fb30) {
            ctx->pc = 0x13FBD8u;
            goto label_13fbd8;
        }
    }
    ctx->pc = 0x13FB38u;
label_13fb38:
    // 0x13fb38: 0x56420021
label_13fb3c:
    if (ctx->pc == 0x13FB3Cu) {
        ctx->pc = 0x13FB3Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->pc = 0x13FB40u;
        goto label_13fb40;
    }
    ctx->pc = 0x13FB38u;
    {
        const bool branch_taken_0x13fb38 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x13fb38) {
            ctx->pc = 0x13FB3Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->pc = 0x13FBC0u;
            goto label_13fbc0;
        }
    }
    ctx->pc = 0x13FB40u;
label_13fb40:
    // 0x13fb40: 0x8e030018
    ctx->pc = 0x13fb40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_13fb44:
    // 0x13fb44: 0x8e020020
    ctx->pc = 0x13fb44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_13fb48:
    // 0x13fb48: 0x8e040024
    ctx->pc = 0x13fb48u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_13fb4c:
    // 0x13fb4c: 0x8e05000c
    ctx->pc = 0x13fb4cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13fb50:
    // 0x13fb50: 0x431023
    ctx->pc = 0x13fb50u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13fb54:
    // 0x13fb54: 0x441021
    ctx->pc = 0x13fb54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_13fb58:
    // 0x13fb58: 0x8e06001c
    ctx->pc = 0x13fb58u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_13fb5c:
    // 0x13fb5c: 0xa2182a
    ctx->pc = 0x13fb5cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
label_13fb60:
    // 0x13fb60: 0xa3100b
    ctx->pc = 0x13fb60u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
label_13fb64:
    // 0x13fb64: 0x53202a
    ctx->pc = 0x13fb64u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 19)));
label_13fb68:
    // 0x13fb68: 0x264100a
    ctx->pc = 0x13fb68u;
    if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 19));
label_13fb6c:
    // 0x13fb6c: 0xae220004
    ctx->pc = 0x13fb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_13fb70:
    // 0x13fb70: 0x8e040018
    ctx->pc = 0x13fb70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_13fb74:
    // 0x13fb74: 0x8e030020
    ctx->pc = 0x13fb74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_13fb78:
    // 0x13fb78: 0x821021
    ctx->pc = 0x13fb78u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_13fb7c:
    // 0x13fb7c: 0xc43021
    ctx->pc = 0x13fb7cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_13fb80:
    // 0x13fb80: 0x43001a
    ctx->pc = 0x13fb80u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_13fb84:
    // 0x13fb84: 0xae260000
    ctx->pc = 0x13fb84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_13fb88:
    // 0x13fb88: 0x50600001
label_13fb8c:
    if (ctx->pc == 0x13FB8Cu) {
        ctx->pc = 0x13FB8Cu;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x13FB90u;
        goto label_13fb90;
    }
    ctx->pc = 0x13FB88u;
    {
        const bool branch_taken_0x13fb88 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x13fb88) {
            ctx->pc = 0x13FB8Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x13FB90u;
            goto label_13fb90;
        }
    }
    ctx->pc = 0x13FB90u;
label_13fb90:
    // 0x13fb90: 0x8e04000c
    ctx->pc = 0x13fb90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13fb94:
    // 0x13fb94: 0x8e030030
    ctx->pc = 0x13fb94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_13fb98:
    // 0x13fb98: 0x2810
    ctx->pc = 0x13fb98u;
    SET_GPR_U32(ctx, 5, ctx->hi);
label_13fb9c:
    // 0x13fb9c: 0xae050018
    ctx->pc = 0x13fb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 5));
label_13fba0:
    // 0x13fba0: 0x8e220004
    ctx->pc = 0x13fba0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13fba4:
    // 0x13fba4: 0x822023
    ctx->pc = 0x13fba4u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_13fba8:
    // 0x13fba8: 0xae04000c
    ctx->pc = 0x13fba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
label_13fbac:
    // 0x13fbac: 0x8e220004
    ctx->pc = 0x13fbacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13fbb0:
    // 0x13fbb0: 0x621821
    ctx->pc = 0x13fbb0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_13fbb4:
    // 0x13fbb4: 0x10000008
label_13fbb8:
    if (ctx->pc == 0x13FBB8u) {
        ctx->pc = 0x13FBB8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->pc = 0x13FBBCu;
        goto label_13fbbc;
    }
    ctx->pc = 0x13FBB4u;
    {
        const bool branch_taken_0x13fbb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13FBB8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        if (branch_taken_0x13fbb4) {
            ctx->pc = 0x13FBD8u;
            goto label_13fbd8;
        }
    }
    ctx->pc = 0x13FBBCu;
label_13fbbc:
    // 0x13fbbc: 0x0
    ctx->pc = 0x13fbbcu;
    // NOP
label_13fbc0:
    // 0x13fbc0: 0xae200000
    ctx->pc = 0x13fbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_13fbc4:
    // 0x13fbc4: 0x10400004
label_13fbc8:
    if (ctx->pc == 0x13FBC8u) {
        ctx->pc = 0x13FBC8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x13FBCCu;
        goto label_13fbcc;
    }
    ctx->pc = 0x13FBC4u;
    {
        const bool branch_taken_0x13fbc4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13FBC8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x13fbc4) {
            ctx->pc = 0x13FBD8u;
            goto label_13fbd8;
        }
    }
    ctx->pc = 0x13FBCCu;
label_13fbcc:
    // 0x13fbcc: 0x8e04003c
    ctx->pc = 0x13fbccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_13fbd0:
    // 0x13fbd0: 0x40f809
label_13fbd4:
    if (ctx->pc == 0x13FBD4u) {
        ctx->pc = 0x13FBD4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x13FBD8u;
        goto label_13fbd8;
    }
    ctx->pc = 0x13FBD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13FBD8u);
        ctx->pc = 0x13FBD4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F9F0u: goto label_13f9f0;
            case 0x13F9F4u: goto label_13f9f4;
            case 0x13F9F8u: goto label_13f9f8;
            case 0x13F9FCu: goto label_13f9fc;
            case 0x13FA00u: goto label_13fa00;
            case 0x13FA04u: goto label_13fa04;
            case 0x13FA08u: goto label_13fa08;
            case 0x13FA0Cu: goto label_13fa0c;
            case 0x13FA10u: goto label_13fa10;
            case 0x13FA14u: goto label_13fa14;
            case 0x13FA18u: goto label_13fa18;
            case 0x13FA1Cu: goto label_13fa1c;
            case 0x13FA20u: goto label_13fa20;
            case 0x13FA24u: goto label_13fa24;
            case 0x13FA28u: goto label_13fa28;
            case 0x13FA2Cu: goto label_13fa2c;
            case 0x13FA30u: goto label_13fa30;
            case 0x13FA34u: goto label_13fa34;
            case 0x13FA38u: goto label_13fa38;
            case 0x13FA3Cu: goto label_13fa3c;
            case 0x13FA40u: goto label_13fa40;
            case 0x13FA44u: goto label_13fa44;
            case 0x13FA48u: goto label_13fa48;
            case 0x13FA4Cu: goto label_13fa4c;
            case 0x13FA50u: goto label_13fa50;
            case 0x13FA54u: goto label_13fa54;
            case 0x13FA58u: goto label_13fa58;
            case 0x13FA5Cu: goto label_13fa5c;
            case 0x13FA60u: goto label_13fa60;
            case 0x13FA64u: goto label_13fa64;
            case 0x13FA68u: goto label_13fa68;
            case 0x13FA6Cu: goto label_13fa6c;
            case 0x13FA70u: goto label_13fa70;
            case 0x13FA74u: goto label_13fa74;
            case 0x13FA78u: goto label_13fa78;
            case 0x13FA7Cu: goto label_13fa7c;
            case 0x13FA80u: goto label_13fa80;
            case 0x13FA84u: goto label_13fa84;
            case 0x13FA88u: goto label_13fa88;
            case 0x13FA8Cu: goto label_13fa8c;
            case 0x13FA90u: goto label_13fa90;
            case 0x13FA94u: goto label_13fa94;
            case 0x13FA98u: goto label_13fa98;
            case 0x13FA9Cu: goto label_13fa9c;
            case 0x13FAA0u: goto label_13faa0;
            case 0x13FAA4u: goto label_13faa4;
            case 0x13FAA8u: goto label_13faa8;
            case 0x13FAACu: goto label_13faac;
            case 0x13FAB0u: goto label_13fab0;
            case 0x13FAB4u: goto label_13fab4;
            case 0x13FAB8u: goto label_13fab8;
            case 0x13FABCu: goto label_13fabc;
            case 0x13FAC0u: goto label_13fac0;
            case 0x13FAC4u: goto label_13fac4;
            case 0x13FAC8u: goto label_13fac8;
            case 0x13FACCu: goto label_13facc;
            case 0x13FAD0u: goto label_13fad0;
            case 0x13FAD4u: goto label_13fad4;
            case 0x13FAD8u: goto label_13fad8;
            case 0x13FADCu: goto label_13fadc;
            case 0x13FAE0u: goto label_13fae0;
            case 0x13FAE4u: goto label_13fae4;
            case 0x13FAE8u: goto label_13fae8;
            case 0x13FAECu: goto label_13faec;
            case 0x13FAF0u: goto label_13faf0;
            case 0x13FAF4u: goto label_13faf4;
            case 0x13FAF8u: goto label_13faf8;
            case 0x13FAFCu: goto label_13fafc;
            case 0x13FB00u: goto label_13fb00;
            case 0x13FB04u: goto label_13fb04;
            case 0x13FB08u: goto label_13fb08;
            case 0x13FB0Cu: goto label_13fb0c;
            case 0x13FB10u: goto label_13fb10;
            case 0x13FB14u: goto label_13fb14;
            case 0x13FB18u: goto label_13fb18;
            case 0x13FB1Cu: goto label_13fb1c;
            case 0x13FB20u: goto label_13fb20;
            case 0x13FB24u: goto label_13fb24;
            case 0x13FB28u: goto label_13fb28;
            case 0x13FB2Cu: goto label_13fb2c;
            case 0x13FB30u: goto label_13fb30;
            case 0x13FB34u: goto label_13fb34;
            case 0x13FB38u: goto label_13fb38;
            case 0x13FB3Cu: goto label_13fb3c;
            case 0x13FB40u: goto label_13fb40;
            case 0x13FB44u: goto label_13fb44;
            case 0x13FB48u: goto label_13fb48;
            case 0x13FB4Cu: goto label_13fb4c;
            case 0x13FB50u: goto label_13fb50;
            case 0x13FB54u: goto label_13fb54;
            case 0x13FB58u: goto label_13fb58;
            case 0x13FB5Cu: goto label_13fb5c;
            case 0x13FB60u: goto label_13fb60;
            case 0x13FB64u: goto label_13fb64;
            case 0x13FB68u: goto label_13fb68;
            case 0x13FB6Cu: goto label_13fb6c;
            case 0x13FB70u: goto label_13fb70;
            case 0x13FB74u: goto label_13fb74;
            case 0x13FB78u: goto label_13fb78;
            case 0x13FB7Cu: goto label_13fb7c;
            case 0x13FB80u: goto label_13fb80;
            case 0x13FB84u: goto label_13fb84;
            case 0x13FB88u: goto label_13fb88;
            case 0x13FB8Cu: goto label_13fb8c;
            case 0x13FB90u: goto label_13fb90;
            case 0x13FB94u: goto label_13fb94;
            case 0x13FB98u: goto label_13fb98;
            case 0x13FB9Cu: goto label_13fb9c;
            case 0x13FBA0u: goto label_13fba0;
            case 0x13FBA4u: goto label_13fba4;
            case 0x13FBA8u: goto label_13fba8;
            case 0x13FBACu: goto label_13fbac;
            case 0x13FBB0u: goto label_13fbb0;
            case 0x13FBB4u: goto label_13fbb4;
            case 0x13FBB8u: goto label_13fbb8;
            case 0x13FBBCu: goto label_13fbbc;
            case 0x13FBC0u: goto label_13fbc0;
            case 0x13FBC4u: goto label_13fbc4;
            case 0x13FBC8u: goto label_13fbc8;
            case 0x13FBCCu: goto label_13fbcc;
            case 0x13FBD0u: goto label_13fbd0;
            case 0x13FBD4u: goto label_13fbd4;
            case 0x13FBD8u: goto label_13fbd8;
            case 0x13FBDCu: goto label_13fbdc;
            case 0x13FBE0u: goto label_13fbe0;
            case 0x13FBE4u: goto label_13fbe4;
            case 0x13FBE8u: goto label_13fbe8;
            case 0x13FBECu: goto label_13fbec;
            case 0x13FBF0u: goto label_13fbf0;
            case 0x13FBF4u: goto label_13fbf4;
            case 0x13FBF8u: goto label_13fbf8;
            case 0x13FBFCu: goto label_13fbfc;
            case 0x13FC00u: goto label_13fc00;
            case 0x13FC04u: goto label_13fc04;
            case 0x13FC08u: goto label_13fc08;
            case 0x13FC0Cu: goto label_13fc0c;
            case 0x13FC10u: goto label_13fc10;
            case 0x13FC14u: goto label_13fc14;
            case 0x13FC18u: goto label_13fc18;
            case 0x13FC1Cu: goto label_13fc1c;
            case 0x13FC20u: goto label_13fc20;
            case 0x13FC24u: goto label_13fc24;
            case 0x13FC28u: goto label_13fc28;
            case 0x13FC2Cu: goto label_13fc2c;
            case 0x13FC30u: goto label_13fc30;
            case 0x13FC34u: goto label_13fc34;
            case 0x13FC38u: goto label_13fc38;
            case 0x13FC3Cu: goto label_13fc3c;
            case 0x13FC40u: goto label_13fc40;
            case 0x13FC44u: goto label_13fc44;
            case 0x13FC48u: goto label_13fc48;
            case 0x13FC4Cu: goto label_13fc4c;
            case 0x13FC50u: goto label_13fc50;
            case 0x13FC54u: goto label_13fc54;
            case 0x13FC58u: goto label_13fc58;
            case 0x13FC5Cu: goto label_13fc5c;
            case 0x13FC60u: goto label_13fc60;
            case 0x13FC64u: goto label_13fc64;
            case 0x13FC68u: goto label_13fc68;
            case 0x13FC6Cu: goto label_13fc6c;
            case 0x13FC70u: goto label_13fc70;
            case 0x13FC74u: goto label_13fc74;
            case 0x13FC78u: goto label_13fc78;
            case 0x13FC7Cu: goto label_13fc7c;
            case 0x13FC80u: goto label_13fc80;
            case 0x13FC84u: goto label_13fc84;
            case 0x13FC88u: goto label_13fc88;
            case 0x13FC8Cu: goto label_13fc8c;
            case 0x13FC90u: goto label_13fc90;
            case 0x13FC94u: goto label_13fc94;
            case 0x13FC98u: goto label_13fc98;
            case 0x13FC9Cu: goto label_13fc9c;
            case 0x13FCA0u: goto label_13fca0;
            case 0x13FCA4u: goto label_13fca4;
            case 0x13FCA8u: goto label_13fca8;
            case 0x13FCACu: goto label_13fcac;
            case 0x13FCB0u: goto label_13fcb0;
            case 0x13FCB4u: goto label_13fcb4;
            case 0x13FCB8u: goto label_13fcb8;
            case 0x13FCBCu: goto label_13fcbc;
            case 0x13FCC0u: goto label_13fcc0;
            case 0x13FCC4u: goto label_13fcc4;
            case 0x13FCC8u: goto label_13fcc8;
            case 0x13FCCCu: goto label_13fccc;
            case 0x13FCD0u: goto label_13fcd0;
            case 0x13FCD4u: goto label_13fcd4;
            case 0x13FCD8u: goto label_13fcd8;
            case 0x13FCDCu: goto label_13fcdc;
            case 0x13FCE0u: goto label_13fce0;
            case 0x13FCE4u: goto label_13fce4;
            case 0x13FCE8u: goto label_13fce8;
            case 0x13FCECu: goto label_13fcec;
            case 0x13FCF0u: goto label_13fcf0;
            case 0x13FCF4u: goto label_13fcf4;
            case 0x13FCF8u: goto label_13fcf8;
            case 0x13FCFCu: goto label_13fcfc;
            case 0x13FD00u: goto label_13fd00;
            case 0x13FD04u: goto label_13fd04;
            case 0x13FD08u: goto label_13fd08;
            case 0x13FD0Cu: goto label_13fd0c;
            case 0x13FD10u: goto label_13fd10;
            case 0x13FD14u: goto label_13fd14;
            case 0x13FD18u: goto label_13fd18;
            case 0x13FD1Cu: goto label_13fd1c;
            case 0x13FD20u: goto label_13fd20;
            case 0x13FD24u: goto label_13fd24;
            case 0x13FD28u: goto label_13fd28;
            case 0x13FD2Cu: goto label_13fd2c;
            case 0x13FD30u: goto label_13fd30;
            case 0x13FD34u: goto label_13fd34;
            case 0x13FD38u: goto label_13fd38;
            case 0x13FD3Cu: goto label_13fd3c;
            case 0x13FD40u: goto label_13fd40;
            case 0x13FD44u: goto label_13fd44;
            case 0x13FD48u: goto label_13fd48;
            case 0x13FD4Cu: goto label_13fd4c;
            case 0x13FD50u: goto label_13fd50;
            case 0x13FD54u: goto label_13fd54;
            case 0x13FD58u: goto label_13fd58;
            case 0x13FD5Cu: goto label_13fd5c;
            case 0x13FD60u: goto label_13fd60;
            case 0x13FD64u: goto label_13fd64;
            case 0x13FD68u: goto label_13fd68;
            case 0x13FD6Cu: goto label_13fd6c;
            case 0x13FD70u: goto label_13fd70;
            case 0x13FD74u: goto label_13fd74;
            case 0x13FD78u: goto label_13fd78;
            case 0x13FD7Cu: goto label_13fd7c;
            case 0x13FD80u: goto label_13fd80;
            case 0x13FD84u: goto label_13fd84;
            case 0x13FD88u: goto label_13fd88;
            case 0x13FD8Cu: goto label_13fd8c;
            case 0x13FD90u: goto label_13fd90;
            case 0x13FD94u: goto label_13fd94;
            case 0x13FD98u: goto label_13fd98;
            case 0x13FD9Cu: goto label_13fd9c;
            case 0x13FDA0u: goto label_13fda0;
            case 0x13FDA4u: goto label_13fda4;
            case 0x13FDA8u: goto label_13fda8;
            case 0x13FDACu: goto label_13fdac;
            case 0x13FDB0u: goto label_13fdb0;
            case 0x13FDB4u: goto label_13fdb4;
            case 0x13FDB8u: goto label_13fdb8;
            case 0x13FDBCu: goto label_13fdbc;
            case 0x13FDC0u: goto label_13fdc0;
            case 0x13FDC4u: goto label_13fdc4;
            case 0x13FDC8u: goto label_13fdc8;
            case 0x13FDCCu: goto label_13fdcc;
            case 0x13FDD0u: goto label_13fdd0;
            case 0x13FDD4u: goto label_13fdd4;
            case 0x13FDD8u: goto label_13fdd8;
            case 0x13FDDCu: goto label_13fddc;
            case 0x13FDE0u: goto label_13fde0;
            case 0x13FDE4u: goto label_13fde4;
            case 0x13FDE8u: goto label_13fde8;
            case 0x13FDECu: goto label_13fdec;
            case 0x13FDF0u: goto label_13fdf0;
            case 0x13FDF4u: goto label_13fdf4;
            case 0x13FDF8u: goto label_13fdf8;
            case 0x13FDFCu: goto label_13fdfc;
            case 0x13FE00u: goto label_13fe00;
            case 0x13FE04u: goto label_13fe04;
            case 0x13FE08u: goto label_13fe08;
            case 0x13FE0Cu: goto label_13fe0c;
            case 0x13FE10u: goto label_13fe10;
            case 0x13FE14u: goto label_13fe14;
            case 0x13FE18u: goto label_13fe18;
            case 0x13FE1Cu: goto label_13fe1c;
            case 0x13FE20u: goto label_13fe20;
            case 0x13FE24u: goto label_13fe24;
            case 0x13FE28u: goto label_13fe28;
            case 0x13FE2Cu: goto label_13fe2c;
            case 0x13FE30u: goto label_13fe30;
            case 0x13FE34u: goto label_13fe34;
            case 0x13FE38u: goto label_13fe38;
            case 0x13FE3Cu: goto label_13fe3c;
            case 0x13FE40u: goto label_13fe40;
            case 0x13FE44u: goto label_13fe44;
            case 0x13FE48u: goto label_13fe48;
            case 0x13FE4Cu: goto label_13fe4c;
            case 0x13FE50u: goto label_13fe50;
            case 0x13FE54u: goto label_13fe54;
            case 0x13FE58u: goto label_13fe58;
            case 0x13FE5Cu: goto label_13fe5c;
            case 0x13FE60u: goto label_13fe60;
            case 0x13FE64u: goto label_13fe64;
            case 0x13FE68u: goto label_13fe68;
            case 0x13FE6Cu: goto label_13fe6c;
            case 0x13FE70u: goto label_13fe70;
            case 0x13FE74u: goto label_13fe74;
            case 0x13FE78u: goto label_13fe78;
            case 0x13FE7Cu: goto label_13fe7c;
            case 0x13FE80u: goto label_13fe80;
            case 0x13FE84u: goto label_13fe84;
            case 0x13FE88u: goto label_13fe88;
            case 0x13FE8Cu: goto label_13fe8c;
            case 0x13FE90u: goto label_13fe90;
            case 0x13FE94u: goto label_13fe94;
            case 0x13FE98u: goto label_13fe98;
            case 0x13FE9Cu: goto label_13fe9c;
            case 0x13FEA0u: goto label_13fea0;
            case 0x13FEA4u: goto label_13fea4;
            case 0x13FEA8u: goto label_13fea8;
            case 0x13FEACu: goto label_13feac;
            case 0x13FEB0u: goto label_13feb0;
            case 0x13FEB4u: goto label_13feb4;
            case 0x13FEB8u: goto label_13feb8;
            case 0x13FEBCu: goto label_13febc;
            case 0x13FEC0u: goto label_13fec0;
            case 0x13FEC4u: goto label_13fec4;
            case 0x13FEC8u: goto label_13fec8;
            case 0x13FECCu: goto label_13fecc;
            case 0x13FED0u: goto label_13fed0;
            case 0x13FED4u: goto label_13fed4;
            case 0x13FED8u: goto label_13fed8;
            case 0x13FEDCu: goto label_13fedc;
            case 0x13FEE0u: goto label_13fee0;
            case 0x13FEE4u: goto label_13fee4;
            case 0x13FEE8u: goto label_13fee8;
            case 0x13FEECu: goto label_13feec;
            case 0x13FEF0u: goto label_13fef0;
            case 0x13FEF4u: goto label_13fef4;
            case 0x13FEF8u: goto label_13fef8;
            case 0x13FEFCu: goto label_13fefc;
            case 0x13FF00u: goto label_13ff00;
            case 0x13FF04u: goto label_13ff04;
            case 0x13FF08u: goto label_13ff08;
            case 0x13FF0Cu: goto label_13ff0c;
            case 0x13FF10u: goto label_13ff10;
            case 0x13FF14u: goto label_13ff14;
            case 0x13FF18u: goto label_13ff18;
            case 0x13FF1Cu: goto label_13ff1c;
            case 0x13FF20u: goto label_13ff20;
            case 0x13FF24u: goto label_13ff24;
            case 0x13FF28u: goto label_13ff28;
            case 0x13FF2Cu: goto label_13ff2c;
            case 0x13FF30u: goto label_13ff30;
            case 0x13FF34u: goto label_13ff34;
            case 0x13FF38u: goto label_13ff38;
            case 0x13FF3Cu: goto label_13ff3c;
            case 0x13FF40u: goto label_13ff40;
            case 0x13FF44u: goto label_13ff44;
            case 0x13FF48u: goto label_13ff48;
            case 0x13FF4Cu: goto label_13ff4c;
            case 0x13FF50u: goto label_13ff50;
            case 0x13FF54u: goto label_13ff54;
            case 0x13FF58u: goto label_13ff58;
            case 0x13FF5Cu: goto label_13ff5c;
            case 0x13FF60u: goto label_13ff60;
            case 0x13FF64u: goto label_13ff64;
            case 0x13FF68u: goto label_13ff68;
            case 0x13FF6Cu: goto label_13ff6c;
            case 0x13FF70u: goto label_13ff70;
            case 0x13FF74u: goto label_13ff74;
            case 0x13FF78u: goto label_13ff78;
            case 0x13FF7Cu: goto label_13ff7c;
            case 0x13FF80u: goto label_13ff80;
            case 0x13FF84u: goto label_13ff84;
            case 0x13FF88u: goto label_13ff88;
            case 0x13FF8Cu: goto label_13ff8c;
            case 0x13FF90u: goto label_13ff90;
            case 0x13FF94u: goto label_13ff94;
            case 0x13FF98u: goto label_13ff98;
            case 0x13FF9Cu: goto label_13ff9c;
            case 0x13FFA0u: goto label_13ffa0;
            case 0x13FFA4u: goto label_13ffa4;
            case 0x13FFA8u: goto label_13ffa8;
            case 0x13FFACu: goto label_13ffac;
            case 0x13FFB0u: goto label_13ffb0;
            case 0x13FFB4u: goto label_13ffb4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13FBD8u; }
            if (ctx->pc != 0x13FBD8u) { return; }
        }
    }
    ctx->pc = 0x13FBD8u;
label_13fbd8:
    // 0x13fbd8: 0xdfb00000
    ctx->pc = 0x13fbd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13fbdc:
    // 0x13fbdc: 0xdfb10008
    ctx->pc = 0x13fbdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13fbe0:
    // 0x13fbe0: 0xdfb20010
    ctx->pc = 0x13fbe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13fbe4:
    // 0x13fbe4: 0xdfb30018
    ctx->pc = 0x13fbe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13fbe8:
    // 0x13fbe8: 0xdfbf0020
    ctx->pc = 0x13fbe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13fbec:
    // 0x13fbec: 0x804fc9c
label_13fbf0:
    if (ctx->pc == 0x13FBF0u) {
        ctx->pc = 0x13FBF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x13FBF4u;
        goto label_13fbf4;
    }
    ctx->pc = 0x13FBECu;
    ctx->pc = 0x13FBF0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x13F270u;
    sub_0013F270_0x13f270(rdram, ctx, runtime); return;
    ctx->pc = 0x13FBF4u;
label_13fbf4:
    // 0x13fbf4: 0x0
    ctx->pc = 0x13fbf4u;
    // NOP
label_13fbf8:
    // 0x13fbf8: 0x27bdffe0
    ctx->pc = 0x13fbf8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_13fbfc:
    // 0x13fbfc: 0xffb00000
    ctx->pc = 0x13fbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13fc00:
    // 0x13fc00: 0x80802d
    ctx->pc = 0x13fc00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13fc04:
    // 0x13fc04: 0xffb10008
    ctx->pc = 0x13fc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13fc08:
    // 0x13fc08: 0xc0882d
    ctx->pc = 0x13fc08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13fc0c:
    // 0x13fc0c: 0xffb20010
    ctx->pc = 0x13fc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_13fc10:
    // 0x13fc10: 0xffbf0018
    ctx->pc = 0x13fc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_13fc14:
    // 0x13fc14: 0x8e220004
    ctx->pc = 0x13fc14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13fc18:
    // 0x13fc18: 0x18400049
label_13fc1c:
    if (ctx->pc == 0x13FC1Cu) {
        ctx->pc = 0x13FC1Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13FC20u;
        goto label_13fc20;
    }
    ctx->pc = 0x13FC18u;
    {
        const bool branch_taken_0x13fc18 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13FC1Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13fc18) {
            ctx->pc = 0x13FD40u;
            goto label_13fd40;
        }
    }
    ctx->pc = 0x13FC20u;
label_13fc20:
    // 0x13fc20: 0x8e220000
    ctx->pc = 0x13fc20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13fc24:
    // 0x13fc24: 0x50400047
label_13fc28:
    if (ctx->pc == 0x13FC28u) {
        ctx->pc = 0x13FC28u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x13FC2Cu;
        goto label_13fc2c;
    }
    ctx->pc = 0x13FC24u;
    {
        const bool branch_taken_0x13fc24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x13fc24) {
            ctx->pc = 0x13FC28u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x13FD44u;
            goto label_13fd44;
        }
    }
    ctx->pc = 0x13FC2Cu;
label_13fc2c:
    // 0x13fc2c: 0xc04fc96
label_13fc30:
    if (ctx->pc == 0x13FC30u) {
        ctx->pc = 0x13FC34u;
        goto label_13fc34;
    }
    ctx->pc = 0x13FC2Cu;
    SET_GPR_U32(ctx, 31, 0x13FC34u);
    ctx->pc = 0x13F258u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F258_0x13f258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FC34u; }
    }
    if (ctx->pc != 0x13FC34u) { return; }
    ctx->pc = 0x13FC34u;
label_13fc34:
    // 0x13fc34: 0x24020001
    ctx->pc = 0x13fc34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_13fc38:
    // 0x13fc38: 0x16420029
label_13fc3c:
    if (ctx->pc == 0x13FC3Cu) {
        ctx->pc = 0x13FC40u;
        goto label_13fc40;
    }
    ctx->pc = 0x13FC38u;
    {
        const bool branch_taken_0x13fc38 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x13fc38) {
            ctx->pc = 0x13FCE0u;
            goto label_13fce0;
        }
    }
    ctx->pc = 0x13FC40u;
label_13fc40:
    // 0x13fc40: 0x8e250000
    ctx->pc = 0x13fc40u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13fc44:
    // 0x13fc44: 0x8e09001c
    ctx->pc = 0x13fc44u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_13fc48:
    // 0x13fc48: 0x8e02000c
    ctx->pc = 0x13fc48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13fc4c:
    // 0x13fc4c: 0x8e240004
    ctx->pc = 0x13fc4cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13fc50:
    // 0x13fc50: 0xa93823
    ctx->pc = 0x13fc50u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_13fc54:
    // 0x13fc54: 0x8e060024
    ctx->pc = 0x13fc54u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_13fc58:
    // 0x13fc58: 0x441021
    ctx->pc = 0x13fc58u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_13fc5c:
    // 0x13fc5c: 0xe6182a
    ctx->pc = 0x13fc5cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 6)));
label_13fc60:
    // 0x13fc60: 0x1060000b
label_13fc64:
    if (ctx->pc == 0x13FC64u) {
        ctx->pc = 0x13FC64u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x13FC68u;
        goto label_13fc68;
    }
    ctx->pc = 0x13FC60u;
    {
        const bool branch_taken_0x13fc60 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x13FC64u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x13fc60) {
            ctx->pc = 0x13FC90u;
            goto label_13fc90;
        }
    }
    ctx->pc = 0x13FC68u;
label_13fc68:
    // 0x13fc68: 0x8e230004
    ctx->pc = 0x13fc68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13fc6c:
    // 0x13fc6c: 0xc73023
    ctx->pc = 0x13fc6cu;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_13fc70:
    // 0x13fc70: 0x8e040020
    ctx->pc = 0x13fc70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_13fc74:
    // 0x13fc74: 0x66102a
    ctx->pc = 0x13fc74u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 6)));
label_13fc78:
    // 0x13fc78: 0x872021
    ctx->pc = 0x13fc78u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_13fc7c:
    // 0x13fc7c: 0x62300b
    ctx->pc = 0x13fc7cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
label_13fc80:
    // 0x13fc80: 0xc041eac
label_13fc84:
    if (ctx->pc == 0x13FC84u) {
        ctx->pc = 0x13FC84u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->pc = 0x13FC88u;
        goto label_13fc88;
    }
    ctx->pc = 0x13FC80u;
    SET_GPR_U32(ctx, 31, 0x13FC88u);
    ctx->pc = 0x13FC84u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FC88u; }
    }
    if (ctx->pc != 0x13FC88u) { return; }
    ctx->pc = 0x13FC88u;
label_13fc88:
    // 0x13fc88: 0x8e250000
    ctx->pc = 0x13fc88u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13fc8c:
    // 0x13fc8c: 0x8e09001c
    ctx->pc = 0x13fc8cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_13fc90:
    // 0x13fc90: 0x8e280004
    ctx->pc = 0x13fc90u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13fc94:
    // 0x13fc94: 0xa91823
    ctx->pc = 0x13fc94u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_13fc98:
    // 0x13fc98: 0x8e040020
    ctx->pc = 0x13fc98u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_13fc9c:
    // 0x13fc9c: 0x683821
    ctx->pc = 0x13fc9cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_13fca0:
    // 0x13fca0: 0x87102a
    ctx->pc = 0x13fca0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 7)));
label_13fca4:
    // 0x13fca4: 0x5040000a
label_13fca8:
    if (ctx->pc == 0x13FCA8u) {
        ctx->pc = 0x13FCA8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->pc = 0x13FCACu;
        goto label_13fcac;
    }
    ctx->pc = 0x13FCA4u;
    {
        const bool branch_taken_0x13fca4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x13fca4) {
            ctx->pc = 0x13FCA8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->pc = 0x13FCD0u;
            goto label_13fcd0;
        }
    }
    ctx->pc = 0x13FCACu;
label_13fcac:
    // 0x13fcac: 0xe43023
    ctx->pc = 0x13fcacu;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_13fcb0:
    // 0x13fcb0: 0x120202d
    ctx->pc = 0x13fcb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_13fcb4:
    // 0x13fcb4: 0x106102a
    ctx->pc = 0x13fcb4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 6)));
label_13fcb8:
    // 0x13fcb8: 0x102300b
    ctx->pc = 0x13fcb8u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 8));
label_13fcbc:
    // 0x13fcbc: 0xe62823
    ctx->pc = 0x13fcbcu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_13fcc0:
    // 0x13fcc0: 0xc041eac
label_13fcc4:
    if (ctx->pc == 0x13FCC4u) {
        ctx->pc = 0x13FCC4u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->pc = 0x13FCC8u;
        goto label_13fcc8;
    }
    ctx->pc = 0x13FCC0u;
    SET_GPR_U32(ctx, 31, 0x13FCC8u);
    ctx->pc = 0x13FCC4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FCC8u; }
    }
    if (ctx->pc != 0x13FCC8u) { return; }
    ctx->pc = 0x13FCC8u;
label_13fcc8:
    // 0x13fcc8: 0x8e280004
    ctx->pc = 0x13fcc8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13fccc:
    // 0x13fccc: 0x8e020034
    ctx->pc = 0x13fcccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_13fcd0:
    // 0x13fcd0: 0x481021
    ctx->pc = 0x13fcd0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_13fcd4:
    // 0x13fcd4: 0x10000014
label_13fcd8:
    if (ctx->pc == 0x13FCD8u) {
        ctx->pc = 0x13FCD8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->pc = 0x13FCDCu;
        goto label_13fcdc;
    }
    ctx->pc = 0x13FCD4u;
    {
        const bool branch_taken_0x13fcd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13FCD8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        if (branch_taken_0x13fcd4) {
            ctx->pc = 0x13FD28u;
            goto label_13fd28;
        }
    }
    ctx->pc = 0x13FCDCu;
label_13fcdc:
    // 0x13fcdc: 0x0
    ctx->pc = 0x13fcdcu;
    // NOP
label_13fce0:
    // 0x13fce0: 0x5640000b
label_13fce4:
    if (ctx->pc == 0x13FCE4u) {
        ctx->pc = 0x13FCE4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->pc = 0x13FCE8u;
        goto label_13fce8;
    }
    ctx->pc = 0x13FCE0u;
    {
        const bool branch_taken_0x13fce0 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x13fce0) {
            ctx->pc = 0x13FCE4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->pc = 0x13FD10u;
            goto label_13fd10;
        }
    }
    ctx->pc = 0x13FCE8u;
label_13fce8:
    // 0x13fce8: 0x8e230004
    ctx->pc = 0x13fce8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13fcec:
    // 0x13fcec: 0x8e020010
    ctx->pc = 0x13fcecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_13fcf0:
    // 0x13fcf0: 0x8e04002c
    ctx->pc = 0x13fcf0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_13fcf4:
    // 0x13fcf4: 0x431021
    ctx->pc = 0x13fcf4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13fcf8:
    // 0x13fcf8: 0xae020010
    ctx->pc = 0x13fcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_13fcfc:
    // 0x13fcfc: 0x8e230004
    ctx->pc = 0x13fcfcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13fd00:
    // 0x13fd00: 0x832021
    ctx->pc = 0x13fd00u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_13fd04:
    // 0x13fd04: 0x10000008
label_13fd08:
    if (ctx->pc == 0x13FD08u) {
        ctx->pc = 0x13FD08u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
        ctx->pc = 0x13FD0Cu;
        goto label_13fd0c;
    }
    ctx->pc = 0x13FD04u;
    {
        const bool branch_taken_0x13fd04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13FD08u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
        if (branch_taken_0x13fd04) {
            ctx->pc = 0x13FD28u;
            goto label_13fd28;
        }
    }
    ctx->pc = 0x13FD0Cu;
label_13fd0c:
    // 0x13fd0c: 0x0
    ctx->pc = 0x13fd0cu;
    // NOP
label_13fd10:
    // 0x13fd10: 0xae200000
    ctx->pc = 0x13fd10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_13fd14:
    // 0x13fd14: 0x10400004
label_13fd18:
    if (ctx->pc == 0x13FD18u) {
        ctx->pc = 0x13FD18u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x13FD1Cu;
        goto label_13fd1c;
    }
    ctx->pc = 0x13FD14u;
    {
        const bool branch_taken_0x13fd14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13FD18u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x13fd14) {
            ctx->pc = 0x13FD28u;
            goto label_13fd28;
        }
    }
    ctx->pc = 0x13FD1Cu;
label_13fd1c:
    // 0x13fd1c: 0x8e04003c
    ctx->pc = 0x13fd1cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_13fd20:
    // 0x13fd20: 0x40f809
label_13fd24:
    if (ctx->pc == 0x13FD24u) {
        ctx->pc = 0x13FD24u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x13FD28u;
        goto label_13fd28;
    }
    ctx->pc = 0x13FD20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13FD28u);
        ctx->pc = 0x13FD24u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F9F0u: goto label_13f9f0;
            case 0x13F9F4u: goto label_13f9f4;
            case 0x13F9F8u: goto label_13f9f8;
            case 0x13F9FCu: goto label_13f9fc;
            case 0x13FA00u: goto label_13fa00;
            case 0x13FA04u: goto label_13fa04;
            case 0x13FA08u: goto label_13fa08;
            case 0x13FA0Cu: goto label_13fa0c;
            case 0x13FA10u: goto label_13fa10;
            case 0x13FA14u: goto label_13fa14;
            case 0x13FA18u: goto label_13fa18;
            case 0x13FA1Cu: goto label_13fa1c;
            case 0x13FA20u: goto label_13fa20;
            case 0x13FA24u: goto label_13fa24;
            case 0x13FA28u: goto label_13fa28;
            case 0x13FA2Cu: goto label_13fa2c;
            case 0x13FA30u: goto label_13fa30;
            case 0x13FA34u: goto label_13fa34;
            case 0x13FA38u: goto label_13fa38;
            case 0x13FA3Cu: goto label_13fa3c;
            case 0x13FA40u: goto label_13fa40;
            case 0x13FA44u: goto label_13fa44;
            case 0x13FA48u: goto label_13fa48;
            case 0x13FA4Cu: goto label_13fa4c;
            case 0x13FA50u: goto label_13fa50;
            case 0x13FA54u: goto label_13fa54;
            case 0x13FA58u: goto label_13fa58;
            case 0x13FA5Cu: goto label_13fa5c;
            case 0x13FA60u: goto label_13fa60;
            case 0x13FA64u: goto label_13fa64;
            case 0x13FA68u: goto label_13fa68;
            case 0x13FA6Cu: goto label_13fa6c;
            case 0x13FA70u: goto label_13fa70;
            case 0x13FA74u: goto label_13fa74;
            case 0x13FA78u: goto label_13fa78;
            case 0x13FA7Cu: goto label_13fa7c;
            case 0x13FA80u: goto label_13fa80;
            case 0x13FA84u: goto label_13fa84;
            case 0x13FA88u: goto label_13fa88;
            case 0x13FA8Cu: goto label_13fa8c;
            case 0x13FA90u: goto label_13fa90;
            case 0x13FA94u: goto label_13fa94;
            case 0x13FA98u: goto label_13fa98;
            case 0x13FA9Cu: goto label_13fa9c;
            case 0x13FAA0u: goto label_13faa0;
            case 0x13FAA4u: goto label_13faa4;
            case 0x13FAA8u: goto label_13faa8;
            case 0x13FAACu: goto label_13faac;
            case 0x13FAB0u: goto label_13fab0;
            case 0x13FAB4u: goto label_13fab4;
            case 0x13FAB8u: goto label_13fab8;
            case 0x13FABCu: goto label_13fabc;
            case 0x13FAC0u: goto label_13fac0;
            case 0x13FAC4u: goto label_13fac4;
            case 0x13FAC8u: goto label_13fac8;
            case 0x13FACCu: goto label_13facc;
            case 0x13FAD0u: goto label_13fad0;
            case 0x13FAD4u: goto label_13fad4;
            case 0x13FAD8u: goto label_13fad8;
            case 0x13FADCu: goto label_13fadc;
            case 0x13FAE0u: goto label_13fae0;
            case 0x13FAE4u: goto label_13fae4;
            case 0x13FAE8u: goto label_13fae8;
            case 0x13FAECu: goto label_13faec;
            case 0x13FAF0u: goto label_13faf0;
            case 0x13FAF4u: goto label_13faf4;
            case 0x13FAF8u: goto label_13faf8;
            case 0x13FAFCu: goto label_13fafc;
            case 0x13FB00u: goto label_13fb00;
            case 0x13FB04u: goto label_13fb04;
            case 0x13FB08u: goto label_13fb08;
            case 0x13FB0Cu: goto label_13fb0c;
            case 0x13FB10u: goto label_13fb10;
            case 0x13FB14u: goto label_13fb14;
            case 0x13FB18u: goto label_13fb18;
            case 0x13FB1Cu: goto label_13fb1c;
            case 0x13FB20u: goto label_13fb20;
            case 0x13FB24u: goto label_13fb24;
            case 0x13FB28u: goto label_13fb28;
            case 0x13FB2Cu: goto label_13fb2c;
            case 0x13FB30u: goto label_13fb30;
            case 0x13FB34u: goto label_13fb34;
            case 0x13FB38u: goto label_13fb38;
            case 0x13FB3Cu: goto label_13fb3c;
            case 0x13FB40u: goto label_13fb40;
            case 0x13FB44u: goto label_13fb44;
            case 0x13FB48u: goto label_13fb48;
            case 0x13FB4Cu: goto label_13fb4c;
            case 0x13FB50u: goto label_13fb50;
            case 0x13FB54u: goto label_13fb54;
            case 0x13FB58u: goto label_13fb58;
            case 0x13FB5Cu: goto label_13fb5c;
            case 0x13FB60u: goto label_13fb60;
            case 0x13FB64u: goto label_13fb64;
            case 0x13FB68u: goto label_13fb68;
            case 0x13FB6Cu: goto label_13fb6c;
            case 0x13FB70u: goto label_13fb70;
            case 0x13FB74u: goto label_13fb74;
            case 0x13FB78u: goto label_13fb78;
            case 0x13FB7Cu: goto label_13fb7c;
            case 0x13FB80u: goto label_13fb80;
            case 0x13FB84u: goto label_13fb84;
            case 0x13FB88u: goto label_13fb88;
            case 0x13FB8Cu: goto label_13fb8c;
            case 0x13FB90u: goto label_13fb90;
            case 0x13FB94u: goto label_13fb94;
            case 0x13FB98u: goto label_13fb98;
            case 0x13FB9Cu: goto label_13fb9c;
            case 0x13FBA0u: goto label_13fba0;
            case 0x13FBA4u: goto label_13fba4;
            case 0x13FBA8u: goto label_13fba8;
            case 0x13FBACu: goto label_13fbac;
            case 0x13FBB0u: goto label_13fbb0;
            case 0x13FBB4u: goto label_13fbb4;
            case 0x13FBB8u: goto label_13fbb8;
            case 0x13FBBCu: goto label_13fbbc;
            case 0x13FBC0u: goto label_13fbc0;
            case 0x13FBC4u: goto label_13fbc4;
            case 0x13FBC8u: goto label_13fbc8;
            case 0x13FBCCu: goto label_13fbcc;
            case 0x13FBD0u: goto label_13fbd0;
            case 0x13FBD4u: goto label_13fbd4;
            case 0x13FBD8u: goto label_13fbd8;
            case 0x13FBDCu: goto label_13fbdc;
            case 0x13FBE0u: goto label_13fbe0;
            case 0x13FBE4u: goto label_13fbe4;
            case 0x13FBE8u: goto label_13fbe8;
            case 0x13FBECu: goto label_13fbec;
            case 0x13FBF0u: goto label_13fbf0;
            case 0x13FBF4u: goto label_13fbf4;
            case 0x13FBF8u: goto label_13fbf8;
            case 0x13FBFCu: goto label_13fbfc;
            case 0x13FC00u: goto label_13fc00;
            case 0x13FC04u: goto label_13fc04;
            case 0x13FC08u: goto label_13fc08;
            case 0x13FC0Cu: goto label_13fc0c;
            case 0x13FC10u: goto label_13fc10;
            case 0x13FC14u: goto label_13fc14;
            case 0x13FC18u: goto label_13fc18;
            case 0x13FC1Cu: goto label_13fc1c;
            case 0x13FC20u: goto label_13fc20;
            case 0x13FC24u: goto label_13fc24;
            case 0x13FC28u: goto label_13fc28;
            case 0x13FC2Cu: goto label_13fc2c;
            case 0x13FC30u: goto label_13fc30;
            case 0x13FC34u: goto label_13fc34;
            case 0x13FC38u: goto label_13fc38;
            case 0x13FC3Cu: goto label_13fc3c;
            case 0x13FC40u: goto label_13fc40;
            case 0x13FC44u: goto label_13fc44;
            case 0x13FC48u: goto label_13fc48;
            case 0x13FC4Cu: goto label_13fc4c;
            case 0x13FC50u: goto label_13fc50;
            case 0x13FC54u: goto label_13fc54;
            case 0x13FC58u: goto label_13fc58;
            case 0x13FC5Cu: goto label_13fc5c;
            case 0x13FC60u: goto label_13fc60;
            case 0x13FC64u: goto label_13fc64;
            case 0x13FC68u: goto label_13fc68;
            case 0x13FC6Cu: goto label_13fc6c;
            case 0x13FC70u: goto label_13fc70;
            case 0x13FC74u: goto label_13fc74;
            case 0x13FC78u: goto label_13fc78;
            case 0x13FC7Cu: goto label_13fc7c;
            case 0x13FC80u: goto label_13fc80;
            case 0x13FC84u: goto label_13fc84;
            case 0x13FC88u: goto label_13fc88;
            case 0x13FC8Cu: goto label_13fc8c;
            case 0x13FC90u: goto label_13fc90;
            case 0x13FC94u: goto label_13fc94;
            case 0x13FC98u: goto label_13fc98;
            case 0x13FC9Cu: goto label_13fc9c;
            case 0x13FCA0u: goto label_13fca0;
            case 0x13FCA4u: goto label_13fca4;
            case 0x13FCA8u: goto label_13fca8;
            case 0x13FCACu: goto label_13fcac;
            case 0x13FCB0u: goto label_13fcb0;
            case 0x13FCB4u: goto label_13fcb4;
            case 0x13FCB8u: goto label_13fcb8;
            case 0x13FCBCu: goto label_13fcbc;
            case 0x13FCC0u: goto label_13fcc0;
            case 0x13FCC4u: goto label_13fcc4;
            case 0x13FCC8u: goto label_13fcc8;
            case 0x13FCCCu: goto label_13fccc;
            case 0x13FCD0u: goto label_13fcd0;
            case 0x13FCD4u: goto label_13fcd4;
            case 0x13FCD8u: goto label_13fcd8;
            case 0x13FCDCu: goto label_13fcdc;
            case 0x13FCE0u: goto label_13fce0;
            case 0x13FCE4u: goto label_13fce4;
            case 0x13FCE8u: goto label_13fce8;
            case 0x13FCECu: goto label_13fcec;
            case 0x13FCF0u: goto label_13fcf0;
            case 0x13FCF4u: goto label_13fcf4;
            case 0x13FCF8u: goto label_13fcf8;
            case 0x13FCFCu: goto label_13fcfc;
            case 0x13FD00u: goto label_13fd00;
            case 0x13FD04u: goto label_13fd04;
            case 0x13FD08u: goto label_13fd08;
            case 0x13FD0Cu: goto label_13fd0c;
            case 0x13FD10u: goto label_13fd10;
            case 0x13FD14u: goto label_13fd14;
            case 0x13FD18u: goto label_13fd18;
            case 0x13FD1Cu: goto label_13fd1c;
            case 0x13FD20u: goto label_13fd20;
            case 0x13FD24u: goto label_13fd24;
            case 0x13FD28u: goto label_13fd28;
            case 0x13FD2Cu: goto label_13fd2c;
            case 0x13FD30u: goto label_13fd30;
            case 0x13FD34u: goto label_13fd34;
            case 0x13FD38u: goto label_13fd38;
            case 0x13FD3Cu: goto label_13fd3c;
            case 0x13FD40u: goto label_13fd40;
            case 0x13FD44u: goto label_13fd44;
            case 0x13FD48u: goto label_13fd48;
            case 0x13FD4Cu: goto label_13fd4c;
            case 0x13FD50u: goto label_13fd50;
            case 0x13FD54u: goto label_13fd54;
            case 0x13FD58u: goto label_13fd58;
            case 0x13FD5Cu: goto label_13fd5c;
            case 0x13FD60u: goto label_13fd60;
            case 0x13FD64u: goto label_13fd64;
            case 0x13FD68u: goto label_13fd68;
            case 0x13FD6Cu: goto label_13fd6c;
            case 0x13FD70u: goto label_13fd70;
            case 0x13FD74u: goto label_13fd74;
            case 0x13FD78u: goto label_13fd78;
            case 0x13FD7Cu: goto label_13fd7c;
            case 0x13FD80u: goto label_13fd80;
            case 0x13FD84u: goto label_13fd84;
            case 0x13FD88u: goto label_13fd88;
            case 0x13FD8Cu: goto label_13fd8c;
            case 0x13FD90u: goto label_13fd90;
            case 0x13FD94u: goto label_13fd94;
            case 0x13FD98u: goto label_13fd98;
            case 0x13FD9Cu: goto label_13fd9c;
            case 0x13FDA0u: goto label_13fda0;
            case 0x13FDA4u: goto label_13fda4;
            case 0x13FDA8u: goto label_13fda8;
            case 0x13FDACu: goto label_13fdac;
            case 0x13FDB0u: goto label_13fdb0;
            case 0x13FDB4u: goto label_13fdb4;
            case 0x13FDB8u: goto label_13fdb8;
            case 0x13FDBCu: goto label_13fdbc;
            case 0x13FDC0u: goto label_13fdc0;
            case 0x13FDC4u: goto label_13fdc4;
            case 0x13FDC8u: goto label_13fdc8;
            case 0x13FDCCu: goto label_13fdcc;
            case 0x13FDD0u: goto label_13fdd0;
            case 0x13FDD4u: goto label_13fdd4;
            case 0x13FDD8u: goto label_13fdd8;
            case 0x13FDDCu: goto label_13fddc;
            case 0x13FDE0u: goto label_13fde0;
            case 0x13FDE4u: goto label_13fde4;
            case 0x13FDE8u: goto label_13fde8;
            case 0x13FDECu: goto label_13fdec;
            case 0x13FDF0u: goto label_13fdf0;
            case 0x13FDF4u: goto label_13fdf4;
            case 0x13FDF8u: goto label_13fdf8;
            case 0x13FDFCu: goto label_13fdfc;
            case 0x13FE00u: goto label_13fe00;
            case 0x13FE04u: goto label_13fe04;
            case 0x13FE08u: goto label_13fe08;
            case 0x13FE0Cu: goto label_13fe0c;
            case 0x13FE10u: goto label_13fe10;
            case 0x13FE14u: goto label_13fe14;
            case 0x13FE18u: goto label_13fe18;
            case 0x13FE1Cu: goto label_13fe1c;
            case 0x13FE20u: goto label_13fe20;
            case 0x13FE24u: goto label_13fe24;
            case 0x13FE28u: goto label_13fe28;
            case 0x13FE2Cu: goto label_13fe2c;
            case 0x13FE30u: goto label_13fe30;
            case 0x13FE34u: goto label_13fe34;
            case 0x13FE38u: goto label_13fe38;
            case 0x13FE3Cu: goto label_13fe3c;
            case 0x13FE40u: goto label_13fe40;
            case 0x13FE44u: goto label_13fe44;
            case 0x13FE48u: goto label_13fe48;
            case 0x13FE4Cu: goto label_13fe4c;
            case 0x13FE50u: goto label_13fe50;
            case 0x13FE54u: goto label_13fe54;
            case 0x13FE58u: goto label_13fe58;
            case 0x13FE5Cu: goto label_13fe5c;
            case 0x13FE60u: goto label_13fe60;
            case 0x13FE64u: goto label_13fe64;
            case 0x13FE68u: goto label_13fe68;
            case 0x13FE6Cu: goto label_13fe6c;
            case 0x13FE70u: goto label_13fe70;
            case 0x13FE74u: goto label_13fe74;
            case 0x13FE78u: goto label_13fe78;
            case 0x13FE7Cu: goto label_13fe7c;
            case 0x13FE80u: goto label_13fe80;
            case 0x13FE84u: goto label_13fe84;
            case 0x13FE88u: goto label_13fe88;
            case 0x13FE8Cu: goto label_13fe8c;
            case 0x13FE90u: goto label_13fe90;
            case 0x13FE94u: goto label_13fe94;
            case 0x13FE98u: goto label_13fe98;
            case 0x13FE9Cu: goto label_13fe9c;
            case 0x13FEA0u: goto label_13fea0;
            case 0x13FEA4u: goto label_13fea4;
            case 0x13FEA8u: goto label_13fea8;
            case 0x13FEACu: goto label_13feac;
            case 0x13FEB0u: goto label_13feb0;
            case 0x13FEB4u: goto label_13feb4;
            case 0x13FEB8u: goto label_13feb8;
            case 0x13FEBCu: goto label_13febc;
            case 0x13FEC0u: goto label_13fec0;
            case 0x13FEC4u: goto label_13fec4;
            case 0x13FEC8u: goto label_13fec8;
            case 0x13FECCu: goto label_13fecc;
            case 0x13FED0u: goto label_13fed0;
            case 0x13FED4u: goto label_13fed4;
            case 0x13FED8u: goto label_13fed8;
            case 0x13FEDCu: goto label_13fedc;
            case 0x13FEE0u: goto label_13fee0;
            case 0x13FEE4u: goto label_13fee4;
            case 0x13FEE8u: goto label_13fee8;
            case 0x13FEECu: goto label_13feec;
            case 0x13FEF0u: goto label_13fef0;
            case 0x13FEF4u: goto label_13fef4;
            case 0x13FEF8u: goto label_13fef8;
            case 0x13FEFCu: goto label_13fefc;
            case 0x13FF00u: goto label_13ff00;
            case 0x13FF04u: goto label_13ff04;
            case 0x13FF08u: goto label_13ff08;
            case 0x13FF0Cu: goto label_13ff0c;
            case 0x13FF10u: goto label_13ff10;
            case 0x13FF14u: goto label_13ff14;
            case 0x13FF18u: goto label_13ff18;
            case 0x13FF1Cu: goto label_13ff1c;
            case 0x13FF20u: goto label_13ff20;
            case 0x13FF24u: goto label_13ff24;
            case 0x13FF28u: goto label_13ff28;
            case 0x13FF2Cu: goto label_13ff2c;
            case 0x13FF30u: goto label_13ff30;
            case 0x13FF34u: goto label_13ff34;
            case 0x13FF38u: goto label_13ff38;
            case 0x13FF3Cu: goto label_13ff3c;
            case 0x13FF40u: goto label_13ff40;
            case 0x13FF44u: goto label_13ff44;
            case 0x13FF48u: goto label_13ff48;
            case 0x13FF4Cu: goto label_13ff4c;
            case 0x13FF50u: goto label_13ff50;
            case 0x13FF54u: goto label_13ff54;
            case 0x13FF58u: goto label_13ff58;
            case 0x13FF5Cu: goto label_13ff5c;
            case 0x13FF60u: goto label_13ff60;
            case 0x13FF64u: goto label_13ff64;
            case 0x13FF68u: goto label_13ff68;
            case 0x13FF6Cu: goto label_13ff6c;
            case 0x13FF70u: goto label_13ff70;
            case 0x13FF74u: goto label_13ff74;
            case 0x13FF78u: goto label_13ff78;
            case 0x13FF7Cu: goto label_13ff7c;
            case 0x13FF80u: goto label_13ff80;
            case 0x13FF84u: goto label_13ff84;
            case 0x13FF88u: goto label_13ff88;
            case 0x13FF8Cu: goto label_13ff8c;
            case 0x13FF90u: goto label_13ff90;
            case 0x13FF94u: goto label_13ff94;
            case 0x13FF98u: goto label_13ff98;
            case 0x13FF9Cu: goto label_13ff9c;
            case 0x13FFA0u: goto label_13ffa0;
            case 0x13FFA4u: goto label_13ffa4;
            case 0x13FFA8u: goto label_13ffa8;
            case 0x13FFACu: goto label_13ffac;
            case 0x13FFB0u: goto label_13ffb0;
            case 0x13FFB4u: goto label_13ffb4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13FD28u; }
            if (ctx->pc != 0x13FD28u) { return; }
        }
    }
    ctx->pc = 0x13FD28u;
label_13fd28:
    // 0x13fd28: 0xdfb00000
    ctx->pc = 0x13fd28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13fd2c:
    // 0x13fd2c: 0xdfb10008
    ctx->pc = 0x13fd2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13fd30:
    // 0x13fd30: 0xdfb20010
    ctx->pc = 0x13fd30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13fd34:
    // 0x13fd34: 0xdfbf0018
    ctx->pc = 0x13fd34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13fd38:
    // 0x13fd38: 0x804fc9c
label_13fd3c:
    if (ctx->pc == 0x13FD3Cu) {
        ctx->pc = 0x13FD3Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x13FD40u;
        goto label_13fd40;
    }
    ctx->pc = 0x13FD38u;
    ctx->pc = 0x13FD3Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x13F270u;
    sub_0013F270_0x13f270(rdram, ctx, runtime); return;
    ctx->pc = 0x13FD40u;
label_13fd40:
    // 0x13fd40: 0xdfb00000
    ctx->pc = 0x13fd40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13fd44:
    // 0x13fd44: 0xdfb10008
    ctx->pc = 0x13fd44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13fd48:
    // 0x13fd48: 0xdfb20010
    ctx->pc = 0x13fd48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13fd4c:
    // 0x13fd4c: 0xdfbf0018
    ctx->pc = 0x13fd4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13fd50:
    // 0x13fd50: 0x3e00008
label_13fd54:
    if (ctx->pc == 0x13FD54u) {
        ctx->pc = 0x13FD54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x13FD58u;
        goto label_13fd58;
    }
    ctx->pc = 0x13FD50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FD54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F9F0u: goto label_13f9f0;
            case 0x13F9F4u: goto label_13f9f4;
            case 0x13F9F8u: goto label_13f9f8;
            case 0x13F9FCu: goto label_13f9fc;
            case 0x13FA00u: goto label_13fa00;
            case 0x13FA04u: goto label_13fa04;
            case 0x13FA08u: goto label_13fa08;
            case 0x13FA0Cu: goto label_13fa0c;
            case 0x13FA10u: goto label_13fa10;
            case 0x13FA14u: goto label_13fa14;
            case 0x13FA18u: goto label_13fa18;
            case 0x13FA1Cu: goto label_13fa1c;
            case 0x13FA20u: goto label_13fa20;
            case 0x13FA24u: goto label_13fa24;
            case 0x13FA28u: goto label_13fa28;
            case 0x13FA2Cu: goto label_13fa2c;
            case 0x13FA30u: goto label_13fa30;
            case 0x13FA34u: goto label_13fa34;
            case 0x13FA38u: goto label_13fa38;
            case 0x13FA3Cu: goto label_13fa3c;
            case 0x13FA40u: goto label_13fa40;
            case 0x13FA44u: goto label_13fa44;
            case 0x13FA48u: goto label_13fa48;
            case 0x13FA4Cu: goto label_13fa4c;
            case 0x13FA50u: goto label_13fa50;
            case 0x13FA54u: goto label_13fa54;
            case 0x13FA58u: goto label_13fa58;
            case 0x13FA5Cu: goto label_13fa5c;
            case 0x13FA60u: goto label_13fa60;
            case 0x13FA64u: goto label_13fa64;
            case 0x13FA68u: goto label_13fa68;
            case 0x13FA6Cu: goto label_13fa6c;
            case 0x13FA70u: goto label_13fa70;
            case 0x13FA74u: goto label_13fa74;
            case 0x13FA78u: goto label_13fa78;
            case 0x13FA7Cu: goto label_13fa7c;
            case 0x13FA80u: goto label_13fa80;
            case 0x13FA84u: goto label_13fa84;
            case 0x13FA88u: goto label_13fa88;
            case 0x13FA8Cu: goto label_13fa8c;
            case 0x13FA90u: goto label_13fa90;
            case 0x13FA94u: goto label_13fa94;
            case 0x13FA98u: goto label_13fa98;
            case 0x13FA9Cu: goto label_13fa9c;
            case 0x13FAA0u: goto label_13faa0;
            case 0x13FAA4u: goto label_13faa4;
            case 0x13FAA8u: goto label_13faa8;
            case 0x13FAACu: goto label_13faac;
            case 0x13FAB0u: goto label_13fab0;
            case 0x13FAB4u: goto label_13fab4;
            case 0x13FAB8u: goto label_13fab8;
            case 0x13FABCu: goto label_13fabc;
            case 0x13FAC0u: goto label_13fac0;
            case 0x13FAC4u: goto label_13fac4;
            case 0x13FAC8u: goto label_13fac8;
            case 0x13FACCu: goto label_13facc;
            case 0x13FAD0u: goto label_13fad0;
            case 0x13FAD4u: goto label_13fad4;
            case 0x13FAD8u: goto label_13fad8;
            case 0x13FADCu: goto label_13fadc;
            case 0x13FAE0u: goto label_13fae0;
            case 0x13FAE4u: goto label_13fae4;
            case 0x13FAE8u: goto label_13fae8;
            case 0x13FAECu: goto label_13faec;
            case 0x13FAF0u: goto label_13faf0;
            case 0x13FAF4u: goto label_13faf4;
            case 0x13FAF8u: goto label_13faf8;
            case 0x13FAFCu: goto label_13fafc;
            case 0x13FB00u: goto label_13fb00;
            case 0x13FB04u: goto label_13fb04;
            case 0x13FB08u: goto label_13fb08;
            case 0x13FB0Cu: goto label_13fb0c;
            case 0x13FB10u: goto label_13fb10;
            case 0x13FB14u: goto label_13fb14;
            case 0x13FB18u: goto label_13fb18;
            case 0x13FB1Cu: goto label_13fb1c;
            case 0x13FB20u: goto label_13fb20;
            case 0x13FB24u: goto label_13fb24;
            case 0x13FB28u: goto label_13fb28;
            case 0x13FB2Cu: goto label_13fb2c;
            case 0x13FB30u: goto label_13fb30;
            case 0x13FB34u: goto label_13fb34;
            case 0x13FB38u: goto label_13fb38;
            case 0x13FB3Cu: goto label_13fb3c;
            case 0x13FB40u: goto label_13fb40;
            case 0x13FB44u: goto label_13fb44;
            case 0x13FB48u: goto label_13fb48;
            case 0x13FB4Cu: goto label_13fb4c;
            case 0x13FB50u: goto label_13fb50;
            case 0x13FB54u: goto label_13fb54;
            case 0x13FB58u: goto label_13fb58;
            case 0x13FB5Cu: goto label_13fb5c;
            case 0x13FB60u: goto label_13fb60;
            case 0x13FB64u: goto label_13fb64;
            case 0x13FB68u: goto label_13fb68;
            case 0x13FB6Cu: goto label_13fb6c;
            case 0x13FB70u: goto label_13fb70;
            case 0x13FB74u: goto label_13fb74;
            case 0x13FB78u: goto label_13fb78;
            case 0x13FB7Cu: goto label_13fb7c;
            case 0x13FB80u: goto label_13fb80;
            case 0x13FB84u: goto label_13fb84;
            case 0x13FB88u: goto label_13fb88;
            case 0x13FB8Cu: goto label_13fb8c;
            case 0x13FB90u: goto label_13fb90;
            case 0x13FB94u: goto label_13fb94;
            case 0x13FB98u: goto label_13fb98;
            case 0x13FB9Cu: goto label_13fb9c;
            case 0x13FBA0u: goto label_13fba0;
            case 0x13FBA4u: goto label_13fba4;
            case 0x13FBA8u: goto label_13fba8;
            case 0x13FBACu: goto label_13fbac;
            case 0x13FBB0u: goto label_13fbb0;
            case 0x13FBB4u: goto label_13fbb4;
            case 0x13FBB8u: goto label_13fbb8;
            case 0x13FBBCu: goto label_13fbbc;
            case 0x13FBC0u: goto label_13fbc0;
            case 0x13FBC4u: goto label_13fbc4;
            case 0x13FBC8u: goto label_13fbc8;
            case 0x13FBCCu: goto label_13fbcc;
            case 0x13FBD0u: goto label_13fbd0;
            case 0x13FBD4u: goto label_13fbd4;
            case 0x13FBD8u: goto label_13fbd8;
            case 0x13FBDCu: goto label_13fbdc;
            case 0x13FBE0u: goto label_13fbe0;
            case 0x13FBE4u: goto label_13fbe4;
            case 0x13FBE8u: goto label_13fbe8;
            case 0x13FBECu: goto label_13fbec;
            case 0x13FBF0u: goto label_13fbf0;
            case 0x13FBF4u: goto label_13fbf4;
            case 0x13FBF8u: goto label_13fbf8;
            case 0x13FBFCu: goto label_13fbfc;
            case 0x13FC00u: goto label_13fc00;
            case 0x13FC04u: goto label_13fc04;
            case 0x13FC08u: goto label_13fc08;
            case 0x13FC0Cu: goto label_13fc0c;
            case 0x13FC10u: goto label_13fc10;
            case 0x13FC14u: goto label_13fc14;
            case 0x13FC18u: goto label_13fc18;
            case 0x13FC1Cu: goto label_13fc1c;
            case 0x13FC20u: goto label_13fc20;
            case 0x13FC24u: goto label_13fc24;
            case 0x13FC28u: goto label_13fc28;
            case 0x13FC2Cu: goto label_13fc2c;
            case 0x13FC30u: goto label_13fc30;
            case 0x13FC34u: goto label_13fc34;
            case 0x13FC38u: goto label_13fc38;
            case 0x13FC3Cu: goto label_13fc3c;
            case 0x13FC40u: goto label_13fc40;
            case 0x13FC44u: goto label_13fc44;
            case 0x13FC48u: goto label_13fc48;
            case 0x13FC4Cu: goto label_13fc4c;
            case 0x13FC50u: goto label_13fc50;
            case 0x13FC54u: goto label_13fc54;
            case 0x13FC58u: goto label_13fc58;
            case 0x13FC5Cu: goto label_13fc5c;
            case 0x13FC60u: goto label_13fc60;
            case 0x13FC64u: goto label_13fc64;
            case 0x13FC68u: goto label_13fc68;
            case 0x13FC6Cu: goto label_13fc6c;
            case 0x13FC70u: goto label_13fc70;
            case 0x13FC74u: goto label_13fc74;
            case 0x13FC78u: goto label_13fc78;
            case 0x13FC7Cu: goto label_13fc7c;
            case 0x13FC80u: goto label_13fc80;
            case 0x13FC84u: goto label_13fc84;
            case 0x13FC88u: goto label_13fc88;
            case 0x13FC8Cu: goto label_13fc8c;
            case 0x13FC90u: goto label_13fc90;
            case 0x13FC94u: goto label_13fc94;
            case 0x13FC98u: goto label_13fc98;
            case 0x13FC9Cu: goto label_13fc9c;
            case 0x13FCA0u: goto label_13fca0;
            case 0x13FCA4u: goto label_13fca4;
            case 0x13FCA8u: goto label_13fca8;
            case 0x13FCACu: goto label_13fcac;
            case 0x13FCB0u: goto label_13fcb0;
            case 0x13FCB4u: goto label_13fcb4;
            case 0x13FCB8u: goto label_13fcb8;
            case 0x13FCBCu: goto label_13fcbc;
            case 0x13FCC0u: goto label_13fcc0;
            case 0x13FCC4u: goto label_13fcc4;
            case 0x13FCC8u: goto label_13fcc8;
            case 0x13FCCCu: goto label_13fccc;
            case 0x13FCD0u: goto label_13fcd0;
            case 0x13FCD4u: goto label_13fcd4;
            case 0x13FCD8u: goto label_13fcd8;
            case 0x13FCDCu: goto label_13fcdc;
            case 0x13FCE0u: goto label_13fce0;
            case 0x13FCE4u: goto label_13fce4;
            case 0x13FCE8u: goto label_13fce8;
            case 0x13FCECu: goto label_13fcec;
            case 0x13FCF0u: goto label_13fcf0;
            case 0x13FCF4u: goto label_13fcf4;
            case 0x13FCF8u: goto label_13fcf8;
            case 0x13FCFCu: goto label_13fcfc;
            case 0x13FD00u: goto label_13fd00;
            case 0x13FD04u: goto label_13fd04;
            case 0x13FD08u: goto label_13fd08;
            case 0x13FD0Cu: goto label_13fd0c;
            case 0x13FD10u: goto label_13fd10;
            case 0x13FD14u: goto label_13fd14;
            case 0x13FD18u: goto label_13fd18;
            case 0x13FD1Cu: goto label_13fd1c;
            case 0x13FD20u: goto label_13fd20;
            case 0x13FD24u: goto label_13fd24;
            case 0x13FD28u: goto label_13fd28;
            case 0x13FD2Cu: goto label_13fd2c;
            case 0x13FD30u: goto label_13fd30;
            case 0x13FD34u: goto label_13fd34;
            case 0x13FD38u: goto label_13fd38;
            case 0x13FD3Cu: goto label_13fd3c;
            case 0x13FD40u: goto label_13fd40;
            case 0x13FD44u: goto label_13fd44;
            case 0x13FD48u: goto label_13fd48;
            case 0x13FD4Cu: goto label_13fd4c;
            case 0x13FD50u: goto label_13fd50;
            case 0x13FD54u: goto label_13fd54;
            case 0x13FD58u: goto label_13fd58;
            case 0x13FD5Cu: goto label_13fd5c;
            case 0x13FD60u: goto label_13fd60;
            case 0x13FD64u: goto label_13fd64;
            case 0x13FD68u: goto label_13fd68;
            case 0x13FD6Cu: goto label_13fd6c;
            case 0x13FD70u: goto label_13fd70;
            case 0x13FD74u: goto label_13fd74;
            case 0x13FD78u: goto label_13fd78;
            case 0x13FD7Cu: goto label_13fd7c;
            case 0x13FD80u: goto label_13fd80;
            case 0x13FD84u: goto label_13fd84;
            case 0x13FD88u: goto label_13fd88;
            case 0x13FD8Cu: goto label_13fd8c;
            case 0x13FD90u: goto label_13fd90;
            case 0x13FD94u: goto label_13fd94;
            case 0x13FD98u: goto label_13fd98;
            case 0x13FD9Cu: goto label_13fd9c;
            case 0x13FDA0u: goto label_13fda0;
            case 0x13FDA4u: goto label_13fda4;
            case 0x13FDA8u: goto label_13fda8;
            case 0x13FDACu: goto label_13fdac;
            case 0x13FDB0u: goto label_13fdb0;
            case 0x13FDB4u: goto label_13fdb4;
            case 0x13FDB8u: goto label_13fdb8;
            case 0x13FDBCu: goto label_13fdbc;
            case 0x13FDC0u: goto label_13fdc0;
            case 0x13FDC4u: goto label_13fdc4;
            case 0x13FDC8u: goto label_13fdc8;
            case 0x13FDCCu: goto label_13fdcc;
            case 0x13FDD0u: goto label_13fdd0;
            case 0x13FDD4u: goto label_13fdd4;
            case 0x13FDD8u: goto label_13fdd8;
            case 0x13FDDCu: goto label_13fddc;
            case 0x13FDE0u: goto label_13fde0;
            case 0x13FDE4u: goto label_13fde4;
            case 0x13FDE8u: goto label_13fde8;
            case 0x13FDECu: goto label_13fdec;
            case 0x13FDF0u: goto label_13fdf0;
            case 0x13FDF4u: goto label_13fdf4;
            case 0x13FDF8u: goto label_13fdf8;
            case 0x13FDFCu: goto label_13fdfc;
            case 0x13FE00u: goto label_13fe00;
            case 0x13FE04u: goto label_13fe04;
            case 0x13FE08u: goto label_13fe08;
            case 0x13FE0Cu: goto label_13fe0c;
            case 0x13FE10u: goto label_13fe10;
            case 0x13FE14u: goto label_13fe14;
            case 0x13FE18u: goto label_13fe18;
            case 0x13FE1Cu: goto label_13fe1c;
            case 0x13FE20u: goto label_13fe20;
            case 0x13FE24u: goto label_13fe24;
            case 0x13FE28u: goto label_13fe28;
            case 0x13FE2Cu: goto label_13fe2c;
            case 0x13FE30u: goto label_13fe30;
            case 0x13FE34u: goto label_13fe34;
            case 0x13FE38u: goto label_13fe38;
            case 0x13FE3Cu: goto label_13fe3c;
            case 0x13FE40u: goto label_13fe40;
            case 0x13FE44u: goto label_13fe44;
            case 0x13FE48u: goto label_13fe48;
            case 0x13FE4Cu: goto label_13fe4c;
            case 0x13FE50u: goto label_13fe50;
            case 0x13FE54u: goto label_13fe54;
            case 0x13FE58u: goto label_13fe58;
            case 0x13FE5Cu: goto label_13fe5c;
            case 0x13FE60u: goto label_13fe60;
            case 0x13FE64u: goto label_13fe64;
            case 0x13FE68u: goto label_13fe68;
            case 0x13FE6Cu: goto label_13fe6c;
            case 0x13FE70u: goto label_13fe70;
            case 0x13FE74u: goto label_13fe74;
            case 0x13FE78u: goto label_13fe78;
            case 0x13FE7Cu: goto label_13fe7c;
            case 0x13FE80u: goto label_13fe80;
            case 0x13FE84u: goto label_13fe84;
            case 0x13FE88u: goto label_13fe88;
            case 0x13FE8Cu: goto label_13fe8c;
            case 0x13FE90u: goto label_13fe90;
            case 0x13FE94u: goto label_13fe94;
            case 0x13FE98u: goto label_13fe98;
            case 0x13FE9Cu: goto label_13fe9c;
            case 0x13FEA0u: goto label_13fea0;
            case 0x13FEA4u: goto label_13fea4;
            case 0x13FEA8u: goto label_13fea8;
            case 0x13FEACu: goto label_13feac;
            case 0x13FEB0u: goto label_13feb0;
            case 0x13FEB4u: goto label_13feb4;
            case 0x13FEB8u: goto label_13feb8;
            case 0x13FEBCu: goto label_13febc;
            case 0x13FEC0u: goto label_13fec0;
            case 0x13FEC4u: goto label_13fec4;
            case 0x13FEC8u: goto label_13fec8;
            case 0x13FECCu: goto label_13fecc;
            case 0x13FED0u: goto label_13fed0;
            case 0x13FED4u: goto label_13fed4;
            case 0x13FED8u: goto label_13fed8;
            case 0x13FEDCu: goto label_13fedc;
            case 0x13FEE0u: goto label_13fee0;
            case 0x13FEE4u: goto label_13fee4;
            case 0x13FEE8u: goto label_13fee8;
            case 0x13FEECu: goto label_13feec;
            case 0x13FEF0u: goto label_13fef0;
            case 0x13FEF4u: goto label_13fef4;
            case 0x13FEF8u: goto label_13fef8;
            case 0x13FEFCu: goto label_13fefc;
            case 0x13FF00u: goto label_13ff00;
            case 0x13FF04u: goto label_13ff04;
            case 0x13FF08u: goto label_13ff08;
            case 0x13FF0Cu: goto label_13ff0c;
            case 0x13FF10u: goto label_13ff10;
            case 0x13FF14u: goto label_13ff14;
            case 0x13FF18u: goto label_13ff18;
            case 0x13FF1Cu: goto label_13ff1c;
            case 0x13FF20u: goto label_13ff20;
            case 0x13FF24u: goto label_13ff24;
            case 0x13FF28u: goto label_13ff28;
            case 0x13FF2Cu: goto label_13ff2c;
            case 0x13FF30u: goto label_13ff30;
            case 0x13FF34u: goto label_13ff34;
            case 0x13FF38u: goto label_13ff38;
            case 0x13FF3Cu: goto label_13ff3c;
            case 0x13FF40u: goto label_13ff40;
            case 0x13FF44u: goto label_13ff44;
            case 0x13FF48u: goto label_13ff48;
            case 0x13FF4Cu: goto label_13ff4c;
            case 0x13FF50u: goto label_13ff50;
            case 0x13FF54u: goto label_13ff54;
            case 0x13FF58u: goto label_13ff58;
            case 0x13FF5Cu: goto label_13ff5c;
            case 0x13FF60u: goto label_13ff60;
            case 0x13FF64u: goto label_13ff64;
            case 0x13FF68u: goto label_13ff68;
            case 0x13FF6Cu: goto label_13ff6c;
            case 0x13FF70u: goto label_13ff70;
            case 0x13FF74u: goto label_13ff74;
            case 0x13FF78u: goto label_13ff78;
            case 0x13FF7Cu: goto label_13ff7c;
            case 0x13FF80u: goto label_13ff80;
            case 0x13FF84u: goto label_13ff84;
            case 0x13FF88u: goto label_13ff88;
            case 0x13FF8Cu: goto label_13ff8c;
            case 0x13FF90u: goto label_13ff90;
            case 0x13FF94u: goto label_13ff94;
            case 0x13FF98u: goto label_13ff98;
            case 0x13FF9Cu: goto label_13ff9c;
            case 0x13FFA0u: goto label_13ffa0;
            case 0x13FFA4u: goto label_13ffa4;
            case 0x13FFA8u: goto label_13ffa8;
            case 0x13FFACu: goto label_13ffac;
            case 0x13FFB0u: goto label_13ffb0;
            case 0x13FFB4u: goto label_13ffb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13FD58u;
label_13fd58:
    // 0x13fd58: 0x27bdffe0
    ctx->pc = 0x13fd58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_13fd5c:
    // 0x13fd5c: 0xffb00000
    ctx->pc = 0x13fd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13fd60:
    // 0x13fd60: 0x80802d
    ctx->pc = 0x13fd60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13fd64:
    // 0x13fd64: 0xffb10008
    ctx->pc = 0x13fd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13fd68:
    // 0x13fd68: 0xc0882d
    ctx->pc = 0x13fd68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13fd6c:
    // 0x13fd6c: 0xffb20010
    ctx->pc = 0x13fd6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_13fd70:
    // 0x13fd70: 0xffbf0018
    ctx->pc = 0x13fd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_13fd74:
    // 0x13fd74: 0x8e220004
    ctx->pc = 0x13fd74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13fd78:
    // 0x13fd78: 0x18400057
label_13fd7c:
    if (ctx->pc == 0x13FD7Cu) {
        ctx->pc = 0x13FD7Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13FD80u;
        goto label_13fd80;
    }
    ctx->pc = 0x13FD78u;
    {
        const bool branch_taken_0x13fd78 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13FD7Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13fd78) {
            ctx->pc = 0x13FED8u;
            goto label_13fed8;
        }
    }
    ctx->pc = 0x13FD80u;
label_13fd80:
    // 0x13fd80: 0x8e220000
    ctx->pc = 0x13fd80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13fd84:
    // 0x13fd84: 0x50400055
label_13fd88:
    if (ctx->pc == 0x13FD88u) {
        ctx->pc = 0x13FD88u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x13FD8Cu;
        goto label_13fd8c;
    }
    ctx->pc = 0x13FD84u;
    {
        const bool branch_taken_0x13fd84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x13fd84) {
            ctx->pc = 0x13FD88u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x13FEDCu;
            goto label_13fedc;
        }
    }
    ctx->pc = 0x13FD8Cu;
label_13fd8c:
    // 0x13fd8c: 0xc04fc96
label_13fd90:
    if (ctx->pc == 0x13FD90u) {
        ctx->pc = 0x13FD94u;
        goto label_13fd94;
    }
    ctx->pc = 0x13FD8Cu;
    SET_GPR_U32(ctx, 31, 0x13FD94u);
    ctx->pc = 0x13F258u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F258_0x13f258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FD94u; }
    }
    if (ctx->pc != 0x13FD94u) { return; }
    ctx->pc = 0x13FD94u;
label_13fd94:
    // 0x13fd94: 0x16400022
label_13fd98:
    if (ctx->pc == 0x13FD98u) {
        ctx->pc = 0x13FD98u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x13FD9Cu;
        goto label_13fd9c;
    }
    ctx->pc = 0x13FD94u;
    {
        const bool branch_taken_0x13fd94 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x13FD98u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x13fd94) {
            ctx->pc = 0x13FE20u;
            goto label_13fe20;
        }
    }
    ctx->pc = 0x13FD9Cu;
label_13fd9c:
    // 0x13fd9c: 0x8e020020
    ctx->pc = 0x13fd9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_13fda0:
    // 0x13fda0: 0x8e030014
    ctx->pc = 0x13fda0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_13fda4:
    // 0x13fda4: 0x8e270004
    ctx->pc = 0x13fda4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13fda8:
    // 0x13fda8: 0x50400001
label_13fdac:
    if (ctx->pc == 0x13FDACu) {
        ctx->pc = 0x13FDACu;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x13FDB0u;
        goto label_13fdb0;
    }
    ctx->pc = 0x13FDA8u;
    {
        const bool branch_taken_0x13fda8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x13fda8) {
            ctx->pc = 0x13FDACu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x13FDB0u;
            goto label_13fdb0;
        }
    }
    ctx->pc = 0x13FDB0u;
label_13fdb0:
    // 0x13fdb0: 0x621821
    ctx->pc = 0x13fdb0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_13fdb4:
    // 0x13fdb4: 0x8e240000
    ctx->pc = 0x13fdb4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13fdb8:
    // 0x13fdb8: 0x671823
    ctx->pc = 0x13fdb8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_13fdbc:
    // 0x13fdbc: 0x8e05001c
    ctx->pc = 0x13fdbcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_13fdc0:
    // 0x13fdc0: 0x62001a
    ctx->pc = 0x13fdc0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_13fdc4:
    // 0x13fdc4: 0x852023
    ctx->pc = 0x13fdc4u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_13fdc8:
    // 0x13fdc8: 0x3010
    ctx->pc = 0x13fdc8u;
    SET_GPR_U32(ctx, 6, ctx->hi);
label_13fdcc:
    // 0x13fdcc: 0x82001a
    ctx->pc = 0x13fdccu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_13fdd0:
    // 0x13fdd0: 0x1810
    ctx->pc = 0x13fdd0u;
    SET_GPR_U32(ctx, 3, ctx->hi);
label_13fdd4:
    // 0x13fdd4: 0x54c30008
label_13fdd8:
    if (ctx->pc == 0x13FDD8u) {
        ctx->pc = 0x13FDD8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->pc = 0x13FDDCu;
        goto label_13fddc;
    }
    ctx->pc = 0x13FDD4u;
    {
        const bool branch_taken_0x13fdd4 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 3));
        if (branch_taken_0x13fdd4) {
            ctx->pc = 0x13FDD8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->pc = 0x13FDF8u;
            goto label_13fdf8;
        }
    }
    ctx->pc = 0x13FDDCu;
label_13fddc:
    // 0x13fddc: 0xae060014
    ctx->pc = 0x13fddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 6));
label_13fde0:
    // 0x13fde0: 0x8e020010
    ctx->pc = 0x13fde0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_13fde4:
    // 0x13fde4: 0x8e230004
    ctx->pc = 0x13fde4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13fde8:
    // 0x13fde8: 0x431021
    ctx->pc = 0x13fde8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13fdec:
    // 0x13fdec: 0x10000007
label_13fdf0:
    if (ctx->pc == 0x13FDF0u) {
        ctx->pc = 0x13FDF0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x13FDF4u;
        goto label_13fdf4;
    }
    ctx->pc = 0x13FDECu;
    {
        const bool branch_taken_0x13fdec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13FDF0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x13fdec) {
            ctx->pc = 0x13FE0Cu;
            goto label_13fe0c;
        }
    }
    ctx->pc = 0x13FDF4u;
label_13fdf4:
    // 0x13fdf4: 0x0
    ctx->pc = 0x13fdf4u;
    // NOP
label_13fdf8:
    // 0x13fdf8: 0x50400006
label_13fdfc:
    if (ctx->pc == 0x13FDFCu) {
        ctx->pc = 0x13FDFCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x13FE00u;
        goto label_13fe00;
    }
    ctx->pc = 0x13FDF8u;
    {
        const bool branch_taken_0x13fdf8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x13fdf8) {
            ctx->pc = 0x13FDFCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->pc = 0x13FE14u;
            goto label_13fe14;
        }
    }
    ctx->pc = 0x13FE00u;
label_13fe00:
    // 0x13fe00: 0x8e04003c
    ctx->pc = 0x13fe00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_13fe04:
    // 0x13fe04: 0x40f809
label_13fe08:
    if (ctx->pc == 0x13FE08u) {
        ctx->pc = 0x13FE08u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x13FE0Cu;
        goto label_13fe0c;
    }
    ctx->pc = 0x13FE04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13FE0Cu);
        ctx->pc = 0x13FE08u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F9F0u: goto label_13f9f0;
            case 0x13F9F4u: goto label_13f9f4;
            case 0x13F9F8u: goto label_13f9f8;
            case 0x13F9FCu: goto label_13f9fc;
            case 0x13FA00u: goto label_13fa00;
            case 0x13FA04u: goto label_13fa04;
            case 0x13FA08u: goto label_13fa08;
            case 0x13FA0Cu: goto label_13fa0c;
            case 0x13FA10u: goto label_13fa10;
            case 0x13FA14u: goto label_13fa14;
            case 0x13FA18u: goto label_13fa18;
            case 0x13FA1Cu: goto label_13fa1c;
            case 0x13FA20u: goto label_13fa20;
            case 0x13FA24u: goto label_13fa24;
            case 0x13FA28u: goto label_13fa28;
            case 0x13FA2Cu: goto label_13fa2c;
            case 0x13FA30u: goto label_13fa30;
            case 0x13FA34u: goto label_13fa34;
            case 0x13FA38u: goto label_13fa38;
            case 0x13FA3Cu: goto label_13fa3c;
            case 0x13FA40u: goto label_13fa40;
            case 0x13FA44u: goto label_13fa44;
            case 0x13FA48u: goto label_13fa48;
            case 0x13FA4Cu: goto label_13fa4c;
            case 0x13FA50u: goto label_13fa50;
            case 0x13FA54u: goto label_13fa54;
            case 0x13FA58u: goto label_13fa58;
            case 0x13FA5Cu: goto label_13fa5c;
            case 0x13FA60u: goto label_13fa60;
            case 0x13FA64u: goto label_13fa64;
            case 0x13FA68u: goto label_13fa68;
            case 0x13FA6Cu: goto label_13fa6c;
            case 0x13FA70u: goto label_13fa70;
            case 0x13FA74u: goto label_13fa74;
            case 0x13FA78u: goto label_13fa78;
            case 0x13FA7Cu: goto label_13fa7c;
            case 0x13FA80u: goto label_13fa80;
            case 0x13FA84u: goto label_13fa84;
            case 0x13FA88u: goto label_13fa88;
            case 0x13FA8Cu: goto label_13fa8c;
            case 0x13FA90u: goto label_13fa90;
            case 0x13FA94u: goto label_13fa94;
            case 0x13FA98u: goto label_13fa98;
            case 0x13FA9Cu: goto label_13fa9c;
            case 0x13FAA0u: goto label_13faa0;
            case 0x13FAA4u: goto label_13faa4;
            case 0x13FAA8u: goto label_13faa8;
            case 0x13FAACu: goto label_13faac;
            case 0x13FAB0u: goto label_13fab0;
            case 0x13FAB4u: goto label_13fab4;
            case 0x13FAB8u: goto label_13fab8;
            case 0x13FABCu: goto label_13fabc;
            case 0x13FAC0u: goto label_13fac0;
            case 0x13FAC4u: goto label_13fac4;
            case 0x13FAC8u: goto label_13fac8;
            case 0x13FACCu: goto label_13facc;
            case 0x13FAD0u: goto label_13fad0;
            case 0x13FAD4u: goto label_13fad4;
            case 0x13FAD8u: goto label_13fad8;
            case 0x13FADCu: goto label_13fadc;
            case 0x13FAE0u: goto label_13fae0;
            case 0x13FAE4u: goto label_13fae4;
            case 0x13FAE8u: goto label_13fae8;
            case 0x13FAECu: goto label_13faec;
            case 0x13FAF0u: goto label_13faf0;
            case 0x13FAF4u: goto label_13faf4;
            case 0x13FAF8u: goto label_13faf8;
            case 0x13FAFCu: goto label_13fafc;
            case 0x13FB00u: goto label_13fb00;
            case 0x13FB04u: goto label_13fb04;
            case 0x13FB08u: goto label_13fb08;
            case 0x13FB0Cu: goto label_13fb0c;
            case 0x13FB10u: goto label_13fb10;
            case 0x13FB14u: goto label_13fb14;
            case 0x13FB18u: goto label_13fb18;
            case 0x13FB1Cu: goto label_13fb1c;
            case 0x13FB20u: goto label_13fb20;
            case 0x13FB24u: goto label_13fb24;
            case 0x13FB28u: goto label_13fb28;
            case 0x13FB2Cu: goto label_13fb2c;
            case 0x13FB30u: goto label_13fb30;
            case 0x13FB34u: goto label_13fb34;
            case 0x13FB38u: goto label_13fb38;
            case 0x13FB3Cu: goto label_13fb3c;
            case 0x13FB40u: goto label_13fb40;
            case 0x13FB44u: goto label_13fb44;
            case 0x13FB48u: goto label_13fb48;
            case 0x13FB4Cu: goto label_13fb4c;
            case 0x13FB50u: goto label_13fb50;
            case 0x13FB54u: goto label_13fb54;
            case 0x13FB58u: goto label_13fb58;
            case 0x13FB5Cu: goto label_13fb5c;
            case 0x13FB60u: goto label_13fb60;
            case 0x13FB64u: goto label_13fb64;
            case 0x13FB68u: goto label_13fb68;
            case 0x13FB6Cu: goto label_13fb6c;
            case 0x13FB70u: goto label_13fb70;
            case 0x13FB74u: goto label_13fb74;
            case 0x13FB78u: goto label_13fb78;
            case 0x13FB7Cu: goto label_13fb7c;
            case 0x13FB80u: goto label_13fb80;
            case 0x13FB84u: goto label_13fb84;
            case 0x13FB88u: goto label_13fb88;
            case 0x13FB8Cu: goto label_13fb8c;
            case 0x13FB90u: goto label_13fb90;
            case 0x13FB94u: goto label_13fb94;
            case 0x13FB98u: goto label_13fb98;
            case 0x13FB9Cu: goto label_13fb9c;
            case 0x13FBA0u: goto label_13fba0;
            case 0x13FBA4u: goto label_13fba4;
            case 0x13FBA8u: goto label_13fba8;
            case 0x13FBACu: goto label_13fbac;
            case 0x13FBB0u: goto label_13fbb0;
            case 0x13FBB4u: goto label_13fbb4;
            case 0x13FBB8u: goto label_13fbb8;
            case 0x13FBBCu: goto label_13fbbc;
            case 0x13FBC0u: goto label_13fbc0;
            case 0x13FBC4u: goto label_13fbc4;
            case 0x13FBC8u: goto label_13fbc8;
            case 0x13FBCCu: goto label_13fbcc;
            case 0x13FBD0u: goto label_13fbd0;
            case 0x13FBD4u: goto label_13fbd4;
            case 0x13FBD8u: goto label_13fbd8;
            case 0x13FBDCu: goto label_13fbdc;
            case 0x13FBE0u: goto label_13fbe0;
            case 0x13FBE4u: goto label_13fbe4;
            case 0x13FBE8u: goto label_13fbe8;
            case 0x13FBECu: goto label_13fbec;
            case 0x13FBF0u: goto label_13fbf0;
            case 0x13FBF4u: goto label_13fbf4;
            case 0x13FBF8u: goto label_13fbf8;
            case 0x13FBFCu: goto label_13fbfc;
            case 0x13FC00u: goto label_13fc00;
            case 0x13FC04u: goto label_13fc04;
            case 0x13FC08u: goto label_13fc08;
            case 0x13FC0Cu: goto label_13fc0c;
            case 0x13FC10u: goto label_13fc10;
            case 0x13FC14u: goto label_13fc14;
            case 0x13FC18u: goto label_13fc18;
            case 0x13FC1Cu: goto label_13fc1c;
            case 0x13FC20u: goto label_13fc20;
            case 0x13FC24u: goto label_13fc24;
            case 0x13FC28u: goto label_13fc28;
            case 0x13FC2Cu: goto label_13fc2c;
            case 0x13FC30u: goto label_13fc30;
            case 0x13FC34u: goto label_13fc34;
            case 0x13FC38u: goto label_13fc38;
            case 0x13FC3Cu: goto label_13fc3c;
            case 0x13FC40u: goto label_13fc40;
            case 0x13FC44u: goto label_13fc44;
            case 0x13FC48u: goto label_13fc48;
            case 0x13FC4Cu: goto label_13fc4c;
            case 0x13FC50u: goto label_13fc50;
            case 0x13FC54u: goto label_13fc54;
            case 0x13FC58u: goto label_13fc58;
            case 0x13FC5Cu: goto label_13fc5c;
            case 0x13FC60u: goto label_13fc60;
            case 0x13FC64u: goto label_13fc64;
            case 0x13FC68u: goto label_13fc68;
            case 0x13FC6Cu: goto label_13fc6c;
            case 0x13FC70u: goto label_13fc70;
            case 0x13FC74u: goto label_13fc74;
            case 0x13FC78u: goto label_13fc78;
            case 0x13FC7Cu: goto label_13fc7c;
            case 0x13FC80u: goto label_13fc80;
            case 0x13FC84u: goto label_13fc84;
            case 0x13FC88u: goto label_13fc88;
            case 0x13FC8Cu: goto label_13fc8c;
            case 0x13FC90u: goto label_13fc90;
            case 0x13FC94u: goto label_13fc94;
            case 0x13FC98u: goto label_13fc98;
            case 0x13FC9Cu: goto label_13fc9c;
            case 0x13FCA0u: goto label_13fca0;
            case 0x13FCA4u: goto label_13fca4;
            case 0x13FCA8u: goto label_13fca8;
            case 0x13FCACu: goto label_13fcac;
            case 0x13FCB0u: goto label_13fcb0;
            case 0x13FCB4u: goto label_13fcb4;
            case 0x13FCB8u: goto label_13fcb8;
            case 0x13FCBCu: goto label_13fcbc;
            case 0x13FCC0u: goto label_13fcc0;
            case 0x13FCC4u: goto label_13fcc4;
            case 0x13FCC8u: goto label_13fcc8;
            case 0x13FCCCu: goto label_13fccc;
            case 0x13FCD0u: goto label_13fcd0;
            case 0x13FCD4u: goto label_13fcd4;
            case 0x13FCD8u: goto label_13fcd8;
            case 0x13FCDCu: goto label_13fcdc;
            case 0x13FCE0u: goto label_13fce0;
            case 0x13FCE4u: goto label_13fce4;
            case 0x13FCE8u: goto label_13fce8;
            case 0x13FCECu: goto label_13fcec;
            case 0x13FCF0u: goto label_13fcf0;
            case 0x13FCF4u: goto label_13fcf4;
            case 0x13FCF8u: goto label_13fcf8;
            case 0x13FCFCu: goto label_13fcfc;
            case 0x13FD00u: goto label_13fd00;
            case 0x13FD04u: goto label_13fd04;
            case 0x13FD08u: goto label_13fd08;
            case 0x13FD0Cu: goto label_13fd0c;
            case 0x13FD10u: goto label_13fd10;
            case 0x13FD14u: goto label_13fd14;
            case 0x13FD18u: goto label_13fd18;
            case 0x13FD1Cu: goto label_13fd1c;
            case 0x13FD20u: goto label_13fd20;
            case 0x13FD24u: goto label_13fd24;
            case 0x13FD28u: goto label_13fd28;
            case 0x13FD2Cu: goto label_13fd2c;
            case 0x13FD30u: goto label_13fd30;
            case 0x13FD34u: goto label_13fd34;
            case 0x13FD38u: goto label_13fd38;
            case 0x13FD3Cu: goto label_13fd3c;
            case 0x13FD40u: goto label_13fd40;
            case 0x13FD44u: goto label_13fd44;
            case 0x13FD48u: goto label_13fd48;
            case 0x13FD4Cu: goto label_13fd4c;
            case 0x13FD50u: goto label_13fd50;
            case 0x13FD54u: goto label_13fd54;
            case 0x13FD58u: goto label_13fd58;
            case 0x13FD5Cu: goto label_13fd5c;
            case 0x13FD60u: goto label_13fd60;
            case 0x13FD64u: goto label_13fd64;
            case 0x13FD68u: goto label_13fd68;
            case 0x13FD6Cu: goto label_13fd6c;
            case 0x13FD70u: goto label_13fd70;
            case 0x13FD74u: goto label_13fd74;
            case 0x13FD78u: goto label_13fd78;
            case 0x13FD7Cu: goto label_13fd7c;
            case 0x13FD80u: goto label_13fd80;
            case 0x13FD84u: goto label_13fd84;
            case 0x13FD88u: goto label_13fd88;
            case 0x13FD8Cu: goto label_13fd8c;
            case 0x13FD90u: goto label_13fd90;
            case 0x13FD94u: goto label_13fd94;
            case 0x13FD98u: goto label_13fd98;
            case 0x13FD9Cu: goto label_13fd9c;
            case 0x13FDA0u: goto label_13fda0;
            case 0x13FDA4u: goto label_13fda4;
            case 0x13FDA8u: goto label_13fda8;
            case 0x13FDACu: goto label_13fdac;
            case 0x13FDB0u: goto label_13fdb0;
            case 0x13FDB4u: goto label_13fdb4;
            case 0x13FDB8u: goto label_13fdb8;
            case 0x13FDBCu: goto label_13fdbc;
            case 0x13FDC0u: goto label_13fdc0;
            case 0x13FDC4u: goto label_13fdc4;
            case 0x13FDC8u: goto label_13fdc8;
            case 0x13FDCCu: goto label_13fdcc;
            case 0x13FDD0u: goto label_13fdd0;
            case 0x13FDD4u: goto label_13fdd4;
            case 0x13FDD8u: goto label_13fdd8;
            case 0x13FDDCu: goto label_13fddc;
            case 0x13FDE0u: goto label_13fde0;
            case 0x13FDE4u: goto label_13fde4;
            case 0x13FDE8u: goto label_13fde8;
            case 0x13FDECu: goto label_13fdec;
            case 0x13FDF0u: goto label_13fdf0;
            case 0x13FDF4u: goto label_13fdf4;
            case 0x13FDF8u: goto label_13fdf8;
            case 0x13FDFCu: goto label_13fdfc;
            case 0x13FE00u: goto label_13fe00;
            case 0x13FE04u: goto label_13fe04;
            case 0x13FE08u: goto label_13fe08;
            case 0x13FE0Cu: goto label_13fe0c;
            case 0x13FE10u: goto label_13fe10;
            case 0x13FE14u: goto label_13fe14;
            case 0x13FE18u: goto label_13fe18;
            case 0x13FE1Cu: goto label_13fe1c;
            case 0x13FE20u: goto label_13fe20;
            case 0x13FE24u: goto label_13fe24;
            case 0x13FE28u: goto label_13fe28;
            case 0x13FE2Cu: goto label_13fe2c;
            case 0x13FE30u: goto label_13fe30;
            case 0x13FE34u: goto label_13fe34;
            case 0x13FE38u: goto label_13fe38;
            case 0x13FE3Cu: goto label_13fe3c;
            case 0x13FE40u: goto label_13fe40;
            case 0x13FE44u: goto label_13fe44;
            case 0x13FE48u: goto label_13fe48;
            case 0x13FE4Cu: goto label_13fe4c;
            case 0x13FE50u: goto label_13fe50;
            case 0x13FE54u: goto label_13fe54;
            case 0x13FE58u: goto label_13fe58;
            case 0x13FE5Cu: goto label_13fe5c;
            case 0x13FE60u: goto label_13fe60;
            case 0x13FE64u: goto label_13fe64;
            case 0x13FE68u: goto label_13fe68;
            case 0x13FE6Cu: goto label_13fe6c;
            case 0x13FE70u: goto label_13fe70;
            case 0x13FE74u: goto label_13fe74;
            case 0x13FE78u: goto label_13fe78;
            case 0x13FE7Cu: goto label_13fe7c;
            case 0x13FE80u: goto label_13fe80;
            case 0x13FE84u: goto label_13fe84;
            case 0x13FE88u: goto label_13fe88;
            case 0x13FE8Cu: goto label_13fe8c;
            case 0x13FE90u: goto label_13fe90;
            case 0x13FE94u: goto label_13fe94;
            case 0x13FE98u: goto label_13fe98;
            case 0x13FE9Cu: goto label_13fe9c;
            case 0x13FEA0u: goto label_13fea0;
            case 0x13FEA4u: goto label_13fea4;
            case 0x13FEA8u: goto label_13fea8;
            case 0x13FEACu: goto label_13feac;
            case 0x13FEB0u: goto label_13feb0;
            case 0x13FEB4u: goto label_13feb4;
            case 0x13FEB8u: goto label_13feb8;
            case 0x13FEBCu: goto label_13febc;
            case 0x13FEC0u: goto label_13fec0;
            case 0x13FEC4u: goto label_13fec4;
            case 0x13FEC8u: goto label_13fec8;
            case 0x13FECCu: goto label_13fecc;
            case 0x13FED0u: goto label_13fed0;
            case 0x13FED4u: goto label_13fed4;
            case 0x13FED8u: goto label_13fed8;
            case 0x13FEDCu: goto label_13fedc;
            case 0x13FEE0u: goto label_13fee0;
            case 0x13FEE4u: goto label_13fee4;
            case 0x13FEE8u: goto label_13fee8;
            case 0x13FEECu: goto label_13feec;
            case 0x13FEF0u: goto label_13fef0;
            case 0x13FEF4u: goto label_13fef4;
            case 0x13FEF8u: goto label_13fef8;
            case 0x13FEFCu: goto label_13fefc;
            case 0x13FF00u: goto label_13ff00;
            case 0x13FF04u: goto label_13ff04;
            case 0x13FF08u: goto label_13ff08;
            case 0x13FF0Cu: goto label_13ff0c;
            case 0x13FF10u: goto label_13ff10;
            case 0x13FF14u: goto label_13ff14;
            case 0x13FF18u: goto label_13ff18;
            case 0x13FF1Cu: goto label_13ff1c;
            case 0x13FF20u: goto label_13ff20;
            case 0x13FF24u: goto label_13ff24;
            case 0x13FF28u: goto label_13ff28;
            case 0x13FF2Cu: goto label_13ff2c;
            case 0x13FF30u: goto label_13ff30;
            case 0x13FF34u: goto label_13ff34;
            case 0x13FF38u: goto label_13ff38;
            case 0x13FF3Cu: goto label_13ff3c;
            case 0x13FF40u: goto label_13ff40;
            case 0x13FF44u: goto label_13ff44;
            case 0x13FF48u: goto label_13ff48;
            case 0x13FF4Cu: goto label_13ff4c;
            case 0x13FF50u: goto label_13ff50;
            case 0x13FF54u: goto label_13ff54;
            case 0x13FF58u: goto label_13ff58;
            case 0x13FF5Cu: goto label_13ff5c;
            case 0x13FF60u: goto label_13ff60;
            case 0x13FF64u: goto label_13ff64;
            case 0x13FF68u: goto label_13ff68;
            case 0x13FF6Cu: goto label_13ff6c;
            case 0x13FF70u: goto label_13ff70;
            case 0x13FF74u: goto label_13ff74;
            case 0x13FF78u: goto label_13ff78;
            case 0x13FF7Cu: goto label_13ff7c;
            case 0x13FF80u: goto label_13ff80;
            case 0x13FF84u: goto label_13ff84;
            case 0x13FF88u: goto label_13ff88;
            case 0x13FF8Cu: goto label_13ff8c;
            case 0x13FF90u: goto label_13ff90;
            case 0x13FF94u: goto label_13ff94;
            case 0x13FF98u: goto label_13ff98;
            case 0x13FF9Cu: goto label_13ff9c;
            case 0x13FFA0u: goto label_13ffa0;
            case 0x13FFA4u: goto label_13ffa4;
            case 0x13FFA8u: goto label_13ffa8;
            case 0x13FFACu: goto label_13ffac;
            case 0x13FFB0u: goto label_13ffb0;
            case 0x13FFB4u: goto label_13ffb4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13FE0Cu; }
            if (ctx->pc != 0x13FE0Cu) { return; }
        }
    }
    ctx->pc = 0x13FE0Cu;
label_13fe0c:
    // 0x13fe0c: 0x8e270004
    ctx->pc = 0x13fe0cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13fe10:
    // 0x13fe10: 0x8e020028
    ctx->pc = 0x13fe10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_13fe14:
    // 0x13fe14: 0x471023
    ctx->pc = 0x13fe14u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_13fe18:
    // 0x13fe18: 0x10000029
label_13fe1c:
    if (ctx->pc == 0x13FE1Cu) {
        ctx->pc = 0x13FE1Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->pc = 0x13FE20u;
        goto label_13fe20;
    }
    ctx->pc = 0x13FE18u;
    {
        const bool branch_taken_0x13fe18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13FE1Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        if (branch_taken_0x13fe18) {
            ctx->pc = 0x13FEC0u;
            goto label_13fec0;
        }
    }
    ctx->pc = 0x13FE20u;
label_13fe20:
    // 0x13fe20: 0x56420021
label_13fe24:
    if (ctx->pc == 0x13FE24u) {
        ctx->pc = 0x13FE24u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->pc = 0x13FE28u;
        goto label_13fe28;
    }
    ctx->pc = 0x13FE20u;
    {
        const bool branch_taken_0x13fe20 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x13fe20) {
            ctx->pc = 0x13FE24u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->pc = 0x13FEA8u;
            goto label_13fea8;
        }
    }
    ctx->pc = 0x13FE28u;
label_13fe28:
    // 0x13fe28: 0x8e020020
    ctx->pc = 0x13fe28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_13fe2c:
    // 0x13fe2c: 0x8e040018
    ctx->pc = 0x13fe2cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_13fe30:
    // 0x13fe30: 0x50400001
label_13fe34:
    if (ctx->pc == 0x13FE34u) {
        ctx->pc = 0x13FE34u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x13FE38u;
        goto label_13fe38;
    }
    ctx->pc = 0x13FE30u;
    {
        const bool branch_taken_0x13fe30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x13fe30) {
            ctx->pc = 0x13FE34u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x13FE38u;
            goto label_13fe38;
        }
    }
    ctx->pc = 0x13FE38u;
label_13fe38:
    // 0x13fe38: 0x8e250000
    ctx->pc = 0x13fe38u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13fe3c:
    // 0x13fe3c: 0x8e03001c
    ctx->pc = 0x13fe3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_13fe40:
    // 0x13fe40: 0x822021
    ctx->pc = 0x13fe40u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_13fe44:
    // 0x13fe44: 0x8e270004
    ctx->pc = 0x13fe44u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13fe48:
    // 0x13fe48: 0xa32823
    ctx->pc = 0x13fe48u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_13fe4c:
    // 0x13fe4c: 0x872023
    ctx->pc = 0x13fe4cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_13fe50:
    // 0x13fe50: 0x70a2001a
    ctx->pc = 0x13fe50u;
    { int32_t divisor = GPR_S32(ctx, 2); if (divisor != 0) { ctx->lo1 = (uint32_t)(GPR_S32(ctx, 5) / divisor); ctx->hi1 = (uint32_t)(GPR_S32(ctx, 2) % divisor); } else { ctx->lo1= (GPR_S32(ctx,5) < 0) ? 1 : -1; ctx->hi1=GPR_S32(ctx,2); } }
label_13fe54:
    // 0x13fe54: 0x82001a
    ctx->pc = 0x13fe54u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_13fe58:
    // 0x13fe58: 0x70001810
    ctx->pc = 0x13fe58u;
    SET_GPR_U32(ctx, 3, ctx->hi1);
label_13fe5c:
    // 0x13fe5c: 0x2010
    ctx->pc = 0x13fe5cu;
    SET_GPR_U32(ctx, 4, ctx->hi);
label_13fe60:
    // 0x13fe60: 0x54830007
label_13fe64:
    if (ctx->pc == 0x13FE64u) {
        ctx->pc = 0x13FE64u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->pc = 0x13FE68u;
        goto label_13fe68;
    }
    ctx->pc = 0x13FE60u;
    {
        const bool branch_taken_0x13fe60 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x13fe60) {
            ctx->pc = 0x13FE64u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->pc = 0x13FE80u;
            goto label_13fe80;
        }
    }
    ctx->pc = 0x13FE68u;
label_13fe68:
    // 0x13fe68: 0xae040018
    ctx->pc = 0x13fe68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
label_13fe6c:
    // 0x13fe6c: 0x8e02000c
    ctx->pc = 0x13fe6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13fe70:
    // 0x13fe70: 0x8e230004
    ctx->pc = 0x13fe70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13fe74:
    // 0x13fe74: 0x431021
    ctx->pc = 0x13fe74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13fe78:
    // 0x13fe78: 0x10000006
label_13fe7c:
    if (ctx->pc == 0x13FE7Cu) {
        ctx->pc = 0x13FE7Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x13FE80u;
        goto label_13fe80;
    }
    ctx->pc = 0x13FE78u;
    {
        const bool branch_taken_0x13fe78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13FE7Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x13fe78) {
            ctx->pc = 0x13FE94u;
            goto label_13fe94;
        }
    }
    ctx->pc = 0x13FE80u;
label_13fe80:
    // 0x13fe80: 0x50400006
label_13fe84:
    if (ctx->pc == 0x13FE84u) {
        ctx->pc = 0x13FE84u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->pc = 0x13FE88u;
        goto label_13fe88;
    }
    ctx->pc = 0x13FE80u;
    {
        const bool branch_taken_0x13fe80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x13fe80) {
            ctx->pc = 0x13FE84u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->pc = 0x13FE9Cu;
            goto label_13fe9c;
        }
    }
    ctx->pc = 0x13FE88u;
label_13fe88:
    // 0x13fe88: 0x8e04003c
    ctx->pc = 0x13fe88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_13fe8c:
    // 0x13fe8c: 0x40f809
label_13fe90:
    if (ctx->pc == 0x13FE90u) {
        ctx->pc = 0x13FE90u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x13FE94u;
        goto label_13fe94;
    }
    ctx->pc = 0x13FE8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13FE94u);
        ctx->pc = 0x13FE90u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F9F0u: goto label_13f9f0;
            case 0x13F9F4u: goto label_13f9f4;
            case 0x13F9F8u: goto label_13f9f8;
            case 0x13F9FCu: goto label_13f9fc;
            case 0x13FA00u: goto label_13fa00;
            case 0x13FA04u: goto label_13fa04;
            case 0x13FA08u: goto label_13fa08;
            case 0x13FA0Cu: goto label_13fa0c;
            case 0x13FA10u: goto label_13fa10;
            case 0x13FA14u: goto label_13fa14;
            case 0x13FA18u: goto label_13fa18;
            case 0x13FA1Cu: goto label_13fa1c;
            case 0x13FA20u: goto label_13fa20;
            case 0x13FA24u: goto label_13fa24;
            case 0x13FA28u: goto label_13fa28;
            case 0x13FA2Cu: goto label_13fa2c;
            case 0x13FA30u: goto label_13fa30;
            case 0x13FA34u: goto label_13fa34;
            case 0x13FA38u: goto label_13fa38;
            case 0x13FA3Cu: goto label_13fa3c;
            case 0x13FA40u: goto label_13fa40;
            case 0x13FA44u: goto label_13fa44;
            case 0x13FA48u: goto label_13fa48;
            case 0x13FA4Cu: goto label_13fa4c;
            case 0x13FA50u: goto label_13fa50;
            case 0x13FA54u: goto label_13fa54;
            case 0x13FA58u: goto label_13fa58;
            case 0x13FA5Cu: goto label_13fa5c;
            case 0x13FA60u: goto label_13fa60;
            case 0x13FA64u: goto label_13fa64;
            case 0x13FA68u: goto label_13fa68;
            case 0x13FA6Cu: goto label_13fa6c;
            case 0x13FA70u: goto label_13fa70;
            case 0x13FA74u: goto label_13fa74;
            case 0x13FA78u: goto label_13fa78;
            case 0x13FA7Cu: goto label_13fa7c;
            case 0x13FA80u: goto label_13fa80;
            case 0x13FA84u: goto label_13fa84;
            case 0x13FA88u: goto label_13fa88;
            case 0x13FA8Cu: goto label_13fa8c;
            case 0x13FA90u: goto label_13fa90;
            case 0x13FA94u: goto label_13fa94;
            case 0x13FA98u: goto label_13fa98;
            case 0x13FA9Cu: goto label_13fa9c;
            case 0x13FAA0u: goto label_13faa0;
            case 0x13FAA4u: goto label_13faa4;
            case 0x13FAA8u: goto label_13faa8;
            case 0x13FAACu: goto label_13faac;
            case 0x13FAB0u: goto label_13fab0;
            case 0x13FAB4u: goto label_13fab4;
            case 0x13FAB8u: goto label_13fab8;
            case 0x13FABCu: goto label_13fabc;
            case 0x13FAC0u: goto label_13fac0;
            case 0x13FAC4u: goto label_13fac4;
            case 0x13FAC8u: goto label_13fac8;
            case 0x13FACCu: goto label_13facc;
            case 0x13FAD0u: goto label_13fad0;
            case 0x13FAD4u: goto label_13fad4;
            case 0x13FAD8u: goto label_13fad8;
            case 0x13FADCu: goto label_13fadc;
            case 0x13FAE0u: goto label_13fae0;
            case 0x13FAE4u: goto label_13fae4;
            case 0x13FAE8u: goto label_13fae8;
            case 0x13FAECu: goto label_13faec;
            case 0x13FAF0u: goto label_13faf0;
            case 0x13FAF4u: goto label_13faf4;
            case 0x13FAF8u: goto label_13faf8;
            case 0x13FAFCu: goto label_13fafc;
            case 0x13FB00u: goto label_13fb00;
            case 0x13FB04u: goto label_13fb04;
            case 0x13FB08u: goto label_13fb08;
            case 0x13FB0Cu: goto label_13fb0c;
            case 0x13FB10u: goto label_13fb10;
            case 0x13FB14u: goto label_13fb14;
            case 0x13FB18u: goto label_13fb18;
            case 0x13FB1Cu: goto label_13fb1c;
            case 0x13FB20u: goto label_13fb20;
            case 0x13FB24u: goto label_13fb24;
            case 0x13FB28u: goto label_13fb28;
            case 0x13FB2Cu: goto label_13fb2c;
            case 0x13FB30u: goto label_13fb30;
            case 0x13FB34u: goto label_13fb34;
            case 0x13FB38u: goto label_13fb38;
            case 0x13FB3Cu: goto label_13fb3c;
            case 0x13FB40u: goto label_13fb40;
            case 0x13FB44u: goto label_13fb44;
            case 0x13FB48u: goto label_13fb48;
            case 0x13FB4Cu: goto label_13fb4c;
            case 0x13FB50u: goto label_13fb50;
            case 0x13FB54u: goto label_13fb54;
            case 0x13FB58u: goto label_13fb58;
            case 0x13FB5Cu: goto label_13fb5c;
            case 0x13FB60u: goto label_13fb60;
            case 0x13FB64u: goto label_13fb64;
            case 0x13FB68u: goto label_13fb68;
            case 0x13FB6Cu: goto label_13fb6c;
            case 0x13FB70u: goto label_13fb70;
            case 0x13FB74u: goto label_13fb74;
            case 0x13FB78u: goto label_13fb78;
            case 0x13FB7Cu: goto label_13fb7c;
            case 0x13FB80u: goto label_13fb80;
            case 0x13FB84u: goto label_13fb84;
            case 0x13FB88u: goto label_13fb88;
            case 0x13FB8Cu: goto label_13fb8c;
            case 0x13FB90u: goto label_13fb90;
            case 0x13FB94u: goto label_13fb94;
            case 0x13FB98u: goto label_13fb98;
            case 0x13FB9Cu: goto label_13fb9c;
            case 0x13FBA0u: goto label_13fba0;
            case 0x13FBA4u: goto label_13fba4;
            case 0x13FBA8u: goto label_13fba8;
            case 0x13FBACu: goto label_13fbac;
            case 0x13FBB0u: goto label_13fbb0;
            case 0x13FBB4u: goto label_13fbb4;
            case 0x13FBB8u: goto label_13fbb8;
            case 0x13FBBCu: goto label_13fbbc;
            case 0x13FBC0u: goto label_13fbc0;
            case 0x13FBC4u: goto label_13fbc4;
            case 0x13FBC8u: goto label_13fbc8;
            case 0x13FBCCu: goto label_13fbcc;
            case 0x13FBD0u: goto label_13fbd0;
            case 0x13FBD4u: goto label_13fbd4;
            case 0x13FBD8u: goto label_13fbd8;
            case 0x13FBDCu: goto label_13fbdc;
            case 0x13FBE0u: goto label_13fbe0;
            case 0x13FBE4u: goto label_13fbe4;
            case 0x13FBE8u: goto label_13fbe8;
            case 0x13FBECu: goto label_13fbec;
            case 0x13FBF0u: goto label_13fbf0;
            case 0x13FBF4u: goto label_13fbf4;
            case 0x13FBF8u: goto label_13fbf8;
            case 0x13FBFCu: goto label_13fbfc;
            case 0x13FC00u: goto label_13fc00;
            case 0x13FC04u: goto label_13fc04;
            case 0x13FC08u: goto label_13fc08;
            case 0x13FC0Cu: goto label_13fc0c;
            case 0x13FC10u: goto label_13fc10;
            case 0x13FC14u: goto label_13fc14;
            case 0x13FC18u: goto label_13fc18;
            case 0x13FC1Cu: goto label_13fc1c;
            case 0x13FC20u: goto label_13fc20;
            case 0x13FC24u: goto label_13fc24;
            case 0x13FC28u: goto label_13fc28;
            case 0x13FC2Cu: goto label_13fc2c;
            case 0x13FC30u: goto label_13fc30;
            case 0x13FC34u: goto label_13fc34;
            case 0x13FC38u: goto label_13fc38;
            case 0x13FC3Cu: goto label_13fc3c;
            case 0x13FC40u: goto label_13fc40;
            case 0x13FC44u: goto label_13fc44;
            case 0x13FC48u: goto label_13fc48;
            case 0x13FC4Cu: goto label_13fc4c;
            case 0x13FC50u: goto label_13fc50;
            case 0x13FC54u: goto label_13fc54;
            case 0x13FC58u: goto label_13fc58;
            case 0x13FC5Cu: goto label_13fc5c;
            case 0x13FC60u: goto label_13fc60;
            case 0x13FC64u: goto label_13fc64;
            case 0x13FC68u: goto label_13fc68;
            case 0x13FC6Cu: goto label_13fc6c;
            case 0x13FC70u: goto label_13fc70;
            case 0x13FC74u: goto label_13fc74;
            case 0x13FC78u: goto label_13fc78;
            case 0x13FC7Cu: goto label_13fc7c;
            case 0x13FC80u: goto label_13fc80;
            case 0x13FC84u: goto label_13fc84;
            case 0x13FC88u: goto label_13fc88;
            case 0x13FC8Cu: goto label_13fc8c;
            case 0x13FC90u: goto label_13fc90;
            case 0x13FC94u: goto label_13fc94;
            case 0x13FC98u: goto label_13fc98;
            case 0x13FC9Cu: goto label_13fc9c;
            case 0x13FCA0u: goto label_13fca0;
            case 0x13FCA4u: goto label_13fca4;
            case 0x13FCA8u: goto label_13fca8;
            case 0x13FCACu: goto label_13fcac;
            case 0x13FCB0u: goto label_13fcb0;
            case 0x13FCB4u: goto label_13fcb4;
            case 0x13FCB8u: goto label_13fcb8;
            case 0x13FCBCu: goto label_13fcbc;
            case 0x13FCC0u: goto label_13fcc0;
            case 0x13FCC4u: goto label_13fcc4;
            case 0x13FCC8u: goto label_13fcc8;
            case 0x13FCCCu: goto label_13fccc;
            case 0x13FCD0u: goto label_13fcd0;
            case 0x13FCD4u: goto label_13fcd4;
            case 0x13FCD8u: goto label_13fcd8;
            case 0x13FCDCu: goto label_13fcdc;
            case 0x13FCE0u: goto label_13fce0;
            case 0x13FCE4u: goto label_13fce4;
            case 0x13FCE8u: goto label_13fce8;
            case 0x13FCECu: goto label_13fcec;
            case 0x13FCF0u: goto label_13fcf0;
            case 0x13FCF4u: goto label_13fcf4;
            case 0x13FCF8u: goto label_13fcf8;
            case 0x13FCFCu: goto label_13fcfc;
            case 0x13FD00u: goto label_13fd00;
            case 0x13FD04u: goto label_13fd04;
            case 0x13FD08u: goto label_13fd08;
            case 0x13FD0Cu: goto label_13fd0c;
            case 0x13FD10u: goto label_13fd10;
            case 0x13FD14u: goto label_13fd14;
            case 0x13FD18u: goto label_13fd18;
            case 0x13FD1Cu: goto label_13fd1c;
            case 0x13FD20u: goto label_13fd20;
            case 0x13FD24u: goto label_13fd24;
            case 0x13FD28u: goto label_13fd28;
            case 0x13FD2Cu: goto label_13fd2c;
            case 0x13FD30u: goto label_13fd30;
            case 0x13FD34u: goto label_13fd34;
            case 0x13FD38u: goto label_13fd38;
            case 0x13FD3Cu: goto label_13fd3c;
            case 0x13FD40u: goto label_13fd40;
            case 0x13FD44u: goto label_13fd44;
            case 0x13FD48u: goto label_13fd48;
            case 0x13FD4Cu: goto label_13fd4c;
            case 0x13FD50u: goto label_13fd50;
            case 0x13FD54u: goto label_13fd54;
            case 0x13FD58u: goto label_13fd58;
            case 0x13FD5Cu: goto label_13fd5c;
            case 0x13FD60u: goto label_13fd60;
            case 0x13FD64u: goto label_13fd64;
            case 0x13FD68u: goto label_13fd68;
            case 0x13FD6Cu: goto label_13fd6c;
            case 0x13FD70u: goto label_13fd70;
            case 0x13FD74u: goto label_13fd74;
            case 0x13FD78u: goto label_13fd78;
            case 0x13FD7Cu: goto label_13fd7c;
            case 0x13FD80u: goto label_13fd80;
            case 0x13FD84u: goto label_13fd84;
            case 0x13FD88u: goto label_13fd88;
            case 0x13FD8Cu: goto label_13fd8c;
            case 0x13FD90u: goto label_13fd90;
            case 0x13FD94u: goto label_13fd94;
            case 0x13FD98u: goto label_13fd98;
            case 0x13FD9Cu: goto label_13fd9c;
            case 0x13FDA0u: goto label_13fda0;
            case 0x13FDA4u: goto label_13fda4;
            case 0x13FDA8u: goto label_13fda8;
            case 0x13FDACu: goto label_13fdac;
            case 0x13FDB0u: goto label_13fdb0;
            case 0x13FDB4u: goto label_13fdb4;
            case 0x13FDB8u: goto label_13fdb8;
            case 0x13FDBCu: goto label_13fdbc;
            case 0x13FDC0u: goto label_13fdc0;
            case 0x13FDC4u: goto label_13fdc4;
            case 0x13FDC8u: goto label_13fdc8;
            case 0x13FDCCu: goto label_13fdcc;
            case 0x13FDD0u: goto label_13fdd0;
            case 0x13FDD4u: goto label_13fdd4;
            case 0x13FDD8u: goto label_13fdd8;
            case 0x13FDDCu: goto label_13fddc;
            case 0x13FDE0u: goto label_13fde0;
            case 0x13FDE4u: goto label_13fde4;
            case 0x13FDE8u: goto label_13fde8;
            case 0x13FDECu: goto label_13fdec;
            case 0x13FDF0u: goto label_13fdf0;
            case 0x13FDF4u: goto label_13fdf4;
            case 0x13FDF8u: goto label_13fdf8;
            case 0x13FDFCu: goto label_13fdfc;
            case 0x13FE00u: goto label_13fe00;
            case 0x13FE04u: goto label_13fe04;
            case 0x13FE08u: goto label_13fe08;
            case 0x13FE0Cu: goto label_13fe0c;
            case 0x13FE10u: goto label_13fe10;
            case 0x13FE14u: goto label_13fe14;
            case 0x13FE18u: goto label_13fe18;
            case 0x13FE1Cu: goto label_13fe1c;
            case 0x13FE20u: goto label_13fe20;
            case 0x13FE24u: goto label_13fe24;
            case 0x13FE28u: goto label_13fe28;
            case 0x13FE2Cu: goto label_13fe2c;
            case 0x13FE30u: goto label_13fe30;
            case 0x13FE34u: goto label_13fe34;
            case 0x13FE38u: goto label_13fe38;
            case 0x13FE3Cu: goto label_13fe3c;
            case 0x13FE40u: goto label_13fe40;
            case 0x13FE44u: goto label_13fe44;
            case 0x13FE48u: goto label_13fe48;
            case 0x13FE4Cu: goto label_13fe4c;
            case 0x13FE50u: goto label_13fe50;
            case 0x13FE54u: goto label_13fe54;
            case 0x13FE58u: goto label_13fe58;
            case 0x13FE5Cu: goto label_13fe5c;
            case 0x13FE60u: goto label_13fe60;
            case 0x13FE64u: goto label_13fe64;
            case 0x13FE68u: goto label_13fe68;
            case 0x13FE6Cu: goto label_13fe6c;
            case 0x13FE70u: goto label_13fe70;
            case 0x13FE74u: goto label_13fe74;
            case 0x13FE78u: goto label_13fe78;
            case 0x13FE7Cu: goto label_13fe7c;
            case 0x13FE80u: goto label_13fe80;
            case 0x13FE84u: goto label_13fe84;
            case 0x13FE88u: goto label_13fe88;
            case 0x13FE8Cu: goto label_13fe8c;
            case 0x13FE90u: goto label_13fe90;
            case 0x13FE94u: goto label_13fe94;
            case 0x13FE98u: goto label_13fe98;
            case 0x13FE9Cu: goto label_13fe9c;
            case 0x13FEA0u: goto label_13fea0;
            case 0x13FEA4u: goto label_13fea4;
            case 0x13FEA8u: goto label_13fea8;
            case 0x13FEACu: goto label_13feac;
            case 0x13FEB0u: goto label_13feb0;
            case 0x13FEB4u: goto label_13feb4;
            case 0x13FEB8u: goto label_13feb8;
            case 0x13FEBCu: goto label_13febc;
            case 0x13FEC0u: goto label_13fec0;
            case 0x13FEC4u: goto label_13fec4;
            case 0x13FEC8u: goto label_13fec8;
            case 0x13FECCu: goto label_13fecc;
            case 0x13FED0u: goto label_13fed0;
            case 0x13FED4u: goto label_13fed4;
            case 0x13FED8u: goto label_13fed8;
            case 0x13FEDCu: goto label_13fedc;
            case 0x13FEE0u: goto label_13fee0;
            case 0x13FEE4u: goto label_13fee4;
            case 0x13FEE8u: goto label_13fee8;
            case 0x13FEECu: goto label_13feec;
            case 0x13FEF0u: goto label_13fef0;
            case 0x13FEF4u: goto label_13fef4;
            case 0x13FEF8u: goto label_13fef8;
            case 0x13FEFCu: goto label_13fefc;
            case 0x13FF00u: goto label_13ff00;
            case 0x13FF04u: goto label_13ff04;
            case 0x13FF08u: goto label_13ff08;
            case 0x13FF0Cu: goto label_13ff0c;
            case 0x13FF10u: goto label_13ff10;
            case 0x13FF14u: goto label_13ff14;
            case 0x13FF18u: goto label_13ff18;
            case 0x13FF1Cu: goto label_13ff1c;
            case 0x13FF20u: goto label_13ff20;
            case 0x13FF24u: goto label_13ff24;
            case 0x13FF28u: goto label_13ff28;
            case 0x13FF2Cu: goto label_13ff2c;
            case 0x13FF30u: goto label_13ff30;
            case 0x13FF34u: goto label_13ff34;
            case 0x13FF38u: goto label_13ff38;
            case 0x13FF3Cu: goto label_13ff3c;
            case 0x13FF40u: goto label_13ff40;
            case 0x13FF44u: goto label_13ff44;
            case 0x13FF48u: goto label_13ff48;
            case 0x13FF4Cu: goto label_13ff4c;
            case 0x13FF50u: goto label_13ff50;
            case 0x13FF54u: goto label_13ff54;
            case 0x13FF58u: goto label_13ff58;
            case 0x13FF5Cu: goto label_13ff5c;
            case 0x13FF60u: goto label_13ff60;
            case 0x13FF64u: goto label_13ff64;
            case 0x13FF68u: goto label_13ff68;
            case 0x13FF6Cu: goto label_13ff6c;
            case 0x13FF70u: goto label_13ff70;
            case 0x13FF74u: goto label_13ff74;
            case 0x13FF78u: goto label_13ff78;
            case 0x13FF7Cu: goto label_13ff7c;
            case 0x13FF80u: goto label_13ff80;
            case 0x13FF84u: goto label_13ff84;
            case 0x13FF88u: goto label_13ff88;
            case 0x13FF8Cu: goto label_13ff8c;
            case 0x13FF90u: goto label_13ff90;
            case 0x13FF94u: goto label_13ff94;
            case 0x13FF98u: goto label_13ff98;
            case 0x13FF9Cu: goto label_13ff9c;
            case 0x13FFA0u: goto label_13ffa0;
            case 0x13FFA4u: goto label_13ffa4;
            case 0x13FFA8u: goto label_13ffa8;
            case 0x13FFACu: goto label_13ffac;
            case 0x13FFB0u: goto label_13ffb0;
            case 0x13FFB4u: goto label_13ffb4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13FE94u; }
            if (ctx->pc != 0x13FE94u) { return; }
        }
    }
    ctx->pc = 0x13FE94u;
label_13fe94:
    // 0x13fe94: 0x8e270004
    ctx->pc = 0x13fe94u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13fe98:
    // 0x13fe98: 0x8e020030
    ctx->pc = 0x13fe98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_13fe9c:
    // 0x13fe9c: 0x471023
    ctx->pc = 0x13fe9cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_13fea0:
    // 0x13fea0: 0x10000007
label_13fea4:
    if (ctx->pc == 0x13FEA4u) {
        ctx->pc = 0x13FEA4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->pc = 0x13FEA8u;
        goto label_13fea8;
    }
    ctx->pc = 0x13FEA0u;
    {
        const bool branch_taken_0x13fea0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13FEA4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        if (branch_taken_0x13fea0) {
            ctx->pc = 0x13FEC0u;
            goto label_13fec0;
        }
    }
    ctx->pc = 0x13FEA8u;
label_13fea8:
    // 0x13fea8: 0xae200000
    ctx->pc = 0x13fea8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_13feac:
    // 0x13feac: 0x10400004
label_13feb0:
    if (ctx->pc == 0x13FEB0u) {
        ctx->pc = 0x13FEB0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x13FEB4u;
        goto label_13feb4;
    }
    ctx->pc = 0x13FEACu;
    {
        const bool branch_taken_0x13feac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13FEB0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x13feac) {
            ctx->pc = 0x13FEC0u;
            goto label_13fec0;
        }
    }
    ctx->pc = 0x13FEB4u;
label_13feb4:
    // 0x13feb4: 0x8e04003c
    ctx->pc = 0x13feb4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_13feb8:
    // 0x13feb8: 0x40f809
label_13febc:
    if (ctx->pc == 0x13FEBCu) {
        ctx->pc = 0x13FEBCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x13FEC0u;
        goto label_13fec0;
    }
    ctx->pc = 0x13FEB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13FEC0u);
        ctx->pc = 0x13FEBCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F9F0u: goto label_13f9f0;
            case 0x13F9F4u: goto label_13f9f4;
            case 0x13F9F8u: goto label_13f9f8;
            case 0x13F9FCu: goto label_13f9fc;
            case 0x13FA00u: goto label_13fa00;
            case 0x13FA04u: goto label_13fa04;
            case 0x13FA08u: goto label_13fa08;
            case 0x13FA0Cu: goto label_13fa0c;
            case 0x13FA10u: goto label_13fa10;
            case 0x13FA14u: goto label_13fa14;
            case 0x13FA18u: goto label_13fa18;
            case 0x13FA1Cu: goto label_13fa1c;
            case 0x13FA20u: goto label_13fa20;
            case 0x13FA24u: goto label_13fa24;
            case 0x13FA28u: goto label_13fa28;
            case 0x13FA2Cu: goto label_13fa2c;
            case 0x13FA30u: goto label_13fa30;
            case 0x13FA34u: goto label_13fa34;
            case 0x13FA38u: goto label_13fa38;
            case 0x13FA3Cu: goto label_13fa3c;
            case 0x13FA40u: goto label_13fa40;
            case 0x13FA44u: goto label_13fa44;
            case 0x13FA48u: goto label_13fa48;
            case 0x13FA4Cu: goto label_13fa4c;
            case 0x13FA50u: goto label_13fa50;
            case 0x13FA54u: goto label_13fa54;
            case 0x13FA58u: goto label_13fa58;
            case 0x13FA5Cu: goto label_13fa5c;
            case 0x13FA60u: goto label_13fa60;
            case 0x13FA64u: goto label_13fa64;
            case 0x13FA68u: goto label_13fa68;
            case 0x13FA6Cu: goto label_13fa6c;
            case 0x13FA70u: goto label_13fa70;
            case 0x13FA74u: goto label_13fa74;
            case 0x13FA78u: goto label_13fa78;
            case 0x13FA7Cu: goto label_13fa7c;
            case 0x13FA80u: goto label_13fa80;
            case 0x13FA84u: goto label_13fa84;
            case 0x13FA88u: goto label_13fa88;
            case 0x13FA8Cu: goto label_13fa8c;
            case 0x13FA90u: goto label_13fa90;
            case 0x13FA94u: goto label_13fa94;
            case 0x13FA98u: goto label_13fa98;
            case 0x13FA9Cu: goto label_13fa9c;
            case 0x13FAA0u: goto label_13faa0;
            case 0x13FAA4u: goto label_13faa4;
            case 0x13FAA8u: goto label_13faa8;
            case 0x13FAACu: goto label_13faac;
            case 0x13FAB0u: goto label_13fab0;
            case 0x13FAB4u: goto label_13fab4;
            case 0x13FAB8u: goto label_13fab8;
            case 0x13FABCu: goto label_13fabc;
            case 0x13FAC0u: goto label_13fac0;
            case 0x13FAC4u: goto label_13fac4;
            case 0x13FAC8u: goto label_13fac8;
            case 0x13FACCu: goto label_13facc;
            case 0x13FAD0u: goto label_13fad0;
            case 0x13FAD4u: goto label_13fad4;
            case 0x13FAD8u: goto label_13fad8;
            case 0x13FADCu: goto label_13fadc;
            case 0x13FAE0u: goto label_13fae0;
            case 0x13FAE4u: goto label_13fae4;
            case 0x13FAE8u: goto label_13fae8;
            case 0x13FAECu: goto label_13faec;
            case 0x13FAF0u: goto label_13faf0;
            case 0x13FAF4u: goto label_13faf4;
            case 0x13FAF8u: goto label_13faf8;
            case 0x13FAFCu: goto label_13fafc;
            case 0x13FB00u: goto label_13fb00;
            case 0x13FB04u: goto label_13fb04;
            case 0x13FB08u: goto label_13fb08;
            case 0x13FB0Cu: goto label_13fb0c;
            case 0x13FB10u: goto label_13fb10;
            case 0x13FB14u: goto label_13fb14;
            case 0x13FB18u: goto label_13fb18;
            case 0x13FB1Cu: goto label_13fb1c;
            case 0x13FB20u: goto label_13fb20;
            case 0x13FB24u: goto label_13fb24;
            case 0x13FB28u: goto label_13fb28;
            case 0x13FB2Cu: goto label_13fb2c;
            case 0x13FB30u: goto label_13fb30;
            case 0x13FB34u: goto label_13fb34;
            case 0x13FB38u: goto label_13fb38;
            case 0x13FB3Cu: goto label_13fb3c;
            case 0x13FB40u: goto label_13fb40;
            case 0x13FB44u: goto label_13fb44;
            case 0x13FB48u: goto label_13fb48;
            case 0x13FB4Cu: goto label_13fb4c;
            case 0x13FB50u: goto label_13fb50;
            case 0x13FB54u: goto label_13fb54;
            case 0x13FB58u: goto label_13fb58;
            case 0x13FB5Cu: goto label_13fb5c;
            case 0x13FB60u: goto label_13fb60;
            case 0x13FB64u: goto label_13fb64;
            case 0x13FB68u: goto label_13fb68;
            case 0x13FB6Cu: goto label_13fb6c;
            case 0x13FB70u: goto label_13fb70;
            case 0x13FB74u: goto label_13fb74;
            case 0x13FB78u: goto label_13fb78;
            case 0x13FB7Cu: goto label_13fb7c;
            case 0x13FB80u: goto label_13fb80;
            case 0x13FB84u: goto label_13fb84;
            case 0x13FB88u: goto label_13fb88;
            case 0x13FB8Cu: goto label_13fb8c;
            case 0x13FB90u: goto label_13fb90;
            case 0x13FB94u: goto label_13fb94;
            case 0x13FB98u: goto label_13fb98;
            case 0x13FB9Cu: goto label_13fb9c;
            case 0x13FBA0u: goto label_13fba0;
            case 0x13FBA4u: goto label_13fba4;
            case 0x13FBA8u: goto label_13fba8;
            case 0x13FBACu: goto label_13fbac;
            case 0x13FBB0u: goto label_13fbb0;
            case 0x13FBB4u: goto label_13fbb4;
            case 0x13FBB8u: goto label_13fbb8;
            case 0x13FBBCu: goto label_13fbbc;
            case 0x13FBC0u: goto label_13fbc0;
            case 0x13FBC4u: goto label_13fbc4;
            case 0x13FBC8u: goto label_13fbc8;
            case 0x13FBCCu: goto label_13fbcc;
            case 0x13FBD0u: goto label_13fbd0;
            case 0x13FBD4u: goto label_13fbd4;
            case 0x13FBD8u: goto label_13fbd8;
            case 0x13FBDCu: goto label_13fbdc;
            case 0x13FBE0u: goto label_13fbe0;
            case 0x13FBE4u: goto label_13fbe4;
            case 0x13FBE8u: goto label_13fbe8;
            case 0x13FBECu: goto label_13fbec;
            case 0x13FBF0u: goto label_13fbf0;
            case 0x13FBF4u: goto label_13fbf4;
            case 0x13FBF8u: goto label_13fbf8;
            case 0x13FBFCu: goto label_13fbfc;
            case 0x13FC00u: goto label_13fc00;
            case 0x13FC04u: goto label_13fc04;
            case 0x13FC08u: goto label_13fc08;
            case 0x13FC0Cu: goto label_13fc0c;
            case 0x13FC10u: goto label_13fc10;
            case 0x13FC14u: goto label_13fc14;
            case 0x13FC18u: goto label_13fc18;
            case 0x13FC1Cu: goto label_13fc1c;
            case 0x13FC20u: goto label_13fc20;
            case 0x13FC24u: goto label_13fc24;
            case 0x13FC28u: goto label_13fc28;
            case 0x13FC2Cu: goto label_13fc2c;
            case 0x13FC30u: goto label_13fc30;
            case 0x13FC34u: goto label_13fc34;
            case 0x13FC38u: goto label_13fc38;
            case 0x13FC3Cu: goto label_13fc3c;
            case 0x13FC40u: goto label_13fc40;
            case 0x13FC44u: goto label_13fc44;
            case 0x13FC48u: goto label_13fc48;
            case 0x13FC4Cu: goto label_13fc4c;
            case 0x13FC50u: goto label_13fc50;
            case 0x13FC54u: goto label_13fc54;
            case 0x13FC58u: goto label_13fc58;
            case 0x13FC5Cu: goto label_13fc5c;
            case 0x13FC60u: goto label_13fc60;
            case 0x13FC64u: goto label_13fc64;
            case 0x13FC68u: goto label_13fc68;
            case 0x13FC6Cu: goto label_13fc6c;
            case 0x13FC70u: goto label_13fc70;
            case 0x13FC74u: goto label_13fc74;
            case 0x13FC78u: goto label_13fc78;
            case 0x13FC7Cu: goto label_13fc7c;
            case 0x13FC80u: goto label_13fc80;
            case 0x13FC84u: goto label_13fc84;
            case 0x13FC88u: goto label_13fc88;
            case 0x13FC8Cu: goto label_13fc8c;
            case 0x13FC90u: goto label_13fc90;
            case 0x13FC94u: goto label_13fc94;
            case 0x13FC98u: goto label_13fc98;
            case 0x13FC9Cu: goto label_13fc9c;
            case 0x13FCA0u: goto label_13fca0;
            case 0x13FCA4u: goto label_13fca4;
            case 0x13FCA8u: goto label_13fca8;
            case 0x13FCACu: goto label_13fcac;
            case 0x13FCB0u: goto label_13fcb0;
            case 0x13FCB4u: goto label_13fcb4;
            case 0x13FCB8u: goto label_13fcb8;
            case 0x13FCBCu: goto label_13fcbc;
            case 0x13FCC0u: goto label_13fcc0;
            case 0x13FCC4u: goto label_13fcc4;
            case 0x13FCC8u: goto label_13fcc8;
            case 0x13FCCCu: goto label_13fccc;
            case 0x13FCD0u: goto label_13fcd0;
            case 0x13FCD4u: goto label_13fcd4;
            case 0x13FCD8u: goto label_13fcd8;
            case 0x13FCDCu: goto label_13fcdc;
            case 0x13FCE0u: goto label_13fce0;
            case 0x13FCE4u: goto label_13fce4;
            case 0x13FCE8u: goto label_13fce8;
            case 0x13FCECu: goto label_13fcec;
            case 0x13FCF0u: goto label_13fcf0;
            case 0x13FCF4u: goto label_13fcf4;
            case 0x13FCF8u: goto label_13fcf8;
            case 0x13FCFCu: goto label_13fcfc;
            case 0x13FD00u: goto label_13fd00;
            case 0x13FD04u: goto label_13fd04;
            case 0x13FD08u: goto label_13fd08;
            case 0x13FD0Cu: goto label_13fd0c;
            case 0x13FD10u: goto label_13fd10;
            case 0x13FD14u: goto label_13fd14;
            case 0x13FD18u: goto label_13fd18;
            case 0x13FD1Cu: goto label_13fd1c;
            case 0x13FD20u: goto label_13fd20;
            case 0x13FD24u: goto label_13fd24;
            case 0x13FD28u: goto label_13fd28;
            case 0x13FD2Cu: goto label_13fd2c;
            case 0x13FD30u: goto label_13fd30;
            case 0x13FD34u: goto label_13fd34;
            case 0x13FD38u: goto label_13fd38;
            case 0x13FD3Cu: goto label_13fd3c;
            case 0x13FD40u: goto label_13fd40;
            case 0x13FD44u: goto label_13fd44;
            case 0x13FD48u: goto label_13fd48;
            case 0x13FD4Cu: goto label_13fd4c;
            case 0x13FD50u: goto label_13fd50;
            case 0x13FD54u: goto label_13fd54;
            case 0x13FD58u: goto label_13fd58;
            case 0x13FD5Cu: goto label_13fd5c;
            case 0x13FD60u: goto label_13fd60;
            case 0x13FD64u: goto label_13fd64;
            case 0x13FD68u: goto label_13fd68;
            case 0x13FD6Cu: goto label_13fd6c;
            case 0x13FD70u: goto label_13fd70;
            case 0x13FD74u: goto label_13fd74;
            case 0x13FD78u: goto label_13fd78;
            case 0x13FD7Cu: goto label_13fd7c;
            case 0x13FD80u: goto label_13fd80;
            case 0x13FD84u: goto label_13fd84;
            case 0x13FD88u: goto label_13fd88;
            case 0x13FD8Cu: goto label_13fd8c;
            case 0x13FD90u: goto label_13fd90;
            case 0x13FD94u: goto label_13fd94;
            case 0x13FD98u: goto label_13fd98;
            case 0x13FD9Cu: goto label_13fd9c;
            case 0x13FDA0u: goto label_13fda0;
            case 0x13FDA4u: goto label_13fda4;
            case 0x13FDA8u: goto label_13fda8;
            case 0x13FDACu: goto label_13fdac;
            case 0x13FDB0u: goto label_13fdb0;
            case 0x13FDB4u: goto label_13fdb4;
            case 0x13FDB8u: goto label_13fdb8;
            case 0x13FDBCu: goto label_13fdbc;
            case 0x13FDC0u: goto label_13fdc0;
            case 0x13FDC4u: goto label_13fdc4;
            case 0x13FDC8u: goto label_13fdc8;
            case 0x13FDCCu: goto label_13fdcc;
            case 0x13FDD0u: goto label_13fdd0;
            case 0x13FDD4u: goto label_13fdd4;
            case 0x13FDD8u: goto label_13fdd8;
            case 0x13FDDCu: goto label_13fddc;
            case 0x13FDE0u: goto label_13fde0;
            case 0x13FDE4u: goto label_13fde4;
            case 0x13FDE8u: goto label_13fde8;
            case 0x13FDECu: goto label_13fdec;
            case 0x13FDF0u: goto label_13fdf0;
            case 0x13FDF4u: goto label_13fdf4;
            case 0x13FDF8u: goto label_13fdf8;
            case 0x13FDFCu: goto label_13fdfc;
            case 0x13FE00u: goto label_13fe00;
            case 0x13FE04u: goto label_13fe04;
            case 0x13FE08u: goto label_13fe08;
            case 0x13FE0Cu: goto label_13fe0c;
            case 0x13FE10u: goto label_13fe10;
            case 0x13FE14u: goto label_13fe14;
            case 0x13FE18u: goto label_13fe18;
            case 0x13FE1Cu: goto label_13fe1c;
            case 0x13FE20u: goto label_13fe20;
            case 0x13FE24u: goto label_13fe24;
            case 0x13FE28u: goto label_13fe28;
            case 0x13FE2Cu: goto label_13fe2c;
            case 0x13FE30u: goto label_13fe30;
            case 0x13FE34u: goto label_13fe34;
            case 0x13FE38u: goto label_13fe38;
            case 0x13FE3Cu: goto label_13fe3c;
            case 0x13FE40u: goto label_13fe40;
            case 0x13FE44u: goto label_13fe44;
            case 0x13FE48u: goto label_13fe48;
            case 0x13FE4Cu: goto label_13fe4c;
            case 0x13FE50u: goto label_13fe50;
            case 0x13FE54u: goto label_13fe54;
            case 0x13FE58u: goto label_13fe58;
            case 0x13FE5Cu: goto label_13fe5c;
            case 0x13FE60u: goto label_13fe60;
            case 0x13FE64u: goto label_13fe64;
            case 0x13FE68u: goto label_13fe68;
            case 0x13FE6Cu: goto label_13fe6c;
            case 0x13FE70u: goto label_13fe70;
            case 0x13FE74u: goto label_13fe74;
            case 0x13FE78u: goto label_13fe78;
            case 0x13FE7Cu: goto label_13fe7c;
            case 0x13FE80u: goto label_13fe80;
            case 0x13FE84u: goto label_13fe84;
            case 0x13FE88u: goto label_13fe88;
            case 0x13FE8Cu: goto label_13fe8c;
            case 0x13FE90u: goto label_13fe90;
            case 0x13FE94u: goto label_13fe94;
            case 0x13FE98u: goto label_13fe98;
            case 0x13FE9Cu: goto label_13fe9c;
            case 0x13FEA0u: goto label_13fea0;
            case 0x13FEA4u: goto label_13fea4;
            case 0x13FEA8u: goto label_13fea8;
            case 0x13FEACu: goto label_13feac;
            case 0x13FEB0u: goto label_13feb0;
            case 0x13FEB4u: goto label_13feb4;
            case 0x13FEB8u: goto label_13feb8;
            case 0x13FEBCu: goto label_13febc;
            case 0x13FEC0u: goto label_13fec0;
            case 0x13FEC4u: goto label_13fec4;
            case 0x13FEC8u: goto label_13fec8;
            case 0x13FECCu: goto label_13fecc;
            case 0x13FED0u: goto label_13fed0;
            case 0x13FED4u: goto label_13fed4;
            case 0x13FED8u: goto label_13fed8;
            case 0x13FEDCu: goto label_13fedc;
            case 0x13FEE0u: goto label_13fee0;
            case 0x13FEE4u: goto label_13fee4;
            case 0x13FEE8u: goto label_13fee8;
            case 0x13FEECu: goto label_13feec;
            case 0x13FEF0u: goto label_13fef0;
            case 0x13FEF4u: goto label_13fef4;
            case 0x13FEF8u: goto label_13fef8;
            case 0x13FEFCu: goto label_13fefc;
            case 0x13FF00u: goto label_13ff00;
            case 0x13FF04u: goto label_13ff04;
            case 0x13FF08u: goto label_13ff08;
            case 0x13FF0Cu: goto label_13ff0c;
            case 0x13FF10u: goto label_13ff10;
            case 0x13FF14u: goto label_13ff14;
            case 0x13FF18u: goto label_13ff18;
            case 0x13FF1Cu: goto label_13ff1c;
            case 0x13FF20u: goto label_13ff20;
            case 0x13FF24u: goto label_13ff24;
            case 0x13FF28u: goto label_13ff28;
            case 0x13FF2Cu: goto label_13ff2c;
            case 0x13FF30u: goto label_13ff30;
            case 0x13FF34u: goto label_13ff34;
            case 0x13FF38u: goto label_13ff38;
            case 0x13FF3Cu: goto label_13ff3c;
            case 0x13FF40u: goto label_13ff40;
            case 0x13FF44u: goto label_13ff44;
            case 0x13FF48u: goto label_13ff48;
            case 0x13FF4Cu: goto label_13ff4c;
            case 0x13FF50u: goto label_13ff50;
            case 0x13FF54u: goto label_13ff54;
            case 0x13FF58u: goto label_13ff58;
            case 0x13FF5Cu: goto label_13ff5c;
            case 0x13FF60u: goto label_13ff60;
            case 0x13FF64u: goto label_13ff64;
            case 0x13FF68u: goto label_13ff68;
            case 0x13FF6Cu: goto label_13ff6c;
            case 0x13FF70u: goto label_13ff70;
            case 0x13FF74u: goto label_13ff74;
            case 0x13FF78u: goto label_13ff78;
            case 0x13FF7Cu: goto label_13ff7c;
            case 0x13FF80u: goto label_13ff80;
            case 0x13FF84u: goto label_13ff84;
            case 0x13FF88u: goto label_13ff88;
            case 0x13FF8Cu: goto label_13ff8c;
            case 0x13FF90u: goto label_13ff90;
            case 0x13FF94u: goto label_13ff94;
            case 0x13FF98u: goto label_13ff98;
            case 0x13FF9Cu: goto label_13ff9c;
            case 0x13FFA0u: goto label_13ffa0;
            case 0x13FFA4u: goto label_13ffa4;
            case 0x13FFA8u: goto label_13ffa8;
            case 0x13FFACu: goto label_13ffac;
            case 0x13FFB0u: goto label_13ffb0;
            case 0x13FFB4u: goto label_13ffb4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13FEC0u; }
            if (ctx->pc != 0x13FEC0u) { return; }
        }
    }
    ctx->pc = 0x13FEC0u;
label_13fec0:
    // 0x13fec0: 0xdfb00000
    ctx->pc = 0x13fec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13fec4:
    // 0x13fec4: 0xdfb10008
    ctx->pc = 0x13fec4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13fec8:
    // 0x13fec8: 0xdfb20010
    ctx->pc = 0x13fec8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13fecc:
    // 0x13fecc: 0xdfbf0018
    ctx->pc = 0x13feccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13fed0:
    // 0x13fed0: 0x804fc9c
label_13fed4:
    if (ctx->pc == 0x13FED4u) {
        ctx->pc = 0x13FED4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x13FED8u;
        goto label_13fed8;
    }
    ctx->pc = 0x13FED0u;
    ctx->pc = 0x13FED4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x13F270u;
    sub_0013F270_0x13f270(rdram, ctx, runtime); return;
    ctx->pc = 0x13FED8u;
label_13fed8:
    // 0x13fed8: 0xdfb00000
    ctx->pc = 0x13fed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13fedc:
    // 0x13fedc: 0xdfb10008
    ctx->pc = 0x13fedcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13fee0:
    // 0x13fee0: 0xdfb20010
    ctx->pc = 0x13fee0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13fee4:
    // 0x13fee4: 0xdfbf0018
    ctx->pc = 0x13fee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13fee8:
    // 0x13fee8: 0x3e00008
label_13feec:
    if (ctx->pc == 0x13FEECu) {
        ctx->pc = 0x13FEECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x13FEF0u;
        goto label_13fef0;
    }
    ctx->pc = 0x13FEE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FEECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F9F0u: goto label_13f9f0;
            case 0x13F9F4u: goto label_13f9f4;
            case 0x13F9F8u: goto label_13f9f8;
            case 0x13F9FCu: goto label_13f9fc;
            case 0x13FA00u: goto label_13fa00;
            case 0x13FA04u: goto label_13fa04;
            case 0x13FA08u: goto label_13fa08;
            case 0x13FA0Cu: goto label_13fa0c;
            case 0x13FA10u: goto label_13fa10;
            case 0x13FA14u: goto label_13fa14;
            case 0x13FA18u: goto label_13fa18;
            case 0x13FA1Cu: goto label_13fa1c;
            case 0x13FA20u: goto label_13fa20;
            case 0x13FA24u: goto label_13fa24;
            case 0x13FA28u: goto label_13fa28;
            case 0x13FA2Cu: goto label_13fa2c;
            case 0x13FA30u: goto label_13fa30;
            case 0x13FA34u: goto label_13fa34;
            case 0x13FA38u: goto label_13fa38;
            case 0x13FA3Cu: goto label_13fa3c;
            case 0x13FA40u: goto label_13fa40;
            case 0x13FA44u: goto label_13fa44;
            case 0x13FA48u: goto label_13fa48;
            case 0x13FA4Cu: goto label_13fa4c;
            case 0x13FA50u: goto label_13fa50;
            case 0x13FA54u: goto label_13fa54;
            case 0x13FA58u: goto label_13fa58;
            case 0x13FA5Cu: goto label_13fa5c;
            case 0x13FA60u: goto label_13fa60;
            case 0x13FA64u: goto label_13fa64;
            case 0x13FA68u: goto label_13fa68;
            case 0x13FA6Cu: goto label_13fa6c;
            case 0x13FA70u: goto label_13fa70;
            case 0x13FA74u: goto label_13fa74;
            case 0x13FA78u: goto label_13fa78;
            case 0x13FA7Cu: goto label_13fa7c;
            case 0x13FA80u: goto label_13fa80;
            case 0x13FA84u: goto label_13fa84;
            case 0x13FA88u: goto label_13fa88;
            case 0x13FA8Cu: goto label_13fa8c;
            case 0x13FA90u: goto label_13fa90;
            case 0x13FA94u: goto label_13fa94;
            case 0x13FA98u: goto label_13fa98;
            case 0x13FA9Cu: goto label_13fa9c;
            case 0x13FAA0u: goto label_13faa0;
            case 0x13FAA4u: goto label_13faa4;
            case 0x13FAA8u: goto label_13faa8;
            case 0x13FAACu: goto label_13faac;
            case 0x13FAB0u: goto label_13fab0;
            case 0x13FAB4u: goto label_13fab4;
            case 0x13FAB8u: goto label_13fab8;
            case 0x13FABCu: goto label_13fabc;
            case 0x13FAC0u: goto label_13fac0;
            case 0x13FAC4u: goto label_13fac4;
            case 0x13FAC8u: goto label_13fac8;
            case 0x13FACCu: goto label_13facc;
            case 0x13FAD0u: goto label_13fad0;
            case 0x13FAD4u: goto label_13fad4;
            case 0x13FAD8u: goto label_13fad8;
            case 0x13FADCu: goto label_13fadc;
            case 0x13FAE0u: goto label_13fae0;
            case 0x13FAE4u: goto label_13fae4;
            case 0x13FAE8u: goto label_13fae8;
            case 0x13FAECu: goto label_13faec;
            case 0x13FAF0u: goto label_13faf0;
            case 0x13FAF4u: goto label_13faf4;
            case 0x13FAF8u: goto label_13faf8;
            case 0x13FAFCu: goto label_13fafc;
            case 0x13FB00u: goto label_13fb00;
            case 0x13FB04u: goto label_13fb04;
            case 0x13FB08u: goto label_13fb08;
            case 0x13FB0Cu: goto label_13fb0c;
            case 0x13FB10u: goto label_13fb10;
            case 0x13FB14u: goto label_13fb14;
            case 0x13FB18u: goto label_13fb18;
            case 0x13FB1Cu: goto label_13fb1c;
            case 0x13FB20u: goto label_13fb20;
            case 0x13FB24u: goto label_13fb24;
            case 0x13FB28u: goto label_13fb28;
            case 0x13FB2Cu: goto label_13fb2c;
            case 0x13FB30u: goto label_13fb30;
            case 0x13FB34u: goto label_13fb34;
            case 0x13FB38u: goto label_13fb38;
            case 0x13FB3Cu: goto label_13fb3c;
            case 0x13FB40u: goto label_13fb40;
            case 0x13FB44u: goto label_13fb44;
            case 0x13FB48u: goto label_13fb48;
            case 0x13FB4Cu: goto label_13fb4c;
            case 0x13FB50u: goto label_13fb50;
            case 0x13FB54u: goto label_13fb54;
            case 0x13FB58u: goto label_13fb58;
            case 0x13FB5Cu: goto label_13fb5c;
            case 0x13FB60u: goto label_13fb60;
            case 0x13FB64u: goto label_13fb64;
            case 0x13FB68u: goto label_13fb68;
            case 0x13FB6Cu: goto label_13fb6c;
            case 0x13FB70u: goto label_13fb70;
            case 0x13FB74u: goto label_13fb74;
            case 0x13FB78u: goto label_13fb78;
            case 0x13FB7Cu: goto label_13fb7c;
            case 0x13FB80u: goto label_13fb80;
            case 0x13FB84u: goto label_13fb84;
            case 0x13FB88u: goto label_13fb88;
            case 0x13FB8Cu: goto label_13fb8c;
            case 0x13FB90u: goto label_13fb90;
            case 0x13FB94u: goto label_13fb94;
            case 0x13FB98u: goto label_13fb98;
            case 0x13FB9Cu: goto label_13fb9c;
            case 0x13FBA0u: goto label_13fba0;
            case 0x13FBA4u: goto label_13fba4;
            case 0x13FBA8u: goto label_13fba8;
            case 0x13FBACu: goto label_13fbac;
            case 0x13FBB0u: goto label_13fbb0;
            case 0x13FBB4u: goto label_13fbb4;
            case 0x13FBB8u: goto label_13fbb8;
            case 0x13FBBCu: goto label_13fbbc;
            case 0x13FBC0u: goto label_13fbc0;
            case 0x13FBC4u: goto label_13fbc4;
            case 0x13FBC8u: goto label_13fbc8;
            case 0x13FBCCu: goto label_13fbcc;
            case 0x13FBD0u: goto label_13fbd0;
            case 0x13FBD4u: goto label_13fbd4;
            case 0x13FBD8u: goto label_13fbd8;
            case 0x13FBDCu: goto label_13fbdc;
            case 0x13FBE0u: goto label_13fbe0;
            case 0x13FBE4u: goto label_13fbe4;
            case 0x13FBE8u: goto label_13fbe8;
            case 0x13FBECu: goto label_13fbec;
            case 0x13FBF0u: goto label_13fbf0;
            case 0x13FBF4u: goto label_13fbf4;
            case 0x13FBF8u: goto label_13fbf8;
            case 0x13FBFCu: goto label_13fbfc;
            case 0x13FC00u: goto label_13fc00;
            case 0x13FC04u: goto label_13fc04;
            case 0x13FC08u: goto label_13fc08;
            case 0x13FC0Cu: goto label_13fc0c;
            case 0x13FC10u: goto label_13fc10;
            case 0x13FC14u: goto label_13fc14;
            case 0x13FC18u: goto label_13fc18;
            case 0x13FC1Cu: goto label_13fc1c;
            case 0x13FC20u: goto label_13fc20;
            case 0x13FC24u: goto label_13fc24;
            case 0x13FC28u: goto label_13fc28;
            case 0x13FC2Cu: goto label_13fc2c;
            case 0x13FC30u: goto label_13fc30;
            case 0x13FC34u: goto label_13fc34;
            case 0x13FC38u: goto label_13fc38;
            case 0x13FC3Cu: goto label_13fc3c;
            case 0x13FC40u: goto label_13fc40;
            case 0x13FC44u: goto label_13fc44;
            case 0x13FC48u: goto label_13fc48;
            case 0x13FC4Cu: goto label_13fc4c;
            case 0x13FC50u: goto label_13fc50;
            case 0x13FC54u: goto label_13fc54;
            case 0x13FC58u: goto label_13fc58;
            case 0x13FC5Cu: goto label_13fc5c;
            case 0x13FC60u: goto label_13fc60;
            case 0x13FC64u: goto label_13fc64;
            case 0x13FC68u: goto label_13fc68;
            case 0x13FC6Cu: goto label_13fc6c;
            case 0x13FC70u: goto label_13fc70;
            case 0x13FC74u: goto label_13fc74;
            case 0x13FC78u: goto label_13fc78;
            case 0x13FC7Cu: goto label_13fc7c;
            case 0x13FC80u: goto label_13fc80;
            case 0x13FC84u: goto label_13fc84;
            case 0x13FC88u: goto label_13fc88;
            case 0x13FC8Cu: goto label_13fc8c;
            case 0x13FC90u: goto label_13fc90;
            case 0x13FC94u: goto label_13fc94;
            case 0x13FC98u: goto label_13fc98;
            case 0x13FC9Cu: goto label_13fc9c;
            case 0x13FCA0u: goto label_13fca0;
            case 0x13FCA4u: goto label_13fca4;
            case 0x13FCA8u: goto label_13fca8;
            case 0x13FCACu: goto label_13fcac;
            case 0x13FCB0u: goto label_13fcb0;
            case 0x13FCB4u: goto label_13fcb4;
            case 0x13FCB8u: goto label_13fcb8;
            case 0x13FCBCu: goto label_13fcbc;
            case 0x13FCC0u: goto label_13fcc0;
            case 0x13FCC4u: goto label_13fcc4;
            case 0x13FCC8u: goto label_13fcc8;
            case 0x13FCCCu: goto label_13fccc;
            case 0x13FCD0u: goto label_13fcd0;
            case 0x13FCD4u: goto label_13fcd4;
            case 0x13FCD8u: goto label_13fcd8;
            case 0x13FCDCu: goto label_13fcdc;
            case 0x13FCE0u: goto label_13fce0;
            case 0x13FCE4u: goto label_13fce4;
            case 0x13FCE8u: goto label_13fce8;
            case 0x13FCECu: goto label_13fcec;
            case 0x13FCF0u: goto label_13fcf0;
            case 0x13FCF4u: goto label_13fcf4;
            case 0x13FCF8u: goto label_13fcf8;
            case 0x13FCFCu: goto label_13fcfc;
            case 0x13FD00u: goto label_13fd00;
            case 0x13FD04u: goto label_13fd04;
            case 0x13FD08u: goto label_13fd08;
            case 0x13FD0Cu: goto label_13fd0c;
            case 0x13FD10u: goto label_13fd10;
            case 0x13FD14u: goto label_13fd14;
            case 0x13FD18u: goto label_13fd18;
            case 0x13FD1Cu: goto label_13fd1c;
            case 0x13FD20u: goto label_13fd20;
            case 0x13FD24u: goto label_13fd24;
            case 0x13FD28u: goto label_13fd28;
            case 0x13FD2Cu: goto label_13fd2c;
            case 0x13FD30u: goto label_13fd30;
            case 0x13FD34u: goto label_13fd34;
            case 0x13FD38u: goto label_13fd38;
            case 0x13FD3Cu: goto label_13fd3c;
            case 0x13FD40u: goto label_13fd40;
            case 0x13FD44u: goto label_13fd44;
            case 0x13FD48u: goto label_13fd48;
            case 0x13FD4Cu: goto label_13fd4c;
            case 0x13FD50u: goto label_13fd50;
            case 0x13FD54u: goto label_13fd54;
            case 0x13FD58u: goto label_13fd58;
            case 0x13FD5Cu: goto label_13fd5c;
            case 0x13FD60u: goto label_13fd60;
            case 0x13FD64u: goto label_13fd64;
            case 0x13FD68u: goto label_13fd68;
            case 0x13FD6Cu: goto label_13fd6c;
            case 0x13FD70u: goto label_13fd70;
            case 0x13FD74u: goto label_13fd74;
            case 0x13FD78u: goto label_13fd78;
            case 0x13FD7Cu: goto label_13fd7c;
            case 0x13FD80u: goto label_13fd80;
            case 0x13FD84u: goto label_13fd84;
            case 0x13FD88u: goto label_13fd88;
            case 0x13FD8Cu: goto label_13fd8c;
            case 0x13FD90u: goto label_13fd90;
            case 0x13FD94u: goto label_13fd94;
            case 0x13FD98u: goto label_13fd98;
            case 0x13FD9Cu: goto label_13fd9c;
            case 0x13FDA0u: goto label_13fda0;
            case 0x13FDA4u: goto label_13fda4;
            case 0x13FDA8u: goto label_13fda8;
            case 0x13FDACu: goto label_13fdac;
            case 0x13FDB0u: goto label_13fdb0;
            case 0x13FDB4u: goto label_13fdb4;
            case 0x13FDB8u: goto label_13fdb8;
            case 0x13FDBCu: goto label_13fdbc;
            case 0x13FDC0u: goto label_13fdc0;
            case 0x13FDC4u: goto label_13fdc4;
            case 0x13FDC8u: goto label_13fdc8;
            case 0x13FDCCu: goto label_13fdcc;
            case 0x13FDD0u: goto label_13fdd0;
            case 0x13FDD4u: goto label_13fdd4;
            case 0x13FDD8u: goto label_13fdd8;
            case 0x13FDDCu: goto label_13fddc;
            case 0x13FDE0u: goto label_13fde0;
            case 0x13FDE4u: goto label_13fde4;
            case 0x13FDE8u: goto label_13fde8;
            case 0x13FDECu: goto label_13fdec;
            case 0x13FDF0u: goto label_13fdf0;
            case 0x13FDF4u: goto label_13fdf4;
            case 0x13FDF8u: goto label_13fdf8;
            case 0x13FDFCu: goto label_13fdfc;
            case 0x13FE00u: goto label_13fe00;
            case 0x13FE04u: goto label_13fe04;
            case 0x13FE08u: goto label_13fe08;
            case 0x13FE0Cu: goto label_13fe0c;
            case 0x13FE10u: goto label_13fe10;
            case 0x13FE14u: goto label_13fe14;
            case 0x13FE18u: goto label_13fe18;
            case 0x13FE1Cu: goto label_13fe1c;
            case 0x13FE20u: goto label_13fe20;
            case 0x13FE24u: goto label_13fe24;
            case 0x13FE28u: goto label_13fe28;
            case 0x13FE2Cu: goto label_13fe2c;
            case 0x13FE30u: goto label_13fe30;
            case 0x13FE34u: goto label_13fe34;
            case 0x13FE38u: goto label_13fe38;
            case 0x13FE3Cu: goto label_13fe3c;
            case 0x13FE40u: goto label_13fe40;
            case 0x13FE44u: goto label_13fe44;
            case 0x13FE48u: goto label_13fe48;
            case 0x13FE4Cu: goto label_13fe4c;
            case 0x13FE50u: goto label_13fe50;
            case 0x13FE54u: goto label_13fe54;
            case 0x13FE58u: goto label_13fe58;
            case 0x13FE5Cu: goto label_13fe5c;
            case 0x13FE60u: goto label_13fe60;
            case 0x13FE64u: goto label_13fe64;
            case 0x13FE68u: goto label_13fe68;
            case 0x13FE6Cu: goto label_13fe6c;
            case 0x13FE70u: goto label_13fe70;
            case 0x13FE74u: goto label_13fe74;
            case 0x13FE78u: goto label_13fe78;
            case 0x13FE7Cu: goto label_13fe7c;
            case 0x13FE80u: goto label_13fe80;
            case 0x13FE84u: goto label_13fe84;
            case 0x13FE88u: goto label_13fe88;
            case 0x13FE8Cu: goto label_13fe8c;
            case 0x13FE90u: goto label_13fe90;
            case 0x13FE94u: goto label_13fe94;
            case 0x13FE98u: goto label_13fe98;
            case 0x13FE9Cu: goto label_13fe9c;
            case 0x13FEA0u: goto label_13fea0;
            case 0x13FEA4u: goto label_13fea4;
            case 0x13FEA8u: goto label_13fea8;
            case 0x13FEACu: goto label_13feac;
            case 0x13FEB0u: goto label_13feb0;
            case 0x13FEB4u: goto label_13feb4;
            case 0x13FEB8u: goto label_13feb8;
            case 0x13FEBCu: goto label_13febc;
            case 0x13FEC0u: goto label_13fec0;
            case 0x13FEC4u: goto label_13fec4;
            case 0x13FEC8u: goto label_13fec8;
            case 0x13FECCu: goto label_13fecc;
            case 0x13FED0u: goto label_13fed0;
            case 0x13FED4u: goto label_13fed4;
            case 0x13FED8u: goto label_13fed8;
            case 0x13FEDCu: goto label_13fedc;
            case 0x13FEE0u: goto label_13fee0;
            case 0x13FEE4u: goto label_13fee4;
            case 0x13FEE8u: goto label_13fee8;
            case 0x13FEECu: goto label_13feec;
            case 0x13FEF0u: goto label_13fef0;
            case 0x13FEF4u: goto label_13fef4;
            case 0x13FEF8u: goto label_13fef8;
            case 0x13FEFCu: goto label_13fefc;
            case 0x13FF00u: goto label_13ff00;
            case 0x13FF04u: goto label_13ff04;
            case 0x13FF08u: goto label_13ff08;
            case 0x13FF0Cu: goto label_13ff0c;
            case 0x13FF10u: goto label_13ff10;
            case 0x13FF14u: goto label_13ff14;
            case 0x13FF18u: goto label_13ff18;
            case 0x13FF1Cu: goto label_13ff1c;
            case 0x13FF20u: goto label_13ff20;
            case 0x13FF24u: goto label_13ff24;
            case 0x13FF28u: goto label_13ff28;
            case 0x13FF2Cu: goto label_13ff2c;
            case 0x13FF30u: goto label_13ff30;
            case 0x13FF34u: goto label_13ff34;
            case 0x13FF38u: goto label_13ff38;
            case 0x13FF3Cu: goto label_13ff3c;
            case 0x13FF40u: goto label_13ff40;
            case 0x13FF44u: goto label_13ff44;
            case 0x13FF48u: goto label_13ff48;
            case 0x13FF4Cu: goto label_13ff4c;
            case 0x13FF50u: goto label_13ff50;
            case 0x13FF54u: goto label_13ff54;
            case 0x13FF58u: goto label_13ff58;
            case 0x13FF5Cu: goto label_13ff5c;
            case 0x13FF60u: goto label_13ff60;
            case 0x13FF64u: goto label_13ff64;
            case 0x13FF68u: goto label_13ff68;
            case 0x13FF6Cu: goto label_13ff6c;
            case 0x13FF70u: goto label_13ff70;
            case 0x13FF74u: goto label_13ff74;
            case 0x13FF78u: goto label_13ff78;
            case 0x13FF7Cu: goto label_13ff7c;
            case 0x13FF80u: goto label_13ff80;
            case 0x13FF84u: goto label_13ff84;
            case 0x13FF88u: goto label_13ff88;
            case 0x13FF8Cu: goto label_13ff8c;
            case 0x13FF90u: goto label_13ff90;
            case 0x13FF94u: goto label_13ff94;
            case 0x13FF98u: goto label_13ff98;
            case 0x13FF9Cu: goto label_13ff9c;
            case 0x13FFA0u: goto label_13ffa0;
            case 0x13FFA4u: goto label_13ffa4;
            case 0x13FFA8u: goto label_13ffa8;
            case 0x13FFACu: goto label_13ffac;
            case 0x13FFB0u: goto label_13ffb0;
            case 0x13FFB4u: goto label_13ffb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13FEF0u;
label_13fef0:
    // 0x13fef0: 0x27bdffd0
    ctx->pc = 0x13fef0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_13fef4:
    // 0x13fef4: 0xffb00000
    ctx->pc = 0x13fef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13fef8:
    // 0x13fef8: 0xa0802d
    ctx->pc = 0x13fef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13fefc:
    // 0x13fefc: 0xffb10008
    ctx->pc = 0x13fefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13ff00:
    // 0x13ff00: 0x80882d
    ctx->pc = 0x13ff00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13ff04:
    // 0x13ff04: 0xffb20010
    ctx->pc = 0x13ff04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_13ff08:
    // 0x13ff08: 0xc0902d
    ctx->pc = 0x13ff08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13ff0c:
    // 0x13ff0c: 0xffb30018
    ctx->pc = 0x13ff0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_13ff10:
    // 0x13ff10: 0xffbf0020
    ctx->pc = 0x13ff10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_13ff14:
    // 0x13ff14: 0xc04fc96
label_13ff18:
    if (ctx->pc == 0x13FF18u) {
        ctx->pc = 0x13FF18u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13FF1Cu;
        goto label_13ff1c;
    }
    ctx->pc = 0x13FF14u;
    SET_GPR_U32(ctx, 31, 0x13FF1Cu);
    ctx->pc = 0x13FF18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13F258u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F258_0x13f258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FF1Cu; }
    }
    if (ctx->pc != 0x13FF1Cu) { return; }
    ctx->pc = 0x13FF1Cu;
label_13ff1c:
    // 0x13ff1c: 0x16000008
label_13ff20:
    if (ctx->pc == 0x13FF20u) {
        ctx->pc = 0x13FF20u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x13FF24u;
        goto label_13ff24;
    }
    ctx->pc = 0x13FF1Cu;
    {
        const bool branch_taken_0x13ff1c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x13FF20u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x13ff1c) {
            ctx->pc = 0x13FF40u;
            goto label_13ff40;
        }
    }
    ctx->pc = 0x13FF24u;
label_13ff24:
    // 0x13ff24: 0x8e220014
    ctx->pc = 0x13ff24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_13ff28:
    // 0x13ff28: 0x8e230020
    ctx->pc = 0x13ff28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_13ff2c:
    // 0x13ff2c: 0x8e250024
    ctx->pc = 0x13ff2cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_13ff30:
    // 0x13ff30: 0x621823
    ctx->pc = 0x13ff30u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_13ff34:
    // 0x13ff34: 0x10000009
label_13ff38:
    if (ctx->pc == 0x13FF38u) {
        ctx->pc = 0x13FF38u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->pc = 0x13FF3Cu;
        goto label_13ff3c;
    }
    ctx->pc = 0x13FF34u;
    {
        const bool branch_taken_0x13ff34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13FF38u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 16)));
        if (branch_taken_0x13ff34) {
            ctx->pc = 0x13FF5Cu;
            goto label_13ff5c;
        }
    }
    ctx->pc = 0x13FF3Cu;
label_13ff3c:
    // 0x13ff3c: 0x0
    ctx->pc = 0x13ff3cu;
    // NOP
label_13ff40:
    // 0x13ff40: 0x5602000d
label_13ff44:
    if (ctx->pc == 0x13FF44u) {
        ctx->pc = 0x13FF44u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->pc = 0x13FF48u;
        goto label_13ff48;
    }
    ctx->pc = 0x13FF40u;
    {
        const bool branch_taken_0x13ff40 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        if (branch_taken_0x13ff40) {
            ctx->pc = 0x13FF44u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->pc = 0x13FF78u;
            goto label_13ff78;
        }
    }
    ctx->pc = 0x13FF48u;
label_13ff48:
    // 0x13ff48: 0x8e220018
    ctx->pc = 0x13ff48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_13ff4c:
    // 0x13ff4c: 0x8e230020
    ctx->pc = 0x13ff4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_13ff50:
    // 0x13ff50: 0x8e250024
    ctx->pc = 0x13ff50u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_13ff54:
    // 0x13ff54: 0x621823
    ctx->pc = 0x13ff54u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_13ff58:
    // 0x13ff58: 0x8e24000c
    ctx->pc = 0x13ff58u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_13ff5c:
    // 0x13ff5c: 0x658021
    ctx->pc = 0x13ff5cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_13ff60:
    // 0x13ff60: 0x90102a
    ctx->pc = 0x13ff60u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 16)));
label_13ff64:
    // 0x13ff64: 0x82800b
    ctx->pc = 0x13ff64u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 4));
label_13ff68:
    // 0x13ff68: 0x212182a
    ctx->pc = 0x13ff68u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
label_13ff6c:
    // 0x13ff6c: 0x10000007
label_13ff70:
    if (ctx->pc == 0x13FF70u) {
        ctx->pc = 0x13FF70u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 18));
        ctx->pc = 0x13FF74u;
        goto label_13ff74;
    }
    ctx->pc = 0x13FF6Cu;
    {
        const bool branch_taken_0x13ff6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13FF70u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 18));
        if (branch_taken_0x13ff6c) {
            ctx->pc = 0x13FF8Cu;
            goto label_13ff8c;
        }
    }
    ctx->pc = 0x13FF74u;
label_13ff74:
    // 0x13ff74: 0x0
    ctx->pc = 0x13ff74u;
    // NOP
label_13ff78:
    // 0x13ff78: 0x10400004
label_13ff7c:
    if (ctx->pc == 0x13FF7Cu) {
        ctx->pc = 0x13FF7Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13FF80u;
        goto label_13ff80;
    }
    ctx->pc = 0x13FF78u;
    {
        const bool branch_taken_0x13ff78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13FF7Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13ff78) {
            ctx->pc = 0x13FF8Cu;
            goto label_13ff8c;
        }
    }
    ctx->pc = 0x13FF80u;
label_13ff80:
    // 0x13ff80: 0x8e24003c
    ctx->pc = 0x13ff80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_13ff84:
    // 0x13ff84: 0x40f809
label_13ff88:
    if (ctx->pc == 0x13FF88u) {
        ctx->pc = 0x13FF88u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x13FF8Cu;
        goto label_13ff8c;
    }
    ctx->pc = 0x13FF84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13FF8Cu);
        ctx->pc = 0x13FF88u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F9F0u: goto label_13f9f0;
            case 0x13F9F4u: goto label_13f9f4;
            case 0x13F9F8u: goto label_13f9f8;
            case 0x13F9FCu: goto label_13f9fc;
            case 0x13FA00u: goto label_13fa00;
            case 0x13FA04u: goto label_13fa04;
            case 0x13FA08u: goto label_13fa08;
            case 0x13FA0Cu: goto label_13fa0c;
            case 0x13FA10u: goto label_13fa10;
            case 0x13FA14u: goto label_13fa14;
            case 0x13FA18u: goto label_13fa18;
            case 0x13FA1Cu: goto label_13fa1c;
            case 0x13FA20u: goto label_13fa20;
            case 0x13FA24u: goto label_13fa24;
            case 0x13FA28u: goto label_13fa28;
            case 0x13FA2Cu: goto label_13fa2c;
            case 0x13FA30u: goto label_13fa30;
            case 0x13FA34u: goto label_13fa34;
            case 0x13FA38u: goto label_13fa38;
            case 0x13FA3Cu: goto label_13fa3c;
            case 0x13FA40u: goto label_13fa40;
            case 0x13FA44u: goto label_13fa44;
            case 0x13FA48u: goto label_13fa48;
            case 0x13FA4Cu: goto label_13fa4c;
            case 0x13FA50u: goto label_13fa50;
            case 0x13FA54u: goto label_13fa54;
            case 0x13FA58u: goto label_13fa58;
            case 0x13FA5Cu: goto label_13fa5c;
            case 0x13FA60u: goto label_13fa60;
            case 0x13FA64u: goto label_13fa64;
            case 0x13FA68u: goto label_13fa68;
            case 0x13FA6Cu: goto label_13fa6c;
            case 0x13FA70u: goto label_13fa70;
            case 0x13FA74u: goto label_13fa74;
            case 0x13FA78u: goto label_13fa78;
            case 0x13FA7Cu: goto label_13fa7c;
            case 0x13FA80u: goto label_13fa80;
            case 0x13FA84u: goto label_13fa84;
            case 0x13FA88u: goto label_13fa88;
            case 0x13FA8Cu: goto label_13fa8c;
            case 0x13FA90u: goto label_13fa90;
            case 0x13FA94u: goto label_13fa94;
            case 0x13FA98u: goto label_13fa98;
            case 0x13FA9Cu: goto label_13fa9c;
            case 0x13FAA0u: goto label_13faa0;
            case 0x13FAA4u: goto label_13faa4;
            case 0x13FAA8u: goto label_13faa8;
            case 0x13FAACu: goto label_13faac;
            case 0x13FAB0u: goto label_13fab0;
            case 0x13FAB4u: goto label_13fab4;
            case 0x13FAB8u: goto label_13fab8;
            case 0x13FABCu: goto label_13fabc;
            case 0x13FAC0u: goto label_13fac0;
            case 0x13FAC4u: goto label_13fac4;
            case 0x13FAC8u: goto label_13fac8;
            case 0x13FACCu: goto label_13facc;
            case 0x13FAD0u: goto label_13fad0;
            case 0x13FAD4u: goto label_13fad4;
            case 0x13FAD8u: goto label_13fad8;
            case 0x13FADCu: goto label_13fadc;
            case 0x13FAE0u: goto label_13fae0;
            case 0x13FAE4u: goto label_13fae4;
            case 0x13FAE8u: goto label_13fae8;
            case 0x13FAECu: goto label_13faec;
            case 0x13FAF0u: goto label_13faf0;
            case 0x13FAF4u: goto label_13faf4;
            case 0x13FAF8u: goto label_13faf8;
            case 0x13FAFCu: goto label_13fafc;
            case 0x13FB00u: goto label_13fb00;
            case 0x13FB04u: goto label_13fb04;
            case 0x13FB08u: goto label_13fb08;
            case 0x13FB0Cu: goto label_13fb0c;
            case 0x13FB10u: goto label_13fb10;
            case 0x13FB14u: goto label_13fb14;
            case 0x13FB18u: goto label_13fb18;
            case 0x13FB1Cu: goto label_13fb1c;
            case 0x13FB20u: goto label_13fb20;
            case 0x13FB24u: goto label_13fb24;
            case 0x13FB28u: goto label_13fb28;
            case 0x13FB2Cu: goto label_13fb2c;
            case 0x13FB30u: goto label_13fb30;
            case 0x13FB34u: goto label_13fb34;
            case 0x13FB38u: goto label_13fb38;
            case 0x13FB3Cu: goto label_13fb3c;
            case 0x13FB40u: goto label_13fb40;
            case 0x13FB44u: goto label_13fb44;
            case 0x13FB48u: goto label_13fb48;
            case 0x13FB4Cu: goto label_13fb4c;
            case 0x13FB50u: goto label_13fb50;
            case 0x13FB54u: goto label_13fb54;
            case 0x13FB58u: goto label_13fb58;
            case 0x13FB5Cu: goto label_13fb5c;
            case 0x13FB60u: goto label_13fb60;
            case 0x13FB64u: goto label_13fb64;
            case 0x13FB68u: goto label_13fb68;
            case 0x13FB6Cu: goto label_13fb6c;
            case 0x13FB70u: goto label_13fb70;
            case 0x13FB74u: goto label_13fb74;
            case 0x13FB78u: goto label_13fb78;
            case 0x13FB7Cu: goto label_13fb7c;
            case 0x13FB80u: goto label_13fb80;
            case 0x13FB84u: goto label_13fb84;
            case 0x13FB88u: goto label_13fb88;
            case 0x13FB8Cu: goto label_13fb8c;
            case 0x13FB90u: goto label_13fb90;
            case 0x13FB94u: goto label_13fb94;
            case 0x13FB98u: goto label_13fb98;
            case 0x13FB9Cu: goto label_13fb9c;
            case 0x13FBA0u: goto label_13fba0;
            case 0x13FBA4u: goto label_13fba4;
            case 0x13FBA8u: goto label_13fba8;
            case 0x13FBACu: goto label_13fbac;
            case 0x13FBB0u: goto label_13fbb0;
            case 0x13FBB4u: goto label_13fbb4;
            case 0x13FBB8u: goto label_13fbb8;
            case 0x13FBBCu: goto label_13fbbc;
            case 0x13FBC0u: goto label_13fbc0;
            case 0x13FBC4u: goto label_13fbc4;
            case 0x13FBC8u: goto label_13fbc8;
            case 0x13FBCCu: goto label_13fbcc;
            case 0x13FBD0u: goto label_13fbd0;
            case 0x13FBD4u: goto label_13fbd4;
            case 0x13FBD8u: goto label_13fbd8;
            case 0x13FBDCu: goto label_13fbdc;
            case 0x13FBE0u: goto label_13fbe0;
            case 0x13FBE4u: goto label_13fbe4;
            case 0x13FBE8u: goto label_13fbe8;
            case 0x13FBECu: goto label_13fbec;
            case 0x13FBF0u: goto label_13fbf0;
            case 0x13FBF4u: goto label_13fbf4;
            case 0x13FBF8u: goto label_13fbf8;
            case 0x13FBFCu: goto label_13fbfc;
            case 0x13FC00u: goto label_13fc00;
            case 0x13FC04u: goto label_13fc04;
            case 0x13FC08u: goto label_13fc08;
            case 0x13FC0Cu: goto label_13fc0c;
            case 0x13FC10u: goto label_13fc10;
            case 0x13FC14u: goto label_13fc14;
            case 0x13FC18u: goto label_13fc18;
            case 0x13FC1Cu: goto label_13fc1c;
            case 0x13FC20u: goto label_13fc20;
            case 0x13FC24u: goto label_13fc24;
            case 0x13FC28u: goto label_13fc28;
            case 0x13FC2Cu: goto label_13fc2c;
            case 0x13FC30u: goto label_13fc30;
            case 0x13FC34u: goto label_13fc34;
            case 0x13FC38u: goto label_13fc38;
            case 0x13FC3Cu: goto label_13fc3c;
            case 0x13FC40u: goto label_13fc40;
            case 0x13FC44u: goto label_13fc44;
            case 0x13FC48u: goto label_13fc48;
            case 0x13FC4Cu: goto label_13fc4c;
            case 0x13FC50u: goto label_13fc50;
            case 0x13FC54u: goto label_13fc54;
            case 0x13FC58u: goto label_13fc58;
            case 0x13FC5Cu: goto label_13fc5c;
            case 0x13FC60u: goto label_13fc60;
            case 0x13FC64u: goto label_13fc64;
            case 0x13FC68u: goto label_13fc68;
            case 0x13FC6Cu: goto label_13fc6c;
            case 0x13FC70u: goto label_13fc70;
            case 0x13FC74u: goto label_13fc74;
            case 0x13FC78u: goto label_13fc78;
            case 0x13FC7Cu: goto label_13fc7c;
            case 0x13FC80u: goto label_13fc80;
            case 0x13FC84u: goto label_13fc84;
            case 0x13FC88u: goto label_13fc88;
            case 0x13FC8Cu: goto label_13fc8c;
            case 0x13FC90u: goto label_13fc90;
            case 0x13FC94u: goto label_13fc94;
            case 0x13FC98u: goto label_13fc98;
            case 0x13FC9Cu: goto label_13fc9c;
            case 0x13FCA0u: goto label_13fca0;
            case 0x13FCA4u: goto label_13fca4;
            case 0x13FCA8u: goto label_13fca8;
            case 0x13FCACu: goto label_13fcac;
            case 0x13FCB0u: goto label_13fcb0;
            case 0x13FCB4u: goto label_13fcb4;
            case 0x13FCB8u: goto label_13fcb8;
            case 0x13FCBCu: goto label_13fcbc;
            case 0x13FCC0u: goto label_13fcc0;
            case 0x13FCC4u: goto label_13fcc4;
            case 0x13FCC8u: goto label_13fcc8;
            case 0x13FCCCu: goto label_13fccc;
            case 0x13FCD0u: goto label_13fcd0;
            case 0x13FCD4u: goto label_13fcd4;
            case 0x13FCD8u: goto label_13fcd8;
            case 0x13FCDCu: goto label_13fcdc;
            case 0x13FCE0u: goto label_13fce0;
            case 0x13FCE4u: goto label_13fce4;
            case 0x13FCE8u: goto label_13fce8;
            case 0x13FCECu: goto label_13fcec;
            case 0x13FCF0u: goto label_13fcf0;
            case 0x13FCF4u: goto label_13fcf4;
            case 0x13FCF8u: goto label_13fcf8;
            case 0x13FCFCu: goto label_13fcfc;
            case 0x13FD00u: goto label_13fd00;
            case 0x13FD04u: goto label_13fd04;
            case 0x13FD08u: goto label_13fd08;
            case 0x13FD0Cu: goto label_13fd0c;
            case 0x13FD10u: goto label_13fd10;
            case 0x13FD14u: goto label_13fd14;
            case 0x13FD18u: goto label_13fd18;
            case 0x13FD1Cu: goto label_13fd1c;
            case 0x13FD20u: goto label_13fd20;
            case 0x13FD24u: goto label_13fd24;
            case 0x13FD28u: goto label_13fd28;
            case 0x13FD2Cu: goto label_13fd2c;
            case 0x13FD30u: goto label_13fd30;
            case 0x13FD34u: goto label_13fd34;
            case 0x13FD38u: goto label_13fd38;
            case 0x13FD3Cu: goto label_13fd3c;
            case 0x13FD40u: goto label_13fd40;
            case 0x13FD44u: goto label_13fd44;
            case 0x13FD48u: goto label_13fd48;
            case 0x13FD4Cu: goto label_13fd4c;
            case 0x13FD50u: goto label_13fd50;
            case 0x13FD54u: goto label_13fd54;
            case 0x13FD58u: goto label_13fd58;
            case 0x13FD5Cu: goto label_13fd5c;
            case 0x13FD60u: goto label_13fd60;
            case 0x13FD64u: goto label_13fd64;
            case 0x13FD68u: goto label_13fd68;
            case 0x13FD6Cu: goto label_13fd6c;
            case 0x13FD70u: goto label_13fd70;
            case 0x13FD74u: goto label_13fd74;
            case 0x13FD78u: goto label_13fd78;
            case 0x13FD7Cu: goto label_13fd7c;
            case 0x13FD80u: goto label_13fd80;
            case 0x13FD84u: goto label_13fd84;
            case 0x13FD88u: goto label_13fd88;
            case 0x13FD8Cu: goto label_13fd8c;
            case 0x13FD90u: goto label_13fd90;
            case 0x13FD94u: goto label_13fd94;
            case 0x13FD98u: goto label_13fd98;
            case 0x13FD9Cu: goto label_13fd9c;
            case 0x13FDA0u: goto label_13fda0;
            case 0x13FDA4u: goto label_13fda4;
            case 0x13FDA8u: goto label_13fda8;
            case 0x13FDACu: goto label_13fdac;
            case 0x13FDB0u: goto label_13fdb0;
            case 0x13FDB4u: goto label_13fdb4;
            case 0x13FDB8u: goto label_13fdb8;
            case 0x13FDBCu: goto label_13fdbc;
            case 0x13FDC0u: goto label_13fdc0;
            case 0x13FDC4u: goto label_13fdc4;
            case 0x13FDC8u: goto label_13fdc8;
            case 0x13FDCCu: goto label_13fdcc;
            case 0x13FDD0u: goto label_13fdd0;
            case 0x13FDD4u: goto label_13fdd4;
            case 0x13FDD8u: goto label_13fdd8;
            case 0x13FDDCu: goto label_13fddc;
            case 0x13FDE0u: goto label_13fde0;
            case 0x13FDE4u: goto label_13fde4;
            case 0x13FDE8u: goto label_13fde8;
            case 0x13FDECu: goto label_13fdec;
            case 0x13FDF0u: goto label_13fdf0;
            case 0x13FDF4u: goto label_13fdf4;
            case 0x13FDF8u: goto label_13fdf8;
            case 0x13FDFCu: goto label_13fdfc;
            case 0x13FE00u: goto label_13fe00;
            case 0x13FE04u: goto label_13fe04;
            case 0x13FE08u: goto label_13fe08;
            case 0x13FE0Cu: goto label_13fe0c;
            case 0x13FE10u: goto label_13fe10;
            case 0x13FE14u: goto label_13fe14;
            case 0x13FE18u: goto label_13fe18;
            case 0x13FE1Cu: goto label_13fe1c;
            case 0x13FE20u: goto label_13fe20;
            case 0x13FE24u: goto label_13fe24;
            case 0x13FE28u: goto label_13fe28;
            case 0x13FE2Cu: goto label_13fe2c;
            case 0x13FE30u: goto label_13fe30;
            case 0x13FE34u: goto label_13fe34;
            case 0x13FE38u: goto label_13fe38;
            case 0x13FE3Cu: goto label_13fe3c;
            case 0x13FE40u: goto label_13fe40;
            case 0x13FE44u: goto label_13fe44;
            case 0x13FE48u: goto label_13fe48;
            case 0x13FE4Cu: goto label_13fe4c;
            case 0x13FE50u: goto label_13fe50;
            case 0x13FE54u: goto label_13fe54;
            case 0x13FE58u: goto label_13fe58;
            case 0x13FE5Cu: goto label_13fe5c;
            case 0x13FE60u: goto label_13fe60;
            case 0x13FE64u: goto label_13fe64;
            case 0x13FE68u: goto label_13fe68;
            case 0x13FE6Cu: goto label_13fe6c;
            case 0x13FE70u: goto label_13fe70;
            case 0x13FE74u: goto label_13fe74;
            case 0x13FE78u: goto label_13fe78;
            case 0x13FE7Cu: goto label_13fe7c;
            case 0x13FE80u: goto label_13fe80;
            case 0x13FE84u: goto label_13fe84;
            case 0x13FE88u: goto label_13fe88;
            case 0x13FE8Cu: goto label_13fe8c;
            case 0x13FE90u: goto label_13fe90;
            case 0x13FE94u: goto label_13fe94;
            case 0x13FE98u: goto label_13fe98;
            case 0x13FE9Cu: goto label_13fe9c;
            case 0x13FEA0u: goto label_13fea0;
            case 0x13FEA4u: goto label_13fea4;
            case 0x13FEA8u: goto label_13fea8;
            case 0x13FEACu: goto label_13feac;
            case 0x13FEB0u: goto label_13feb0;
            case 0x13FEB4u: goto label_13feb4;
            case 0x13FEB8u: goto label_13feb8;
            case 0x13FEBCu: goto label_13febc;
            case 0x13FEC0u: goto label_13fec0;
            case 0x13FEC4u: goto label_13fec4;
            case 0x13FEC8u: goto label_13fec8;
            case 0x13FECCu: goto label_13fecc;
            case 0x13FED0u: goto label_13fed0;
            case 0x13FED4u: goto label_13fed4;
            case 0x13FED8u: goto label_13fed8;
            case 0x13FEDCu: goto label_13fedc;
            case 0x13FEE0u: goto label_13fee0;
            case 0x13FEE4u: goto label_13fee4;
            case 0x13FEE8u: goto label_13fee8;
            case 0x13FEECu: goto label_13feec;
            case 0x13FEF0u: goto label_13fef0;
            case 0x13FEF4u: goto label_13fef4;
            case 0x13FEF8u: goto label_13fef8;
            case 0x13FEFCu: goto label_13fefc;
            case 0x13FF00u: goto label_13ff00;
            case 0x13FF04u: goto label_13ff04;
            case 0x13FF08u: goto label_13ff08;
            case 0x13FF0Cu: goto label_13ff0c;
            case 0x13FF10u: goto label_13ff10;
            case 0x13FF14u: goto label_13ff14;
            case 0x13FF18u: goto label_13ff18;
            case 0x13FF1Cu: goto label_13ff1c;
            case 0x13FF20u: goto label_13ff20;
            case 0x13FF24u: goto label_13ff24;
            case 0x13FF28u: goto label_13ff28;
            case 0x13FF2Cu: goto label_13ff2c;
            case 0x13FF30u: goto label_13ff30;
            case 0x13FF34u: goto label_13ff34;
            case 0x13FF38u: goto label_13ff38;
            case 0x13FF3Cu: goto label_13ff3c;
            case 0x13FF40u: goto label_13ff40;
            case 0x13FF44u: goto label_13ff44;
            case 0x13FF48u: goto label_13ff48;
            case 0x13FF4Cu: goto label_13ff4c;
            case 0x13FF50u: goto label_13ff50;
            case 0x13FF54u: goto label_13ff54;
            case 0x13FF58u: goto label_13ff58;
            case 0x13FF5Cu: goto label_13ff5c;
            case 0x13FF60u: goto label_13ff60;
            case 0x13FF64u: goto label_13ff64;
            case 0x13FF68u: goto label_13ff68;
            case 0x13FF6Cu: goto label_13ff6c;
            case 0x13FF70u: goto label_13ff70;
            case 0x13FF74u: goto label_13ff74;
            case 0x13FF78u: goto label_13ff78;
            case 0x13FF7Cu: goto label_13ff7c;
            case 0x13FF80u: goto label_13ff80;
            case 0x13FF84u: goto label_13ff84;
            case 0x13FF88u: goto label_13ff88;
            case 0x13FF8Cu: goto label_13ff8c;
            case 0x13FF90u: goto label_13ff90;
            case 0x13FF94u: goto label_13ff94;
            case 0x13FF98u: goto label_13ff98;
            case 0x13FF9Cu: goto label_13ff9c;
            case 0x13FFA0u: goto label_13ffa0;
            case 0x13FFA4u: goto label_13ffa4;
            case 0x13FFA8u: goto label_13ffa8;
            case 0x13FFACu: goto label_13ffac;
            case 0x13FFB0u: goto label_13ffb0;
            case 0x13FFB4u: goto label_13ffb4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13FF8Cu; }
            if (ctx->pc != 0x13FF8Cu) { return; }
        }
    }
    ctx->pc = 0x13FF8Cu;
label_13ff8c:
    // 0x13ff8c: 0xc04fc9c
label_13ff90:
    if (ctx->pc == 0x13FF90u) {
        ctx->pc = 0x13FF90u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->pc = 0x13FF94u;
        goto label_13ff94;
    }
    ctx->pc = 0x13FF8Cu;
    SET_GPR_U32(ctx, 31, 0x13FF94u);
    ctx->pc = 0x13FF90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    ctx->pc = 0x13F270u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F270_0x13f270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FF94u; }
    }
    if (ctx->pc != 0x13FF94u) { return; }
    ctx->pc = 0x13FF94u;
label_13ff94:
    // 0x13ff94: 0x2121026
    ctx->pc = 0x13ff94u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_13ff98:
    // 0x13ff98: 0xdfb10008
    ctx->pc = 0x13ff98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13ff9c:
    // 0x13ff9c: 0x2c420001
    ctx->pc = 0x13ff9cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_13ffa0:
    // 0x13ffa0: 0xdfb00000
    ctx->pc = 0x13ffa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13ffa4:
    // 0x13ffa4: 0xdfb20010
    ctx->pc = 0x13ffa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13ffa8:
    // 0x13ffa8: 0xdfb30018
    ctx->pc = 0x13ffa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13ffac:
    // 0x13ffac: 0xdfbf0020
    ctx->pc = 0x13ffacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13ffb0:
    // 0x13ffb0: 0x3e00008
label_13ffb4:
    if (ctx->pc == 0x13FFB4u) {
        ctx->pc = 0x13FFB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x13FFB8u;
        goto label_fallthrough_0x13ffb0;
    }
    ctx->pc = 0x13FFB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FFB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F9F0u: goto label_13f9f0;
            case 0x13F9F4u: goto label_13f9f4;
            case 0x13F9F8u: goto label_13f9f8;
            case 0x13F9FCu: goto label_13f9fc;
            case 0x13FA00u: goto label_13fa00;
            case 0x13FA04u: goto label_13fa04;
            case 0x13FA08u: goto label_13fa08;
            case 0x13FA0Cu: goto label_13fa0c;
            case 0x13FA10u: goto label_13fa10;
            case 0x13FA14u: goto label_13fa14;
            case 0x13FA18u: goto label_13fa18;
            case 0x13FA1Cu: goto label_13fa1c;
            case 0x13FA20u: goto label_13fa20;
            case 0x13FA24u: goto label_13fa24;
            case 0x13FA28u: goto label_13fa28;
            case 0x13FA2Cu: goto label_13fa2c;
            case 0x13FA30u: goto label_13fa30;
            case 0x13FA34u: goto label_13fa34;
            case 0x13FA38u: goto label_13fa38;
            case 0x13FA3Cu: goto label_13fa3c;
            case 0x13FA40u: goto label_13fa40;
            case 0x13FA44u: goto label_13fa44;
            case 0x13FA48u: goto label_13fa48;
            case 0x13FA4Cu: goto label_13fa4c;
            case 0x13FA50u: goto label_13fa50;
            case 0x13FA54u: goto label_13fa54;
            case 0x13FA58u: goto label_13fa58;
            case 0x13FA5Cu: goto label_13fa5c;
            case 0x13FA60u: goto label_13fa60;
            case 0x13FA64u: goto label_13fa64;
            case 0x13FA68u: goto label_13fa68;
            case 0x13FA6Cu: goto label_13fa6c;
            case 0x13FA70u: goto label_13fa70;
            case 0x13FA74u: goto label_13fa74;
            case 0x13FA78u: goto label_13fa78;
            case 0x13FA7Cu: goto label_13fa7c;
            case 0x13FA80u: goto label_13fa80;
            case 0x13FA84u: goto label_13fa84;
            case 0x13FA88u: goto label_13fa88;
            case 0x13FA8Cu: goto label_13fa8c;
            case 0x13FA90u: goto label_13fa90;
            case 0x13FA94u: goto label_13fa94;
            case 0x13FA98u: goto label_13fa98;
            case 0x13FA9Cu: goto label_13fa9c;
            case 0x13FAA0u: goto label_13faa0;
            case 0x13FAA4u: goto label_13faa4;
            case 0x13FAA8u: goto label_13faa8;
            case 0x13FAACu: goto label_13faac;
            case 0x13FAB0u: goto label_13fab0;
            case 0x13FAB4u: goto label_13fab4;
            case 0x13FAB8u: goto label_13fab8;
            case 0x13FABCu: goto label_13fabc;
            case 0x13FAC0u: goto label_13fac0;
            case 0x13FAC4u: goto label_13fac4;
            case 0x13FAC8u: goto label_13fac8;
            case 0x13FACCu: goto label_13facc;
            case 0x13FAD0u: goto label_13fad0;
            case 0x13FAD4u: goto label_13fad4;
            case 0x13FAD8u: goto label_13fad8;
            case 0x13FADCu: goto label_13fadc;
            case 0x13FAE0u: goto label_13fae0;
            case 0x13FAE4u: goto label_13fae4;
            case 0x13FAE8u: goto label_13fae8;
            case 0x13FAECu: goto label_13faec;
            case 0x13FAF0u: goto label_13faf0;
            case 0x13FAF4u: goto label_13faf4;
            case 0x13FAF8u: goto label_13faf8;
            case 0x13FAFCu: goto label_13fafc;
            case 0x13FB00u: goto label_13fb00;
            case 0x13FB04u: goto label_13fb04;
            case 0x13FB08u: goto label_13fb08;
            case 0x13FB0Cu: goto label_13fb0c;
            case 0x13FB10u: goto label_13fb10;
            case 0x13FB14u: goto label_13fb14;
            case 0x13FB18u: goto label_13fb18;
            case 0x13FB1Cu: goto label_13fb1c;
            case 0x13FB20u: goto label_13fb20;
            case 0x13FB24u: goto label_13fb24;
            case 0x13FB28u: goto label_13fb28;
            case 0x13FB2Cu: goto label_13fb2c;
            case 0x13FB30u: goto label_13fb30;
            case 0x13FB34u: goto label_13fb34;
            case 0x13FB38u: goto label_13fb38;
            case 0x13FB3Cu: goto label_13fb3c;
            case 0x13FB40u: goto label_13fb40;
            case 0x13FB44u: goto label_13fb44;
            case 0x13FB48u: goto label_13fb48;
            case 0x13FB4Cu: goto label_13fb4c;
            case 0x13FB50u: goto label_13fb50;
            case 0x13FB54u: goto label_13fb54;
            case 0x13FB58u: goto label_13fb58;
            case 0x13FB5Cu: goto label_13fb5c;
            case 0x13FB60u: goto label_13fb60;
            case 0x13FB64u: goto label_13fb64;
            case 0x13FB68u: goto label_13fb68;
            case 0x13FB6Cu: goto label_13fb6c;
            case 0x13FB70u: goto label_13fb70;
            case 0x13FB74u: goto label_13fb74;
            case 0x13FB78u: goto label_13fb78;
            case 0x13FB7Cu: goto label_13fb7c;
            case 0x13FB80u: goto label_13fb80;
            case 0x13FB84u: goto label_13fb84;
            case 0x13FB88u: goto label_13fb88;
            case 0x13FB8Cu: goto label_13fb8c;
            case 0x13FB90u: goto label_13fb90;
            case 0x13FB94u: goto label_13fb94;
            case 0x13FB98u: goto label_13fb98;
            case 0x13FB9Cu: goto label_13fb9c;
            case 0x13FBA0u: goto label_13fba0;
            case 0x13FBA4u: goto label_13fba4;
            case 0x13FBA8u: goto label_13fba8;
            case 0x13FBACu: goto label_13fbac;
            case 0x13FBB0u: goto label_13fbb0;
            case 0x13FBB4u: goto label_13fbb4;
            case 0x13FBB8u: goto label_13fbb8;
            case 0x13FBBCu: goto label_13fbbc;
            case 0x13FBC0u: goto label_13fbc0;
            case 0x13FBC4u: goto label_13fbc4;
            case 0x13FBC8u: goto label_13fbc8;
            case 0x13FBCCu: goto label_13fbcc;
            case 0x13FBD0u: goto label_13fbd0;
            case 0x13FBD4u: goto label_13fbd4;
            case 0x13FBD8u: goto label_13fbd8;
            case 0x13FBDCu: goto label_13fbdc;
            case 0x13FBE0u: goto label_13fbe0;
            case 0x13FBE4u: goto label_13fbe4;
            case 0x13FBE8u: goto label_13fbe8;
            case 0x13FBECu: goto label_13fbec;
            case 0x13FBF0u: goto label_13fbf0;
            case 0x13FBF4u: goto label_13fbf4;
            case 0x13FBF8u: goto label_13fbf8;
            case 0x13FBFCu: goto label_13fbfc;
            case 0x13FC00u: goto label_13fc00;
            case 0x13FC04u: goto label_13fc04;
            case 0x13FC08u: goto label_13fc08;
            case 0x13FC0Cu: goto label_13fc0c;
            case 0x13FC10u: goto label_13fc10;
            case 0x13FC14u: goto label_13fc14;
            case 0x13FC18u: goto label_13fc18;
            case 0x13FC1Cu: goto label_13fc1c;
            case 0x13FC20u: goto label_13fc20;
            case 0x13FC24u: goto label_13fc24;
            case 0x13FC28u: goto label_13fc28;
            case 0x13FC2Cu: goto label_13fc2c;
            case 0x13FC30u: goto label_13fc30;
            case 0x13FC34u: goto label_13fc34;
            case 0x13FC38u: goto label_13fc38;
            case 0x13FC3Cu: goto label_13fc3c;
            case 0x13FC40u: goto label_13fc40;
            case 0x13FC44u: goto label_13fc44;
            case 0x13FC48u: goto label_13fc48;
            case 0x13FC4Cu: goto label_13fc4c;
            case 0x13FC50u: goto label_13fc50;
            case 0x13FC54u: goto label_13fc54;
            case 0x13FC58u: goto label_13fc58;
            case 0x13FC5Cu: goto label_13fc5c;
            case 0x13FC60u: goto label_13fc60;
            case 0x13FC64u: goto label_13fc64;
            case 0x13FC68u: goto label_13fc68;
            case 0x13FC6Cu: goto label_13fc6c;
            case 0x13FC70u: goto label_13fc70;
            case 0x13FC74u: goto label_13fc74;
            case 0x13FC78u: goto label_13fc78;
            case 0x13FC7Cu: goto label_13fc7c;
            case 0x13FC80u: goto label_13fc80;
            case 0x13FC84u: goto label_13fc84;
            case 0x13FC88u: goto label_13fc88;
            case 0x13FC8Cu: goto label_13fc8c;
            case 0x13FC90u: goto label_13fc90;
            case 0x13FC94u: goto label_13fc94;
            case 0x13FC98u: goto label_13fc98;
            case 0x13FC9Cu: goto label_13fc9c;
            case 0x13FCA0u: goto label_13fca0;
            case 0x13FCA4u: goto label_13fca4;
            case 0x13FCA8u: goto label_13fca8;
            case 0x13FCACu: goto label_13fcac;
            case 0x13FCB0u: goto label_13fcb0;
            case 0x13FCB4u: goto label_13fcb4;
            case 0x13FCB8u: goto label_13fcb8;
            case 0x13FCBCu: goto label_13fcbc;
            case 0x13FCC0u: goto label_13fcc0;
            case 0x13FCC4u: goto label_13fcc4;
            case 0x13FCC8u: goto label_13fcc8;
            case 0x13FCCCu: goto label_13fccc;
            case 0x13FCD0u: goto label_13fcd0;
            case 0x13FCD4u: goto label_13fcd4;
            case 0x13FCD8u: goto label_13fcd8;
            case 0x13FCDCu: goto label_13fcdc;
            case 0x13FCE0u: goto label_13fce0;
            case 0x13FCE4u: goto label_13fce4;
            case 0x13FCE8u: goto label_13fce8;
            case 0x13FCECu: goto label_13fcec;
            case 0x13FCF0u: goto label_13fcf0;
            case 0x13FCF4u: goto label_13fcf4;
            case 0x13FCF8u: goto label_13fcf8;
            case 0x13FCFCu: goto label_13fcfc;
            case 0x13FD00u: goto label_13fd00;
            case 0x13FD04u: goto label_13fd04;
            case 0x13FD08u: goto label_13fd08;
            case 0x13FD0Cu: goto label_13fd0c;
            case 0x13FD10u: goto label_13fd10;
            case 0x13FD14u: goto label_13fd14;
            case 0x13FD18u: goto label_13fd18;
            case 0x13FD1Cu: goto label_13fd1c;
            case 0x13FD20u: goto label_13fd20;
            case 0x13FD24u: goto label_13fd24;
            case 0x13FD28u: goto label_13fd28;
            case 0x13FD2Cu: goto label_13fd2c;
            case 0x13FD30u: goto label_13fd30;
            case 0x13FD34u: goto label_13fd34;
            case 0x13FD38u: goto label_13fd38;
            case 0x13FD3Cu: goto label_13fd3c;
            case 0x13FD40u: goto label_13fd40;
            case 0x13FD44u: goto label_13fd44;
            case 0x13FD48u: goto label_13fd48;
            case 0x13FD4Cu: goto label_13fd4c;
            case 0x13FD50u: goto label_13fd50;
            case 0x13FD54u: goto label_13fd54;
            case 0x13FD58u: goto label_13fd58;
            case 0x13FD5Cu: goto label_13fd5c;
            case 0x13FD60u: goto label_13fd60;
            case 0x13FD64u: goto label_13fd64;
            case 0x13FD68u: goto label_13fd68;
            case 0x13FD6Cu: goto label_13fd6c;
            case 0x13FD70u: goto label_13fd70;
            case 0x13FD74u: goto label_13fd74;
            case 0x13FD78u: goto label_13fd78;
            case 0x13FD7Cu: goto label_13fd7c;
            case 0x13FD80u: goto label_13fd80;
            case 0x13FD84u: goto label_13fd84;
            case 0x13FD88u: goto label_13fd88;
            case 0x13FD8Cu: goto label_13fd8c;
            case 0x13FD90u: goto label_13fd90;
            case 0x13FD94u: goto label_13fd94;
            case 0x13FD98u: goto label_13fd98;
            case 0x13FD9Cu: goto label_13fd9c;
            case 0x13FDA0u: goto label_13fda0;
            case 0x13FDA4u: goto label_13fda4;
            case 0x13FDA8u: goto label_13fda8;
            case 0x13FDACu: goto label_13fdac;
            case 0x13FDB0u: goto label_13fdb0;
            case 0x13FDB4u: goto label_13fdb4;
            case 0x13FDB8u: goto label_13fdb8;
            case 0x13FDBCu: goto label_13fdbc;
            case 0x13FDC0u: goto label_13fdc0;
            case 0x13FDC4u: goto label_13fdc4;
            case 0x13FDC8u: goto label_13fdc8;
            case 0x13FDCCu: goto label_13fdcc;
            case 0x13FDD0u: goto label_13fdd0;
            case 0x13FDD4u: goto label_13fdd4;
            case 0x13FDD8u: goto label_13fdd8;
            case 0x13FDDCu: goto label_13fddc;
            case 0x13FDE0u: goto label_13fde0;
            case 0x13FDE4u: goto label_13fde4;
            case 0x13FDE8u: goto label_13fde8;
            case 0x13FDECu: goto label_13fdec;
            case 0x13FDF0u: goto label_13fdf0;
            case 0x13FDF4u: goto label_13fdf4;
            case 0x13FDF8u: goto label_13fdf8;
            case 0x13FDFCu: goto label_13fdfc;
            case 0x13FE00u: goto label_13fe00;
            case 0x13FE04u: goto label_13fe04;
            case 0x13FE08u: goto label_13fe08;
            case 0x13FE0Cu: goto label_13fe0c;
            case 0x13FE10u: goto label_13fe10;
            case 0x13FE14u: goto label_13fe14;
            case 0x13FE18u: goto label_13fe18;
            case 0x13FE1Cu: goto label_13fe1c;
            case 0x13FE20u: goto label_13fe20;
            case 0x13FE24u: goto label_13fe24;
            case 0x13FE28u: goto label_13fe28;
            case 0x13FE2Cu: goto label_13fe2c;
            case 0x13FE30u: goto label_13fe30;
            case 0x13FE34u: goto label_13fe34;
            case 0x13FE38u: goto label_13fe38;
            case 0x13FE3Cu: goto label_13fe3c;
            case 0x13FE40u: goto label_13fe40;
            case 0x13FE44u: goto label_13fe44;
            case 0x13FE48u: goto label_13fe48;
            case 0x13FE4Cu: goto label_13fe4c;
            case 0x13FE50u: goto label_13fe50;
            case 0x13FE54u: goto label_13fe54;
            case 0x13FE58u: goto label_13fe58;
            case 0x13FE5Cu: goto label_13fe5c;
            case 0x13FE60u: goto label_13fe60;
            case 0x13FE64u: goto label_13fe64;
            case 0x13FE68u: goto label_13fe68;
            case 0x13FE6Cu: goto label_13fe6c;
            case 0x13FE70u: goto label_13fe70;
            case 0x13FE74u: goto label_13fe74;
            case 0x13FE78u: goto label_13fe78;
            case 0x13FE7Cu: goto label_13fe7c;
            case 0x13FE80u: goto label_13fe80;
            case 0x13FE84u: goto label_13fe84;
            case 0x13FE88u: goto label_13fe88;
            case 0x13FE8Cu: goto label_13fe8c;
            case 0x13FE90u: goto label_13fe90;
            case 0x13FE94u: goto label_13fe94;
            case 0x13FE98u: goto label_13fe98;
            case 0x13FE9Cu: goto label_13fe9c;
            case 0x13FEA0u: goto label_13fea0;
            case 0x13FEA4u: goto label_13fea4;
            case 0x13FEA8u: goto label_13fea8;
            case 0x13FEACu: goto label_13feac;
            case 0x13FEB0u: goto label_13feb0;
            case 0x13FEB4u: goto label_13feb4;
            case 0x13FEB8u: goto label_13feb8;
            case 0x13FEBCu: goto label_13febc;
            case 0x13FEC0u: goto label_13fec0;
            case 0x13FEC4u: goto label_13fec4;
            case 0x13FEC8u: goto label_13fec8;
            case 0x13FECCu: goto label_13fecc;
            case 0x13FED0u: goto label_13fed0;
            case 0x13FED4u: goto label_13fed4;
            case 0x13FED8u: goto label_13fed8;
            case 0x13FEDCu: goto label_13fedc;
            case 0x13FEE0u: goto label_13fee0;
            case 0x13FEE4u: goto label_13fee4;
            case 0x13FEE8u: goto label_13fee8;
            case 0x13FEECu: goto label_13feec;
            case 0x13FEF0u: goto label_13fef0;
            case 0x13FEF4u: goto label_13fef4;
            case 0x13FEF8u: goto label_13fef8;
            case 0x13FEFCu: goto label_13fefc;
            case 0x13FF00u: goto label_13ff00;
            case 0x13FF04u: goto label_13ff04;
            case 0x13FF08u: goto label_13ff08;
            case 0x13FF0Cu: goto label_13ff0c;
            case 0x13FF10u: goto label_13ff10;
            case 0x13FF14u: goto label_13ff14;
            case 0x13FF18u: goto label_13ff18;
            case 0x13FF1Cu: goto label_13ff1c;
            case 0x13FF20u: goto label_13ff20;
            case 0x13FF24u: goto label_13ff24;
            case 0x13FF28u: goto label_13ff28;
            case 0x13FF2Cu: goto label_13ff2c;
            case 0x13FF30u: goto label_13ff30;
            case 0x13FF34u: goto label_13ff34;
            case 0x13FF38u: goto label_13ff38;
            case 0x13FF3Cu: goto label_13ff3c;
            case 0x13FF40u: goto label_13ff40;
            case 0x13FF44u: goto label_13ff44;
            case 0x13FF48u: goto label_13ff48;
            case 0x13FF4Cu: goto label_13ff4c;
            case 0x13FF50u: goto label_13ff50;
            case 0x13FF54u: goto label_13ff54;
            case 0x13FF58u: goto label_13ff58;
            case 0x13FF5Cu: goto label_13ff5c;
            case 0x13FF60u: goto label_13ff60;
            case 0x13FF64u: goto label_13ff64;
            case 0x13FF68u: goto label_13ff68;
            case 0x13FF6Cu: goto label_13ff6c;
            case 0x13FF70u: goto label_13ff70;
            case 0x13FF74u: goto label_13ff74;
            case 0x13FF78u: goto label_13ff78;
            case 0x13FF7Cu: goto label_13ff7c;
            case 0x13FF80u: goto label_13ff80;
            case 0x13FF84u: goto label_13ff84;
            case 0x13FF88u: goto label_13ff88;
            case 0x13FF8Cu: goto label_13ff8c;
            case 0x13FF90u: goto label_13ff90;
            case 0x13FF94u: goto label_13ff94;
            case 0x13FF98u: goto label_13ff98;
            case 0x13FF9Cu: goto label_13ff9c;
            case 0x13FFA0u: goto label_13ffa0;
            case 0x13FFA4u: goto label_13ffa4;
            case 0x13FFA8u: goto label_13ffa8;
            case 0x13FFACu: goto label_13ffac;
            case 0x13FFB0u: goto label_13ffb0;
            case 0x13FFB4u: goto label_13ffb4;
            default: break;
        }
        return;
    }
label_fallthrough_0x13ffb0:
    ctx->pc = 0x13FFB8u;
}
