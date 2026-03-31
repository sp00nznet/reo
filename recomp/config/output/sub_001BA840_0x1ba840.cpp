#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BA840
// Address: 0x1ba840 - 0x1ba890
void sub_001BA840_0x1ba840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ba840u;

    // 0x1ba840: 0x27bdffe0
    ctx->pc = 0x1ba840u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ba844: 0xffbf0000
    ctx->pc = 0x1ba844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ba848: 0x27a5001c
    ctx->pc = 0x1ba848u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 28));
    // 0x1ba84c: 0xa3a0001c
    ctx->pc = 0x1ba84cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ba850: 0xc06ea28
    ctx->pc = 0x1BA850u;
    SET_GPR_U32(ctx, 31, 0x1BA858u);
    ctx->pc = 0x1BA854u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 29), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1BA8A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA8A0_0x1ba8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA858u; }
    }
    if (ctx->pc != 0x1BA858u) { return; }
    ctx->pc = 0x1BA858u;
    // 0x1ba858: 0x3c010031
    ctx->pc = 0x1ba858u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1ba85c: 0xa420657c
    ctx->pc = 0x1ba85cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 25980), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ba860: 0x3c010031
    ctx->pc = 0x1ba860u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1ba864: 0xa420657e
    ctx->pc = 0x1ba864u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 25982), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ba868: 0x3c010031
    ctx->pc = 0x1ba868u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1ba86c: 0xac206580
    ctx->pc = 0x1ba86cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 25984), GPR_U32(ctx, 0));
    // 0x1ba870: 0x3c010031
    ctx->pc = 0x1ba870u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1ba874: 0xa0206571
    ctx->pc = 0x1ba874u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 25969), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ba878: 0xdfbf0000
    ctx->pc = 0x1ba878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba87c: 0x3e00008
    ctx->pc = 0x1BA87Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA880u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA884u;
    // 0x1ba884: 0x0
    ctx->pc = 0x1ba884u;
    // NOP
    // 0x1ba888: 0x0
    ctx->pc = 0x1ba888u;
    // NOP
    // 0x1ba88c: 0x0
    ctx->pc = 0x1ba88cu;
    // NOP
}
