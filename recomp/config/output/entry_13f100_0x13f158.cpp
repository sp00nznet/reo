#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_13f100
// Address: 0x13f100 - 0x13f158
void entry_13f100_0x13f158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13f100u;

    // 0x13f100: 0x3e00008
    ctx->pc = 0x13F100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F104u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13F108u;
    // 0x13f108: 0x3c040024
    ctx->pc = 0x13f108u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13f10c: 0x27bdfff0
    ctx->pc = 0x13f10cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13f110: 0xffbf0000
    ctx->pc = 0x13f110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13f114: 0xc045a12
    ctx->pc = 0x13F114u;
    SET_GPR_U32(ctx, 31, 0x13F11Cu);
    ctx->pc = 0x13F118u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957368));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F11Cu; }
    }
    if (ctx->pc != 0x13F11Cu) { return; }
    ctx->pc = 0x13F11Cu;
    // 0x13f11c: 0x102d
    ctx->pc = 0x13f11cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f120: 0xdfbf0000
    ctx->pc = 0x13f120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f124: 0x3e00008
    ctx->pc = 0x13F124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F128u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13F12Cu;
    // 0x13f12c: 0x0
    ctx->pc = 0x13f12cu;
    // NOP
    // 0x13f130: 0x27bdfff0
    ctx->pc = 0x13f130u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13f134: 0x3c040024
    ctx->pc = 0x13f134u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13f138: 0xffbf0000
    ctx->pc = 0x13f138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13f13c: 0x2484d960
    ctx->pc = 0x13f13cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957408));
    // 0x13f140: 0xdfbf0000
    ctx->pc = 0x13f140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f144: 0x8045a12
    ctx->pc = 0x13F144u;
    ctx->pc = 0x13F148u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x116848u;
    sub_00116848_0x116848(rdram, ctx, runtime); return;
    ctx->pc = 0x13F14Cu;
    // 0x13f14c: 0x0
    ctx->pc = 0x13f14cu;
    // NOP
    // 0x13f150: 0x3e00008
    ctx->pc = 0x13F150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13F158u;
}
