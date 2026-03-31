#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17e0d0
// Address: 0x17e0d0 - 0x17e120
void entry_17e0d0_0x17e120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17e0d0u;

    // 0x17e0d0: 0x27bdffd0
    ctx->pc = 0x17e0d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17e0d4: 0xffb10018
    ctx->pc = 0x17e0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17e0d8: 0xc0882d
    ctx->pc = 0x17e0d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e0dc: 0xffb00010
    ctx->pc = 0x17e0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17e0e0: 0x80802d
    ctx->pc = 0x17e0e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e0e4: 0xffbf0020
    ctx->pc = 0x17e0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17e0e8: 0x3a0302d
    ctx->pc = 0x17e0e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e0ec: 0xae200000
    ctx->pc = 0x17e0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x17e0f0: 0xc05f65a
    ctx->pc = 0x17E0F0u;
    SET_GPR_U32(ctx, 31, 0x17E0F8u);
    ctx->pc = 0x17E0F4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x17D968u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D968_0x17d968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E0F8u; }
    }
    if (ctx->pc != 0x17E0F8u) { return; }
    ctx->pc = 0x17E0F8u;
    // 0x17e0f8: 0x200202d
    ctx->pc = 0x17e0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e0fc: 0x8fa50000
    ctx->pc = 0x17e0fcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e100: 0x220382d
    ctx->pc = 0x17e100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e104: 0xc05f848
    ctx->pc = 0x17E104u;
    SET_GPR_U32(ctx, 31, 0x17E10Cu);
    ctx->pc = 0x17E108u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->pc = 0x17E120u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E120_0x17e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E10Cu; }
    }
    if (ctx->pc != 0x17E10Cu) { return; }
    ctx->pc = 0x17E10Cu;
    // 0x17e10c: 0xdfb00010
    ctx->pc = 0x17e10cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e110: 0xdfb10018
    ctx->pc = 0x17e110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17e114: 0xdfbf0020
    ctx->pc = 0x17e114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e118: 0x3e00008
    ctx->pc = 0x17E118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E11Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E120u;
}
