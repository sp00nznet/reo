#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BC880
// Address: 0x1bc880 - 0x1bc8b0
void sub_001BC880_0x1bc880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1bc880u;

    // 0x1bc880: 0x27bdfff0
    ctx->pc = 0x1bc880u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bc884: 0xffbf0000
    ctx->pc = 0x1bc884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bc888: 0xc06a5f0
    ctx->pc = 0x1BC888u;
    SET_GPR_U32(ctx, 31, 0x1BC890u);
    ctx->pc = 0x1BC88Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1A97C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A97C0_0x1a97c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC890u; }
    }
    if (ctx->pc != 0x1BC890u) { return; }
    ctx->pc = 0x1BC890u;
    // 0x1bc890: 0xc07dce0
    ctx->pc = 0x1BC890u;
    SET_GPR_U32(ctx, 31, 0x1BC898u);
    ctx->pc = 0x1F7380u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F7380_0x1f7380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC898u; }
    }
    if (ctx->pc != 0x1BC898u) { return; }
    ctx->pc = 0x1BC898u;
    // 0x1bc898: 0xdfbf0000
    ctx->pc = 0x1bc898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc89c: 0x3e00008
    ctx->pc = 0x1BC89Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC8A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BC8A4u;
    // 0x1bc8a4: 0x0
    ctx->pc = 0x1bc8a4u;
    // NOP
    // 0x1bc8a8: 0x0
    ctx->pc = 0x1bc8a8u;
    // NOP
    // 0x1bc8ac: 0x0
    ctx->pc = 0x1bc8acu;
    // NOP
}
