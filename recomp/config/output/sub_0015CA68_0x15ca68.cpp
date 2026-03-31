#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015CA68
// Address: 0x15ca68 - 0x15cbc8
void sub_0015CA68_0x15ca68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15ca68u;

    // 0x15ca68: 0x27bdffd0
    ctx->pc = 0x15ca68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15ca6c: 0x24050008
    ctx->pc = 0x15ca6cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x15ca70: 0xffb00000
    ctx->pc = 0x15ca70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15ca74: 0xc0802d
    ctx->pc = 0x15ca74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ca78: 0xffb10008
    ctx->pc = 0x15ca78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15ca7c: 0xe0882d
    ctx->pc = 0x15ca7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ca80: 0xffb30018
    ctx->pc = 0x15ca80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x15ca84: 0x2118018
    ctx->pc = 0x15ca84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)(uint32_t)result); }
    // 0x15ca88: 0xffbf0020
    ctx->pc = 0x15ca88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15ca8c: 0x302d
    ctx->pc = 0x15ca8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ca90: 0xffb20010
    ctx->pc = 0x15ca90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15ca94: 0x8c920040
    ctx->pc = 0x15ca94u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x15ca98: 0xc05d4ce
    ctx->pc = 0x15CA98u;
    SET_GPR_U32(ctx, 31, 0x15CAA0u);
    ctx->pc = 0x15CA9Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175338u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175338_0x175338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CAA0u; }
    }
    if (ctx->pc != 0x15CAA0u) { return; }
    ctx->pc = 0x15CAA0u;
    // 0x15caa0: 0x240202d
    ctx->pc = 0x15caa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15caa4: 0x24050001
    ctx->pc = 0x15caa4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15caa8: 0xc05d4ce
    ctx->pc = 0x15CAA8u;
    SET_GPR_U32(ctx, 31, 0x15CAB0u);
    ctx->pc = 0x15CAACu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x175338u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175338_0x175338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CAB0u; }
    }
    if (ctx->pc != 0x15CAB0u) { return; }
    ctx->pc = 0x15CAB0u;
    // 0x15cab0: 0x240202d
    ctx->pc = 0x15cab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cab4: 0x282d
    ctx->pc = 0x15cab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cab8: 0xc05d4ce
    ctx->pc = 0x15CAB8u;
    SET_GPR_U32(ctx, 31, 0x15CAC0u);
    ctx->pc = 0x15CABCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175338u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175338_0x175338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CAC0u; }
    }
    if (ctx->pc != 0x15CAC0u) { return; }
    ctx->pc = 0x15CAC0u;
    // 0x15cac0: 0x240202d
    ctx->pc = 0x15cac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cac4: 0x24060004
    ctx->pc = 0x15cac4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x15cac8: 0xc05d4ce
    ctx->pc = 0x15CAC8u;
    SET_GPR_U32(ctx, 31, 0x15CAD0u);
    ctx->pc = 0x15CACCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 23));
    ctx->pc = 0x175338u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175338_0x175338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CAD0u; }
    }
    if (ctx->pc != 0x15CAD0u) { return; }
    ctx->pc = 0x15CAD0u;
    // 0x15cad0: 0x102140
    ctx->pc = 0x15cad0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 5));
    // 0x15cad4: 0x902023
    ctx->pc = 0x15cad4u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x15cad8: 0x42080
    ctx->pc = 0x15cad8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x15cadc: 0x902021
    ctx->pc = 0x15cadcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x15cae0: 0xc0448ba
    ctx->pc = 0x15CAE0u;
    SET_GPR_U32(ctx, 31, 0x15CAE8u);
    ctx->pc = 0x15CAE4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 3));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CAE8u; }
    }
    if (ctx->pc != 0x15CAE8u) { return; }
    ctx->pc = 0x15CAE8u;
    // 0x15cae8: 0x3405ff80
    ctx->pc = 0x15cae8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65408));
    // 0x15caec: 0x52bbc
    ctx->pc = 0x15caecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x15caf0: 0xc04473c
    ctx->pc = 0x15CAF0u;
    SET_GPR_U32(ctx, 31, 0x15CAF8u);
    ctx->pc = 0x15CAF4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CAF8u; }
    }
    if (ctx->pc != 0x15CAF8u) { return; }
    ctx->pc = 0x15CAF8u;
    // 0x15caf8: 0x40982d
    ctx->pc = 0x15caf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cafc: 0xc0448e8
    ctx->pc = 0x15CAFCu;
    SET_GPR_U32(ctx, 31, 0x15CB04u);
    ctx->pc = 0x15CB00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1123A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001123A0_0x1123a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CB04u; }
    }
    if (ctx->pc != 0x15CB04u) { return; }
    ctx->pc = 0x15CB04u;
    // 0x15cb04: 0x40802d
    ctx->pc = 0x15cb04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cb08: 0x200202d
    ctx->pc = 0x15cb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cb0c: 0xc0448ba
    ctx->pc = 0x15CB0Cu;
    SET_GPR_U32(ctx, 31, 0x15CB14u);
    ctx->pc = 0x15CB10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CB14u; }
    }
    if (ctx->pc != 0x15CB14u) { return; }
    ctx->pc = 0x15CB14u;
    // 0x15cb14: 0x260282d
    ctx->pc = 0x15cb14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cb18: 0x40202d
    ctx->pc = 0x15cb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cb1c: 0xc0448a6
    ctx->pc = 0x15CB1Cu;
    SET_GPR_U32(ctx, 31, 0x15CB24u);
    ctx->pc = 0x15CB20u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CB24u; }
    }
    if (ctx->pc != 0x15CB24u) { return; }
    ctx->pc = 0x15CB24u;
    // 0x15cb24: 0x2405002d
    ctx->pc = 0x15cb24u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 45));
    // 0x15cb28: 0x2102a
    ctx->pc = 0x15cb28u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 2)));
    // 0x15cb2c: 0x240202d
    ctx->pc = 0x15cb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cb30: 0x202880b
    ctx->pc = 0x15cb30u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 16));
    // 0x15cb34: 0xc05d4ce
    ctx->pc = 0x15CB34u;
    SET_GPR_U32(ctx, 31, 0x15CB3Cu);
    ctx->pc = 0x15CB38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175338u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175338_0x175338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CB3Cu; }
    }
    if (ctx->pc != 0x15CB3Cu) { return; }
    ctx->pc = 0x15CB3Cu;
    // 0x15cb3c: 0x240202d
    ctx->pc = 0x15cb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cb40: 0x220302d
    ctx->pc = 0x15cb40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cb44: 0xc05d4ce
    ctx->pc = 0x15CB44u;
    SET_GPR_U32(ctx, 31, 0x15CB4Cu);
    ctx->pc = 0x15CB48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 44));
    ctx->pc = 0x175338u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175338_0x175338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CB4Cu; }
    }
    if (ctx->pc != 0x15CB4Cu) { return; }
    ctx->pc = 0x15CB4Cu;
    // 0x15cb4c: 0x240202d
    ctx->pc = 0x15cb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cb50: 0x220302d
    ctx->pc = 0x15cb50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cb54: 0xc05d4ce
    ctx->pc = 0x15CB54u;
    SET_GPR_U32(ctx, 31, 0x15CB5Cu);
    ctx->pc = 0x15CB58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 42));
    ctx->pc = 0x175338u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175338_0x175338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CB5Cu; }
    }
    if (ctx->pc != 0x15CB5Cu) { return; }
    ctx->pc = 0x15CB5Cu;
    // 0x15cb5c: 0x240202d
    ctx->pc = 0x15cb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cb60: 0x2405000f
    ctx->pc = 0x15cb60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    // 0x15cb64: 0xc05d4ce
    ctx->pc = 0x15CB64u;
    SET_GPR_U32(ctx, 31, 0x15CB6Cu);
    ctx->pc = 0x15CB68u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x175338u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175338_0x175338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CB6Cu; }
    }
    if (ctx->pc != 0x15CB6Cu) { return; }
    ctx->pc = 0x15CB6Cu;
    // 0x15cb6c: 0x240202d
    ctx->pc = 0x15cb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cb70: 0x24050033
    ctx->pc = 0x15cb70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 51));
    // 0x15cb74: 0xc05d4ce
    ctx->pc = 0x15CB74u;
    SET_GPR_U32(ctx, 31, 0x15CB7Cu);
    ctx->pc = 0x15CB78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175338u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175338_0x175338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CB7Cu; }
    }
    if (ctx->pc != 0x15CB7Cu) { return; }
    ctx->pc = 0x15CB7Cu;
    // 0x15cb7c: 0x240202d
    ctx->pc = 0x15cb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cb80: 0x2405000e
    ctx->pc = 0x15cb80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 14));
    // 0x15cb84: 0xc05d4ce
    ctx->pc = 0x15CB84u;
    SET_GPR_U32(ctx, 31, 0x15CB8Cu);
    ctx->pc = 0x15CB88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175338u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175338_0x175338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CB8Cu; }
    }
    if (ctx->pc != 0x15CB8Cu) { return; }
    ctx->pc = 0x15CB8Cu;
    // 0x15cb8c: 0x240202d
    ctx->pc = 0x15cb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cb90: 0x2405001c
    ctx->pc = 0x15cb90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 28));
    // 0x15cb94: 0xc05d4ce
    ctx->pc = 0x15CB94u;
    SET_GPR_U32(ctx, 31, 0x15CB9Cu);
    ctx->pc = 0x15CB98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175338u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175338_0x175338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CB9Cu; }
    }
    if (ctx->pc != 0x15CB9Cu) { return; }
    ctx->pc = 0x15CB9Cu;
    // 0x15cb9c: 0x240202d
    ctx->pc = 0x15cb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cba0: 0xdfb00000
    ctx->pc = 0x15cba0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cba4: 0x24050005
    ctx->pc = 0x15cba4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x15cba8: 0xdfb10008
    ctx->pc = 0x15cba8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15cbac: 0x302d
    ctx->pc = 0x15cbacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cbb0: 0xdfb20010
    ctx->pc = 0x15cbb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15cbb4: 0xdfb30018
    ctx->pc = 0x15cbb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15cbb8: 0xdfbf0020
    ctx->pc = 0x15cbb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cbbc: 0x805afb2
    ctx->pc = 0x15CBBCu;
    ctx->pc = 0x15CBC0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x16BEC8u;
    entry_16bec8_0x16bf80(rdram, ctx, runtime); return;
    ctx->pc = 0x15CBC4u;
    // 0x15cbc4: 0x0
    ctx->pc = 0x15cbc4u;
    // NOP
}
