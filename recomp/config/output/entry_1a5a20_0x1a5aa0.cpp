#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1a5a20
// Address: 0x1a5a20 - 0x1a5aa0
void entry_1a5a20_0x1a5aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a5a20u;

    // 0x1a5a20: 0x27bdfff0
    ctx->pc = 0x1a5a20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a5a24: 0x80582d
    ctx->pc = 0x1a5a24u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5a28: 0xffbf0000
    ctx->pc = 0x1a5a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a5a2c: 0xc069630
    ctx->pc = 0x1A5A2Cu;
    SET_GPR_U32(ctx, 31, 0x1A5A34u);
    ctx->pc = 0x1A5A30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A58C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A58C0_0x1a58c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5A34u; }
    }
    if (ctx->pc != 0x1A5A34u) { return; }
    ctx->pc = 0x1A5A34u;
    // 0x1a5a34: 0x40382d
    ctx->pc = 0x1a5a34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5a38: 0x24050030
    ctx->pc = 0x1a5a38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 48));
    // 0x1a5a3c: 0x90420011
    ctx->pc = 0x1a5a3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    // 0x1a5a40: 0x28410002
    ctx->pc = 0x1a5a40u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 2));
    // 0x1a5a44: 0x14200008
    ctx->pc = 0x1A5A44u;
    {
        const bool branch_taken_0x1a5a44 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A5A48u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a5a44) {
            ctx->pc = 0x1A5A68u;
            goto label_1a5a68;
        }
    }
    ctx->pc = 0x1A5A4Cu;
    // 0x1a5a4c: 0x28410005
    ctx->pc = 0x1a5a4cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 5));
    // 0x1a5a50: 0x10200003
    ctx->pc = 0x1A5A50u;
    {
        const bool branch_taken_0x1a5a50 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a5a50) {
            ctx->pc = 0x1A5A60u;
            goto label_1a5a60;
        }
    }
    ctx->pc = 0x1A5A58u;
    // 0x1a5a58: 0x10000002
    ctx->pc = 0x1A5A58u;
    {
        const bool branch_taken_0x1a5a58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5A5Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x1a5a58) {
            ctx->pc = 0x1A5A64u;
            goto label_1a5a64;
        }
    }
    ctx->pc = 0x1A5A60u;
label_1a5a60:
    // 0x1a5a60: 0xa0102d
    ctx->pc = 0x1a5a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a5a64:
    // 0x1a5a64: 0xa22821
    ctx->pc = 0x1a5a64u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1a5a68:
    // 0x1a5a68: 0xc069614
    ctx->pc = 0x1A5A68u;
    SET_GPR_U32(ctx, 31, 0x1A5A70u);
    ctx->pc = 0x1A5A6Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A5850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5850_0x1a5850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5A70u; }
    }
    if (ctx->pc != 0x1A5A70u) { return; }
    ctx->pc = 0x1A5A70u;
    // 0x1a5a70: 0xe23821
    ctx->pc = 0x1a5a70u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a5a74: 0x8cc20004
    ctx->pc = 0x1a5a74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1a5a78: 0x10400004
    ctx->pc = 0x1A5A78u;
    {
        const bool branch_taken_0x1a5a78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a5a78) {
            ctx->pc = 0x1A5A8Cu;
            goto label_1a5a8c;
        }
    }
    ctx->pc = 0x1A5A80u;
    // 0x1a5a80: 0x8cc20008
    ctx->pc = 0x1a5a80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a5a84: 0x10000002
    ctx->pc = 0x1A5A84u;
    {
        const bool branch_taken_0x1a5a84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5A88u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        if (branch_taken_0x1a5a84) {
            ctx->pc = 0x1A5A90u;
            goto label_1a5a90;
        }
    }
    ctx->pc = 0x1A5A8Cu;
label_1a5a8c:
    // 0x1a5a8c: 0x102d
    ctx->pc = 0x1a5a8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5a90:
    // 0x1a5a90: 0xdfbf0000
    ctx->pc = 0x1a5a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5a94: 0x3e00008
    ctx->pc = 0x1A5A94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5A98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5A60u: goto label_1a5a60;
            case 0x1A5A64u: goto label_1a5a64;
            case 0x1A5A68u: goto label_1a5a68;
            case 0x1A5A8Cu: goto label_1a5a8c;
            case 0x1A5A90u: goto label_1a5a90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5A9Cu;
    // 0x1a5a9c: 0x0
    ctx->pc = 0x1a5a9cu;
    // NOP
}
