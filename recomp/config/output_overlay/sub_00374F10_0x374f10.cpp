#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00374F10
// Address: 0x374f10 - 0x374f70
void sub_00374F10_0x374f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x374f10u;

    // 0x374f10: 0x27bdffa0
    ctx->pc = 0x374f10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x374f14: 0xffbf0000
    ctx->pc = 0x374f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374f18: 0x27a7005c
    ctx->pc = 0x374f18u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 92));
    // 0x374f1c: 0xc0dd330
    ctx->pc = 0x374F1Cu;
    SET_GPR_U32(ctx, 31, 0x374F24u);
    ctx->pc = 0x374F20u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 88));
    ctx->pc = 0x374CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00374CC0_0x374cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374F24u; }
    }
    if (ctx->pc != 0x374F24u) { return; }
    ctx->pc = 0x374F24u;
    // 0x374f24: 0xc7ac005c
    ctx->pc = 0x374f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x374f28: 0xc7ad0058
    ctx->pc = 0x374f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x374f2c: 0x44807000
    ctx->pc = 0x374f2cu;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 0);
    // 0x374f30: 0xc063fc4
    ctx->pc = 0x374F30u;
    SET_GPR_U32(ctx, 31, 0x374F38u);
    ctx->pc = 0x374F34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x18FF10u;
    {
        auto targetFn = runtime->lookupFunction(0x18FF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374F38u; }
        if (ctx->pc != 0x374F38u) { return; }
    }
    ctx->pc = 0x374F38u;
    // 0x374f38: 0x44806000
    ctx->pc = 0x374f38u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x374f3c: 0x27a40010
    ctx->pc = 0x374f3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x374f40: 0x46006346
    ctx->pc = 0x374f40u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x374f44: 0xc0640b4
    ctx->pc = 0x374F44u;
    SET_GPR_U32(ctx, 31, 0x374F4Cu);
    ctx->pc = 0x374F48u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1902D0u;
    {
        auto targetFn = runtime->lookupFunction(0x1902D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374F4Cu; }
        if (ctx->pc != 0x374F4Cu) { return; }
    }
    ctx->pc = 0x374F4Cu;
    // 0x374f4c: 0x27a50010
    ctx->pc = 0x374f4cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    // 0x374f50: 0xc06bde0
    ctx->pc = 0x374F50u;
    SET_GPR_U32(ctx, 31, 0x374F58u);
    ctx->pc = 0x374F54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 25));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374F58u; }
        if (ctx->pc != 0x374F58u) { return; }
    }
    ctx->pc = 0x374F58u;
    // 0x374f58: 0xdfbf0000
    ctx->pc = 0x374f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374f5c: 0x3e00008
    ctx->pc = 0x374F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374F60u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x374F64u;
    // 0x374f64: 0x0
    ctx->pc = 0x374f64u;
    // NOP
    // 0x374f68: 0x0
    ctx->pc = 0x374f68u;
    // NOP
    // 0x374f6c: 0x0
    ctx->pc = 0x374f6cu;
    // NOP
}
