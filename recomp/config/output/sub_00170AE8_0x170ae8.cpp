#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00170AE8
// Address: 0x170ae8 - 0x170b60
void sub_00170AE8_0x170ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x170ae8u;

    // 0x170ae8: 0x3c020fff
    ctx->pc = 0x170ae8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x170aec: 0x27bdffd0
    ctx->pc = 0x170aecu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x170af0: 0x3442ffff
    ctx->pc = 0x170af0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x170af4: 0x3c032000
    ctx->pc = 0x170af4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)8192 << 16));
    // 0x170af8: 0xc23024
    ctx->pc = 0x170af8u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x170afc: 0x24020001
    ctx->pc = 0x170afcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x170b00: 0xffb00020
    ctx->pc = 0x170b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x170b04: 0x80802d
    ctx->pc = 0x170b04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170b08: 0xc33025
    ctx->pc = 0x170b08u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x170b0c: 0x752c0
    ctx->pc = 0x170b0cu;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 7), 11));
    // 0x170b10: 0xffbf0028
    ctx->pc = 0x170b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x170b14: 0x3a0202d
    ctx->pc = 0x170b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170b18: 0xae090054
    ctx->pc = 0x170b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 9));
    // 0x170b1c: 0xae0a0018
    ctx->pc = 0x170b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 10));
    // 0x170b20: 0xae070008
    ctx->pc = 0x170b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x170b24: 0xae050000
    ctx->pc = 0x170b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x170b28: 0xae080050
    ctx->pc = 0x170b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 8));
    // 0x170b2c: 0xae060004
    ctx->pc = 0x170b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x170b30: 0xafa20004
    ctx->pc = 0x170b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x170b34: 0xc045188
    ctx->pc = 0x170B34u;
    SET_GPR_U32(ctx, 31, 0x170B3Cu);
    ctx->pc = 0x170B38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x114620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114620_0x114620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170B3Cu; }
    }
    if (ctx->pc != 0x170B3Cu) { return; }
    ctx->pc = 0x170B3Cu;
    // 0x170b3c: 0xae020040
    ctx->pc = 0x170b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x170b40: 0xc05c2d8
    ctx->pc = 0x170B40u;
    SET_GPR_U32(ctx, 31, 0x170B48u);
    ctx->pc = 0x170B44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x170B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00170B60_0x170b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170B48u; }
    }
    if (ctx->pc != 0x170B48u) { return; }
    ctx->pc = 0x170B48u;
    // 0x170b48: 0xfe000048
    ctx->pc = 0x170b48u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 0));
    // 0x170b4c: 0xdfbf0028
    ctx->pc = 0x170b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x170b50: 0x24020001
    ctx->pc = 0x170b50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x170b54: 0xdfb00020
    ctx->pc = 0x170b54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170b58: 0x3e00008
    ctx->pc = 0x170B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170B5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170B60u;
}
