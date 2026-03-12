#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00374C00
// Address: 0x374c00 - 0x374c70
void sub_00374C00_0x374c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x374c00u;

    // 0x374c00: 0x27bdfff0
    ctx->pc = 0x374c00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374c04: 0x2404005e
    ctx->pc = 0x374c04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 94));
    // 0x374c08: 0xffbf0000
    ctx->pc = 0x374c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374c0c: 0xc06bde0
    ctx->pc = 0x374C0Cu;
    SET_GPR_U32(ctx, 31, 0x374C14u);
    ctx->pc = 0x374C10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 50));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374C14u; }
        if (ctx->pc != 0x374C14u) { return; }
    }
    ctx->pc = 0x374C14u;
    // 0x374c14: 0x2404000d
    ctx->pc = 0x374c14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 13));
    // 0x374c18: 0xc06bde0
    ctx->pc = 0x374C18u;
    SET_GPR_U32(ctx, 31, 0x374C20u);
    ctx->pc = 0x374C1Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374C20u; }
        if (ctx->pc != 0x374C20u) { return; }
    }
    ctx->pc = 0x374C20u;
    // 0x374c20: 0x2404005f
    ctx->pc = 0x374c20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 95));
    // 0x374c24: 0xc06bde0
    ctx->pc = 0x374C24u;
    SET_GPR_U32(ctx, 31, 0x374C2Cu);
    ctx->pc = 0x374C28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374C2Cu; }
        if (ctx->pc != 0x374C2Cu) { return; }
    }
    ctx->pc = 0x374C2Cu;
    // 0x374c2c: 0x24040060
    ctx->pc = 0x374c2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 96));
    // 0x374c30: 0xc06bde0
    ctx->pc = 0x374C30u;
    SET_GPR_U32(ctx, 31, 0x374C38u);
    ctx->pc = 0x374C34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374C38u; }
        if (ctx->pc != 0x374C38u) { return; }
    }
    ctx->pc = 0x374C38u;
    // 0x374c38: 0x24040067
    ctx->pc = 0x374c38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 103));
    // 0x374c3c: 0xc06bde0
    ctx->pc = 0x374C3Cu;
    SET_GPR_U32(ctx, 31, 0x374C44u);
    ctx->pc = 0x374C40u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374C44u; }
        if (ctx->pc != 0x374C44u) { return; }
    }
    ctx->pc = 0x374C44u;
    // 0x374c44: 0x24040063
    ctx->pc = 0x374c44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 99));
    // 0x374c48: 0xc06bde0
    ctx->pc = 0x374C48u;
    SET_GPR_U32(ctx, 31, 0x374C50u);
    ctx->pc = 0x374C4Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374C50u; }
        if (ctx->pc != 0x374C50u) { return; }
    }
    ctx->pc = 0x374C50u;
    // 0x374c50: 0x2404006c
    ctx->pc = 0x374c50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 108));
    // 0x374c54: 0xc06bde0
    ctx->pc = 0x374C54u;
    SET_GPR_U32(ctx, 31, 0x374C5Cu);
    ctx->pc = 0x374C58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374C5Cu; }
        if (ctx->pc != 0x374C5Cu) { return; }
    }
    ctx->pc = 0x374C5Cu;
    // 0x374c5c: 0xdfbf0000
    ctx->pc = 0x374c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374c60: 0x3e00008
    ctx->pc = 0x374C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374C64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x374C68u;
    // 0x374c68: 0x0
    ctx->pc = 0x374c68u;
    // NOP
    // 0x374c6c: 0x0
    ctx->pc = 0x374c6cu;
    // NOP
}
