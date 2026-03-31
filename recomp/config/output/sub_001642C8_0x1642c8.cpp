#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001642C8
// Address: 0x1642c8 - 0x164328
void sub_001642C8_0x1642c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1642c8u;

    // 0x1642c8: 0x3e00008
    ctx->pc = 0x1642C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1642CCu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x164308u: goto label_164308;
            case 0x164318u: goto label_164318;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1642D0u;
    // 0x1642d0: 0x3e00008
    ctx->pc = 0x1642D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1642D4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 100)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x164308u: goto label_164308;
            case 0x164318u: goto label_164318;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1642D8u;
    // 0x1642d8: 0x27bdfff0
    ctx->pc = 0x1642d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1642dc: 0xffb00000
    ctx->pc = 0x1642dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1642e0: 0xffbf0008
    ctx->pc = 0x1642e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1642e4: 0xc057ff0
    ctx->pc = 0x1642E4u;
    SET_GPR_U32(ctx, 31, 0x1642ECu);
    ctx->pc = 0x1642E8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1642ECu; }
    }
    if (ctx->pc != 0x1642ECu) { return; }
    ctx->pc = 0x1642ECu;
    // 0x1642ec: 0x14400006
    ctx->pc = 0x1642ECu;
    {
        const bool branch_taken_0x1642ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1642F0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1642ec) {
            ctx->pc = 0x164308u;
            goto label_164308;
        }
    }
    ctx->pc = 0x1642F4u;
    // 0x1642f4: 0x3c040024
    ctx->pc = 0x1642f4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1642f8: 0xc058dd4
    ctx->pc = 0x1642F8u;
    SET_GPR_U32(ctx, 31, 0x164300u);
    ctx->pc = 0x1642FCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1392));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164300u; }
    }
    if (ctx->pc != 0x164300u) { return; }
    ctx->pc = 0x164300u;
    // 0x164300: 0x10000005
    ctx->pc = 0x164300u;
    {
        const bool branch_taken_0x164300 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x164304u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x164300) {
            ctx->pc = 0x164318u;
            goto label_164318;
        }
    }
    ctx->pc = 0x164308u;
label_164308:
    // 0x164308: 0xc0590b0
    ctx->pc = 0x164308u;
    SET_GPR_U32(ctx, 31, 0x164310u);
    ctx->pc = 0x1642C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001642C0_0x1642c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164310u; }
    }
    if (ctx->pc != 0x164310u) { return; }
    ctx->pc = 0x164310u;
    // 0x164310: 0x38420001
    ctx->pc = 0x164310u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x164314: 0x2102b
    ctx->pc = 0x164314u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_164318:
    // 0x164318: 0xdfb00000
    ctx->pc = 0x164318u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16431c: 0xdfbf0008
    ctx->pc = 0x16431cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x164320: 0x3e00008
    ctx->pc = 0x164320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164324u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x164308u: goto label_164308;
            case 0x164318u: goto label_164318;
            default: break;
        }
        return;
    }
    ctx->pc = 0x164328u;
}
