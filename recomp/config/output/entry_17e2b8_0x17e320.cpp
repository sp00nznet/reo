#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17e2b8
// Address: 0x17e2b8 - 0x17e320
void entry_17e2b8_0x17e320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17e2b8u;

    // 0x17e2b8: 0x27bdffe0
    ctx->pc = 0x17e2b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17e2bc: 0xffb00000
    ctx->pc = 0x17e2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17e2c0: 0x80802d
    ctx->pc = 0x17e2c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e2c4: 0xe7b50018
    ctx->pc = 0x17e2c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x17e2c8: 0x46006546
    ctx->pc = 0x17e2c8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x17e2cc: 0xe7b40010
    ctx->pc = 0x17e2ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x17e2d0: 0xffbf0008
    ctx->pc = 0x17e2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17e2d4: 0xc05f8c8
    ctx->pc = 0x17E2D4u;
    SET_GPR_U32(ctx, 31, 0x17E2DCu);
    ctx->pc = 0x17E2D8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    ctx->pc = 0x17E320u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E320_0x17e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E2DCu; }
    }
    if (ctx->pc != 0x17E2DCu) { return; }
    ctx->pc = 0x17E2DCu;
    // 0x17e2dc: 0x3c060024
    ctx->pc = 0x17e2dcu;
    SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
    // 0x17e2e0: 0x24030001
    ctx->pc = 0x17e2e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e2e4: 0x202d
    ctx->pc = 0x17e2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e2e8: 0x24c61498
    ctx->pc = 0x17e2e8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 5272));
    // 0x17e2ec: 0x10430003
    ctx->pc = 0x17E2ECu;
    {
        const bool branch_taken_0x17e2ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x17E2F0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17e2ec) {
            ctx->pc = 0x17E2FCu;
            goto label_17e2fc;
        }
    }
    ctx->pc = 0x17E2F4u;
    // 0x17e2f4: 0xc05f472
    ctx->pc = 0x17E2F4u;
    SET_GPR_U32(ctx, 31, 0x17E2FCu);
    ctx->pc = 0x17D1C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D1C8_0x17d1c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E2FCu; }
    }
    if (ctx->pc != 0x17E2FCu) { return; }
    ctx->pc = 0x17E2FCu;
label_17e2fc:
    // 0x17e2fc: 0xe6140040
    ctx->pc = 0x17e2fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x17e300: 0xe615003c
    ctx->pc = 0x17e300u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x17e304: 0xdfbf0008
    ctx->pc = 0x17e304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e308: 0xdfb00000
    ctx->pc = 0x17e308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e30c: 0xc7b50018
    ctx->pc = 0x17e30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17e310: 0xc7b40010
    ctx->pc = 0x17e310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17e314: 0x3e00008
    ctx->pc = 0x17E314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E318u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E2FCu: goto label_17e2fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17E31Cu;
    // 0x17e31c: 0x0
    ctx->pc = 0x17e31cu;
    // NOP
}
