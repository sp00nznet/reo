#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001752F8
// Address: 0x1752f8 - 0x175338
void sub_001752F8_0x1752f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1752f8u;

    // 0x1752f8: 0x27bdfff0
    ctx->pc = 0x1752f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1752fc: 0xffb00000
    ctx->pc = 0x1752fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175300: 0xffbf0008
    ctx->pc = 0x175300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x175304: 0xc05a78c
    ctx->pc = 0x175304u;
    SET_GPR_U32(ctx, 31, 0x17530Cu);
    ctx->pc = 0x175308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17530Cu; }
    }
    if (ctx->pc != 0x17530Cu) { return; }
    ctx->pc = 0x17530Cu;
    // 0x17530c: 0x3c05ff00
    ctx->pc = 0x17530cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x175310: 0x202d
    ctx->pc = 0x175310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175314: 0x10400003
    ctx->pc = 0x175314u;
    {
        const bool branch_taken_0x175314 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x175318u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 273));
        if (branch_taken_0x175314) {
            ctx->pc = 0x175324u;
            goto label_175324;
        }
    }
    ctx->pc = 0x17531Cu;
    // 0x17531c: 0xc05a704
    ctx->pc = 0x17531Cu;
    SET_GPR_U32(ctx, 31, 0x175324u);
    ctx->pc = 0x169C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169C10_0x169c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175324u; }
    }
    if (ctx->pc != 0x175324u) { return; }
    ctx->pc = 0x175324u;
label_175324:
    // 0x175324: 0x8e020048
    ctx->pc = 0x175324u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x175328: 0xdfb00000
    ctx->pc = 0x175328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17532c: 0xdfbf0008
    ctx->pc = 0x17532cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175330: 0x3e00008
    ctx->pc = 0x175330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175334u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175324u: goto label_175324;
            default: break;
        }
        return;
    }
    ctx->pc = 0x175338u;
}
