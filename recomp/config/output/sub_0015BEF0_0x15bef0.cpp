#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015BEF0
// Address: 0x15bef0 - 0x15bfa8
void sub_0015BEF0_0x15bef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15bef0u;

label_15bef0:
    // 0x15bef0: 0x27bdffe0
    ctx->pc = 0x15bef0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15bef4: 0xffb00000
    ctx->pc = 0x15bef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15bef8: 0x80802d
    ctx->pc = 0x15bef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15befc: 0xffb10008
    ctx->pc = 0x15befcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15bf00: 0xffbf0010
    ctx->pc = 0x15bf00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15bf04: 0x8e05000c
    ctx->pc = 0x15bf04u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15bf08: 0xc0582d6
    ctx->pc = 0x15BF08u;
    SET_GPR_U32(ctx, 31, 0x15BF10u);
    ctx->pc = 0x15BF0Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x160B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B58_0x160b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BF10u; }
    }
    if (ctx->pc != 0x15BF10u) { return; }
    ctx->pc = 0x15BF10u;
    // 0x15bf10: 0x200202d
    ctx->pc = 0x15bf10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bf14: 0xc058630
    ctx->pc = 0x15BF14u;
    SET_GPR_U32(ctx, 31, 0x15BF1Cu);
    ctx->pc = 0x15BF18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1618C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001618C0_0x1618c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BF1Cu; }
    }
    if (ctx->pc != 0x15BF1Cu) { return; }
    ctx->pc = 0x15BF1Cu;
    // 0x15bf1c: 0x24030001
    ctx->pc = 0x15bf1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15bf20: 0x3c040002
    ctx->pc = 0x15bf20u;
    SET_GPR_U32(ctx, 4, ((uint32_t)2 << 16));
    // 0x15bf24: 0x912021
    ctx->pc = 0x15bf24u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x15bf28: 0x431026
    ctx->pc = 0x15bf28u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15bf2c: 0xdfb00000
    ctx->pc = 0x15bf2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bf30: 0x82880a
    ctx->pc = 0x15bf30u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 4));
    // 0x15bf34: 0xdfbf0010
    ctx->pc = 0x15bf34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bf38: 0x220102d
    ctx->pc = 0x15bf38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bf3c: 0xdfb10008
    ctx->pc = 0x15bf3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15bf40: 0x3e00008
    ctx->pc = 0x15BF40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BF44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15BEF0u: goto label_15bef0;
            case 0x15BF78u: goto label_15bf78;
            case 0x15BF8Cu: goto label_15bf8c;
            case 0x15BF90u: goto label_15bf90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15BF48u;
    // 0x15bf48: 0x27bdffe0
    ctx->pc = 0x15bf48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15bf4c: 0xffb10008
    ctx->pc = 0x15bf4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15bf50: 0x80882d
    ctx->pc = 0x15bf50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bf54: 0xffb00000
    ctx->pc = 0x15bf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15bf58: 0x16200007
    ctx->pc = 0x15BF58u;
    {
        const bool branch_taken_0x15bf58 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x15BF5Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x15bf58) {
            ctx->pc = 0x15BF78u;
            goto label_15bf78;
        }
    }
    ctx->pc = 0x15BF60u;
    // 0x15bf60: 0x3c040024
    ctx->pc = 0x15bf60u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15bf64: 0xc058dd4
    ctx->pc = 0x15BF64u;
    SET_GPR_U32(ctx, 31, 0x15BF6Cu);
    ctx->pc = 0x15BF68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294960960));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BF6Cu; }
    }
    if (ctx->pc != 0x15BF6Cu) { return; }
    ctx->pc = 0x15BF6Cu;
    // 0x15bf6c: 0x10000008
    ctx->pc = 0x15BF6Cu;
    {
        const bool branch_taken_0x15bf6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15BF70u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15bf6c) {
            ctx->pc = 0x15BF90u;
            goto label_15bf90;
        }
    }
    ctx->pc = 0x15BF74u;
    // 0x15bf74: 0x0
    ctx->pc = 0x15bf74u;
    // NOP
label_15bf78:
    // 0x15bf78: 0xc056f8e
    ctx->pc = 0x15BF78u;
    SET_GPR_U32(ctx, 31, 0x15BF80u);
    ctx->pc = 0x15BE38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BE38_0x15be38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BF80u; }
    }
    if (ctx->pc != 0x15BF80u) { return; }
    ctx->pc = 0x15BF80u;
    // 0x15bf80: 0x220202d
    ctx->pc = 0x15bf80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bf84: 0xc056fbc
    ctx->pc = 0x15BF84u;
    SET_GPR_U32(ctx, 31, 0x15BF8Cu);
    ctx->pc = 0x15BF88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15BEF0u;
    goto label_15bef0;
    ctx->pc = 0x15BF8Cu;
label_15bf8c:
    // 0x15bf8c: 0x2021021
    ctx->pc = 0x15bf8cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_15bf90:
    // 0x15bf90: 0xdfb00000
    ctx->pc = 0x15bf90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bf94: 0xdfb10008
    ctx->pc = 0x15bf94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15bf98: 0xdfbf0010
    ctx->pc = 0x15bf98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bf9c: 0x3e00008
    ctx->pc = 0x15BF9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BFA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15BEF0u: goto label_15bef0;
            case 0x15BF78u: goto label_15bf78;
            case 0x15BF8Cu: goto label_15bf8c;
            case 0x15BF90u: goto label_15bf90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15BFA4u;
    // 0x15bfa4: 0x0
    ctx->pc = 0x15bfa4u;
    // NOP
}
