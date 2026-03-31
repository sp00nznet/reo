#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012E368
// Address: 0x12e368 - 0x12e3c0
void sub_0012E368_0x12e368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12e368u;

    // 0x12e368: 0x27bdffe0
    ctx->pc = 0x12e368u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12e36c: 0x51400
    ctx->pc = 0x12e36cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 16));
    // 0x12e370: 0xffb00010
    ctx->pc = 0x12e370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12e374: 0x80802d
    ctx->pc = 0x12e374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e378: 0x27a70002
    ctx->pc = 0x12e378u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 2));
    // 0x12e37c: 0xc0282d
    ctx->pc = 0x12e37cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e380: 0x22403
    ctx->pc = 0x12e380u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x12e384: 0xffbf0018
    ctx->pc = 0x12e384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12e388: 0xc049944
    ctx->pc = 0x12E388u;
    SET_GPR_U32(ctx, 31, 0x12E390u);
    ctx->pc = 0x12E38Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x126510u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00126510_0x126510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E390u; }
    }
    if (ctx->pc != 0x12E390u) { return; }
    ctx->pc = 0x12E390u;
    // 0x12e390: 0x87a50000
    ctx->pc = 0x12e390u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e394: 0x200202d
    ctx->pc = 0x12e394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e398: 0xc04b8d6
    ctx->pc = 0x12E398u;
    SET_GPR_U32(ctx, 31, 0x12E3A0u);
    ctx->pc = 0x12E39Cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    ctx->pc = 0x12E358u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E358_0x12e358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E3A0u; }
    }
    if (ctx->pc != 0x12E3A0u) { return; }
    ctx->pc = 0x12E3A0u;
    // 0x12e3a0: 0x8e040088
    ctx->pc = 0x12e3a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x12e3a4: 0x87a50000
    ctx->pc = 0x12e3a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e3a8: 0xc04b874
    ctx->pc = 0x12E3A8u;
    SET_GPR_U32(ctx, 31, 0x12E3B0u);
    ctx->pc = 0x12E3ACu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    ctx->pc = 0x12E1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E1D0_0x12e1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E3B0u; }
    }
    if (ctx->pc != 0x12E3B0u) { return; }
    ctx->pc = 0x12E3B0u;
    // 0x12e3b0: 0xdfb00010
    ctx->pc = 0x12e3b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e3b4: 0xdfbf0018
    ctx->pc = 0x12e3b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12e3b8: 0x3e00008
    ctx->pc = 0x12E3B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E3BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E3C0u;
}
