#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_167000
// Address: 0x167000 - 0x1670c8
void entry_167000_0x1670c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x167000u;

    // 0x167000: 0x510c0
    ctx->pc = 0x167000u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
    // 0x167004: 0x27bdffb0
    ctx->pc = 0x167004u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x167008: 0x451023
    ctx->pc = 0x167008u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16700c: 0xffb00030
    ctx->pc = 0x16700cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x167010: 0x21080
    ctx->pc = 0x167010u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x167014: 0xc0802d
    ctx->pc = 0x167014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167018: 0x451021
    ctx->pc = 0x167018u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16701c: 0xffb20040
    ctx->pc = 0x16701cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x167020: 0xffb10038
    ctx->pc = 0x167020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x167024: 0x21080
    ctx->pc = 0x167024u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x167028: 0xffbf0048
    ctx->pc = 0x167028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x16702c: 0x24841140
    ctx->pc = 0x16702cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4416));
    // 0x167030: 0xae000004
    ctx->pc = 0x167030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x167034: 0x822021
    ctx->pc = 0x167034u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x167038: 0xae00000c
    ctx->pc = 0x167038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x16703c: 0xe0902d
    ctx->pc = 0x16703cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167040: 0xae000014
    ctx->pc = 0x167040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x167044: 0xae000018
    ctx->pc = 0x167044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x167048: 0xae000000
    ctx->pc = 0x167048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x16704c: 0x8c820004
    ctx->pc = 0x16704cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x167050: 0xae000008
    ctx->pc = 0x167050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x167054: 0xae000010
    ctx->pc = 0x167054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x167058: 0x10400014
    ctx->pc = 0x167058u;
    {
        const bool branch_taken_0x167058 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16705Cu;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 4), 20)));
        if (branch_taken_0x167058) {
            ctx->pc = 0x1670ACu;
            goto label_1670ac;
        }
    }
    ctx->pc = 0x167060u;
    // 0x167060: 0x52200013
    ctx->pc = 0x167060u;
    {
        const bool branch_taken_0x167060 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x167060) {
            ctx->pc = 0x167064u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x1670B0u;
            goto label_1670b0;
        }
    }
    ctx->pc = 0x167068u;
    // 0x167068: 0xc05a7b2
    ctx->pc = 0x167068u;
    SET_GPR_U32(ctx, 31, 0x167070u);
    ctx->pc = 0x16706Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169EC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EC8_0x169ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167070u; }
    }
    if (ctx->pc != 0x167070u) { return; }
    ctx->pc = 0x167070u;
    // 0x167070: 0x220202d
    ctx->pc = 0x167070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167074: 0x3a0302d
    ctx->pc = 0x167074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167078: 0x240282d
    ctx->pc = 0x167078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16707c: 0xc059cb8
    ctx->pc = 0x16707Cu;
    SET_GPR_U32(ctx, 31, 0x167084u);
    ctx->pc = 0x167080u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1672E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001672E0_0x1672e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167084u; }
    }
    if (ctx->pc != 0x167084u) { return; }
    ctx->pc = 0x167084u;
    // 0x167084: 0x8fa20014
    ctx->pc = 0x167084u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x167088: 0x27a40020
    ctx->pc = 0x167088u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x16708c: 0x8fa30000
    ctx->pc = 0x16708cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167090: 0x8fa50004
    ctx->pc = 0x167090u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x167094: 0x8fa60010
    ctx->pc = 0x167094u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167098: 0xae02000c
    ctx->pc = 0x167098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x16709c: 0xae030000
    ctx->pc = 0x16709cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1670a0: 0xae050004
    ctx->pc = 0x1670a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x1670a4: 0xc05a7b8
    ctx->pc = 0x1670A4u;
    SET_GPR_U32(ctx, 31, 0x1670ACu);
    ctx->pc = 0x1670A8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    ctx->pc = 0x169EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EE0_0x169ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1670ACu; }
    }
    if (ctx->pc != 0x1670ACu) { return; }
    ctx->pc = 0x1670ACu;
label_1670ac:
    // 0x1670ac: 0x102d
    ctx->pc = 0x1670acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1670b0:
    // 0x1670b0: 0xdfb00030
    ctx->pc = 0x1670b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1670b4: 0xdfb10038
    ctx->pc = 0x1670b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1670b8: 0xdfb20040
    ctx->pc = 0x1670b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1670bc: 0xdfbf0048
    ctx->pc = 0x1670bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1670c0: 0x3e00008
    ctx->pc = 0x1670C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1670C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1670ACu: goto label_1670ac;
            case 0x1670B0u: goto label_1670b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1670C8u;
}
