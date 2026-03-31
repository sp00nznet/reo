#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00113B08
// Address: 0x113b08 - 0x113ba8
void sub_00113B08_0x113b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x113b08u;

    // 0x113b08: 0x27bdffc0
    ctx->pc = 0x113b08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x113b0c: 0xffb10010
    ctx->pc = 0x113b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x113b10: 0xffb20020
    ctx->pc = 0x113b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x113b14: 0xffb00000
    ctx->pc = 0x113b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x113b18: 0xffbf0030
    ctx->pc = 0x113b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x113b1c: 0xc0449be
    ctx->pc = 0x113B1Cu;
    SET_GPR_U32(ctx, 31, 0x113B24u);
    ctx->pc = 0x113B20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1126F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001126F8_0x1126f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113B24u; }
    }
    if (ctx->pc != 0x113B24u) { return; }
    ctx->pc = 0x113B24u;
    // 0x113b24: 0x40802d
    ctx->pc = 0x113b24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b28: 0x16200009
    ctx->pc = 0x113B28u;
    {
        const bool branch_taken_0x113b28 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x113B2Cu;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        if (branch_taken_0x113b28) {
            ctx->pc = 0x113B50u;
            goto label_113b50;
        }
    }
    ctx->pc = 0x113B30u;
    // 0x113b30: 0xc045440
    ctx->pc = 0x113B30u;
    SET_GPR_U32(ctx, 31, 0x113B38u);
    ctx->pc = 0x113B34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x115100u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00115100_0x115100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113B38u; }
    }
    if (ctx->pc != 0x113B38u) { return; }
    ctx->pc = 0x113B38u;
    // 0x113b38: 0x8e05000c
    ctx->pc = 0x113b38u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x113b3c: 0xc0450c8
    ctx->pc = 0x113B3Cu;
    SET_GPR_U32(ctx, 31, 0x113B44u);
    ctx->pc = 0x113B40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x114320u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114320_0x114320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113B44u; }
    }
    if (ctx->pc != 0x113B44u) { return; }
    ctx->pc = 0x113B44u;
    // 0x113b44: 0xae000008
    ctx->pc = 0x113b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x113b48: 0x10000010
    ctx->pc = 0x113B48u;
    {
        const bool branch_taken_0x113b48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x113B4Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        if (branch_taken_0x113b48) {
            ctx->pc = 0x113B8Cu;
            goto label_113b8c;
        }
    }
    ctx->pc = 0x113B50u;
label_113b50:
    // 0x113b50: 0x52400007
    ctx->pc = 0x113B50u;
    {
        const bool branch_taken_0x113b50 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x113b50) {
            ctx->pc = 0x113B54u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
            ctx->pc = 0x113B70u;
            goto label_113b70;
        }
    }
    ctx->pc = 0x113B58u;
    // 0x113b58: 0xc045440
    ctx->pc = 0x113B58u;
    SET_GPR_U32(ctx, 31, 0x113B60u);
    ctx->pc = 0x113B5Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x115100u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00115100_0x115100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113B60u; }
    }
    if (ctx->pc != 0x113B60u) { return; }
    ctx->pc = 0x113B60u;
    // 0x113b60: 0x8e05000c
    ctx->pc = 0x113b60u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x113b64: 0xc0450c8
    ctx->pc = 0x113B64u;
    SET_GPR_U32(ctx, 31, 0x113B6Cu);
    ctx->pc = 0x113B68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x114320u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114320_0x114320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113B6Cu; }
    }
    if (ctx->pc != 0x113B6Cu) { return; }
    ctx->pc = 0x113B6Cu;
    // 0x113b6c: 0xae110008
    ctx->pc = 0x113b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
label_113b70:
    // 0x113b70: 0x220282d
    ctx->pc = 0x113b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b74: 0x24040002
    ctx->pc = 0x113b74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x113b78: 0xc0450c0
    ctx->pc = 0x113B78u;
    SET_GPR_U32(ctx, 31, 0x113B80u);
    ctx->pc = 0x113B7Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x114300u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114300_0x114300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113B80u; }
    }
    if (ctx->pc != 0x113B80u) { return; }
    ctx->pc = 0x113B80u;
    // 0x113b80: 0xae02000c
    ctx->pc = 0x113b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x113b84: 0xc04545a
    ctx->pc = 0x113B84u;
    SET_GPR_U32(ctx, 31, 0x113B8Cu);
    ctx->pc = 0x113B88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x115168u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00115168_0x115168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113B8Cu; }
    }
    if (ctx->pc != 0x113B8Cu) { return; }
    ctx->pc = 0x113B8Cu;
label_113b8c:
    // 0x113b8c: 0x240102d
    ctx->pc = 0x113b8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b90: 0xdfbf0030
    ctx->pc = 0x113b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x113b94: 0xdfb20020
    ctx->pc = 0x113b94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113b98: 0xdfb10010
    ctx->pc = 0x113b98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113b9c: 0xdfb00000
    ctx->pc = 0x113b9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113ba0: 0x3e00008
    ctx->pc = 0x113BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113BA4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x113B50u: goto label_113b50;
            case 0x113B70u: goto label_113b70;
            case 0x113B8Cu: goto label_113b8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x113BA8u;
}
