#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CF9D0
// Address: 0x1cf9d0 - 0x1cfaa0
void sub_001CF9D0_0x1cf9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cf9d0u;

    // 0x1cf9d0: 0x27bdfeb0
    ctx->pc = 0x1cf9d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1cf9d4: 0xffbf0040
    ctx->pc = 0x1cf9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1cf9d8: 0x7fb30030
    ctx->pc = 0x1cf9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1cf9dc: 0x7fb20020
    ctx->pc = 0x1cf9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cf9e0: 0x80982d
    ctx->pc = 0x1cf9e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf9e4: 0x7fb10010
    ctx->pc = 0x1cf9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cf9e8: 0xa0902d
    ctx->pc = 0x1cf9e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf9ec: 0x30d100ff
    ctx->pc = 0x1cf9ecu;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 6), 255));
    // 0x1cf9f0: 0x7fb00000
    ctx->pc = 0x1cf9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cf9f4: 0xc073e24
    ctx->pc = 0x1CF9F4u;
    SET_GPR_U32(ctx, 31, 0x1CF9FCu);
    ctx->pc = 0x1CF9F8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CF890u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CF890_0x1cf890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF9FCu; }
    }
    if (ctx->pc != 0x1CF9FCu) { return; }
    ctx->pc = 0x1CF9FCu;
    // 0x1cf9fc: 0x14400020
    ctx->pc = 0x1CF9FCu;
    {
        const bool branch_taken_0x1cf9fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1cf9fc) {
            ctx->pc = 0x1CFA80u;
            goto label_1cfa80;
        }
    }
    ctx->pc = 0x1CFA04u;
    // 0x1cfa04: 0xc073e10
    ctx->pc = 0x1CFA04u;
    SET_GPR_U32(ctx, 31, 0x1CFA0Cu);
    ctx->pc = 0x1CF840u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CF840_0x1cf840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFA0Cu; }
    }
    if (ctx->pc != 0x1CFA0Cu) { return; }
    ctx->pc = 0x1CFA0Cu;
    // 0x1cfa0c: 0x40802d
    ctx->pc = 0x1cfa0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfa10: 0x1200001b
    ctx->pc = 0x1CFA10u;
    {
        const bool branch_taken_0x1cfa10 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CFA14u;
        SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
        if (branch_taken_0x1cfa10) {
            ctx->pc = 0x1CFA80u;
            goto label_1cfa80;
        }
    }
    ctx->pc = 0x1CFA18u;
    // 0x1cfa18: 0x3c060025
    ctx->pc = 0x1cfa18u;
    SET_GPR_U32(ctx, 6, ((uint32_t)37 << 16));
    // 0x1cfa1c: 0x220402d
    ctx->pc = 0x1cfa1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfa20: 0x3267ffff
    ctx->pc = 0x1cfa20u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 19), 65535));
    // 0x1cfa24: 0x27a40050
    ctx->pc = 0x1cfa24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1cfa28: 0x24a56180
    ctx->pc = 0x1cfa28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 24960));
    // 0x1cfa2c: 0xc042a0c
    ctx->pc = 0x1CFA2Cu;
    SET_GPR_U32(ctx, 31, 0x1CFA34u);
    ctx->pc = 0x1CFA30u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 24992));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFA34u; }
    }
    if (ctx->pc != 0x1CFA34u) { return; }
    ctx->pc = 0x1CFA34u;
    // 0x1cfa34: 0x3c010034
    ctx->pc = 0x1cfa34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1cfa38: 0x27a40053
    ctx->pc = 0x1cfa38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 83));
    // 0x1cfa3c: 0x8c250ae0
    ctx->pc = 0x1cfa3cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 2784)));
    // 0x1cfa40: 0x24060001
    ctx->pc = 0x1cfa40u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfa44: 0xc07323c
    ctx->pc = 0x1CFA44u;
    SET_GPR_U32(ctx, 31, 0x1CFA4Cu);
    ctx->pc = 0x1CFA48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CC8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8F0_0x1cc8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFA4Cu; }
    }
    if (ctx->pc != 0x1CFA4Cu) { return; }
    ctx->pc = 0x1CFA4Cu;
    // 0x1cfa4c: 0x40302d
    ctx->pc = 0x1cfa4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfa50: 0x18c0000b
    ctx->pc = 0x1CFA50u;
    {
        const bool branch_taken_0x1cfa50 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1CFA54u;
        SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
        if (branch_taken_0x1cfa50) {
            ctx->pc = 0x1CFA80u;
            goto label_1cfa80;
        }
    }
    ctx->pc = 0x1CFA58u;
    // 0x1cfa58: 0x8e050004
    ctx->pc = 0x1cfa58u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cfa5c: 0x8c240ae0
    ctx->pc = 0x1cfa5cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 2784)));
    // 0x1cfa60: 0x240700c8
    ctx->pc = 0x1cfa60u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 200));
    // 0x1cfa64: 0xc074658
    ctx->pc = 0x1CFA64u;
    SET_GPR_U32(ctx, 31, 0x1CFA6Cu);
    ctx->pc = 0x1CFA68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D1960u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1960_0x1d1960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFA6Cu; }
    }
    if (ctx->pc != 0x1CFA6Cu) { return; }
    ctx->pc = 0x1CFA6Cu;
    // 0x1cfa6c: 0x24030001
    ctx->pc = 0x1cfa6cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfa70: 0xa2030000
    ctx->pc = 0x1cfa70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cfa74: 0xa6120002
    ctx->pc = 0x1cfa74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 18));
    // 0x1cfa78: 0xa6130008
    ctx->pc = 0x1cfa78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 19));
    // 0x1cfa7c: 0xa611000c
    ctx->pc = 0x1cfa7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 17));
label_1cfa80:
    // 0x1cfa80: 0xdfbf0040
    ctx->pc = 0x1cfa80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cfa84: 0x7bb30030
    ctx->pc = 0x1cfa84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cfa88: 0x7bb20020
    ctx->pc = 0x1cfa88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cfa8c: 0x7bb10010
    ctx->pc = 0x1cfa8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cfa90: 0x7bb00000
    ctx->pc = 0x1cfa90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfa94: 0x3e00008
    ctx->pc = 0x1CFA94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFA98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CFA80u: goto label_1cfa80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CFA9Cu;
    // 0x1cfa9c: 0x0
    ctx->pc = 0x1cfa9cu;
    // NOP
}
