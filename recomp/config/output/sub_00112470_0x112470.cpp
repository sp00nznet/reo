#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00112470
// Address: 0x112470 - 0x1124c8
void sub_00112470_0x112470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x112470u;

    // 0x112470: 0x27bdffc0
    ctx->pc = 0x112470u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x112474: 0xffa40020
    ctx->pc = 0x112474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x112478: 0x27a40020
    ctx->pc = 0x112478u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x11247c: 0xffbf0030
    ctx->pc = 0x11247cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x112480: 0xc044674
    ctx->pc = 0x112480u;
    SET_GPR_U32(ctx, 31, 0x112488u);
    ctx->pc = 0x112484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1119D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001119D0_0x1119d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112488u; }
    }
    if (ctx->pc != 0x112488u) { return; }
    ctx->pc = 0x112488u;
    // 0x112488: 0x3c053fff
    ctx->pc = 0x112488u;
    SET_GPR_U32(ctx, 5, ((uint32_t)16383 << 16));
    // 0x11248c: 0x34a5ffff
    ctx->pc = 0x11248cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x112490: 0xdfa20010
    ctx->pc = 0x112490u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112494: 0x8fa40000
    ctx->pc = 0x112494u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112498: 0x218b8
    ctx->pc = 0x112498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 2);
    // 0x11249c: 0x3183f
    ctx->pc = 0x11249cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1124a0: 0x451024
    ctx->pc = 0x1124a0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1124a4: 0x34670001
    ctx->pc = 0x1124a4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 3), 1));
    // 0x1124a8: 0x8fa60008
    ctx->pc = 0x1124a8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1124ac: 0x8fa50004
    ctx->pc = 0x1124acu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1124b0: 0xc044622
    ctx->pc = 0x1124B0u;
    SET_GPR_U32(ctx, 31, 0x1124B8u);
    ctx->pc = 0x1124B4u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 3));
    ctx->pc = 0x111888u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111888_0x111888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1124B8u; }
    }
    if (ctx->pc != 0x1124B8u) { return; }
    ctx->pc = 0x1124B8u;
    // 0x1124b8: 0xdfbf0030
    ctx->pc = 0x1124b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1124bc: 0x3e00008
    ctx->pc = 0x1124BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1124C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1124C4u;
    // 0x1124c4: 0x0
    ctx->pc = 0x1124c4u;
    // NOP
}
