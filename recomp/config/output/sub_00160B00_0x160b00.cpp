#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00160B00
// Address: 0x160b00 - 0x160b40
void sub_00160B00_0x160b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x160b00u;

    // 0x160b00: 0x27bdfff0
    ctx->pc = 0x160b00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x160b04: 0xffbf0000
    ctx->pc = 0x160b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x160b08: 0xc05f388
    ctx->pc = 0x160B08u;
    SET_GPR_U32(ctx, 31, 0x160B10u);
    ctx->pc = 0x17CE20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CE20_0x17ce20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160B10u; }
    }
    if (ctx->pc != 0x160B10u) { return; }
    ctx->pc = 0x160B10u;
    // 0x160b10: 0xdfbf0000
    ctx->pc = 0x160b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160b14: 0x3c040016
    ctx->pc = 0x160b14u;
    SET_GPR_U32(ctx, 4, ((uint32_t)22 << 16));
    // 0x160b18: 0x24840b28
    ctx->pc = 0x160b18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2856));
    // 0x160b1c: 0x282d
    ctx->pc = 0x160b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160b20: 0x805f3d2
    ctx->pc = 0x160B20u;
    ctx->pc = 0x160B24u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17CF48u;
    entry_17cf48_0x17cf60(rdram, ctx, runtime); return;
    ctx->pc = 0x160B28u;
    // 0x160b28: 0x27bdfff0
    ctx->pc = 0x160b28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x160b2c: 0xa0202d
    ctx->pc = 0x160b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160b30: 0xffbf0000
    ctx->pc = 0x160b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x160b34: 0xdfbf0000
    ctx->pc = 0x160b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160b38: 0x8058dd4
    ctx->pc = 0x160B38u;
    ctx->pc = 0x160B3Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x160B40u;
}
