#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013BBA8
// Address: 0x13bba8 - 0x13bc38
void sub_0013BBA8_0x13bba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13bba8u;

    // 0x13bba8: 0x27bdfff0
    ctx->pc = 0x13bba8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13bbac: 0x80102d
    ctx->pc = 0x13bbacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bbb0: 0x14400007
    ctx->pc = 0x13BBB0u;
    {
        const bool branch_taken_0x13bbb0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13BBB4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x13bbb0) {
            ctx->pc = 0x13BBD0u;
            goto label_13bbd0;
        }
    }
    ctx->pc = 0x13BBB8u;
    // 0x13bbb8: 0x3c050024
    ctx->pc = 0x13bbb8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x13bbbc: 0xc04ebf2
    ctx->pc = 0x13BBBCu;
    SET_GPR_U32(ctx, 31, 0x13BBC4u);
    ctx->pc = 0x13BBC0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955184));
    ctx->pc = 0x13AFC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013AFC8_0x13afc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BBC4u; }
    }
    if (ctx->pc != 0x13BBC4u) { return; }
    ctx->pc = 0x13BBC4u;
    // 0x13bbc4: 0x10000003
    ctx->pc = 0x13BBC4u;
    {
        const bool branch_taken_0x13bbc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13BBC8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13bbc4) {
            ctx->pc = 0x13BBD4u;
            goto label_13bbd4;
        }
    }
    ctx->pc = 0x13BBCCu;
    // 0x13bbcc: 0x0
    ctx->pc = 0x13bbccu;
    // NOP
label_13bbd0:
    // 0x13bbd0: 0x80420002
    ctx->pc = 0x13bbd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_13bbd4:
    // 0x13bbd4: 0xdfbf0000
    ctx->pc = 0x13bbd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13bbd8: 0x3e00008
    ctx->pc = 0x13BBD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BBDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13BBD0u: goto label_13bbd0;
            case 0x13BBD4u: goto label_13bbd4;
            case 0x13BC10u: goto label_13bc10;
            case 0x13BC28u: goto label_13bc28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13BBE0u;
    // 0x13bbe0: 0x3e00008
    ctx->pc = 0x13BBE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BBE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13BBD0u: goto label_13bbd0;
            case 0x13BBD4u: goto label_13bbd4;
            case 0x13BC10u: goto label_13bc10;
            case 0x13BC28u: goto label_13bc28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13BBE8u;
    // 0x13bbe8: 0x27bdfff0
    ctx->pc = 0x13bbe8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13bbec: 0x80282d
    ctx->pc = 0x13bbecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bbf0: 0x14a00007
    ctx->pc = 0x13BBF0u;
    {
        const bool branch_taken_0x13bbf0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x13BBF4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x13bbf0) {
            ctx->pc = 0x13BC10u;
            goto label_13bc10;
        }
    }
    ctx->pc = 0x13BBF8u;
    // 0x13bbf8: 0x3c050024
    ctx->pc = 0x13bbf8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x13bbfc: 0xc04ebf2
    ctx->pc = 0x13BBFCu;
    SET_GPR_U32(ctx, 31, 0x13BC04u);
    ctx->pc = 0x13BC00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955184));
    ctx->pc = 0x13AFC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013AFC8_0x13afc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BC04u; }
    }
    if (ctx->pc != 0x13BC04u) { return; }
    ctx->pc = 0x13BC04u;
    // 0x13bc04: 0x10000008
    ctx->pc = 0x13BC04u;
    {
        const bool branch_taken_0x13bc04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13BC08u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13bc04) {
            ctx->pc = 0x13BC28u;
            goto label_13bc28;
        }
    }
    ctx->pc = 0x13BC0Cu;
    // 0x13bc0c: 0x0
    ctx->pc = 0x13bc0cu;
    // NOP
label_13bc10:
    // 0x13bc10: 0x80a30002
    ctx->pc = 0x13bc10u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x13bc14: 0x24020001
    ctx->pc = 0x13bc14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x13bc18: 0x54620003
    ctx->pc = 0x13BC18u;
    {
        const bool branch_taken_0x13bc18 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x13bc18) {
            ctx->pc = 0x13BC1Cu;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x13BC28u;
            goto label_13bc28;
        }
    }
    ctx->pc = 0x13BC20u;
    // 0x13bc20: 0x8ca20028
    ctx->pc = 0x13bc20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x13bc24: 0x212c0
    ctx->pc = 0x13bc24u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 11));
label_13bc28:
    // 0x13bc28: 0xdfbf0000
    ctx->pc = 0x13bc28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13bc2c: 0x3e00008
    ctx->pc = 0x13BC2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BC30u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13BBD0u: goto label_13bbd0;
            case 0x13BBD4u: goto label_13bbd4;
            case 0x13BC10u: goto label_13bc10;
            case 0x13BC28u: goto label_13bc28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13BC34u;
    // 0x13bc34: 0x0
    ctx->pc = 0x13bc34u;
    // NOP
}
