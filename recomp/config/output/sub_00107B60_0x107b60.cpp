#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00107B60
// Address: 0x107b60 - 0x107c68
void sub_00107B60_0x107b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x107b60u;

    // 0x107b60: 0x80402d
    ctx->pc = 0x107b60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107b64: 0xa8102b
    ctx->pc = 0x107b64u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x107b68: 0x10400013
    ctx->pc = 0x107B68u;
    {
        const bool branch_taken_0x107b68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x107B6Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x107b68) {
            ctx->pc = 0x107BB8u;
            goto label_107bb8;
        }
    }
    ctx->pc = 0x107B70u;
    // 0x107b70: 0xa63821
    ctx->pc = 0x107b70u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x107b74: 0x107102b
    ctx->pc = 0x107b74u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x107b78: 0x1040000f
    ctx->pc = 0x107B78u;
    {
        const bool branch_taken_0x107b78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x107B7Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x107b78) {
            ctx->pc = 0x107BB8u;
            goto label_107bb8;
        }
    }
    ctx->pc = 0x107B80u;
    // 0x107b80: 0x1061821
    ctx->pc = 0x107b80u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x107b84: 0x24c6ffff
    ctx->pc = 0x107b84u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x107b88: 0x10c20034
    ctx->pc = 0x107B88u;
    {
        const bool branch_taken_0x107b88 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x107B8Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x107b88) {
            ctx->pc = 0x107C5Cu;
            goto label_107c5c;
        }
    }
    ctx->pc = 0x107B90u;
    // 0x107b90: 0x40202d
    ctx->pc = 0x107b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107b94:
    // 0x107b94: 0x24a5ffff
    ctx->pc = 0x107b94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x107b98: 0x2463ffff
    ctx->pc = 0x107b98u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x107b9c: 0x90a20000
    ctx->pc = 0x107b9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x107ba0: 0x24c6ffff
    ctx->pc = 0x107ba0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x107ba4: 0xa0620000
    ctx->pc = 0x107ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x107ba8: 0x14c4fffa
    ctx->pc = 0x107BA8u;
    {
        const bool branch_taken_0x107ba8 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 4));
        if (branch_taken_0x107ba8) {
            ctx->pc = 0x107B94u;
            goto label_107b94;
        }
    }
    ctx->pc = 0x107BB0u;
    // 0x107bb0: 0x3e00008
    ctx->pc = 0x107BB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107BB4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x107B94u: goto label_107b94;
            case 0x107BB8u: goto label_107bb8;
            case 0x107BD8u: goto label_107bd8;
            case 0x107C10u: goto label_107c10;
            case 0x107C30u: goto label_107c30;
            case 0x107C34u: goto label_107c34;
            case 0x107C40u: goto label_107c40;
            case 0x107C5Cu: goto label_107c5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x107BB8u;
label_107bb8:
    // 0x107bb8: 0x2cc20020
    ctx->pc = 0x107bb8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 32));
    // 0x107bbc: 0x5440001d
    ctx->pc = 0x107BBCu;
    {
        const bool branch_taken_0x107bbc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x107bbc) {
            ctx->pc = 0x107BC0u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->pc = 0x107C34u;
            goto label_107c34;
        }
    }
    ctx->pc = 0x107BC4u;
    // 0x107bc4: 0xa31025
    ctx->pc = 0x107bc4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x107bc8: 0x3042000f
    ctx->pc = 0x107bc8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x107bcc: 0x54400019
    ctx->pc = 0x107BCCu;
    {
        const bool branch_taken_0x107bcc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x107bcc) {
            ctx->pc = 0x107BD0u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->pc = 0x107C34u;
            goto label_107c34;
        }
    }
    ctx->pc = 0x107BD4u;
    // 0x107bd4: 0x60382d
    ctx->pc = 0x107bd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_107bd8:
    // 0x107bd8: 0x78a30000
    ctx->pc = 0x107bd8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x107bdc: 0x24c6ffe0
    ctx->pc = 0x107bdcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x107be0: 0x24a50010
    ctx->pc = 0x107be0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
    // 0x107be4: 0x2cc40020
    ctx->pc = 0x107be4u;
    SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 6), 32));
    // 0x107be8: 0x7ce30000
    ctx->pc = 0x107be8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x107bec: 0x24e70010
    ctx->pc = 0x107becu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 16));
    // 0x107bf0: 0x78a20000
    ctx->pc = 0x107bf0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x107bf4: 0x24a50010
    ctx->pc = 0x107bf4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
    // 0x107bf8: 0x7ce20000
    ctx->pc = 0x107bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x107bfc: 0x1080fff6
    ctx->pc = 0x107BFCu;
    {
        const bool branch_taken_0x107bfc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x107C00u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 16));
        if (branch_taken_0x107bfc) {
            ctx->pc = 0x107BD8u;
            goto label_107bd8;
        }
    }
    ctx->pc = 0x107C04u;
    // 0x107c04: 0x2cc20008
    ctx->pc = 0x107c04u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 8));
    // 0x107c08: 0x14400009
    ctx->pc = 0x107C08u;
    {
        const bool branch_taken_0x107c08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x107C0Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x107c08) {
            ctx->pc = 0x107C30u;
            goto label_107c30;
        }
    }
    ctx->pc = 0x107C10u;
label_107c10:
    // 0x107c10: 0xdca30000
    ctx->pc = 0x107c10u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x107c14: 0x24c6fff8
    ctx->pc = 0x107c14u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x107c18: 0x24a50008
    ctx->pc = 0x107c18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
    // 0x107c1c: 0x2cc20008
    ctx->pc = 0x107c1cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 8));
    // 0x107c20: 0xfce30000
    ctx->pc = 0x107c20u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x107c24: 0x1040fffa
    ctx->pc = 0x107C24u;
    {
        const bool branch_taken_0x107c24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x107C28u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 8));
        if (branch_taken_0x107c24) {
            ctx->pc = 0x107C10u;
            goto label_107c10;
        }
    }
    ctx->pc = 0x107C2Cu;
    // 0x107c2c: 0xe0182d
    ctx->pc = 0x107c2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_107c30:
    // 0x107c30: 0x24c6ffff
    ctx->pc = 0x107c30u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
label_107c34:
    // 0x107c34: 0x2402ffff
    ctx->pc = 0x107c34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x107c38: 0x10c20008
    ctx->pc = 0x107C38u;
    {
        const bool branch_taken_0x107c38 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x107C3Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x107c38) {
            ctx->pc = 0x107C5Cu;
            goto label_107c5c;
        }
    }
    ctx->pc = 0x107C40u;
label_107c40:
    // 0x107c40: 0x90a20000
    ctx->pc = 0x107c40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x107c44: 0x24c6ffff
    ctx->pc = 0x107c44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x107c48: 0x24a50001
    ctx->pc = 0x107c48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x107c4c: 0xa0620000
    ctx->pc = 0x107c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x107c50: 0x24630001
    ctx->pc = 0x107c50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x107c54: 0x14c4fffa
    ctx->pc = 0x107C54u;
    {
        const bool branch_taken_0x107c54 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 4));
        if (branch_taken_0x107c54) {
            ctx->pc = 0x107C40u;
            goto label_107c40;
        }
    }
    ctx->pc = 0x107C5Cu;
label_107c5c:
    // 0x107c5c: 0x3e00008
    ctx->pc = 0x107C5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107C60u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x107B94u: goto label_107b94;
            case 0x107BB8u: goto label_107bb8;
            case 0x107BD8u: goto label_107bd8;
            case 0x107C10u: goto label_107c10;
            case 0x107C30u: goto label_107c30;
            case 0x107C34u: goto label_107c34;
            case 0x107C40u: goto label_107c40;
            case 0x107C5Cu: goto label_107c5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x107C64u;
    // 0x107c64: 0x0
    ctx->pc = 0x107c64u;
    // NOP
}
