#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00116E48
// Address: 0x116e48 - 0x116fd0
void sub_00116E48_0x116e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x116e48u;

label_116e48:
    // 0x116e48: 0xc0102d
    ctx->pc = 0x116e48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_116e4c:
    // 0x116e4c: 0xe0182d
    ctx->pc = 0x116e4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_116e50:
    // 0x116e50: 0x100582d
    ctx->pc = 0x116e50u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_116e54:
    // 0x116e54: 0x27bdfff0
    ctx->pc = 0x116e54u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_116e58:
    // 0x116e58: 0x120502d
    ctx->pc = 0x116e58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_116e5c:
    // 0x116e5c: 0xa0302d
    ctx->pc = 0x116e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_116e60:
    // 0x116e60: 0xffbf0000
    ctx->pc = 0x116e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_116e64:
    // 0x116e64: 0x40382d
    ctx->pc = 0x116e64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_116e68:
    // 0x116e68: 0x60402d
    ctx->pc = 0x116e68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_116e6c:
    // 0x116e6c: 0x160482d
    ctx->pc = 0x116e6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_116e70:
    // 0x116e70: 0xc045b34
label_116e74:
    if (ctx->pc == 0x116E74u) {
        ctx->pc = 0x116E74u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x116E78u;
        goto label_116e78;
    }
    ctx->pc = 0x116E70u;
    SET_GPR_U32(ctx, 31, 0x116E78u);
    ctx->pc = 0x116E74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x116CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116CD0_0x116cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116E78u; }
    }
    if (ctx->pc != 0x116E78u) { return; }
    ctx->pc = 0x116E78u;
label_116e78:
    // 0x116e78: 0xdfbf0000
    ctx->pc = 0x116e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_116e7c:
    // 0x116e7c: 0x3e00008
label_116e80:
    if (ctx->pc == 0x116E80u) {
        ctx->pc = 0x116E80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x116E84u;
        goto label_116e84;
    }
    ctx->pc = 0x116E7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116E80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116E48u: goto label_116e48;
            case 0x116E4Cu: goto label_116e4c;
            case 0x116E50u: goto label_116e50;
            case 0x116E54u: goto label_116e54;
            case 0x116E58u: goto label_116e58;
            case 0x116E5Cu: goto label_116e5c;
            case 0x116E60u: goto label_116e60;
            case 0x116E64u: goto label_116e64;
            case 0x116E68u: goto label_116e68;
            case 0x116E6Cu: goto label_116e6c;
            case 0x116E70u: goto label_116e70;
            case 0x116E74u: goto label_116e74;
            case 0x116E78u: goto label_116e78;
            case 0x116E7Cu: goto label_116e7c;
            case 0x116E80u: goto label_116e80;
            case 0x116E84u: goto label_116e84;
            case 0x116E88u: goto label_116e88;
            case 0x116E8Cu: goto label_116e8c;
            case 0x116E90u: goto label_116e90;
            case 0x116E94u: goto label_116e94;
            case 0x116E98u: goto label_116e98;
            case 0x116E9Cu: goto label_116e9c;
            case 0x116EA0u: goto label_116ea0;
            case 0x116EA4u: goto label_116ea4;
            case 0x116EA8u: goto label_116ea8;
            case 0x116EACu: goto label_116eac;
            case 0x116EB0u: goto label_116eb0;
            case 0x116EB4u: goto label_116eb4;
            case 0x116EB8u: goto label_116eb8;
            case 0x116EBCu: goto label_116ebc;
            case 0x116EC0u: goto label_116ec0;
            case 0x116EC4u: goto label_116ec4;
            case 0x116EC8u: goto label_116ec8;
            case 0x116ECCu: goto label_116ecc;
            case 0x116ED0u: goto label_116ed0;
            case 0x116ED4u: goto label_116ed4;
            case 0x116ED8u: goto label_116ed8;
            case 0x116EDCu: goto label_116edc;
            case 0x116EE0u: goto label_116ee0;
            case 0x116EE4u: goto label_116ee4;
            case 0x116EE8u: goto label_116ee8;
            case 0x116EECu: goto label_116eec;
            case 0x116EF0u: goto label_116ef0;
            case 0x116EF4u: goto label_116ef4;
            case 0x116EF8u: goto label_116ef8;
            case 0x116EFCu: goto label_116efc;
            case 0x116F00u: goto label_116f00;
            case 0x116F04u: goto label_116f04;
            case 0x116F08u: goto label_116f08;
            case 0x116F0Cu: goto label_116f0c;
            case 0x116F10u: goto label_116f10;
            case 0x116F14u: goto label_116f14;
            case 0x116F18u: goto label_116f18;
            case 0x116F1Cu: goto label_116f1c;
            case 0x116F20u: goto label_116f20;
            case 0x116F24u: goto label_116f24;
            case 0x116F28u: goto label_116f28;
            case 0x116F2Cu: goto label_116f2c;
            case 0x116F30u: goto label_116f30;
            case 0x116F34u: goto label_116f34;
            case 0x116F38u: goto label_116f38;
            case 0x116F3Cu: goto label_116f3c;
            case 0x116F40u: goto label_116f40;
            case 0x116F44u: goto label_116f44;
            case 0x116F48u: goto label_116f48;
            case 0x116F4Cu: goto label_116f4c;
            case 0x116F50u: goto label_116f50;
            case 0x116F54u: goto label_116f54;
            case 0x116F58u: goto label_116f58;
            case 0x116F5Cu: goto label_116f5c;
            case 0x116F60u: goto label_116f60;
            case 0x116F64u: goto label_116f64;
            case 0x116F68u: goto label_116f68;
            case 0x116F6Cu: goto label_116f6c;
            case 0x116F70u: goto label_116f70;
            case 0x116F74u: goto label_116f74;
            case 0x116F78u: goto label_116f78;
            case 0x116F7Cu: goto label_116f7c;
            case 0x116F80u: goto label_116f80;
            case 0x116F84u: goto label_116f84;
            case 0x116F88u: goto label_116f88;
            case 0x116F8Cu: goto label_116f8c;
            case 0x116F90u: goto label_116f90;
            case 0x116F94u: goto label_116f94;
            case 0x116F98u: goto label_116f98;
            case 0x116F9Cu: goto label_116f9c;
            case 0x116FA0u: goto label_116fa0;
            case 0x116FA4u: goto label_116fa4;
            case 0x116FA8u: goto label_116fa8;
            case 0x116FACu: goto label_116fac;
            case 0x116FB0u: goto label_116fb0;
            case 0x116FB4u: goto label_116fb4;
            case 0x116FB8u: goto label_116fb8;
            case 0x116FBCu: goto label_116fbc;
            case 0x116FC0u: goto label_116fc0;
            case 0x116FC4u: goto label_116fc4;
            case 0x116FC8u: goto label_116fc8;
            case 0x116FCCu: goto label_116fcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x116E84u;
label_116e84:
    // 0x116e84: 0x0
    ctx->pc = 0x116e84u;
    // NOP
label_116e88:
    // 0x116e88: 0x27bdff60
    ctx->pc = 0x116e88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
label_116e8c:
    // 0x116e8c: 0x3c030026
    ctx->pc = 0x116e8cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
label_116e90:
    // 0x116e90: 0xffb10080
    ctx->pc = 0x116e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
label_116e94:
    // 0x116e94: 0xffbf0090
    ctx->pc = 0x116e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_116e98:
    // 0x116e98: 0x2471af98
    ctx->pc = 0x116e98u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 4294946712));
label_116e9c:
    // 0x116e9c: 0xffb00070
    ctx->pc = 0x116e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_116ea0:
    // 0x116ea0: 0x8c67af98
    ctx->pc = 0x116ea0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 4294946712)));
label_116ea4:
    // 0x116ea4: 0x90e20000
    ctx->pc = 0x116ea4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_116ea8:
    // 0x116ea8: 0x304500ff
    ctx->pc = 0x116ea8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 2), 255));
label_116eac:
    // 0x116eac: 0x10a00043
label_116eb0:
    if (ctx->pc == 0x116EB0u) {
        ctx->pc = 0x116EB0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x116EB4u;
        goto label_116eb4;
    }
    ctx->pc = 0x116EACu;
    {
        const bool branch_taken_0x116eac = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x116EB0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x116eac) {
            ctx->pc = 0x116FBCu;
            goto label_116fbc;
        }
    }
    ctx->pc = 0x116EB4u;
label_116eb4:
    // 0x116eb4: 0x24a2000f
    ctx->pc = 0x116eb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 15));
label_116eb8:
    // 0x116eb8: 0x2403ffff
    ctx->pc = 0x116eb8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_116ebc:
    // 0x116ebc: 0x24a4001e
    ctx->pc = 0x116ebcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 30));
label_116ec0:
    // 0x116ec0: 0x62182a
    ctx->pc = 0x116ec0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
label_116ec4:
    // 0x116ec4: 0x43200b
    ctx->pc = 0x116ec4u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
label_116ec8:
    // 0x116ec8: 0xe0302d
    ctx->pc = 0x116ec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_116ecc:
    // 0x116ecc: 0x42903
    ctx->pc = 0x116eccu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 4));
label_116ed0:
    // 0x116ed0: 0xa0e00000
    ctx->pc = 0x116ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
label_116ed4:
    // 0x116ed4: 0x18a00009
label_116ed8:
    if (ctx->pc == 0x116ED8u) {
        ctx->pc = 0x116ED8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x116EDCu;
        goto label_116edc;
    }
    ctx->pc = 0x116ED4u;
    {
        const bool branch_taken_0x116ed4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x116ED8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x116ed4) {
            ctx->pc = 0x116EFCu;
            goto label_116efc;
        }
    }
    ctx->pc = 0x116EDCu;
label_116edc:
    // 0x116edc: 0x3a0182d
    ctx->pc = 0x116edcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_116ee0:
    // 0x116ee0: 0x78c20000
    ctx->pc = 0x116ee0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_116ee4:
    // 0x116ee4: 0x2484ffff
    ctx->pc = 0x116ee4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
label_116ee8:
    // 0x116ee8: 0x24c60010
    ctx->pc = 0x116ee8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
label_116eec:
    // 0x116eec: 0x7c620000
    ctx->pc = 0x116eecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_116ef0:
    // 0x116ef0: 0x24630010
    ctx->pc = 0x116ef0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
label_116ef4:
    // 0x116ef4: 0x1480fffa
label_116ef8:
    if (ctx->pc == 0x116EF8u) {
        ctx->pc = 0x116EFCu;
        goto label_116efc;
    }
    ctx->pc = 0x116EF4u;
    {
        const bool branch_taken_0x116ef4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x116ef4) {
            ctx->pc = 0x116EE0u;
            goto label_116ee0;
        }
    }
    ctx->pc = 0x116EFCu;
label_116efc:
    // 0x116efc: 0xc045284
label_116f00:
    if (ctx->pc == 0x116F00u) {
        ctx->pc = 0x116F04u;
        goto label_116f04;
    }
    ctx->pc = 0x116EFCu;
    SET_GPR_U32(ctx, 31, 0x116F04u);
    ctx->pc = 0x114A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114A10_0x114a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116F04u; }
    }
    if (ctx->pc != 0x116F04u) { return; }
    ctx->pc = 0x116F04u;
label_116f04:
    // 0x116f04: 0x8fa30008
    ctx->pc = 0x116f04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_116f08:
    // 0x116f08: 0x4610014
label_116f0c:
    if (ctx->pc == 0x116F0Cu) {
        ctx->pc = 0x116F10u;
        goto label_116f10;
    }
    ctx->pc = 0x116F08u;
    {
        const bool branch_taken_0x116f08 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x116f08) {
            ctx->pc = 0x116F5Cu;
            goto label_116f5c;
        }
    }
    ctx->pc = 0x116F10u;
label_116f10:
    // 0x116f10: 0x8fa20008
    ctx->pc = 0x116f10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_116f14:
    // 0x116f14: 0x3c037fff
    ctx->pc = 0x116f14u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32767 << 16));
label_116f18:
    // 0x116f18: 0x3463ffff
    ctx->pc = 0x116f18u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
label_116f1c:
    // 0x116f1c: 0x8e240010
    ctx->pc = 0x116f1cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_116f20:
    // 0x116f20: 0x432824
    ctx->pc = 0x116f20u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_116f24:
    // 0x116f24: 0xa4202a
    ctx->pc = 0x116f24u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 4)));
label_116f28:
    // 0x116f28: 0x10800021
label_116f2c:
    if (ctx->pc == 0x116F2Cu) {
        ctx->pc = 0x116F2Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x116F30u;
        goto label_116f30;
    }
    ctx->pc = 0x116F28u;
    {
        const bool branch_taken_0x116f28 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x116F2Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x116f28) {
            ctx->pc = 0x116FB0u;
            goto label_116fb0;
        }
    }
    ctx->pc = 0x116F30u;
label_116f30:
    // 0x116f30: 0x8e23000c
    ctx->pc = 0x116f30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_116f34:
    // 0x116f34: 0xa22818
    ctx->pc = 0x116f34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
label_116f38:
    // 0x116f38: 0xa31021
    ctx->pc = 0x116f38u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_116f3c:
    // 0x116f3c: 0x8c460000
    ctx->pc = 0x116f3cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_116f40:
    // 0x116f40: 0x10c0001b
label_116f44:
    if (ctx->pc == 0x116F44u) {
        ctx->pc = 0x116F48u;
        goto label_116f48;
    }
    ctx->pc = 0x116F40u;
    {
        const bool branch_taken_0x116f40 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x116f40) {
            ctx->pc = 0x116FB0u;
            goto label_116fb0;
        }
    }
    ctx->pc = 0x116F48u;
label_116f48:
    // 0x116f48: 0x8c430008
    ctx->pc = 0x116f48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_116f4c:
    // 0x116f4c: 0x380802d
    ctx->pc = 0x116f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_116f50:
    // 0x116f50: 0x60e02d
    ctx->pc = 0x116f50u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_116f54:
    // 0x116f54: 0x10000010
label_116f58:
    if (ctx->pc == 0x116F58u) {
        ctx->pc = 0x116F58u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x116F5Cu;
        goto label_116f5c;
    }
    ctx->pc = 0x116F54u;
    {
        const bool branch_taken_0x116f54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x116F58u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
        if (branch_taken_0x116f54) {
            ctx->pc = 0x116F98u;
            goto label_116f98;
        }
    }
    ctx->pc = 0x116F5Cu;
label_116f5c:
    // 0x116f5c: 0x8fa50008
    ctx->pc = 0x116f5cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_116f60:
    // 0x116f60: 0x8e220018
    ctx->pc = 0x116f60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_116f64:
    // 0x116f64: 0xa2102a
    ctx->pc = 0x116f64u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
label_116f68:
    // 0x116f68: 0x10400011
label_116f6c:
    if (ctx->pc == 0x116F6Cu) {
        ctx->pc = 0x116F6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x116F70u;
        goto label_116f70;
    }
    ctx->pc = 0x116F68u;
    {
        const bool branch_taken_0x116f68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x116F6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x116f68) {
            ctx->pc = 0x116FB0u;
            goto label_116fb0;
        }
    }
    ctx->pc = 0x116F70u;
label_116f70:
    // 0x116f70: 0x8e230014
    ctx->pc = 0x116f70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_116f74:
    // 0x116f74: 0xa22818
    ctx->pc = 0x116f74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
label_116f78:
    // 0x116f78: 0xa31021
    ctx->pc = 0x116f78u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_116f7c:
    // 0x116f7c: 0x8c460000
    ctx->pc = 0x116f7cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_116f80:
    // 0x116f80: 0x10c0000b
label_116f84:
    if (ctx->pc == 0x116F84u) {
        ctx->pc = 0x116F88u;
        goto label_116f88;
    }
    ctx->pc = 0x116F80u;
    {
        const bool branch_taken_0x116f80 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x116f80) {
            ctx->pc = 0x116FB0u;
            goto label_116fb0;
        }
    }
    ctx->pc = 0x116F88u;
label_116f88:
    // 0x116f88: 0x8c430008
    ctx->pc = 0x116f88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_116f8c:
    // 0x116f8c: 0x380802d
    ctx->pc = 0x116f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_116f90:
    // 0x116f90: 0x60e02d
    ctx->pc = 0x116f90u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_116f94:
    // 0x116f94: 0x8e220014
    ctx->pc = 0x116f94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_116f98:
    // 0x116f98: 0x3a0202d
    ctx->pc = 0x116f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_116f9c:
    // 0x116f9c: 0xa21021
    ctx->pc = 0x116f9cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_116fa0:
    // 0x116fa0: 0xc0f809
label_116fa4:
    if (ctx->pc == 0x116FA4u) {
        ctx->pc = 0x116FA4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x116FA8u;
        goto label_116fa8;
    }
    ctx->pc = 0x116FA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x116FA8u);
        ctx->pc = 0x116FA4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116E48u: goto label_116e48;
            case 0x116E4Cu: goto label_116e4c;
            case 0x116E50u: goto label_116e50;
            case 0x116E54u: goto label_116e54;
            case 0x116E58u: goto label_116e58;
            case 0x116E5Cu: goto label_116e5c;
            case 0x116E60u: goto label_116e60;
            case 0x116E64u: goto label_116e64;
            case 0x116E68u: goto label_116e68;
            case 0x116E6Cu: goto label_116e6c;
            case 0x116E70u: goto label_116e70;
            case 0x116E74u: goto label_116e74;
            case 0x116E78u: goto label_116e78;
            case 0x116E7Cu: goto label_116e7c;
            case 0x116E80u: goto label_116e80;
            case 0x116E84u: goto label_116e84;
            case 0x116E88u: goto label_116e88;
            case 0x116E8Cu: goto label_116e8c;
            case 0x116E90u: goto label_116e90;
            case 0x116E94u: goto label_116e94;
            case 0x116E98u: goto label_116e98;
            case 0x116E9Cu: goto label_116e9c;
            case 0x116EA0u: goto label_116ea0;
            case 0x116EA4u: goto label_116ea4;
            case 0x116EA8u: goto label_116ea8;
            case 0x116EACu: goto label_116eac;
            case 0x116EB0u: goto label_116eb0;
            case 0x116EB4u: goto label_116eb4;
            case 0x116EB8u: goto label_116eb8;
            case 0x116EBCu: goto label_116ebc;
            case 0x116EC0u: goto label_116ec0;
            case 0x116EC4u: goto label_116ec4;
            case 0x116EC8u: goto label_116ec8;
            case 0x116ECCu: goto label_116ecc;
            case 0x116ED0u: goto label_116ed0;
            case 0x116ED4u: goto label_116ed4;
            case 0x116ED8u: goto label_116ed8;
            case 0x116EDCu: goto label_116edc;
            case 0x116EE0u: goto label_116ee0;
            case 0x116EE4u: goto label_116ee4;
            case 0x116EE8u: goto label_116ee8;
            case 0x116EECu: goto label_116eec;
            case 0x116EF0u: goto label_116ef0;
            case 0x116EF4u: goto label_116ef4;
            case 0x116EF8u: goto label_116ef8;
            case 0x116EFCu: goto label_116efc;
            case 0x116F00u: goto label_116f00;
            case 0x116F04u: goto label_116f04;
            case 0x116F08u: goto label_116f08;
            case 0x116F0Cu: goto label_116f0c;
            case 0x116F10u: goto label_116f10;
            case 0x116F14u: goto label_116f14;
            case 0x116F18u: goto label_116f18;
            case 0x116F1Cu: goto label_116f1c;
            case 0x116F20u: goto label_116f20;
            case 0x116F24u: goto label_116f24;
            case 0x116F28u: goto label_116f28;
            case 0x116F2Cu: goto label_116f2c;
            case 0x116F30u: goto label_116f30;
            case 0x116F34u: goto label_116f34;
            case 0x116F38u: goto label_116f38;
            case 0x116F3Cu: goto label_116f3c;
            case 0x116F40u: goto label_116f40;
            case 0x116F44u: goto label_116f44;
            case 0x116F48u: goto label_116f48;
            case 0x116F4Cu: goto label_116f4c;
            case 0x116F50u: goto label_116f50;
            case 0x116F54u: goto label_116f54;
            case 0x116F58u: goto label_116f58;
            case 0x116F5Cu: goto label_116f5c;
            case 0x116F60u: goto label_116f60;
            case 0x116F64u: goto label_116f64;
            case 0x116F68u: goto label_116f68;
            case 0x116F6Cu: goto label_116f6c;
            case 0x116F70u: goto label_116f70;
            case 0x116F74u: goto label_116f74;
            case 0x116F78u: goto label_116f78;
            case 0x116F7Cu: goto label_116f7c;
            case 0x116F80u: goto label_116f80;
            case 0x116F84u: goto label_116f84;
            case 0x116F88u: goto label_116f88;
            case 0x116F8Cu: goto label_116f8c;
            case 0x116F90u: goto label_116f90;
            case 0x116F94u: goto label_116f94;
            case 0x116F98u: goto label_116f98;
            case 0x116F9Cu: goto label_116f9c;
            case 0x116FA0u: goto label_116fa0;
            case 0x116FA4u: goto label_116fa4;
            case 0x116FA8u: goto label_116fa8;
            case 0x116FACu: goto label_116fac;
            case 0x116FB0u: goto label_116fb0;
            case 0x116FB4u: goto label_116fb4;
            case 0x116FB8u: goto label_116fb8;
            case 0x116FBCu: goto label_116fbc;
            case 0x116FC0u: goto label_116fc0;
            case 0x116FC4u: goto label_116fc4;
            case 0x116FC8u: goto label_116fc8;
            case 0x116FCCu: goto label_116fcc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x116FA8u; }
            if (ctx->pc != 0x116FA8u) { return; }
        }
    }
    ctx->pc = 0x116FA8u;
label_116fa8:
    // 0x116fa8: 0x380102d
    ctx->pc = 0x116fa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_116fac:
    // 0x116fac: 0x200e02d
    ctx->pc = 0x116facu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_116fb0:
    // 0x116fb0: 0xf
    ctx->pc = 0x116fb0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_116fb4:
    // 0x116fb4: 0x42000038
    ctx->pc = 0x116fb4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_116fb8:
    // 0x116fb8: 0x102d
    ctx->pc = 0x116fb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_116fbc:
    // 0x116fbc: 0xdfbf0090
    ctx->pc = 0x116fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_116fc0:
    // 0x116fc0: 0xdfb10080
    ctx->pc = 0x116fc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_116fc4:
    // 0x116fc4: 0xdfb00070
    ctx->pc = 0x116fc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_116fc8:
    // 0x116fc8: 0x3e00008
label_116fcc:
    if (ctx->pc == 0x116FCCu) {
        ctx->pc = 0x116FCCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x116FD0u;
        goto label_fallthrough_0x116fc8;
    }
    ctx->pc = 0x116FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116FCCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116E48u: goto label_116e48;
            case 0x116E4Cu: goto label_116e4c;
            case 0x116E50u: goto label_116e50;
            case 0x116E54u: goto label_116e54;
            case 0x116E58u: goto label_116e58;
            case 0x116E5Cu: goto label_116e5c;
            case 0x116E60u: goto label_116e60;
            case 0x116E64u: goto label_116e64;
            case 0x116E68u: goto label_116e68;
            case 0x116E6Cu: goto label_116e6c;
            case 0x116E70u: goto label_116e70;
            case 0x116E74u: goto label_116e74;
            case 0x116E78u: goto label_116e78;
            case 0x116E7Cu: goto label_116e7c;
            case 0x116E80u: goto label_116e80;
            case 0x116E84u: goto label_116e84;
            case 0x116E88u: goto label_116e88;
            case 0x116E8Cu: goto label_116e8c;
            case 0x116E90u: goto label_116e90;
            case 0x116E94u: goto label_116e94;
            case 0x116E98u: goto label_116e98;
            case 0x116E9Cu: goto label_116e9c;
            case 0x116EA0u: goto label_116ea0;
            case 0x116EA4u: goto label_116ea4;
            case 0x116EA8u: goto label_116ea8;
            case 0x116EACu: goto label_116eac;
            case 0x116EB0u: goto label_116eb0;
            case 0x116EB4u: goto label_116eb4;
            case 0x116EB8u: goto label_116eb8;
            case 0x116EBCu: goto label_116ebc;
            case 0x116EC0u: goto label_116ec0;
            case 0x116EC4u: goto label_116ec4;
            case 0x116EC8u: goto label_116ec8;
            case 0x116ECCu: goto label_116ecc;
            case 0x116ED0u: goto label_116ed0;
            case 0x116ED4u: goto label_116ed4;
            case 0x116ED8u: goto label_116ed8;
            case 0x116EDCu: goto label_116edc;
            case 0x116EE0u: goto label_116ee0;
            case 0x116EE4u: goto label_116ee4;
            case 0x116EE8u: goto label_116ee8;
            case 0x116EECu: goto label_116eec;
            case 0x116EF0u: goto label_116ef0;
            case 0x116EF4u: goto label_116ef4;
            case 0x116EF8u: goto label_116ef8;
            case 0x116EFCu: goto label_116efc;
            case 0x116F00u: goto label_116f00;
            case 0x116F04u: goto label_116f04;
            case 0x116F08u: goto label_116f08;
            case 0x116F0Cu: goto label_116f0c;
            case 0x116F10u: goto label_116f10;
            case 0x116F14u: goto label_116f14;
            case 0x116F18u: goto label_116f18;
            case 0x116F1Cu: goto label_116f1c;
            case 0x116F20u: goto label_116f20;
            case 0x116F24u: goto label_116f24;
            case 0x116F28u: goto label_116f28;
            case 0x116F2Cu: goto label_116f2c;
            case 0x116F30u: goto label_116f30;
            case 0x116F34u: goto label_116f34;
            case 0x116F38u: goto label_116f38;
            case 0x116F3Cu: goto label_116f3c;
            case 0x116F40u: goto label_116f40;
            case 0x116F44u: goto label_116f44;
            case 0x116F48u: goto label_116f48;
            case 0x116F4Cu: goto label_116f4c;
            case 0x116F50u: goto label_116f50;
            case 0x116F54u: goto label_116f54;
            case 0x116F58u: goto label_116f58;
            case 0x116F5Cu: goto label_116f5c;
            case 0x116F60u: goto label_116f60;
            case 0x116F64u: goto label_116f64;
            case 0x116F68u: goto label_116f68;
            case 0x116F6Cu: goto label_116f6c;
            case 0x116F70u: goto label_116f70;
            case 0x116F74u: goto label_116f74;
            case 0x116F78u: goto label_116f78;
            case 0x116F7Cu: goto label_116f7c;
            case 0x116F80u: goto label_116f80;
            case 0x116F84u: goto label_116f84;
            case 0x116F88u: goto label_116f88;
            case 0x116F8Cu: goto label_116f8c;
            case 0x116F90u: goto label_116f90;
            case 0x116F94u: goto label_116f94;
            case 0x116F98u: goto label_116f98;
            case 0x116F9Cu: goto label_116f9c;
            case 0x116FA0u: goto label_116fa0;
            case 0x116FA4u: goto label_116fa4;
            case 0x116FA8u: goto label_116fa8;
            case 0x116FACu: goto label_116fac;
            case 0x116FB0u: goto label_116fb0;
            case 0x116FB4u: goto label_116fb4;
            case 0x116FB8u: goto label_116fb8;
            case 0x116FBCu: goto label_116fbc;
            case 0x116FC0u: goto label_116fc0;
            case 0x116FC4u: goto label_116fc4;
            case 0x116FC8u: goto label_116fc8;
            case 0x116FCCu: goto label_116fcc;
            default: break;
        }
        return;
    }
label_fallthrough_0x116fc8:
    ctx->pc = 0x116FD0u;
}
