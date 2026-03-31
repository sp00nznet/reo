#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D8990
// Address: 0x1d8990 - 0x1d8a50
void sub_001D8990_0x1d8990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d8990u;

    // 0x1d8990: 0x27bdffe0
    ctx->pc = 0x1d8990u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d8994: 0xffbf0010
    ctx->pc = 0x1d8994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d8998: 0x7fb00000
    ctx->pc = 0x1d8998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d899c: 0xc075e38
    ctx->pc = 0x1D899Cu;
    SET_GPR_U32(ctx, 31, 0x1D89A4u);
    ctx->pc = 0x1D89A0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D89A4u; }
    }
    if (ctx->pc != 0x1D89A4u) { return; }
    ctx->pc = 0x1D89A4u;
    // 0x1d89a4: 0x3c050034
    ctx->pc = 0x1d89a4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d89a8: 0x3c070034
    ctx->pc = 0x1d89a8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d89ac: 0x24040023
    ctx->pc = 0x1d89acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 35));
    // 0x1d89b0: 0x24a57280
    ctx->pc = 0x1d89b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d89b4: 0x24060020
    ctx->pc = 0x1d89b4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d89b8: 0x24e76280
    ctx->pc = 0x1d89b8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d89bc: 0xc075e40
    ctx->pc = 0x1D89BCu;
    SET_GPR_U32(ctx, 31, 0x1D89C4u);
    ctx->pc = 0x1D89C0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 76));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D89C4u; }
    }
    if (ctx->pc != 0x1D89C4u) { return; }
    ctx->pc = 0x1D89C4u;
    // 0x1d89c4: 0x3c020034
    ctx->pc = 0x1d89c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x1d89c8: 0x3c010034
    ctx->pc = 0x1d89c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d89cc: 0x2442629c
    ctx->pc = 0x1d89ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25244));
    // 0x1d89d0: 0xc4430000
    ctx->pc = 0x1d89d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d89d4: 0xc4420004
    ctx->pc = 0x1d89d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d89d8: 0xc4410008
    ctx->pc = 0x1d89d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d89dc: 0xc440000c
    ctx->pc = 0x1d89dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d89e0: 0xe6030000
    ctx->pc = 0x1d89e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1d89e4: 0xe6020004
    ctx->pc = 0x1d89e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1d89e8: 0xe6010008
    ctx->pc = 0x1d89e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1d89ec: 0xe600000c
    ctx->pc = 0x1d89ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1d89f0: 0xc4430010
    ctx->pc = 0x1d89f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d89f4: 0xc4420014
    ctx->pc = 0x1d89f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d89f8: 0xc4410018
    ctx->pc = 0x1d89f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d89fc: 0xc440001c
    ctx->pc = 0x1d89fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8a00: 0xe6030010
    ctx->pc = 0x1d8a00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1d8a04: 0xe6020014
    ctx->pc = 0x1d8a04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1d8a08: 0xe6010018
    ctx->pc = 0x1d8a08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1d8a0c: 0xe600001c
    ctx->pc = 0x1d8a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1d8a10: 0xc4420020
    ctx->pc = 0x1d8a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d8a14: 0xc4410024
    ctx->pc = 0x1d8a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8a18: 0xc4400028
    ctx->pc = 0x1d8a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8a1c: 0xe6020020
    ctx->pc = 0x1d8a1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1d8a20: 0xe6010024
    ctx->pc = 0x1d8a20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1d8a24: 0xe6000028
    ctx->pc = 0x1d8a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1d8a28: 0xc075e3c
    ctx->pc = 0x1D8A28u;
    SET_GPR_U32(ctx, 31, 0x1D8A30u);
    ctx->pc = 0x1D8A2Cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8A30u; }
    }
    if (ctx->pc != 0x1D8A30u) { return; }
    ctx->pc = 0x1D8A30u;
    // 0x1d8a30: 0x200102d
    ctx->pc = 0x1d8a30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a34: 0xdfbf0010
    ctx->pc = 0x1d8a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8a38: 0x7bb00000
    ctx->pc = 0x1d8a38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8a3c: 0x3e00008
    ctx->pc = 0x1D8A3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8A40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8A44u;
    // 0x1d8a44: 0x0
    ctx->pc = 0x1d8a44u;
    // NOP
    // 0x1d8a48: 0x0
    ctx->pc = 0x1d8a48u;
    // NOP
    // 0x1d8a4c: 0x0
    ctx->pc = 0x1d8a4cu;
    // NOP
}
