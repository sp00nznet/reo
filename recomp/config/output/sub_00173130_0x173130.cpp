#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00173130
// Address: 0x173130 - 0x1731a0
void sub_00173130_0x173130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x173130u;

    // 0x173130: 0x27bdfff0
    ctx->pc = 0x173130u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173134: 0xffb00000
    ctx->pc = 0x173134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173138: 0xffbf0008
    ctx->pc = 0x173138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17313c: 0xc05cc68
    ctx->pc = 0x17313Cu;
    SET_GPR_U32(ctx, 31, 0x173144u);
    ctx->pc = 0x173140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1731A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001731A0_0x1731a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173144u; }
    }
    if (ctx->pc != 0x173144u) { return; }
    ctx->pc = 0x173144u;
    // 0x173144: 0x1440000d
    ctx->pc = 0x173144u;
    {
        const bool branch_taken_0x173144 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x173148u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x173144) {
            ctx->pc = 0x17317Cu;
            goto label_17317c;
        }
    }
    ctx->pc = 0x17314Cu;
    // 0x17314c: 0xc05cc84
    ctx->pc = 0x17314Cu;
    SET_GPR_U32(ctx, 31, 0x173154u);
    ctx->pc = 0x173210u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00173210_0x173210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173154u; }
    }
    if (ctx->pc != 0x173154u) { return; }
    ctx->pc = 0x173154u;
    // 0x173154: 0x14400009
    ctx->pc = 0x173154u;
    {
        const bool branch_taken_0x173154 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x173158u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x173154) {
            ctx->pc = 0x17317Cu;
            goto label_17317c;
        }
    }
    ctx->pc = 0x17315Cu;
    // 0x17315c: 0xc05ccb6
    ctx->pc = 0x17315Cu;
    SET_GPR_U32(ctx, 31, 0x173164u);
    ctx->pc = 0x1732D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001732D8_0x1732d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173164u; }
    }
    if (ctx->pc != 0x173164u) { return; }
    ctx->pc = 0x173164u;
    // 0x173164: 0x14400005
    ctx->pc = 0x173164u;
    {
        const bool branch_taken_0x173164 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x173168u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x173164) {
            ctx->pc = 0x17317Cu;
            goto label_17317c;
        }
    }
    ctx->pc = 0x17316Cu;
    // 0x17316c: 0xc05cccc
    ctx->pc = 0x17316Cu;
    SET_GPR_U32(ctx, 31, 0x173174u);
    ctx->pc = 0x173330u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00173330_0x173330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173174u; }
    }
    if (ctx->pc != 0x173174u) { return; }
    ctx->pc = 0x173174u;
    // 0x173174: 0x50400006
    ctx->pc = 0x173174u;
    {
        const bool branch_taken_0x173174 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x173174) {
            ctx->pc = 0x173178u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x173190u;
            goto label_173190;
        }
    }
    ctx->pc = 0x17317Cu;
label_17317c:
    // 0x17317c: 0x200202d
    ctx->pc = 0x17317cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173180: 0xdfb00000
    ctx->pc = 0x173180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173184: 0xdfbf0008
    ctx->pc = 0x173184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173188: 0x805ccf0
    ctx->pc = 0x173188u;
    ctx->pc = 0x17318Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1733C0u;
    entry_1733c0_0x1733f8(rdram, ctx, runtime); return;
    ctx->pc = 0x173190u;
label_173190:
    // 0x173190: 0xdfbf0008
    ctx->pc = 0x173190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173194: 0x3e00008
    ctx->pc = 0x173194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173198u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17317Cu: goto label_17317c;
            case 0x173190u: goto label_173190;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17319Cu;
    // 0x17319c: 0x0
    ctx->pc = 0x17319cu;
    // NOP
}
