#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00144EB0
// Address: 0x144eb0 - 0x144f38
void sub_00144EB0_0x144eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x144eb0u;

    // 0x144eb0: 0x80502d
    ctx->pc = 0x144eb0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144eb4: 0x24020010
    ctx->pc = 0x144eb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x144eb8: 0x8d440000
    ctx->pc = 0x144eb8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x144ebc: 0xa24804
    ctx->pc = 0x144ebcu;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x144ec0: 0x41843
    ctx->pc = 0x144ec0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
    // 0x144ec4: 0x18c0000c
    ctx->pc = 0x144EC4u;
    {
        const bool branch_taken_0x144ec4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x144EC8u;
        if (GPR_U32(ctx, 8) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
        if (branch_taken_0x144ec4) {
            ctx->pc = 0x144EF8u;
            goto label_144ef8;
        }
    }
    ctx->pc = 0x144ECCu;
    // 0x144ecc: 0x24c2ffff
    ctx->pc = 0x144eccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x144ed0: 0x24840001
    ctx->pc = 0x144ed0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x144ed4: 0xa21004
    ctx->pc = 0x144ed4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x144ed8: 0x471021
    ctx->pc = 0x144ed8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x144edc: 0x822021
    ctx->pc = 0x144edcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x144ee0: 0x89182a
    ctx->pc = 0x144ee0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 9)));
    // 0x144ee4: 0x14600011
    ctx->pc = 0x144EE4u;
    {
        const bool branch_taken_0x144ee4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x144EE8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x144ee4) {
            ctx->pc = 0x144F2Cu;
            goto label_144f2c;
        }
    }
    ctx->pc = 0x144EECu;
    // 0x144eec: 0x91040
    ctx->pc = 0x144eecu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 1));
    // 0x144ef0: 0x1000000d
    ctx->pc = 0x144EF0u;
    {
        const bool branch_taken_0x144ef0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x144EF4u;
        SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        if (branch_taken_0x144ef0) {
            ctx->pc = 0x144F28u;
            goto label_144f28;
        }
    }
    ctx->pc = 0x144EF8u;
label_144ef8:
    // 0x144ef8: 0x4c1000c
    ctx->pc = 0x144EF8u;
    {
        const bool branch_taken_0x144ef8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x144EFCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x144ef8) {
            ctx->pc = 0x144F2Cu;
            goto label_144f2c;
        }
    }
    ctx->pc = 0x144F00u;
    // 0x144f00: 0x61027
    ctx->pc = 0x144f00u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x144f04: 0x2484ffff
    ctx->pc = 0x144f04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x144f08: 0xa21004
    ctx->pc = 0x144f08u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x144f0c: 0x91823
    ctx->pc = 0x144f0cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x144f10: 0x471021
    ctx->pc = 0x144f10u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x144f14: 0x822023
    ctx->pc = 0x144f14u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x144f18: 0x83182a
    ctx->pc = 0x144f18u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x144f1c: 0x10600002
    ctx->pc = 0x144F1Cu;
    {
        const bool branch_taken_0x144f1c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x144F20u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 1));
        if (branch_taken_0x144f1c) {
            ctx->pc = 0x144F28u;
            goto label_144f28;
        }
    }
    ctx->pc = 0x144F24u;
    // 0x144f24: 0x822021
    ctx->pc = 0x144f24u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_144f28:
    // 0x144f28: 0x41040
    ctx->pc = 0x144f28u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
label_144f2c:
    // 0x144f2c: 0x88100a
    ctx->pc = 0x144f2cu;
    if (GPR_U32(ctx, 8) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x144f30: 0x3e00008
    ctx->pc = 0x144F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144F34u;
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144EF8u: goto label_144ef8;
            case 0x144F28u: goto label_144f28;
            case 0x144F2Cu: goto label_144f2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x144F38u;
}
