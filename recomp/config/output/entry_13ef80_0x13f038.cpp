#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_13ef80
// Address: 0x13ef80 - 0x13f038
void entry_13ef80_0x13f038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13ef80u;

    // 0x13ef80: 0xa0302d
    ctx->pc = 0x13ef80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef84: 0x3402bb80
    ctx->pc = 0x13ef84u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 48000));
    // 0x13ef88: 0x46001a
    ctx->pc = 0x13ef88u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x13ef8c: 0x27bdfff0
    ctx->pc = 0x13ef8cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13ef90: 0xffbf0000
    ctx->pc = 0x13ef90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13ef94: 0x50c00001
    ctx->pc = 0x13EF94u;
    {
        const bool branch_taken_0x13ef94 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x13ef94) {
            ctx->pc = 0x13EF98u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x13EF9Cu;
            goto label_13ef9c;
        }
    }
    ctx->pc = 0x13EF9Cu;
label_13ef9c:
    // 0x13ef9c: 0x1810
    ctx->pc = 0x13ef9cu;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x13efa0: 0x5060000d
    ctx->pc = 0x13EFA0u;
    {
        const bool branch_taken_0x13efa0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x13efa0) {
            ctx->pc = 0x13EFA4u;
            SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 48000));
            ctx->pc = 0x13EFD8u;
            goto label_13efd8;
        }
    }
    ctx->pc = 0x13EFA8u;
    // 0x13efa8: 0x3c040024
    ctx->pc = 0x13efa8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13efac: 0xc045a12
    ctx->pc = 0x13EFACu;
    SET_GPR_U32(ctx, 31, 0x13EFB4u);
    ctx->pc = 0x13EFB0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957248));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EFB4u; }
    }
    if (ctx->pc != 0x13EFB4u) { return; }
    ctx->pc = 0x13EFB4u;
    // 0x13efb4: 0x0
    ctx->pc = 0x13efb4u;
    // NOP
label_13efb8:
    // 0x13efb8: 0x0
    ctx->pc = 0x13efb8u;
    // NOP
    // 0x13efbc: 0x0
    ctx->pc = 0x13efbcu;
    // NOP
    // 0x13efc0: 0x0
    ctx->pc = 0x13efc0u;
    // NOP
    // 0x13efc4: 0x0
    ctx->pc = 0x13efc4u;
    // NOP
    // 0x13efc8: 0x0
    ctx->pc = 0x13efc8u;
    // NOP
    // 0x13efcc: 0x1000fffa
    ctx->pc = 0x13EFCCu;
    {
        const bool branch_taken_0x13efcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x13efcc) {
            ctx->pc = 0x13EFB8u;
            goto label_13efb8;
        }
    }
    ctx->pc = 0x13EFD4u;
    // 0x13efd4: 0x0
    ctx->pc = 0x13efd4u;
    // NOP
label_13efd8:
    // 0x13efd8: 0x10c20014
    ctx->pc = 0x13EFD8u;
    {
        const bool branch_taken_0x13efd8 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x13EFDCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x13efd8) {
            ctx->pc = 0x13F02Cu;
            goto label_13f02c;
        }
    }
    ctx->pc = 0x13EFE0u;
    // 0x13efe0: 0x46001a
    ctx->pc = 0x13efe0u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x13efe4: 0x50c00001
    ctx->pc = 0x13EFE4u;
    {
        const bool branch_taken_0x13efe4 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x13efe4) {
            ctx->pc = 0x13EFE8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x13EFECu;
            goto label_13efec;
        }
    }
    ctx->pc = 0x13EFECu;
label_13efec:
    // 0x13efec: 0x1012
    ctx->pc = 0x13efecu;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x13eff0: 0x30420001
    ctx->pc = 0x13eff0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x13eff4: 0x1040000c
    ctx->pc = 0x13EFF4u;
    {
        const bool branch_taken_0x13eff4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13EFF8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13eff4) {
            ctx->pc = 0x13F028u;
            goto label_13f028;
        }
    }
    ctx->pc = 0x13EFFCu;
    // 0x13effc: 0x3c040024
    ctx->pc = 0x13effcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13f000: 0xc045a12
    ctx->pc = 0x13F000u;
    SET_GPR_U32(ctx, 31, 0x13F008u);
    ctx->pc = 0x13F004u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957248));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F008u; }
    }
    if (ctx->pc != 0x13F008u) { return; }
    ctx->pc = 0x13F008u;
label_13f008:
    // 0x13f008: 0x0
    ctx->pc = 0x13f008u;
    // NOP
    // 0x13f00c: 0x0
    ctx->pc = 0x13f00cu;
    // NOP
    // 0x13f010: 0x0
    ctx->pc = 0x13f010u;
    // NOP
    // 0x13f014: 0x0
    ctx->pc = 0x13f014u;
    // NOP
    // 0x13f018: 0x0
    ctx->pc = 0x13f018u;
    // NOP
    // 0x13f01c: 0x1000fffa
    ctx->pc = 0x13F01Cu;
    {
        const bool branch_taken_0x13f01c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x13f01c) {
            ctx->pc = 0x13F008u;
            goto label_13f008;
        }
    }
    ctx->pc = 0x13F024u;
    // 0x13f024: 0x0
    ctx->pc = 0x13f024u;
    // NOP
label_13f028:
    // 0x13f028: 0xdfbf0000
    ctx->pc = 0x13f028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13f02c:
    // 0x13f02c: 0xac860028
    ctx->pc = 0x13f02cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 6));
    // 0x13f030: 0x3e00008
    ctx->pc = 0x13F030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F034u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13EF9Cu: goto label_13ef9c;
            case 0x13EFB8u: goto label_13efb8;
            case 0x13EFD8u: goto label_13efd8;
            case 0x13EFECu: goto label_13efec;
            case 0x13F008u: goto label_13f008;
            case 0x13F028u: goto label_13f028;
            case 0x13F02Cu: goto label_13f02c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F038u;
}
