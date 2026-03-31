#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AA040
// Address: 0x1aa040 - 0x1aa110
void sub_001AA040_0x1aa040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1aa040u;

    // 0x1aa040: 0x27bdffb0
    ctx->pc = 0x1aa040u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1aa044: 0xffbf0040
    ctx->pc = 0x1aa044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1aa048: 0x7fb30030
    ctx->pc = 0x1aa048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1aa04c: 0x7fb20020
    ctx->pc = 0x1aa04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1aa050: 0x80982d
    ctx->pc = 0x1aa050u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa054: 0x7fb10010
    ctx->pc = 0x1aa054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1aa058: 0xa0902d
    ctx->pc = 0x1aa058u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa05c: 0xc0882d
    ctx->pc = 0x1aa05cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa060: 0x24040008
    ctx->pc = 0x1aa060u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1aa064: 0x24050001
    ctx->pc = 0x1aa064u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa068: 0xc06a5d4
    ctx->pc = 0x1AA068u;
    SET_GPR_U32(ctx, 31, 0x1AA070u);
    ctx->pc = 0x1AA06Cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1A9750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9750_0x1a9750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA070u; }
    }
    if (ctx->pc != 0x1AA070u) { return; }
    ctx->pc = 0x1AA070u;
    // 0x1aa070: 0x40802d
    ctx->pc = 0x1aa070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa074:
    // 0x1aa074: 0x8e640020
    ctx->pc = 0x1aa074u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1aa078: 0xc04a490
    ctx->pc = 0x1AA078u;
    SET_GPR_U32(ctx, 31, 0x1AA080u);
    ctx->pc = 0x1AA07Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129240u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00129240_0x129240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA080u; }
    }
    if (ctx->pc != 0x1AA080u) { return; }
    ctx->pc = 0x1AA080u;
    // 0x1aa080: 0x3c01002b
    ctx->pc = 0x1aa080u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1aa084: 0xac2216a8
    ctx->pc = 0x1aa084u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5800), GPR_U32(ctx, 2));
    // 0x1aa088: 0x1040fffa
    ctx->pc = 0x1AA088u;
    {
        const bool branch_taken_0x1aa088 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aa088) {
            ctx->pc = 0x1AA074u;
            goto label_1aa074;
        }
    }
    ctx->pc = 0x1AA090u;
    // 0x1aa090: 0x3c01002b
    ctx->pc = 0x1aa090u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1aa094: 0xc04a702
    ctx->pc = 0x1AA094u;
    SET_GPR_U32(ctx, 31, 0x1AA09Cu);
    ctx->pc = 0x1AA098u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 5800)));
    ctx->pc = 0x129C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00129C08_0x129c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA09Cu; }
    }
    if (ctx->pc != 0x1AA09Cu) { return; }
    ctx->pc = 0x1AA09Cu;
    // 0x1aa09c: 0x3c01002b
    ctx->pc = 0x1aa09cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1aa0a0: 0x40282d
    ctx->pc = 0x1aa0a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa0a4: 0x8c2416a8
    ctx->pc = 0x1aa0a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 5800)));
    // 0x1aa0a8: 0xc04a5e8
    ctx->pc = 0x1AA0A8u;
    SET_GPR_U32(ctx, 31, 0x1AA0B0u);
    ctx->pc = 0x1AA0ACu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1297A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001297A0_0x1297a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA0B0u; }
    }
    if (ctx->pc != 0x1AA0B0u) { return; }
    ctx->pc = 0x1AA0B0u;
    // 0x1aa0b0: 0x10000006
    ctx->pc = 0x1AA0B0u;
    {
        const bool branch_taken_0x1aa0b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aa0b0) {
            ctx->pc = 0x1AA0CCu;
            goto label_1aa0cc;
        }
    }
    ctx->pc = 0x1AA0B8u;
label_1aa0b8:
    // 0x1aa0b8: 0x24020001
    ctx->pc = 0x1aa0b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa0bc: 0x16020003
    ctx->pc = 0x1AA0BCu;
    {
        const bool branch_taken_0x1aa0bc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        if (branch_taken_0x1aa0bc) {
            ctx->pc = 0x1AA0CCu;
            goto label_1aa0cc;
        }
    }
    ctx->pc = 0x1AA0C4u;
    // 0x1aa0c4: 0xc06bf38
    ctx->pc = 0x1AA0C4u;
    SET_GPR_U32(ctx, 31, 0x1AA0CCu);
    ctx->pc = 0x1AFCE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFCE0_0x1afce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA0CCu; }
    }
    if (ctx->pc != 0x1AA0CCu) { return; }
    ctx->pc = 0x1AA0CCu;
label_1aa0cc:
    // 0x1aa0cc: 0x3c01002b
    ctx->pc = 0x1aa0ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1aa0d0: 0xc04a752
    ctx->pc = 0x1AA0D0u;
    SET_GPR_U32(ctx, 31, 0x1AA0D8u);
    ctx->pc = 0x1AA0D4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 5800)));
    ctx->pc = 0x129D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00129D48_0x129d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA0D8u; }
    }
    if (ctx->pc != 0x1AA0D8u) { return; }
    ctx->pc = 0x1AA0D8u;
    // 0x1aa0d8: 0x24030003
    ctx->pc = 0x1aa0d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aa0dc: 0x1443fff6
    ctx->pc = 0x1AA0DCu;
    {
        const bool branch_taken_0x1aa0dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1AA0E0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
        if (branch_taken_0x1aa0dc) {
            ctx->pc = 0x1AA0B8u;
            goto label_1aa0b8;
        }
    }
    ctx->pc = 0x1AA0E4u;
    // 0x1aa0e4: 0xc04a4d4
    ctx->pc = 0x1AA0E4u;
    SET_GPR_U32(ctx, 31, 0x1AA0ECu);
    ctx->pc = 0x1AA0E8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 5800)));
    ctx->pc = 0x129350u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00129350_0x129350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA0ECu; }
    }
    if (ctx->pc != 0x1AA0ECu) { return; }
    ctx->pc = 0x1AA0ECu;
    // 0x1aa0ec: 0x3c01002b
    ctx->pc = 0x1aa0ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1aa0f0: 0xac2016a8
    ctx->pc = 0x1aa0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5800), GPR_U32(ctx, 0));
    // 0x1aa0f4: 0xdfbf0040
    ctx->pc = 0x1aa0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aa0f8: 0x7bb30030
    ctx->pc = 0x1aa0f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aa0fc: 0x7bb20020
    ctx->pc = 0x1aa0fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aa100: 0x7bb10010
    ctx->pc = 0x1aa100u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa104: 0x7bb00000
    ctx->pc = 0x1aa104u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa108: 0x3e00008
    ctx->pc = 0x1AA108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA10Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA074u: goto label_1aa074;
            case 0x1AA0B8u: goto label_1aa0b8;
            case 0x1AA0CCu: goto label_1aa0cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AA110u;
}
