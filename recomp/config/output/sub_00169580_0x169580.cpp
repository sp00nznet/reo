#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00169580
// Address: 0x169580 - 0x169638
void sub_00169580_0x169580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x169580u;

    // 0x169580: 0x27bdffe0
    ctx->pc = 0x169580u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x169584: 0x3c020018
    ctx->pc = 0x169584u;
    SET_GPR_U32(ctx, 2, ((uint32_t)24 << 16));
    // 0x169588: 0xffb00000
    ctx->pc = 0x169588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16958c: 0xa0802d
    ctx->pc = 0x16958cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169590: 0x24459a18
    ctx->pc = 0x169590u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294941208));
    // 0x169594: 0xffb10008
    ctx->pc = 0x169594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x169598: 0xffbf0010
    ctx->pc = 0x169598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16959c: 0xc05a638
    ctx->pc = 0x16959Cu;
    SET_GPR_U32(ctx, 31, 0x1695A4u);
    ctx->pc = 0x1695A0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1698E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001698E0_0x1698e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1695A4u; }
    }
    if (ctx->pc != 0x1695A4u) { return; }
    ctx->pc = 0x1695A4u;
    // 0x1695a4: 0x3c050018
    ctx->pc = 0x1695a4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)24 << 16));
    // 0x1695a8: 0xae020000
    ctx->pc = 0x1695a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1695ac: 0x220202d
    ctx->pc = 0x1695acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1695b0: 0xc05a638
    ctx->pc = 0x1695B0u;
    SET_GPR_U32(ctx, 31, 0x1695B8u);
    ctx->pc = 0x1695B4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941280));
    ctx->pc = 0x1698E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001698E0_0x1698e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1695B8u; }
    }
    if (ctx->pc != 0x1695B8u) { return; }
    ctx->pc = 0x1695B8u;
    // 0x1695b8: 0x3c050018
    ctx->pc = 0x1695b8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)24 << 16));
    // 0x1695bc: 0xae020004
    ctx->pc = 0x1695bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1695c0: 0x220202d
    ctx->pc = 0x1695c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1695c4: 0xc05a638
    ctx->pc = 0x1695C4u;
    SET_GPR_U32(ctx, 31, 0x1695CCu);
    ctx->pc = 0x1695C8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941352));
    ctx->pc = 0x1698E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001698E0_0x1698e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1695CCu; }
    }
    if (ctx->pc != 0x1695CCu) { return; }
    ctx->pc = 0x1695CCu;
    // 0x1695cc: 0x3c050018
    ctx->pc = 0x1695ccu;
    SET_GPR_U32(ctx, 5, ((uint32_t)24 << 16));
    // 0x1695d0: 0xae020008
    ctx->pc = 0x1695d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1695d4: 0x220202d
    ctx->pc = 0x1695d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1695d8: 0xc05a638
    ctx->pc = 0x1695D8u;
    SET_GPR_U32(ctx, 31, 0x1695E0u);
    ctx->pc = 0x1695DCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941424));
    ctx->pc = 0x1698E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001698E0_0x1698e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1695E0u; }
    }
    if (ctx->pc != 0x1695E0u) { return; }
    ctx->pc = 0x1695E0u;
    // 0x1695e0: 0x3c050018
    ctx->pc = 0x1695e0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)24 << 16));
    // 0x1695e4: 0xae02000c
    ctx->pc = 0x1695e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1695e8: 0x220202d
    ctx->pc = 0x1695e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1695ec: 0xc05a638
    ctx->pc = 0x1695ECu;
    SET_GPR_U32(ctx, 31, 0x1695F4u);
    ctx->pc = 0x1695F0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941600));
    ctx->pc = 0x1698E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001698E0_0x1698e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1695F4u; }
    }
    if (ctx->pc != 0x1695F4u) { return; }
    ctx->pc = 0x1695F4u;
    // 0x1695f4: 0x3c050018
    ctx->pc = 0x1695f4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)24 << 16));
    // 0x1695f8: 0xae020010
    ctx->pc = 0x1695f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1695fc: 0x220202d
    ctx->pc = 0x1695fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169600: 0xc05a638
    ctx->pc = 0x169600u;
    SET_GPR_U32(ctx, 31, 0x169608u);
    ctx->pc = 0x169604u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941672));
    ctx->pc = 0x1698E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001698E0_0x1698e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169608u; }
    }
    if (ctx->pc != 0x169608u) { return; }
    ctx->pc = 0x169608u;
    // 0x169608: 0x3c050018
    ctx->pc = 0x169608u;
    SET_GPR_U32(ctx, 5, ((uint32_t)24 << 16));
    // 0x16960c: 0xae020014
    ctx->pc = 0x16960cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x169610: 0x220202d
    ctx->pc = 0x169610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169614: 0xc05a638
    ctx->pc = 0x169614u;
    SET_GPR_U32(ctx, 31, 0x16961Cu);
    ctx->pc = 0x169618u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941744));
    ctx->pc = 0x1698E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001698E0_0x1698e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16961Cu; }
    }
    if (ctx->pc != 0x16961Cu) { return; }
    ctx->pc = 0x16961Cu;
    // 0x16961c: 0xae020018
    ctx->pc = 0x16961cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x169620: 0xdfb10008
    ctx->pc = 0x169620u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169624: 0xdfb00000
    ctx->pc = 0x169624u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169628: 0xdfbf0010
    ctx->pc = 0x169628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16962c: 0x3e00008
    ctx->pc = 0x16962Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169630u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169634u;
    // 0x169634: 0x0
    ctx->pc = 0x169634u;
    // NOP
}
