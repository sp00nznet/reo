#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013BE28
// Address: 0x13be28 - 0x13be80
void sub_0013BE28_0x13be28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13be28u;

    // 0x13be28: 0x27bdffe0
    ctx->pc = 0x13be28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13be2c: 0x24060006
    ctx->pc = 0x13be2cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x13be30: 0xffb00010
    ctx->pc = 0x13be30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13be34: 0x80802d
    ctx->pc = 0x13be34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13be38: 0x282d
    ctx->pc = 0x13be38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13be3c: 0xffbf0018
    ctx->pc = 0x13be3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x13be40: 0xc041f1a
    ctx->pc = 0x13BE40u;
    SET_GPR_U32(ctx, 31, 0x13BE48u);
    ctx->pc = 0x13BE44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BE48u; }
    }
    if (ctx->pc != 0x13BE48u) { return; }
    ctx->pc = 0x13BE48u;
    // 0x13be48: 0x8a020003
    ctx->pc = 0x13be48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 2, (GPR_U32(ctx, 2) & ~mask) | ((aligned_word << shift) & mask)); }
    // 0x13be4c: 0x9a020000
    ctx->pc = 0x13be4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 2, (GPR_U32(ctx, 2) & ~mask) | ((aligned_word >> shift) & mask)); }
    // 0x13be50: 0xaba20003
    ctx->pc = 0x13be50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 2) >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x13be54: 0x3c050024
    ctx->pc = 0x13be54u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x13be58: 0x24a5d148
    ctx->pc = 0x13be58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955336));
    // 0x13be5c: 0x3a0202d
    ctx->pc = 0x13be5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13be60: 0xbba20000
    ctx->pc = 0x13be60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 2) << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x13be64: 0xc042b9e
    ctx->pc = 0x13BE64u;
    SET_GPR_U32(ctx, 31, 0x13BE6Cu);
    ctx->pc = 0x13BE68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BE6Cu; }
    }
    if (ctx->pc != 0x13BE6Cu) { return; }
    ctx->pc = 0x13BE6Cu;
    // 0x13be6c: 0xdfb00010
    ctx->pc = 0x13be6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13be70: 0x2c420001
    ctx->pc = 0x13be70u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x13be74: 0xdfbf0018
    ctx->pc = 0x13be74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13be78: 0x3e00008
    ctx->pc = 0x13BE78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BE7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13BE80u;
}
