#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00130478
// Address: 0x130478 - 0x1304e8
void sub_00130478_0x130478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x130478u;

    // 0x130478: 0x27bdffd0
    ctx->pc = 0x130478u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13047c: 0xffb10008
    ctx->pc = 0x13047cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x130480: 0x100882d
    ctx->pc = 0x130480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130484: 0xffb00000
    ctx->pc = 0x130484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130488: 0x80802d
    ctx->pc = 0x130488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13048c: 0xffb20010
    ctx->pc = 0x13048cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x130490: 0xe0902d
    ctx->pc = 0x130490u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130494: 0xffb30018
    ctx->pc = 0x130494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x130498: 0xa0982d
    ctx->pc = 0x130498u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13049c: 0xffb40020
    ctx->pc = 0x13049cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1304a0: 0xffbf0028
    ctx->pc = 0x1304a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1304a4: 0xc0505b4
    ctx->pc = 0x1304A4u;
    SET_GPR_U32(ctx, 31, 0x1304ACu);
    ctx->pc = 0x1304A8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1416D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001416D0_0x1416d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1304ACu; }
    }
    if (ctx->pc != 0x1304ACu) { return; }
    ctx->pc = 0x1304ACu;
    // 0x1304ac: 0x118ac0
    ctx->pc = 0x1304acu;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 11));
    // 0x1304b0: 0x24020001
    ctx->pc = 0x1304b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1304b4: 0xae12000c
    ctx->pc = 0x1304b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x1304b8: 0xae110010
    ctx->pc = 0x1304b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x1304bc: 0xae13004c
    ctx->pc = 0x1304bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 19));
    // 0x1304c0: 0xae140050
    ctx->pc = 0x1304c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 20));
    // 0x1304c4: 0xa2020041
    ctx->pc = 0x1304c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 65), (uint8_t)GPR_U32(ctx, 2));
    // 0x1304c8: 0xdfb10008
    ctx->pc = 0x1304c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1304cc: 0xdfb00000
    ctx->pc = 0x1304ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1304d0: 0xdfb20010
    ctx->pc = 0x1304d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1304d4: 0xdfb30018
    ctx->pc = 0x1304d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1304d8: 0xdfb40020
    ctx->pc = 0x1304d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1304dc: 0xdfbf0028
    ctx->pc = 0x1304dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1304e0: 0x80505ba
    ctx->pc = 0x1304E0u;
    ctx->pc = 0x1304E4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1416E8u;
    sub_001416E8_0x1416e8(rdram, ctx, runtime); return;
    ctx->pc = 0x1304E8u;
}
