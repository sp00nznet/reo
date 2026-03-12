#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00375160
// Address: 0x375160 - 0x3751b0
void sub_00375160_0x375160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x375160u;

    // 0x375160: 0x27bdffb0
    ctx->pc = 0x375160u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x375164: 0x80102d
    ctx->pc = 0x375164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375168: 0xffbf0000
    ctx->pc = 0x375168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37516c: 0xc44c0000
    ctx->pc = 0x37516cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x375170: 0xc44d0004
    ctx->pc = 0x375170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x375174: 0xc44e0008
    ctx->pc = 0x375174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x375178: 0xc063fc4
    ctx->pc = 0x375178u;
    SET_GPR_U32(ctx, 31, 0x375180u);
    ctx->pc = 0x37517Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x18FF10u;
    {
        auto targetFn = runtime->lookupFunction(0x18FF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375180u; }
        if (ctx->pc != 0x375180u) { return; }
    }
    ctx->pc = 0x375180u;
    // 0x375180: 0x44806000
    ctx->pc = 0x375180u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x375184: 0x27a40010
    ctx->pc = 0x375184u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x375188: 0x46006346
    ctx->pc = 0x375188u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x37518c: 0xc0640b4
    ctx->pc = 0x37518Cu;
    SET_GPR_U32(ctx, 31, 0x375194u);
    ctx->pc = 0x375190u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1902D0u;
    {
        auto targetFn = runtime->lookupFunction(0x1902D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375194u; }
        if (ctx->pc != 0x375194u) { return; }
    }
    ctx->pc = 0x375194u;
    // 0x375194: 0x27a50010
    ctx->pc = 0x375194u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    // 0x375198: 0xc06bde0
    ctx->pc = 0x375198u;
    SET_GPR_U32(ctx, 31, 0x3751A0u);
    ctx->pc = 0x37519Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 25));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3751A0u; }
        if (ctx->pc != 0x3751A0u) { return; }
    }
    ctx->pc = 0x3751A0u;
    // 0x3751a0: 0xdfbf0000
    ctx->pc = 0x3751a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3751a4: 0x3e00008
    ctx->pc = 0x3751A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3751A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3751ACu;
    // 0x3751ac: 0x0
    ctx->pc = 0x3751acu;
    // NOP
}
