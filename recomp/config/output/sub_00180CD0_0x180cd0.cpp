#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00180CD0
// Address: 0x180cd0 - 0x180d90
void sub_00180CD0_0x180cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x180cd0u;

    // 0x180cd0: 0x27bdffe0
    ctx->pc = 0x180cd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x180cd4: 0x3c028101
    ctx->pc = 0x180cd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x180cd8: 0xffb10008
    ctx->pc = 0x180cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x180cdc: 0x3c110023
    ctx->pc = 0x180cdcu;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
    // 0x180ce0: 0x8e23fa10
    ctx->pc = 0x180ce0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4294965776)));
    // 0x180ce4: 0x34428001
    ctx->pc = 0x180ce4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32769));
    // 0x180ce8: 0xffb00000
    ctx->pc = 0x180ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x180cec: 0x10600022
    ctx->pc = 0x180CECu;
    {
        const bool branch_taken_0x180cec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x180CF0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x180cec) {
            ctx->pc = 0x180D78u;
            goto label_180d78;
        }
    }
    ctx->pc = 0x180CF4u;
    // 0x180cf4: 0x3c030028
    ctx->pc = 0x180cf4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)40 << 16));
    // 0x180cf8: 0x3c028101
    ctx->pc = 0x180cf8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x180cfc: 0x8c649504
    ctx->pc = 0x180cfcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4294939908)));
    // 0x180d00: 0x1480001d
    ctx->pc = 0x180D00u;
    {
        const bool branch_taken_0x180d00 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x180D04u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16));
        if (branch_taken_0x180d00) {
            ctx->pc = 0x180D78u;
            goto label_180d78;
        }
    }
    ctx->pc = 0x180D08u;
    // 0x180d08: 0x3c020028
    ctx->pc = 0x180d08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)40 << 16));
    // 0x180d0c: 0x24509a20
    ctx->pc = 0x180d0cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294941216));
    // 0x180d10: 0x8e040004
    ctx->pc = 0x180d10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x180d14: 0x4820004
    ctx->pc = 0x180D14u;
    {
        const bool branch_taken_0x180d14 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x180d14) {
            ctx->pc = 0x180D18u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->pc = 0x180D28u;
            goto label_180d28;
        }
    }
    ctx->pc = 0x180D1Cu;
    // 0x180d1c: 0xc04518c
    ctx->pc = 0x180D1Cu;
    SET_GPR_U32(ctx, 31, 0x180D24u);
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180D24u; }
    }
    if (ctx->pc != 0x180D24u) { return; }
    ctx->pc = 0x180D24u;
    // 0x180d24: 0x8e040008
    ctx->pc = 0x180d24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_180d28:
    // 0x180d28: 0x4820004
    ctx->pc = 0x180D28u;
    {
        const bool branch_taken_0x180d28 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x180d28) {
            ctx->pc = 0x180D2Cu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x180D3Cu;
            goto label_180d3c;
        }
    }
    ctx->pc = 0x180D30u;
    // 0x180d30: 0xc04518c
    ctx->pc = 0x180D30u;
    SET_GPR_U32(ctx, 31, 0x180D38u);
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180D38u; }
    }
    if (ctx->pc != 0x180D38u) { return; }
    ctx->pc = 0x180D38u;
    // 0x180d38: 0x8e040000
    ctx->pc = 0x180d38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_180d3c:
    // 0x180d3c: 0x480000a
    ctx->pc = 0x180D3Cu;
    {
        const bool branch_taken_0x180d3c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x180d3c) {
            ctx->pc = 0x180D68u;
            goto label_180d68;
        }
    }
    ctx->pc = 0x180D44u;
    // 0x180d44: 0xc04511c
    ctx->pc = 0x180D44u;
    SET_GPR_U32(ctx, 31, 0x180D4Cu);
    ctx->pc = 0x114470u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114470_0x114470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180D4Cu; }
    }
    if (ctx->pc != 0x180D4Cu) { return; }
    ctx->pc = 0x180D4Cu;
    // 0x180d4c: 0x4410004
    ctx->pc = 0x180D4Cu;
    {
        const bool branch_taken_0x180d4c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x180d4c) {
            ctx->pc = 0x180D60u;
            goto label_180d60;
        }
    }
    ctx->pc = 0x180D54u;
    // 0x180d54: 0x3c040024
    ctx->pc = 0x180d54u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x180d58: 0xc045a12
    ctx->pc = 0x180D58u;
    SET_GPR_U32(ctx, 31, 0x180D60u);
    ctx->pc = 0x180D5Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 5632));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180D60u; }
    }
    if (ctx->pc != 0x180D60u) { return; }
    ctx->pc = 0x180D60u;
label_180d60:
    // 0x180d60: 0xc04510c
    ctx->pc = 0x180D60u;
    SET_GPR_U32(ctx, 31, 0x180D68u);
    ctx->pc = 0x180D64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x114430u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114430_0x114430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180D68u; }
    }
    if (ctx->pc != 0x180D68u) { return; }
    ctx->pc = 0x180D68u;
label_180d68:
    // 0x180d68: 0xc061e38
    ctx->pc = 0x180D68u;
    SET_GPR_U32(ctx, 31, 0x180D70u);
    ctx->pc = 0x1878E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001878E0_0x1878e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180D70u; }
    }
    if (ctx->pc != 0x180D70u) { return; }
    ctx->pc = 0x180D70u;
    // 0x180d70: 0xae20fa10
    ctx->pc = 0x180d70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294965776), GPR_U32(ctx, 0));
    // 0x180d74: 0x102d
    ctx->pc = 0x180d74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180d78:
    // 0x180d78: 0xdfb00000
    ctx->pc = 0x180d78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180d7c: 0xdfb10008
    ctx->pc = 0x180d7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x180d80: 0xdfbf0010
    ctx->pc = 0x180d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180d84: 0x3e00008
    ctx->pc = 0x180D84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180D88u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180D28u: goto label_180d28;
            case 0x180D3Cu: goto label_180d3c;
            case 0x180D60u: goto label_180d60;
            case 0x180D68u: goto label_180d68;
            case 0x180D78u: goto label_180d78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180D8Cu;
    // 0x180d8c: 0x0
    ctx->pc = 0x180d8cu;
    // NOP
}
