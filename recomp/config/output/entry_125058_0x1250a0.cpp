#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_125058
// Address: 0x125058 - 0x1250a0
void entry_125058_0x1250a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x125058u;

    // 0x125058: 0x27bdfff0
    ctx->pc = 0x125058u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12505c: 0xffb00000
    ctx->pc = 0x12505cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x125060: 0xffbf0008
    ctx->pc = 0x125060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x125064: 0xc042c56
    ctx->pc = 0x125064u;
    SET_GPR_U32(ctx, 31, 0x12506Cu);
    ctx->pc = 0x125068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12506Cu; }
    }
    if (ctx->pc != 0x12506Cu) { return; }
    ctx->pc = 0x12506Cu;
    // 0x12506c: 0xdfbf0008
    ctx->pc = 0x12506cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x125070: 0x200202d
    ctx->pc = 0x125070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125074: 0x3c060021
    ctx->pc = 0x125074u;
    SET_GPR_U32(ctx, 6, ((uint32_t)33 << 16));
    // 0x125078: 0x3c070021
    ctx->pc = 0x125078u;
    SET_GPR_U32(ctx, 7, ((uint32_t)33 << 16));
    // 0x12507c: 0x3c080021
    ctx->pc = 0x12507cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)33 << 16));
    // 0x125080: 0xdfb00000
    ctx->pc = 0x125080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125084: 0x40282d
    ctx->pc = 0x125084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125088: 0x24c6b94c
    ctx->pc = 0x125088u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294949196));
    // 0x12508c: 0x24e7b94e
    ctx->pc = 0x12508cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294949198));
    // 0x125090: 0x2508b950
    ctx->pc = 0x125090u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294949200));
    // 0x125094: 0x8049156
    ctx->pc = 0x125094u;
    ctx->pc = 0x125098u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x124558u;
    sub_00124558_0x124558(rdram, ctx, runtime); return;
    ctx->pc = 0x12509Cu;
    // 0x12509c: 0x0
    ctx->pc = 0x12509cu;
    // NOP
}
