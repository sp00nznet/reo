#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00163608
// Address: 0x163608 - 0x163638
void sub_00163608_0x163608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x163608u;

    // 0x163608: 0x80102d
    ctx->pc = 0x163608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16360c: 0x24040005
    ctx->pc = 0x16360cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    // 0x163610: 0x27bdfff0
    ctx->pc = 0x163610u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x163614: 0xa0302d
    ctx->pc = 0x163614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163618: 0xffbf0000
    ctx->pc = 0x163618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16361c: 0xc0506c4
    ctx->pc = 0x16361Cu;
    SET_GPR_U32(ctx, 31, 0x163624u);
    ctx->pc = 0x163620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x141B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00141B10_0x141b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163624u; }
    }
    if (ctx->pc != 0x163624u) { return; }
    ctx->pc = 0x163624u;
    // 0x163624: 0x3c030027
    ctx->pc = 0x163624u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x163628: 0xdfbf0000
    ctx->pc = 0x163628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16362c: 0xac62074c
    ctx->pc = 0x16362cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1868), GPR_U32(ctx, 2));
    // 0x163630: 0x3e00008
    ctx->pc = 0x163630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163634u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x163638u;
}
