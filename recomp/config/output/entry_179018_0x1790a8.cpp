#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_179018
// Address: 0x179018 - 0x1790a8
void entry_179018_0x1790a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x179018u;

    // 0x179018: 0x27bdffe0
    ctx->pc = 0x179018u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17901c: 0x3c020027
    ctx->pc = 0x17901cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x179020: 0xffb10008
    ctx->pc = 0x179020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x179024: 0xa0882d
    ctx->pc = 0x179024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179028: 0xffb20010
    ctx->pc = 0x179028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17902c: 0x80902d
    ctx->pc = 0x17902cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179030: 0xffb00000
    ctx->pc = 0x179030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x179034: 0x24446144
    ctx->pc = 0x179034u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 24900));
    // 0x179038: 0xffbf0018
    ctx->pc = 0x179038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17903c: 0x8c820000
    ctx->pc = 0x17903cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x179040: 0x1c400013
    ctx->pc = 0x179040u;
    {
        const bool branch_taken_0x179040 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x179044u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x179040) {
            ctx->pc = 0x179090u;
            goto label_179090;
        }
    }
    ctx->pc = 0x179048u;
    // 0x179048: 0xac830000
    ctx->pc = 0x179048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x17904c: 0x3c100027
    ctx->pc = 0x17904cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)39 << 16));
    // 0x179050: 0xc05e3fe
    ctx->pc = 0x179050u;
    SET_GPR_U32(ctx, 31, 0x179058u);
    ctx->pc = 0x179054u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 24880));
    ctx->pc = 0x178FF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00178FF8_0x178ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179058u; }
    }
    if (ctx->pc != 0x179058u) { return; }
    ctx->pc = 0x179058u;
    // 0x179058: 0x240202d
    ctx->pc = 0x179058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17905c: 0xae020000
    ctx->pc = 0x17905cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x179060: 0xc05e48e
    ctx->pc = 0x179060u;
    SET_GPR_U32(ctx, 31, 0x179068u);
    ctx->pc = 0x179064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x179238u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00179238_0x179238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179068u; }
    }
    if (ctx->pc != 0x179068u) { return; }
    ctx->pc = 0x179068u;
    // 0x179068: 0x3c040027
    ctx->pc = 0x179068u;
    SET_GPR_U32(ctx, 4, ((uint32_t)39 << 16));
    // 0x17906c: 0x240282d
    ctx->pc = 0x17906cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179070: 0xdfb20010
    ctx->pc = 0x179070u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179074: 0x220302d
    ctx->pc = 0x179074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179078: 0xdfb10008
    ctx->pc = 0x179078u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17907c: 0xdfb00000
    ctx->pc = 0x17907cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179080: 0x24846138
    ctx->pc = 0x179080u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24888));
    // 0x179084: 0xdfbf0018
    ctx->pc = 0x179084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x179088: 0x805e47e
    ctx->pc = 0x179088u;
    ctx->pc = 0x17908Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1791F8u;
    entry_1791f8_0x179208(rdram, ctx, runtime); return;
    ctx->pc = 0x179090u;
label_179090:
    // 0x179090: 0xdfb00000
    ctx->pc = 0x179090u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179094: 0xdfb10008
    ctx->pc = 0x179094u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x179098: 0xdfb20010
    ctx->pc = 0x179098u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17909c: 0xdfbf0018
    ctx->pc = 0x17909cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1790a0: 0x3e00008
    ctx->pc = 0x1790A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1790A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x179090u: goto label_179090;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1790A8u;
}
