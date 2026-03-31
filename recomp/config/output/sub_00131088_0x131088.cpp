#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00131088
// Address: 0x131088 - 0x131190
void sub_00131088_0x131088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x131088u;

    // 0x131088: 0x3c020022
    ctx->pc = 0x131088u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13108c: 0x27bdffe0
    ctx->pc = 0x13108cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x131090: 0x2442b720
    ctx->pc = 0x131090u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294948640));
    // 0x131094: 0xffb00000
    ctx->pc = 0x131094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x131098: 0xffb10008
    ctx->pc = 0x131098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13109c: 0x80882d
    ctx->pc = 0x13109cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1310a0: 0xffbf0010
    ctx->pc = 0x1310a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1310a4: 0x40202d
    ctx->pc = 0x1310a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1310a8: 0x80282d
    ctx->pc = 0x1310a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1310ac: 0xc041e86
    ctx->pc = 0x1310ACu;
    SET_GPR_U32(ctx, 31, 0x1310B4u);
    ctx->pc = 0x1310B0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 96));
    ctx->pc = 0x107A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107A18_0x107a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1310B4u; }
    }
    if (ctx->pc != 0x1310B4u) { return; }
    ctx->pc = 0x1310B4u;
    // 0x1310b4: 0x3c080022
    ctx->pc = 0x1310b4u;
    SET_GPR_U32(ctx, 8, ((uint32_t)34 << 16));
    // 0x1310b8: 0x3c040022
    ctx->pc = 0x1310b8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)34 << 16));
    // 0x1310bc: 0x3c070022
    ctx->pc = 0x1310bcu;
    SET_GPR_U32(ctx, 7, ((uint32_t)34 << 16));
    // 0x1310c0: 0x2484b730
    ctx->pc = 0x1310c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948656));
    // 0x1310c4: 0x3c030022
    ctx->pc = 0x1310c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x1310c8: 0x3c020022
    ctx->pc = 0x1310c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x1310cc: 0x2463b72e
    ctx->pc = 0x1310ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294948654));
    // 0x1310d0: 0x80282d
    ctx->pc = 0x1310d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1310d4: 0x240600e8
    ctx->pc = 0x1310d4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 232));
    // 0x1310d8: 0x2508b72c
    ctx->pc = 0x1310d8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294948652));
    // 0x1310dc: 0x24e7b72d
    ctx->pc = 0x1310dcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294948653));
    // 0x1310e0: 0x2442b72f
    ctx->pc = 0x1310e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294948655));
    // 0x1310e4: 0x91090000
    ctx->pc = 0x1310e4u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1310e8: 0x90ea0000
    ctx->pc = 0x1310e8u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1310ec: 0x3c100024
    ctx->pc = 0x1310ecu;
    SET_GPR_U32(ctx, 16, ((uint32_t)36 << 16));
    // 0x1310f0: 0x90680000
    ctx->pc = 0x1310f0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1310f4: 0x2610ae40
    ctx->pc = 0x1310f4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294946368));
    // 0x1310f8: 0xc041e86
    ctx->pc = 0x1310F8u;
    SET_GPR_U32(ctx, 31, 0x131100u);
    ctx->pc = 0x1310FCu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x107A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107A18_0x107a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131100u; }
    }
    if (ctx->pc != 0x131100u) { return; }
    ctx->pc = 0x131100u;
    // 0x131100: 0x3c040013
    ctx->pc = 0x131100u;
    SET_GPR_U32(ctx, 4, ((uint32_t)19 << 16));
    // 0x131104: 0x282d
    ctx->pc = 0x131104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131108: 0xc04daa0
    ctx->pc = 0x131108u;
    SET_GPR_U32(ctx, 31, 0x131110u);
    ctx->pc = 0x13110Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4208));
    ctx->pc = 0x136A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00136A80_0x136a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131110u; }
    }
    if (ctx->pc != 0x131110u) { return; }
    ctx->pc = 0x131110u;
    // 0x131110: 0x3c050014
    ctx->pc = 0x131110u;
    SET_GPR_U32(ctx, 5, ((uint32_t)20 << 16));
    // 0x131114: 0x24a595c8
    ctx->pc = 0x131114u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294940104));
    // 0x131118: 0x302d
    ctx->pc = 0x131118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13111c: 0xc04d4fe
    ctx->pc = 0x13111Cu;
    SET_GPR_U32(ctx, 31, 0x131124u);
    ctx->pc = 0x131120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1353F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001353F8_0x1353f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131124u; }
    }
    if (ctx->pc != 0x131124u) { return; }
    ctx->pc = 0x131124u;
    // 0x131124: 0xc04d5cc
    ctx->pc = 0x131124u;
    SET_GPR_U32(ctx, 31, 0x13112Cu);
    ctx->pc = 0x131128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x135730u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135730_0x135730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13112Cu; }
    }
    if (ctx->pc != 0x13112Cu) { return; }
    ctx->pc = 0x13112Cu;
    // 0x13112c: 0x202d
    ctx->pc = 0x13112cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131130: 0x282d
    ctx->pc = 0x131130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131134: 0x302d
    ctx->pc = 0x131134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131138: 0x1220000d
    ctx->pc = 0x131138u;
    {
        const bool branch_taken_0x131138 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x13113Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x131138) {
            ctx->pc = 0x131170u;
            goto label_131170;
        }
    }
    ctx->pc = 0x131140u;
    // 0x131140: 0x8e240008
    ctx->pc = 0x131140u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x131144: 0x8e25000c
    ctx->pc = 0x131144u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x131148: 0x8e260010
    ctx->pc = 0x131148u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x13114c: 0xc04eb7c
    ctx->pc = 0x13114Cu;
    SET_GPR_U32(ctx, 31, 0x131154u);
    ctx->pc = 0x131150u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x13ADF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131154u; }
    }
    if (ctx->pc != 0x131154u) { return; }
    ctx->pc = 0x131154u;
    // 0x131154: 0x8e240000
    ctx->pc = 0x131154u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x131158: 0xdfb00000
    ctx->pc = 0x131158u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13115c: 0xdfb10008
    ctx->pc = 0x13115cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x131160: 0xdfbf0010
    ctx->pc = 0x131160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131164: 0x804eb84
    ctx->pc = 0x131164u;
    ctx->pc = 0x131168u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x13AE10u;
    sub_0013AE10_0x13ae10(rdram, ctx, runtime); return;
    ctx->pc = 0x13116Cu;
    // 0x13116c: 0x0
    ctx->pc = 0x13116cu;
    // NOP
label_131170:
    // 0x131170: 0xc04eb7c
    ctx->pc = 0x131170u;
    SET_GPR_U32(ctx, 31, 0x131178u);
    ctx->pc = 0x13ADF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131178u; }
    }
    if (ctx->pc != 0x131178u) { return; }
    ctx->pc = 0x131178u;
    // 0x131178: 0x202d
    ctx->pc = 0x131178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13117c: 0xdfb00000
    ctx->pc = 0x13117cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131180: 0xdfb10008
    ctx->pc = 0x131180u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x131184: 0xdfbf0010
    ctx->pc = 0x131184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131188: 0x804eb84
    ctx->pc = 0x131188u;
    ctx->pc = 0x13118Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x13AE10u;
    sub_0013AE10_0x13ae10(rdram, ctx, runtime); return;
    ctx->pc = 0x131190u;
}
