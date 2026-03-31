#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_16b3b0
// Address: 0x16b3b0 - 0x16b410
void entry_16b3b0_0x16b410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16b3b0u;

    // 0x16b3b0: 0x27bdffe0
    ctx->pc = 0x16b3b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16b3b4: 0xffb00000
    ctx->pc = 0x16b3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b3b8: 0x80802d
    ctx->pc = 0x16b3b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b3bc: 0xffb10008
    ctx->pc = 0x16b3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16b3c0: 0x26111ae4
    ctx->pc = 0x16b3c0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 6884));
    // 0x16b3c4: 0xffb20010
    ctx->pc = 0x16b3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16b3c8: 0xa0902d
    ctx->pc = 0x16b3c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b3cc: 0xffbf0018
    ctx->pc = 0x16b3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16b3d0: 0x240302d
    ctx->pc = 0x16b3d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b3d4: 0xc059f28
    ctx->pc = 0x16B3D4u;
    SET_GPR_U32(ctx, 31, 0x16B3DCu);
    ctx->pc = 0x16B3D8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->pc = 0x167CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167CA0_0x167ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B3DCu; }
    }
    if (ctx->pc != 0x16B3DCu) { return; }
    ctx->pc = 0x16B3DCu;
    // 0x16b3dc: 0x200202d
    ctx->pc = 0x16b3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b3e0: 0x8e250014
    ctx->pc = 0x16b3e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x16b3e4: 0xc059f28
    ctx->pc = 0x16B3E4u;
    SET_GPR_U32(ctx, 31, 0x16B3ECu);
    ctx->pc = 0x16B3E8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x167CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167CA0_0x167ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B3ECu; }
    }
    if (ctx->pc != 0x16B3ECu) { return; }
    ctx->pc = 0x16B3ECu;
    // 0x16b3ec: 0x200202d
    ctx->pc = 0x16b3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b3f0: 0x8e25001c
    ctx->pc = 0x16b3f0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x16b3f4: 0x240302d
    ctx->pc = 0x16b3f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b3f8: 0xdfb00000
    ctx->pc = 0x16b3f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b3fc: 0xdfb10008
    ctx->pc = 0x16b3fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b400: 0xdfb20010
    ctx->pc = 0x16b400u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b404: 0xdfbf0018
    ctx->pc = 0x16b404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16b408: 0x8059f28
    ctx->pc = 0x16B408u;
    ctx->pc = 0x16B40Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x167CA0u;
    sub_00167CA0_0x167ca0(rdram, ctx, runtime); return;
    ctx->pc = 0x16B410u;
}
