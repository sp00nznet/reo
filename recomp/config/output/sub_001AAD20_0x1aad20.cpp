#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AAD20
// Address: 0x1aad20 - 0x1aae80
void sub_001AAD20_0x1aad20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1aad20u;

    // 0x1aad20: 0x27bdfe50
    ctx->pc = 0x1aad20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x1aad24: 0x2403ffff
    ctx->pc = 0x1aad24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aad28: 0xffbf0070
    ctx->pc = 0x1aad28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1aad2c: 0x80382d
    ctx->pc = 0x1aad2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aad30: 0x7fb60060
    ctx->pc = 0x1aad30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1aad34: 0x7fb50050
    ctx->pc = 0x1aad34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1aad38: 0x7fb40040
    ctx->pc = 0x1aad38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1aad3c: 0x7fb30030
    ctx->pc = 0x1aad3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1aad40: 0x7fb20020
    ctx->pc = 0x1aad40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1aad44: 0x7fb10010
    ctx->pc = 0x1aad44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1aad48: 0x7fb00000
    ctx->pc = 0x1aad48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1aad4c: 0xc0882d
    ctx->pc = 0x1aad4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aad50: 0xa0802d
    ctx->pc = 0x1aad50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aad54: 0x1223003e
    ctx->pc = 0x1AAD54u;
    {
        const bool branch_taken_0x1aad54 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 3));
        ctx->pc = 0x1AAD58u;
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1aad54) {
            ctx->pc = 0x1AAE50u;
            goto label_1aae50;
        }
    }
    ctx->pc = 0x1AAD5Cu;
    // 0x1aad5c: 0x3c010032
    ctx->pc = 0x1aad5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1aad60: 0x3c050025
    ctx->pc = 0x1aad60u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1aad64: 0x8c32440c
    ctx->pc = 0x1aad64u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 1), 17420)));
    // 0x1aad68: 0x3c060025
    ctx->pc = 0x1aad68u;
    SET_GPR_U32(ctx, 6, ((uint32_t)37 << 16));
    // 0x1aad6c: 0x27a40080
    ctx->pc = 0x1aad6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
    // 0x1aad70: 0x24a5d0b8
    ctx->pc = 0x1aad70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955192));
    // 0x1aad74: 0xc042a0c
    ctx->pc = 0x1AAD74u;
    SET_GPR_U32(ctx, 31, 0x1AAD7Cu);
    ctx->pc = 0x1AAD78u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294955072));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD7Cu; }
    }
    if (ctx->pc != 0x1AAD7Cu) { return; }
    ctx->pc = 0x1AAD7Cu;
    // 0x1aad7c: 0x27a40080
    ctx->pc = 0x1aad7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
    // 0x1aad80: 0xc06a920
    ctx->pc = 0x1AAD80u;
    SET_GPR_U32(ctx, 31, 0x1AAD88u);
    ctx->pc = 0x1AAD84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AA480u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AA480_0x1aa480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD88u; }
    }
    if (ctx->pc != 0x1AAD88u) { return; }
    ctx->pc = 0x1AAD88u;
    // 0x1aad88: 0x18400031
    ctx->pc = 0x1AAD88u;
    {
        const bool branch_taken_0x1aad88 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1aad88) {
            ctx->pc = 0x1AAE50u;
            goto label_1aae50;
        }
    }
    ctx->pc = 0x1AAD90u;
    // 0x1aad90: 0x27a40180
    ctx->pc = 0x1aad90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 384));
    // 0x1aad94: 0x240282d
    ctx->pc = 0x1aad94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aad98: 0xc041eac
    ctx->pc = 0x1AAD98u;
    SET_GPR_U32(ctx, 31, 0x1AADA0u);
    ctx->pc = 0x1AAD9Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 48));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AADA0u; }
    }
    if (ctx->pc != 0x1AADA0u) { return; }
    ctx->pc = 0x1AADA0u;
    // 0x1aada0: 0xc073470
    ctx->pc = 0x1AADA0u;
    SET_GPR_U32(ctx, 31, 0x1AADA8u);
    ctx->pc = 0x1AADA4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CD1C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD1C0_0x1cd1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AADA8u; }
    }
    if (ctx->pc != 0x1AADA8u) { return; }
    ctx->pc = 0x1AADA8u;
    // 0x1aada8: 0x8fa30184
    ctx->pc = 0x1aada8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x1aadac: 0x10600028
    ctx->pc = 0x1AADACu;
    {
        const bool branch_taken_0x1aadac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AADB0u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 29), 396)));
        if (branch_taken_0x1aadac) {
            ctx->pc = 0x1AAE50u;
            goto label_1aae50;
        }
    }
    ctx->pc = 0x1AADB4u;
    // 0x1aadb4: 0x2439821
    ctx->pc = 0x1aadb4u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1aadb8: 0x3c010032
    ctx->pc = 0x1aadb8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1aadbc: 0x8c23440c
    ctx->pc = 0x1aadbcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 17420)));
    // 0x1aadc0: 0x3c020018
    ctx->pc = 0x1aadc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)24 << 16));
    // 0x1aadc4: 0xb02d
    ctx->pc = 0x1aadc4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aadc8: 0x1000001c
    ctx->pc = 0x1AADC8u;
    {
        const bool branch_taken_0x1aadc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AADCCu;
        SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x1aadc8) {
            ctx->pc = 0x1AAE3Cu;
            goto label_1aae3c;
        }
    }
    ctx->pc = 0x1AADD0u;
label_1aadd0:
    // 0x1aadd0: 0x8e750000
    ctx->pc = 0x1aadd0u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1aadd4: 0x26640004
    ctx->pc = 0x1aadd4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 4));
    // 0x1aadd8: 0xc06bd74
    ctx->pc = 0x1AADD8u;
    SET_GPR_U32(ctx, 31, 0x1AADE0u);
    ctx->pc = 0x1AADDCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF5D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF5D0_0x1af5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AADE0u; }
    }
    if (ctx->pc != 0x1AADE0u) { return; }
    ctx->pc = 0x1AADE0u;
    // 0x1aade0: 0x8e450000
    ctx->pc = 0x1aade0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1aade4: 0xc0733f4
    ctx->pc = 0x1AADE4u;
    SET_GPR_U32(ctx, 31, 0x1AADECu);
    ctx->pc = 0x1AADE8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CCFD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCFD0_0x1ccfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AADECu; }
    }
    if (ctx->pc != 0x1AADECu) { return; }
    ctx->pc = 0x1AADECu;
    // 0x1aadec: 0x10400003
    ctx->pc = 0x1AADECu;
    {
        const bool branch_taken_0x1aadec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aadec) {
            ctx->pc = 0x1AADFCu;
            goto label_1aadfc;
        }
    }
    ctx->pc = 0x1AADF4u;
    // 0x1aadf4: 0x8e420000
    ctx->pc = 0x1aadf4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1aadf8: 0xa6020000
    ctx->pc = 0x1aadf8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1aadfc:
    // 0x1aadfc: 0x26620004
    ctx->pc = 0x1aadfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 4));
    // 0x1aae00: 0x26100002
    ctx->pc = 0x1aae00u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
    // 0x1aae04: 0x559821
    ctx->pc = 0x1aae04u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1aae08: 0x26d60001
    ctx->pc = 0x1aae08u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
label_1aae0c:
    // 0x1aae0c: 0x2d1102a
    ctx->pc = 0x1aae0cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), GPR_S32(ctx, 17)));
    // 0x1aae10: 0x1440ffef
    ctx->pc = 0x1AAE10u;
    {
        const bool branch_taken_0x1aae10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1aae10) {
            ctx->pc = 0x1AADD0u;
            goto label_1aadd0;
        }
    }
    ctx->pc = 0x1AAE18u;
    // 0x1aae18: 0x2ac10007
    ctx->pc = 0x1aae18u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 22), 7));
label_1aae1c:
    // 0x1aae1c: 0x10200003
    ctx->pc = 0x1AAE1Cu;
    {
        const bool branch_taken_0x1aae1c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aae1c) {
            ctx->pc = 0x1AAE2Cu;
            goto label_1aae2c;
        }
    }
    ctx->pc = 0x1AAE24u;
    // 0x1aae24: 0x2402ffff
    ctx->pc = 0x1aae24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aae28: 0xa6020000
    ctx->pc = 0x1aae28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1aae2c:
    // 0x1aae2c: 0xc06372c
    ctx->pc = 0x1AAE2Cu;
    SET_GPR_U32(ctx, 31, 0x1AAE34u);
    ctx->pc = 0x18DCB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DCB0_0x18dcb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAE34u; }
    }
    if (ctx->pc != 0x1AAE34u) { return; }
    ctx->pc = 0x1AAE34u;
    // 0x1aae34: 0x10000007
    ctx->pc = 0x1AAE34u;
    {
        const bool branch_taken_0x1aae34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AAE38u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x1aae34) {
            ctx->pc = 0x1AAE54u;
            goto label_1aae54;
        }
    }
    ctx->pc = 0x1AAE3Cu;
label_1aae3c:
    // 0x1aae3c: 0x11082a
    ctx->pc = 0x1aae3cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 17)));
    // 0x1aae40: 0x1020fff6
    ctx->pc = 0x1AAE40u;
    {
        const bool branch_taken_0x1aae40 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AAE44u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 22), 7));
        if (branch_taken_0x1aae40) {
            ctx->pc = 0x1AAE1Cu;
            goto label_1aae1c;
        }
    }
    ctx->pc = 0x1AAE48u;
    // 0x1aae48: 0x1000fff0
    ctx->pc = 0x1AAE48u;
    {
        const bool branch_taken_0x1aae48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AAE4Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 20), 8));
        if (branch_taken_0x1aae48) {
            ctx->pc = 0x1AAE0Cu;
            goto label_1aae0c;
        }
    }
    ctx->pc = 0x1AAE50u;
label_1aae50:
    // 0x1aae50: 0xdfbf0070
    ctx->pc = 0x1aae50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1aae54:
    // 0x1aae54: 0x7bb60060
    ctx->pc = 0x1aae54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1aae58: 0x7bb50050
    ctx->pc = 0x1aae58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1aae5c: 0x7bb40040
    ctx->pc = 0x1aae5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aae60: 0x7bb30030
    ctx->pc = 0x1aae60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aae64: 0x7bb20020
    ctx->pc = 0x1aae64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aae68: 0x7bb10010
    ctx->pc = 0x1aae68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aae6c: 0x7bb00000
    ctx->pc = 0x1aae6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aae70: 0x3e00008
    ctx->pc = 0x1AAE70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAE74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AADD0u: goto label_1aadd0;
            case 0x1AADFCu: goto label_1aadfc;
            case 0x1AAE0Cu: goto label_1aae0c;
            case 0x1AAE1Cu: goto label_1aae1c;
            case 0x1AAE2Cu: goto label_1aae2c;
            case 0x1AAE3Cu: goto label_1aae3c;
            case 0x1AAE50u: goto label_1aae50;
            case 0x1AAE54u: goto label_1aae54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AAE78u;
    // 0x1aae78: 0x0
    ctx->pc = 0x1aae78u;
    // NOP
    // 0x1aae7c: 0x0
    ctx->pc = 0x1aae7cu;
    // NOP
}
