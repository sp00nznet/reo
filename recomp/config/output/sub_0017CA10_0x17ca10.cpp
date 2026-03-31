#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017CA10
// Address: 0x17ca10 - 0x17cb10
void sub_0017CA10_0x17ca10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17ca10u;

    // 0x17ca10: 0x27bdfff0
    ctx->pc = 0x17ca10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17ca14: 0xffbf0000
    ctx->pc = 0x17ca14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17ca18: 0xdfbf0000
    ctx->pc = 0x17ca18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ca1c: 0x805f2c4
    ctx->pc = 0x17CA1Cu;
    ctx->pc = 0x17CA20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17CB10u;
    sub_0017CB10_0x17cb10(rdram, ctx, runtime); return;
    ctx->pc = 0x17CA24u;
    // 0x17ca24: 0x0
    ctx->pc = 0x17ca24u;
    // NOP
    // 0x17ca28: 0x27bdffc0
    ctx->pc = 0x17ca28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17ca2c: 0xffb00010
    ctx->pc = 0x17ca2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17ca30: 0xa0802d
    ctx->pc = 0x17ca30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca34: 0xffb10018
    ctx->pc = 0x17ca34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17ca38: 0x3a0282d
    ctx->pc = 0x17ca38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca3c: 0xffb30028
    ctx->pc = 0x17ca3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x17ca40: 0x80982d
    ctx->pc = 0x17ca40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca44: 0xffb40030
    ctx->pc = 0x17ca44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x17ca48: 0xc0a02d
    ctx->pc = 0x17ca48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca4c: 0xffbf0038
    ctx->pc = 0x17ca4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x17ca50: 0x27a60004
    ctx->pc = 0x17ca50u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
    // 0x17ca54: 0xffb20020
    ctx->pc = 0x17ca54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17ca58: 0xc05f49a
    ctx->pc = 0x17CA58u;
    SET_GPR_U32(ctx, 31, 0x17CA60u);
    ctx->pc = 0x17CA5Cu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->pc = 0x17D268u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D268_0x17d268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CA60u; }
    }
    if (ctx->pc != 0x17CA60u) { return; }
    ctx->pc = 0x17CA60u;
    // 0x17ca60: 0x8fa50000
    ctx->pc = 0x17ca60u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ca64: 0x260202d
    ctx->pc = 0x17ca64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca68: 0x240302d
    ctx->pc = 0x17ca68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca6c: 0x128fc2
    ctx->pc = 0x17ca6cu;
    SET_GPR_U32(ctx, 17, SRL32(GPR_U32(ctx, 18), 31));
    // 0x17ca70: 0x52840
    ctx->pc = 0x17ca70u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    // 0x17ca74: 0xc05f496
    ctx->pc = 0x17CA74u;
    SET_GPR_U32(ctx, 31, 0x17CA7Cu);
    ctx->pc = 0x17CA78u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    ctx->pc = 0x17D258u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D258_0x17d258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CA7Cu; }
    }
    if (ctx->pc != 0x17CA7Cu) { return; }
    ctx->pc = 0x17CA7Cu;
    // 0x17ca7c: 0x8e020048
    ctx->pc = 0x17ca7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x17ca80: 0x118843
    ctx->pc = 0x17ca80u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
    // 0x17ca84: 0x200202d
    ctx->pc = 0x17ca84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca88: 0x21fc2
    ctx->pc = 0x17ca88u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x17ca8c: 0x220282d
    ctx->pc = 0x17ca8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca90: 0x431021
    ctx->pc = 0x17ca90u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17ca94: 0x21043
    ctx->pc = 0x17ca94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x17ca98: 0xc05f546
    ctx->pc = 0x17CA98u;
    SET_GPR_U32(ctx, 31, 0x17CAA0u);
    ctx->pc = 0x17CA9Cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    ctx->pc = 0x17D518u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D518_0x17d518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CAA0u; }
    }
    if (ctx->pc != 0x17CAA0u) { return; }
    ctx->pc = 0x17CAA0u;
    // 0x17caa0: 0x260202d
    ctx->pc = 0x17caa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17caa4: 0x200282d
    ctx->pc = 0x17caa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17caa8: 0xc05f2c4
    ctx->pc = 0x17CAA8u;
    SET_GPR_U32(ctx, 31, 0x17CAB0u);
    ctx->pc = 0x17CAACu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17CB10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CB10_0x17cb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CAB0u; }
    }
    if (ctx->pc != 0x17CAB0u) { return; }
    ctx->pc = 0x17CAB0u;
    // 0x17cab0: 0x260202d
    ctx->pc = 0x17cab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cab4: 0x8fa50000
    ctx->pc = 0x17cab4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17cab8: 0x240302d
    ctx->pc = 0x17cab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cabc: 0xc05f496
    ctx->pc = 0x17CABCu;
    SET_GPR_U32(ctx, 31, 0x17CAC4u);
    ctx->pc = 0x17CAC0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x17D258u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D258_0x17d258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CAC4u; }
    }
    if (ctx->pc != 0x17CAC4u) { return; }
    ctx->pc = 0x17CAC4u;
    // 0x17cac4: 0x200202d
    ctx->pc = 0x17cac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cac8: 0xc05f546
    ctx->pc = 0x17CAC8u;
    SET_GPR_U32(ctx, 31, 0x17CAD0u);
    ctx->pc = 0x17CACCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17D518u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D518_0x17d518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CAD0u; }
    }
    if (ctx->pc != 0x17CAD0u) { return; }
    ctx->pc = 0x17CAD0u;
    // 0x17cad0: 0x200202d
    ctx->pc = 0x17cad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cad4: 0xc05f524
    ctx->pc = 0x17CAD4u;
    SET_GPR_U32(ctx, 31, 0x17CADCu);
    ctx->pc = 0x17CAD8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17D490u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D490_0x17d490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CADCu; }
    }
    if (ctx->pc != 0x17CADCu) { return; }
    ctx->pc = 0x17CADCu;
    // 0x17cadc: 0x260202d
    ctx->pc = 0x17cadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cae0: 0x8fa60000
    ctx->pc = 0x17cae0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17cae4: 0x200282d
    ctx->pc = 0x17cae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cae8: 0xc05f2c4
    ctx->pc = 0x17CAE8u;
    SET_GPR_U32(ctx, 31, 0x17CAF0u);
    ctx->pc = 0x17CAECu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    ctx->pc = 0x17CB10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CB10_0x17cb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CAF0u; }
    }
    if (ctx->pc != 0x17CAF0u) { return; }
    ctx->pc = 0x17CAF0u;
    // 0x17caf0: 0xdfb00010
    ctx->pc = 0x17caf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17caf4: 0xdfb10018
    ctx->pc = 0x17caf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17caf8: 0xdfb20020
    ctx->pc = 0x17caf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17cafc: 0xdfb30028
    ctx->pc = 0x17cafcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17cb00: 0xdfb40030
    ctx->pc = 0x17cb00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17cb04: 0xdfbf0038
    ctx->pc = 0x17cb04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17cb08: 0x3e00008
    ctx->pc = 0x17CB08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CB0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17CB10u;
}
