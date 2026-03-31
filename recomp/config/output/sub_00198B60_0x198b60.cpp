#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00198B60
// Address: 0x198b60 - 0x198c80
void sub_00198B60_0x198b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x198b60u;

    // 0x198b60: 0x27bdfff0
    ctx->pc = 0x198b60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x198b64: 0x41402
    ctx->pc = 0x198b64u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 16));
    // 0x198b68: 0xa3a2000c
    ctx->pc = 0x198b68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x198b6c: 0x27a9000d
    ctx->pc = 0x198b6cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 13));
    // 0x198b70: 0x41202
    ctx->pc = 0x198b70u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 8));
    // 0x198b74: 0x27a8000e
    ctx->pc = 0x198b74u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 14));
    // 0x198b78: 0xa1220000
    ctx->pc = 0x198b78u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x198b7c: 0x27a6000f
    ctx->pc = 0x198b7cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 15));
    // 0x198b80: 0xa1040000
    ctx->pc = 0x198b80u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x198b84: 0x41602
    ctx->pc = 0x198b84u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 24));
    // 0x198b88: 0x14a0001a
    ctx->pc = 0x198B88u;
    {
        const bool branch_taken_0x198b88 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x198B8Cu;
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x198b88) {
            ctx->pc = 0x198BF4u;
            goto label_198bf4;
        }
    }
    ctx->pc = 0x198B90u;
    // 0x198b90: 0x502d
    ctx->pc = 0x198b90u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b94: 0x24030001
    ctx->pc = 0x198b94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x198b98: 0x24040080
    ctx->pc = 0x198b98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 128));
    // 0x198b9c: 0x240500ff
    ctx->pc = 0x198b9cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    // 0x198ba0: 0x15d1021
    ctx->pc = 0x198ba0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
label_198ba4:
    // 0x198ba4: 0x2447000c
    ctx->pc = 0x198ba4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 12));
    // 0x198ba8: 0x90e20000
    ctx->pc = 0x198ba8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x198bac: 0x14450003
    ctx->pc = 0x198BACu;
    {
        const bool branch_taken_0x198bac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x198bac) {
            ctx->pc = 0x198BBCu;
            goto label_198bbc;
        }
    }
    ctx->pc = 0x198BB4u;
    // 0x198bb4: 0x10000009
    ctx->pc = 0x198BB4u;
    {
        const bool branch_taken_0x198bb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x198BB8u;
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
        if (branch_taken_0x198bb4) {
            ctx->pc = 0x198BDCu;
            goto label_198bdc;
        }
    }
    ctx->pc = 0x198BBCu;
label_198bbc:
    // 0x198bbc: 0x10400007
    ctx->pc = 0x198BBCu;
    {
        const bool branch_taken_0x198bbc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x198bbc) {
            ctx->pc = 0x198BDCu;
            goto label_198bdc;
        }
    }
    ctx->pc = 0x198BC4u;
    // 0x198bc4: 0x21042
    ctx->pc = 0x198bc4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x198bc8: 0xa0e20000
    ctx->pc = 0x198bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x198bcc: 0x90e20000
    ctx->pc = 0x198bccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x198bd0: 0x14400002
    ctx->pc = 0x198BD0u;
    {
        const bool branch_taken_0x198bd0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x198bd0) {
            ctx->pc = 0x198BDCu;
            goto label_198bdc;
        }
    }
    ctx->pc = 0x198BD8u;
    // 0x198bd8: 0xa0e30000
    ctx->pc = 0x198bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
label_198bdc:
    // 0x198bdc: 0x254a0001
    ctx->pc = 0x198bdcu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x198be0: 0x29420004
    ctx->pc = 0x198be0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 4));
    // 0x198be4: 0x1440ffef
    ctx->pc = 0x198BE4u;
    {
        const bool branch_taken_0x198be4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x198BE8u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
        if (branch_taken_0x198be4) {
            ctx->pc = 0x198BA4u;
            goto label_198ba4;
        }
    }
    ctx->pc = 0x198BECu;
    // 0x198bec: 0x10000010
    ctx->pc = 0x198BECu;
    {
        const bool branch_taken_0x198bec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x198BF0u;
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        if (branch_taken_0x198bec) {
            ctx->pc = 0x198C30u;
            goto label_198c30;
        }
    }
    ctx->pc = 0x198BF4u;
label_198bf4:
    // 0x198bf4: 0x90c30000
    ctx->pc = 0x198bf4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x198bf8: 0x240200ff
    ctx->pc = 0x198bf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x198bfc: 0x14620003
    ctx->pc = 0x198BFCu;
    {
        const bool branch_taken_0x198bfc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x198C00u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
        if (branch_taken_0x198bfc) {
            ctx->pc = 0x198C0Cu;
            goto label_198c0c;
        }
    }
    ctx->pc = 0x198C04u;
    // 0x198c04: 0x10000009
    ctx->pc = 0x198C04u;
    {
        const bool branch_taken_0x198c04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x198C08u;
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x198c04) {
            ctx->pc = 0x198C2Cu;
            goto label_198c2c;
        }
    }
    ctx->pc = 0x198C0Cu;
label_198c0c:
    // 0x198c0c: 0x10600007
    ctx->pc = 0x198C0Cu;
    {
        const bool branch_taken_0x198c0c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x198C10u;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x198c0c) {
            ctx->pc = 0x198C2Cu;
            goto label_198c2c;
        }
    }
    ctx->pc = 0x198C14u;
    // 0x198c14: 0xa0c20000
    ctx->pc = 0x198c14u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x198c18: 0x90c20000
    ctx->pc = 0x198c18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x198c1c: 0x14400003
    ctx->pc = 0x198C1Cu;
    {
        const bool branch_taken_0x198c1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x198c1c) {
            ctx->pc = 0x198C2Cu;
            goto label_198c2c;
        }
    }
    ctx->pc = 0x198C24u;
    // 0x198c24: 0x24020001
    ctx->pc = 0x198c24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x198c28: 0xa0c20000
    ctx->pc = 0x198c28u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_198c2c:
    // 0x198c2c: 0x90c50000
    ctx->pc = 0x198c2cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_198c30:
    // 0x198c30: 0x93a4000c
    ctx->pc = 0x198c30u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x198c34: 0x91230000
    ctx->pc = 0x198c34u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x198c38: 0x91020000
    ctx->pc = 0x198c38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x198c3c: 0x52e00
    ctx->pc = 0x198c3cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x198c40: 0x42400
    ctx->pc = 0x198c40u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x198c44: 0x31a00
    ctx->pc = 0x198c44u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x198c48: 0xa42025
    ctx->pc = 0x198c48u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x198c4c: 0x641825
    ctx->pc = 0x198c4cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x198c50: 0x431025
    ctx->pc = 0x198c50u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x198c54: 0x3e00008
    ctx->pc = 0x198C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198C58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198BA4u: goto label_198ba4;
            case 0x198BBCu: goto label_198bbc;
            case 0x198BDCu: goto label_198bdc;
            case 0x198BF4u: goto label_198bf4;
            case 0x198C0Cu: goto label_198c0c;
            case 0x198C2Cu: goto label_198c2c;
            case 0x198C30u: goto label_198c30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198C5Cu;
    // 0x198c5c: 0x0
    ctx->pc = 0x198c5cu;
    // NOP
    // 0x198c60: 0x3c01002a
    ctx->pc = 0x198c60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x198c64: 0x2403fffe
    ctx->pc = 0x198c64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x198c68: 0xac24fd6c
    ctx->pc = 0x198c68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966636), GPR_U32(ctx, 4));
    // 0x198c6c: 0xa31824
    ctx->pc = 0x198c6cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x198c70: 0x3c01002a
    ctx->pc = 0x198c70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x198c74: 0x3e00008
    ctx->pc = 0x198C74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198C78u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966640), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198BA4u: goto label_198ba4;
            case 0x198BBCu: goto label_198bbc;
            case 0x198BDCu: goto label_198bdc;
            case 0x198BF4u: goto label_198bf4;
            case 0x198C0Cu: goto label_198c0c;
            case 0x198C2Cu: goto label_198c2c;
            case 0x198C30u: goto label_198c30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198C7Cu;
    // 0x198c7c: 0x0
    ctx->pc = 0x198c7cu;
    // NOP
}
