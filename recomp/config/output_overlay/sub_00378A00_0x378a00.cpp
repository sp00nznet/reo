#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00378A00
// Address: 0x378a00 - 0x378c80
void sub_00378A00_0x378a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x378a00u;

    // 0x378a00: 0x3c01002a
    ctx->pc = 0x378a00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x378a04: 0x24070045
    ctx->pc = 0x378a04u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 69));
    // 0x378a08: 0x8c24f9bc
    ctx->pc = 0x378a08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294965692)));
    // 0x378a0c: 0x24060001
    ctx->pc = 0x378a0cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x378a10: 0x24050046
    ctx->pc = 0x378a10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 70));
    // 0x378a14: 0x3c010057
    ctx->pc = 0x378a14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378a18: 0x41983
    ctx->pc = 0x378a18u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 6));
    // 0x378a1c: 0x8c28ba90
    ctx->pc = 0x378a1cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378a20: 0x25080020
    ctx->pc = 0x378a20u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 32));
    // 0x378a24: 0x3c010057
    ctx->pc = 0x378a24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378a28: 0xac28ba90
    ctx->pc = 0x378a28u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 8));
    // 0x378a2c: 0x3c010057
    ctx->pc = 0x378a2cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378a30: 0x8c28ba90
    ctx->pc = 0x378a30u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378a34: 0xfd000000
    ctx->pc = 0x378a34u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 0));
    // 0x378a38: 0x3c010057
    ctx->pc = 0x378a38u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378a3c: 0xfd070008
    ctx->pc = 0x378a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 7));
    // 0x378a40: 0x8c27ba90
    ctx->pc = 0x378a40u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378a44: 0x24e70010
    ctx->pc = 0x378a44u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 16));
    // 0x378a48: 0x3c010057
    ctx->pc = 0x378a48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378a4c: 0xac27ba90
    ctx->pc = 0x378a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 7));
    // 0x378a50: 0x3c010057
    ctx->pc = 0x378a50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378a54: 0x8c27ba90
    ctx->pc = 0x378a54u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378a58: 0xfce60000
    ctx->pc = 0x378a58u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 6));
    // 0x378a5c: 0x3c010057
    ctx->pc = 0x378a5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378a60: 0xfce50008
    ctx->pc = 0x378a60u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x378a64: 0x8c26ba90
    ctx->pc = 0x378a64u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378a68: 0x3c010032
    ctx->pc = 0x378a68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x378a6c: 0x24c60010
    ctx->pc = 0x378a6cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
    // 0x378a70: 0x94254416
    ctx->pc = 0x378a70u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17430)));
    // 0x378a74: 0x3c010057
    ctx->pc = 0x378a74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378a78: 0x52942
    ctx->pc = 0x378a78u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 5));
    // 0x378a7c: 0xac26ba90
    ctx->pc = 0x378a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 6));
    // 0x378a80: 0x5383c
    ctx->pc = 0x378a80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 0));
    // 0x378a84: 0x3c010057
    ctx->pc = 0x378a84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378a88: 0x8c28ba90
    ctx->pc = 0x378a88u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378a8c: 0x4810003
    ctx->pc = 0x378A8Cu;
    {
        const bool branch_taken_0x378a8c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x378A90u;
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
        if (branch_taken_0x378a8c) {
            ctx->pc = 0x378A9Cu;
            goto label_378a9c;
        }
    }
    ctx->pc = 0x378A94u;
    // 0x378a94: 0x2483003f
    ctx->pc = 0x378a94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 63));
    // 0x378a98: 0x31983
    ctx->pc = 0x378a98u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_378a9c:
    // 0x378a9c: 0x3283c
    ctx->pc = 0x378a9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x378aa0: 0x2406004c
    ctx->pc = 0x378aa0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 76));
    // 0x378aa4: 0x5283f
    ctx->pc = 0x378aa4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x378aa8: 0x3c030a00
    ctx->pc = 0x378aa8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)2560 << 16));
    // 0x378aac: 0x52c38
    ctx->pc = 0x378aacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x378ab0: 0x3c010057
    ctx->pc = 0x378ab0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378ab4: 0xe52825
    ctx->pc = 0x378ab4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x378ab8: 0x240c0001
    ctx->pc = 0x378ab8u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 1));
    // 0x378abc: 0xa31825
    ctx->pc = 0x378abcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x378ac0: 0x240a004e
    ctx->pc = 0x378ac0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 78));
    // 0x378ac4: 0xfd030000
    ctx->pc = 0x378ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x378ac8: 0xc283c
    ctx->pc = 0x378ac8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) << (32 + 0));
    // 0x378acc: 0xfd060008
    ctx->pc = 0x378accu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 6));
    // 0x378ad0: 0x3c033000
    ctx->pc = 0x378ad0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)12288 << 16));
    // 0x378ad4: 0x8c2eba90
    ctx->pc = 0x378ad4u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378ad8: 0x655825
    ctx->pc = 0x378ad8u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x378adc: 0x24050080
    ctx->pc = 0x378adcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 128));
    // 0x378ae0: 0x34038080
    ctx->pc = 0x378ae0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32896));
    // 0x378ae4: 0x5303c
    ctx->pc = 0x378ae4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x378ae8: 0x31c38
    ctx->pc = 0x378ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x378aec: 0x34658080
    ctx->pc = 0x378aecu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 32896));
    // 0x378af0: 0x3c090003
    ctx->pc = 0x378af0u;
    SET_GPR_U32(ctx, 9, ((uint32_t)3 << 16));
    // 0x378af4: 0xa62825
    ctx->pc = 0x378af4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x378af8: 0x24080047
    ctx->pc = 0x378af8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 71));
    // 0x378afc: 0x24070006
    ctx->pc = 0x378afcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 6));
    // 0x378b00: 0x41843
    ctx->pc = 0x378b00u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
    // 0x378b04: 0x3c01002a
    ctx->pc = 0x378b04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x378b08: 0x25c60010
    ctx->pc = 0x378b08u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 14), 16));
    // 0x378b0c: 0x8c2df9f0
    ctx->pc = 0x378b0cu;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 1), 4294965744)));
    // 0x378b10: 0x3c010057
    ctx->pc = 0x378b10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378b14: 0xac26ba90
    ctx->pc = 0x378b14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 6));
    // 0x378b18: 0xd3142
    ctx->pc = 0x378b18u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 13), 5));
    // 0x378b1c: 0x3c010057
    ctx->pc = 0x378b1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378b20: 0x8c2dba90
    ctx->pc = 0x378b20u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378b24: 0x6303c
    ctx->pc = 0x378b24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x378b28: 0x6303e
    ctx->pc = 0x378b28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x378b2c: 0xcb3025
    ctx->pc = 0x378b2cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x378b30: 0xfda60000
    ctx->pc = 0x378b30u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 6));
    // 0x378b34: 0x3c010057
    ctx->pc = 0x378b34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378b38: 0xfdaa0008
    ctx->pc = 0x378b38u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 8), GPR_U64(ctx, 10));
    // 0x378b3c: 0x8c26ba90
    ctx->pc = 0x378b3cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378b40: 0x24c60010
    ctx->pc = 0x378b40u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
    // 0x378b44: 0x3c010057
    ctx->pc = 0x378b44u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378b48: 0xac26ba90
    ctx->pc = 0x378b48u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 6));
    // 0x378b4c: 0x3c010057
    ctx->pc = 0x378b4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378b50: 0x8c26ba90
    ctx->pc = 0x378b50u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378b54: 0xfcc90000
    ctx->pc = 0x378b54u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 9));
    // 0x378b58: 0x3c010057
    ctx->pc = 0x378b58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378b5c: 0xfcc80008
    ctx->pc = 0x378b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 8));
    // 0x378b60: 0x8c26ba90
    ctx->pc = 0x378b60u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378b64: 0x24c60010
    ctx->pc = 0x378b64u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
    // 0x378b68: 0x3c010057
    ctx->pc = 0x378b68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378b6c: 0xac26ba90
    ctx->pc = 0x378b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 6));
    // 0x378b70: 0x3c010057
    ctx->pc = 0x378b70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378b74: 0x8c26ba90
    ctx->pc = 0x378b74u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378b78: 0xfcc70000
    ctx->pc = 0x378b78u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 7));
    // 0x378b7c: 0x3c010057
    ctx->pc = 0x378b7cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378b80: 0xfcc00008
    ctx->pc = 0x378b80u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 0));
    // 0x378b84: 0x8c26ba90
    ctx->pc = 0x378b84u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378b88: 0x24c60010
    ctx->pc = 0x378b88u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
    // 0x378b8c: 0x3c010057
    ctx->pc = 0x378b8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378b90: 0xac26ba90
    ctx->pc = 0x378b90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 6));
    // 0x378b94: 0x3c010057
    ctx->pc = 0x378b94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378b98: 0x8c26ba90
    ctx->pc = 0x378b98u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378b9c: 0xfcc50000
    ctx->pc = 0x378b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x378ba0: 0x3c010057
    ctx->pc = 0x378ba0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378ba4: 0xfccc0008
    ctx->pc = 0x378ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 12));
    // 0x378ba8: 0x8c25ba90
    ctx->pc = 0x378ba8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378bac: 0x24a50010
    ctx->pc = 0x378bacu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
    // 0x378bb0: 0x3c010057
    ctx->pc = 0x378bb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378bb4: 0x4810003
    ctx->pc = 0x378BB4u;
    {
        const bool branch_taken_0x378bb4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x378BB8u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 5));
        if (branch_taken_0x378bb4) {
            ctx->pc = 0x378BC4u;
            goto label_378bc4;
        }
    }
    ctx->pc = 0x378BBCu;
    // 0x378bbc: 0x24830001
    ctx->pc = 0x378bbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 1));
    // 0x378bc0: 0x31843
    ctx->pc = 0x378bc0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_378bc4:
    // 0x378bc4: 0x24040800
    ctx->pc = 0x378bc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x378bc8: 0x3c010057
    ctx->pc = 0x378bc8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378bcc: 0x832023
    ctx->pc = 0x378bccu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x378bd0: 0x8c29ba90
    ctx->pc = 0x378bd0u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378bd4: 0x24630800
    ctx->pc = 0x378bd4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2048));
    // 0x378bd8: 0x44100
    ctx->pc = 0x378bd8u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 4), 4));
    // 0x378bdc: 0x32100
    ctx->pc = 0x378bdcu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 4));
    // 0x378be0: 0x3c058000
    ctx->pc = 0x378be0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x378be4: 0x3c037200
    ctx->pc = 0x378be4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)29184 << 16));
    // 0x378be8: 0x5303c
    ctx->pc = 0x378be8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x378bec: 0x662825
    ctx->pc = 0x378becu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x378bf0: 0x24070004
    ctx->pc = 0x378bf0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4));
    // 0x378bf4: 0x70052b89
    ctx->pc = 0x378bf4u;
    SET_GPR_VEC(ctx, 5, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
    // 0x378bf8: 0x34038e00
    ctx->pc = 0x378bf8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 36352));
    // 0x378bfc: 0x1052825
    ctx->pc = 0x378bfcu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x378c00: 0x31c38
    ctx->pc = 0x378c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x378c04: 0xfd250000
    ctx->pc = 0x378c04u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 5));
    // 0x378c08: 0x661825
    ctx->pc = 0x378c08u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x378c0c: 0xfd270008
    ctx->pc = 0x378c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 7));
    // 0x378c10: 0x3c010057
    ctx->pc = 0x378c10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378c14: 0x8c26ba90
    ctx->pc = 0x378c14u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378c18: 0x70031b89
    ctx->pc = 0x378c18u;
    SET_GPR_VEC(ctx, 3, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x378c1c: 0x832825
    ctx->pc = 0x378c1cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x378c20: 0x3c040007
    ctx->pc = 0x378c20u;
    SET_GPR_U32(ctx, 4, ((uint32_t)7 << 16));
    // 0x378c24: 0x24030047
    ctx->pc = 0x378c24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 71));
    // 0x378c28: 0x24c60010
    ctx->pc = 0x378c28u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
    // 0x378c2c: 0x3c010057
    ctx->pc = 0x378c2cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378c30: 0xac26ba90
    ctx->pc = 0x378c30u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 6));
    // 0x378c34: 0x3c010057
    ctx->pc = 0x378c34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378c38: 0x8c26ba90
    ctx->pc = 0x378c38u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378c3c: 0xfcc50000
    ctx->pc = 0x378c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x378c40: 0x3c010057
    ctx->pc = 0x378c40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378c44: 0xfcc70008
    ctx->pc = 0x378c44u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 7));
    // 0x378c48: 0x8c25ba90
    ctx->pc = 0x378c48u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378c4c: 0x24a50010
    ctx->pc = 0x378c4cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
    // 0x378c50: 0x3c010057
    ctx->pc = 0x378c50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378c54: 0xac25ba90
    ctx->pc = 0x378c54u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 5));
    // 0x378c58: 0x3c010057
    ctx->pc = 0x378c58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378c5c: 0x8c25ba90
    ctx->pc = 0x378c5cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378c60: 0xfca40000
    ctx->pc = 0x378c60u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x378c64: 0x3c010057
    ctx->pc = 0x378c64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378c68: 0xfca30008
    ctx->pc = 0x378c68u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x378c6c: 0x8c23ba90
    ctx->pc = 0x378c6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378c70: 0x24630010
    ctx->pc = 0x378c70u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
    // 0x378c74: 0x3c010057
    ctx->pc = 0x378c74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378c78: 0x3e00008
    ctx->pc = 0x378C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378C7Cu;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x378A9Cu: goto label_378a9c;
            case 0x378BC4u: goto label_378bc4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x378C80u;
}
