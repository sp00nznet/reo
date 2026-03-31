#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00130698
// Address: 0x130698 - 0x1306e0
void sub_00130698_0x130698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x130698u;

    // 0x130698: 0x27bdffe0
    ctx->pc = 0x130698u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13069c: 0xffb00000
    ctx->pc = 0x13069cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1306a0: 0x80802d
    ctx->pc = 0x1306a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1306a4: 0xffb10008
    ctx->pc = 0x1306a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1306a8: 0xffbf0010
    ctx->pc = 0x1306a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1306ac: 0xc049938
    ctx->pc = 0x1306ACu;
    SET_GPR_U32(ctx, 31, 0x1306B4u);
    ctx->pc = 0x1306B0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1264E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001264E0_0x1264e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1306B4u; }
    }
    if (ctx->pc != 0x1306B4u) { return; }
    ctx->pc = 0x1306B4u;
    // 0x1306b4: 0xc04c188
    ctx->pc = 0x1306B4u;
    SET_GPR_U32(ctx, 31, 0x1306BCu);
    ctx->pc = 0x1306B8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130620_0x130620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1306BCu; }
    }
    if (ctx->pc != 0x1306BCu) { return; }
    ctx->pc = 0x1306BCu;
    // 0x1306bc: 0xc04993e
    ctx->pc = 0x1306BCu;
    SET_GPR_U32(ctx, 31, 0x1306C4u);
    ctx->pc = 0x1306C0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 17));
    ctx->pc = 0x1264F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001264F8_0x1264f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1306C4u; }
    }
    if (ctx->pc != 0x1306C4u) { return; }
    ctx->pc = 0x1306C4u;
    // 0x1306c4: 0x24020001
    ctx->pc = 0x1306c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1306c8: 0xdfb00000
    ctx->pc = 0x1306c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1306cc: 0xdfb10008
    ctx->pc = 0x1306ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1306d0: 0xdfbf0010
    ctx->pc = 0x1306d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1306d4: 0x3e00008
    ctx->pc = 0x1306D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1306D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1306DCu;
    // 0x1306dc: 0x0
    ctx->pc = 0x1306dcu;
    // NOP
}
