#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00101AE8
// Address: 0x101ae8 - 0x101b80
void sub_00101AE8_0x101ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x101ae8u;

    // 0x101ae8: 0x27bdffd0
    ctx->pc = 0x101ae8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x101aec: 0x24040003
    ctx->pc = 0x101aecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x101af0: 0xffbf0020
    ctx->pc = 0x101af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x101af4: 0xc0403a2
    ctx->pc = 0x101AF4u;
    SET_GPR_U32(ctx, 31, 0x101AFCu);
    ctx->pc = 0x101AF8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->pc = 0x100E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00100E88_0x100e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101AFCu; }
    }
    if (ctx->pc != 0x101AFCu) { return; }
    ctx->pc = 0x101AFCu;
    // 0x101afc: 0x14400003
    ctx->pc = 0x101AFCu;
    {
        const bool branch_taken_0x101afc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x101B00u;
        SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
        if (branch_taken_0x101afc) {
            ctx->pc = 0x101B0Cu;
            goto label_101b0c;
        }
    }
    ctx->pc = 0x101B04u;
    // 0x101b04: 0x1000001a
    ctx->pc = 0x101B04u;
    {
        const bool branch_taken_0x101b04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x101B08u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x101b04) {
            ctx->pc = 0x101B70u;
            goto label_101b70;
        }
    }
    ctx->pc = 0x101B0Cu;
label_101b0c:
    // 0x101b0c: 0x3c040021
    ctx->pc = 0x101b0cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)33 << 16));
    // 0x101b10: 0x24508b00
    ctx->pc = 0x101b10u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294937344));
    // 0x101b14: 0x24849480
    ctx->pc = 0x101b14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939776));
    // 0x101b18: 0xafa00000
    ctx->pc = 0x101b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x101b1c: 0x24050004
    ctx->pc = 0x101b1cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x101b20: 0x302d
    ctx->pc = 0x101b20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101b24: 0x382d
    ctx->pc = 0x101b24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101b28: 0x402d
    ctx->pc = 0x101b28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101b2c: 0x200482d
    ctx->pc = 0x101b2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101b30: 0x240a0004
    ctx->pc = 0x101b30u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4));
    // 0x101b34: 0xc045e7a
    ctx->pc = 0x101B34u;
    SET_GPR_U32(ctx, 31, 0x101B3Cu);
    ctx->pc = 0x101B38u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101B3Cu; }
    }
    if (ctx->pc != 0x101B3Cu) { return; }
    ctx->pc = 0x101B3Cu;
    // 0x101b3c: 0x4410006
    ctx->pc = 0x101B3Cu;
    {
        const bool branch_taken_0x101b3c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x101B40u;
        SET_GPR_U32(ctx, 3, ((uint32_t)32 << 16));
        if (branch_taken_0x101b3c) {
            ctx->pc = 0x101B58u;
            goto label_101b58;
        }
    }
    ctx->pc = 0x101B44u;
    // 0x101b44: 0x3c020020
    ctx->pc = 0x101b44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32 << 16));
    // 0x101b48: 0xc045190
    ctx->pc = 0x101B48u;
    SET_GPR_U32(ctx, 31, 0x101B50u);
    ctx->pc = 0x101B4Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 31020)));
    ctx->pc = 0x114640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114640_0x114640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101B50u; }
    }
    if (ctx->pc != 0x101B50u) { return; }
    ctx->pc = 0x101B50u;
    // 0x101b50: 0x10000007
    ctx->pc = 0x101B50u;
    {
        const bool branch_taken_0x101b50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x101B54u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x101b50) {
            ctx->pc = 0x101B70u;
            goto label_101b70;
        }
    }
    ctx->pc = 0x101B58u;
label_101b58:
    // 0x101b58: 0x3c022000
    ctx->pc = 0x101b58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
    // 0x101b5c: 0x2021025
    ctx->pc = 0x101b5cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x101b60: 0x8c64792c
    ctx->pc = 0x101b60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 31020)));
    // 0x101b64: 0xc045190
    ctx->pc = 0x101B64u;
    SET_GPR_U32(ctx, 31, 0x101B6Cu);
    ctx->pc = 0x101B68u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x114640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114640_0x114640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101B6Cu; }
    }
    if (ctx->pc != 0x101B6Cu) { return; }
    ctx->pc = 0x101B6Cu;
    // 0x101b6c: 0x200102d
    ctx->pc = 0x101b6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_101b70:
    // 0x101b70: 0xdfbf0020
    ctx->pc = 0x101b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101b74: 0xdfb00010
    ctx->pc = 0x101b74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101b78: 0x3e00008
    ctx->pc = 0x101B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101B7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101B0Cu: goto label_101b0c;
            case 0x101B58u: goto label_101b58;
            case 0x101B70u: goto label_101b70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x101B80u;
}
