#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_13d100
// Address: 0x13d100 - 0x13d190
void entry_13d100_0x13d190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13d100u;

    // 0x13d100: 0x27bdfff0
    ctx->pc = 0x13d100u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13d104: 0x80302d
    ctx->pc = 0x13d104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d108: 0xffbf0000
    ctx->pc = 0x13d108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d10c: 0x14c00006
    ctx->pc = 0x13D10Cu;
    {
        const bool branch_taken_0x13d10c = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x13D110u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13d10c) {
            ctx->pc = 0x13D128u;
            goto label_13d128;
        }
    }
    ctx->pc = 0x13D114u;
    // 0x13d114: 0x3c040024
    ctx->pc = 0x13d114u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13d118: 0xc04f53e
    ctx->pc = 0x13D118u;
    SET_GPR_U32(ctx, 31, 0x13D120u);
    ctx->pc = 0x13D11Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955880));
    ctx->pc = 0x13D4F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D4F8_0x13d4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D120u; }
    }
    if (ctx->pc != 0x13D120u) { return; }
    ctx->pc = 0x13D120u;
    // 0x13d120: 0x10000018
    ctx->pc = 0x13D120u;
    {
        const bool branch_taken_0x13d120 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13D124u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x13d120) {
            ctx->pc = 0x13D184u;
            goto label_13d184;
        }
    }
    ctx->pc = 0x13D128u;
label_13d128:
    // 0x13d128: 0x4600006
    ctx->pc = 0x13D128u;
    {
        const bool branch_taken_0x13d128 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x13D12Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x13d128) {
            ctx->pc = 0x13D144u;
            goto label_13d144;
        }
    }
    ctx->pc = 0x13D130u;
    // 0x13d130: 0x8cc20024
    ctx->pc = 0x13d130u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x13d134: 0x62102a
    ctx->pc = 0x13d134u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x13d138: 0x54400007
    ctx->pc = 0x13D138u;
    {
        const bool branch_taken_0x13d138 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x13d138) {
            ctx->pc = 0x13D13Cu;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 32)));
            ctx->pc = 0x13D158u;
            goto label_13d158;
        }
    }
    ctx->pc = 0x13D140u;
    // 0x13d140: 0x3c040024
    ctx->pc = 0x13d140u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_13d144:
    // 0x13d144: 0xc04f53e
    ctx->pc = 0x13D144u;
    SET_GPR_U32(ctx, 31, 0x13D14Cu);
    ctx->pc = 0x13D148u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955960));
    ctx->pc = 0x13D4F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D4F8_0x13d4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D14Cu; }
    }
    if (ctx->pc != 0x13D14Cu) { return; }
    ctx->pc = 0x13D14Cu;
    // 0x13d14c: 0x1000000d
    ctx->pc = 0x13D14Cu;
    {
        const bool branch_taken_0x13d14c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13D150u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x13d14c) {
            ctx->pc = 0x13D184u;
            goto label_13d184;
        }
    }
    ctx->pc = 0x13D154u;
    // 0x13d154: 0x0
    ctx->pc = 0x13d154u;
    // NOP
label_13d158:
    // 0x13d158: 0xa32821
    ctx->pc = 0x13d158u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x13d15c: 0x24a4000f
    ctx->pc = 0x13d15cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 15));
    // 0x13d160: 0x28a30000
    ctx->pc = 0x13d160u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 0));
    // 0x13d164: 0xa0102d
    ctx->pc = 0x13d164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d168: 0x83100b
    ctx->pc = 0x13d168u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x13d16c: 0x21103
    ctx->pc = 0x13d16cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x13d170: 0x22100
    ctx->pc = 0x13d170u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 4));
    // 0x13d174: 0xa41023
    ctx->pc = 0x13d174u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13d178: 0x21940
    ctx->pc = 0x13d178u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 5));
    // 0x13d17c: 0x661821
    ctx->pc = 0x13d17cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x13d180: 0x8c620038
    ctx->pc = 0x13d180u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_13d184:
    // 0x13d184: 0xdfbf0000
    ctx->pc = 0x13d184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d188: 0x3e00008
    ctx->pc = 0x13D188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D18Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13D128u: goto label_13d128;
            case 0x13D144u: goto label_13d144;
            case 0x13D158u: goto label_13d158;
            case 0x13D184u: goto label_13d184;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13D190u;
}
