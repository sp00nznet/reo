#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00370AC0
// Address: 0x370ac0 - 0x370b00
void sub_00370AC0_0x370ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x370ac0u;

    // 0x370ac0: 0xc4850004
    ctx->pc = 0x370ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x370ac4: 0xc4c20004
    ctx->pc = 0x370ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x370ac8: 0xc4a00004
    ctx->pc = 0x370ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370acc: 0xc4840000
    ctx->pc = 0x370accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x370ad0: 0xc4a30000
    ctx->pc = 0x370ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x370ad4: 0xc4c10000
    ctx->pc = 0x370ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370ad8: 0x46051081
    ctx->pc = 0x370ad8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x370adc: 0x460418c1
    ctx->pc = 0x370adcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x370ae0: 0x46040841
    ctx->pc = 0x370ae0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x370ae4: 0x46050001
    ctx->pc = 0x370ae4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x370ae8: 0x4602181a
    ctx->pc = 0x370ae8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x370aec: 0x3e00008
    ctx->pc = 0x370AECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370AF0u;
        ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x370AF4u;
    // 0x370af4: 0x0
    ctx->pc = 0x370af4u;
    // NOP
    // 0x370af8: 0x0
    ctx->pc = 0x370af8u;
    // NOP
    // 0x370afc: 0x0
    ctx->pc = 0x370afcu;
    // NOP
}
