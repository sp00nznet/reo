#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_003703A0
// Address: 0x3703a0 - 0x370420
void sub_003703A0_0x3703a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3703a0u;

    // 0x3703a0: 0x27bdffb0
    ctx->pc = 0x3703a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3703a4: 0x3084ffff
    ctx->pc = 0x3703a4u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x3703a8: 0xffbf0040
    ctx->pc = 0x3703a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3703ac: 0x7fb20030
    ctx->pc = 0x3703acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3703b0: 0x7fb10020
    ctx->pc = 0x3703b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3703b4: 0xa0902d
    ctx->pc = 0x3703b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3703b8: 0x7fb00010
    ctx->pc = 0x3703b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3703bc: 0xc0882d
    ctx->pc = 0x3703bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3703c0: 0xe7b50004
    ctx->pc = 0x3703c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3703c4: 0xe0802d
    ctx->pc = 0x3703c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3703c8: 0xc0647e0
    ctx->pc = 0x3703C8u;
    SET_GPR_U32(ctx, 31, 0x3703D0u);
    ctx->pc = 0x3703CCu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->pc = 0x191F80u;
    {
        auto targetFn = runtime->lookupFunction(0x191F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3703D0u; }
        if (ctx->pc != 0x3703D0u) { return; }
    }
    ctx->pc = 0x3703D0u;
    // 0x3703d0: 0x3244ffff
    ctx->pc = 0x3703d0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 18), 65535));
    // 0x3703d4: 0xc0647e0
    ctx->pc = 0x3703D4u;
    SET_GPR_U32(ctx, 31, 0x3703DCu);
    ctx->pc = 0x3703D8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x191F80u;
    {
        auto targetFn = runtime->lookupFunction(0x191F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3703DCu; }
        if (ctx->pc != 0x3703DCu) { return; }
    }
    ctx->pc = 0x3703DCu;
    // 0x3703dc: 0x3224ffff
    ctx->pc = 0x3703dcu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 17), 65535));
    // 0x3703e0: 0xc0647e0
    ctx->pc = 0x3703E0u;
    SET_GPR_U32(ctx, 31, 0x3703E8u);
    ctx->pc = 0x3703E4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x191F80u;
    {
        auto targetFn = runtime->lookupFunction(0x191F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3703E8u; }
        if (ctx->pc != 0x3703E8u) { return; }
    }
    ctx->pc = 0x3703E8u;
    // 0x3703e8: 0x200202d
    ctx->pc = 0x3703e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3703ec: 0x4600ab06
    ctx->pc = 0x3703ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x3703f0: 0x4600a346
    ctx->pc = 0x3703f0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3703f4: 0xc064210
    ctx->pc = 0x3703F4u;
    SET_GPR_U32(ctx, 31, 0x3703FCu);
    ctx->pc = 0x3703F8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x190840u;
    {
        auto targetFn = runtime->lookupFunction(0x190840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3703FCu; }
        if (ctx->pc != 0x3703FCu) { return; }
    }
    ctx->pc = 0x3703FCu;
    // 0x3703fc: 0xdfbf0040
    ctx->pc = 0x3703fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x370400: 0xc7b50004
    ctx->pc = 0x370400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x370404: 0x7bb20030
    ctx->pc = 0x370404u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x370408: 0xc7b40000
    ctx->pc = 0x370408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x37040c: 0x7bb10020
    ctx->pc = 0x37040cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x370410: 0x7bb00010
    ctx->pc = 0x370410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x370414: 0x3e00008
    ctx->pc = 0x370414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370418u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37041Cu;
    // 0x37041c: 0x0
    ctx->pc = 0x37041cu;
    // NOP
}
