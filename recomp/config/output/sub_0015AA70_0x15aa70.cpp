#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015AA70
// Address: 0x15aa70 - 0x15ac38
void sub_0015AA70_0x15aa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15aa70u;

label_15aa70:
    // 0x15aa70: 0x27bdff90
    ctx->pc = 0x15aa70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
label_15aa74:
    // 0x15aa74: 0xffb20030
    ctx->pc = 0x15aa74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_15aa78:
    // 0x15aa78: 0x24120004
    ctx->pc = 0x15aa78u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4));
label_15aa7c:
    // 0x15aa7c: 0xffb30038
    ctx->pc = 0x15aa7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_15aa80:
    // 0x15aa80: 0x80982d
    ctx->pc = 0x15aa80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15aa84:
    // 0x15aa84: 0xffb50048
    ctx->pc = 0x15aa84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_15aa88:
    // 0x15aa88: 0xa0a82d
    ctx->pc = 0x15aa88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15aa8c:
    // 0x15aa8c: 0xffbe0060
    ctx->pc = 0x15aa8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_15aa90:
    // 0x15aa90: 0xf02d
    ctx->pc = 0x15aa90u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15aa94:
    // 0x15aa94: 0xffb00020
    ctx->pc = 0x15aa94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_15aa98:
    // 0x15aa98: 0xffb10028
    ctx->pc = 0x15aa98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_15aa9c:
    // 0x15aa9c: 0xffb40040
    ctx->pc = 0x15aa9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_15aaa0:
    // 0x15aaa0: 0xffb60050
    ctx->pc = 0x15aaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_15aaa4:
    // 0x15aaa4: 0xffb70058
    ctx->pc = 0x15aaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_15aaa8:
    // 0x15aaa8: 0xffbf0068
    ctx->pc = 0x15aaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_15aaac:
    // 0x15aaac: 0x8e760384
    ctx->pc = 0x15aaacu;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 19), 900)));
label_15aab0:
    // 0x15aab0: 0x10000002
label_15aab4:
    if (ctx->pc == 0x15AAB4u) {
        ctx->pc = 0x15AAB4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 6), 4294967293));
        ctx->pc = 0x15AAB8u;
        goto label_15aab8;
    }
    ctx->pc = 0x15AAB0u;
    {
        const bool branch_taken_0x15aab0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15AAB4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 6), 4294967293));
        if (branch_taken_0x15aab0) {
            ctx->pc = 0x15AABCu;
            goto label_15aabc;
        }
    }
    ctx->pc = 0x15AAB8u;
label_15aab8:
    // 0x15aab8: 0x26520001
    ctx->pc = 0x15aab8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_15aabc:
    // 0x15aabc: 0x250102a
    ctx->pc = 0x15aabcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 16)));
label_15aac0:
    // 0x15aac0: 0x10400005
label_15aac4:
    if (ctx->pc == 0x15AAC4u) {
        ctx->pc = 0x15AAC4u;
        SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->pc = 0x15AAC8u;
        goto label_15aac8;
    }
    ctx->pc = 0x15AAC0u;
    {
        const bool branch_taken_0x15aac0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15AAC4u;
        SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        if (branch_taken_0x15aac0) {
            ctx->pc = 0x15AAD8u;
            goto label_15aad8;
        }
    }
    ctx->pc = 0x15AAC8u;
label_15aac8:
    // 0x15aac8: 0xc05616e
label_15aacc:
    if (ctx->pc == 0x15AACCu) {
        ctx->pc = 0x15AACCu;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->pc = 0x15AAD0u;
        goto label_15aad0;
    }
    ctx->pc = 0x15AAC8u;
    SET_GPR_U32(ctx, 31, 0x15AAD0u);
    ctx->pc = 0x15AACCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    ctx->pc = 0x1585B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001585B8_0x1585b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AAD0u; }
    }
    if (ctx->pc != 0x15AAD0u) { return; }
    ctx->pc = 0x15AAD0u;
label_15aad0:
    // 0x15aad0: 0x1040fff9
label_15aad4:
    if (ctx->pc == 0x15AAD4u) {
        ctx->pc = 0x15AAD4u;
        SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->pc = 0x15AAD8u;
        goto label_15aad8;
    }
    ctx->pc = 0x15AAD0u;
    {
        const bool branch_taken_0x15aad0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15AAD4u;
        SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        if (branch_taken_0x15aad0) {
            ctx->pc = 0x15AAB8u;
            goto label_15aab8;
        }
    }
    ctx->pc = 0x15AAD8u;
label_15aad8:
    // 0x15aad8: 0x2417ffff
    ctx->pc = 0x15aad8u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 4294967295));
label_15aadc:
    // 0x15aadc: 0x24020001
    ctx->pc = 0x15aadcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_15aae0:
    // 0x15aae0: 0x16c20006
label_15aae4:
    if (ctx->pc == 0x15AAE4u) {
        ctx->pc = 0x15AAE4u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 23, GPR_U32(ctx, 0));
        ctx->pc = 0x15AAE8u;
        goto label_15aae8;
    }
    ctx->pc = 0x15AAE0u;
    {
        const bool branch_taken_0x15aae0 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 2));
        ctx->pc = 0x15AAE4u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 23, GPR_U32(ctx, 0));
        if (branch_taken_0x15aae0) {
            ctx->pc = 0x15AAFCu;
            goto label_15aafc;
        }
    }
    ctx->pc = 0x15AAE8u;
label_15aae8:
    // 0x15aae8: 0x260202d
    ctx->pc = 0x15aae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15aaec:
    // 0x15aaec: 0x2a0282d
    ctx->pc = 0x15aaecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15aaf0:
    // 0x15aaf0: 0xc056b0e
label_15aaf4:
    if (ctx->pc == 0x15AAF4u) {
        ctx->pc = 0x15AAF4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15AAF8u;
        goto label_15aaf8;
    }
    ctx->pc = 0x15AAF0u;
    SET_GPR_U32(ctx, 31, 0x15AAF8u);
    ctx->pc = 0x15AAF4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15AC38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC38_0x15ac38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AAF8u; }
    }
    if (ctx->pc != 0x15AAF8u) { return; }
    ctx->pc = 0x15AAF8u;
label_15aaf8:
    // 0x15aaf8: 0x40f02d
    ctx->pc = 0x15aaf8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15aafc:
    // 0x15aafc: 0x161040
    ctx->pc = 0x15aafcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 22), 1));
label_15ab00:
    // 0x15ab00: 0x561021
    ctx->pc = 0x15ab00u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_15ab04:
    // 0x15ab04: 0x21080
    ctx->pc = 0x15ab04u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_15ab08:
    // 0x15ab08: 0x24540380
    ctx->pc = 0x15ab08u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 896));
label_15ab0c:
    // 0x15ab0c: 0x2741821
    ctx->pc = 0x15ab0cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_15ab10:
    // 0x15ab10: 0x8c710008
    ctx->pc = 0x15ab10u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_15ab14:
    // 0x15ab14: 0x1220002f
label_15ab18:
    if (ctx->pc == 0x15AB18u) {
        ctx->pc = 0x15AB18u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15AB1Cu;
        goto label_15ab1c;
    }
    ctx->pc = 0x15AB14u;
    {
        const bool branch_taken_0x15ab14 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x15AB18u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15ab14) {
            ctx->pc = 0x15ABD4u;
            goto label_15abd4;
        }
    }
    ctx->pc = 0x15AB1Cu;
label_15ab1c:
    // 0x15ab1c: 0x8e230000
    ctx->pc = 0x15ab1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15ab20:
    // 0x15ab20: 0x220202d
    ctx->pc = 0x15ab20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15ab24:
    // 0x15ab24: 0x282d
    ctx->pc = 0x15ab24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ab28:
    // 0x15ab28: 0x8c620018
    ctx->pc = 0x15ab28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_15ab2c:
    // 0x15ab2c: 0x40f809
label_15ab30:
    if (ctx->pc == 0x15AB30u) {
        ctx->pc = 0x15AB30u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15AB34u;
        goto label_15ab34;
    }
    ctx->pc = 0x15AB2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15AB34u);
        ctx->pc = 0x15AB30u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15AA70u: goto label_15aa70;
            case 0x15AA74u: goto label_15aa74;
            case 0x15AA78u: goto label_15aa78;
            case 0x15AA7Cu: goto label_15aa7c;
            case 0x15AA80u: goto label_15aa80;
            case 0x15AA84u: goto label_15aa84;
            case 0x15AA88u: goto label_15aa88;
            case 0x15AA8Cu: goto label_15aa8c;
            case 0x15AA90u: goto label_15aa90;
            case 0x15AA94u: goto label_15aa94;
            case 0x15AA98u: goto label_15aa98;
            case 0x15AA9Cu: goto label_15aa9c;
            case 0x15AAA0u: goto label_15aaa0;
            case 0x15AAA4u: goto label_15aaa4;
            case 0x15AAA8u: goto label_15aaa8;
            case 0x15AAACu: goto label_15aaac;
            case 0x15AAB0u: goto label_15aab0;
            case 0x15AAB4u: goto label_15aab4;
            case 0x15AAB8u: goto label_15aab8;
            case 0x15AABCu: goto label_15aabc;
            case 0x15AAC0u: goto label_15aac0;
            case 0x15AAC4u: goto label_15aac4;
            case 0x15AAC8u: goto label_15aac8;
            case 0x15AACCu: goto label_15aacc;
            case 0x15AAD0u: goto label_15aad0;
            case 0x15AAD4u: goto label_15aad4;
            case 0x15AAD8u: goto label_15aad8;
            case 0x15AADCu: goto label_15aadc;
            case 0x15AAE0u: goto label_15aae0;
            case 0x15AAE4u: goto label_15aae4;
            case 0x15AAE8u: goto label_15aae8;
            case 0x15AAECu: goto label_15aaec;
            case 0x15AAF0u: goto label_15aaf0;
            case 0x15AAF4u: goto label_15aaf4;
            case 0x15AAF8u: goto label_15aaf8;
            case 0x15AAFCu: goto label_15aafc;
            case 0x15AB00u: goto label_15ab00;
            case 0x15AB04u: goto label_15ab04;
            case 0x15AB08u: goto label_15ab08;
            case 0x15AB0Cu: goto label_15ab0c;
            case 0x15AB10u: goto label_15ab10;
            case 0x15AB14u: goto label_15ab14;
            case 0x15AB18u: goto label_15ab18;
            case 0x15AB1Cu: goto label_15ab1c;
            case 0x15AB20u: goto label_15ab20;
            case 0x15AB24u: goto label_15ab24;
            case 0x15AB28u: goto label_15ab28;
            case 0x15AB2Cu: goto label_15ab2c;
            case 0x15AB30u: goto label_15ab30;
            case 0x15AB34u: goto label_15ab34;
            case 0x15AB38u: goto label_15ab38;
            case 0x15AB3Cu: goto label_15ab3c;
            case 0x15AB40u: goto label_15ab40;
            case 0x15AB44u: goto label_15ab44;
            case 0x15AB48u: goto label_15ab48;
            case 0x15AB4Cu: goto label_15ab4c;
            case 0x15AB50u: goto label_15ab50;
            case 0x15AB54u: goto label_15ab54;
            case 0x15AB58u: goto label_15ab58;
            case 0x15AB5Cu: goto label_15ab5c;
            case 0x15AB60u: goto label_15ab60;
            case 0x15AB64u: goto label_15ab64;
            case 0x15AB68u: goto label_15ab68;
            case 0x15AB6Cu: goto label_15ab6c;
            case 0x15AB70u: goto label_15ab70;
            case 0x15AB74u: goto label_15ab74;
            case 0x15AB78u: goto label_15ab78;
            case 0x15AB7Cu: goto label_15ab7c;
            case 0x15AB80u: goto label_15ab80;
            case 0x15AB84u: goto label_15ab84;
            case 0x15AB88u: goto label_15ab88;
            case 0x15AB8Cu: goto label_15ab8c;
            case 0x15AB90u: goto label_15ab90;
            case 0x15AB94u: goto label_15ab94;
            case 0x15AB98u: goto label_15ab98;
            case 0x15AB9Cu: goto label_15ab9c;
            case 0x15ABA0u: goto label_15aba0;
            case 0x15ABA4u: goto label_15aba4;
            case 0x15ABA8u: goto label_15aba8;
            case 0x15ABACu: goto label_15abac;
            case 0x15ABB0u: goto label_15abb0;
            case 0x15ABB4u: goto label_15abb4;
            case 0x15ABB8u: goto label_15abb8;
            case 0x15ABBCu: goto label_15abbc;
            case 0x15ABC0u: goto label_15abc0;
            case 0x15ABC4u: goto label_15abc4;
            case 0x15ABC8u: goto label_15abc8;
            case 0x15ABCCu: goto label_15abcc;
            case 0x15ABD0u: goto label_15abd0;
            case 0x15ABD4u: goto label_15abd4;
            case 0x15ABD8u: goto label_15abd8;
            case 0x15ABDCu: goto label_15abdc;
            case 0x15ABE0u: goto label_15abe0;
            case 0x15ABE4u: goto label_15abe4;
            case 0x15ABE8u: goto label_15abe8;
            case 0x15ABECu: goto label_15abec;
            case 0x15ABF0u: goto label_15abf0;
            case 0x15ABF4u: goto label_15abf4;
            case 0x15ABF8u: goto label_15abf8;
            case 0x15ABFCu: goto label_15abfc;
            case 0x15AC00u: goto label_15ac00;
            case 0x15AC04u: goto label_15ac04;
            case 0x15AC08u: goto label_15ac08;
            case 0x15AC0Cu: goto label_15ac0c;
            case 0x15AC10u: goto label_15ac10;
            case 0x15AC14u: goto label_15ac14;
            case 0x15AC18u: goto label_15ac18;
            case 0x15AC1Cu: goto label_15ac1c;
            case 0x15AC20u: goto label_15ac20;
            case 0x15AC24u: goto label_15ac24;
            case 0x15AC28u: goto label_15ac28;
            case 0x15AC2Cu: goto label_15ac2c;
            case 0x15AC30u: goto label_15ac30;
            case 0x15AC34u: goto label_15ac34;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15AB34u; }
            if (ctx->pc != 0x15AB34u) { return; }
        }
    }
    ctx->pc = 0x15AB34u;
label_15ab34:
    // 0x15ab34: 0x2a0282d
    ctx->pc = 0x15ab34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15ab38:
    // 0x15ab38: 0x8fa40000
    ctx->pc = 0x15ab38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15ab3c:
    // 0x15ab3c: 0xc041eac
label_15ab40:
    if (ctx->pc == 0x15AB40u) {
        ctx->pc = 0x15AB40u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x15AB44u;
        goto label_15ab44;
    }
    ctx->pc = 0x15AB3Cu;
    SET_GPR_U32(ctx, 31, 0x15AB44u);
    ctx->pc = 0x15AB40u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AB44u; }
    }
    if (ctx->pc != 0x15AB44u) { return; }
    ctx->pc = 0x15AB44u;
label_15ab44:
    // 0x15ab44: 0x8e230000
    ctx->pc = 0x15ab44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15ab48:
    // 0x15ab48: 0x220202d
    ctx->pc = 0x15ab48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15ab4c:
    // 0x15ab4c: 0x24050001
    ctx->pc = 0x15ab4cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_15ab50:
    // 0x15ab50: 0x8c620020
    ctx->pc = 0x15ab50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_15ab54:
    // 0x15ab54: 0x40f809
label_15ab58:
    if (ctx->pc == 0x15AB58u) {
        ctx->pc = 0x15AB58u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15AB5Cu;
        goto label_15ab5c;
    }
    ctx->pc = 0x15AB54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15AB5Cu);
        ctx->pc = 0x15AB58u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15AA70u: goto label_15aa70;
            case 0x15AA74u: goto label_15aa74;
            case 0x15AA78u: goto label_15aa78;
            case 0x15AA7Cu: goto label_15aa7c;
            case 0x15AA80u: goto label_15aa80;
            case 0x15AA84u: goto label_15aa84;
            case 0x15AA88u: goto label_15aa88;
            case 0x15AA8Cu: goto label_15aa8c;
            case 0x15AA90u: goto label_15aa90;
            case 0x15AA94u: goto label_15aa94;
            case 0x15AA98u: goto label_15aa98;
            case 0x15AA9Cu: goto label_15aa9c;
            case 0x15AAA0u: goto label_15aaa0;
            case 0x15AAA4u: goto label_15aaa4;
            case 0x15AAA8u: goto label_15aaa8;
            case 0x15AAACu: goto label_15aaac;
            case 0x15AAB0u: goto label_15aab0;
            case 0x15AAB4u: goto label_15aab4;
            case 0x15AAB8u: goto label_15aab8;
            case 0x15AABCu: goto label_15aabc;
            case 0x15AAC0u: goto label_15aac0;
            case 0x15AAC4u: goto label_15aac4;
            case 0x15AAC8u: goto label_15aac8;
            case 0x15AACCu: goto label_15aacc;
            case 0x15AAD0u: goto label_15aad0;
            case 0x15AAD4u: goto label_15aad4;
            case 0x15AAD8u: goto label_15aad8;
            case 0x15AADCu: goto label_15aadc;
            case 0x15AAE0u: goto label_15aae0;
            case 0x15AAE4u: goto label_15aae4;
            case 0x15AAE8u: goto label_15aae8;
            case 0x15AAECu: goto label_15aaec;
            case 0x15AAF0u: goto label_15aaf0;
            case 0x15AAF4u: goto label_15aaf4;
            case 0x15AAF8u: goto label_15aaf8;
            case 0x15AAFCu: goto label_15aafc;
            case 0x15AB00u: goto label_15ab00;
            case 0x15AB04u: goto label_15ab04;
            case 0x15AB08u: goto label_15ab08;
            case 0x15AB0Cu: goto label_15ab0c;
            case 0x15AB10u: goto label_15ab10;
            case 0x15AB14u: goto label_15ab14;
            case 0x15AB18u: goto label_15ab18;
            case 0x15AB1Cu: goto label_15ab1c;
            case 0x15AB20u: goto label_15ab20;
            case 0x15AB24u: goto label_15ab24;
            case 0x15AB28u: goto label_15ab28;
            case 0x15AB2Cu: goto label_15ab2c;
            case 0x15AB30u: goto label_15ab30;
            case 0x15AB34u: goto label_15ab34;
            case 0x15AB38u: goto label_15ab38;
            case 0x15AB3Cu: goto label_15ab3c;
            case 0x15AB40u: goto label_15ab40;
            case 0x15AB44u: goto label_15ab44;
            case 0x15AB48u: goto label_15ab48;
            case 0x15AB4Cu: goto label_15ab4c;
            case 0x15AB50u: goto label_15ab50;
            case 0x15AB54u: goto label_15ab54;
            case 0x15AB58u: goto label_15ab58;
            case 0x15AB5Cu: goto label_15ab5c;
            case 0x15AB60u: goto label_15ab60;
            case 0x15AB64u: goto label_15ab64;
            case 0x15AB68u: goto label_15ab68;
            case 0x15AB6Cu: goto label_15ab6c;
            case 0x15AB70u: goto label_15ab70;
            case 0x15AB74u: goto label_15ab74;
            case 0x15AB78u: goto label_15ab78;
            case 0x15AB7Cu: goto label_15ab7c;
            case 0x15AB80u: goto label_15ab80;
            case 0x15AB84u: goto label_15ab84;
            case 0x15AB88u: goto label_15ab88;
            case 0x15AB8Cu: goto label_15ab8c;
            case 0x15AB90u: goto label_15ab90;
            case 0x15AB94u: goto label_15ab94;
            case 0x15AB98u: goto label_15ab98;
            case 0x15AB9Cu: goto label_15ab9c;
            case 0x15ABA0u: goto label_15aba0;
            case 0x15ABA4u: goto label_15aba4;
            case 0x15ABA8u: goto label_15aba8;
            case 0x15ABACu: goto label_15abac;
            case 0x15ABB0u: goto label_15abb0;
            case 0x15ABB4u: goto label_15abb4;
            case 0x15ABB8u: goto label_15abb8;
            case 0x15ABBCu: goto label_15abbc;
            case 0x15ABC0u: goto label_15abc0;
            case 0x15ABC4u: goto label_15abc4;
            case 0x15ABC8u: goto label_15abc8;
            case 0x15ABCCu: goto label_15abcc;
            case 0x15ABD0u: goto label_15abd0;
            case 0x15ABD4u: goto label_15abd4;
            case 0x15ABD8u: goto label_15abd8;
            case 0x15ABDCu: goto label_15abdc;
            case 0x15ABE0u: goto label_15abe0;
            case 0x15ABE4u: goto label_15abe4;
            case 0x15ABE8u: goto label_15abe8;
            case 0x15ABECu: goto label_15abec;
            case 0x15ABF0u: goto label_15abf0;
            case 0x15ABF4u: goto label_15abf4;
            case 0x15ABF8u: goto label_15abf8;
            case 0x15ABFCu: goto label_15abfc;
            case 0x15AC00u: goto label_15ac00;
            case 0x15AC04u: goto label_15ac04;
            case 0x15AC08u: goto label_15ac08;
            case 0x15AC0Cu: goto label_15ac0c;
            case 0x15AC10u: goto label_15ac10;
            case 0x15AC14u: goto label_15ac14;
            case 0x15AC18u: goto label_15ac18;
            case 0x15AC1Cu: goto label_15ac1c;
            case 0x15AC20u: goto label_15ac20;
            case 0x15AC24u: goto label_15ac24;
            case 0x15AC28u: goto label_15ac28;
            case 0x15AC2Cu: goto label_15ac2c;
            case 0x15AC30u: goto label_15ac30;
            case 0x15AC34u: goto label_15ac34;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15AB5Cu; }
            if (ctx->pc != 0x15AB5Cu) { return; }
        }
    }
    ctx->pc = 0x15AB5Cu;
label_15ab5c:
    // 0x15ab5c: 0x8fa40004
    ctx->pc = 0x15ab5cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_15ab60:
    // 0x15ab60: 0x92102a
    ctx->pc = 0x15ab60u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 18)));
label_15ab64:
    // 0x15ab64: 0x10400015
label_15ab68:
    if (ctx->pc == 0x15AB68u) {
        ctx->pc = 0x15AB68u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->pc = 0x15AB6Cu;
        goto label_15ab6c;
    }
    ctx->pc = 0x15AB64u;
    {
        const bool branch_taken_0x15ab64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15AB68u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        if (branch_taken_0x15ab64) {
            ctx->pc = 0x15ABBCu;
            goto label_15abbc;
        }
    }
    ctx->pc = 0x15AB6Cu;
label_15ab6c:
    // 0x15ab6c: 0x8e230000
    ctx->pc = 0x15ab6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15ab70:
    // 0x15ab70: 0x27b00010
    ctx->pc = 0x15ab70u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 16));
label_15ab74:
    // 0x15ab74: 0x2443023
    ctx->pc = 0x15ab74u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_15ab78:
    // 0x15ab78: 0x220202d
    ctx->pc = 0x15ab78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15ab7c:
    // 0x15ab7c: 0x8c620018
    ctx->pc = 0x15ab7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_15ab80:
    // 0x15ab80: 0x282d
    ctx->pc = 0x15ab80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ab84:
    // 0x15ab84: 0x40f809
label_15ab88:
    if (ctx->pc == 0x15AB88u) {
        ctx->pc = 0x15AB88u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15AB8Cu;
        goto label_15ab8c;
    }
    ctx->pc = 0x15AB84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15AB8Cu);
        ctx->pc = 0x15AB88u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15AA70u: goto label_15aa70;
            case 0x15AA74u: goto label_15aa74;
            case 0x15AA78u: goto label_15aa78;
            case 0x15AA7Cu: goto label_15aa7c;
            case 0x15AA80u: goto label_15aa80;
            case 0x15AA84u: goto label_15aa84;
            case 0x15AA88u: goto label_15aa88;
            case 0x15AA8Cu: goto label_15aa8c;
            case 0x15AA90u: goto label_15aa90;
            case 0x15AA94u: goto label_15aa94;
            case 0x15AA98u: goto label_15aa98;
            case 0x15AA9Cu: goto label_15aa9c;
            case 0x15AAA0u: goto label_15aaa0;
            case 0x15AAA4u: goto label_15aaa4;
            case 0x15AAA8u: goto label_15aaa8;
            case 0x15AAACu: goto label_15aaac;
            case 0x15AAB0u: goto label_15aab0;
            case 0x15AAB4u: goto label_15aab4;
            case 0x15AAB8u: goto label_15aab8;
            case 0x15AABCu: goto label_15aabc;
            case 0x15AAC0u: goto label_15aac0;
            case 0x15AAC4u: goto label_15aac4;
            case 0x15AAC8u: goto label_15aac8;
            case 0x15AACCu: goto label_15aacc;
            case 0x15AAD0u: goto label_15aad0;
            case 0x15AAD4u: goto label_15aad4;
            case 0x15AAD8u: goto label_15aad8;
            case 0x15AADCu: goto label_15aadc;
            case 0x15AAE0u: goto label_15aae0;
            case 0x15AAE4u: goto label_15aae4;
            case 0x15AAE8u: goto label_15aae8;
            case 0x15AAECu: goto label_15aaec;
            case 0x15AAF0u: goto label_15aaf0;
            case 0x15AAF4u: goto label_15aaf4;
            case 0x15AAF8u: goto label_15aaf8;
            case 0x15AAFCu: goto label_15aafc;
            case 0x15AB00u: goto label_15ab00;
            case 0x15AB04u: goto label_15ab04;
            case 0x15AB08u: goto label_15ab08;
            case 0x15AB0Cu: goto label_15ab0c;
            case 0x15AB10u: goto label_15ab10;
            case 0x15AB14u: goto label_15ab14;
            case 0x15AB18u: goto label_15ab18;
            case 0x15AB1Cu: goto label_15ab1c;
            case 0x15AB20u: goto label_15ab20;
            case 0x15AB24u: goto label_15ab24;
            case 0x15AB28u: goto label_15ab28;
            case 0x15AB2Cu: goto label_15ab2c;
            case 0x15AB30u: goto label_15ab30;
            case 0x15AB34u: goto label_15ab34;
            case 0x15AB38u: goto label_15ab38;
            case 0x15AB3Cu: goto label_15ab3c;
            case 0x15AB40u: goto label_15ab40;
            case 0x15AB44u: goto label_15ab44;
            case 0x15AB48u: goto label_15ab48;
            case 0x15AB4Cu: goto label_15ab4c;
            case 0x15AB50u: goto label_15ab50;
            case 0x15AB54u: goto label_15ab54;
            case 0x15AB58u: goto label_15ab58;
            case 0x15AB5Cu: goto label_15ab5c;
            case 0x15AB60u: goto label_15ab60;
            case 0x15AB64u: goto label_15ab64;
            case 0x15AB68u: goto label_15ab68;
            case 0x15AB6Cu: goto label_15ab6c;
            case 0x15AB70u: goto label_15ab70;
            case 0x15AB74u: goto label_15ab74;
            case 0x15AB78u: goto label_15ab78;
            case 0x15AB7Cu: goto label_15ab7c;
            case 0x15AB80u: goto label_15ab80;
            case 0x15AB84u: goto label_15ab84;
            case 0x15AB88u: goto label_15ab88;
            case 0x15AB8Cu: goto label_15ab8c;
            case 0x15AB90u: goto label_15ab90;
            case 0x15AB94u: goto label_15ab94;
            case 0x15AB98u: goto label_15ab98;
            case 0x15AB9Cu: goto label_15ab9c;
            case 0x15ABA0u: goto label_15aba0;
            case 0x15ABA4u: goto label_15aba4;
            case 0x15ABA8u: goto label_15aba8;
            case 0x15ABACu: goto label_15abac;
            case 0x15ABB0u: goto label_15abb0;
            case 0x15ABB4u: goto label_15abb4;
            case 0x15ABB8u: goto label_15abb8;
            case 0x15ABBCu: goto label_15abbc;
            case 0x15ABC0u: goto label_15abc0;
            case 0x15ABC4u: goto label_15abc4;
            case 0x15ABC8u: goto label_15abc8;
            case 0x15ABCCu: goto label_15abcc;
            case 0x15ABD0u: goto label_15abd0;
            case 0x15ABD4u: goto label_15abd4;
            case 0x15ABD8u: goto label_15abd8;
            case 0x15ABDCu: goto label_15abdc;
            case 0x15ABE0u: goto label_15abe0;
            case 0x15ABE4u: goto label_15abe4;
            case 0x15ABE8u: goto label_15abe8;
            case 0x15ABECu: goto label_15abec;
            case 0x15ABF0u: goto label_15abf0;
            case 0x15ABF4u: goto label_15abf4;
            case 0x15ABF8u: goto label_15abf8;
            case 0x15ABFCu: goto label_15abfc;
            case 0x15AC00u: goto label_15ac00;
            case 0x15AC04u: goto label_15ac04;
            case 0x15AC08u: goto label_15ac08;
            case 0x15AC0Cu: goto label_15ac0c;
            case 0x15AC10u: goto label_15ac10;
            case 0x15AC14u: goto label_15ac14;
            case 0x15AC18u: goto label_15ac18;
            case 0x15AC1Cu: goto label_15ac1c;
            case 0x15AC20u: goto label_15ac20;
            case 0x15AC24u: goto label_15ac24;
            case 0x15AC28u: goto label_15ac28;
            case 0x15AC2Cu: goto label_15ac2c;
            case 0x15AC30u: goto label_15ac30;
            case 0x15AC34u: goto label_15ac34;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15AB8Cu; }
            if (ctx->pc != 0x15AB8Cu) { return; }
        }
    }
    ctx->pc = 0x15AB8Cu;
label_15ab8c:
    // 0x15ab8c: 0x8fa50004
    ctx->pc = 0x15ab8cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_15ab90:
    // 0x15ab90: 0x8fa40010
    ctx->pc = 0x15ab90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_15ab94:
    // 0x15ab94: 0x8fa60014
    ctx->pc = 0x15ab94u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_15ab98:
    // 0x15ab98: 0xc041eac
label_15ab9c:
    if (ctx->pc == 0x15AB9Cu) {
        ctx->pc = 0x15AB9Cu;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->pc = 0x15ABA0u;
        goto label_15aba0;
    }
    ctx->pc = 0x15AB98u;
    SET_GPR_U32(ctx, 31, 0x15ABA0u);
    ctx->pc = 0x15AB9Cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ABA0u; }
    }
    if (ctx->pc != 0x15ABA0u) { return; }
    ctx->pc = 0x15ABA0u;
label_15aba0:
    // 0x15aba0: 0x8e230000
    ctx->pc = 0x15aba0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15aba4:
    // 0x15aba4: 0x220202d
    ctx->pc = 0x15aba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15aba8:
    // 0x15aba8: 0x200302d
    ctx->pc = 0x15aba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15abac:
    // 0x15abac: 0x8c620020
    ctx->pc = 0x15abacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_15abb0:
    // 0x15abb0: 0x40f809
label_15abb4:
    if (ctx->pc == 0x15ABB4u) {
        ctx->pc = 0x15ABB4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x15ABB8u;
        goto label_15abb8;
    }
    ctx->pc = 0x15ABB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15ABB8u);
        ctx->pc = 0x15ABB4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15AA70u: goto label_15aa70;
            case 0x15AA74u: goto label_15aa74;
            case 0x15AA78u: goto label_15aa78;
            case 0x15AA7Cu: goto label_15aa7c;
            case 0x15AA80u: goto label_15aa80;
            case 0x15AA84u: goto label_15aa84;
            case 0x15AA88u: goto label_15aa88;
            case 0x15AA8Cu: goto label_15aa8c;
            case 0x15AA90u: goto label_15aa90;
            case 0x15AA94u: goto label_15aa94;
            case 0x15AA98u: goto label_15aa98;
            case 0x15AA9Cu: goto label_15aa9c;
            case 0x15AAA0u: goto label_15aaa0;
            case 0x15AAA4u: goto label_15aaa4;
            case 0x15AAA8u: goto label_15aaa8;
            case 0x15AAACu: goto label_15aaac;
            case 0x15AAB0u: goto label_15aab0;
            case 0x15AAB4u: goto label_15aab4;
            case 0x15AAB8u: goto label_15aab8;
            case 0x15AABCu: goto label_15aabc;
            case 0x15AAC0u: goto label_15aac0;
            case 0x15AAC4u: goto label_15aac4;
            case 0x15AAC8u: goto label_15aac8;
            case 0x15AACCu: goto label_15aacc;
            case 0x15AAD0u: goto label_15aad0;
            case 0x15AAD4u: goto label_15aad4;
            case 0x15AAD8u: goto label_15aad8;
            case 0x15AADCu: goto label_15aadc;
            case 0x15AAE0u: goto label_15aae0;
            case 0x15AAE4u: goto label_15aae4;
            case 0x15AAE8u: goto label_15aae8;
            case 0x15AAECu: goto label_15aaec;
            case 0x15AAF0u: goto label_15aaf0;
            case 0x15AAF4u: goto label_15aaf4;
            case 0x15AAF8u: goto label_15aaf8;
            case 0x15AAFCu: goto label_15aafc;
            case 0x15AB00u: goto label_15ab00;
            case 0x15AB04u: goto label_15ab04;
            case 0x15AB08u: goto label_15ab08;
            case 0x15AB0Cu: goto label_15ab0c;
            case 0x15AB10u: goto label_15ab10;
            case 0x15AB14u: goto label_15ab14;
            case 0x15AB18u: goto label_15ab18;
            case 0x15AB1Cu: goto label_15ab1c;
            case 0x15AB20u: goto label_15ab20;
            case 0x15AB24u: goto label_15ab24;
            case 0x15AB28u: goto label_15ab28;
            case 0x15AB2Cu: goto label_15ab2c;
            case 0x15AB30u: goto label_15ab30;
            case 0x15AB34u: goto label_15ab34;
            case 0x15AB38u: goto label_15ab38;
            case 0x15AB3Cu: goto label_15ab3c;
            case 0x15AB40u: goto label_15ab40;
            case 0x15AB44u: goto label_15ab44;
            case 0x15AB48u: goto label_15ab48;
            case 0x15AB4Cu: goto label_15ab4c;
            case 0x15AB50u: goto label_15ab50;
            case 0x15AB54u: goto label_15ab54;
            case 0x15AB58u: goto label_15ab58;
            case 0x15AB5Cu: goto label_15ab5c;
            case 0x15AB60u: goto label_15ab60;
            case 0x15AB64u: goto label_15ab64;
            case 0x15AB68u: goto label_15ab68;
            case 0x15AB6Cu: goto label_15ab6c;
            case 0x15AB70u: goto label_15ab70;
            case 0x15AB74u: goto label_15ab74;
            case 0x15AB78u: goto label_15ab78;
            case 0x15AB7Cu: goto label_15ab7c;
            case 0x15AB80u: goto label_15ab80;
            case 0x15AB84u: goto label_15ab84;
            case 0x15AB88u: goto label_15ab88;
            case 0x15AB8Cu: goto label_15ab8c;
            case 0x15AB90u: goto label_15ab90;
            case 0x15AB94u: goto label_15ab94;
            case 0x15AB98u: goto label_15ab98;
            case 0x15AB9Cu: goto label_15ab9c;
            case 0x15ABA0u: goto label_15aba0;
            case 0x15ABA4u: goto label_15aba4;
            case 0x15ABA8u: goto label_15aba8;
            case 0x15ABACu: goto label_15abac;
            case 0x15ABB0u: goto label_15abb0;
            case 0x15ABB4u: goto label_15abb4;
            case 0x15ABB8u: goto label_15abb8;
            case 0x15ABBCu: goto label_15abbc;
            case 0x15ABC0u: goto label_15abc0;
            case 0x15ABC4u: goto label_15abc4;
            case 0x15ABC8u: goto label_15abc8;
            case 0x15ABCCu: goto label_15abcc;
            case 0x15ABD0u: goto label_15abd0;
            case 0x15ABD4u: goto label_15abd4;
            case 0x15ABD8u: goto label_15abd8;
            case 0x15ABDCu: goto label_15abdc;
            case 0x15ABE0u: goto label_15abe0;
            case 0x15ABE4u: goto label_15abe4;
            case 0x15ABE8u: goto label_15abe8;
            case 0x15ABECu: goto label_15abec;
            case 0x15ABF0u: goto label_15abf0;
            case 0x15ABF4u: goto label_15abf4;
            case 0x15ABF8u: goto label_15abf8;
            case 0x15ABFCu: goto label_15abfc;
            case 0x15AC00u: goto label_15ac00;
            case 0x15AC04u: goto label_15ac04;
            case 0x15AC08u: goto label_15ac08;
            case 0x15AC0Cu: goto label_15ac0c;
            case 0x15AC10u: goto label_15ac10;
            case 0x15AC14u: goto label_15ac14;
            case 0x15AC18u: goto label_15ac18;
            case 0x15AC1Cu: goto label_15ac1c;
            case 0x15AC20u: goto label_15ac20;
            case 0x15AC24u: goto label_15ac24;
            case 0x15AC28u: goto label_15ac28;
            case 0x15AC2Cu: goto label_15ac2c;
            case 0x15AC30u: goto label_15ac30;
            case 0x15AC34u: goto label_15ac34;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15ABB8u; }
            if (ctx->pc != 0x15ABB8u) { return; }
        }
    }
    ctx->pc = 0x15ABB8u;
label_15abb8:
    // 0x15abb8: 0x2741021
    ctx->pc = 0x15abb8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_15abbc:
    // 0x15abbc: 0x8c43000c
    ctx->pc = 0x15abbcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_15abc0:
    // 0x15abc0: 0x50600005
label_15abc4:
    if (ctx->pc == 0x15ABC4u) {
        ctx->pc = 0x15ABC4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x15ABC8u;
        goto label_15abc8;
    }
    ctx->pc = 0x15ABC0u;
    {
        const bool branch_taken_0x15abc0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x15abc0) {
            ctx->pc = 0x15ABC4u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
            ctx->pc = 0x15ABD8u;
            goto label_15abd8;
        }
    }
    ctx->pc = 0x15ABC8u;
label_15abc8:
    // 0x15abc8: 0x8c440010
    ctx->pc = 0x15abc8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_15abcc:
    // 0x15abcc: 0x60f809
label_15abd0:
    if (ctx->pc == 0x15ABD0u) {
        ctx->pc = 0x15ABD0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15ABD4u;
        goto label_15abd4;
    }
    ctx->pc = 0x15ABCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15ABD4u);
        ctx->pc = 0x15ABD0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15AA70u: goto label_15aa70;
            case 0x15AA74u: goto label_15aa74;
            case 0x15AA78u: goto label_15aa78;
            case 0x15AA7Cu: goto label_15aa7c;
            case 0x15AA80u: goto label_15aa80;
            case 0x15AA84u: goto label_15aa84;
            case 0x15AA88u: goto label_15aa88;
            case 0x15AA8Cu: goto label_15aa8c;
            case 0x15AA90u: goto label_15aa90;
            case 0x15AA94u: goto label_15aa94;
            case 0x15AA98u: goto label_15aa98;
            case 0x15AA9Cu: goto label_15aa9c;
            case 0x15AAA0u: goto label_15aaa0;
            case 0x15AAA4u: goto label_15aaa4;
            case 0x15AAA8u: goto label_15aaa8;
            case 0x15AAACu: goto label_15aaac;
            case 0x15AAB0u: goto label_15aab0;
            case 0x15AAB4u: goto label_15aab4;
            case 0x15AAB8u: goto label_15aab8;
            case 0x15AABCu: goto label_15aabc;
            case 0x15AAC0u: goto label_15aac0;
            case 0x15AAC4u: goto label_15aac4;
            case 0x15AAC8u: goto label_15aac8;
            case 0x15AACCu: goto label_15aacc;
            case 0x15AAD0u: goto label_15aad0;
            case 0x15AAD4u: goto label_15aad4;
            case 0x15AAD8u: goto label_15aad8;
            case 0x15AADCu: goto label_15aadc;
            case 0x15AAE0u: goto label_15aae0;
            case 0x15AAE4u: goto label_15aae4;
            case 0x15AAE8u: goto label_15aae8;
            case 0x15AAECu: goto label_15aaec;
            case 0x15AAF0u: goto label_15aaf0;
            case 0x15AAF4u: goto label_15aaf4;
            case 0x15AAF8u: goto label_15aaf8;
            case 0x15AAFCu: goto label_15aafc;
            case 0x15AB00u: goto label_15ab00;
            case 0x15AB04u: goto label_15ab04;
            case 0x15AB08u: goto label_15ab08;
            case 0x15AB0Cu: goto label_15ab0c;
            case 0x15AB10u: goto label_15ab10;
            case 0x15AB14u: goto label_15ab14;
            case 0x15AB18u: goto label_15ab18;
            case 0x15AB1Cu: goto label_15ab1c;
            case 0x15AB20u: goto label_15ab20;
            case 0x15AB24u: goto label_15ab24;
            case 0x15AB28u: goto label_15ab28;
            case 0x15AB2Cu: goto label_15ab2c;
            case 0x15AB30u: goto label_15ab30;
            case 0x15AB34u: goto label_15ab34;
            case 0x15AB38u: goto label_15ab38;
            case 0x15AB3Cu: goto label_15ab3c;
            case 0x15AB40u: goto label_15ab40;
            case 0x15AB44u: goto label_15ab44;
            case 0x15AB48u: goto label_15ab48;
            case 0x15AB4Cu: goto label_15ab4c;
            case 0x15AB50u: goto label_15ab50;
            case 0x15AB54u: goto label_15ab54;
            case 0x15AB58u: goto label_15ab58;
            case 0x15AB5Cu: goto label_15ab5c;
            case 0x15AB60u: goto label_15ab60;
            case 0x15AB64u: goto label_15ab64;
            case 0x15AB68u: goto label_15ab68;
            case 0x15AB6Cu: goto label_15ab6c;
            case 0x15AB70u: goto label_15ab70;
            case 0x15AB74u: goto label_15ab74;
            case 0x15AB78u: goto label_15ab78;
            case 0x15AB7Cu: goto label_15ab7c;
            case 0x15AB80u: goto label_15ab80;
            case 0x15AB84u: goto label_15ab84;
            case 0x15AB88u: goto label_15ab88;
            case 0x15AB8Cu: goto label_15ab8c;
            case 0x15AB90u: goto label_15ab90;
            case 0x15AB94u: goto label_15ab94;
            case 0x15AB98u: goto label_15ab98;
            case 0x15AB9Cu: goto label_15ab9c;
            case 0x15ABA0u: goto label_15aba0;
            case 0x15ABA4u: goto label_15aba4;
            case 0x15ABA8u: goto label_15aba8;
            case 0x15ABACu: goto label_15abac;
            case 0x15ABB0u: goto label_15abb0;
            case 0x15ABB4u: goto label_15abb4;
            case 0x15ABB8u: goto label_15abb8;
            case 0x15ABBCu: goto label_15abbc;
            case 0x15ABC0u: goto label_15abc0;
            case 0x15ABC4u: goto label_15abc4;
            case 0x15ABC8u: goto label_15abc8;
            case 0x15ABCCu: goto label_15abcc;
            case 0x15ABD0u: goto label_15abd0;
            case 0x15ABD4u: goto label_15abd4;
            case 0x15ABD8u: goto label_15abd8;
            case 0x15ABDCu: goto label_15abdc;
            case 0x15ABE0u: goto label_15abe0;
            case 0x15ABE4u: goto label_15abe4;
            case 0x15ABE8u: goto label_15abe8;
            case 0x15ABECu: goto label_15abec;
            case 0x15ABF0u: goto label_15abf0;
            case 0x15ABF4u: goto label_15abf4;
            case 0x15ABF8u: goto label_15abf8;
            case 0x15ABFCu: goto label_15abfc;
            case 0x15AC00u: goto label_15ac00;
            case 0x15AC04u: goto label_15ac04;
            case 0x15AC08u: goto label_15ac08;
            case 0x15AC0Cu: goto label_15ac0c;
            case 0x15AC10u: goto label_15ac10;
            case 0x15AC14u: goto label_15ac14;
            case 0x15AC18u: goto label_15ac18;
            case 0x15AC1Cu: goto label_15ac1c;
            case 0x15AC20u: goto label_15ac20;
            case 0x15AC24u: goto label_15ac24;
            case 0x15AC28u: goto label_15ac28;
            case 0x15AC2Cu: goto label_15ac2c;
            case 0x15AC30u: goto label_15ac30;
            case 0x15AC34u: goto label_15ac34;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15ABD4u; }
            if (ctx->pc != 0x15ABD4u) { return; }
        }
    }
    ctx->pc = 0x15ABD4u;
label_15abd4:
    // 0x15abd4: 0x24020003
    ctx->pc = 0x15abd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_15abd8:
    // 0x15abd8: 0x16c2000a
label_15abdc:
    if (ctx->pc == 0x15ABDCu) {
        ctx->pc = 0x15ABDCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15ABE0u;
        goto label_15abe0;
    }
    ctx->pc = 0x15ABD8u;
    {
        const bool branch_taken_0x15abd8 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 2));
        ctx->pc = 0x15ABDCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15abd8) {
            ctx->pc = 0x15AC04u;
            goto label_15ac04;
        }
    }
    ctx->pc = 0x15ABE0u;
label_15abe0:
    // 0x15abe0: 0x8e6403b8
    ctx->pc = 0x15abe0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 952)));
label_15abe4:
    // 0x15abe4: 0x10800007
label_15abe8:
    if (ctx->pc == 0x15ABE8u) {
        ctx->pc = 0x15ABE8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15ABECu;
        goto label_15abec;
    }
    ctx->pc = 0x15ABE4u;
    {
        const bool branch_taken_0x15abe4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x15ABE8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15abe4) {
            ctx->pc = 0x15AC04u;
            goto label_15ac04;
        }
    }
    ctx->pc = 0x15ABECu;
label_15abec:
    // 0x15abec: 0x8e6603bc
    ctx->pc = 0x15abecu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 956)));
label_15abf0:
    // 0x15abf0: 0x246102a
    ctx->pc = 0x15abf0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 6)));
label_15abf4:
    // 0x15abf4: 0x242300b
    ctx->pc = 0x15abf4u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 18));
label_15abf8:
    // 0x15abf8: 0xc041eac
label_15abfc:
    if (ctx->pc == 0x15ABFCu) {
        ctx->pc = 0x15ABFCu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 960), GPR_U32(ctx, 6));
        ctx->pc = 0x15AC00u;
        goto label_15ac00;
    }
    ctx->pc = 0x15ABF8u;
    SET_GPR_U32(ctx, 31, 0x15AC00u);
    ctx->pc = 0x15ABFCu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 960), GPR_U32(ctx, 6));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AC00u; }
    }
    if (ctx->pc != 0x15AC00u) { return; }
    ctx->pc = 0x15AC00u;
label_15ac00:
    // 0x15ac00: 0x3c0102d
    ctx->pc = 0x15ac00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_15ac04:
    // 0x15ac04: 0xdfb00020
    ctx->pc = 0x15ac04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15ac08:
    // 0x15ac08: 0x2fe100a
    ctx->pc = 0x15ac08u;
    if (GPR_U32(ctx, 30) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 23));
label_15ac0c:
    // 0x15ac0c: 0xdfb10028
    ctx->pc = 0x15ac0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_15ac10:
    // 0x15ac10: 0xdfb20030
    ctx->pc = 0x15ac10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15ac14:
    // 0x15ac14: 0xdfb30038
    ctx->pc = 0x15ac14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_15ac18:
    // 0x15ac18: 0xdfb40040
    ctx->pc = 0x15ac18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15ac1c:
    // 0x15ac1c: 0xdfb50048
    ctx->pc = 0x15ac1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_15ac20:
    // 0x15ac20: 0xdfb60050
    ctx->pc = 0x15ac20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_15ac24:
    // 0x15ac24: 0xdfb70058
    ctx->pc = 0x15ac24u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_15ac28:
    // 0x15ac28: 0xdfbe0060
    ctx->pc = 0x15ac28u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_15ac2c:
    // 0x15ac2c: 0xdfbf0068
    ctx->pc = 0x15ac2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_15ac30:
    // 0x15ac30: 0x3e00008
label_15ac34:
    if (ctx->pc == 0x15AC34u) {
        ctx->pc = 0x15AC34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x15AC38u;
        goto label_fallthrough_0x15ac30;
    }
    ctx->pc = 0x15AC30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AC34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15AA70u: goto label_15aa70;
            case 0x15AA74u: goto label_15aa74;
            case 0x15AA78u: goto label_15aa78;
            case 0x15AA7Cu: goto label_15aa7c;
            case 0x15AA80u: goto label_15aa80;
            case 0x15AA84u: goto label_15aa84;
            case 0x15AA88u: goto label_15aa88;
            case 0x15AA8Cu: goto label_15aa8c;
            case 0x15AA90u: goto label_15aa90;
            case 0x15AA94u: goto label_15aa94;
            case 0x15AA98u: goto label_15aa98;
            case 0x15AA9Cu: goto label_15aa9c;
            case 0x15AAA0u: goto label_15aaa0;
            case 0x15AAA4u: goto label_15aaa4;
            case 0x15AAA8u: goto label_15aaa8;
            case 0x15AAACu: goto label_15aaac;
            case 0x15AAB0u: goto label_15aab0;
            case 0x15AAB4u: goto label_15aab4;
            case 0x15AAB8u: goto label_15aab8;
            case 0x15AABCu: goto label_15aabc;
            case 0x15AAC0u: goto label_15aac0;
            case 0x15AAC4u: goto label_15aac4;
            case 0x15AAC8u: goto label_15aac8;
            case 0x15AACCu: goto label_15aacc;
            case 0x15AAD0u: goto label_15aad0;
            case 0x15AAD4u: goto label_15aad4;
            case 0x15AAD8u: goto label_15aad8;
            case 0x15AADCu: goto label_15aadc;
            case 0x15AAE0u: goto label_15aae0;
            case 0x15AAE4u: goto label_15aae4;
            case 0x15AAE8u: goto label_15aae8;
            case 0x15AAECu: goto label_15aaec;
            case 0x15AAF0u: goto label_15aaf0;
            case 0x15AAF4u: goto label_15aaf4;
            case 0x15AAF8u: goto label_15aaf8;
            case 0x15AAFCu: goto label_15aafc;
            case 0x15AB00u: goto label_15ab00;
            case 0x15AB04u: goto label_15ab04;
            case 0x15AB08u: goto label_15ab08;
            case 0x15AB0Cu: goto label_15ab0c;
            case 0x15AB10u: goto label_15ab10;
            case 0x15AB14u: goto label_15ab14;
            case 0x15AB18u: goto label_15ab18;
            case 0x15AB1Cu: goto label_15ab1c;
            case 0x15AB20u: goto label_15ab20;
            case 0x15AB24u: goto label_15ab24;
            case 0x15AB28u: goto label_15ab28;
            case 0x15AB2Cu: goto label_15ab2c;
            case 0x15AB30u: goto label_15ab30;
            case 0x15AB34u: goto label_15ab34;
            case 0x15AB38u: goto label_15ab38;
            case 0x15AB3Cu: goto label_15ab3c;
            case 0x15AB40u: goto label_15ab40;
            case 0x15AB44u: goto label_15ab44;
            case 0x15AB48u: goto label_15ab48;
            case 0x15AB4Cu: goto label_15ab4c;
            case 0x15AB50u: goto label_15ab50;
            case 0x15AB54u: goto label_15ab54;
            case 0x15AB58u: goto label_15ab58;
            case 0x15AB5Cu: goto label_15ab5c;
            case 0x15AB60u: goto label_15ab60;
            case 0x15AB64u: goto label_15ab64;
            case 0x15AB68u: goto label_15ab68;
            case 0x15AB6Cu: goto label_15ab6c;
            case 0x15AB70u: goto label_15ab70;
            case 0x15AB74u: goto label_15ab74;
            case 0x15AB78u: goto label_15ab78;
            case 0x15AB7Cu: goto label_15ab7c;
            case 0x15AB80u: goto label_15ab80;
            case 0x15AB84u: goto label_15ab84;
            case 0x15AB88u: goto label_15ab88;
            case 0x15AB8Cu: goto label_15ab8c;
            case 0x15AB90u: goto label_15ab90;
            case 0x15AB94u: goto label_15ab94;
            case 0x15AB98u: goto label_15ab98;
            case 0x15AB9Cu: goto label_15ab9c;
            case 0x15ABA0u: goto label_15aba0;
            case 0x15ABA4u: goto label_15aba4;
            case 0x15ABA8u: goto label_15aba8;
            case 0x15ABACu: goto label_15abac;
            case 0x15ABB0u: goto label_15abb0;
            case 0x15ABB4u: goto label_15abb4;
            case 0x15ABB8u: goto label_15abb8;
            case 0x15ABBCu: goto label_15abbc;
            case 0x15ABC0u: goto label_15abc0;
            case 0x15ABC4u: goto label_15abc4;
            case 0x15ABC8u: goto label_15abc8;
            case 0x15ABCCu: goto label_15abcc;
            case 0x15ABD0u: goto label_15abd0;
            case 0x15ABD4u: goto label_15abd4;
            case 0x15ABD8u: goto label_15abd8;
            case 0x15ABDCu: goto label_15abdc;
            case 0x15ABE0u: goto label_15abe0;
            case 0x15ABE4u: goto label_15abe4;
            case 0x15ABE8u: goto label_15abe8;
            case 0x15ABECu: goto label_15abec;
            case 0x15ABF0u: goto label_15abf0;
            case 0x15ABF4u: goto label_15abf4;
            case 0x15ABF8u: goto label_15abf8;
            case 0x15ABFCu: goto label_15abfc;
            case 0x15AC00u: goto label_15ac00;
            case 0x15AC04u: goto label_15ac04;
            case 0x15AC08u: goto label_15ac08;
            case 0x15AC0Cu: goto label_15ac0c;
            case 0x15AC10u: goto label_15ac10;
            case 0x15AC14u: goto label_15ac14;
            case 0x15AC18u: goto label_15ac18;
            case 0x15AC1Cu: goto label_15ac1c;
            case 0x15AC20u: goto label_15ac20;
            case 0x15AC24u: goto label_15ac24;
            case 0x15AC28u: goto label_15ac28;
            case 0x15AC2Cu: goto label_15ac2c;
            case 0x15AC30u: goto label_15ac30;
            case 0x15AC34u: goto label_15ac34;
            default: break;
        }
        return;
    }
label_fallthrough_0x15ac30:
    ctx->pc = 0x15AC38u;
}
