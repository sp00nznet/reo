#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016AFC8
// Address: 0x16afc8 - 0x16b040
void sub_0016AFC8_0x16afc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16afc8u;

    // 0x16afc8: 0x27bdffd0
    ctx->pc = 0x16afc8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16afcc: 0xffb00000
    ctx->pc = 0x16afccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16afd0: 0xffb10008
    ctx->pc = 0x16afd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16afd4: 0x80882d
    ctx->pc = 0x16afd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16afd8: 0xffb20010
    ctx->pc = 0x16afd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16afdc: 0xa0902d
    ctx->pc = 0x16afdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16afe0: 0xffb30018
    ctx->pc = 0x16afe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16afe4: 0xc0982d
    ctx->pc = 0x16afe4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16afe8: 0xffbf0020
    ctx->pc = 0x16afe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16afec: 0x26301ae4
    ctx->pc = 0x16afecu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 6884));
    // 0x16aff0: 0x240302d
    ctx->pc = 0x16aff0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aff4: 0xc059f38
    ctx->pc = 0x16AFF4u;
    SET_GPR_U32(ctx, 31, 0x16AFFCu);
    ctx->pc = 0x16AFF8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->pc = 0x167CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167CE0_0x167ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AFFCu; }
    }
    if (ctx->pc != 0x16AFFCu) { return; }
    ctx->pc = 0x16AFFCu;
    // 0x16affc: 0x220202d
    ctx->pc = 0x16affcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b000: 0x8e050014
    ctx->pc = 0x16b000u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x16b004: 0xc059f38
    ctx->pc = 0x16B004u;
    SET_GPR_U32(ctx, 31, 0x16B00Cu);
    ctx->pc = 0x16B008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x167CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167CE0_0x167ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B00Cu; }
    }
    if (ctx->pc != 0x16B00Cu) { return; }
    ctx->pc = 0x16B00Cu;
    // 0x16b00c: 0x220202d
    ctx->pc = 0x16b00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b010: 0x8e05001c
    ctx->pc = 0x16b010u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x16b014: 0xc059f38
    ctx->pc = 0x16B014u;
    SET_GPR_U32(ctx, 31, 0x16B01Cu);
    ctx->pc = 0x16B018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x167CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167CE0_0x167ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B01Cu; }
    }
    if (ctx->pc != 0x16B01Cu) { return; }
    ctx->pc = 0x16B01Cu;
    // 0x16b01c: 0x220202d
    ctx->pc = 0x16b01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b020: 0x260282d
    ctx->pc = 0x16b020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b024: 0xdfb30018
    ctx->pc = 0x16b024u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16b028: 0xdfb00000
    ctx->pc = 0x16b028u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b02c: 0xdfb10008
    ctx->pc = 0x16b02cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b030: 0xdfb20010
    ctx->pc = 0x16b030u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b034: 0xdfbf0020
    ctx->pc = 0x16b034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b038: 0x805c6e6
    ctx->pc = 0x16B038u;
    ctx->pc = 0x16B03Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x171B98u;
    entry_171b98_0x171be0(rdram, ctx, runtime); return;
    ctx->pc = 0x16B040u;
}
