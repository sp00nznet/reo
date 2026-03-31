#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A7DE0
// Address: 0x1a7de0 - 0x1a7f50
void sub_001A7DE0_0x1a7de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a7de0u;

    // 0x1a7de0: 0x27bdffb0
    ctx->pc = 0x1a7de0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a7de4: 0xffbf0040
    ctx->pc = 0x1a7de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a7de8: 0x7fb20030
    ctx->pc = 0x1a7de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a7dec: 0x7fb10020
    ctx->pc = 0x1a7decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a7df0: 0x80882d
    ctx->pc = 0x1a7df0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7df4: 0x12200008
    ctx->pc = 0x1A7DF4u;
    {
        const bool branch_taken_0x1a7df4 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7DF8u;
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
        if (branch_taken_0x1a7df4) {
            ctx->pc = 0x1A7E18u;
            goto label_1a7e18;
        }
    }
    ctx->pc = 0x1A7DFCu;
    // 0x1a7dfc: 0x3c010023
    ctx->pc = 0x1a7dfcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1a7e00: 0xc04519c
    ctx->pc = 0x1A7E00u;
    SET_GPR_U32(ctx, 31, 0x1A7E08u);
    ctx->pc = 0x1A7E04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4480)));
    ctx->pc = 0x114670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114670_0x114670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E08u; }
    }
    if (ctx->pc != 0x1A7E08u) { return; }
    ctx->pc = 0x1A7E08u;
    // 0x1a7e08: 0x4410006
    ctx->pc = 0x1A7E08u;
    {
        const bool branch_taken_0x1a7e08 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1a7e08) {
            ctx->pc = 0x1A7E24u;
            goto label_1a7e24;
        }
    }
    ctx->pc = 0x1A7E10u;
    // 0x1a7e10: 0x10000048
    ctx->pc = 0x1A7E10u;
    {
        const bool branch_taken_0x1a7e10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7E14u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a7e10) {
            ctx->pc = 0x1A7F34u;
            goto label_1a7f34;
        }
    }
    ctx->pc = 0x1A7E18u;
label_1a7e18:
    // 0x1a7e18: 0x3c010023
    ctx->pc = 0x1a7e18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1a7e1c: 0xc045198
    ctx->pc = 0x1A7E1Cu;
    SET_GPR_U32(ctx, 31, 0x1A7E24u);
    ctx->pc = 0x1A7E20u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4480)));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E24u; }
    }
    if (ctx->pc != 0x1A7E24u) { return; }
    ctx->pc = 0x1A7E24u;
label_1a7e24:
    // 0x1a7e24: 0x3c01002b
    ctx->pc = 0x1a7e24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a7e28: 0x10000011
    ctx->pc = 0x1A7E28u;
    {
        const bool branch_taken_0x1a7e28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7E2Cu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 1), 2672)));
        if (branch_taken_0x1a7e28) {
            ctx->pc = 0x1A7E70u;
            goto label_1a7e70;
        }
    }
    ctx->pc = 0x1A7E30u;
label_1a7e30:
    // 0x1a7e30: 0xc06a168
    ctx->pc = 0x1A7E30u;
    SET_GPR_U32(ctx, 31, 0x1A7E38u);
    ctx->pc = 0x1A7E34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A85A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A85A0_0x1a85a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E38u; }
    }
    if (ctx->pc != 0x1A7E38u) { return; }
    ctx->pc = 0x1A7E38u;
    // 0x1a7e38: 0x4410006
    ctx->pc = 0x1A7E38u;
    {
        const bool branch_taken_0x1a7e38 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A7E3Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a7e38) {
            ctx->pc = 0x1A7E54u;
            goto label_1a7e54;
        }
    }
    ctx->pc = 0x1A7E40u;
    // 0x1a7e40: 0x3c040024
    ctx->pc = 0x1a7e40u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1a7e44: 0xc0423b4
    ctx->pc = 0x1A7E44u;
    SET_GPR_U32(ctx, 31, 0x1A7E4Cu);
    ctx->pc = 0x1A7E48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9200));
    ctx->pc = 0x108ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108ED0_0x108ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E4Cu; }
    }
    if (ctx->pc != 0x1A7E4Cu) { return; }
    ctx->pc = 0x1A7E4Cu;
    // 0x1a7e4c: 0x10000011
    ctx->pc = 0x1A7E4Cu;
    {
        const bool branch_taken_0x1a7e4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a7e4c) {
            ctx->pc = 0x1A7E94u;
            goto label_1a7e94;
        }
    }
    ctx->pc = 0x1A7E54u;
label_1a7e54:
    // 0x1a7e54: 0x26020001
    ctx->pc = 0x1a7e54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a7e58: 0xae430000
    ctx->pc = 0x1a7e58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1a7e5c: 0x4410004
    ctx->pc = 0x1A7E5Cu;
    {
        const bool branch_taken_0x1a7e5c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A7E60u;
        SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 2), 31));
        if (branch_taken_0x1a7e5c) {
            ctx->pc = 0x1A7E70u;
            goto label_1a7e70;
        }
    }
    ctx->pc = 0x1A7E64u;
    // 0x1a7e64: 0x12000002
    ctx->pc = 0x1A7E64u;
    {
        const bool branch_taken_0x1a7e64 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a7e64) {
            ctx->pc = 0x1A7E70u;
            goto label_1a7e70;
        }
    }
    ctx->pc = 0x1A7E6Cu;
    // 0x1a7e6c: 0x2610ffe0
    ctx->pc = 0x1a7e6cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967264));
label_1a7e70:
    // 0x1a7e70: 0x101840
    ctx->pc = 0x1a7e70u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a7e74: 0x3c02002b
    ctx->pc = 0x1a7e74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1a7e78: 0x701821
    ctx->pc = 0x1a7e78u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a7e7c: 0x24420a80
    ctx->pc = 0x1a7e7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2688));
    // 0x1a7e80: 0x31880
    ctx->pc = 0x1a7e80u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7e84: 0x439021
    ctx->pc = 0x1a7e84u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7e88: 0x8e420000
    ctx->pc = 0x1a7e88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a7e8c: 0x441ffe8
    ctx->pc = 0x1A7E8Cu;
    {
        const bool branch_taken_0x1a7e8c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1a7e8c) {
            ctx->pc = 0x1A7E30u;
            goto label_1a7e30;
        }
    }
    ctx->pc = 0x1A7E94u;
label_1a7e94:
    // 0x1a7e94: 0x3c01002b
    ctx->pc = 0x1a7e94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a7e98: 0xac300a70
    ctx->pc = 0x1a7e98u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2672), GPR_U32(ctx, 16));
    // 0x1a7e9c: 0x3c01002b
    ctx->pc = 0x1a7e9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a7ea0: 0x8c220a60
    ctx->pc = 0x1a7ea0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2656)));
    // 0x1a7ea4: 0x10400020
    ctx->pc = 0x1A7EA4u;
    {
        const bool branch_taken_0x1a7ea4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7EA8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
        if (branch_taken_0x1a7ea4) {
            ctx->pc = 0x1A7F28u;
            goto label_1a7f28;
        }
    }
    ctx->pc = 0x1A7EACu;
    // 0x1a7eac: 0x24430010
    ctx->pc = 0x1a7eacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 16));
    // 0x1a7eb0: 0x2402fff0
    ctx->pc = 0x1a7eb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1a7eb4: 0x12200002
    ctx->pc = 0x1A7EB4u;
    {
        const bool branch_taken_0x1a7eb4 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7EB8u;
        SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x1a7eb4) {
            ctx->pc = 0x1A7EC0u;
            goto label_1a7ec0;
        }
    }
    ctx->pc = 0x1A7EBCu;
    // 0x1a7ebc: 0x24110001
    ctx->pc = 0x1a7ebcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
label_1a7ec0:
    // 0x1a7ec0: 0x3c010023
    ctx->pc = 0x1a7ec0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1a7ec4: 0x3c07002b
    ctx->pc = 0x1a7ec4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)43 << 16));
    // 0x1a7ec8: 0x8c221180
    ctx->pc = 0x1a7ec8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4480)));
    // 0x1a7ecc: 0x3c04002b
    ctx->pc = 0x1a7eccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a7ed0: 0x24e70cc0
    ctx->pc = 0x1a7ed0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 3264));
    // 0x1a7ed4: 0x3c0b001a
    ctx->pc = 0x1a7ed4u;
    SET_GPR_U32(ctx, 11, ((uint32_t)26 << 16));
    // 0x1a7ed8: 0x220302d
    ctx->pc = 0x1a7ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7edc: 0x24840c30
    ctx->pc = 0x1a7edcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 3120));
    // 0x1a7ee0: 0x282d
    ctx->pc = 0x1a7ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ee4: 0x502d
    ctx->pc = 0x1a7ee4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ee8: 0xe0482d
    ctx->pc = 0x1a7ee8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7eec: 0x256b7fa0
    ctx->pc = 0x1a7eecu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 32672));
    // 0x1a7ef0: 0xc045e7a
    ctx->pc = 0x1A7EF0u;
    SET_GPR_U32(ctx, 31, 0x1A7EF8u);
    ctx->pc = 0x1A7EF4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7EF8u; }
    }
    if (ctx->pc != 0x1A7EF8u) { return; }
    ctx->pc = 0x1A7EF8u;
    // 0x1a7ef8: 0x4410009
    ctx->pc = 0x1A7EF8u;
    {
        const bool branch_taken_0x1a7ef8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A7EFCu;
        SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
        if (branch_taken_0x1a7ef8) {
            ctx->pc = 0x1A7F20u;
            goto label_1a7f20;
        }
    }
    ctx->pc = 0x1A7F00u;
    // 0x1a7f00: 0x3c040024
    ctx->pc = 0x1a7f00u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1a7f04: 0xc0423b4
    ctx->pc = 0x1A7F04u;
    SET_GPR_U32(ctx, 31, 0x1A7F0Cu);
    ctx->pc = 0x1A7F08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9296));
    ctx->pc = 0x108ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108ED0_0x108ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F0Cu; }
    }
    if (ctx->pc != 0x1A7F0Cu) { return; }
    ctx->pc = 0x1A7F0Cu;
    // 0x1a7f0c: 0x3c010023
    ctx->pc = 0x1a7f0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1a7f10: 0xc045190
    ctx->pc = 0x1A7F10u;
    SET_GPR_U32(ctx, 31, 0x1A7F18u);
    ctx->pc = 0x1A7F14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4480)));
    ctx->pc = 0x114640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114640_0x114640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F18u; }
    }
    if (ctx->pc != 0x1A7F18u) { return; }
    ctx->pc = 0x1A7F18u;
    // 0x1a7f18: 0x10000006
    ctx->pc = 0x1A7F18u;
    {
        const bool branch_taken_0x1a7f18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7F1Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a7f18) {
            ctx->pc = 0x1A7F34u;
            goto label_1a7f34;
        }
    }
    ctx->pc = 0x1A7F20u;
label_1a7f20:
    // 0x1a7f20: 0x10000003
    ctx->pc = 0x1A7F20u;
    {
        const bool branch_taken_0x1a7f20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a7f20) {
            ctx->pc = 0x1A7F30u;
            goto label_1a7f30;
        }
    }
    ctx->pc = 0x1A7F28u;
label_1a7f28:
    // 0x1a7f28: 0xc045190
    ctx->pc = 0x1A7F28u;
    SET_GPR_U32(ctx, 31, 0x1A7F30u);
    ctx->pc = 0x1A7F2Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4480)));
    ctx->pc = 0x114640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114640_0x114640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F30u; }
    }
    if (ctx->pc != 0x1A7F30u) { return; }
    ctx->pc = 0x1A7F30u;
label_1a7f30:
    // 0x1a7f30: 0x102d
    ctx->pc = 0x1a7f30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7f34:
    // 0x1a7f34: 0xdfbf0040
    ctx->pc = 0x1a7f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a7f38: 0x7bb20030
    ctx->pc = 0x1a7f38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a7f3c: 0x7bb10020
    ctx->pc = 0x1a7f3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7f40: 0x7bb00010
    ctx->pc = 0x1a7f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7f44: 0x3e00008
    ctx->pc = 0x1A7F44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7F48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7E18u: goto label_1a7e18;
            case 0x1A7E24u: goto label_1a7e24;
            case 0x1A7E30u: goto label_1a7e30;
            case 0x1A7E54u: goto label_1a7e54;
            case 0x1A7E70u: goto label_1a7e70;
            case 0x1A7E94u: goto label_1a7e94;
            case 0x1A7EC0u: goto label_1a7ec0;
            case 0x1A7F20u: goto label_1a7f20;
            case 0x1A7F28u: goto label_1a7f28;
            case 0x1A7F30u: goto label_1a7f30;
            case 0x1A7F34u: goto label_1a7f34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A7F4Cu;
    // 0x1a7f4c: 0x0
    ctx->pc = 0x1a7f4cu;
    // NOP
}
