#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001726F8
// Address: 0x1726f8 - 0x172720
void sub_001726F8_0x1726f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1726f8u;

    // 0x1726f8: 0x27bdfff0
    ctx->pc = 0x1726f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1726fc: 0xffb00000
    ctx->pc = 0x1726fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x172700: 0xffbf0008
    ctx->pc = 0x172700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x172704: 0xc05c9c8
    ctx->pc = 0x172704u;
    SET_GPR_U32(ctx, 31, 0x17270Cu);
    ctx->pc = 0x172708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x172720u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00172720_0x172720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17270Cu; }
    }
    if (ctx->pc != 0x17270Cu) { return; }
    ctx->pc = 0x17270Cu;
    // 0x17270c: 0xdfbf0008
    ctx->pc = 0x17270cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x172710: 0x200202d
    ctx->pc = 0x172710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172714: 0xdfb00000
    ctx->pc = 0x172714u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172718: 0x805d21e
    ctx->pc = 0x172718u;
    ctx->pc = 0x17271Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x174878u;
    entry_174878_0x1748c0(rdram, ctx, runtime); return;
    ctx->pc = 0x172720u;
}
