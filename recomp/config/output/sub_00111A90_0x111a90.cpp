#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00111A90
// Address: 0x111a90 - 0x111cf0
void sub_00111A90_0x111a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x111a90u;

    // 0x111a90: 0x80582d
    ctx->pc = 0x111a90u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111a94: 0x8d670000
    ctx->pc = 0x111a94u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x111a98: 0x2ce30002
    ctx->pc = 0x111a98u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 7), 2));
    // 0x111a9c: 0x14600091
    ctx->pc = 0x111A9Cu;
    {
        const bool branch_taken_0x111a9c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x111AA0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x111a9c) {
            ctx->pc = 0x111CE4u;
            goto label_111ce4;
        }
    }
    ctx->pc = 0x111AA4u;
    // 0x111aa4: 0x8ca40000
    ctx->pc = 0x111aa4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x111aa8: 0x2c830002
    ctx->pc = 0x111aa8u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 4), 2));
    // 0x111aac: 0x1460008d
    ctx->pc = 0x111AACu;
    {
        const bool branch_taken_0x111aac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x111AB0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x111aac) {
            ctx->pc = 0x111CE4u;
            goto label_111ce4;
        }
    }
    ctx->pc = 0x111AB4u;
    // 0x111ab4: 0x38e20004
    ctx->pc = 0x111ab4u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 7), 4));
    // 0x111ab8: 0x1440000b
    ctx->pc = 0x111AB8u;
    {
        const bool branch_taken_0x111ab8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x111ABCu;
        SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x111ab8) {
            ctx->pc = 0x111AE8u;
            goto label_111ae8;
        }
    }
    ctx->pc = 0x111AC0u;
    // 0x111ac0: 0x38820004
    ctx->pc = 0x111ac0u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 4));
    // 0x111ac4: 0x1440001c
    ctx->pc = 0x111AC4u;
    {
        const bool branch_taken_0x111ac4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x111ac4) {
            ctx->pc = 0x111B38u;
            goto label_111b38;
        }
    }
    ctx->pc = 0x111ACCu;
    // 0x111acc: 0x8ca30004
    ctx->pc = 0x111accu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x111ad0: 0x8d620004
    ctx->pc = 0x111ad0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x111ad4: 0x10430018
    ctx->pc = 0x111AD4u;
    {
        const bool branch_taken_0x111ad4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x111ad4) {
            ctx->pc = 0x111B38u;
            goto label_111b38;
        }
    }
    ctx->pc = 0x111ADCu;
    // 0x111adc: 0x3c020024
    ctx->pc = 0x111adcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x111ae0: 0x3e00008
    ctx->pc = 0x111AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111AE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294935968));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x111AE8u: goto label_111ae8;
            case 0x111B38u: goto label_111b38;
            case 0x111B40u: goto label_111b40;
            case 0x111B88u: goto label_111b88;
            case 0x111BACu: goto label_111bac;
            case 0x111BB8u: goto label_111bb8;
            case 0x111BE0u: goto label_111be0;
            case 0x111BF8u: goto label_111bf8;
            case 0x111BFCu: goto label_111bfc;
            case 0x111C00u: goto label_111c00;
            case 0x111C30u: goto label_111c30;
            case 0x111C40u: goto label_111c40;
            case 0x111C60u: goto label_111c60;
            case 0x111C98u: goto label_111c98;
            case 0x111CACu: goto label_111cac;
            case 0x111CE0u: goto label_111ce0;
            case 0x111CE4u: goto label_111ce4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x111AE8u;
label_111ae8:
    // 0x111ae8: 0x1060007e
    ctx->pc = 0x111AE8u;
    {
        const bool branch_taken_0x111ae8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x111AECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x111ae8) {
            ctx->pc = 0x111CE4u;
            goto label_111ce4;
        }
    }
    ctx->pc = 0x111AF0u;
    // 0x111af0: 0x38820002
    ctx->pc = 0x111af0u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 2));
    // 0x111af4: 0x14400012
    ctx->pc = 0x111AF4u;
    {
        const bool branch_taken_0x111af4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x111AF8u;
        SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 7), 2));
        if (branch_taken_0x111af4) {
            ctx->pc = 0x111B40u;
            goto label_111b40;
        }
    }
    ctx->pc = 0x111AFCu;
    // 0x111afc: 0x38e20002
    ctx->pc = 0x111afcu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 7), 2));
    // 0x111b00: 0x1440000d
    ctx->pc = 0x111B00u;
    {
        const bool branch_taken_0x111b00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x111b00) {
            ctx->pc = 0x111B38u;
            goto label_111b38;
        }
    }
    ctx->pc = 0x111B08u;
    // 0x111b08: 0xdd640000
    ctx->pc = 0x111b08u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x111b0c: 0xc0102d
    ctx->pc = 0x111b0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111b10: 0xfcc40000
    ctx->pc = 0x111b10u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x111b14: 0xdd630008
    ctx->pc = 0x111b14u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x111b18: 0xfcc30008
    ctx->pc = 0x111b18u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x111b1c: 0xdd640010
    ctx->pc = 0x111b1cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x111b20: 0xfcc40010
    ctx->pc = 0x111b20u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x111b24: 0x8d630004
    ctx->pc = 0x111b24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x111b28: 0x8ca40004
    ctx->pc = 0x111b28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x111b2c: 0x641824
    ctx->pc = 0x111b2cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x111b30: 0x3e00008
    ctx->pc = 0x111B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111B34u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x111AE8u: goto label_111ae8;
            case 0x111B38u: goto label_111b38;
            case 0x111B40u: goto label_111b40;
            case 0x111B88u: goto label_111b88;
            case 0x111BACu: goto label_111bac;
            case 0x111BB8u: goto label_111bb8;
            case 0x111BE0u: goto label_111be0;
            case 0x111BF8u: goto label_111bf8;
            case 0x111BFCu: goto label_111bfc;
            case 0x111C00u: goto label_111c00;
            case 0x111C30u: goto label_111c30;
            case 0x111C40u: goto label_111c40;
            case 0x111C60u: goto label_111c60;
            case 0x111C98u: goto label_111c98;
            case 0x111CACu: goto label_111cac;
            case 0x111CE0u: goto label_111ce0;
            case 0x111CE4u: goto label_111ce4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x111B38u;
label_111b38:
    // 0x111b38: 0x3e00008
    ctx->pc = 0x111B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111B3Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x111AE8u: goto label_111ae8;
            case 0x111B38u: goto label_111b38;
            case 0x111B40u: goto label_111b40;
            case 0x111B88u: goto label_111b88;
            case 0x111BACu: goto label_111bac;
            case 0x111BB8u: goto label_111bb8;
            case 0x111BE0u: goto label_111be0;
            case 0x111BF8u: goto label_111bf8;
            case 0x111BFCu: goto label_111bfc;
            case 0x111C00u: goto label_111c00;
            case 0x111C30u: goto label_111c30;
            case 0x111C40u: goto label_111c40;
            case 0x111C60u: goto label_111c60;
            case 0x111C98u: goto label_111c98;
            case 0x111CACu: goto label_111cac;
            case 0x111CE0u: goto label_111ce0;
            case 0x111CE4u: goto label_111ce4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x111B40u;
label_111b40:
    // 0x111b40: 0x10600068
    ctx->pc = 0x111B40u;
    {
        const bool branch_taken_0x111b40 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x111B44u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x111b40) {
            ctx->pc = 0x111CE4u;
            goto label_111ce4;
        }
    }
    ctx->pc = 0x111B48u;
    // 0x111b48: 0x8d680008
    ctx->pc = 0x111b48u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x111b4c: 0x8ca70008
    ctx->pc = 0x111b4cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x111b50: 0xdd6a0010
    ctx->pc = 0x111b50u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x111b54: 0x1071023
    ctx->pc = 0x111b54u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x111b58: 0x22023
    ctx->pc = 0x111b58u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x111b5c: 0x28430000
    ctx->pc = 0x111b5cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 0));
    // 0x111b60: 0x83100b
    ctx->pc = 0x111b60u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x111b64: 0x28420040
    ctx->pc = 0x111b64u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 64));
    // 0x111b68: 0x1040001d
    ctx->pc = 0x111B68u;
    {
        const bool branch_taken_0x111b68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x111B6Cu;
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 5), 16)));
        if (branch_taken_0x111b68) {
            ctx->pc = 0x111BE0u;
            goto label_111be0;
        }
    }
    ctx->pc = 0x111B70u;
    // 0x111b70: 0xe8102a
    ctx->pc = 0x111b70u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 8)));
    // 0x111b74: 0x1040000d
    ctx->pc = 0x111B74u;
    {
        const bool branch_taken_0x111b74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x111B78u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 7)));
        if (branch_taken_0x111b74) {
            ctx->pc = 0x111BACu;
            goto label_111bac;
        }
    }
    ctx->pc = 0x111B7Cu;
    // 0x111b7c: 0x24040001
    ctx->pc = 0x111b7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x111b80: 0x1073823
    ctx->pc = 0x111b80u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x111b84: 0x0
    ctx->pc = 0x111b84u;
    // NOP
label_111b88:
    // 0x111b88: 0x9187a
    ctx->pc = 0x111b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) >> 1);
    // 0x111b8c: 0x1241024
    ctx->pc = 0x111b8cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x111b90: 0x24e7ffff
    ctx->pc = 0x111b90u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x111b94: 0x0
    ctx->pc = 0x111b94u;
    // NOP
    // 0x111b98: 0x0
    ctx->pc = 0x111b98u;
    // NOP
    // 0x111b9c: 0x14e0fffa
    ctx->pc = 0x111B9Cu;
    {
        const bool branch_taken_0x111b9c = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x111BA0u;
        SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x111b9c) {
            ctx->pc = 0x111B88u;
            goto label_111b88;
        }
    }
    ctx->pc = 0x111BA4u;
    // 0x111ba4: 0x100382d
    ctx->pc = 0x111ba4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ba8: 0x107102a
    ctx->pc = 0x111ba8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 7)));
label_111bac:
    // 0x111bac: 0x50400014
    ctx->pc = 0x111BACu;
    {
        const bool branch_taken_0x111bac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x111bac) {
            ctx->pc = 0x111BB0u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 11), 4)));
            ctx->pc = 0x111C00u;
            goto label_111c00;
        }
    }
    ctx->pc = 0x111BB4u;
    // 0x111bb4: 0x240c0001
    ctx->pc = 0x111bb4u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 1));
label_111bb8:
    // 0x111bb8: 0x25080001
    ctx->pc = 0x111bb8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x111bbc: 0xa107a
    ctx->pc = 0x111bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) >> 1);
    // 0x111bc0: 0x14c1824
    ctx->pc = 0x111bc0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x111bc4: 0x107202a
    ctx->pc = 0x111bc4u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 7)));
    // 0x111bc8: 0x0
    ctx->pc = 0x111bc8u;
    // NOP
    // 0x111bcc: 0x1480fffa
    ctx->pc = 0x111BCCu;
    {
        const bool branch_taken_0x111bcc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x111BD0u;
        SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x111bcc) {
            ctx->pc = 0x111BB8u;
            goto label_111bb8;
        }
    }
    ctx->pc = 0x111BD4u;
    // 0x111bd4: 0x1000000a
    ctx->pc = 0x111BD4u;
    {
        const bool branch_taken_0x111bd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x111BD8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 11), 4)));
        if (branch_taken_0x111bd4) {
            ctx->pc = 0x111C00u;
            goto label_111c00;
        }
    }
    ctx->pc = 0x111BDCu;
    // 0x111bdc: 0x0
    ctx->pc = 0x111bdcu;
    // NOP
label_111be0:
    // 0x111be0: 0xe8102a
    ctx->pc = 0x111be0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 8)));
    // 0x111be4: 0x50400004
    ctx->pc = 0x111BE4u;
    {
        const bool branch_taken_0x111be4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x111be4) {
            ctx->pc = 0x111BE8u;
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x111BF8u;
            goto label_111bf8;
        }
    }
    ctx->pc = 0x111BECu;
    // 0x111bec: 0x10000003
    ctx->pc = 0x111BECu;
    {
        const bool branch_taken_0x111bec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x111BF0u;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x111bec) {
            ctx->pc = 0x111BFCu;
            goto label_111bfc;
        }
    }
    ctx->pc = 0x111BF4u;
    // 0x111bf4: 0x0
    ctx->pc = 0x111bf4u;
    // NOP
label_111bf8:
    // 0x111bf8: 0x502d
    ctx->pc = 0x111bf8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111bfc:
    // 0x111bfc: 0x8d640004
    ctx->pc = 0x111bfcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 11), 4)));
label_111c00:
    // 0x111c00: 0x8ca20004
    ctx->pc = 0x111c00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x111c04: 0x10820024
    ctx->pc = 0x111C04u;
    {
        const bool branch_taken_0x111c04 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x111C08u;
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 9));
        if (branch_taken_0x111c04) {
            ctx->pc = 0x111C98u;
            goto label_111c98;
        }
    }
    ctx->pc = 0x111C0Cu;
    // 0x111c0c: 0x12a182f
    ctx->pc = 0x111c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) - GPR_U64(ctx, 10));
    // 0x111c10: 0x44180a
    ctx->pc = 0x111c10u;
    if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 2));
    // 0x111c14: 0x4620006
    ctx->pc = 0x111C14u;
    {
        const bool branch_taken_0x111c14 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x111c14) {
            ctx->pc = 0x111C18u;
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 3));
            ctx->pc = 0x111C30u;
            goto label_111c30;
        }
    }
    ctx->pc = 0x111C1Cu;
    // 0x111c1c: 0xacc80008
    ctx->pc = 0x111c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x111c20: 0xfcc30010
    ctx->pc = 0x111c20u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x111c24: 0x10000006
    ctx->pc = 0x111C24u;
    {
        const bool branch_taken_0x111c24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x111C28u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x111c24) {
            ctx->pc = 0x111C40u;
            goto label_111c40;
        }
    }
    ctx->pc = 0x111C2Cu;
    // 0x111c2c: 0x0
    ctx->pc = 0x111c2cu;
    // NOP
label_111c30:
    // 0x111c30: 0x24020001
    ctx->pc = 0x111c30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x111c34: 0xacc20004
    ctx->pc = 0x111c34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x111c38: 0xacc80008
    ctx->pc = 0x111c38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x111c3c: 0xfcc30010
    ctx->pc = 0x111c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
label_111c40:
    // 0x111c40: 0xdcc70010
    ctx->pc = 0x111c40u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x111c44: 0x2402ffff
    ctx->pc = 0x111c44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x111c48: 0x21178
    ctx->pc = 0x111c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x111c4c: 0x2113a
    ctx->pc = 0x111c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x111c50: 0x64e3ffff
    ctx->pc = 0x111c50u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 7) + (int64_t)4294967295);
    // 0x111c54: 0x43102b
    ctx->pc = 0x111c54u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x111c58: 0x14400014
    ctx->pc = 0x111C58u;
    {
        const bool branch_taken_0x111c58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x111c58) {
            ctx->pc = 0x111CACu;
            goto label_111cac;
        }
    }
    ctx->pc = 0x111C60u;
label_111c60:
    // 0x111c60: 0x72878
    ctx->pc = 0x111c60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << 1);
    // 0x111c64: 0x8cc20008
    ctx->pc = 0x111c64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x111c68: 0x64a3ffff
    ctx->pc = 0x111c68u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)4294967295);
    // 0x111c6c: 0x2404ffff
    ctx->pc = 0x111c6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x111c70: 0x42178
    ctx->pc = 0x111c70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 5);
    // 0x111c74: 0x4213a
    ctx->pc = 0x111c74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 4);
    // 0x111c78: 0x2442ffff
    ctx->pc = 0x111c78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x111c7c: 0x83202b
    ctx->pc = 0x111c7cu;
    SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x111c80: 0xacc20008
    ctx->pc = 0x111c80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x111c84: 0xa0382d
    ctx->pc = 0x111c84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111c88: 0x1080fff5
    ctx->pc = 0x111C88u;
    {
        const bool branch_taken_0x111c88 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x111C8Cu;
        WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 5));
        if (branch_taken_0x111c88) {
            ctx->pc = 0x111C60u;
            goto label_111c60;
        }
    }
    ctx->pc = 0x111C90u;
    // 0x111c90: 0x10000006
    ctx->pc = 0x111C90u;
    {
        const bool branch_taken_0x111c90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x111c90) {
            ctx->pc = 0x111CACu;
            goto label_111cac;
        }
    }
    ctx->pc = 0x111C98u;
label_111c98:
    // 0x111c98: 0x149102d
    ctx->pc = 0x111c98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 9));
    // 0x111c9c: 0xacc40004
    ctx->pc = 0x111c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x111ca0: 0xacc80008
    ctx->pc = 0x111ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x111ca4: 0x40382d
    ctx->pc = 0x111ca4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ca8: 0xfcc20010
    ctx->pc = 0x111ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
label_111cac:
    // 0x111cac: 0x2402ffff
    ctx->pc = 0x111cacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x111cb0: 0x210fa
    ctx->pc = 0x111cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x111cb4: 0x24030003
    ctx->pc = 0x111cb4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x111cb8: 0x47102b
    ctx->pc = 0x111cb8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x111cbc: 0x10400008
    ctx->pc = 0x111CBCu;
    {
        const bool branch_taken_0x111cbc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x111CC0u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x111cbc) {
            ctx->pc = 0x111CE0u;
            goto label_111ce0;
        }
    }
    ctx->pc = 0x111CC4u;
    // 0x111cc4: 0x8cc20008
    ctx->pc = 0x111cc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x111cc8: 0x7207a
    ctx->pc = 0x111cc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) >> 1);
    // 0x111ccc: 0x30e30001
    ctx->pc = 0x111cccu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 7), 1));
    // 0x111cd0: 0x641825
    ctx->pc = 0x111cd0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x111cd4: 0x24420001
    ctx->pc = 0x111cd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x111cd8: 0xfcc30010
    ctx->pc = 0x111cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x111cdc: 0xacc20008
    ctx->pc = 0x111cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_111ce0:
    // 0x111ce0: 0xc0102d
    ctx->pc = 0x111ce0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_111ce4:
    // 0x111ce4: 0x3e00008
    ctx->pc = 0x111CE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x111AE8u: goto label_111ae8;
            case 0x111B38u: goto label_111b38;
            case 0x111B40u: goto label_111b40;
            case 0x111B88u: goto label_111b88;
            case 0x111BACu: goto label_111bac;
            case 0x111BB8u: goto label_111bb8;
            case 0x111BE0u: goto label_111be0;
            case 0x111BF8u: goto label_111bf8;
            case 0x111BFCu: goto label_111bfc;
            case 0x111C00u: goto label_111c00;
            case 0x111C30u: goto label_111c30;
            case 0x111C40u: goto label_111c40;
            case 0x111C60u: goto label_111c60;
            case 0x111C98u: goto label_111c98;
            case 0x111CACu: goto label_111cac;
            case 0x111CE0u: goto label_111ce0;
            case 0x111CE4u: goto label_111ce4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x111CECu;
    // 0x111cec: 0x0
    ctx->pc = 0x111cecu;
    // NOP
}
