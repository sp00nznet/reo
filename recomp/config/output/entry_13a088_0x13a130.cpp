#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_13a088
// Address: 0x13a088 - 0x13a130
void entry_13a088_0x13a130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13a088u;

    // 0x13a088: 0x27bdffb0
    ctx->pc = 0x13a088u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13a08c: 0x3a0282d
    ctx->pc = 0x13a08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a090: 0xffb00030
    ctx->pc = 0x13a090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x13a094: 0xffb10038
    ctx->pc = 0x13a094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x13a098: 0xffbf0040
    ctx->pc = 0x13a098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13a09c: 0xc04ea80
    ctx->pc = 0x13A09Cu;
    SET_GPR_U32(ctx, 31, 0x13A0A4u);
    ctx->pc = 0x13A0A0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13AA00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013AA00_0x13aa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A0A4u; }
    }
    if (ctx->pc != 0x13A0A4u) { return; }
    ctx->pc = 0x13A0A4u;
    // 0x13a0a4: 0x8fa20004
    ctx->pc = 0x13a0a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x13a0a8: 0x3c030022
    ctx->pc = 0x13a0a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x13a0ac: 0x2471d7a0
    ctx->pc = 0x13a0acu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 4294956960));
    // 0x13a0b0: 0x200202d
    ctx->pc = 0x13a0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a0b4: 0x14400019
    ctx->pc = 0x13A0B4u;
    {
        const bool branch_taken_0x13a0b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13A0B8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13a0b4) {
            ctx->pc = 0x13A11Cu;
            goto label_13a11c;
        }
    }
    ctx->pc = 0x13A0BCu;
    // 0x13a0bc: 0xc04e892
    ctx->pc = 0x13A0BCu;
    SET_GPR_U32(ctx, 31, 0x13A0C4u);
    ctx->pc = 0x13A248u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A248_0x13a248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A0C4u; }
    }
    if (ctx->pc != 0x13A0C4u) { return; }
    ctx->pc = 0x13A0C4u;
    // 0x13a0c4: 0xc04e082
    ctx->pc = 0x13A0C4u;
    SET_GPR_U32(ctx, 31, 0x13A0CCu);
    ctx->pc = 0x13A0C8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 33792));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A0CCu; }
    }
    if (ctx->pc != 0x13A0CCu) { return; }
    ctx->pc = 0x13A0CCu;
    // 0x13a0cc: 0xc04035e
    ctx->pc = 0x13A0CCu;
    SET_GPR_U32(ctx, 31, 0x13A0D4u);
    ctx->pc = 0x13A0D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x100D78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00100D78_0x100d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A0D4u; }
    }
    if (ctx->pc != 0x13A0D4u) { return; }
    ctx->pc = 0x13A0D4u;
    // 0x13a0d4: 0xc04e082
    ctx->pc = 0x13A0D4u;
    SET_GPR_U32(ctx, 31, 0x13A0DCu);
    ctx->pc = 0x13A0D8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 33793));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A0DCu; }
    }
    if (ctx->pc != 0x13A0DCu) { return; }
    ctx->pc = 0x13A0DCu;
    // 0x13a0dc: 0x220282d
    ctx->pc = 0x13a0dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a0e0: 0xc04e58a
    ctx->pc = 0x13A0E0u;
    SET_GPR_U32(ctx, 31, 0x13A0E8u);
    ctx->pc = 0x13A0E4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x139628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00139628_0x139628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A0E8u; }
    }
    if (ctx->pc != 0x13A0E8u) { return; }
    ctx->pc = 0x13A0E8u;
    // 0x13a0e8: 0x1440000b
    ctx->pc = 0x13A0E8u;
    {
        const bool branch_taken_0x13a0e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13A0ECu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x13a0e8) {
            ctx->pc = 0x13A118u;
            goto label_13a118;
        }
    }
    ctx->pc = 0x13A0F0u;
    // 0x13a0f0: 0x3c020022
    ctx->pc = 0x13a0f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13a0f4: 0x8c43d8e8
    ctx->pc = 0x13a0f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294957288)));
    // 0x13a0f8: 0x10640004
    ctx->pc = 0x13A0F8u;
    {
        const bool branch_taken_0x13a0f8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x13A0FCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13a0f8) {
            ctx->pc = 0x13A10Cu;
            goto label_13a10c;
        }
    }
    ctx->pc = 0x13A100u;
    // 0x13a100: 0x3c040024
    ctx->pc = 0x13a100u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13a104: 0xc045a12
    ctx->pc = 0x13A104u;
    SET_GPR_U32(ctx, 31, 0x13A10Cu);
    ctx->pc = 0x13A108u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953656));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A10Cu; }
    }
    if (ctx->pc != 0x13A10Cu) { return; }
    ctx->pc = 0x13A10Cu;
label_13a10c:
    // 0x13a10c: 0x10000003
    ctx->pc = 0x13A10Cu;
    {
        const bool branch_taken_0x13a10c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13A110u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13a10c) {
            ctx->pc = 0x13A11Cu;
            goto label_13a11c;
        }
    }
    ctx->pc = 0x13A114u;
    // 0x13a114: 0x0
    ctx->pc = 0x13a114u;
    // NOP
label_13a118:
    // 0x13a118: 0x8fa20004
    ctx->pc = 0x13a118u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_13a11c:
    // 0x13a11c: 0xdfb00030
    ctx->pc = 0x13a11cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13a120: 0xdfb10038
    ctx->pc = 0x13a120u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13a124: 0xdfbf0040
    ctx->pc = 0x13a124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13a128: 0x3e00008
    ctx->pc = 0x13A128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A12Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13A10Cu: goto label_13a10c;
            case 0x13A118u: goto label_13a118;
            case 0x13A11Cu: goto label_13a11c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13A130u;
}
