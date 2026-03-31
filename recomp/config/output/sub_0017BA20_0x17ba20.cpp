#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017BA20
// Address: 0x17ba20 - 0x17bae8
void sub_0017BA20_0x17ba20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17ba20u;

    // 0x17ba20: 0x27bdfff0
    ctx->pc = 0x17ba20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17ba24: 0xffbf0000
    ctx->pc = 0x17ba24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17ba28: 0xdfbf0000
    ctx->pc = 0x17ba28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ba2c: 0x805eedc
    ctx->pc = 0x17BA2Cu;
    ctx->pc = 0x17BA30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17BB70u;
    sub_0017BB70_0x17bb70(rdram, ctx, runtime); return;
    ctx->pc = 0x17BA34u;
    // 0x17ba34: 0x0
    ctx->pc = 0x17ba34u;
    // NOP
    // 0x17ba38: 0x27bdffc0
    ctx->pc = 0x17ba38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17ba3c: 0xffb00010
    ctx->pc = 0x17ba3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17ba40: 0xa0802d
    ctx->pc = 0x17ba40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ba44: 0xffb10018
    ctx->pc = 0x17ba44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17ba48: 0x3a0282d
    ctx->pc = 0x17ba48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ba4c: 0xffb30028
    ctx->pc = 0x17ba4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x17ba50: 0x80982d
    ctx->pc = 0x17ba50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ba54: 0xffb40030
    ctx->pc = 0x17ba54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x17ba58: 0xc0a02d
    ctx->pc = 0x17ba58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ba5c: 0xffbf0038
    ctx->pc = 0x17ba5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x17ba60: 0x27a60004
    ctx->pc = 0x17ba60u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
    // 0x17ba64: 0xffb20020
    ctx->pc = 0x17ba64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17ba68: 0xc05f49a
    ctx->pc = 0x17BA68u;
    SET_GPR_U32(ctx, 31, 0x17BA70u);
    ctx->pc = 0x17BA6Cu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->pc = 0x17D268u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D268_0x17d268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BA70u; }
    }
    if (ctx->pc != 0x17BA70u) { return; }
    ctx->pc = 0x17BA70u;
    // 0x17ba70: 0x8e020048
    ctx->pc = 0x17ba70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x17ba74: 0x200202d
    ctx->pc = 0x17ba74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ba78: 0x128fc2
    ctx->pc = 0x17ba78u;
    SET_GPR_U32(ctx, 17, SRL32(GPR_U32(ctx, 18), 31));
    // 0x17ba7c: 0x21fc2
    ctx->pc = 0x17ba7cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x17ba80: 0x2518821
    ctx->pc = 0x17ba80u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x17ba84: 0x431021
    ctx->pc = 0x17ba84u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17ba88: 0x118843
    ctx->pc = 0x17ba88u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
    // 0x17ba8c: 0x21043
    ctx->pc = 0x17ba8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x17ba90: 0x220282d
    ctx->pc = 0x17ba90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ba94: 0xc05f546
    ctx->pc = 0x17BA94u;
    SET_GPR_U32(ctx, 31, 0x17BA9Cu);
    ctx->pc = 0x17BA98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    ctx->pc = 0x17D518u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D518_0x17d518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BA9Cu; }
    }
    if (ctx->pc != 0x17BA9Cu) { return; }
    ctx->pc = 0x17BA9Cu;
    // 0x17ba9c: 0x260202d
    ctx->pc = 0x17ba9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17baa0: 0x280302d
    ctx->pc = 0x17baa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17baa4: 0xc05eedc
    ctx->pc = 0x17BAA4u;
    SET_GPR_U32(ctx, 31, 0x17BAACu);
    ctx->pc = 0x17BAA8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17BB70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017BB70_0x17bb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BAACu; }
    }
    if (ctx->pc != 0x17BAACu) { return; }
    ctx->pc = 0x17BAACu;
    // 0x17baac: 0x200202d
    ctx->pc = 0x17baacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bab0: 0xc05f546
    ctx->pc = 0x17BAB0u;
    SET_GPR_U32(ctx, 31, 0x17BAB8u);
    ctx->pc = 0x17BAB4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17D518u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D518_0x17d518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BAB8u; }
    }
    if (ctx->pc != 0x17BAB8u) { return; }
    ctx->pc = 0x17BAB8u;
    // 0x17bab8: 0x200202d
    ctx->pc = 0x17bab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17babc: 0xc05f524
    ctx->pc = 0x17BABCu;
    SET_GPR_U32(ctx, 31, 0x17BAC4u);
    ctx->pc = 0x17BAC0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17D490u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D490_0x17d490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BAC4u; }
    }
    if (ctx->pc != 0x17BAC4u) { return; }
    ctx->pc = 0x17BAC4u;
    // 0x17bac4: 0xdfb00010
    ctx->pc = 0x17bac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bac8: 0xdfb10018
    ctx->pc = 0x17bac8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17bacc: 0xdfb20020
    ctx->pc = 0x17baccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17bad0: 0xdfb30028
    ctx->pc = 0x17bad0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17bad4: 0xdfb40030
    ctx->pc = 0x17bad4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17bad8: 0xdfbf0038
    ctx->pc = 0x17bad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17badc: 0x3e00008
    ctx->pc = 0x17BADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BAE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17BAE4u;
    // 0x17bae4: 0x0
    ctx->pc = 0x17bae4u;
    // NOP
}
