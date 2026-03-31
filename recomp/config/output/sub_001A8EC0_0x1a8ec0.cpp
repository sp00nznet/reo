#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A8EC0
// Address: 0x1a8ec0 - 0x1a9040
void sub_001A8EC0_0x1a8ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a8ec0u;

    // 0x1a8ec0: 0x27bdf7d0
    ctx->pc = 0x1a8ec0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294965200));
    // 0x1a8ec4: 0x3c050024
    ctx->pc = 0x1a8ec4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x1a8ec8: 0xffbf0020
    ctx->pc = 0x1a8ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a8ecc: 0x24a52628
    ctx->pc = 0x1a8eccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9768));
    // 0x1a8ed0: 0x7fb10010
    ctx->pc = 0x1a8ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a8ed4: 0x7fb00000
    ctx->pc = 0x1a8ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a8ed8: 0x80802d
    ctx->pc = 0x1a8ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8edc: 0xc042bf0
    ctx->pc = 0x1A8EDCu;
    SET_GPR_U32(ctx, 31, 0x1A8EE4u);
    ctx->pc = 0x1A8EE0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8EE4u; }
    }
    if (ctx->pc != 0x1A8EE4u) { return; }
    ctx->pc = 0x1A8EE4u;
    // 0x1a8ee4: 0xc042c56
    ctx->pc = 0x1A8EE4u;
    SET_GPR_U32(ctx, 31, 0x1A8EECu);
    ctx->pc = 0x1A8EE8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8EECu; }
    }
    if (ctx->pc != 0x1A8EECu) { return; }
    ctx->pc = 0x1A8EECu;
    // 0x1a8eec: 0x5d1021
    ctx->pc = 0x1a8eecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a8ef0: 0x200282d
    ctx->pc = 0x1a8ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8ef4: 0x24500030
    ctx->pc = 0x1a8ef4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 48));
    // 0x1a8ef8: 0xc042aee
    ctx->pc = 0x1A8EF8u;
    SET_GPR_U32(ctx, 31, 0x1A8F00u);
    ctx->pc = 0x1A8EFCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F00u; }
    }
    if (ctx->pc != 0x1A8F00u) { return; }
    ctx->pc = 0x1A8F00u;
    // 0x1a8f00: 0xc04336a
    ctx->pc = 0x1A8F00u;
    SET_GPR_U32(ctx, 31, 0x1A8F08u);
    ctx->pc = 0x1A8F04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10CDA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CDA8_0x10cda8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F08u; }
    }
    if (ctx->pc != 0x1A8F08u) { return; }
    ctx->pc = 0x1A8F08u;
    // 0x1a8f08: 0x3c050024
    ctx->pc = 0x1a8f08u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x1a8f0c: 0x27a40030
    ctx->pc = 0x1a8f0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a8f10: 0xc042aee
    ctx->pc = 0x1A8F10u;
    SET_GPR_U32(ctx, 31, 0x1A8F18u);
    ctx->pc = 0x1A8F14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9776));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F18u; }
    }
    if (ctx->pc != 0x1A8F18u) { return; }
    ctx->pc = 0x1A8F18u;
    // 0x1a8f18: 0x3c01002b
    ctx->pc = 0x1a8f18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a8f1c: 0x8c220ec0
    ctx->pc = 0x1a8f1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 3776)));
    // 0x1a8f20: 0x10400004
    ctx->pc = 0x1A8F20u;
    {
        const bool branch_taken_0x1a8f20 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8F24u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
        if (branch_taken_0x1a8f20) {
            ctx->pc = 0x1A8F34u;
            goto label_1a8f34;
        }
    }
    ctx->pc = 0x1A8F28u;
    // 0x1a8f28: 0xc04af5e
    ctx->pc = 0x1A8F28u;
    SET_GPR_U32(ctx, 31, 0x1A8F30u);
    ctx->pc = 0x12BD78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BD78_0x12bd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F30u; }
    }
    if (ctx->pc != 0x1A8F30u) { return; }
    ctx->pc = 0x1A8F30u;
    // 0x1a8f30: 0x27a40030
    ctx->pc = 0x1a8f30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
label_1a8f34:
    // 0x1a8f34: 0xc04629c
    ctx->pc = 0x1A8F34u;
    SET_GPR_U32(ctx, 31, 0x1A8F3Cu);
    ctx->pc = 0x1A8F38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x118A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118A70_0x118a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F3Cu; }
    }
    if (ctx->pc != 0x1A8F3Cu) { return; }
    ctx->pc = 0x1A8F3Cu;
    // 0x1a8f3c: 0x441000a
    ctx->pc = 0x1A8F3Cu;
    {
        const bool branch_taken_0x1a8f3c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A8F40u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a8f3c) {
            ctx->pc = 0x1A8F68u;
            goto label_1a8f68;
        }
    }
    ctx->pc = 0x1A8F44u;
    // 0x1a8f44: 0x3c01002b
    ctx->pc = 0x1a8f44u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a8f48: 0x8c220ec0
    ctx->pc = 0x1a8f48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 3776)));
    // 0x1a8f4c: 0x10400004
    ctx->pc = 0x1A8F4Cu;
    {
        const bool branch_taken_0x1a8f4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8F50u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a8f4c) {
            ctx->pc = 0x1A8F60u;
            goto label_1a8f60;
        }
    }
    ctx->pc = 0x1A8F54u;
    // 0x1a8f54: 0xc04af64
    ctx->pc = 0x1A8F54u;
    SET_GPR_U32(ctx, 31, 0x1A8F5Cu);
    ctx->pc = 0x12BD90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BD90_0x12bd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F5Cu; }
    }
    if (ctx->pc != 0x1A8F5Cu) { return; }
    ctx->pc = 0x1A8F5Cu;
    // 0x1a8f5c: 0x102d
    ctx->pc = 0x1a8f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8f60:
    // 0x1a8f60: 0x10000010
    ctx->pc = 0x1A8F60u;
    {
        const bool branch_taken_0x1a8f60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8F64u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1a8f60) {
            ctx->pc = 0x1A8FA4u;
            goto label_1a8fa4;
        }
    }
    ctx->pc = 0x1A8F68u;
label_1a8f68:
    // 0x1a8f68: 0x220202d
    ctx->pc = 0x1a8f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8f6c: 0x282d
    ctx->pc = 0x1a8f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8f70: 0xc04639e
    ctx->pc = 0x1A8F70u;
    SET_GPR_U32(ctx, 31, 0x1A8F78u);
    ctx->pc = 0x1A8F74u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x118E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118E78_0x118e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F78u; }
    }
    if (ctx->pc != 0x1A8F78u) { return; }
    ctx->pc = 0x1A8F78u;
    // 0x1a8f78: 0x40802d
    ctx->pc = 0x1a8f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8f7c: 0xc04633e
    ctx->pc = 0x1A8F7Cu;
    SET_GPR_U32(ctx, 31, 0x1A8F84u);
    ctx->pc = 0x1A8F80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x118CF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118CF8_0x118cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F84u; }
    }
    if (ctx->pc != 0x1A8F84u) { return; }
    ctx->pc = 0x1A8F84u;
    // 0x1a8f84: 0x3c01002b
    ctx->pc = 0x1a8f84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a8f88: 0x8c220ec0
    ctx->pc = 0x1a8f88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 3776)));
    // 0x1a8f8c: 0x10400004
    ctx->pc = 0x1A8F8Cu;
    {
        const bool branch_taken_0x1a8f8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8F90u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a8f8c) {
            ctx->pc = 0x1A8FA0u;
            goto label_1a8fa0;
        }
    }
    ctx->pc = 0x1A8F94u;
    // 0x1a8f94: 0xc04af64
    ctx->pc = 0x1A8F94u;
    SET_GPR_U32(ctx, 31, 0x1A8F9Cu);
    ctx->pc = 0x12BD90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BD90_0x12bd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F9Cu; }
    }
    if (ctx->pc != 0x1A8F9Cu) { return; }
    ctx->pc = 0x1A8F9Cu;
    // 0x1a8f9c: 0x200102d
    ctx->pc = 0x1a8f9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a8fa0:
    // 0x1a8fa0: 0xdfbf0020
    ctx->pc = 0x1a8fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a8fa4:
    // 0x1a8fa4: 0x7bb10010
    ctx->pc = 0x1a8fa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8fa8: 0x7bb00000
    ctx->pc = 0x1a8fa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8fac: 0x3e00008
    ctx->pc = 0x1A8FACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8FB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 2096));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A8F34u: goto label_1a8f34;
            case 0x1A8F60u: goto label_1a8f60;
            case 0x1A8F68u: goto label_1a8f68;
            case 0x1A8FA0u: goto label_1a8fa0;
            case 0x1A8FA4u: goto label_1a8fa4;
            case 0x1A8FE8u: goto label_1a8fe8;
            case 0x1A8FF4u: goto label_1a8ff4;
            case 0x1A9030u: goto label_1a9030;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A8FB4u;
    // 0x1a8fb4: 0x0
    ctx->pc = 0x1a8fb4u;
    // NOP
    // 0x1a8fb8: 0x0
    ctx->pc = 0x1a8fb8u;
    // NOP
    // 0x1a8fbc: 0x0
    ctx->pc = 0x1a8fbcu;
    // NOP
    // 0x1a8fc0: 0x27bdfff0
    ctx->pc = 0x1a8fc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a8fc4: 0x3c01002b
    ctx->pc = 0x1a8fc4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a8fc8: 0xffbf0000
    ctx->pc = 0x1a8fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8fcc: 0x8c220ec8
    ctx->pc = 0x1a8fccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 3784)));
    // 0x1a8fd0: 0x14400005
    ctx->pc = 0x1A8FD0u;
    {
        const bool branch_taken_0x1a8fd0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a8fd0) {
            ctx->pc = 0x1A8FE8u;
            goto label_1a8fe8;
        }
    }
    ctx->pc = 0x1A8FD8u;
    // 0x1a8fd8: 0xc06a318
    ctx->pc = 0x1A8FD8u;
    SET_GPR_U32(ctx, 31, 0x1A8FE0u);
    ctx->pc = 0x1A8C60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8C60_0x1a8c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8FE0u; }
    }
    if (ctx->pc != 0x1A8FE0u) { return; }
    ctx->pc = 0x1A8FE0u;
    // 0x1a8fe0: 0x10000004
    ctx->pc = 0x1A8FE0u;
    {
        const bool branch_taken_0x1a8fe0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8FE4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1a8fe0) {
            ctx->pc = 0x1A8FF4u;
            goto label_1a8ff4;
        }
    }
    ctx->pc = 0x1A8FE8u;
label_1a8fe8:
    // 0x1a8fe8: 0xc06a328
    ctx->pc = 0x1A8FE8u;
    SET_GPR_U32(ctx, 31, 0x1A8FF0u);
    ctx->pc = 0x1A8CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8CA0_0x1a8ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8FF0u; }
    }
    if (ctx->pc != 0x1A8FF0u) { return; }
    ctx->pc = 0x1A8FF0u;
    // 0x1a8ff0: 0xdfbf0000
    ctx->pc = 0x1a8ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a8ff4:
    // 0x1a8ff4: 0x3e00008
    ctx->pc = 0x1A8FF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8FF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A8F34u: goto label_1a8f34;
            case 0x1A8F60u: goto label_1a8f60;
            case 0x1A8F68u: goto label_1a8f68;
            case 0x1A8FA0u: goto label_1a8fa0;
            case 0x1A8FA4u: goto label_1a8fa4;
            case 0x1A8FE8u: goto label_1a8fe8;
            case 0x1A8FF4u: goto label_1a8ff4;
            case 0x1A9030u: goto label_1a9030;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A8FFCu;
    // 0x1a8ffc: 0x0
    ctx->pc = 0x1a8ffcu;
    // NOP
    // 0x1a9000: 0x27bdfff0
    ctx->pc = 0x1a9000u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a9004: 0xffbf0000
    ctx->pc = 0x1a9004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9008: 0xc057a80
    ctx->pc = 0x1A9008u;
    SET_GPR_U32(ctx, 31, 0x1A9010u);
    ctx->pc = 0x15EA00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EA00_0x15ea00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9010u; }
    }
    if (ctx->pc != 0x1A9010u) { return; }
    ctx->pc = 0x1A9010u;
    // 0x1a9010: 0x3c01002b
    ctx->pc = 0x1a9010u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a9014: 0x8c230ec0
    ctx->pc = 0x1a9014u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 3776)));
    // 0x1a9018: 0x10600005
    ctx->pc = 0x1A9018u;
    {
        const bool branch_taken_0x1a9018 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a9018) {
            ctx->pc = 0x1A9030u;
            goto label_1a9030;
        }
    }
    ctx->pc = 0x1A9020u;
    // 0x1a9020: 0xc04ae00
    ctx->pc = 0x1A9020u;
    SET_GPR_U32(ctx, 31, 0x1A9028u);
    ctx->pc = 0x12B800u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B800_0x12b800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9028u; }
    }
    if (ctx->pc != 0x1A9028u) { return; }
    ctx->pc = 0x1A9028u;
    // 0x1a9028: 0x3c01002b
    ctx->pc = 0x1a9028u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a902c: 0xac200ec0
    ctx->pc = 0x1a902cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3776), GPR_U32(ctx, 0));
label_1a9030:
    // 0x1a9030: 0xdfbf0000
    ctx->pc = 0x1a9030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9034: 0x3e00008
    ctx->pc = 0x1A9034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9038u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A8F34u: goto label_1a8f34;
            case 0x1A8F60u: goto label_1a8f60;
            case 0x1A8F68u: goto label_1a8f68;
            case 0x1A8FA0u: goto label_1a8fa0;
            case 0x1A8FA4u: goto label_1a8fa4;
            case 0x1A8FE8u: goto label_1a8fe8;
            case 0x1A8FF4u: goto label_1a8ff4;
            case 0x1A9030u: goto label_1a9030;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A903Cu;
    // 0x1a903c: 0x0
    ctx->pc = 0x1a903cu;
    // NOP
}
