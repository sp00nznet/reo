#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016D2B0
// Address: 0x16d2b0 - 0x16d300
void sub_0016D2B0_0x16d2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16d2b0u;

    // 0x16d2b0: 0x27bdffe0
    ctx->pc = 0x16d2b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16d2b4: 0xffb00000
    ctx->pc = 0x16d2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16d2b8: 0x80802d
    ctx->pc = 0x16d2b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d2bc: 0xffb10008
    ctx->pc = 0x16d2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16d2c0: 0xffbf0010
    ctx->pc = 0x16d2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16d2c4: 0xc05b4c0
    ctx->pc = 0x16D2C4u;
    SET_GPR_U32(ctx, 31, 0x16D2CCu);
    ctx->pc = 0x16D2C8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16D300u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D300_0x16d300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D2CCu; }
    }
    if (ctx->pc != 0x16D2CCu) { return; }
    ctx->pc = 0x16D2CCu;
    // 0x16d2cc: 0x2403ffff
    ctx->pc = 0x16d2ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16d2d0: 0x200202d
    ctx->pc = 0x16d2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d2d4: 0x10430004
    ctx->pc = 0x16D2D4u;
    {
        const bool branch_taken_0x16d2d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x16D2D8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16d2d4) {
            ctx->pc = 0x16D2E8u;
            goto label_16d2e8;
        }
    }
    ctx->pc = 0x16D2DCu;
    // 0x16d2dc: 0xc05b542
    ctx->pc = 0x16D2DCu;
    SET_GPR_U32(ctx, 31, 0x16D2E4u);
    ctx->pc = 0x16D508u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D508_0x16d508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D2E4u; }
    }
    if (ctx->pc != 0x16D2E4u) { return; }
    ctx->pc = 0x16D2E4u;
    // 0x16d2e4: 0x102d
    ctx->pc = 0x16d2e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d2e8:
    // 0x16d2e8: 0xdfb00000
    ctx->pc = 0x16d2e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d2ec: 0xdfb10008
    ctx->pc = 0x16d2ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16d2f0: 0xdfbf0010
    ctx->pc = 0x16d2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d2f4: 0x3e00008
    ctx->pc = 0x16D2F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D2F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D2E8u: goto label_16d2e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D2FCu;
    // 0x16d2fc: 0x0
    ctx->pc = 0x16d2fcu;
    // NOP
}
