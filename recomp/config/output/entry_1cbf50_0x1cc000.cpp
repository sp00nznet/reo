#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1cbf50
// Address: 0x1cbf50 - 0x1cc000
void entry_1cbf50_0x1cc000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cbf50u;

    // 0x1cbf50: 0x27bdfff0
    ctx->pc = 0x1cbf50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cbf54: 0x3c020034
    ctx->pc = 0x1cbf54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x1cbf58: 0xffbf0000
    ctx->pc = 0x1cbf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cbf5c: 0x3c010034
    ctx->pc = 0x1cbf5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1cbf60: 0xac20d9f0
    ctx->pc = 0x1cbf60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957552), GPR_U32(ctx, 0));
    // 0x1cbf64: 0x2442fa20
    ctx->pc = 0x1cbf64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965792));
    // 0x1cbf68: 0x3c010034
    ctx->pc = 0x1cbf68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1cbf6c: 0xac20d9f8
    ctx->pc = 0x1cbf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957560), GPR_U32(ctx, 0));
    // 0x1cbf70: 0x3c010023
    ctx->pc = 0x1cbf70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1cbf74: 0xac225ff0
    ctx->pc = 0x1cbf74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 24560), GPR_U32(ctx, 2));
    // 0x1cbf78: 0x3c010034
    ctx->pc = 0x1cbf78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1cbf7c: 0xac20da00
    ctx->pc = 0x1cbf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957568), GPR_U32(ctx, 0));
    // 0x1cbf80: 0x3c010034
    ctx->pc = 0x1cbf80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1cbf84: 0xc072f78
    ctx->pc = 0x1CBF84u;
    SET_GPR_U32(ctx, 31, 0x1CBF8Cu);
    ctx->pc = 0x1CBF88u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294965776), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1CBDE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBDE0_0x1cbde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBF8Cu; }
    }
    if (ctx->pc != 0x1CBF8Cu) { return; }
    ctx->pc = 0x1CBF8Cu;
    // 0x1cbf8c: 0x3c010034
    ctx->pc = 0x1cbf8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1cbf90: 0x3c06001d
    ctx->pc = 0x1cbf90u;
    SET_GPR_U32(ctx, 6, ((uint32_t)29 << 16));
    // 0x1cbf94: 0x8c24c7f0
    ctx->pc = 0x1cbf94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294952944)));
    // 0x1cbf98: 0x24050012
    ctx->pc = 0x1cbf98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 18));
    // 0x1cbf9c: 0xc076ad5
    ctx->pc = 0x1CBF9Cu;
    SET_GPR_U32(ctx, 31, 0x1CBFA4u);
    ctx->pc = 0x1CBFA0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294950400));
    ctx->pc = 0x1DAB54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001DAB54_0x1dab54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBFA4u; }
    }
    if (ctx->pc != 0x1CBFA4u) { return; }
    ctx->pc = 0x1CBFA4u;
    // 0x1cbfa4: 0x3c010034
    ctx->pc = 0x1cbfa4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1cbfa8: 0x3c06001d
    ctx->pc = 0x1cbfa8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)29 << 16));
    // 0x1cbfac: 0x8c24c7f0
    ctx->pc = 0x1cbfacu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294952944)));
    // 0x1cbfb0: 0x24050014
    ctx->pc = 0x1cbfb0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 20));
    // 0x1cbfb4: 0xc076ad5
    ctx->pc = 0x1CBFB4u;
    SET_GPR_U32(ctx, 31, 0x1CBFBCu);
    ctx->pc = 0x1CBFB8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294950560));
    ctx->pc = 0x1DAB54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001DAB54_0x1dab54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBFBCu; }
    }
    if (ctx->pc != 0x1CBFBCu) { return; }
    ctx->pc = 0x1CBFBCu;
    // 0x1cbfbc: 0x3c010034
    ctx->pc = 0x1cbfbcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1cbfc0: 0x3c06001d
    ctx->pc = 0x1cbfc0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)29 << 16));
    // 0x1cbfc4: 0x8c24c7f0
    ctx->pc = 0x1cbfc4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294952944)));
    // 0x1cbfc8: 0x24050013
    ctx->pc = 0x1cbfc8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 19));
    // 0x1cbfcc: 0xc076ad5
    ctx->pc = 0x1CBFCCu;
    SET_GPR_U32(ctx, 31, 0x1CBFD4u);
    ctx->pc = 0x1CBFD0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294950720));
    ctx->pc = 0x1DAB54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001DAB54_0x1dab54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBFD4u; }
    }
    if (ctx->pc != 0x1CBFD4u) { return; }
    ctx->pc = 0x1CBFD4u;
    // 0x1cbfd4: 0x3c010034
    ctx->pc = 0x1cbfd4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1cbfd8: 0x3c06001d
    ctx->pc = 0x1cbfd8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)29 << 16));
    // 0x1cbfdc: 0x8c24c7f0
    ctx->pc = 0x1cbfdcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294952944)));
    // 0x1cbfe0: 0x24050015
    ctx->pc = 0x1cbfe0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 21));
    // 0x1cbfe4: 0xc076ad5
    ctx->pc = 0x1CBFE4u;
    SET_GPR_U32(ctx, 31, 0x1CBFECu);
    ctx->pc = 0x1CBFE8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294950720));
    ctx->pc = 0x1DAB54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001DAB54_0x1dab54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBFECu; }
    }
    if (ctx->pc != 0x1CBFECu) { return; }
    ctx->pc = 0x1CBFECu;
    // 0x1cbfec: 0xc072f7c
    ctx->pc = 0x1CBFECu;
    SET_GPR_U32(ctx, 31, 0x1CBFF4u);
    ctx->pc = 0x1CBDF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBDF0_0x1cbdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBFF4u; }
    }
    if (ctx->pc != 0x1CBFF4u) { return; }
    ctx->pc = 0x1CBFF4u;
    // 0x1cbff4: 0xdfbf0000
    ctx->pc = 0x1cbff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cbff8: 0x3e00008
    ctx->pc = 0x1CBFF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBFFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CC000u;
}
