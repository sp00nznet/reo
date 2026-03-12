#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00370B00
// Address: 0x370b00 - 0x370fe0
void sub_00370B00_0x370b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x370b00u;

label_370b00:
    // 0x370b00: 0x27bdffb0
    ctx->pc = 0x370b00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x370b04: 0xffbf0040
    ctx->pc = 0x370b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x370b08: 0x7fb30030
    ctx->pc = 0x370b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x370b0c: 0x7fb20020
    ctx->pc = 0x370b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x370b10: 0x80982d
    ctx->pc = 0x370b10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370b14: 0x7fb10010
    ctx->pc = 0x370b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x370b18: 0xa0902d
    ctx->pc = 0x370b18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370b1c: 0x7fb00000
    ctx->pc = 0x370b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x370b20: 0xc0882d
    ctx->pc = 0x370b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370b24: 0xc0dc2b0
    ctx->pc = 0x370B24u;
    SET_GPR_U32(ctx, 31, 0x370B2Cu);
    ctx->pc = 0x370B28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x370AC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370AC0_0x370ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370B2Cu; }
    }
    if (ctx->pc != 0x370B2Cu) { return; }
    ctx->pc = 0x370B2Cu;
    // 0x370b2c: 0x44800800
    ctx->pc = 0x370b2cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x370b30: 0x0
    ctx->pc = 0x370b30u;
    // NOP
    // 0x370b34: 0x46000832
    ctx->pc = 0x370b34u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x370b38: 0x45000003
    ctx->pc = 0x370B38u;
    {
        const bool branch_taken_0x370b38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x370B3Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x370b38) {
            ctx->pc = 0x370B48u;
            goto label_370b48;
        }
    }
    ctx->pc = 0x370B40u;
    // 0x370b40: 0x10000044
    ctx->pc = 0x370B40u;
    {
        const bool branch_taken_0x370b40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x370B44u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x370b40) {
            ctx->pc = 0x370C54u;
            goto label_370c54;
        }
    }
    ctx->pc = 0x370B48u;
label_370b48:
    // 0x370b48: 0x46010034
    ctx->pc = 0x370b48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x370b4c: 0x45000022
    ctx->pc = 0x370B4Cu;
    {
        const bool branch_taken_0x370b4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x370B50u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x370b4c) {
            ctx->pc = 0x370BD8u;
            goto label_370bd8;
        }
    }
    ctx->pc = 0x370B54u;
    // 0x370b54: 0x260202d
    ctx->pc = 0x370b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370b58: 0x240282d
    ctx->pc = 0x370b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370b5c: 0xc0dc2b0
    ctx->pc = 0x370B5Cu;
    SET_GPR_U32(ctx, 31, 0x370B64u);
    ctx->pc = 0x370B60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x370AC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370AC0_0x370ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370B64u; }
    }
    if (ctx->pc != 0x370B64u) { return; }
    ctx->pc = 0x370B64u;
    // 0x370b64: 0x44800800
    ctx->pc = 0x370b64u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x370b68: 0x0
    ctx->pc = 0x370b68u;
    // NOP
    // 0x370b6c: 0x46010036
    ctx->pc = 0x370b6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x370b70: 0x45010003
    ctx->pc = 0x370B70u;
    {
        const bool branch_taken_0x370b70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x370B74u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x370b70) {
            ctx->pc = 0x370B80u;
            goto label_370b80;
        }
    }
    ctx->pc = 0x370B78u;
    // 0x370b78: 0x10000035
    ctx->pc = 0x370B78u;
    {
        const bool branch_taken_0x370b78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x370B7Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x370b78) {
            ctx->pc = 0x370C50u;
            goto label_370c50;
        }
    }
    ctx->pc = 0x370B80u;
label_370b80:
    // 0x370b80: 0x220282d
    ctx->pc = 0x370b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370b84: 0xc0dc2b0
    ctx->pc = 0x370B84u;
    SET_GPR_U32(ctx, 31, 0x370B8Cu);
    ctx->pc = 0x370B88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x370AC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370AC0_0x370ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370B8Cu; }
    }
    if (ctx->pc != 0x370B8Cu) { return; }
    ctx->pc = 0x370B8Cu;
    // 0x370b8c: 0x44800800
    ctx->pc = 0x370b8cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x370b90: 0x0
    ctx->pc = 0x370b90u;
    // NOP
    // 0x370b94: 0x46010036
    ctx->pc = 0x370b94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x370b98: 0x45010003
    ctx->pc = 0x370B98u;
    {
        const bool branch_taken_0x370b98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x370B9Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x370b98) {
            ctx->pc = 0x370BA8u;
            goto label_370ba8;
        }
    }
    ctx->pc = 0x370BA0u;
    // 0x370ba0: 0x1000002b
    ctx->pc = 0x370BA0u;
    {
        const bool branch_taken_0x370ba0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x370BA4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x370ba0) {
            ctx->pc = 0x370C50u;
            goto label_370c50;
        }
    }
    ctx->pc = 0x370BA8u;
label_370ba8:
    // 0x370ba8: 0x260282d
    ctx->pc = 0x370ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370bac: 0xc0dc2b0
    ctx->pc = 0x370BACu;
    SET_GPR_U32(ctx, 31, 0x370BB4u);
    ctx->pc = 0x370BB0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x370AC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370AC0_0x370ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370BB4u; }
    }
    if (ctx->pc != 0x370BB4u) { return; }
    ctx->pc = 0x370BB4u;
    // 0x370bb4: 0x44800800
    ctx->pc = 0x370bb4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x370bb8: 0x0
    ctx->pc = 0x370bb8u;
    // NOP
    // 0x370bbc: 0x46010036
    ctx->pc = 0x370bbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x370bc0: 0x45000002
    ctx->pc = 0x370BC0u;
    {
        const bool branch_taken_0x370bc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x370BC4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x370bc0) {
            ctx->pc = 0x370BCCu;
            goto label_370bcc;
        }
    }
    ctx->pc = 0x370BC8u;
    // 0x370bc8: 0x102d
    ctx->pc = 0x370bc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_370bcc:
    // 0x370bcc: 0x38420001
    ctx->pc = 0x370bccu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x370bd0: 0x1000001f
    ctx->pc = 0x370BD0u;
    {
        const bool branch_taken_0x370bd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x370BD4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
        if (branch_taken_0x370bd0) {
            ctx->pc = 0x370C50u;
            goto label_370c50;
        }
    }
    ctx->pc = 0x370BD8u;
label_370bd8:
    // 0x370bd8: 0x240282d
    ctx->pc = 0x370bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370bdc: 0xc0dc2b0
    ctx->pc = 0x370BDCu;
    SET_GPR_U32(ctx, 31, 0x370BE4u);
    ctx->pc = 0x370BE0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x370AC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370AC0_0x370ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370BE4u; }
    }
    if (ctx->pc != 0x370BE4u) { return; }
    ctx->pc = 0x370BE4u;
    // 0x370be4: 0x44800800
    ctx->pc = 0x370be4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x370be8: 0x0
    ctx->pc = 0x370be8u;
    // NOP
    // 0x370bec: 0x46010034
    ctx->pc = 0x370becu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x370bf0: 0x45000003
    ctx->pc = 0x370BF0u;
    {
        const bool branch_taken_0x370bf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x370BF4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x370bf0) {
            ctx->pc = 0x370C00u;
            goto label_370c00;
        }
    }
    ctx->pc = 0x370BF8u;
    // 0x370bf8: 0x10000015
    ctx->pc = 0x370BF8u;
    {
        const bool branch_taken_0x370bf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x370BFCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x370bf8) {
            ctx->pc = 0x370C50u;
            goto label_370c50;
        }
    }
    ctx->pc = 0x370C00u;
label_370c00:
    // 0x370c00: 0x220282d
    ctx->pc = 0x370c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370c04: 0xc0dc2b0
    ctx->pc = 0x370C04u;
    SET_GPR_U32(ctx, 31, 0x370C0Cu);
    ctx->pc = 0x370C08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x370AC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370AC0_0x370ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370C0Cu; }
    }
    if (ctx->pc != 0x370C0Cu) { return; }
    ctx->pc = 0x370C0Cu;
    // 0x370c0c: 0x44800800
    ctx->pc = 0x370c0cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x370c10: 0x0
    ctx->pc = 0x370c10u;
    // NOP
    // 0x370c14: 0x46010034
    ctx->pc = 0x370c14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x370c18: 0x45000003
    ctx->pc = 0x370C18u;
    {
        const bool branch_taken_0x370c18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x370C1Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x370c18) {
            ctx->pc = 0x370C28u;
            goto label_370c28;
        }
    }
    ctx->pc = 0x370C20u;
    // 0x370c20: 0x1000000b
    ctx->pc = 0x370C20u;
    {
        const bool branch_taken_0x370c20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x370C24u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x370c20) {
            ctx->pc = 0x370C50u;
            goto label_370c50;
        }
    }
    ctx->pc = 0x370C28u;
label_370c28:
    // 0x370c28: 0x260282d
    ctx->pc = 0x370c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370c2c: 0xc0dc2b0
    ctx->pc = 0x370C2Cu;
    SET_GPR_U32(ctx, 31, 0x370C34u);
    ctx->pc = 0x370C30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x370AC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370AC0_0x370ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370C34u; }
    }
    if (ctx->pc != 0x370C34u) { return; }
    ctx->pc = 0x370C34u;
    // 0x370c34: 0x44800800
    ctx->pc = 0x370c34u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x370c38: 0x0
    ctx->pc = 0x370c38u;
    // NOP
    // 0x370c3c: 0x46010034
    ctx->pc = 0x370c3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x370c40: 0x45000003
    ctx->pc = 0x370C40u;
    {
        const bool branch_taken_0x370c40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x370C44u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x370c40) {
            ctx->pc = 0x370C50u;
            goto label_370c50;
        }
    }
    ctx->pc = 0x370C48u;
    // 0x370c48: 0x10000001
    ctx->pc = 0x370C48u;
    {
        const bool branch_taken_0x370c48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x370C4Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x370c48) {
            ctx->pc = 0x370C50u;
            goto label_370c50;
        }
    }
    ctx->pc = 0x370C50u;
label_370c50:
    // 0x370c50: 0xdfbf0040
    ctx->pc = 0x370c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_370c54:
    // 0x370c54: 0x7bb30030
    ctx->pc = 0x370c54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x370c58: 0x7bb20020
    ctx->pc = 0x370c58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x370c5c: 0x7bb10010
    ctx->pc = 0x370c5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x370c60: 0x7bb00000
    ctx->pc = 0x370c60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370c64: 0x3e00008
    ctx->pc = 0x370C64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370C68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x370B00u: goto label_370b00;
            case 0x370B48u: goto label_370b48;
            case 0x370B80u: goto label_370b80;
            case 0x370BA8u: goto label_370ba8;
            case 0x370BCCu: goto label_370bcc;
            case 0x370BD8u: goto label_370bd8;
            case 0x370C00u: goto label_370c00;
            case 0x370C28u: goto label_370c28;
            case 0x370C50u: goto label_370c50;
            case 0x370C54u: goto label_370c54;
            case 0x370CACu: goto label_370cac;
            case 0x370CE0u: goto label_370ce0;
            case 0x370D08u: goto label_370d08;
            case 0x370D24u: goto label_370d24;
            case 0x370D54u: goto label_370d54;
            case 0x370D60u: goto label_370d60;
            case 0x370D78u: goto label_370d78;
            case 0x370D84u: goto label_370d84;
            case 0x370D8Cu: goto label_370d8c;
            case 0x370E24u: goto label_370e24;
            case 0x370E60u: goto label_370e60;
            case 0x370F30u: goto label_370f30;
            case 0x370F64u: goto label_370f64;
            case 0x370F90u: goto label_370f90;
            case 0x370F94u: goto label_370f94;
            case 0x370FA4u: goto label_370fa4;
            case 0x370FA8u: goto label_370fa8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x370C6Cu;
    // 0x370c6c: 0x0
    ctx->pc = 0x370c6cu;
    // NOP
    // 0x370c70: 0x27bdff80
    ctx->pc = 0x370c70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x370c74: 0xffbf0070
    ctx->pc = 0x370c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x370c78: 0x7fb60060
    ctx->pc = 0x370c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x370c7c: 0x7fb50050
    ctx->pc = 0x370c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x370c80: 0x7fb40040
    ctx->pc = 0x370c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x370c84: 0x7fb30030
    ctx->pc = 0x370c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x370c88: 0xa02d
    ctx->pc = 0x370c88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370c8c: 0x7fb20020
    ctx->pc = 0x370c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x370c90: 0x982d
    ctx->pc = 0x370c90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370c94: 0x7fb10010
    ctx->pc = 0x370c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x370c98: 0x80902d
    ctx->pc = 0x370c98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370c9c: 0x7fb00000
    ctx->pc = 0x370c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x370ca0: 0xa0882d
    ctx->pc = 0x370ca0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370ca4: 0x1000000e
    ctx->pc = 0x370CA4u;
    {
        const bool branch_taken_0x370ca4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x370CA8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x370ca4) {
            ctx->pc = 0x370CE0u;
            goto label_370ce0;
        }
    }
    ctx->pc = 0x370CACu;
label_370cac:
    // 0x370cac: 0x1318c0
    ctx->pc = 0x370cacu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 3));
    // 0x370cb0: 0x210c0
    ctx->pc = 0x370cb0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x370cb4: 0x2432021
    ctx->pc = 0x370cb4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x370cb8: 0x2422821
    ctx->pc = 0x370cb8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x370cbc: 0x26620002
    ctx->pc = 0x370cbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 2));
    // 0x370cc0: 0x210c0
    ctx->pc = 0x370cc0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x370cc4: 0xc0dc2b0
    ctx->pc = 0x370CC4u;
    SET_GPR_U32(ctx, 31, 0x370CCCu);
    ctx->pc = 0x370CC8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->pc = 0x370AC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370AC0_0x370ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370CCCu; }
    }
    if (ctx->pc != 0x370CCCu) { return; }
    ctx->pc = 0x370CCCu;
    // 0x370ccc: 0x46000024
    ctx->pc = 0x370cccu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x370cd0: 0x26730001
    ctx->pc = 0x370cd0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x370cd4: 0x44020000
    ctx->pc = 0x370cd4u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x370cd8: 0x0
    ctx->pc = 0x370cd8u;
    // NOP
    // 0x370cdc: 0x282a021
    ctx->pc = 0x370cdcu;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_370ce0:
    // 0x370ce0: 0x2602fffe
    ctx->pc = 0x370ce0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x370ce4: 0x262102a
    ctx->pc = 0x370ce4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
    // 0x370ce8: 0x1440fff0
    ctx->pc = 0x370CE8u;
    {
        const bool branch_taken_0x370ce8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x370CECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x370ce8) {
            ctx->pc = 0x370CACu;
            goto label_370cac;
        }
    }
    ctx->pc = 0x370CF0u;
    // 0x370cf0: 0x14a82a
    ctx->pc = 0x370cf0u;
    SET_GPR_U32(ctx, 21, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 20)));
    // 0x370cf4: 0xb02d
    ctx->pc = 0x370cf4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370cf8: 0x3ab50001
    ctx->pc = 0x370cf8u;
    SET_GPR_U32(ctx, 21, XOR32(GPR_U32(ctx, 21), 1));
    // 0x370cfc: 0x982d
    ctx->pc = 0x370cfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370d00: 0x10000022
    ctx->pc = 0x370D00u;
    {
        const bool branch_taken_0x370d00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x370D04u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x370d00) {
            ctx->pc = 0x370D8Cu;
            goto label_370d8c;
        }
    }
    ctx->pc = 0x370D08u;
label_370d08:
    // 0x370d08: 0x1418c0
    ctx->pc = 0x370d08u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 3));
    // 0x370d0c: 0x210c0
    ctx->pc = 0x370d0cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x370d10: 0x2432821
    ctx->pc = 0x370d10u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x370d14: 0x2423021
    ctx->pc = 0x370d14u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x370d18: 0x240202d
    ctx->pc = 0x370d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370d1c: 0xc0dc2c0
    ctx->pc = 0x370D1Cu;
    SET_GPR_U32(ctx, 31, 0x370D24u);
    ctx->pc = 0x370D20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x370B00u;
    goto label_370b00;
    ctx->pc = 0x370D24u;
label_370d24:
    // 0x370d24: 0x304300ff
    ctx->pc = 0x370d24u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x370d28: 0x10600016
    ctx->pc = 0x370D28u;
    {
        const bool branch_taken_0x370d28 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x370d28) {
            ctx->pc = 0x370D84u;
            goto label_370d84;
        }
    }
    ctx->pc = 0x370D30u;
    // 0x370d30: 0x12a0000b
    ctx->pc = 0x370D30u;
    {
        const bool branch_taken_0x370d30 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x370D34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x370d30) {
            ctx->pc = 0x370D60u;
            goto label_370d60;
        }
    }
    ctx->pc = 0x370D38u;
    // 0x370d38: 0x24020001
    ctx->pc = 0x370d38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x370d3c: 0x14620005
    ctx->pc = 0x370D3Cu;
    {
        const bool branch_taken_0x370d3c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x370D40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 4294967295));
        if (branch_taken_0x370d3c) {
            ctx->pc = 0x370D54u;
            goto label_370d54;
        }
    }
    ctx->pc = 0x370D44u;
    // 0x370d44: 0x26c20001
    ctx->pc = 0x370d44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 1));
    // 0x370d48: 0x2b63c
    ctx->pc = 0x370d48u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 24));
    // 0x370d4c: 0x1000000d
    ctx->pc = 0x370D4Cu;
    {
        const bool branch_taken_0x370d4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x370D50u;
        SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 24));
        if (branch_taken_0x370d4c) {
            ctx->pc = 0x370D84u;
            goto label_370d84;
        }
    }
    ctx->pc = 0x370D54u;
label_370d54:
    // 0x370d54: 0x2b63c
    ctx->pc = 0x370d54u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 24));
    // 0x370d58: 0x1000000a
    ctx->pc = 0x370D58u;
    {
        const bool branch_taken_0x370d58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x370D5Cu;
        SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 24));
        if (branch_taken_0x370d58) {
            ctx->pc = 0x370D84u;
            goto label_370d84;
        }
    }
    ctx->pc = 0x370D60u;
label_370d60:
    // 0x370d60: 0x14620005
    ctx->pc = 0x370D60u;
    {
        const bool branch_taken_0x370d60 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x370d60) {
            ctx->pc = 0x370D78u;
            goto label_370d78;
        }
    }
    ctx->pc = 0x370D68u;
    // 0x370d68: 0x26c20001
    ctx->pc = 0x370d68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 1));
    // 0x370d6c: 0x2b63c
    ctx->pc = 0x370d6cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 24));
    // 0x370d70: 0x10000004
    ctx->pc = 0x370D70u;
    {
        const bool branch_taken_0x370d70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x370D74u;
        SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 24));
        if (branch_taken_0x370d70) {
            ctx->pc = 0x370D84u;
            goto label_370d84;
        }
    }
    ctx->pc = 0x370D78u;
label_370d78:
    // 0x370d78: 0x26c2ffff
    ctx->pc = 0x370d78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x370d7c: 0x2b63c
    ctx->pc = 0x370d7cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 24));
    // 0x370d80: 0x16b63f
    ctx->pc = 0x370d80u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 24));
label_370d84:
    // 0x370d84: 0x26730001
    ctx->pc = 0x370d84u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x370d88: 0x26940001
    ctx->pc = 0x370d88u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_370d8c:
    // 0x370d8c: 0x2602fffe
    ctx->pc = 0x370d8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x370d90: 0x262102a
    ctx->pc = 0x370d90u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
    // 0x370d94: 0x1440ffdc
    ctx->pc = 0x370D94u;
    {
        const bool branch_taken_0x370d94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x370D98u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 1));
        if (branch_taken_0x370d94) {
            ctx->pc = 0x370D08u;
            goto label_370d08;
        }
    }
    ctx->pc = 0x370D9Cu;
    // 0x370d9c: 0x16163c
    ctx->pc = 0x370d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 24));
    // 0x370da0: 0xdfbf0070
    ctx->pc = 0x370da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x370da4: 0x7bb60060
    ctx->pc = 0x370da4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x370da8: 0x2163f
    ctx->pc = 0x370da8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x370dac: 0x7bb50050
    ctx->pc = 0x370dacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x370db0: 0x2102a
    ctx->pc = 0x370db0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 2)));
    // 0x370db4: 0x7bb40040
    ctx->pc = 0x370db4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x370db8: 0x7bb30030
    ctx->pc = 0x370db8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x370dbc: 0x7bb20020
    ctx->pc = 0x370dbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x370dc0: 0x7bb10010
    ctx->pc = 0x370dc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x370dc4: 0x7bb00000
    ctx->pc = 0x370dc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370dc8: 0x3e00008
    ctx->pc = 0x370DC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370DCCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x370B00u: goto label_370b00;
            case 0x370B48u: goto label_370b48;
            case 0x370B80u: goto label_370b80;
            case 0x370BA8u: goto label_370ba8;
            case 0x370BCCu: goto label_370bcc;
            case 0x370BD8u: goto label_370bd8;
            case 0x370C00u: goto label_370c00;
            case 0x370C28u: goto label_370c28;
            case 0x370C50u: goto label_370c50;
            case 0x370C54u: goto label_370c54;
            case 0x370CACu: goto label_370cac;
            case 0x370CE0u: goto label_370ce0;
            case 0x370D08u: goto label_370d08;
            case 0x370D24u: goto label_370d24;
            case 0x370D54u: goto label_370d54;
            case 0x370D60u: goto label_370d60;
            case 0x370D78u: goto label_370d78;
            case 0x370D84u: goto label_370d84;
            case 0x370D8Cu: goto label_370d8c;
            case 0x370E24u: goto label_370e24;
            case 0x370E60u: goto label_370e60;
            case 0x370F30u: goto label_370f30;
            case 0x370F64u: goto label_370f64;
            case 0x370F90u: goto label_370f90;
            case 0x370F94u: goto label_370f94;
            case 0x370FA4u: goto label_370fa4;
            case 0x370FA8u: goto label_370fa8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x370DD0u;
    // 0x370dd0: 0x27bdff20
    ctx->pc = 0x370dd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x370dd4: 0xffbf00a0
    ctx->pc = 0x370dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x370dd8: 0x7fbe0090
    ctx->pc = 0x370dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x370ddc: 0x7fb70080
    ctx->pc = 0x370ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x370de0: 0x7fb60070
    ctx->pc = 0x370de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x370de4: 0x7fb50060
    ctx->pc = 0x370de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x370de8: 0x7fb40050
    ctx->pc = 0x370de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x370dec: 0x80a82d
    ctx->pc = 0x370decu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370df0: 0x7fb30040
    ctx->pc = 0x370df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x370df4: 0xa0a02d
    ctx->pc = 0x370df4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370df8: 0x7fb20030
    ctx->pc = 0x370df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x370dfc: 0x7fb10020
    ctx->pc = 0x370dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x370e00: 0x7fb00010
    ctx->pc = 0x370e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x370e04: 0xe7b40000
    ctx->pc = 0x370e04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x370e08: 0xc0dc258
    ctx->pc = 0x370E08u;
    SET_GPR_U32(ctx, 31, 0x370E10u);
    ctx->pc = 0x370E0Cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x370960u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370960_0x370960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370E10u; }
    }
    if (ctx->pc != 0x370E10u) { return; }
    ctx->pc = 0x370E10u;
    // 0x370e10: 0x24030001
    ctx->pc = 0x370e10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x370e14: 0x14430003
    ctx->pc = 0x370E14u;
    {
        const bool branch_taken_0x370e14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x370e14) {
            ctx->pc = 0x370E24u;
            goto label_370e24;
        }
    }
    ctx->pc = 0x370E1Cu;
    // 0x370e1c: 0x10000061
    ctx->pc = 0x370E1Cu;
    {
        const bool branch_taken_0x370e1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x370E20u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x370e1c) {
            ctx->pc = 0x370FA4u;
            goto label_370fa4;
        }
    }
    ctx->pc = 0x370E24u;
label_370e24:
    // 0x370e24: 0xc6800000
    ctx->pc = 0x370e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370e28: 0x27b000dc
    ctx->pc = 0x370e28u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 220));
    // 0x370e2c: 0x4614a502
    ctx->pc = 0x370e2cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x370e30: 0x982d
    ctx->pc = 0x370e30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370e34: 0x27b200d4
    ctx->pc = 0x370e34u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 212));
    // 0x370e38: 0x27b100cc
    ctx->pc = 0x370e38u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 204));
    // 0x370e3c: 0x27b600c4
    ctx->pc = 0x370e3cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 29), 196));
    // 0x370e40: 0x27b700b4
    ctx->pc = 0x370e40u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 29), 180));
    // 0x370e44: 0x27be00bc
    ctx->pc = 0x370e44u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 29), 188));
    // 0x370e48: 0x46800020
    ctx->pc = 0x370e48u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x370e4c: 0xe7a000d8
    ctx->pc = 0x370e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x370e50: 0xc6800004
    ctx->pc = 0x370e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370e54: 0x46800020
    ctx->pc = 0x370e54u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x370e58: 0x1000004e
    ctx->pc = 0x370E58u;
    {
        const bool branch_taken_0x370e58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x370E5Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        if (branch_taken_0x370e58) {
            ctx->pc = 0x370F94u;
            goto label_370f94;
        }
    }
    ctx->pc = 0x370E60u;
label_370e60:
    // 0x370e60: 0x26620001
    ctx->pc = 0x370e60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 1));
    // 0x370e64: 0x2a31821
    ctx->pc = 0x370e64u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x370e68: 0x30420003
    ctx->pc = 0x370e68u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
    // 0x370e6c: 0xc4600000
    ctx->pc = 0x370e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370e70: 0x210c0
    ctx->pc = 0x370e70u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x370e74: 0x2a21021
    ctx->pc = 0x370e74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x370e78: 0x27a400d0
    ctx->pc = 0x370e78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 208));
    // 0x370e7c: 0x27a500c8
    ctx->pc = 0x370e7cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 200));
    // 0x370e80: 0x27a600d8
    ctx->pc = 0x370e80u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 216));
    // 0x370e84: 0x27a700c0
    ctx->pc = 0x370e84u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 192));
    // 0x370e88: 0x46800020
    ctx->pc = 0x370e88u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x370e8c: 0xe7a000d0
    ctx->pc = 0x370e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x370e90: 0xc4600004
    ctx->pc = 0x370e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370e94: 0x46800020
    ctx->pc = 0x370e94u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x370e98: 0xe6400000
    ctx->pc = 0x370e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x370e9c: 0xc4400000
    ctx->pc = 0x370e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370ea0: 0x46800020
    ctx->pc = 0x370ea0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x370ea4: 0xe7a000c8
    ctx->pc = 0x370ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x370ea8: 0xc4400004
    ctx->pc = 0x370ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370eac: 0x46800020
    ctx->pc = 0x370eacu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x370eb0: 0xc0dc480
    ctx->pc = 0x370EB0u;
    SET_GPR_U32(ctx, 31, 0x370EB8u);
    ctx->pc = 0x370EB4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->pc = 0x371200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00371200_0x371200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370EB8u; }
    }
    if (ctx->pc != 0x370EB8u) { return; }
    ctx->pc = 0x370EB8u;
    // 0x370eb8: 0xc7a100c0
    ctx->pc = 0x370eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370ebc: 0xc7a000d8
    ctx->pc = 0x370ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370ec0: 0xc6c30000
    ctx->pc = 0x370ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x370ec4: 0xc6020000
    ctx->pc = 0x370ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x370ec8: 0x46000801
    ctx->pc = 0x370ec8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x370ecc: 0x46021881
    ctx->pc = 0x370eccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x370ed0: 0x4600001a
    ctx->pc = 0x370ed0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x370ed4: 0x4602101c
    ctx->pc = 0x370ed4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x370ed8: 0x46140036
    ctx->pc = 0x370ed8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x370edc: 0x4500002c
    ctx->pc = 0x370EDCu;
    {
        const bool branch_taken_0x370edc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x370EE0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 184));
        if (branch_taken_0x370edc) {
            ctx->pc = 0x370F90u;
            goto label_370f90;
        }
    }
    ctx->pc = 0x370EE4u;
    // 0x370ee4: 0x27a500d0
    ctx->pc = 0x370ee4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 208));
    // 0x370ee8: 0xc0dc124
    ctx->pc = 0x370EE8u;
    SET_GPR_U32(ctx, 31, 0x370EF0u);
    ctx->pc = 0x370EECu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 192));
    ctx->pc = 0x370490u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370490_0x370490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370EF0u; }
    }
    if (ctx->pc != 0x370EF0u) { return; }
    ctx->pc = 0x370EF0u;
    // 0x370ef0: 0x27a400b0
    ctx->pc = 0x370ef0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 176));
    // 0x370ef4: 0x27a500c8
    ctx->pc = 0x370ef4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 200));
    // 0x370ef8: 0xc0dc124
    ctx->pc = 0x370EF8u;
    SET_GPR_U32(ctx, 31, 0x370F00u);
    ctx->pc = 0x370EFCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 192));
    ctx->pc = 0x370490u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370490_0x370490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370F00u; }
    }
    if (ctx->pc != 0x370F00u) { return; }
    ctx->pc = 0x370F00u;
    // 0x370f00: 0xc7a400b8
    ctx->pc = 0x370f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x370f04: 0xc7a300b0
    ctx->pc = 0x370f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x370f08: 0xc7c20000
    ctx->pc = 0x370f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x370f0c: 0xc6e10000
    ctx->pc = 0x370f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370f10: 0x44800000
    ctx->pc = 0x370f10u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x370f14: 0x4603201a
    ctx->pc = 0x370f14u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x370f18: 0x4601105c
    ctx->pc = 0x370f18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x370f1c: 0x46000834
    ctx->pc = 0x370f1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x370f20: 0x45000003
    ctx->pc = 0x370F20u;
    {
        const bool branch_taken_0x370f20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x370F24u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x370f20) {
            ctx->pc = 0x370F30u;
            goto label_370f30;
        }
    }
    ctx->pc = 0x370F28u;
    // 0x370f28: 0x1000001f
    ctx->pc = 0x370F28u;
    {
        const bool branch_taken_0x370f28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x370F2Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        if (branch_taken_0x370f28) {
            ctx->pc = 0x370FA8u;
            goto label_370fa8;
        }
    }
    ctx->pc = 0x370F30u;
label_370f30:
    // 0x370f30: 0xc7a200d8
    ctx->pc = 0x370f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x370f34: 0xc7a000d0
    ctx->pc = 0x370f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370f38: 0xc6030000
    ctx->pc = 0x370f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x370f3c: 0xc6410000
    ctx->pc = 0x370f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370f40: 0x46001001
    ctx->pc = 0x370f40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x370f44: 0x46011841
    ctx->pc = 0x370f44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x370f48: 0x4600001a
    ctx->pc = 0x370f48u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x370f4c: 0x4601081c
    ctx->pc = 0x370f4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x370f50: 0x46140034
    ctx->pc = 0x370f50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x370f54: 0x45000003
    ctx->pc = 0x370F54u;
    {
        const bool branch_taken_0x370f54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x370F58u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x370f54) {
            ctx->pc = 0x370F64u;
            goto label_370f64;
        }
    }
    ctx->pc = 0x370F5Cu;
    // 0x370f5c: 0x10000011
    ctx->pc = 0x370F5Cu;
    {
        const bool branch_taken_0x370f5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x370f5c) {
            ctx->pc = 0x370FA4u;
            goto label_370fa4;
        }
    }
    ctx->pc = 0x370F64u;
label_370f64:
    // 0x370f64: 0xc7a000c8
    ctx->pc = 0x370f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370f68: 0xc6210000
    ctx->pc = 0x370f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370f6c: 0x46001001
    ctx->pc = 0x370f6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x370f70: 0x46011841
    ctx->pc = 0x370f70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x370f74: 0x4600001a
    ctx->pc = 0x370f74u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x370f78: 0x4601081c
    ctx->pc = 0x370f78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x370f7c: 0x46140034
    ctx->pc = 0x370f7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x370f80: 0x45000003
    ctx->pc = 0x370F80u;
    {
        const bool branch_taken_0x370f80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x370F84u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x370f80) {
            ctx->pc = 0x370F90u;
            goto label_370f90;
        }
    }
    ctx->pc = 0x370F88u;
    // 0x370f88: 0x10000006
    ctx->pc = 0x370F88u;
    {
        const bool branch_taken_0x370f88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x370f88) {
            ctx->pc = 0x370FA4u;
            goto label_370fa4;
        }
    }
    ctx->pc = 0x370F90u;
label_370f90:
    // 0x370f90: 0x26730001
    ctx->pc = 0x370f90u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_370f94:
    // 0x370f94: 0x2a620004
    ctx->pc = 0x370f94u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 4));
    // 0x370f98: 0x1440ffb1
    ctx->pc = 0x370F98u;
    {
        const bool branch_taken_0x370f98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x370F9Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 3));
        if (branch_taken_0x370f98) {
            ctx->pc = 0x370E60u;
            goto label_370e60;
        }
    }
    ctx->pc = 0x370FA0u;
    // 0x370fa0: 0x102d
    ctx->pc = 0x370fa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_370fa4:
    // 0x370fa4: 0xdfbf00a0
    ctx->pc = 0x370fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_370fa8:
    // 0x370fa8: 0xc7b40000
    ctx->pc = 0x370fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x370fac: 0x7bbe0090
    ctx->pc = 0x370facu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x370fb0: 0x7bb70080
    ctx->pc = 0x370fb0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x370fb4: 0x7bb60070
    ctx->pc = 0x370fb4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x370fb8: 0x7bb50060
    ctx->pc = 0x370fb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x370fbc: 0x7bb40050
    ctx->pc = 0x370fbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x370fc0: 0x7bb30040
    ctx->pc = 0x370fc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x370fc4: 0x7bb20030
    ctx->pc = 0x370fc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x370fc8: 0x7bb10020
    ctx->pc = 0x370fc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x370fcc: 0x7bb00010
    ctx->pc = 0x370fccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x370fd0: 0x3e00008
    ctx->pc = 0x370FD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370FD4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x370B00u: goto label_370b00;
            case 0x370B48u: goto label_370b48;
            case 0x370B80u: goto label_370b80;
            case 0x370BA8u: goto label_370ba8;
            case 0x370BCCu: goto label_370bcc;
            case 0x370BD8u: goto label_370bd8;
            case 0x370C00u: goto label_370c00;
            case 0x370C28u: goto label_370c28;
            case 0x370C50u: goto label_370c50;
            case 0x370C54u: goto label_370c54;
            case 0x370CACu: goto label_370cac;
            case 0x370CE0u: goto label_370ce0;
            case 0x370D08u: goto label_370d08;
            case 0x370D24u: goto label_370d24;
            case 0x370D54u: goto label_370d54;
            case 0x370D60u: goto label_370d60;
            case 0x370D78u: goto label_370d78;
            case 0x370D84u: goto label_370d84;
            case 0x370D8Cu: goto label_370d8c;
            case 0x370E24u: goto label_370e24;
            case 0x370E60u: goto label_370e60;
            case 0x370F30u: goto label_370f30;
            case 0x370F64u: goto label_370f64;
            case 0x370F90u: goto label_370f90;
            case 0x370F94u: goto label_370f94;
            case 0x370FA4u: goto label_370fa4;
            case 0x370FA8u: goto label_370fa8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x370FD8u;
    // 0x370fd8: 0x0
    ctx->pc = 0x370fd8u;
    // NOP
    // 0x370fdc: 0x0
    ctx->pc = 0x370fdcu;
    // NOP
}
