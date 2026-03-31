#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_124ff0
// Address: 0x124ff0 - 0x125058
void entry_124ff0_0x125058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x124ff0u;

    // 0x124ff0: 0x27bdffd0
    ctx->pc = 0x124ff0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x124ff4: 0xffb00010
    ctx->pc = 0x124ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x124ff8: 0xa0802d
    ctx->pc = 0x124ff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124ffc: 0xffb10018
    ctx->pc = 0x124ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x125000: 0x80882d
    ctx->pc = 0x125000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125004: 0xffbf0020
    ctx->pc = 0x125004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x125008: 0xc042c56
    ctx->pc = 0x125008u;
    SET_GPR_U32(ctx, 31, 0x125010u);
    ctx->pc = 0x12500Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125010u; }
    }
    if (ctx->pc != 0x125010u) { return; }
    ctx->pc = 0x125010u;
    // 0x125010: 0x200202d
    ctx->pc = 0x125010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125014: 0x40282d
    ctx->pc = 0x125014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125018: 0x3a0302d
    ctx->pc = 0x125018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12501c: 0x27a70002
    ctx->pc = 0x12501cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 2));
    // 0x125020: 0xc049156
    ctx->pc = 0x125020u;
    SET_GPR_U32(ctx, 31, 0x125028u);
    ctx->pc = 0x125024u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x124558u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00124558_0x124558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125028u; }
    }
    if (ctx->pc != 0x125028u) { return; }
    ctx->pc = 0x125028u;
    // 0x125028: 0x97a30000
    ctx->pc = 0x125028u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12502c: 0x97a40002
    ctx->pc = 0x12502cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x125030: 0x97a20004
    ctx->pc = 0x125030u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x125034: 0xdfb00010
    ctx->pc = 0x125034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125038: 0xa623009c
    ctx->pc = 0x125038u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 156), (uint16_t)GPR_U32(ctx, 3));
    // 0x12503c: 0xa62200a0
    ctx->pc = 0x12503cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 160), (uint16_t)GPR_U32(ctx, 2));
    // 0x125040: 0xa624009e
    ctx->pc = 0x125040u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 158), (uint16_t)GPR_U32(ctx, 4));
    // 0x125044: 0xdfbf0020
    ctx->pc = 0x125044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125048: 0xdfb10018
    ctx->pc = 0x125048u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12504c: 0x3e00008
    ctx->pc = 0x12504Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125050u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x125054u;
    // 0x125054: 0x0
    ctx->pc = 0x125054u;
    // NOP
}
