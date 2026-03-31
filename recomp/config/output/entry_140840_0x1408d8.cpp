#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_140840
// Address: 0x140840 - 0x1408d8
void entry_140840_0x1408d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x140840u;

    // 0x140840: 0x3c030023
    ctx->pc = 0x140840u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x140844: 0x3082000f
    ctx->pc = 0x140844u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 15));
    // 0x140848: 0x24639898
    ctx->pc = 0x140848u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294940824));
    // 0x14084c: 0x42103
    ctx->pc = 0x14084cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x140850: 0x431021
    ctx->pc = 0x140850u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x140854: 0x90460000
    ctx->pc = 0x140854u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140858: 0x3082000f
    ctx->pc = 0x140858u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 15));
    // 0x14085c: 0x431021
    ctx->pc = 0x14085cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x140860: 0x42103
    ctx->pc = 0x140860u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x140864: 0xa0a60006
    ctx->pc = 0x140864u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 6));
    // 0x140868: 0x3086000f
    ctx->pc = 0x140868u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 4), 15));
    // 0x14086c: 0xc33021
    ctx->pc = 0x14086cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x140870: 0x42103
    ctx->pc = 0x140870u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x140874: 0x90470000
    ctx->pc = 0x140874u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140878: 0x3082000f
    ctx->pc = 0x140878u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 15));
    // 0x14087c: 0x431021
    ctx->pc = 0x14087cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x140880: 0x42103
    ctx->pc = 0x140880u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x140884: 0xa0a70005
    ctx->pc = 0x140884u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 7));
    // 0x140888: 0x3088000f
    ctx->pc = 0x140888u;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 4), 15));
    // 0x14088c: 0x1034021
    ctx->pc = 0x14088cu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x140890: 0x42103
    ctx->pc = 0x140890u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x140894: 0x90c90000
    ctx->pc = 0x140894u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x140898: 0x3087000f
    ctx->pc = 0x140898u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 4), 15));
    // 0x14089c: 0x42103
    ctx->pc = 0x14089cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x1408a0: 0xe33821
    ctx->pc = 0x1408a0u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1408a4: 0xa0a90004
    ctx->pc = 0x1408a4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 9));
    // 0x1408a8: 0x3084000f
    ctx->pc = 0x1408a8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 15));
    // 0x1408ac: 0x832021
    ctx->pc = 0x1408acu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1408b0: 0x90460000
    ctx->pc = 0x1408b0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1408b4: 0xa0a60003
    ctx->pc = 0x1408b4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x1408b8: 0x91020000
    ctx->pc = 0x1408b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1408bc: 0xa0a20002
    ctx->pc = 0x1408bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1408c0: 0x90e30000
    ctx->pc = 0x1408c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1408c4: 0xa0a30001
    ctx->pc = 0x1408c4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1408c8: 0x90820000
    ctx->pc = 0x1408c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1408cc: 0x3e00008
    ctx->pc = 0x1408CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1408D0u;
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1408D4u;
    // 0x1408d4: 0x0
    ctx->pc = 0x1408d4u;
    // NOP
}
