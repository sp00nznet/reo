#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001384A0
// Address: 0x1384a0 - 0x138518
void sub_001384A0_0x1384a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1384a0u;

    // 0x1384a0: 0x27bdffe0
    ctx->pc = 0x1384a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1384a4: 0xffb00000
    ctx->pc = 0x1384a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1384a8: 0x80802d
    ctx->pc = 0x1384a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1384ac: 0xffb10008
    ctx->pc = 0x1384acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1384b0: 0xa0882d
    ctx->pc = 0x1384b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1384b4: 0xffb20010
    ctx->pc = 0x1384b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1384b8: 0xffbf0018
    ctx->pc = 0x1384b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1384bc: 0xc04e0bc
    ctx->pc = 0x1384BCu;
    SET_GPR_U32(ctx, 31, 0x1384C4u);
    ctx->pc = 0x1384C0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1382F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001382F0_0x1382f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1384C4u; }
    }
    if (ctx->pc != 0x1384C4u) { return; }
    ctx->pc = 0x1384C4u;
    // 0x1384c4: 0x200202d
    ctx->pc = 0x1384c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1384c8: 0x220282d
    ctx->pc = 0x1384c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1384cc: 0xc046574
    ctx->pc = 0x1384CCu;
    SET_GPR_U32(ctx, 31, 0x1384D4u);
    ctx->pc = 0x1384D0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1195D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001195D0_0x1195d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1384D4u; }
    }
    if (ctx->pc != 0x1384D4u) { return; }
    ctx->pc = 0x1384D4u;
    // 0x1384d4: 0x3c040024
    ctx->pc = 0x1384d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1384d8: 0x40802d
    ctx->pc = 0x1384d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1384dc: 0x2484c740
    ctx->pc = 0x1384dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952768));
    // 0x1384e0: 0x6010003
    ctx->pc = 0x1384E0u;
    {
        const bool branch_taken_0x1384e0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1384E4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1384e0) {
            ctx->pc = 0x1384F0u;
            goto label_1384f0;
        }
    }
    ctx->pc = 0x1384E8u;
    // 0x1384e8: 0xc045a12
    ctx->pc = 0x1384E8u;
    SET_GPR_U32(ctx, 31, 0x1384F0u);
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1384F0u; }
    }
    if (ctx->pc != 0x1384F0u) { return; }
    ctx->pc = 0x1384F0u;
label_1384f0:
    // 0x1384f0: 0xc04e0ca
    ctx->pc = 0x1384F0u;
    SET_GPR_U32(ctx, 31, 0x1384F8u);
    ctx->pc = 0x138328u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138328_0x138328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1384F8u; }
    }
    if (ctx->pc != 0x1384F8u) { return; }
    ctx->pc = 0x1384F8u;
    // 0x1384f8: 0x200102d
    ctx->pc = 0x1384f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1384fc: 0xdfb10008
    ctx->pc = 0x1384fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x138500: 0xdfb00000
    ctx->pc = 0x138500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138504: 0xdfb20010
    ctx->pc = 0x138504u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138508: 0xdfbf0018
    ctx->pc = 0x138508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13850c: 0x3e00008
    ctx->pc = 0x13850Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138510u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1384F0u: goto label_1384f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x138514u;
    // 0x138514: 0x0
    ctx->pc = 0x138514u;
    // NOP
}
