#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00176000
// Address: 0x176000 - 0x176040
void sub_00176000_0x176000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x176000u;

    // 0x176000: 0x27bdfff0
    ctx->pc = 0x176000u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x176004: 0xffb00000
    ctx->pc = 0x176004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x176008: 0xffbf0008
    ctx->pc = 0x176008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17600c: 0xc05d810
    ctx->pc = 0x17600Cu;
    SET_GPR_U32(ctx, 31, 0x176014u);
    ctx->pc = 0x176010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x176040u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00176040_0x176040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176014u; }
    }
    if (ctx->pc != 0x176014u) { return; }
    ctx->pc = 0x176014u;
    // 0x176014: 0x3c05ff00
    ctx->pc = 0x176014u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x176018: 0x10400004
    ctx->pc = 0x176018u;
    {
        const bool branch_taken_0x176018 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17601Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x176018) {
            ctx->pc = 0x17602Cu;
            goto label_17602c;
        }
    }
    ctx->pc = 0x176020u;
    // 0x176020: 0xc05a704
    ctx->pc = 0x176020u;
    SET_GPR_U32(ctx, 31, 0x176028u);
    ctx->pc = 0x176024u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 546));
    ctx->pc = 0x169C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169C10_0x169c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176028u; }
    }
    if (ctx->pc != 0x176028u) { return; }
    ctx->pc = 0x176028u;
    // 0x176028: 0x24020001
    ctx->pc = 0x176028u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_17602c:
    // 0x17602c: 0xdfb00000
    ctx->pc = 0x17602cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176030: 0xdfbf0008
    ctx->pc = 0x176030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x176034: 0x3e00008
    ctx->pc = 0x176034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176038u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17602Cu: goto label_17602c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17603Cu;
    // 0x17603c: 0x0
    ctx->pc = 0x17603cu;
    // NOP
}
