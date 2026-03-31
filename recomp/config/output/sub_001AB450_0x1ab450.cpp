#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AB450
// Address: 0x1ab450 - 0x1ab4f0
void sub_001AB450_0x1ab450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ab450u;

    // 0x1ab450: 0x27bdfed0
    ctx->pc = 0x1ab450u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1ab454: 0xa0302d
    ctx->pc = 0x1ab454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab458: 0xffbf0020
    ctx->pc = 0x1ab458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ab45c: 0x3c050025
    ctx->pc = 0x1ab45cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1ab460: 0x7fb10010
    ctx->pc = 0x1ab460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ab464: 0x24a5fd10
    ctx->pc = 0x1ab464u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294966544));
    // 0x1ab468: 0x80882d
    ctx->pc = 0x1ab468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab46c: 0x7fb00000
    ctx->pc = 0x1ab46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ab470: 0xc042a0c
    ctx->pc = 0x1AB470u;
    SET_GPR_U32(ctx, 31, 0x1AB478u);
    ctx->pc = 0x1AB474u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB478u; }
    }
    if (ctx->pc != 0x1AB478u) { return; }
    ctx->pc = 0x1AB478u;
    // 0x1ab478: 0xc06acbc
    ctx->pc = 0x1AB478u;
    SET_GPR_U32(ctx, 31, 0x1AB480u);
    ctx->pc = 0x1AB47Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1AB2F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB2F0_0x1ab2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB480u; }
    }
    if (ctx->pc != 0x1AB480u) { return; }
    ctx->pc = 0x1AB480u;
    // 0x1ab480: 0x4410003
    ctx->pc = 0x1AB480u;
    {
        const bool branch_taken_0x1ab480 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AB484u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x1ab480) {
            ctx->pc = 0x1AB490u;
            goto label_1ab490;
        }
    }
    ctx->pc = 0x1AB488u;
    // 0x1ab488: 0x10000012
    ctx->pc = 0x1AB488u;
    {
        const bool branch_taken_0x1ab488 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AB48Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ab488) {
            ctx->pc = 0x1AB4D4u;
            goto label_1ab4d4;
        }
    }
    ctx->pc = 0x1AB490u;
label_1ab490:
    // 0x1ab490: 0x40302d
    ctx->pc = 0x1ab490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab494: 0x8c234468
    ctx->pc = 0x1ab494u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 17512)));
    // 0x1ab498: 0x240210c0
    ctx->pc = 0x1ab498u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4288));
    // 0x1ab49c: 0x511018
    ctx->pc = 0x1ab49cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x1ab4a0: 0x26300005
    ctx->pc = 0x1ab4a0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 5));
    // 0x1ab4a4: 0x200202d
    ctx->pc = 0x1ab4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab4a8: 0x24050003
    ctx->pc = 0x1ab4a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ab4ac: 0xc04a1ce
    ctx->pc = 0x1AB4ACu;
    SET_GPR_U32(ctx, 31, 0x1AB4B4u);
    ctx->pc = 0x1AB4B0u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x128738u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00128738_0x128738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB4B4u; }
    }
    if (ctx->pc != 0x1AB4B4u) { return; }
    ctx->pc = 0x1AB4B4u;
label_1ab4b4:
    // 0x1ab4b4: 0xc04a2c6
    ctx->pc = 0x1AB4B4u;
    SET_GPR_U32(ctx, 31, 0x1AB4BCu);
    ctx->pc = 0x1AB4B8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128B18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00128B18_0x128b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB4BCu; }
    }
    if (ctx->pc != 0x1AB4BCu) { return; }
    ctx->pc = 0x1AB4BCu;
    // 0x1ab4bc: 0x24030003
    ctx->pc = 0x1ab4bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ab4c0: 0x0
    ctx->pc = 0x1ab4c0u;
    // NOP
    // 0x1ab4c4: 0x0
    ctx->pc = 0x1ab4c4u;
    // NOP
    // 0x1ab4c8: 0x1443fffa
    ctx->pc = 0x1AB4C8u;
    {
        const bool branch_taken_0x1ab4c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1ab4c8) {
            ctx->pc = 0x1AB4B4u;
            goto label_1ab4b4;
        }
    }
    ctx->pc = 0x1AB4D0u;
    // 0x1ab4d0: 0x24020001
    ctx->pc = 0x1ab4d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1ab4d4:
    // 0x1ab4d4: 0xdfbf0020
    ctx->pc = 0x1ab4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ab4d8: 0x7bb10010
    ctx->pc = 0x1ab4d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab4dc: 0x7bb00000
    ctx->pc = 0x1ab4dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab4e0: 0x3e00008
    ctx->pc = 0x1AB4E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB4E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AB490u: goto label_1ab490;
            case 0x1AB4B4u: goto label_1ab4b4;
            case 0x1AB4D4u: goto label_1ab4d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AB4E8u;
    // 0x1ab4e8: 0x0
    ctx->pc = 0x1ab4e8u;
    // NOP
    // 0x1ab4ec: 0x0
    ctx->pc = 0x1ab4ecu;
    // NOP
}
