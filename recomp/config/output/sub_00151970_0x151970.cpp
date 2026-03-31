#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00151970
// Address: 0x151970 - 0x151b60
void sub_00151970_0x151970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x151970u;

    // 0x151970: 0x27bdffe0
    ctx->pc = 0x151970u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x151974: 0x80502d
    ctx->pc = 0x151974u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151978: 0xffb00000
    ctx->pc = 0x151978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15197c: 0x25460128
    ctx->pc = 0x15197cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 10), 296));
    // 0x151980: 0xffb10008
    ctx->pc = 0x151980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x151984: 0x2403fffc
    ctx->pc = 0x151984u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x151988: 0xffb20010
    ctx->pc = 0x151988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15198c: 0xa0902d
    ctx->pc = 0x15198cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151990: 0xffbf0018
    ctx->pc = 0x151990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x151994: 0x2438024
    ctx->pc = 0x151994u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x151998: 0x2502023
    ctx->pc = 0x151998u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x15199c: 0x8cc204ec
    ctx->pc = 0x15199cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 1260)));
    // 0x1519a0: 0x488c0
    ctx->pc = 0x1519a0u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 4), 3));
    // 0x1519a4: 0x24420001
    ctx->pc = 0x1519a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1519a8: 0xacc204ec
    ctx->pc = 0x1519a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1260), GPR_U32(ctx, 2));
    // 0x1519ac: 0x82080000
    ctx->pc = 0x1519acu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1519b0: 0x26100001
    ctx->pc = 0x1519b0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1519b4: 0x92030000
    ctx->pc = 0x1519b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1519b8: 0x26100001
    ctx->pc = 0x1519b8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1519bc: 0x92040000
    ctx->pc = 0x1519bcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1519c0: 0x26100001
    ctx->pc = 0x1519c0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1519c4: 0x92050000
    ctx->pc = 0x1519c4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1519c8: 0x26100001
    ctx->pc = 0x1519c8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1519cc: 0x82070000
    ctx->pc = 0x1519ccu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1519d0: 0x26100001
    ctx->pc = 0x1519d0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1519d4: 0x92020000
    ctx->pc = 0x1519d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1519d8: 0x26100001
    ctx->pc = 0x1519d8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1519dc: 0x84200
    ctx->pc = 0x1519dcu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x1519e0: 0x73a00
    ctx->pc = 0x1519e0u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x1519e4: 0x1034025
    ctx->pc = 0x1519e4u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1519e8: 0x92030000
    ctx->pc = 0x1519e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1519ec: 0xe23825
    ctx->pc = 0x1519ecu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1519f0: 0x84200
    ctx->pc = 0x1519f0u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x1519f4: 0x26100001
    ctx->pc = 0x1519f4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1519f8: 0x73a00
    ctx->pc = 0x1519f8u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x1519fc: 0x1044025
    ctx->pc = 0x1519fcu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x151a00: 0x92020000
    ctx->pc = 0x151a00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x151a04: 0xe33825
    ctx->pc = 0x151a04u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x151a08: 0x84200
    ctx->pc = 0x151a08u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x151a0c: 0x73a00
    ctx->pc = 0x151a0cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x151a10: 0x1054025
    ctx->pc = 0x151a10u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x151a14: 0x26100001
    ctx->pc = 0x151a14u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x151a18: 0xe23825
    ctx->pc = 0x151a18u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x151a1c: 0x12200008
    ctx->pc = 0x151A1Cu;
    {
        const bool branch_taken_0x151a1c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x151A20u;
        SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 17) & 0x1F));
        if (branch_taken_0x151a1c) {
            ctx->pc = 0x151A40u;
            goto label_151a40;
        }
    }
    ctx->pc = 0x151A24u;
    // 0x151a24: 0x24020020
    ctx->pc = 0x151a24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x151a28: 0x511023
    ctx->pc = 0x151a28u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x151a2c: 0x471006
    ctx->pc = 0x151a2cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x151a30: 0x1021025
    ctx->pc = 0x151a30u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x151a34: 0x2274004
    ctx->pc = 0x151a34u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x151a38: 0x10000003
    ctx->pc = 0x151A38u;
    {
        const bool branch_taken_0x151a38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x151A3Cu;
        WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 2));
        if (branch_taken_0x151a38) {
            ctx->pc = 0x151A48u;
            goto label_151a48;
        }
    }
    ctx->pc = 0x151A40u;
label_151a40:
    // 0x151a40: 0xacc80030
    ctx->pc = 0x151a40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 8));
    // 0x151a44: 0xe0402d
    ctx->pc = 0x151a44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_151a48:
    // 0x151a48: 0x82070000
    ctx->pc = 0x151a48u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x151a4c: 0x26100001
    ctx->pc = 0x151a4cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x151a50: 0x92020000
    ctx->pc = 0x151a50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x151a54: 0x26100001
    ctx->pc = 0x151a54u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x151a58: 0x73a00
    ctx->pc = 0x151a58u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x151a5c: 0x92030000
    ctx->pc = 0x151a5cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x151a60: 0xe23825
    ctx->pc = 0x151a60u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x151a64: 0x26100001
    ctx->pc = 0x151a64u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x151a68: 0x73a00
    ctx->pc = 0x151a68u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x151a6c: 0x92020000
    ctx->pc = 0x151a6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x151a70: 0xe33825
    ctx->pc = 0x151a70u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x151a74: 0x3c04000f
    ctx->pc = 0x151a74u;
    SET_GPR_U32(ctx, 4, ((uint32_t)15 << 16));
    // 0x151a78: 0x73a00
    ctx->pc = 0x151a78u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x151a7c: 0x26100001
    ctx->pc = 0x151a7cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x151a80: 0xe23825
    ctx->pc = 0x151a80u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x151a84: 0x302d
    ctx->pc = 0x151a84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151a88: 0x3484ffff
    ctx->pc = 0x151a88u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x151a8c: 0x24090028
    ctx->pc = 0x151a8cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 40));
    // 0x151a90: 0x10000014
    ctx->pc = 0x151A90u;
    {
        const bool branch_taken_0x151a90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x151A94u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x151a90) {
            ctx->pc = 0x151AE4u;
            goto label_151ae4;
        }
    }
    ctx->pc = 0x151A98u;
label_151a98:
    // 0x151a98: 0x2a220020
    ctx->pc = 0x151a98u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 32));
    // 0x151a9c: 0x14400011
    ctx->pc = 0x151A9Cu;
    {
        const bool branch_taken_0x151a9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x151AA0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x151a9c) {
            ctx->pc = 0x151AE4u;
            goto label_151ae4;
        }
    }
    ctx->pc = 0x151AA4u;
    // 0x151aa4: 0x2631ffe0
    ctx->pc = 0x151aa4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967264));
    // 0x151aa8: 0x2274004
    ctx->pc = 0x151aa8u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x151aac: 0x82070000
    ctx->pc = 0x151aacu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x151ab0: 0x26100001
    ctx->pc = 0x151ab0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x151ab4: 0x92020000
    ctx->pc = 0x151ab4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x151ab8: 0x26100001
    ctx->pc = 0x151ab8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x151abc: 0x73a00
    ctx->pc = 0x151abcu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x151ac0: 0x92030000
    ctx->pc = 0x151ac0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x151ac4: 0xe23825
    ctx->pc = 0x151ac4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x151ac8: 0x26100001
    ctx->pc = 0x151ac8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x151acc: 0x73a00
    ctx->pc = 0x151accu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x151ad0: 0x92020000
    ctx->pc = 0x151ad0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x151ad4: 0xe33825
    ctx->pc = 0x151ad4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x151ad8: 0x26100001
    ctx->pc = 0x151ad8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x151adc: 0x73a00
    ctx->pc = 0x151adcu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x151ae0: 0xe23825
    ctx->pc = 0x151ae0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_151ae4:
    // 0x151ae4: 0x86102a
    ctx->pc = 0x151ae4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 6)));
    // 0x151ae8: 0x5440000b
    ctx->pc = 0x151AE8u;
    {
        const bool branch_taken_0x151ae8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x151ae8) {
            ctx->pc = 0x151AECu;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x151B18u;
            goto label_151b18;
        }
    }
    ctx->pc = 0x151AF0u;
    // 0x151af0: 0x2a220009
    ctx->pc = 0x151af0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 9));
    // 0x151af4: 0x81a02
    ctx->pc = 0x151af4u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 8), 8));
    // 0x151af8: 0x14400004
    ctx->pc = 0x151AF8u;
    {
        const bool branch_taken_0x151af8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x151AFCu;
        SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
        if (branch_taken_0x151af8) {
            ctx->pc = 0x151B0Cu;
            goto label_151b0c;
        }
    }
    ctx->pc = 0x151B00u;
    // 0x151b00: 0x1311023
    ctx->pc = 0x151b00u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
    // 0x151b04: 0x471006
    ctx->pc = 0x151b04u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x151b08: 0x621825
    ctx->pc = 0x151b08u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_151b0c:
    // 0x151b0c: 0x5465ffe2
    ctx->pc = 0x151B0Cu;
    {
        const bool branch_taken_0x151b0c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 5));
        if (branch_taken_0x151b0c) {
            ctx->pc = 0x151B10u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
            ctx->pc = 0x151A98u;
            goto label_151a98;
        }
    }
    ctx->pc = 0x151B14u;
    // 0x151b14: 0x140202d
    ctx->pc = 0x151b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_151b18:
    // 0x151b18: 0x240282d
    ctx->pc = 0x151b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151b1c: 0xc0546d8
    ctx->pc = 0x151B1Cu;
    SET_GPR_U32(ctx, 31, 0x151B24u);
    ctx->pc = 0x151B20u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
    ctx->pc = 0x151B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00151B60_0x151b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151B24u; }
    }
    if (ctx->pc != 0x151B24u) { return; }
    ctx->pc = 0x151B24u;
    // 0x151b24: 0x2121823
    ctx->pc = 0x151b24u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x151b28: 0x318c0
    ctx->pc = 0x151b28u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x151b2c: 0xdfbf0018
    ctx->pc = 0x151b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x151b30: 0x2231821
    ctx->pc = 0x151b30u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x151b34: 0xdfb10008
    ctx->pc = 0x151b34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x151b38: 0x2462ffc7
    ctx->pc = 0x151b38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967239));
    // 0x151b3c: 0x2463ffce
    ctx->pc = 0x151b3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967246));
    // 0x151b40: 0x28440000
    ctx->pc = 0x151b40u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 0));
    // 0x151b44: 0xdfb00000
    ctx->pc = 0x151b44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151b48: 0x64100b
    ctx->pc = 0x151b48u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x151b4c: 0x210c3
    ctx->pc = 0x151b4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x151b50: 0x2421021
    ctx->pc = 0x151b50u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x151b54: 0xdfb20010
    ctx->pc = 0x151b54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151b58: 0x3e00008
    ctx->pc = 0x151B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151B5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x151A40u: goto label_151a40;
            case 0x151A48u: goto label_151a48;
            case 0x151A98u: goto label_151a98;
            case 0x151AE4u: goto label_151ae4;
            case 0x151B0Cu: goto label_151b0c;
            case 0x151B18u: goto label_151b18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x151B60u;
}
