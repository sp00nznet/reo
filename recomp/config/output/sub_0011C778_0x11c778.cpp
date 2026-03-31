#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011C778
// Address: 0x11c778 - 0x11c798
void sub_0011C778_0x11c778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11c778u;

    // 0x11c778: 0x27bdffe0
    ctx->pc = 0x11c778u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11c77c: 0x402d
    ctx->pc = 0x11c77cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c780: 0xffbf0010
    ctx->pc = 0x11c780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11c784: 0xc047154
    ctx->pc = 0x11C784u;
    SET_GPR_U32(ctx, 31, 0x11C78Cu);
    ctx->pc = 0x11C788u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11C550u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C550_0x11c550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C78Cu; }
    }
    if (ctx->pc != 0x11C78Cu) { return; }
    ctx->pc = 0x11C78Cu;
    // 0x11c78c: 0xdfbf0010
    ctx->pc = 0x11c78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c790: 0x3e00008
    ctx->pc = 0x11C790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C794u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11C798u;
}
