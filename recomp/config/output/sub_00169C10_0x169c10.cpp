#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00169C10
// Address: 0x169c10 - 0x169c80
void sub_00169C10_0x169c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x169c10u;

    // 0x169c10: 0x27bdffe0
    ctx->pc = 0x169c10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x169c14: 0x102d
    ctx->pc = 0x169c14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169c18: 0xffb10008
    ctx->pc = 0x169c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x169c1c: 0xa0882d
    ctx->pc = 0x169c1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169c20: 0xffb00000
    ctx->pc = 0x169c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169c24: 0x80802d
    ctx->pc = 0x169c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169c28: 0x12200010
    ctx->pc = 0x169C28u;
    {
        const bool branch_taken_0x169c28 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x169C2Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x169c28) {
            ctx->pc = 0x169C6Cu;
            goto label_169c6c;
        }
    }
    ctx->pc = 0x169C30u;
    // 0x169c30: 0x16000007
    ctx->pc = 0x169C30u;
    {
        const bool branch_taken_0x169c30 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x169c30) {
            ctx->pc = 0x169C50u;
            goto label_169c50;
        }
    }
    ctx->pc = 0x169C38u;
    // 0x169c38: 0x3c040023
    ctx->pc = 0x169c38u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x169c3c: 0xc05a720
    ctx->pc = 0x169C3Cu;
    SET_GPR_U32(ctx, 31, 0x169C44u);
    ctx->pc = 0x169C40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963492));
    ctx->pc = 0x169C80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169C80_0x169c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169C44u; }
    }
    if (ctx->pc != 0x169C44u) { return; }
    ctx->pc = 0x169C44u;
    // 0x169c44: 0x10000009
    ctx->pc = 0x169C44u;
    {
        const bool branch_taken_0x169c44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x169C48u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x169c44) {
            ctx->pc = 0x169C6Cu;
            goto label_169c6c;
        }
    }
    ctx->pc = 0x169C4Cu;
    // 0x169c4c: 0x0
    ctx->pc = 0x169c4cu;
    // NOP
label_169c50:
    // 0x169c50: 0xc05a720
    ctx->pc = 0x169C50u;
    SET_GPR_U32(ctx, 31, 0x169C58u);
    ctx->pc = 0x169C54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 2444));
    ctx->pc = 0x169C80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169C80_0x169c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169C58u; }
    }
    if (ctx->pc != 0x169C58u) { return; }
    ctx->pc = 0x169C58u;
    // 0x169c58: 0x8e020048
    ctx->pc = 0x169c58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x169c5c: 0x18400002
    ctx->pc = 0x169C5Cu;
    {
        const bool branch_taken_0x169c5c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x169C60u;
        SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        if (branch_taken_0x169c5c) {
            ctx->pc = 0x169C68u;
            goto label_169c68;
        }
    }
    ctx->pc = 0x169C64u;
    // 0x169c64: 0xae030048
    ctx->pc = 0x169c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_169c68:
    // 0x169c68: 0x220102d
    ctx->pc = 0x169c68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_169c6c:
    // 0x169c6c: 0xdfb00000
    ctx->pc = 0x169c6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169c70: 0xdfb10008
    ctx->pc = 0x169c70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169c74: 0xdfbf0010
    ctx->pc = 0x169c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169c78: 0x3e00008
    ctx->pc = 0x169C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169C7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169C50u: goto label_169c50;
            case 0x169C68u: goto label_169c68;
            case 0x169C6Cu: goto label_169c6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x169C80u;
}
