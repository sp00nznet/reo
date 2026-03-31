#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B0A00
// Address: 0x1b0a00 - 0x1b0a80
void sub_001B0A00_0x1b0a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b0a00u;

    // 0x1b0a00: 0x27bdfff0
    ctx->pc = 0x1b0a00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b0a04: 0x3c01002b
    ctx->pc = 0x1b0a04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1b0a08: 0xffbf0000
    ctx->pc = 0x1b0a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b0a0c: 0x302d
    ctx->pc = 0x1b0a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0a10: 0x8c25ffa8
    ctx->pc = 0x1b0a10u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294967208)));
    // 0x1b0a14: 0x1000000b
    ctx->pc = 0x1B0A14u;
    {
        const bool branch_taken_0x1b0a14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B0A18u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1b0a14) {
            ctx->pc = 0x1B0A44u;
            goto label_1b0a44;
        }
    }
    ctx->pc = 0x1B0A1Cu;
label_1b0a1c:
    // 0x1b0a1c: 0x41100
    ctx->pc = 0x1b0a1cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 4));
    // 0x1b0a20: 0x441023
    ctx->pc = 0x1b0a20u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b0a24: 0x210c0
    ctx->pc = 0x1b0a24u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x1b0a28: 0xa21021
    ctx->pc = 0x1b0a28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b0a2c: 0x90420000
    ctx->pc = 0x1b0a2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b0a30: 0x14430003
    ctx->pc = 0x1B0A30u;
    {
        const bool branch_taken_0x1b0a30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1B0A34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x1b0a30) {
            ctx->pc = 0x1B0A40u;
            goto label_1b0a40;
        }
    }
    ctx->pc = 0x1B0A38u;
    // 0x1b0a38: 0x1000000b
    ctx->pc = 0x1B0A38u;
    {
        const bool branch_taken_0x1b0a38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B0A3Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1b0a38) {
            ctx->pc = 0x1B0A68u;
            goto label_1b0a68;
        }
    }
    ctx->pc = 0x1B0A40u;
label_1b0a40:
    // 0x1b0a40: 0x304600ff
    ctx->pc = 0x1b0a40u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 2), 255));
label_1b0a44:
    // 0x1b0a44: 0x30c200ff
    ctx->pc = 0x1b0a44u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 255));
    // 0x1b0a48: 0x1840fff4
    ctx->pc = 0x1B0A48u;
    {
        const bool branch_taken_0x1b0a48 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B0A4Cu;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 6), 255));
        if (branch_taken_0x1b0a48) {
            ctx->pc = 0x1B0A1Cu;
            goto label_1b0a1c;
        }
    }
    ctx->pc = 0x1B0A50u;
    // 0x1b0a50: 0xc068764
    ctx->pc = 0x1B0A50u;
    SET_GPR_U32(ctx, 31, 0x1B0A58u);
    ctx->pc = 0x1B0A54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1A1D90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1D90_0x1a1d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0A58u; }
    }
    if (ctx->pc != 0x1B0A58u) { return; }
    ctx->pc = 0x1B0A58u;
    // 0x1b0a58: 0xc06874c
    ctx->pc = 0x1B0A58u;
    SET_GPR_U32(ctx, 31, 0x1B0A60u);
    ctx->pc = 0x1A1D30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1D30_0x1a1d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0A60u; }
    }
    if (ctx->pc != 0x1B0A60u) { return; }
    ctx->pc = 0x1B0A60u;
    // 0x1b0a60: 0x2163c
    ctx->pc = 0x1b0a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1b0a64: 0x2163f
    ctx->pc = 0x1b0a64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_1b0a68:
    // 0x1b0a68: 0xdfbf0000
    ctx->pc = 0x1b0a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0a6c: 0x3e00008
    ctx->pc = 0x1B0A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0A70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0A1Cu: goto label_1b0a1c;
            case 0x1B0A40u: goto label_1b0a40;
            case 0x1B0A44u: goto label_1b0a44;
            case 0x1B0A68u: goto label_1b0a68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B0A74u;
    // 0x1b0a74: 0x0
    ctx->pc = 0x1b0a74u;
    // NOP
    // 0x1b0a78: 0x0
    ctx->pc = 0x1b0a78u;
    // NOP
    // 0x1b0a7c: 0x0
    ctx->pc = 0x1b0a7cu;
    // NOP
}
