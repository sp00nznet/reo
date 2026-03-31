#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017BAE8
// Address: 0x17bae8 - 0x17bb70
void sub_0017BAE8_0x17bae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17bae8u;

    // 0x17bae8: 0x27bdffd0
    ctx->pc = 0x17bae8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17baec: 0xffb00000
    ctx->pc = 0x17baecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17baf0: 0xa0802d
    ctx->pc = 0x17baf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17baf4: 0xffb10008
    ctx->pc = 0x17baf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17baf8: 0x80882d
    ctx->pc = 0x17baf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bafc: 0xffb20010
    ctx->pc = 0x17bafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17bb00: 0xe0282d
    ctx->pc = 0x17bb00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bb04: 0xffb30018
    ctx->pc = 0x17bb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17bb08: 0xc0982d
    ctx->pc = 0x17bb08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bb0c: 0xffbf0020
    ctx->pc = 0x17bb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17bb10: 0x200202d
    ctx->pc = 0x17bb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bb14: 0xae090044
    ctx->pc = 0x17bb14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 9));
    // 0x17bb18: 0x100302d
    ctx->pc = 0x17bb18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bb1c: 0xc05f550
    ctx->pc = 0x17BB1Cu;
    SET_GPR_U32(ctx, 31, 0x17BB24u);
    ctx->pc = 0x17BB20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 10));
    ctx->pc = 0x17D540u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D540_0x17d540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BB24u; }
    }
    if (ctx->pc != 0x17BB24u) { return; }
    ctx->pc = 0x17BB24u;
    // 0x17bb24: 0xc05f494
    ctx->pc = 0x17BB24u;
    SET_GPR_U32(ctx, 31, 0x17BB2Cu);
    ctx->pc = 0x17BB28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17D250u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D250_0x17d250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BB2Cu; }
    }
    if (ctx->pc != 0x17BB2Cu) { return; }
    ctx->pc = 0x17BB2Cu;
    // 0x17bb2c: 0x220202d
    ctx->pc = 0x17bb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bb30: 0x24050011
    ctx->pc = 0x17bb30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 17));
    // 0x17bb34: 0xc05f492
    ctx->pc = 0x17BB34u;
    SET_GPR_U32(ctx, 31, 0x17BB3Cu);
    ctx->pc = 0x17BB38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17D248u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D248_0x17d248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BB3Cu; }
    }
    if (ctx->pc != 0x17BB3Cu) { return; }
    ctx->pc = 0x17BB3Cu;
    // 0x17bb3c: 0x220202d
    ctx->pc = 0x17bb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bb40: 0x200282d
    ctx->pc = 0x17bb40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bb44: 0xc05eedc
    ctx->pc = 0x17BB44u;
    SET_GPR_U32(ctx, 31, 0x17BB4Cu);
    ctx->pc = 0x17BB48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17BB70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017BB70_0x17bb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BB4Cu; }
    }
    if (ctx->pc != 0x17BB4Cu) { return; }
    ctx->pc = 0x17BB4Cu;
    // 0x17bb4c: 0x220202d
    ctx->pc = 0x17bb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bb50: 0x240282d
    ctx->pc = 0x17bb50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bb54: 0xdfb20010
    ctx->pc = 0x17bb54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bb58: 0xdfb00000
    ctx->pc = 0x17bb58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bb5c: 0xdfb10008
    ctx->pc = 0x17bb5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17bb60: 0xdfb30018
    ctx->pc = 0x17bb60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17bb64: 0xdfbf0020
    ctx->pc = 0x17bb64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17bb68: 0x805f492
    ctx->pc = 0x17BB68u;
    ctx->pc = 0x17BB6Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x17D248u;
    sub_0017D248_0x17d248(rdram, ctx, runtime); return;
    ctx->pc = 0x17BB70u;
}
