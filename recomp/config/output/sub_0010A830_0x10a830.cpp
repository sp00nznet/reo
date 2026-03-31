#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0010A830
// Address: 0x10a830 - 0x10a8c8
void sub_0010A830_0x10a830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10a830u;

    // 0x10a830: 0x3c020021
    ctx->pc = 0x10a830u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x10a834: 0x27bdff40
    ctx->pc = 0x10a834u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x10a838: 0x8c4d97f0
    ctx->pc = 0x10a838u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 2), 4294940656)));
    // 0x10a83c: 0x24020208
    ctx->pc = 0x10a83cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 520));
    // 0x10a840: 0x3c037fff
    ctx->pc = 0x10a840u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32767 << 16));
    // 0x10a844: 0x80602d
    ctx->pc = 0x10a844u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a848: 0x3463ffff
    ctx->pc = 0x10a848u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x10a84c: 0xffa60090
    ctx->pc = 0x10a84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 6));
    // 0x10a850: 0x3a0202d
    ctx->pc = 0x10a850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a854: 0x27a60090
    ctx->pc = 0x10a854u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 144));
    // 0x10a858: 0xffbf0060
    ctx->pc = 0x10a858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x10a85c: 0xafa30014
    ctx->pc = 0x10a85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x10a860: 0xafa30008
    ctx->pc = 0x10a860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x10a864: 0xffa70098
    ctx->pc = 0x10a864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 7));
    // 0x10a868: 0xffa800a0
    ctx->pc = 0x10a868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 8));
    // 0x10a86c: 0xffa900a8
    ctx->pc = 0x10a86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 9));
    // 0x10a870: 0xffaa00b0
    ctx->pc = 0x10a870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 10));
    // 0x10a874: 0xffab00b8
    ctx->pc = 0x10a874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 11));
    // 0x10a878: 0xe7ac0070
    ctx->pc = 0x10a878u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x10a87c: 0xe7ad0074
    ctx->pc = 0x10a87cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x10a880: 0xe7ae0078
    ctx->pc = 0x10a880u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x10a884: 0xe7af007c
    ctx->pc = 0x10a884u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x10a888: 0xe7b00080
    ctx->pc = 0x10a888u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x10a88c: 0xe7b10084
    ctx->pc = 0x10a88cu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x10a890: 0xe7b20088
    ctx->pc = 0x10a890u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x10a894: 0xe7b3008c
    ctx->pc = 0x10a894u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x10a898: 0xa7a2000c
    ctx->pc = 0x10a898u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x10a89c: 0xafac0010
    ctx->pc = 0x10a89cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 12));
    // 0x10a8a0: 0xafad0054
    ctx->pc = 0x10a8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 13));
    // 0x10a8a4: 0xc04345a
    ctx->pc = 0x10A8A4u;
    SET_GPR_U32(ctx, 31, 0x10A8ACu);
    ctx->pc = 0x10A8A8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    ctx->pc = 0x10D168u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D168_0x10d168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A8ACu; }
    }
    if (ctx->pc != 0x10A8ACu) { return; }
    ctx->pc = 0x10A8ACu;
    // 0x10a8ac: 0x8fa30000
    ctx->pc = 0x10a8acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a8b0: 0xdfbf0060
    ctx->pc = 0x10a8b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10a8b4: 0xa0600000
    ctx->pc = 0x10a8b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x10a8b8: 0x3e00008
    ctx->pc = 0x10A8B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A8BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10A8C0u;
    // 0x10a8c0: 0x3e00008
    ctx->pc = 0x10A8C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A8C4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10A8C8u;
}
