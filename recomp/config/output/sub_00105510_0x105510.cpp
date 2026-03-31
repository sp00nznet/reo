#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00105510
// Address: 0x105510 - 0x1055a0
void sub_00105510_0x105510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x105510u;

    // 0x105510: 0x27bdffe0
    ctx->pc = 0x105510u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x105514: 0x3c020010
    ctx->pc = 0x105514u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
    // 0x105518: 0xffb00000
    ctx->pc = 0x105518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10551c: 0x80802d
    ctx->pc = 0x10551cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105520: 0x244254d0
    ctx->pc = 0x105520u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 21712));
    // 0x105524: 0x24030001
    ctx->pc = 0x105524u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x105528: 0xffb10008
    ctx->pc = 0x105528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10552c: 0x261101e4
    ctx->pc = 0x10552cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 484));
    // 0x105530: 0xffbf0010
    ctx->pc = 0x105530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x105534: 0x220202d
    ctx->pc = 0x105534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105538: 0xae02003c
    ctx->pc = 0x105538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x10553c: 0x200382d
    ctx->pc = 0x10553cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105540: 0xae030038
    ctx->pc = 0x105540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x105544: 0x24050004
    ctx->pc = 0x105544u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x105548: 0xc0414c0
    ctx->pc = 0x105548u;
    SET_GPR_U32(ctx, 31, 0x105550u);
    ctx->pc = 0x10554Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x105300u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00105300_0x105300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105550u; }
    }
    if (ctx->pc != 0x105550u) { return; }
    ctx->pc = 0x105550u;
    // 0x105550: 0x2604023c
    ctx->pc = 0x105550u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 572));
    // 0x105554: 0x200382d
    ctx->pc = 0x105554u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105558: 0x24050009
    ctx->pc = 0x105558u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
    // 0x10555c: 0xc0414c0
    ctx->pc = 0x10555Cu;
    SET_GPR_U32(ctx, 31, 0x105564u);
    ctx->pc = 0x105560u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x105300u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00105300_0x105300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105564u; }
    }
    if (ctx->pc != 0x105564u) { return; }
    ctx->pc = 0x105564u;
    // 0x105564: 0x26040294
    ctx->pc = 0x105564u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 660));
    // 0x105568: 0x200382d
    ctx->pc = 0x105568u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10556c: 0x2405000a
    ctx->pc = 0x10556cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    // 0x105570: 0xc0414c0
    ctx->pc = 0x105570u;
    SET_GPR_U32(ctx, 31, 0x105578u);
    ctx->pc = 0x105574u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x105300u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00105300_0x105300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105578u; }
    }
    if (ctx->pc != 0x105578u) { return; }
    ctx->pc = 0x105578u;
    // 0x105578: 0xae0001d8
    ctx->pc = 0x105578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 0));
    // 0x10557c: 0x24020003
    ctx->pc = 0x10557cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x105580: 0xae1101e0
    ctx->pc = 0x105580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 17));
    // 0x105584: 0xae0201dc
    ctx->pc = 0x105584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 2));
    // 0x105588: 0xdfb10008
    ctx->pc = 0x105588u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10558c: 0xdfb00000
    ctx->pc = 0x10558cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105590: 0xdfbf0010
    ctx->pc = 0x105590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105594: 0x3e00008
    ctx->pc = 0x105594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105598u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10559Cu;
    // 0x10559c: 0x0
    ctx->pc = 0x10559cu;
    // NOP
}
