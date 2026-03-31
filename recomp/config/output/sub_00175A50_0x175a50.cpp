#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00175A50
// Address: 0x175a50 - 0x175c50
void sub_00175A50_0x175a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x175a50u;

    // 0x175a50: 0x27bdffe0
    ctx->pc = 0x175a50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175a54: 0x3c020017
    ctx->pc = 0x175a54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
    // 0x175a58: 0xffb10008
    ctx->pc = 0x175a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x175a5c: 0xa0882d
    ctx->pc = 0x175a5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a60: 0x302d
    ctx->pc = 0x175a60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a64: 0x244564b0
    ctx->pc = 0x175a64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 25776));
    // 0x175a68: 0xffb00000
    ctx->pc = 0x175a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175a6c: 0xffbf0010
    ctx->pc = 0x175a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x175a70: 0xc05da6c
    ctx->pc = 0x175A70u;
    SET_GPR_U32(ctx, 31, 0x175A78u);
    ctx->pc = 0x175A74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1769B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001769B0_0x1769b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A78u; }
    }
    if (ctx->pc != 0x175A78u) { return; }
    ctx->pc = 0x175A78u;
    // 0x175a78: 0x3c050017
    ctx->pc = 0x175a78u;
    SET_GPR_U32(ctx, 5, ((uint32_t)23 << 16));
    // 0x175a7c: 0x24060001
    ctx->pc = 0x175a7cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x175a80: 0x24a564f8
    ctx->pc = 0x175a80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25848));
    // 0x175a84: 0xc05da6c
    ctx->pc = 0x175A84u;
    SET_GPR_U32(ctx, 31, 0x175A8Cu);
    ctx->pc = 0x175A88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1769B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001769B0_0x1769b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A8Cu; }
    }
    if (ctx->pc != 0x175A8Cu) { return; }
    ctx->pc = 0x175A8Cu;
    // 0x175a8c: 0x200202d
    ctx->pc = 0x175a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a90: 0x282d
    ctx->pc = 0x175a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a94: 0xc05da6c
    ctx->pc = 0x175A94u;
    SET_GPR_U32(ctx, 31, 0x175A9Cu);
    ctx->pc = 0x175A98u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1769B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001769B0_0x1769b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A9Cu; }
    }
    if (ctx->pc != 0x175A9Cu) { return; }
    ctx->pc = 0x175A9Cu;
    // 0x175a9c: 0x3c050017
    ctx->pc = 0x175a9cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)23 << 16));
    // 0x175aa0: 0x24a56558
    ctx->pc = 0x175aa0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25944));
    // 0x175aa4: 0x24060003
    ctx->pc = 0x175aa4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    // 0x175aa8: 0xc05da6c
    ctx->pc = 0x175AA8u;
    SET_GPR_U32(ctx, 31, 0x175AB0u);
    ctx->pc = 0x175AACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1769B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001769B0_0x1769b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175AB0u; }
    }
    if (ctx->pc != 0x175AB0u) { return; }
    ctx->pc = 0x175AB0u;
    // 0x175ab0: 0x200202d
    ctx->pc = 0x175ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175ab4: 0x282d
    ctx->pc = 0x175ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175ab8: 0xc05da6c
    ctx->pc = 0x175AB8u;
    SET_GPR_U32(ctx, 31, 0x175AC0u);
    ctx->pc = 0x175ABCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1769B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001769B0_0x1769b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175AC0u; }
    }
    if (ctx->pc != 0x175AC0u) { return; }
    ctx->pc = 0x175AC0u;
    // 0x175ac0: 0x3c050017
    ctx->pc = 0x175ac0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)23 << 16));
    // 0x175ac4: 0x24060005
    ctx->pc = 0x175ac4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5));
    // 0x175ac8: 0x200202d
    ctx->pc = 0x175ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175acc: 0xc05da6c
    ctx->pc = 0x175ACCu;
    SET_GPR_U32(ctx, 31, 0x175AD4u);
    ctx->pc = 0x175AD0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25976));
    ctx->pc = 0x1769B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001769B0_0x1769b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175AD4u; }
    }
    if (ctx->pc != 0x175AD4u) { return; }
    ctx->pc = 0x175AD4u;
    // 0x175ad4: 0xae200018
    ctx->pc = 0x175ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x175ad8: 0x26240094
    ctx->pc = 0x175ad8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 148));
    // 0x175adc: 0xc05d714
    ctx->pc = 0x175ADCu;
    SET_GPR_U32(ctx, 31, 0x175AE4u);
    ctx->pc = 0x175AE0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175C50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175C50_0x175c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175AE4u; }
    }
    if (ctx->pc != 0x175AE4u) { return; }
    ctx->pc = 0x175AE4u;
    // 0x175ae4: 0x2624001c
    ctx->pc = 0x175ae4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 28));
    // 0x175ae8: 0x3c057fff
    ctx->pc = 0x175ae8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32767 << 16));
    // 0x175aec: 0xc05d714
    ctx->pc = 0x175AECu;
    SET_GPR_U32(ctx, 31, 0x175AF4u);
    ctx->pc = 0x175AF0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    ctx->pc = 0x175C50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175C50_0x175c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175AF4u; }
    }
    if (ctx->pc != 0x175AF4u) { return; }
    ctx->pc = 0x175AF4u;
    // 0x175af4: 0x26240044
    ctx->pc = 0x175af4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 68));
    // 0x175af8: 0xc05d714
    ctx->pc = 0x175AF8u;
    SET_GPR_U32(ctx, 31, 0x175B00u);
    ctx->pc = 0x175AFCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x175C50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175C50_0x175c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175B00u; }
    }
    if (ctx->pc != 0x175B00u) { return; }
    ctx->pc = 0x175B00u;
    // 0x175b00: 0x2624006c
    ctx->pc = 0x175b00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 108));
    // 0x175b04: 0xc05d714
    ctx->pc = 0x175B04u;
    SET_GPR_U32(ctx, 31, 0x175B0Cu);
    ctx->pc = 0x175B08u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x175C50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175C50_0x175c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175B0Cu; }
    }
    if (ctx->pc != 0x175B0Cu) { return; }
    ctx->pc = 0x175B0Cu;
    // 0x175b0c: 0x262400bc
    ctx->pc = 0x175b0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 188));
    // 0x175b10: 0xc05d714
    ctx->pc = 0x175B10u;
    SET_GPR_U32(ctx, 31, 0x175B18u);
    ctx->pc = 0x175B14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x175C50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175C50_0x175c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175B18u; }
    }
    if (ctx->pc != 0x175B18u) { return; }
    ctx->pc = 0x175B18u;
    // 0x175b18: 0x262400e4
    ctx->pc = 0x175b18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 228));
    // 0x175b1c: 0x3c057fff
    ctx->pc = 0x175b1cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)32767 << 16));
    // 0x175b20: 0xc05d714
    ctx->pc = 0x175B20u;
    SET_GPR_U32(ctx, 31, 0x175B28u);
    ctx->pc = 0x175B24u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    ctx->pc = 0x175C50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175C50_0x175c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175B28u; }
    }
    if (ctx->pc != 0x175B28u) { return; }
    ctx->pc = 0x175B28u;
    // 0x175b28: 0xae20010c
    ctx->pc = 0x175b28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 0));
    // 0x175b2c: 0x2402ffff
    ctx->pc = 0x175b2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x175b30: 0xae200110
    ctx->pc = 0x175b30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 0));
    // 0x175b34: 0xae20011c
    ctx->pc = 0x175b34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 0));
    // 0x175b38: 0x26240008
    ctx->pc = 0x175b38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 8));
    // 0x175b3c: 0xae200120
    ctx->pc = 0x175b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 0));
    // 0x175b40: 0x2403001f
    ctx->pc = 0x175b40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 31));
    // 0x175b44: 0xae200124
    ctx->pc = 0x175b44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 0));
    // 0x175b48: 0xae220118
    ctx->pc = 0x175b48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 2));
    // 0x175b4c: 0xae220114
    ctx->pc = 0x175b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 2));
    // 0x175b50: 0x262201a4
    ctx->pc = 0x175b50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 420));
    // 0x175b54: 0x0
    ctx->pc = 0x175b54u;
    // NOP
label_175b58:
    // 0x175b58: 0x2463ffff
    ctx->pc = 0x175b58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x175b5c: 0xac400000
    ctx->pc = 0x175b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x175b60: 0x0
    ctx->pc = 0x175b60u;
    // NOP
    // 0x175b64: 0x0
    ctx->pc = 0x175b64u;
    // NOP
    // 0x175b68: 0x0
    ctx->pc = 0x175b68u;
    // NOP
    // 0x175b6c: 0x461fffa
    ctx->pc = 0x175B6Cu;
    {
        const bool branch_taken_0x175b6c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x175B70u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
        if (branch_taken_0x175b6c) {
            ctx->pc = 0x175B58u;
            goto label_175b58;
        }
    }
    ctx->pc = 0x175B74u;
    // 0x175b74: 0x24020001
    ctx->pc = 0x175b74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x175b78: 0xae2001ac
    ctx->pc = 0x175b78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 428), GPR_U32(ctx, 0));
    // 0x175b7c: 0xae2001b0
    ctx->pc = 0x175b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 432), GPR_U32(ctx, 0));
    // 0x175b80: 0x2403001f
    ctx->pc = 0x175b80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 31));
    // 0x175b84: 0xae2001b4
    ctx->pc = 0x175b84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 436), GPR_U32(ctx, 0));
    // 0x175b88: 0xae2201a8
    ctx->pc = 0x175b88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 424), GPR_U32(ctx, 2));
    // 0x175b8c: 0x2482022c
    ctx->pc = 0x175b8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 556));
label_175b90:
    // 0x175b90: 0x2463ffff
    ctx->pc = 0x175b90u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x175b94: 0xac400000
    ctx->pc = 0x175b94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x175b98: 0x0
    ctx->pc = 0x175b98u;
    // NOP
    // 0x175b9c: 0x0
    ctx->pc = 0x175b9cu;
    // NOP
    // 0x175ba0: 0x0
    ctx->pc = 0x175ba0u;
    // NOP
    // 0x175ba4: 0x461fffa
    ctx->pc = 0x175BA4u;
    {
        const bool branch_taken_0x175ba4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x175BA8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
        if (branch_taken_0x175ba4) {
            ctx->pc = 0x175B90u;
            goto label_175b90;
        }
    }
    ctx->pc = 0x175BACu;
    // 0x175bac: 0x2402ffff
    ctx->pc = 0x175bacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x175bb0: 0xae200264
    ctx->pc = 0x175bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 0));
    // 0x175bb4: 0xae220288
    ctx->pc = 0x175bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 648), GPR_U32(ctx, 2));
    // 0x175bb8: 0x2402fffb
    ctx->pc = 0x175bb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x175bbc: 0x3c01bf80
    ctx->pc = 0x175bbcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x175bc0: 0x44810000
    ctx->pc = 0x175bc0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x175bc4: 0x3c067fff
    ctx->pc = 0x175bc4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)32767 << 16));
    // 0x175bc8: 0x8e270264
    ctx->pc = 0x175bc8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x175bcc: 0x24030001
    ctx->pc = 0x175bccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x175bd0: 0x34c6ffff
    ctx->pc = 0x175bd0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
    // 0x175bd4: 0x240403e8
    ctx->pc = 0x175bd4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1000));
    // 0x175bd8: 0x24050064
    ctx->pc = 0x175bd8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 100));
    // 0x175bdc: 0xae220294
    ctx->pc = 0x175bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 660), GPR_U32(ctx, 2));
    // 0x175be0: 0xae26025c
    ctx->pc = 0x175be0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 604), GPR_U32(ctx, 6));
    // 0x175be4: 0xae200298
    ctx->pc = 0x175be4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 0));
    // 0x175be8: 0xae240268
    ctx->pc = 0x175be8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 616), GPR_U32(ctx, 4));
    // 0x175bec: 0xae250278
    ctx->pc = 0x175becu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 632), GPR_U32(ctx, 5));
    // 0x175bf0: 0xe6200284
    ctx->pc = 0x175bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 644), bits); }
    // 0x175bf4: 0xae27028c
    ctx->pc = 0x175bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 652), GPR_U32(ctx, 7));
    // 0x175bf8: 0xae23029c
    ctx->pc = 0x175bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 3));
    // 0x175bfc: 0xae220238
    ctx->pc = 0x175bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 568), GPR_U32(ctx, 2));
    // 0x175c00: 0xae23023c
    ctx->pc = 0x175c00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 3));
    // 0x175c04: 0xae220240
    ctx->pc = 0x175c04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 576), GPR_U32(ctx, 2));
    // 0x175c08: 0xae230244
    ctx->pc = 0x175c08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 580), GPR_U32(ctx, 3));
    // 0x175c0c: 0xae220248
    ctx->pc = 0x175c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
    // 0x175c10: 0xae23024c
    ctx->pc = 0x175c10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 3));
    // 0x175c14: 0xae220250
    ctx->pc = 0x175c14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    // 0x175c18: 0xae260254
    ctx->pc = 0x175c18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 6));
    // 0x175c1c: 0xae200258
    ctx->pc = 0x175c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 0));
    // 0x175c20: 0xae200260
    ctx->pc = 0x175c20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 0));
    // 0x175c24: 0xae20026c
    ctx->pc = 0x175c24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 620), GPR_U32(ctx, 0));
    // 0x175c28: 0xae200270
    ctx->pc = 0x175c28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 624), GPR_U32(ctx, 0));
    // 0x175c2c: 0xae230274
    ctx->pc = 0x175c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 3));
    // 0x175c30: 0xe620027c
    ctx->pc = 0x175c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 636), bits); }
    // 0x175c34: 0xae200280
    ctx->pc = 0x175c34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 640), GPR_U32(ctx, 0));
    // 0x175c38: 0xae200290
    ctx->pc = 0x175c38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 0));
    // 0x175c3c: 0xdfb00000
    ctx->pc = 0x175c3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175c40: 0xdfb10008
    ctx->pc = 0x175c40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175c44: 0xdfbf0010
    ctx->pc = 0x175c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175c48: 0x3e00008
    ctx->pc = 0x175C48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175C4Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175B58u: goto label_175b58;
            case 0x175B90u: goto label_175b90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x175C50u;
}
