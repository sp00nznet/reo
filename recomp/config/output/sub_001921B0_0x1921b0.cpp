#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001921B0
// Address: 0x1921b0 - 0x1921f0
void sub_001921B0_0x1921b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1921b0u;

    // 0x1921b0: 0x27bdffe0
    ctx->pc = 0x1921b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1921b4: 0x80482d
    ctx->pc = 0x1921b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1921b8: 0xffbf0000
    ctx->pc = 0x1921b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1921bc: 0xa0302d
    ctx->pc = 0x1921bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1921c0: 0xc063d5c
    ctx->pc = 0x1921C0u;
    SET_GPR_U32(ctx, 31, 0x1921C8u);
    ctx->pc = 0x1921C4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x18F570u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F570_0x18f570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1921C8u; }
    }
    if (ctx->pc != 0x1921C8u) { return; }
    ctx->pc = 0x1921C8u;
    // 0x1921c8: 0xc7a00010
    ctx->pc = 0x1921c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1921cc: 0xe5200000
    ctx->pc = 0x1921ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x1921d0: 0xc7a00014
    ctx->pc = 0x1921d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1921d4: 0xe4c00000
    ctx->pc = 0x1921d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1921d8: 0xdfbf0000
    ctx->pc = 0x1921d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1921dc: 0x3e00008
    ctx->pc = 0x1921DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1921E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1921E4u;
    // 0x1921e4: 0x0
    ctx->pc = 0x1921e4u;
    // NOP
    // 0x1921e8: 0x0
    ctx->pc = 0x1921e8u;
    // NOP
    // 0x1921ec: 0x0
    ctx->pc = 0x1921ecu;
    // NOP
}
