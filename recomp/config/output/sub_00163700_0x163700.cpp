#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00163700
// Address: 0x163700 - 0x163720
void sub_00163700_0x163700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x163700u;

    // 0x163700: 0x27bdfff0
    ctx->pc = 0x163700u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x163704: 0xffbf0000
    ctx->pc = 0x163704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x163708: 0xc0505d2
    ctx->pc = 0x163708u;
    SET_GPR_U32(ctx, 31, 0x163710u);
    ctx->pc = 0x141748u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00141748_0x141748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163710u; }
    }
    if (ctx->pc != 0x163710u) { return; }
    ctx->pc = 0x163710u;
    // 0x163710: 0xdfbf0000
    ctx->pc = 0x163710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163714: 0x24020001
    ctx->pc = 0x163714u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x163718: 0x3e00008
    ctx->pc = 0x163718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16371Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x163720u;
}
