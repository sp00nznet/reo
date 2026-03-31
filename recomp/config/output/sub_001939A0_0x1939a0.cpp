#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001939A0
// Address: 0x1939a0 - 0x193a00
void sub_001939A0_0x1939a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1939a0u;

    // 0x1939a0: 0x27bdffd0
    ctx->pc = 0x1939a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1939a4: 0xffbf0020
    ctx->pc = 0x1939a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1939a8: 0x7fb10010
    ctx->pc = 0x1939a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1939ac: 0x7fb00000
    ctx->pc = 0x1939acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1939b0: 0x80882d
    ctx->pc = 0x1939b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1939b4: 0xc063f7c
    ctx->pc = 0x1939B4u;
    SET_GPR_U32(ctx, 31, 0x1939BCu);
    ctx->pc = 0x1939B8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18FDF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018FDF0_0x18fdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1939BCu; }
    }
    if (ctx->pc != 0x1939BCu) { return; }
    ctx->pc = 0x1939BCu;
    // 0x1939bc: 0xc60c000c
    ctx->pc = 0x1939bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1939c0: 0xc60d0010
    ctx->pc = 0x1939c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1939c4: 0xc60e0014
    ctx->pc = 0x1939c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1939c8: 0xc064284
    ctx->pc = 0x1939C8u;
    SET_GPR_U32(ctx, 31, 0x1939D0u);
    ctx->pc = 0x1939CCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x190A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00190A10_0x190a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1939D0u; }
    }
    if (ctx->pc != 0x1939D0u) { return; }
    ctx->pc = 0x1939D0u;
    // 0x1939d0: 0xc6000018
    ctx->pc = 0x1939d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1939d4: 0x24020001
    ctx->pc = 0x1939d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1939d8: 0xe6200030
    ctx->pc = 0x1939d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x1939dc: 0xc600001c
    ctx->pc = 0x1939dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1939e0: 0xe6200034
    ctx->pc = 0x1939e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x1939e4: 0xc6000020
    ctx->pc = 0x1939e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1939e8: 0xe6200038
    ctx->pc = 0x1939e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x1939ec: 0xdfbf0020
    ctx->pc = 0x1939ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1939f0: 0x7bb10010
    ctx->pc = 0x1939f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1939f4: 0x7bb00000
    ctx->pc = 0x1939f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1939f8: 0x3e00008
    ctx->pc = 0x1939F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1939FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193A00u;
}
