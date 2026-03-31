#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_164420
// Address: 0x164420 - 0x164448
void entry_164420_0x164448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x164420u;

    // 0x164420: 0x27bdfff0
    ctx->pc = 0x164420u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x164424: 0x102d
    ctx->pc = 0x164424u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164428: 0x10800004
    ctx->pc = 0x164428u;
    {
        const bool branch_taken_0x164428 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x16442Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x164428) {
            ctx->pc = 0x16443Cu;
            goto label_16443c;
        }
    }
    ctx->pc = 0x164430u;
    // 0x164430: 0xc04c38a
    ctx->pc = 0x164430u;
    SET_GPR_U32(ctx, 31, 0x164438u);
    ctx->pc = 0x130E28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130E28_0x130e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164438u; }
    }
    if (ctx->pc != 0x164438u) { return; }
    ctx->pc = 0x164438u;
    // 0x164438: 0x102d
    ctx->pc = 0x164438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16443c:
    // 0x16443c: 0xdfbf0000
    ctx->pc = 0x16443cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164440: 0x3e00008
    ctx->pc = 0x164440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164444u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16443Cu: goto label_16443c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x164448u;
}
