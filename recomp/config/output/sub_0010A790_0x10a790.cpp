#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0010A790
// Address: 0x10a790 - 0x10a830
void sub_0010A790_0x10a790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10a790u;

    // 0x10a790: 0x27bdfff0
    ctx->pc = 0x10a790u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10a794: 0xffbf0000
    ctx->pc = 0x10a794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10a798: 0xdfbf0000
    ctx->pc = 0x10a798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a79c: 0x804537c
    ctx->pc = 0x10A79Cu;
    ctx->pc = 0x10A7A0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x114DF0u;
    entry_114df0_0x114df8(rdram, ctx, runtime); return;
    ctx->pc = 0x10A7A4u;
    // 0x10a7a4: 0x0
    ctx->pc = 0x10a7a4u;
    // NOP
    // 0x10a7a8: 0x27bdff40
    ctx->pc = 0x10a7a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x10a7ac: 0x3c027fff
    ctx->pc = 0x10a7acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x10a7b0: 0xa0182d
    ctx->pc = 0x10a7b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a7b4: 0xc0282d
    ctx->pc = 0x10a7b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a7b8: 0xafa40054
    ctx->pc = 0x10a7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
    // 0x10a7bc: 0x3a0202d
    ctx->pc = 0x10a7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a7c0: 0x3442ffff
    ctx->pc = 0x10a7c0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x10a7c4: 0x240c0208
    ctx->pc = 0x10a7c4u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 520));
    // 0x10a7c8: 0x27a60098
    ctx->pc = 0x10a7c8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 152));
    // 0x10a7cc: 0xffbf0060
    ctx->pc = 0x10a7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x10a7d0: 0xafa30010
    ctx->pc = 0x10a7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x10a7d4: 0xafa30000
    ctx->pc = 0x10a7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x10a7d8: 0xffa70098
    ctx->pc = 0x10a7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 7));
    // 0x10a7dc: 0xffa800a0
    ctx->pc = 0x10a7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 8));
    // 0x10a7e0: 0xffa900a8
    ctx->pc = 0x10a7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 9));
    // 0x10a7e4: 0xffaa00b0
    ctx->pc = 0x10a7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 10));
    // 0x10a7e8: 0xffab00b8
    ctx->pc = 0x10a7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 11));
    // 0x10a7ec: 0xe7ac0078
    ctx->pc = 0x10a7ecu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x10a7f0: 0xe7ad007c
    ctx->pc = 0x10a7f0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x10a7f4: 0xe7ae0080
    ctx->pc = 0x10a7f4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x10a7f8: 0xe7af0084
    ctx->pc = 0x10a7f8u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x10a7fc: 0xe7b00088
    ctx->pc = 0x10a7fcu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x10a800: 0xe7b1008c
    ctx->pc = 0x10a800u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x10a804: 0xe7b20090
    ctx->pc = 0x10a804u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x10a808: 0xe7b30094
    ctx->pc = 0x10a808u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x10a80c: 0xa7ac000c
    ctx->pc = 0x10a80cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 12));
    // 0x10a810: 0xafa20014
    ctx->pc = 0x10a810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x10a814: 0xc04345a
    ctx->pc = 0x10A814u;
    SET_GPR_U32(ctx, 31, 0x10A81Cu);
    ctx->pc = 0x10A818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x10D168u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D168_0x10d168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A81Cu; }
    }
    if (ctx->pc != 0x10A81Cu) { return; }
    ctx->pc = 0x10A81Cu;
    // 0x10a81c: 0x8fa30000
    ctx->pc = 0x10a81cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a820: 0xdfbf0060
    ctx->pc = 0x10a820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10a824: 0xa0600000
    ctx->pc = 0x10a824u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x10a828: 0x3e00008
    ctx->pc = 0x10A828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A82Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10A830u;
}
