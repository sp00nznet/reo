#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00189B08
// Address: 0x189b08 - 0x189be0
void sub_00189B08_0x189b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x189b08u;

label_189b08:
    // 0x189b08: 0x24c6ffff
    ctx->pc = 0x189b08u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x189b0c: 0x78820000
    ctx->pc = 0x189b0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x189b10: 0x24840010
    ctx->pc = 0x189b10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16));
    // 0x189b14: 0x7ca20000
    ctx->pc = 0x189b14u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x189b18: 0x14c0fffb
    ctx->pc = 0x189B18u;
    {
        const bool branch_taken_0x189b18 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x189B1Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
        if (branch_taken_0x189b18) {
            ctx->pc = 0x189B08u;
            goto label_189b08;
        }
    }
    ctx->pc = 0x189B20u;
    // 0x189b20: 0x3e00008
    ctx->pc = 0x189B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189B08u: goto label_189b08;
            case 0x189B28u: goto label_189b28;
            case 0x189B80u: goto label_189b80;
            case 0x189BB8u: goto label_189bb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x189B28u;
label_189b28:
    // 0x189b28: 0x8c820000
    ctx->pc = 0x189b28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x189b2c: 0x8c830004
    ctx->pc = 0x189b2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x189b30: 0x8c880008
    ctx->pc = 0x189b30u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x189b34: 0x8c89000c
    ctx->pc = 0x189b34u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x189b38: 0x8c8a0010
    ctx->pc = 0x189b38u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x189b3c: 0x8c8b0014
    ctx->pc = 0x189b3cu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x189b40: 0x8c8c0018
    ctx->pc = 0x189b40u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x189b44: 0x8c8d001c
    ctx->pc = 0x189b44u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x189b48: 0xaca20000
    ctx->pc = 0x189b48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x189b4c: 0xaca30004
    ctx->pc = 0x189b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x189b50: 0xaca80008
    ctx->pc = 0x189b50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
    // 0x189b54: 0xaca9000c
    ctx->pc = 0x189b54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 9));
    // 0x189b58: 0xacaa0010
    ctx->pc = 0x189b58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 10));
    // 0x189b5c: 0xacab0014
    ctx->pc = 0x189b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 11));
    // 0x189b60: 0xacac0018
    ctx->pc = 0x189b60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 12));
    // 0x189b64: 0xacad001c
    ctx->pc = 0x189b64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 13));
    // 0x189b68: 0x24c6ffff
    ctx->pc = 0x189b68u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x189b6c: 0x24840020
    ctx->pc = 0x189b6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x189b70: 0x14c0ffed
    ctx->pc = 0x189B70u;
    {
        const bool branch_taken_0x189b70 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x189B74u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
        if (branch_taken_0x189b70) {
            ctx->pc = 0x189B28u;
            goto label_189b28;
        }
    }
    ctx->pc = 0x189B78u;
    // 0x189b78: 0x3e00008
    ctx->pc = 0x189B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189B08u: goto label_189b08;
            case 0x189B28u: goto label_189b28;
            case 0x189B80u: goto label_189b80;
            case 0x189BB8u: goto label_189bb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x189B80u;
label_189b80:
    // 0x189b80: 0xdc820000
    ctx->pc = 0x189b80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x189b84: 0xdc830008
    ctx->pc = 0x189b84u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x189b88: 0xdc880010
    ctx->pc = 0x189b88u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x189b8c: 0xdc890018
    ctx->pc = 0x189b8cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x189b90: 0xfca20000
    ctx->pc = 0x189b90u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x189b94: 0xfca30008
    ctx->pc = 0x189b94u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x189b98: 0xfca80010
    ctx->pc = 0x189b98u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 8));
    // 0x189b9c: 0xfca90018
    ctx->pc = 0x189b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 9));
    // 0x189ba0: 0x24c6ffff
    ctx->pc = 0x189ba0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x189ba4: 0x24840020
    ctx->pc = 0x189ba4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x189ba8: 0x14c0fff5
    ctx->pc = 0x189BA8u;
    {
        const bool branch_taken_0x189ba8 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x189BACu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
        if (branch_taken_0x189ba8) {
            ctx->pc = 0x189B80u;
            goto label_189b80;
        }
    }
    ctx->pc = 0x189BB0u;
    // 0x189bb0: 0x3e00008
    ctx->pc = 0x189BB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189B08u: goto label_189b08;
            case 0x189B28u: goto label_189b28;
            case 0x189B80u: goto label_189b80;
            case 0x189BB8u: goto label_189bb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x189BB8u;
label_189bb8:
    // 0x189bb8: 0x78820000
    ctx->pc = 0x189bb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x189bbc: 0x78830010
    ctx->pc = 0x189bbcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x189bc0: 0x7ca20000
    ctx->pc = 0x189bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x189bc4: 0x7ca30010
    ctx->pc = 0x189bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x189bc8: 0x24c6ffff
    ctx->pc = 0x189bc8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x189bcc: 0x24840020
    ctx->pc = 0x189bccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x189bd0: 0x14c0fff9
    ctx->pc = 0x189BD0u;
    {
        const bool branch_taken_0x189bd0 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x189BD4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
        if (branch_taken_0x189bd0) {
            ctx->pc = 0x189BB8u;
            goto label_189bb8;
        }
    }
    ctx->pc = 0x189BD8u;
    // 0x189bd8: 0x3e00008
    ctx->pc = 0x189BD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189B08u: goto label_189b08;
            case 0x189B28u: goto label_189b28;
            case 0x189B80u: goto label_189b80;
            case 0x189BB8u: goto label_189bb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x189BE0u;
}
