#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00177990
// Address: 0x177990 - 0x177a30
void sub_00177990_0x177990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x177990u;

    // 0x177990: 0x27bdffe0
    ctx->pc = 0x177990u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x177994: 0x24060003
    ctx->pc = 0x177994u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    // 0x177998: 0xffb00000
    ctx->pc = 0x177998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17799c: 0xa0802d
    ctx->pc = 0x17799cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1779a0: 0xffb10008
    ctx->pc = 0x1779a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1779a4: 0x80882d
    ctx->pc = 0x1779a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1779a8: 0xffbf0010
    ctx->pc = 0x1779a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1779ac: 0xc05dec4
    ctx->pc = 0x1779ACu;
    SET_GPR_U32(ctx, 31, 0x1779B4u);
    ctx->pc = 0x1779B0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x177B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177B10_0x177b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1779B4u; }
    }
    if (ctx->pc != 0x1779B4u) { return; }
    ctx->pc = 0x1779B4u;
    // 0x1779b4: 0x220202d
    ctx->pc = 0x1779b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1779b8: 0x24050003
    ctx->pc = 0x1779b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1779bc: 0xc05de94
    ctx->pc = 0x1779BCu;
    SET_GPR_U32(ctx, 31, 0x1779C4u);
    ctx->pc = 0x1779C0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x177A50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177A50_0x177a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1779C4u; }
    }
    if (ctx->pc != 0x1779C4u) { return; }
    ctx->pc = 0x1779C4u;
    // 0x1779c4: 0x220202d
    ctx->pc = 0x1779c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1779c8: 0x8e020014
    ctx->pc = 0x1779c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1779cc: 0x24050004
    ctx->pc = 0x1779ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1779d0: 0x1040000f
    ctx->pc = 0x1779D0u;
    {
        const bool branch_taken_0x1779d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1779D4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x1779d0) {
            ctx->pc = 0x177A10u;
            goto label_177a10;
        }
    }
    ctx->pc = 0x1779D8u;
    // 0x1779d8: 0xc05dec4
    ctx->pc = 0x1779D8u;
    SET_GPR_U32(ctx, 31, 0x1779E0u);
    ctx->pc = 0x177B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177B10_0x177b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1779E0u; }
    }
    if (ctx->pc != 0x1779E0u) { return; }
    ctx->pc = 0x1779E0u;
    // 0x1779e0: 0x220202d
    ctx->pc = 0x1779e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1779e4: 0x24050005
    ctx->pc = 0x1779e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1779e8: 0xc05de94
    ctx->pc = 0x1779E8u;
    SET_GPR_U32(ctx, 31, 0x1779F0u);
    ctx->pc = 0x1779ECu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x177A50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177A50_0x177a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1779F0u; }
    }
    if (ctx->pc != 0x1779F0u) { return; }
    ctx->pc = 0x1779F0u;
    // 0x1779f0: 0x220202d
    ctx->pc = 0x1779f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1779f4: 0xdfb00000
    ctx->pc = 0x1779f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1779f8: 0x24050006
    ctx->pc = 0x1779f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1779fc: 0xdfb10008
    ctx->pc = 0x1779fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177a00: 0x24060007
    ctx->pc = 0x177a00u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    // 0x177a04: 0xdfbf0010
    ctx->pc = 0x177a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177a08: 0x805dec4
    ctx->pc = 0x177A08u;
    ctx->pc = 0x177A0Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x177B10u;
    sub_00177B10_0x177b10(rdram, ctx, runtime); return;
    ctx->pc = 0x177A10u;
label_177a10:
    // 0x177a10: 0xdfb10008
    ctx->pc = 0x177a10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177a14: 0xdfb00000
    ctx->pc = 0x177a14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177a18: 0x24050004
    ctx->pc = 0x177a18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x177a1c: 0xdfbf0010
    ctx->pc = 0x177a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177a20: 0x24060007
    ctx->pc = 0x177a20u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    // 0x177a24: 0x805dec4
    ctx->pc = 0x177A24u;
    ctx->pc = 0x177A28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x177B10u;
    sub_00177B10_0x177b10(rdram, ctx, runtime); return;
    ctx->pc = 0x177A2Cu;
    // 0x177a2c: 0x0
    ctx->pc = 0x177a2cu;
    // NOP
}
