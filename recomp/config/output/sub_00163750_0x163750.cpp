#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00163750
// Address: 0x163750 - 0x1637e8
void sub_00163750_0x163750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x163750u;

    // 0x163750: 0x27bdff80
    ctx->pc = 0x163750u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x163754: 0xffb00000
    ctx->pc = 0x163754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x163758: 0x3c100027
    ctx->pc = 0x163758u;
    SET_GPR_U32(ctx, 16, ((uint32_t)39 << 16));
    // 0x16375c: 0x26100640
    ctx->pc = 0x16375cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1600));
    // 0x163760: 0xffb10008
    ctx->pc = 0x163760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x163764: 0xffa50048
    ctx->pc = 0x163764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x163768: 0x282d
    ctx->pc = 0x163768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16376c: 0xffa60050
    ctx->pc = 0x16376cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 6));
    // 0x163770: 0x24060100
    ctx->pc = 0x163770u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    // 0x163774: 0x80882d
    ctx->pc = 0x163774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163778: 0x200202d
    ctx->pc = 0x163778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16377c: 0xffbf0010
    ctx->pc = 0x16377cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x163780: 0xffa70058
    ctx->pc = 0x163780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 7));
    // 0x163784: 0xffa80060
    ctx->pc = 0x163784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
    // 0x163788: 0xffa90068
    ctx->pc = 0x163788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
    // 0x16378c: 0xffaa0070
    ctx->pc = 0x16378cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
    // 0x163790: 0xffab0078
    ctx->pc = 0x163790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
    // 0x163794: 0xe7ac0028
    ctx->pc = 0x163794u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x163798: 0xe7ad002c
    ctx->pc = 0x163798u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x16379c: 0xe7ae0030
    ctx->pc = 0x16379cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1637a0: 0xe7af0034
    ctx->pc = 0x1637a0u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1637a4: 0xe7b00038
    ctx->pc = 0x1637a4u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1637a8: 0xe7b1003c
    ctx->pc = 0x1637a8u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1637ac: 0xe7b20040
    ctx->pc = 0x1637acu;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1637b0: 0xc041f1a
    ctx->pc = 0x1637B0u;
    SET_GPR_U32(ctx, 31, 0x1637B8u);
    ctx->pc = 0x1637B4u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1637B8u; }
    }
    if (ctx->pc != 0x1637B8u) { return; }
    ctx->pc = 0x1637B8u;
    // 0x1637b8: 0x27a60048
    ctx->pc = 0x1637b8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 72));
    // 0x1637bc: 0x220282d
    ctx->pc = 0x1637bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1637c0: 0xc043e20
    ctx->pc = 0x1637C0u;
    SET_GPR_U32(ctx, 31, 0x1637C8u);
    ctx->pc = 0x1637C4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10F880u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F880_0x10f880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1637C8u; }
    }
    if (ctx->pc != 0x1637C8u) { return; }
    ctx->pc = 0x1637C8u;
    // 0x1637c8: 0xc058e06
    ctx->pc = 0x1637C8u;
    SET_GPR_U32(ctx, 31, 0x1637D0u);
    ctx->pc = 0x1637CCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163818u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163818_0x163818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1637D0u; }
    }
    if (ctx->pc != 0x1637D0u) { return; }
    ctx->pc = 0x1637D0u;
    // 0x1637d0: 0xdfb00000
    ctx->pc = 0x1637d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1637d4: 0xdfb10008
    ctx->pc = 0x1637d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1637d8: 0xdfbf0010
    ctx->pc = 0x1637d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1637dc: 0x3e00008
    ctx->pc = 0x1637DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1637E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1637E4u;
    // 0x1637e4: 0x0
    ctx->pc = 0x1637e4u;
    // NOP
}
