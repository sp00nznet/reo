#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00172B68
// Address: 0x172b68 - 0x172bd8
void sub_00172B68_0x172b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x172b68u;

    // 0x172b68: 0x27bdfff0
    ctx->pc = 0x172b68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x172b6c: 0xffb00000
    ctx->pc = 0x172b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x172b70: 0xffbf0008
    ctx->pc = 0x172b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x172b74: 0xc05cc4c
    ctx->pc = 0x172B74u;
    SET_GPR_U32(ctx, 31, 0x172B7Cu);
    ctx->pc = 0x172B78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x173130u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00173130_0x173130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172B7Cu; }
    }
    if (ctx->pc != 0x172B7Cu) { return; }
    ctx->pc = 0x172B7Cu;
    // 0x172b7c: 0x14400005
    ctx->pc = 0x172B7Cu;
    {
        const bool branch_taken_0x172b7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x172B80u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x172b7c) {
            ctx->pc = 0x172B94u;
            goto label_172b94;
        }
    }
    ctx->pc = 0x172B84u;
    // 0x172b84: 0xc05cb12
    ctx->pc = 0x172B84u;
    SET_GPR_U32(ctx, 31, 0x172B8Cu);
    ctx->pc = 0x172C48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00172C48_0x172c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172B8Cu; }
    }
    if (ctx->pc != 0x172B8Cu) { return; }
    ctx->pc = 0x172B8Cu;
    // 0x172b8c: 0x50400004
    ctx->pc = 0x172B8Cu;
    {
        const bool branch_taken_0x172b8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x172b8c) {
            ctx->pc = 0x172B90u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->pc = 0x172BA0u;
            goto label_172ba0;
        }
    }
    ctx->pc = 0x172B94u;
label_172b94:
    // 0x172b94: 0x1000000c
    ctx->pc = 0x172B94u;
    {
        const bool branch_taken_0x172b94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x172B98u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 72)));
        if (branch_taken_0x172b94) {
            ctx->pc = 0x172BC8u;
            goto label_172bc8;
        }
    }
    ctx->pc = 0x172B9Cu;
    // 0x172b9c: 0x0
    ctx->pc = 0x172b9cu;
    // NOP
label_172ba0:
    // 0x172ba0: 0x8e040048
    ctx->pc = 0x172ba0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x172ba4: 0x28a20002
    ctx->pc = 0x172ba4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 2));
    // 0x172ba8: 0x14400006
    ctx->pc = 0x172BA8u;
    {
        const bool branch_taken_0x172ba8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x172BACu;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 5));
        if (branch_taken_0x172ba8) {
            ctx->pc = 0x172BC4u;
            goto label_172bc4;
        }
    }
    ctx->pc = 0x172BB0u;
    // 0x172bb0: 0x14600005
    ctx->pc = 0x172BB0u;
    {
        const bool branch_taken_0x172bb0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x172BB4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x172bb0) {
            ctx->pc = 0x172BC8u;
            goto label_172bc8;
        }
    }
    ctx->pc = 0x172BB8u;
    // 0x172bb8: 0x24030006
    ctx->pc = 0x172bb8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
    // 0x172bbc: 0xa31026
    ctx->pc = 0x172bbcu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x172bc0: 0x62200a
    ctx->pc = 0x172bc0u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
label_172bc4:
    // 0x172bc4: 0x80102d
    ctx->pc = 0x172bc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_172bc8:
    // 0x172bc8: 0xdfb00000
    ctx->pc = 0x172bc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172bcc: 0xdfbf0008
    ctx->pc = 0x172bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x172bd0: 0x3e00008
    ctx->pc = 0x172BD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172BD4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172B94u: goto label_172b94;
            case 0x172BA0u: goto label_172ba0;
            case 0x172BC4u: goto label_172bc4;
            case 0x172BC8u: goto label_172bc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172BD8u;
}
