#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00164038
// Address: 0x164038 - 0x1640d8
void sub_00164038_0x164038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x164038u;

    // 0x164038: 0x3c020023
    ctx->pc = 0x164038u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x16403c: 0x27bdffe0
    ctx->pc = 0x16403cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x164040: 0x8c43de54
    ctx->pc = 0x164040u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958676)));
    // 0x164044: 0x102d
    ctx->pc = 0x164044u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164048: 0x24040001
    ctx->pc = 0x164048u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16404c: 0xffb00000
    ctx->pc = 0x16404cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x164050: 0xffb10008
    ctx->pc = 0x164050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x164054: 0x1464001b
    ctx->pc = 0x164054u;
    {
        const bool branch_taken_0x164054 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x164058u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x164054) {
            ctx->pc = 0x1640C4u;
            goto label_1640c4;
        }
    }
    ctx->pc = 0x16405Cu;
    // 0x16405c: 0xc05799e
    ctx->pc = 0x16405Cu;
    SET_GPR_U32(ctx, 31, 0x164064u);
    ctx->pc = 0x15E678u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E678_0x15e678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164064u; }
    }
    if (ctx->pc != 0x164064u) { return; }
    ctx->pc = 0x164064u;
    // 0x164064: 0x40802d
    ctx->pc = 0x164064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164068: 0xc058dce
    ctx->pc = 0x164068u;
    SET_GPR_U32(ctx, 31, 0x164070u);
    ctx->pc = 0x16406Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 84));
    ctx->pc = 0x163738u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163738_0x163738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164070u; }
    }
    if (ctx->pc != 0x164070u) { return; }
    ctx->pc = 0x164070u;
    // 0x164070: 0x50400015
    ctx->pc = 0x164070u;
    {
        const bool branch_taken_0x164070 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x164070) {
            ctx->pc = 0x164074u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x1640C8u;
            goto label_1640c8;
        }
    }
    ctx->pc = 0x164078u;
    // 0x164078: 0xc058ff6
    ctx->pc = 0x164078u;
    SET_GPR_U32(ctx, 31, 0x164080u);
    ctx->pc = 0x16407Cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 104));
    ctx->pc = 0x163FD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163FD8_0x163fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164080u; }
    }
    if (ctx->pc != 0x164080u) { return; }
    ctx->pc = 0x164080u;
    // 0x164080: 0x24110007
    ctx->pc = 0x164080u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 7));
    // 0x164084: 0x0
    ctx->pc = 0x164084u;
    // NOP
label_164088:
    // 0x164088: 0x52000004
    ctx->pc = 0x164088u;
    {
        const bool branch_taken_0x164088 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x164088) {
            ctx->pc = 0x16408Cu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->pc = 0x16409Cu;
            goto label_16409c;
        }
    }
    ctx->pc = 0x164090u;
    // 0x164090: 0xc059036
    ctx->pc = 0x164090u;
    SET_GPR_U32(ctx, 31, 0x164098u);
    ctx->pc = 0x164094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1640D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001640D8_0x1640d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164098u; }
    }
    if (ctx->pc != 0x164098u) { return; }
    ctx->pc = 0x164098u;
    // 0x164098: 0x2631ffff
    ctx->pc = 0x164098u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_16409c:
    // 0x16409c: 0x621fffa
    ctx->pc = 0x16409Cu;
    {
        const bool branch_taken_0x16409c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1640A0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 528));
        if (branch_taken_0x16409c) {
            ctx->pc = 0x164088u;
            goto label_164088;
        }
    }
    ctx->pc = 0x1640A4u;
    // 0x1640a4: 0xc05909c
    ctx->pc = 0x1640A4u;
    SET_GPR_U32(ctx, 31, 0x1640ACu);
    ctx->pc = 0x1640A8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x164270u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00164270_0x164270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1640ACu; }
    }
    if (ctx->pc != 0x1640ACu) { return; }
    ctx->pc = 0x1640ACu;
    // 0x1640ac: 0xc05c932
    ctx->pc = 0x1640ACu;
    SET_GPR_U32(ctx, 31, 0x1640B4u);
    ctx->pc = 0x1724C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001724C8_0x1724c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1640B4u; }
    }
    if (ctx->pc != 0x1640B4u) { return; }
    ctx->pc = 0x1640B4u;
    // 0x1640b4: 0xc059002
    ctx->pc = 0x1640B4u;
    SET_GPR_U32(ctx, 31, 0x1640BCu);
    ctx->pc = 0x1640B8u;
    SET_GPR_U32(ctx, 16, XOR32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x164008u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00164008_0x164008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1640BCu; }
    }
    if (ctx->pc != 0x1640BCu) { return; }
    ctx->pc = 0x1640BCu;
    // 0x1640bc: 0x10802b
    ctx->pc = 0x1640bcu;
    SET_GPR_U32(ctx, 16, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x1640c0: 0x200102d
    ctx->pc = 0x1640c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1640c4:
    // 0x1640c4: 0xdfb00000
    ctx->pc = 0x1640c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1640c8:
    // 0x1640c8: 0xdfb10008
    ctx->pc = 0x1640c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1640cc: 0xdfbf0010
    ctx->pc = 0x1640ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1640d0: 0x3e00008
    ctx->pc = 0x1640D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1640D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x164088u: goto label_164088;
            case 0x16409Cu: goto label_16409c;
            case 0x1640C4u: goto label_1640c4;
            case 0x1640C8u: goto label_1640c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1640D8u;
}
