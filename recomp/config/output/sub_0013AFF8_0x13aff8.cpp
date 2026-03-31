#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013AFF8
// Address: 0x13aff8 - 0x13b0b0
void sub_0013AFF8_0x13aff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13aff8u;

    // 0x13aff8: 0x3c020022
    ctx->pc = 0x13aff8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13affc: 0x282d
    ctx->pc = 0x13affcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b000: 0x2444daf0
    ctx->pc = 0x13b000u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294957808));
    // 0x13b004: 0x24070001
    ctx->pc = 0x13b004u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b008: 0x24060002
    ctx->pc = 0x13b008u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x13b00c: 0x0
    ctx->pc = 0x13b00cu;
    // NOP
label_13b010:
    // 0x13b010: 0x80820000
    ctx->pc = 0x13b010u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13b014: 0x54470005
    ctx->pc = 0x13B014u;
    {
        const bool branch_taken_0x13b014 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 7));
        if (branch_taken_0x13b014) {
            ctx->pc = 0x13B018u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x13B02Cu;
            goto label_13b02c;
        }
    }
    ctx->pc = 0x13B01Cu;
    // 0x13b01c: 0x80830002
    ctx->pc = 0x13b01cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x13b020: 0x10660007
    ctx->pc = 0x13B020u;
    {
        const bool branch_taken_0x13b020 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 6));
        ctx->pc = 0x13B024u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x13b020) {
            ctx->pc = 0x13B040u;
            goto label_13b040;
        }
    }
    ctx->pc = 0x13B028u;
    // 0x13b028: 0x24a50001
    ctx->pc = 0x13b028u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_13b02c:
    // 0x13b02c: 0x28a2000d
    ctx->pc = 0x13b02cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 13));
    // 0x13b030: 0x0
    ctx->pc = 0x13b030u;
    // NOP
    // 0x13b034: 0x1440fff6
    ctx->pc = 0x13B034u;
    {
        const bool branch_taken_0x13b034 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13B038u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 48));
        if (branch_taken_0x13b034) {
            ctx->pc = 0x13B010u;
            goto label_13b010;
        }
    }
    ctx->pc = 0x13B03Cu;
    // 0x13b03c: 0x102d
    ctx->pc = 0x13b03cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13b040:
    // 0x13b040: 0x3e00008
    ctx->pc = 0x13B040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13B010u: goto label_13b010;
            case 0x13B02Cu: goto label_13b02c;
            case 0x13B040u: goto label_13b040;
            case 0x13B098u: goto label_13b098;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13B048u;
    // 0x13b048: 0x27bdffe0
    ctx->pc = 0x13b048u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13b04c: 0xffb00000
    ctx->pc = 0x13b04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13b050: 0x80802d
    ctx->pc = 0x13b050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b054: 0xffb10008
    ctx->pc = 0x13b054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13b058: 0xffbf0010
    ctx->pc = 0x13b058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13b05c: 0xc04e082
    ctx->pc = 0x13B05Cu;
    SET_GPR_U32(ctx, 31, 0x13B064u);
    ctx->pc = 0x13B060u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16384));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B064u; }
    }
    if (ctx->pc != 0x13B064u) { return; }
    ctx->pc = 0x13B064u;
    // 0x13b064: 0x26110014
    ctx->pc = 0x13b064u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 20));
    // 0x13b068: 0x8e040018
    ctx->pc = 0x13b068u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x13b06c: 0x24050001
    ctx->pc = 0x13b06cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b070: 0xc04e128
    ctx->pc = 0x13B070u;
    SET_GPR_U32(ctx, 31, 0x13B078u);
    ctx->pc = 0x13B074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1384A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001384A0_0x1384a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B078u; }
    }
    if (ctx->pc != 0x13B078u) { return; }
    ctx->pc = 0x13B078u;
    // 0x13b078: 0x24044001
    ctx->pc = 0x13b078u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16385));
    // 0x13b07c: 0xc04e082
    ctx->pc = 0x13B07Cu;
    SET_GPR_U32(ctx, 31, 0x13B084u);
    ctx->pc = 0x13B080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B084u; }
    }
    if (ctx->pc != 0x13B084u) { return; }
    ctx->pc = 0x13B084u;
    // 0x13b084: 0x6000004
    ctx->pc = 0x13B084u;
    {
        const bool branch_taken_0x13b084 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x13B088u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13b084) {
            ctx->pc = 0x13B098u;
            goto label_13b098;
        }
    }
    ctx->pc = 0x13B08Cu;
    // 0x13b08c: 0x8e220000
    ctx->pc = 0x13b08cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13b090: 0x38420001
    ctx->pc = 0x13b090u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x13b094: 0x2102b
    ctx->pc = 0x13b094u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_13b098:
    // 0x13b098: 0xdfb00000
    ctx->pc = 0x13b098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b09c: 0xdfb10008
    ctx->pc = 0x13b09cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13b0a0: 0xdfbf0010
    ctx->pc = 0x13b0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b0a4: 0x3e00008
    ctx->pc = 0x13B0A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B0A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13B010u: goto label_13b010;
            case 0x13B02Cu: goto label_13b02c;
            case 0x13B040u: goto label_13b040;
            case 0x13B098u: goto label_13b098;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13B0ACu;
    // 0x13b0ac: 0x0
    ctx->pc = 0x13b0acu;
    // NOP
}
