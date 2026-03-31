#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00165EF0
// Address: 0x165ef0 - 0x165f40
void sub_00165EF0_0x165ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x165ef0u;

    // 0x165ef0: 0x27bdfff0
    ctx->pc = 0x165ef0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x165ef4: 0xa0102d
    ctx->pc = 0x165ef4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165ef8: 0xffbf0000
    ctx->pc = 0x165ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165efc: 0x40302d
    ctx->pc = 0x165efcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165f00: 0x24850f60
    ctx->pc = 0x165f00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 3936));
    // 0x165f04: 0x8c831b74
    ctx->pc = 0x165f04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7028)));
    // 0x165f08: 0xac62002c
    ctx->pc = 0x165f08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x165f0c: 0x14400005
    ctx->pc = 0x165F0Cu;
    {
        const bool branch_taken_0x165f0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x165F10u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x165f0c) {
            ctx->pc = 0x165F24u;
            goto label_165f24;
        }
    }
    ctx->pc = 0x165F14u;
    // 0x165f14: 0x8c830050
    ctx->pc = 0x165f14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x165f18: 0x24020001
    ctx->pc = 0x165f18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x165f1c: 0x10620006
    ctx->pc = 0x165F1Cu;
    {
        const bool branch_taken_0x165f1c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x165F20u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x165f1c) {
            ctx->pc = 0x165F38u;
            goto label_165f38;
        }
    }
    ctx->pc = 0x165F24u;
label_165f24:
    // 0x165f24: 0xdfbf0000
    ctx->pc = 0x165f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165f28: 0xe0202d
    ctx->pc = 0x165f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165f2c: 0x80597e2
    ctx->pc = 0x165F2Cu;
    ctx->pc = 0x165F30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x165F88u;
    entry_165f88_0x165fc8(rdram, ctx, runtime); return;
    ctx->pc = 0x165F34u;
    // 0x165f34: 0x0
    ctx->pc = 0x165f34u;
    // NOP
label_165f38:
    // 0x165f38: 0x3e00008
    ctx->pc = 0x165F38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165F3Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x165F24u: goto label_165f24;
            case 0x165F38u: goto label_165f38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x165F40u;
}
