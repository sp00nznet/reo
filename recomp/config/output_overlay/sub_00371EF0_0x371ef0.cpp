#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00371EF0
// Address: 0x371ef0 - 0x372210
void sub_00371EF0_0x371ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x371ef0u;

label_371ef0:
    // 0x371ef0: 0x27bdffc0
    ctx->pc = 0x371ef0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_371ef4:
    // 0x371ef4: 0xffbf0020
    ctx->pc = 0x371ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_371ef8:
    // 0x371ef8: 0x7fb10010
    ctx->pc = 0x371ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_371efc:
    // 0x371efc: 0x7fb00000
    ctx->pc = 0x371efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_371f00:
    // 0x371f00: 0x80882d
    ctx->pc = 0x371f00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_371f04:
    // 0x371f04: 0x90830002
    ctx->pc = 0x371f04u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_371f08:
    // 0x371f08: 0x2c61000e
    ctx->pc = 0x371f08u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 14));
label_371f0c:
    // 0x371f0c: 0x102000bb
label_371f10:
    if (ctx->pc == 0x371F10u) {
        ctx->pc = 0x371F10u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x371F14u;
        goto label_371f14;
    }
    ctx->pc = 0x371F0Cu;
    {
        const bool branch_taken_0x371f0c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x371F10u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x371f0c) {
            ctx->pc = 0x3721FCu;
            goto label_3721fc;
        }
    }
    ctx->pc = 0x371F14u;
label_371f14:
    // 0x371f14: 0x3c050039
    ctx->pc = 0x371f14u;
    SET_GPR_U32(ctx, 5, ((uint32_t)57 << 16));
label_371f18:
    // 0x371f18: 0x31880
    ctx->pc = 0x371f18u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_371f1c:
    // 0x371f1c: 0x24a5ca30
    ctx->pc = 0x371f1cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294953520));
label_371f20:
    // 0x371f20: 0x651821
    ctx->pc = 0x371f20u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_371f24:
    // 0x371f24: 0x8c630000
    ctx->pc = 0x371f24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_371f28:
    // 0x371f28: 0x600008
label_371f2c:
    if (ctx->pc == 0x371F2Cu) {
        ctx->pc = 0x371F30u;
        goto label_371f30;
    }
    ctx->pc = 0x371F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x371EF0u: goto label_371ef0;
            case 0x371EF4u: goto label_371ef4;
            case 0x371EF8u: goto label_371ef8;
            case 0x371EFCu: goto label_371efc;
            case 0x371F00u: goto label_371f00;
            case 0x371F04u: goto label_371f04;
            case 0x371F08u: goto label_371f08;
            case 0x371F0Cu: goto label_371f0c;
            case 0x371F10u: goto label_371f10;
            case 0x371F14u: goto label_371f14;
            case 0x371F18u: goto label_371f18;
            case 0x371F1Cu: goto label_371f1c;
            case 0x371F20u: goto label_371f20;
            case 0x371F24u: goto label_371f24;
            case 0x371F28u: goto label_371f28;
            case 0x371F2Cu: goto label_371f2c;
            case 0x371F30u: goto label_371f30;
            case 0x371F34u: goto label_371f34;
            case 0x371F38u: goto label_371f38;
            case 0x371F3Cu: goto label_371f3c;
            case 0x371F40u: goto label_371f40;
            case 0x371F44u: goto label_371f44;
            case 0x371F48u: goto label_371f48;
            case 0x371F4Cu: goto label_371f4c;
            case 0x371F50u: goto label_371f50;
            case 0x371F54u: goto label_371f54;
            case 0x371F58u: goto label_371f58;
            case 0x371F5Cu: goto label_371f5c;
            case 0x371F60u: goto label_371f60;
            case 0x371F64u: goto label_371f64;
            case 0x371F68u: goto label_371f68;
            case 0x371F6Cu: goto label_371f6c;
            case 0x371F70u: goto label_371f70;
            case 0x371F74u: goto label_371f74;
            case 0x371F78u: goto label_371f78;
            case 0x371F7Cu: goto label_371f7c;
            case 0x371F80u: goto label_371f80;
            case 0x371F84u: goto label_371f84;
            case 0x371F88u: goto label_371f88;
            case 0x371F8Cu: goto label_371f8c;
            case 0x371F90u: goto label_371f90;
            case 0x371F94u: goto label_371f94;
            case 0x371F98u: goto label_371f98;
            case 0x371F9Cu: goto label_371f9c;
            case 0x371FA0u: goto label_371fa0;
            case 0x371FA4u: goto label_371fa4;
            case 0x371FA8u: goto label_371fa8;
            case 0x371FACu: goto label_371fac;
            case 0x371FB0u: goto label_371fb0;
            case 0x371FB4u: goto label_371fb4;
            case 0x371FB8u: goto label_371fb8;
            case 0x371FBCu: goto label_371fbc;
            case 0x371FC0u: goto label_371fc0;
            case 0x371FC4u: goto label_371fc4;
            case 0x371FC8u: goto label_371fc8;
            case 0x371FCCu: goto label_371fcc;
            case 0x371FD0u: goto label_371fd0;
            case 0x371FD4u: goto label_371fd4;
            case 0x371FD8u: goto label_371fd8;
            case 0x371FDCu: goto label_371fdc;
            case 0x371FE0u: goto label_371fe0;
            case 0x371FE4u: goto label_371fe4;
            case 0x371FE8u: goto label_371fe8;
            case 0x371FECu: goto label_371fec;
            case 0x371FF0u: goto label_371ff0;
            case 0x371FF4u: goto label_371ff4;
            case 0x371FF8u: goto label_371ff8;
            case 0x371FFCu: goto label_371ffc;
            case 0x372000u: goto label_372000;
            case 0x372004u: goto label_372004;
            case 0x372008u: goto label_372008;
            case 0x37200Cu: goto label_37200c;
            case 0x372010u: goto label_372010;
            case 0x372014u: goto label_372014;
            case 0x372018u: goto label_372018;
            case 0x37201Cu: goto label_37201c;
            case 0x372020u: goto label_372020;
            case 0x372024u: goto label_372024;
            case 0x372028u: goto label_372028;
            case 0x37202Cu: goto label_37202c;
            case 0x372030u: goto label_372030;
            case 0x372034u: goto label_372034;
            case 0x372038u: goto label_372038;
            case 0x37203Cu: goto label_37203c;
            case 0x372040u: goto label_372040;
            case 0x372044u: goto label_372044;
            case 0x372048u: goto label_372048;
            case 0x37204Cu: goto label_37204c;
            case 0x372050u: goto label_372050;
            case 0x372054u: goto label_372054;
            case 0x372058u: goto label_372058;
            case 0x37205Cu: goto label_37205c;
            case 0x372060u: goto label_372060;
            case 0x372064u: goto label_372064;
            case 0x372068u: goto label_372068;
            case 0x37206Cu: goto label_37206c;
            case 0x372070u: goto label_372070;
            case 0x372074u: goto label_372074;
            case 0x372078u: goto label_372078;
            case 0x37207Cu: goto label_37207c;
            case 0x372080u: goto label_372080;
            case 0x372084u: goto label_372084;
            case 0x372088u: goto label_372088;
            case 0x37208Cu: goto label_37208c;
            case 0x372090u: goto label_372090;
            case 0x372094u: goto label_372094;
            case 0x372098u: goto label_372098;
            case 0x37209Cu: goto label_37209c;
            case 0x3720A0u: goto label_3720a0;
            case 0x3720A4u: goto label_3720a4;
            case 0x3720A8u: goto label_3720a8;
            case 0x3720ACu: goto label_3720ac;
            case 0x3720B0u: goto label_3720b0;
            case 0x3720B4u: goto label_3720b4;
            case 0x3720B8u: goto label_3720b8;
            case 0x3720BCu: goto label_3720bc;
            case 0x3720C0u: goto label_3720c0;
            case 0x3720C4u: goto label_3720c4;
            case 0x3720C8u: goto label_3720c8;
            case 0x3720CCu: goto label_3720cc;
            case 0x3720D0u: goto label_3720d0;
            case 0x3720D4u: goto label_3720d4;
            case 0x3720D8u: goto label_3720d8;
            case 0x3720DCu: goto label_3720dc;
            case 0x3720E0u: goto label_3720e0;
            case 0x3720E4u: goto label_3720e4;
            case 0x3720E8u: goto label_3720e8;
            case 0x3720ECu: goto label_3720ec;
            case 0x3720F0u: goto label_3720f0;
            case 0x3720F4u: goto label_3720f4;
            case 0x3720F8u: goto label_3720f8;
            case 0x3720FCu: goto label_3720fc;
            case 0x372100u: goto label_372100;
            case 0x372104u: goto label_372104;
            case 0x372108u: goto label_372108;
            case 0x37210Cu: goto label_37210c;
            case 0x372110u: goto label_372110;
            case 0x372114u: goto label_372114;
            case 0x372118u: goto label_372118;
            case 0x37211Cu: goto label_37211c;
            case 0x372120u: goto label_372120;
            case 0x372124u: goto label_372124;
            case 0x372128u: goto label_372128;
            case 0x37212Cu: goto label_37212c;
            case 0x372130u: goto label_372130;
            case 0x372134u: goto label_372134;
            case 0x372138u: goto label_372138;
            case 0x37213Cu: goto label_37213c;
            case 0x372140u: goto label_372140;
            case 0x372144u: goto label_372144;
            case 0x372148u: goto label_372148;
            case 0x37214Cu: goto label_37214c;
            case 0x372150u: goto label_372150;
            case 0x372154u: goto label_372154;
            case 0x372158u: goto label_372158;
            case 0x37215Cu: goto label_37215c;
            case 0x372160u: goto label_372160;
            case 0x372164u: goto label_372164;
            case 0x372168u: goto label_372168;
            case 0x37216Cu: goto label_37216c;
            case 0x372170u: goto label_372170;
            case 0x372174u: goto label_372174;
            case 0x372178u: goto label_372178;
            case 0x37217Cu: goto label_37217c;
            case 0x372180u: goto label_372180;
            case 0x372184u: goto label_372184;
            case 0x372188u: goto label_372188;
            case 0x37218Cu: goto label_37218c;
            case 0x372190u: goto label_372190;
            case 0x372194u: goto label_372194;
            case 0x372198u: goto label_372198;
            case 0x37219Cu: goto label_37219c;
            case 0x3721A0u: goto label_3721a0;
            case 0x3721A4u: goto label_3721a4;
            case 0x3721A8u: goto label_3721a8;
            case 0x3721ACu: goto label_3721ac;
            case 0x3721B0u: goto label_3721b0;
            case 0x3721B4u: goto label_3721b4;
            case 0x3721B8u: goto label_3721b8;
            case 0x3721BCu: goto label_3721bc;
            case 0x3721C0u: goto label_3721c0;
            case 0x3721C4u: goto label_3721c4;
            case 0x3721C8u: goto label_3721c8;
            case 0x3721CCu: goto label_3721cc;
            case 0x3721D0u: goto label_3721d0;
            case 0x3721D4u: goto label_3721d4;
            case 0x3721D8u: goto label_3721d8;
            case 0x3721DCu: goto label_3721dc;
            case 0x3721E0u: goto label_3721e0;
            case 0x3721E4u: goto label_3721e4;
            case 0x3721E8u: goto label_3721e8;
            case 0x3721ECu: goto label_3721ec;
            case 0x3721F0u: goto label_3721f0;
            case 0x3721F4u: goto label_3721f4;
            case 0x3721F8u: goto label_3721f8;
            case 0x3721FCu: goto label_3721fc;
            case 0x372200u: goto label_372200;
            case 0x372204u: goto label_372204;
            case 0x372208u: goto label_372208;
            case 0x37220Cu: goto label_37220c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x371F30u;
label_371f30:
    // 0x371f30: 0x8e220034
    ctx->pc = 0x371f30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_371f34:
    // 0x371f34: 0x8c45082c
    ctx->pc = 0x371f34u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 2092)));
label_371f38:
    // 0x371f38: 0xc064038
label_371f3c:
    if (ctx->pc == 0x371F3Cu) {
        ctx->pc = 0x371F3Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x371F40u;
        goto label_371f40;
    }
    ctx->pc = 0x371F38u;
    SET_GPR_U32(ctx, 31, 0x371F40u);
    ctx->pc = 0x371F3Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1900E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1900E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371F40u; }
        if (ctx->pc != 0x371F40u) { return; }
    }
    ctx->pc = 0x371F40u;
label_371f40:
    // 0x371f40: 0x92250175
    ctx->pc = 0x371f40u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 373)));
label_371f44:
    // 0x371f44: 0xc1acca0
label_371f48:
    if (ctx->pc == 0x371F48u) {
        ctx->pc = 0x371F48u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x371F4Cu;
        goto label_371f4c;
    }
    ctx->pc = 0x371F44u;
    SET_GPR_U32(ctx, 31, 0x371F4Cu);
    ctx->pc = 0x371F48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x6B3280u;
    {
        auto targetFn = runtime->lookupFunction(0x6B3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371F4Cu; }
        if (ctx->pc != 0x371F4Cu) { return; }
    }
    ctx->pc = 0x371F4Cu;
label_371f4c:
    // 0x371f4c: 0x9223054d
    ctx->pc = 0x371f4cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1357)));
label_371f50:
    // 0x371f50: 0x24020001
    ctx->pc = 0x371f50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_371f54:
    // 0x371f54: 0x14620008
label_371f58:
    if (ctx->pc == 0x371F58u) {
        ctx->pc = 0x371F5Cu;
        goto label_371f5c;
    }
    ctx->pc = 0x371F54u;
    {
        const bool branch_taken_0x371f54 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x371f54) {
            ctx->pc = 0x371F78u;
            goto label_371f78;
        }
    }
    ctx->pc = 0x371F5Cu;
label_371f5c:
    // 0x371f5c: 0x92240b98
    ctx->pc = 0x371f5cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2968)));
label_371f60:
    // 0x371f60: 0x3c020038
    ctx->pc = 0x371f60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_371f64:
    // 0x371f64: 0x24426330
    ctx->pc = 0x371f64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25392));
label_371f68:
    // 0x371f68: 0x41880
    ctx->pc = 0x371f68u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
label_371f6c:
    // 0x371f6c: 0x641821
    ctx->pc = 0x371f6cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_371f70:
    // 0x371f70: 0x31880
    ctx->pc = 0x371f70u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_371f74:
    // 0x371f74: 0x438021
    ctx->pc = 0x371f74u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_371f78:
    // 0x371f78: 0x8e280ce8
    ctx->pc = 0x371f78u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 3304)));
label_371f7c:
    // 0x371f7c: 0x200302d
    ctx->pc = 0x371f7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_371f80:
    // 0x371f80: 0x220202d
    ctx->pc = 0x371f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_371f84:
    // 0x371f84: 0x262500f4
    ctx->pc = 0x371f84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 244));
label_371f88:
    // 0x371f88: 0xc0dcd8c
label_371f8c:
    if (ctx->pc == 0x371F8Cu) {
        ctx->pc = 0x371F8Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x371F90u;
        goto label_371f90;
    }
    ctx->pc = 0x371F88u;
    SET_GPR_U32(ctx, 31, 0x371F90u);
    ctx->pc = 0x371F8Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x373630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00373630_0x373630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371F90u; }
    }
    if (ctx->pc != 0x371F90u) { return; }
    ctx->pc = 0x371F90u;
label_371f90:
    // 0x371f90: 0x1000009b
label_371f94:
    if (ctx->pc == 0x371F94u) {
        ctx->pc = 0x371F94u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x371F98u;
        goto label_371f98;
    }
    ctx->pc = 0x371F90u;
    {
        const bool branch_taken_0x371f90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x371F94u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x371f90) {
            ctx->pc = 0x372200u;
            goto label_372200;
        }
    }
    ctx->pc = 0x371F98u;
label_371f98:
    // 0x371f98: 0x8e220034
    ctx->pc = 0x371f98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_371f9c:
    // 0x371f9c: 0x8c45082c
    ctx->pc = 0x371f9cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 2092)));
label_371fa0:
    // 0x371fa0: 0xc064038
label_371fa4:
    if (ctx->pc == 0x371FA4u) {
        ctx->pc = 0x371FA4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x371FA8u;
        goto label_371fa8;
    }
    ctx->pc = 0x371FA0u;
    SET_GPR_U32(ctx, 31, 0x371FA8u);
    ctx->pc = 0x371FA4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1900E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1900E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371FA8u; }
        if (ctx->pc != 0x371FA8u) { return; }
    }
    ctx->pc = 0x371FA8u;
label_371fa8:
    // 0x371fa8: 0x92250175
    ctx->pc = 0x371fa8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 373)));
label_371fac:
    // 0x371fac: 0xc1acca0
label_371fb0:
    if (ctx->pc == 0x371FB0u) {
        ctx->pc = 0x371FB0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x371FB4u;
        goto label_371fb4;
    }
    ctx->pc = 0x371FACu;
    SET_GPR_U32(ctx, 31, 0x371FB4u);
    ctx->pc = 0x371FB0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x6B3280u;
    {
        auto targetFn = runtime->lookupFunction(0x6B3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371FB4u; }
        if (ctx->pc != 0x371FB4u) { return; }
    }
    ctx->pc = 0x371FB4u;
label_371fb4:
    // 0x371fb4: 0x9223054d
    ctx->pc = 0x371fb4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1357)));
label_371fb8:
    // 0x371fb8: 0x24020001
    ctx->pc = 0x371fb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_371fbc:
    // 0x371fbc: 0x14620009
label_371fc0:
    if (ctx->pc == 0x371FC0u) {
        ctx->pc = 0x371FC0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x371FC4u;
        goto label_371fc4;
    }
    ctx->pc = 0x371FBCu;
    {
        const bool branch_taken_0x371fbc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x371FC0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x371fbc) {
            ctx->pc = 0x371FE4u;
            goto label_371fe4;
        }
    }
    ctx->pc = 0x371FC4u;
label_371fc4:
    // 0x371fc4: 0x96240bb4
    ctx->pc = 0x371fc4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2996)));
label_371fc8:
    // 0x371fc8: 0x3c020038
    ctx->pc = 0x371fc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_371fcc:
    // 0x371fcc: 0x244263d0
    ctx->pc = 0x371fccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25552));
label_371fd0:
    // 0x371fd0: 0x41880
    ctx->pc = 0x371fd0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
label_371fd4:
    // 0x371fd4: 0x641821
    ctx->pc = 0x371fd4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_371fd8:
    // 0x371fd8: 0x31880
    ctx->pc = 0x371fd8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_371fdc:
    // 0x371fdc: 0x438021
    ctx->pc = 0x371fdcu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_371fe0:
    // 0x371fe0: 0x200302d
    ctx->pc = 0x371fe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_371fe4:
    // 0x371fe4: 0x220202d
    ctx->pc = 0x371fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_371fe8:
    // 0x371fe8: 0x262500f4
    ctx->pc = 0x371fe8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 244));
label_371fec:
    // 0x371fec: 0x382d
    ctx->pc = 0x371fecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_371ff0:
    // 0x371ff0: 0xc0dcd8c
label_371ff4:
    if (ctx->pc == 0x371FF4u) {
        ctx->pc = 0x371FF4u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x371FF8u;
        goto label_371ff8;
    }
    ctx->pc = 0x371FF0u;
    SET_GPR_U32(ctx, 31, 0x371FF8u);
    ctx->pc = 0x371FF4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x373630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00373630_0x373630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371FF8u; }
    }
    if (ctx->pc != 0x371FF8u) { return; }
    ctx->pc = 0x371FF8u;
label_371ff8:
    // 0x371ff8: 0x10000080
label_371ffc:
    if (ctx->pc == 0x371FFCu) {
        ctx->pc = 0x372000u;
        goto label_372000;
    }
    ctx->pc = 0x371FF8u;
    {
        const bool branch_taken_0x371ff8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x371ff8) {
            ctx->pc = 0x3721FCu;
            goto label_3721fc;
        }
    }
    ctx->pc = 0x372000u;
label_372000:
    // 0x372000: 0x8e220034
    ctx->pc = 0x372000u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_372004:
    // 0x372004: 0x8c450828
    ctx->pc = 0x372004u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 2088)));
label_372008:
    // 0x372008: 0xc064038
label_37200c:
    if (ctx->pc == 0x37200Cu) {
        ctx->pc = 0x37200Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x372010u;
        goto label_372010;
    }
    ctx->pc = 0x372008u;
    SET_GPR_U32(ctx, 31, 0x372010u);
    ctx->pc = 0x37200Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1900E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1900E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372010u; }
        if (ctx->pc != 0x372010u) { return; }
    }
    ctx->pc = 0x372010u;
label_372010:
    // 0x372010: 0x92250175
    ctx->pc = 0x372010u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 373)));
label_372014:
    // 0x372014: 0xc1acca0
label_372018:
    if (ctx->pc == 0x372018u) {
        ctx->pc = 0x372018u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x37201Cu;
        goto label_37201c;
    }
    ctx->pc = 0x372014u;
    SET_GPR_U32(ctx, 31, 0x37201Cu);
    ctx->pc = 0x372018u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x6B3280u;
    {
        auto targetFn = runtime->lookupFunction(0x6B3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37201Cu; }
        if (ctx->pc != 0x37201Cu) { return; }
    }
    ctx->pc = 0x37201Cu;
label_37201c:
    // 0x37201c: 0xc06e0a8
label_372020:
    if (ctx->pc == 0x372020u) {
        ctx->pc = 0x372020u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 56));
        ctx->pc = 0x372024u;
        goto label_372024;
    }
    ctx->pc = 0x37201Cu;
    SET_GPR_U32(ctx, 31, 0x372024u);
    ctx->pc = 0x372020u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 56));
    ctx->pc = 0x1B82A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1B82A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372024u; }
        if (ctx->pc != 0x372024u) { return; }
    }
    ctx->pc = 0x372024u;
label_372024:
    // 0x372024: 0x10400003
label_372028:
    if (ctx->pc == 0x372028u) {
        ctx->pc = 0x37202Cu;
        goto label_37202c;
    }
    ctx->pc = 0x372024u;
    {
        const bool branch_taken_0x372024 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x372024) {
            ctx->pc = 0x372034u;
            goto label_372034;
        }
    }
    ctx->pc = 0x37202Cu;
label_37202c:
    // 0x37202c: 0xc06cd50
label_372030:
    if (ctx->pc == 0x372030u) {
        ctx->pc = 0x372030u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x372034u;
        goto label_372034;
    }
    ctx->pc = 0x37202Cu;
    SET_GPR_U32(ctx, 31, 0x372034u);
    ctx->pc = 0x372030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B3540u;
    {
        auto targetFn = runtime->lookupFunction(0x1B3540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372034u; }
        if (ctx->pc != 0x372034u) { return; }
    }
    ctx->pc = 0x372034u;
label_372034:
    // 0x372034: 0x9223054d
    ctx->pc = 0x372034u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1357)));
label_372038:
    // 0x372038: 0x24020001
    ctx->pc = 0x372038u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_37203c:
    // 0x37203c: 0x14620008
label_372040:
    if (ctx->pc == 0x372040u) {
        ctx->pc = 0x372044u;
        goto label_372044;
    }
    ctx->pc = 0x37203Cu;
    {
        const bool branch_taken_0x37203c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x37203c) {
            ctx->pc = 0x372060u;
            goto label_372060;
        }
    }
    ctx->pc = 0x372044u;
label_372044:
    // 0x372044: 0x92240003
    ctx->pc = 0x372044u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_372048:
    // 0x372048: 0x3c020038
    ctx->pc = 0x372048u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_37204c:
    // 0x37204c: 0x244271e0
    ctx->pc = 0x37204cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 29152));
label_372050:
    // 0x372050: 0x41880
    ctx->pc = 0x372050u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
label_372054:
    // 0x372054: 0x431021
    ctx->pc = 0x372054u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_372058:
    // 0x372058: 0x10000007
label_37205c:
    if (ctx->pc == 0x37205Cu) {
        ctx->pc = 0x37205Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x372060u;
        goto label_372060;
    }
    ctx->pc = 0x372058u;
    {
        const bool branch_taken_0x372058 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37205Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x372058) {
            ctx->pc = 0x372078u;
            goto label_372078;
        }
    }
    ctx->pc = 0x372060u;
label_372060:
    // 0x372060: 0x92240003
    ctx->pc = 0x372060u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_372064:
    // 0x372064: 0x3c020038
    ctx->pc = 0x372064u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_372068:
    // 0x372068: 0x24420010
    ctx->pc = 0x372068u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16));
label_37206c:
    // 0x37206c: 0x41880
    ctx->pc = 0x37206cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
label_372070:
    // 0x372070: 0x431021
    ctx->pc = 0x372070u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_372074:
    // 0x372074: 0x8c460000
    ctx->pc = 0x372074u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_372078:
    // 0x372078: 0x96250bba
    ctx->pc = 0x372078u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 3002)));
label_37207c:
    // 0x37207c: 0x308300ff
    ctx->pc = 0x37207cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 255));
label_372080:
    // 0x372080: 0x24020025
    ctx->pc = 0x372080u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 37));
label_372084:
    // 0x372084: 0x52080
    ctx->pc = 0x372084u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 2));
label_372088:
    // 0x372088: 0x852021
    ctx->pc = 0x372088u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_37208c:
    // 0x37208c: 0x42080
    ctx->pc = 0x37208cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
label_372090:
    // 0x372090: 0x10620033
label_372094:
    if (ctx->pc == 0x372094u) {
        ctx->pc = 0x372094u;
        SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->pc = 0x372098u;
        goto label_372098;
    }
    ctx->pc = 0x372090u;
    {
        const bool branch_taken_0x372090 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x372094u;
        SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        if (branch_taken_0x372090) {
            ctx->pc = 0x372160u;
            goto label_372160;
        }
    }
    ctx->pc = 0x372098u;
label_372098:
    // 0x372098: 0x2402001b
    ctx->pc = 0x372098u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 27));
label_37209c:
    // 0x37209c: 0x1062001f
label_3720a0:
    if (ctx->pc == 0x3720A0u) {
        ctx->pc = 0x3720A4u;
        goto label_3720a4;
    }
    ctx->pc = 0x37209Cu;
    {
        const bool branch_taken_0x37209c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x37209c) {
            ctx->pc = 0x37211Cu;
            goto label_37211c;
        }
    }
    ctx->pc = 0x3720A4u;
label_3720a4:
    // 0x3720a4: 0x24020016
    ctx->pc = 0x3720a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 22));
label_3720a8:
    // 0x3720a8: 0x1062000b
label_3720ac:
    if (ctx->pc == 0x3720ACu) {
        ctx->pc = 0x3720B0u;
        goto label_3720b0;
    }
    ctx->pc = 0x3720A8u;
    {
        const bool branch_taken_0x3720a8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x3720a8) {
            ctx->pc = 0x3720D8u;
            goto label_3720d8;
        }
    }
    ctx->pc = 0x3720B0u;
label_3720b0:
    // 0x3720b0: 0x24020011
    ctx->pc = 0x3720b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 17));
label_3720b4:
    // 0x3720b4: 0x10620004
label_3720b8:
    if (ctx->pc == 0x3720B8u) {
        ctx->pc = 0x3720B8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3720BCu;
        goto label_3720bc;
    }
    ctx->pc = 0x3720B4u;
    {
        const bool branch_taken_0x3720b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x3720B8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x3720b4) {
            ctx->pc = 0x3720C8u;
            goto label_3720c8;
        }
    }
    ctx->pc = 0x3720BCu;
label_3720bc:
    // 0x3720bc: 0x1000002d
label_3720c0:
    if (ctx->pc == 0x3720C0u) {
        ctx->pc = 0x3720C0u;
        SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3279)));
        ctx->pc = 0x3720C4u;
        goto label_3720c4;
    }
    ctx->pc = 0x3720BCu;
    {
        const bool branch_taken_0x3720bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3720C0u;
        SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3279)));
        if (branch_taken_0x3720bc) {
            ctx->pc = 0x372174u;
            goto label_372174;
        }
    }
    ctx->pc = 0x3720C4u;
label_3720c4:
    // 0x3720c4: 0x220202d
    ctx->pc = 0x3720c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3720c8:
    // 0x3720c8: 0xc1a54e4
label_3720cc:
    if (ctx->pc == 0x3720CCu) {
        ctx->pc = 0x3720D0u;
        goto label_3720d0;
    }
    ctx->pc = 0x3720C8u;
    SET_GPR_U32(ctx, 31, 0x3720D0u);
    ctx->pc = 0x695390u;
    {
        auto targetFn = runtime->lookupFunction(0x695390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3720D0u; }
        if (ctx->pc != 0x3720D0u) { return; }
    }
    ctx->pc = 0x3720D0u;
label_3720d0:
    // 0x3720d0: 0x1000004a
label_3720d4:
    if (ctx->pc == 0x3720D4u) {
        ctx->pc = 0x3720D8u;
        goto label_3720d8;
    }
    ctx->pc = 0x3720D0u;
    {
        const bool branch_taken_0x3720d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x3720d0) {
            ctx->pc = 0x3721FCu;
            goto label_3721fc;
        }
    }
    ctx->pc = 0x3720D8u;
label_3720d8:
    // 0x3720d8: 0x92290ccf
    ctx->pc = 0x3720d8u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3279)));
label_3720dc:
    // 0x3720dc: 0x3c070061
    ctx->pc = 0x3720dcu;
    SET_GPR_U32(ctx, 7, ((uint32_t)97 << 16));
label_3720e0:
    // 0x3720e0: 0x92280ccc
    ctx->pc = 0x3720e0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3276)));
label_3720e4:
    // 0x3720e4: 0x220202d
    ctx->pc = 0x3720e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3720e8:
    // 0x3720e8: 0x92230ccd
    ctx->pc = 0x3720e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3277)));
label_3720ec:
    // 0x3720ec: 0x262500f4
    ctx->pc = 0x3720ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 244));
label_3720f0:
    // 0x3720f0: 0x92220cce
    ctx->pc = 0x3720f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3278)));
label_3720f4:
    // 0x3720f4: 0x24e75be0
    ctx->pc = 0x3720f4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 23520));
label_3720f8:
    // 0x3720f8: 0x94e00
    ctx->pc = 0x3720f8u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 24));
label_3720fc:
    // 0x3720fc: 0x84400
    ctx->pc = 0x3720fcu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 16));
label_372100:
    // 0x372100: 0x1284025
    ctx->pc = 0x372100u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_372104:
    // 0x372104: 0x31a00
    ctx->pc = 0x372104u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
label_372108:
    // 0x372108: 0x681825
    ctx->pc = 0x372108u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_37210c:
    // 0x37210c: 0xc0dcd8c
label_372110:
    if (ctx->pc == 0x372110u) {
        ctx->pc = 0x372110u;
        SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x372114u;
        goto label_372114;
    }
    ctx->pc = 0x37210Cu;
    SET_GPR_U32(ctx, 31, 0x372114u);
    ctx->pc = 0x372110u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x373630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00373630_0x373630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372114u; }
    }
    if (ctx->pc != 0x372114u) { return; }
    ctx->pc = 0x372114u;
label_372114:
    // 0x372114: 0x10000039
label_372118:
    if (ctx->pc == 0x372118u) {
        ctx->pc = 0x37211Cu;
        goto label_37211c;
    }
    ctx->pc = 0x372114u;
    {
        const bool branch_taken_0x372114 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x372114) {
            ctx->pc = 0x3721FCu;
            goto label_3721fc;
        }
    }
    ctx->pc = 0x37211Cu;
label_37211c:
    // 0x37211c: 0x92290ccf
    ctx->pc = 0x37211cu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3279)));
label_372120:
    // 0x372120: 0x3c07005d
    ctx->pc = 0x372120u;
    SET_GPR_U32(ctx, 7, ((uint32_t)93 << 16));
label_372124:
    // 0x372124: 0x92280ccc
    ctx->pc = 0x372124u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3276)));
label_372128:
    // 0x372128: 0x220202d
    ctx->pc = 0x372128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37212c:
    // 0x37212c: 0x92230ccd
    ctx->pc = 0x37212cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3277)));
label_372130:
    // 0x372130: 0x262500f4
    ctx->pc = 0x372130u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 244));
label_372134:
    // 0x372134: 0x92220cce
    ctx->pc = 0x372134u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3278)));
label_372138:
    // 0x372138: 0x24e70be0
    ctx->pc = 0x372138u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 3040));
label_37213c:
    // 0x37213c: 0x94e00
    ctx->pc = 0x37213cu;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 24));
label_372140:
    // 0x372140: 0x84400
    ctx->pc = 0x372140u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 16));
label_372144:
    // 0x372144: 0x1284025
    ctx->pc = 0x372144u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_372148:
    // 0x372148: 0x31a00
    ctx->pc = 0x372148u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
label_37214c:
    // 0x37214c: 0x681825
    ctx->pc = 0x37214cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_372150:
    // 0x372150: 0xc0dcd8c
label_372154:
    if (ctx->pc == 0x372154u) {
        ctx->pc = 0x372154u;
        SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x372158u;
        goto label_372158;
    }
    ctx->pc = 0x372150u;
    SET_GPR_U32(ctx, 31, 0x372158u);
    ctx->pc = 0x372154u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x373630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00373630_0x373630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372158u; }
    }
    if (ctx->pc != 0x372158u) { return; }
    ctx->pc = 0x372158u;
label_372158:
    // 0x372158: 0x10000028
label_37215c:
    if (ctx->pc == 0x37215Cu) {
        ctx->pc = 0x372160u;
        goto label_372160;
    }
    ctx->pc = 0x372158u;
    {
        const bool branch_taken_0x372158 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x372158) {
            ctx->pc = 0x3721FCu;
            goto label_3721fc;
        }
    }
    ctx->pc = 0x372160u;
label_372160:
    // 0x372160: 0xc1a578c
label_372164:
    if (ctx->pc == 0x372164u) {
        ctx->pc = 0x372164u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x372168u;
        goto label_372168;
    }
    ctx->pc = 0x372160u;
    SET_GPR_U32(ctx, 31, 0x372168u);
    ctx->pc = 0x372164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x695E30u;
    {
        auto targetFn = runtime->lookupFunction(0x695E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372168u; }
        if (ctx->pc != 0x372168u) { return; }
    }
    ctx->pc = 0x372168u;
label_372168:
    // 0x372168: 0x10000024
label_37216c:
    if (ctx->pc == 0x37216Cu) {
        ctx->pc = 0x372170u;
        goto label_372170;
    }
    ctx->pc = 0x372168u;
    {
        const bool branch_taken_0x372168 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x372168) {
            ctx->pc = 0x3721FCu;
            goto label_3721fc;
        }
    }
    ctx->pc = 0x372170u;
label_372170:
    // 0x372170: 0x92290ccf
    ctx->pc = 0x372170u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3279)));
label_372174:
    // 0x372174: 0x220202d
    ctx->pc = 0x372174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_372178:
    // 0x372178: 0x92280ccc
    ctx->pc = 0x372178u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3276)));
label_37217c:
    // 0x37217c: 0x262500f4
    ctx->pc = 0x37217cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 244));
label_372180:
    // 0x372180: 0x92230ccd
    ctx->pc = 0x372180u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3277)));
label_372184:
    // 0x372184: 0x382d
    ctx->pc = 0x372184u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_372188:
    // 0x372188: 0x92220cce
    ctx->pc = 0x372188u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3278)));
label_37218c:
    // 0x37218c: 0x94e00
    ctx->pc = 0x37218cu;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 24));
label_372190:
    // 0x372190: 0x84400
    ctx->pc = 0x372190u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 16));
label_372194:
    // 0x372194: 0x1284025
    ctx->pc = 0x372194u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_372198:
    // 0x372198: 0x31a00
    ctx->pc = 0x372198u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
label_37219c:
    // 0x37219c: 0x681825
    ctx->pc = 0x37219cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_3721a0:
    // 0x3721a0: 0xc0dcd8c
label_3721a4:
    if (ctx->pc == 0x3721A4u) {
        ctx->pc = 0x3721A4u;
        SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3721A8u;
        goto label_3721a8;
    }
    ctx->pc = 0x3721A0u;
    SET_GPR_U32(ctx, 31, 0x3721A8u);
    ctx->pc = 0x3721A4u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x373630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00373630_0x373630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3721A8u; }
    }
    if (ctx->pc != 0x3721A8u) { return; }
    ctx->pc = 0x3721A8u;
label_3721a8:
    // 0x3721a8: 0x10000014
label_3721ac:
    if (ctx->pc == 0x3721ACu) {
        ctx->pc = 0x3721B0u;
        goto label_3721b0;
    }
    ctx->pc = 0x3721A8u;
    {
        const bool branch_taken_0x3721a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x3721a8) {
            ctx->pc = 0x3721FCu;
            goto label_3721fc;
        }
    }
    ctx->pc = 0x3721B0u;
label_3721b0:
    // 0x3721b0: 0x10000012
label_3721b4:
    if (ctx->pc == 0x3721B4u) {
        ctx->pc = 0x3721B8u;
        goto label_3721b8;
    }
    ctx->pc = 0x3721B0u;
    {
        const bool branch_taken_0x3721b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x3721b0) {
            ctx->pc = 0x3721FCu;
            goto label_3721fc;
        }
    }
    ctx->pc = 0x3721B8u;
label_3721b8:
    // 0x3721b8: 0xc0dc884
label_3721bc:
    if (ctx->pc == 0x3721BCu) {
        ctx->pc = 0x3721C0u;
        goto label_3721c0;
    }
    ctx->pc = 0x3721B8u;
    SET_GPR_U32(ctx, 31, 0x3721C0u);
    ctx->pc = 0x372210u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00372210_0x372210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3721C0u; }
    }
    if (ctx->pc != 0x3721C0u) { return; }
    ctx->pc = 0x3721C0u;
label_3721c0:
    // 0x3721c0: 0x1000000e
label_3721c4:
    if (ctx->pc == 0x3721C4u) {
        ctx->pc = 0x3721C8u;
        goto label_3721c8;
    }
    ctx->pc = 0x3721C0u;
    {
        const bool branch_taken_0x3721c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x3721c0) {
            ctx->pc = 0x3721FCu;
            goto label_3721fc;
        }
    }
    ctx->pc = 0x3721C8u;
label_3721c8:
    // 0x3721c8: 0x1000000c
label_3721cc:
    if (ctx->pc == 0x3721CCu) {
        ctx->pc = 0x3721D0u;
        goto label_3721d0;
    }
    ctx->pc = 0x3721C8u;
    {
        const bool branch_taken_0x3721c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x3721c8) {
            ctx->pc = 0x3721FCu;
            goto label_3721fc;
        }
    }
    ctx->pc = 0x3721D0u;
label_3721d0:
    // 0x3721d0: 0x1000000a
label_3721d4:
    if (ctx->pc == 0x3721D4u) {
        ctx->pc = 0x3721D8u;
        goto label_3721d8;
    }
    ctx->pc = 0x3721D0u;
    {
        const bool branch_taken_0x3721d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x3721d0) {
            ctx->pc = 0x3721FCu;
            goto label_3721fc;
        }
    }
    ctx->pc = 0x3721D8u;
label_3721d8:
    // 0x3721d8: 0xc0dd1e0
label_3721dc:
    if (ctx->pc == 0x3721DCu) {
        ctx->pc = 0x3721E0u;
        goto label_3721e0;
    }
    ctx->pc = 0x3721D8u;
    SET_GPR_U32(ctx, 31, 0x3721E0u);
    ctx->pc = 0x374780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00374780_0x374780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3721E0u; }
    }
    if (ctx->pc != 0x3721E0u) { return; }
    ctx->pc = 0x3721E0u;
label_3721e0:
    // 0x3721e0: 0x10000006
label_3721e4:
    if (ctx->pc == 0x3721E4u) {
        ctx->pc = 0x3721E8u;
        goto label_3721e8;
    }
    ctx->pc = 0x3721E0u;
    {
        const bool branch_taken_0x3721e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x3721e0) {
            ctx->pc = 0x3721FCu;
            goto label_3721fc;
        }
    }
    ctx->pc = 0x3721E8u;
label_3721e8:
    // 0x3721e8: 0x92250241
    ctx->pc = 0x3721e8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 577)));
label_3721ec:
    // 0x3721ec: 0xc1acca0
label_3721f0:
    if (ctx->pc == 0x3721F0u) {
        ctx->pc = 0x3721F0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 512));
        ctx->pc = 0x3721F4u;
        goto label_3721f4;
    }
    ctx->pc = 0x3721ECu;
    SET_GPR_U32(ctx, 31, 0x3721F4u);
    ctx->pc = 0x3721F0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 512));
    ctx->pc = 0x6B3280u;
    {
        auto targetFn = runtime->lookupFunction(0x6B3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3721F4u; }
        if (ctx->pc != 0x3721F4u) { return; }
    }
    ctx->pc = 0x3721F4u;
label_3721f4:
    // 0x3721f4: 0xc0dc93c
label_3721f8:
    if (ctx->pc == 0x3721F8u) {
        ctx->pc = 0x3721F8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3721FCu;
        goto label_3721fc;
    }
    ctx->pc = 0x3721F4u;
    SET_GPR_U32(ctx, 31, 0x3721FCu);
    ctx->pc = 0x3721F8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3724F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_003724F0_0x3724f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3721FCu; }
    }
    if (ctx->pc != 0x3721FCu) { return; }
    ctx->pc = 0x3721FCu;
label_3721fc:
    // 0x3721fc: 0xdfbf0020
    ctx->pc = 0x3721fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_372200:
    // 0x372200: 0x7bb10010
    ctx->pc = 0x372200u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_372204:
    // 0x372204: 0x7bb00000
    ctx->pc = 0x372204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_372208:
    // 0x372208: 0x3e00008
label_37220c:
    if (ctx->pc == 0x37220Cu) {
        ctx->pc = 0x37220Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x372210u;
        goto label_fallthrough_0x372208;
    }
    ctx->pc = 0x372208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37220Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x371EF0u: goto label_371ef0;
            case 0x371EF4u: goto label_371ef4;
            case 0x371EF8u: goto label_371ef8;
            case 0x371EFCu: goto label_371efc;
            case 0x371F00u: goto label_371f00;
            case 0x371F04u: goto label_371f04;
            case 0x371F08u: goto label_371f08;
            case 0x371F0Cu: goto label_371f0c;
            case 0x371F10u: goto label_371f10;
            case 0x371F14u: goto label_371f14;
            case 0x371F18u: goto label_371f18;
            case 0x371F1Cu: goto label_371f1c;
            case 0x371F20u: goto label_371f20;
            case 0x371F24u: goto label_371f24;
            case 0x371F28u: goto label_371f28;
            case 0x371F2Cu: goto label_371f2c;
            case 0x371F30u: goto label_371f30;
            case 0x371F34u: goto label_371f34;
            case 0x371F38u: goto label_371f38;
            case 0x371F3Cu: goto label_371f3c;
            case 0x371F40u: goto label_371f40;
            case 0x371F44u: goto label_371f44;
            case 0x371F48u: goto label_371f48;
            case 0x371F4Cu: goto label_371f4c;
            case 0x371F50u: goto label_371f50;
            case 0x371F54u: goto label_371f54;
            case 0x371F58u: goto label_371f58;
            case 0x371F5Cu: goto label_371f5c;
            case 0x371F60u: goto label_371f60;
            case 0x371F64u: goto label_371f64;
            case 0x371F68u: goto label_371f68;
            case 0x371F6Cu: goto label_371f6c;
            case 0x371F70u: goto label_371f70;
            case 0x371F74u: goto label_371f74;
            case 0x371F78u: goto label_371f78;
            case 0x371F7Cu: goto label_371f7c;
            case 0x371F80u: goto label_371f80;
            case 0x371F84u: goto label_371f84;
            case 0x371F88u: goto label_371f88;
            case 0x371F8Cu: goto label_371f8c;
            case 0x371F90u: goto label_371f90;
            case 0x371F94u: goto label_371f94;
            case 0x371F98u: goto label_371f98;
            case 0x371F9Cu: goto label_371f9c;
            case 0x371FA0u: goto label_371fa0;
            case 0x371FA4u: goto label_371fa4;
            case 0x371FA8u: goto label_371fa8;
            case 0x371FACu: goto label_371fac;
            case 0x371FB0u: goto label_371fb0;
            case 0x371FB4u: goto label_371fb4;
            case 0x371FB8u: goto label_371fb8;
            case 0x371FBCu: goto label_371fbc;
            case 0x371FC0u: goto label_371fc0;
            case 0x371FC4u: goto label_371fc4;
            case 0x371FC8u: goto label_371fc8;
            case 0x371FCCu: goto label_371fcc;
            case 0x371FD0u: goto label_371fd0;
            case 0x371FD4u: goto label_371fd4;
            case 0x371FD8u: goto label_371fd8;
            case 0x371FDCu: goto label_371fdc;
            case 0x371FE0u: goto label_371fe0;
            case 0x371FE4u: goto label_371fe4;
            case 0x371FE8u: goto label_371fe8;
            case 0x371FECu: goto label_371fec;
            case 0x371FF0u: goto label_371ff0;
            case 0x371FF4u: goto label_371ff4;
            case 0x371FF8u: goto label_371ff8;
            case 0x371FFCu: goto label_371ffc;
            case 0x372000u: goto label_372000;
            case 0x372004u: goto label_372004;
            case 0x372008u: goto label_372008;
            case 0x37200Cu: goto label_37200c;
            case 0x372010u: goto label_372010;
            case 0x372014u: goto label_372014;
            case 0x372018u: goto label_372018;
            case 0x37201Cu: goto label_37201c;
            case 0x372020u: goto label_372020;
            case 0x372024u: goto label_372024;
            case 0x372028u: goto label_372028;
            case 0x37202Cu: goto label_37202c;
            case 0x372030u: goto label_372030;
            case 0x372034u: goto label_372034;
            case 0x372038u: goto label_372038;
            case 0x37203Cu: goto label_37203c;
            case 0x372040u: goto label_372040;
            case 0x372044u: goto label_372044;
            case 0x372048u: goto label_372048;
            case 0x37204Cu: goto label_37204c;
            case 0x372050u: goto label_372050;
            case 0x372054u: goto label_372054;
            case 0x372058u: goto label_372058;
            case 0x37205Cu: goto label_37205c;
            case 0x372060u: goto label_372060;
            case 0x372064u: goto label_372064;
            case 0x372068u: goto label_372068;
            case 0x37206Cu: goto label_37206c;
            case 0x372070u: goto label_372070;
            case 0x372074u: goto label_372074;
            case 0x372078u: goto label_372078;
            case 0x37207Cu: goto label_37207c;
            case 0x372080u: goto label_372080;
            case 0x372084u: goto label_372084;
            case 0x372088u: goto label_372088;
            case 0x37208Cu: goto label_37208c;
            case 0x372090u: goto label_372090;
            case 0x372094u: goto label_372094;
            case 0x372098u: goto label_372098;
            case 0x37209Cu: goto label_37209c;
            case 0x3720A0u: goto label_3720a0;
            case 0x3720A4u: goto label_3720a4;
            case 0x3720A8u: goto label_3720a8;
            case 0x3720ACu: goto label_3720ac;
            case 0x3720B0u: goto label_3720b0;
            case 0x3720B4u: goto label_3720b4;
            case 0x3720B8u: goto label_3720b8;
            case 0x3720BCu: goto label_3720bc;
            case 0x3720C0u: goto label_3720c0;
            case 0x3720C4u: goto label_3720c4;
            case 0x3720C8u: goto label_3720c8;
            case 0x3720CCu: goto label_3720cc;
            case 0x3720D0u: goto label_3720d0;
            case 0x3720D4u: goto label_3720d4;
            case 0x3720D8u: goto label_3720d8;
            case 0x3720DCu: goto label_3720dc;
            case 0x3720E0u: goto label_3720e0;
            case 0x3720E4u: goto label_3720e4;
            case 0x3720E8u: goto label_3720e8;
            case 0x3720ECu: goto label_3720ec;
            case 0x3720F0u: goto label_3720f0;
            case 0x3720F4u: goto label_3720f4;
            case 0x3720F8u: goto label_3720f8;
            case 0x3720FCu: goto label_3720fc;
            case 0x372100u: goto label_372100;
            case 0x372104u: goto label_372104;
            case 0x372108u: goto label_372108;
            case 0x37210Cu: goto label_37210c;
            case 0x372110u: goto label_372110;
            case 0x372114u: goto label_372114;
            case 0x372118u: goto label_372118;
            case 0x37211Cu: goto label_37211c;
            case 0x372120u: goto label_372120;
            case 0x372124u: goto label_372124;
            case 0x372128u: goto label_372128;
            case 0x37212Cu: goto label_37212c;
            case 0x372130u: goto label_372130;
            case 0x372134u: goto label_372134;
            case 0x372138u: goto label_372138;
            case 0x37213Cu: goto label_37213c;
            case 0x372140u: goto label_372140;
            case 0x372144u: goto label_372144;
            case 0x372148u: goto label_372148;
            case 0x37214Cu: goto label_37214c;
            case 0x372150u: goto label_372150;
            case 0x372154u: goto label_372154;
            case 0x372158u: goto label_372158;
            case 0x37215Cu: goto label_37215c;
            case 0x372160u: goto label_372160;
            case 0x372164u: goto label_372164;
            case 0x372168u: goto label_372168;
            case 0x37216Cu: goto label_37216c;
            case 0x372170u: goto label_372170;
            case 0x372174u: goto label_372174;
            case 0x372178u: goto label_372178;
            case 0x37217Cu: goto label_37217c;
            case 0x372180u: goto label_372180;
            case 0x372184u: goto label_372184;
            case 0x372188u: goto label_372188;
            case 0x37218Cu: goto label_37218c;
            case 0x372190u: goto label_372190;
            case 0x372194u: goto label_372194;
            case 0x372198u: goto label_372198;
            case 0x37219Cu: goto label_37219c;
            case 0x3721A0u: goto label_3721a0;
            case 0x3721A4u: goto label_3721a4;
            case 0x3721A8u: goto label_3721a8;
            case 0x3721ACu: goto label_3721ac;
            case 0x3721B0u: goto label_3721b0;
            case 0x3721B4u: goto label_3721b4;
            case 0x3721B8u: goto label_3721b8;
            case 0x3721BCu: goto label_3721bc;
            case 0x3721C0u: goto label_3721c0;
            case 0x3721C4u: goto label_3721c4;
            case 0x3721C8u: goto label_3721c8;
            case 0x3721CCu: goto label_3721cc;
            case 0x3721D0u: goto label_3721d0;
            case 0x3721D4u: goto label_3721d4;
            case 0x3721D8u: goto label_3721d8;
            case 0x3721DCu: goto label_3721dc;
            case 0x3721E0u: goto label_3721e0;
            case 0x3721E4u: goto label_3721e4;
            case 0x3721E8u: goto label_3721e8;
            case 0x3721ECu: goto label_3721ec;
            case 0x3721F0u: goto label_3721f0;
            case 0x3721F4u: goto label_3721f4;
            case 0x3721F8u: goto label_3721f8;
            case 0x3721FCu: goto label_3721fc;
            case 0x372200u: goto label_372200;
            case 0x372204u: goto label_372204;
            case 0x372208u: goto label_372208;
            case 0x37220Cu: goto label_37220c;
            default: break;
        }
        return;
    }
label_fallthrough_0x372208:
    ctx->pc = 0x372210u;
}
