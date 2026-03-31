#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00173C10
// Address: 0x173c10 - 0x173c70
void sub_00173C10_0x173c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x173c10u;

    // 0x173c10: 0x27bdfff0
    ctx->pc = 0x173c10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173c14: 0x24030004
    ctx->pc = 0x173c14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x173c18: 0xffb00000
    ctx->pc = 0x173c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173c1c: 0x80802d
    ctx->pc = 0x173c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173c20: 0xffbf0008
    ctx->pc = 0x173c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x173c24: 0x8e020048
    ctx->pc = 0x173c24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x173c28: 0x54430009
    ctx->pc = 0x173C28u;
    {
        const bool branch_taken_0x173c28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x173c28) {
            ctx->pc = 0x173C2Cu;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x173C50u;
            goto label_173c50;
        }
    }
    ctx->pc = 0x173C30u;
    // 0x173c30: 0x24050007
    ctx->pc = 0x173c30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    // 0x173c34: 0x24060007
    ctx->pc = 0x173c34u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    // 0x173c38: 0x382d
    ctx->pc = 0x173c38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173c3c: 0xc05def8
    ctx->pc = 0x173C3Cu;
    SET_GPR_U32(ctx, 31, 0x173C44u);
    ctx->pc = 0x173C40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177BE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177BE0_0x177be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173C44u; }
    }
    if (ctx->pc != 0x173C44u) { return; }
    ctx->pc = 0x173C44u;
    // 0x173c44: 0x54400006
    ctx->pc = 0x173C44u;
    {
        const bool branch_taken_0x173c44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x173c44) {
            ctx->pc = 0x173C48u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x173C60u;
            goto label_173c60;
        }
    }
    ctx->pc = 0x173C4Cu;
    // 0x173c4c: 0x24030001
    ctx->pc = 0x173c4cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_173c50:
    // 0x173c50: 0x102d
    ctx->pc = 0x173c50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173c54: 0xae03004c
    ctx->pc = 0x173c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x173c58: 0xae030048
    ctx->pc = 0x173c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x173c5c: 0xdfb00000
    ctx->pc = 0x173c5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_173c60:
    // 0x173c60: 0xdfbf0008
    ctx->pc = 0x173c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173c64: 0x3e00008
    ctx->pc = 0x173C64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173C68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173C50u: goto label_173c50;
            case 0x173C60u: goto label_173c60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173C6Cu;
    // 0x173c6c: 0x0
    ctx->pc = 0x173c6cu;
    // NOP
}
