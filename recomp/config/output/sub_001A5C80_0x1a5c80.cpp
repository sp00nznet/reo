#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A5C80
// Address: 0x1a5c80 - 0x1a5f00
void sub_001A5C80_0x1a5c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a5c80u;

    // 0x1a5c80: 0x27bdffb0
    ctx->pc = 0x1a5c80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a5c84: 0xffbf0010
    ctx->pc = 0x1a5c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a5c88: 0xc069998
    ctx->pc = 0x1A5C88u;
    SET_GPR_U32(ctx, 31, 0x1A5C90u);
    ctx->pc = 0x1A5C8Cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1A6660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6660_0x1a6660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5C90u; }
    }
    if (ctx->pc != 0x1A5C90u) { return; }
    ctx->pc = 0x1A5C90u;
    // 0x1a5c90: 0x14400003
    ctx->pc = 0x1A5C90u;
    {
        const bool branch_taken_0x1a5c90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a5c90) {
            ctx->pc = 0x1A5CA0u;
            goto label_1a5ca0;
        }
    }
    ctx->pc = 0x1A5C98u;
    // 0x1a5c98: 0x10000073
    ctx->pc = 0x1A5C98u;
    {
        const bool branch_taken_0x1a5c98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5C9Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a5c98) {
            ctx->pc = 0x1A5E68u;
            goto label_1a5e68;
        }
    }
    ctx->pc = 0x1A5CA0u;
label_1a5ca0:
    // 0x1a5ca0: 0xc06980c
    ctx->pc = 0x1A5CA0u;
    SET_GPR_U32(ctx, 31, 0x1A5CA8u);
    ctx->pc = 0x1A6030u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6030_0x1a6030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5CA8u; }
    }
    if (ctx->pc != 0x1A5CA8u) { return; }
    ctx->pc = 0x1A5CA8u;
    // 0x1a5ca8: 0x240200ff
    ctx->pc = 0x1a5ca8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a5cac: 0x3c01002b
    ctx->pc = 0x1a5cacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a5cb0: 0xa02209a0
    ctx->pc = 0x1a5cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 2464), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a5cb4: 0x3c07002b
    ctx->pc = 0x1a5cb4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)43 << 16));
    // 0x1a5cb8: 0x3c02002b
    ctx->pc = 0x1a5cb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1a5cbc: 0x3403ffff
    ctx->pc = 0x1a5cbcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1a5cc0: 0x3c01002b
    ctx->pc = 0x1a5cc0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a5cc4: 0x244209a0
    ctx->pc = 0x1a5cc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2464));
    // 0x1a5cc8: 0xa42309a2
    ctx->pc = 0x1a5cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 2466), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a5ccc: 0x3c06002b
    ctx->pc = 0x1a5cccu;
    SET_GPR_U32(ctx, 6, ((uint32_t)43 << 16));
    // 0x1a5cd0: 0x78450000
    ctx->pc = 0x1a5cd0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5cd4: 0x3c03002b
    ctx->pc = 0x1a5cd4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
    // 0x1a5cd8: 0x78440010
    ctx->pc = 0x1a5cd8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a5cdc: 0x27a80020
    ctx->pc = 0x1a5cdcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a5ce0: 0x24e709c0
    ctx->pc = 0x1a5ce0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 2496));
    // 0x1a5ce4: 0x24c60a10
    ctx->pc = 0x1a5ce4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2576));
    // 0x1a5ce8: 0x24630800
    ctx->pc = 0x1a5ce8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2048));
    // 0x1a5cec: 0x3c010023
    ctx->pc = 0x1a5cecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1a5cf0: 0x7d050000
    ctx->pc = 0x1a5cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 5));
    // 0x1a5cf4: 0x2402ffff
    ctx->pc = 0x1a5cf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a5cf8: 0x7d040010
    ctx->pc = 0x1a5cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 4));
    // 0x1a5cfc: 0x79050000
    ctx->pc = 0x1a5cfcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a5d00: 0x79040010
    ctx->pc = 0x1a5d00u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1a5d04: 0x7ce50000
    ctx->pc = 0x1a5d04u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 5));
    // 0x1a5d08: 0x7ce40010
    ctx->pc = 0x1a5d08u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 4));
    // 0x1a5d0c: 0xa0c00000
    ctx->pc = 0x1a5d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a5d10: 0xa0c00001
    ctx->pc = 0x1a5d10u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a5d14: 0xa0c00002
    ctx->pc = 0x1a5d14u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a5d18: 0xa0c00003
    ctx->pc = 0x1a5d18u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a5d1c: 0xa0c00005
    ctx->pc = 0x1a5d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a5d20: 0xacc30008
    ctx->pc = 0x1a5d20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1a5d24: 0x8c231040
    ctx->pc = 0x1a5d24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4160)));
    // 0x1a5d28: 0x14620005
    ctx->pc = 0x1A5D28u;
    {
        const bool branch_taken_0x1a5d28 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1A5D2Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a5d28) {
            ctx->pc = 0x1A5D40u;
            goto label_1a5d40;
        }
    }
    ctx->pc = 0x1A5D30u;
    // 0x1a5d30: 0xc0699a8
    ctx->pc = 0x1A5D30u;
    SET_GPR_U32(ctx, 31, 0x1A5D38u);
    ctx->pc = 0x1A5D34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A66A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A66A0_0x1a66a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5D38u; }
    }
    if (ctx->pc != 0x1A5D38u) { return; }
    ctx->pc = 0x1A5D38u;
    // 0x1a5d38: 0x10000035
    ctx->pc = 0x1A5D38u;
    {
        const bool branch_taken_0x1a5d38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a5d38) {
            ctx->pc = 0x1A5E10u;
            goto label_1a5e10;
        }
    }
    ctx->pc = 0x1A5D40u;
label_1a5d40:
    // 0x1a5d40: 0x1460001f
    ctx->pc = 0x1A5D40u;
    {
        const bool branch_taken_0x1a5d40 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A5D44u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a5d40) {
            ctx->pc = 0x1A5DC0u;
            goto label_1a5dc0;
        }
    }
    ctx->pc = 0x1A5D48u;
    // 0x1a5d48: 0x1000000b
    ctx->pc = 0x1A5D48u;
    {
        const bool branch_taken_0x1a5d48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5D4Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a5d48) {
            ctx->pc = 0x1A5D78u;
            goto label_1a5d78;
        }
    }
    ctx->pc = 0x1A5D50u;
label_1a5d50:
    // 0x1a5d50: 0x101840
    ctx->pc = 0x1a5d50u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a5d54: 0x8c241040
    ctx->pc = 0x1a5d54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4160)));
    // 0x1a5d58: 0x3c02002b
    ctx->pc = 0x1a5d58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1a5d5c: 0x701821
    ctx->pc = 0x1a5d5cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a5d60: 0x24420a10
    ctx->pc = 0x1a5d60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2576));
    // 0x1a5d64: 0x318c0
    ctx->pc = 0x1a5d64u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a5d68: 0x200282d
    ctx->pc = 0x1a5d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5d6c: 0xc0699a8
    ctx->pc = 0x1A5D6Cu;
    SET_GPR_U32(ctx, 31, 0x1A5D74u);
    ctx->pc = 0x1A5D70u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1A66A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A66A0_0x1a66a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5D74u; }
    }
    if (ctx->pc != 0x1A5D74u) { return; }
    ctx->pc = 0x1A5D74u;
    // 0x1a5d74: 0x26100001
    ctx->pc = 0x1a5d74u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1a5d78:
    // 0x1a5d78: 0x3c01002b
    ctx->pc = 0x1a5d78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a5d7c: 0x8c220980
    ctx->pc = 0x1a5d7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2432)));
    // 0x1a5d80: 0x202102a
    ctx->pc = 0x1a5d80u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x1a5d84: 0x1440fff2
    ctx->pc = 0x1A5D84u;
    {
        const bool branch_taken_0x1a5d84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A5D88u;
        SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
        if (branch_taken_0x1a5d84) {
            ctx->pc = 0x1A5D50u;
            goto label_1a5d50;
        }
    }
    ctx->pc = 0x1A5D8Cu;
    // 0x1a5d8c: 0x1e000020
    ctx->pc = 0x1A5D8Cu;
    {
        const bool branch_taken_0x1a5d8c = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1a5d8c) {
            ctx->pc = 0x1A5E10u;
            goto label_1a5e10;
        }
    }
    ctx->pc = 0x1A5D94u;
    // 0x1a5d94: 0x101840
    ctx->pc = 0x1a5d94u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a5d98: 0x3c02002b
    ctx->pc = 0x1a5d98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1a5d9c: 0x701821
    ctx->pc = 0x1a5d9cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a5da0: 0x24420a10
    ctx->pc = 0x1a5da0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2576));
    // 0x1a5da4: 0x318c0
    ctx->pc = 0x1a5da4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a5da8: 0x24040001
    ctx->pc = 0x1a5da8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5dac: 0x282d
    ctx->pc = 0x1a5dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5db0: 0xc0699a8
    ctx->pc = 0x1A5DB0u;
    SET_GPR_U32(ctx, 31, 0x1A5DB8u);
    ctx->pc = 0x1A5DB4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1A66A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A66A0_0x1a66a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5DB8u; }
    }
    if (ctx->pc != 0x1A5DB8u) { return; }
    ctx->pc = 0x1A5DB8u;
    // 0x1a5db8: 0x10000015
    ctx->pc = 0x1A5DB8u;
    {
        const bool branch_taken_0x1a5db8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a5db8) {
            ctx->pc = 0x1A5E10u;
            goto label_1a5e10;
        }
    }
    ctx->pc = 0x1A5DC0u;
label_1a5dc0:
    // 0x1a5dc0: 0xc0699a8
    ctx->pc = 0x1A5DC0u;
    SET_GPR_U32(ctx, 31, 0x1A5DC8u);
    ctx->pc = 0x1A5DC4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A66A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A66A0_0x1a66a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5DC8u; }
    }
    if (ctx->pc != 0x1A5DC8u) { return; }
    ctx->pc = 0x1A5DC8u;
    // 0x1a5dc8: 0x1000000c
    ctx->pc = 0x1A5DC8u;
    {
        const bool branch_taken_0x1a5dc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5DCCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a5dc8) {
            ctx->pc = 0x1A5DFCu;
            goto label_1a5dfc;
        }
    }
    ctx->pc = 0x1A5DD0u;
label_1a5dd0:
    // 0x1a5dd0: 0x26050001
    ctx->pc = 0x1a5dd0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a5dd4: 0x8c241040
    ctx->pc = 0x1a5dd4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4160)));
    // 0x1a5dd8: 0x51840
    ctx->pc = 0x1a5dd8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1a5ddc: 0x651821
    ctx->pc = 0x1a5ddcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a5de0: 0x3c02002b
    ctx->pc = 0x1a5de0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1a5de4: 0x24420a10
    ctx->pc = 0x1a5de4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2576));
    // 0x1a5de8: 0x318c0
    ctx->pc = 0x1a5de8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a5dec: 0x200282d
    ctx->pc = 0x1a5decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5df0: 0xc0699a8
    ctx->pc = 0x1A5DF0u;
    SET_GPR_U32(ctx, 31, 0x1A5DF8u);
    ctx->pc = 0x1A5DF4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1A66A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A66A0_0x1a66a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5DF8u; }
    }
    if (ctx->pc != 0x1A5DF8u) { return; }
    ctx->pc = 0x1A5DF8u;
    // 0x1a5df8: 0x26100001
    ctx->pc = 0x1a5df8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1a5dfc:
    // 0x1a5dfc: 0x3c01002b
    ctx->pc = 0x1a5dfcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a5e00: 0x8c220980
    ctx->pc = 0x1a5e00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2432)));
    // 0x1a5e04: 0x202102a
    ctx->pc = 0x1a5e04u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x1a5e08: 0x1440fff1
    ctx->pc = 0x1A5E08u;
    {
        const bool branch_taken_0x1a5e08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A5E0Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
        if (branch_taken_0x1a5e08) {
            ctx->pc = 0x1A5DD0u;
            goto label_1a5dd0;
        }
    }
    ctx->pc = 0x1A5E10u;
label_1a5e10:
    // 0x1a5e10: 0x3c020023
    ctx->pc = 0x1a5e10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1a5e14: 0x3c04002b
    ctx->pc = 0x1a5e14u;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a5e18: 0x24421150
    ctx->pc = 0x1a5e18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4432));
    // 0x1a5e1c: 0x3c07002b
    ctx->pc = 0x1a5e1cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)43 << 16));
    // 0x1a5e20: 0xdc430000
    ctx->pc = 0x1a5e20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5e24: 0x27a50048
    ctx->pc = 0x1a5e24u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 72));
    // 0x1a5e28: 0x3c06002b
    ctx->pc = 0x1a5e28u;
    SET_GPR_U32(ctx, 6, ((uint32_t)43 << 16));
    // 0x1a5e2c: 0x24840a00
    ctx->pc = 0x1a5e2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2560));
    // 0x1a5e30: 0x24e70a10
    ctx->pc = 0x1a5e30u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 2576));
    // 0x1a5e34: 0x24c60a30
    ctx->pc = 0x1a5e34u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2608));
    // 0x1a5e38: 0x3c01002b
    ctx->pc = 0x1a5e38u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a5e3c: 0xfca30000
    ctx->pc = 0x1a5e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x1a5e40: 0x24020001
    ctx->pc = 0x1a5e40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5e44: 0xdca30000
    ctx->pc = 0x1a5e44u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a5e48: 0xfc830000
    ctx->pc = 0x1a5e48u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1a5e4c: 0x90e30002
    ctx->pc = 0x1a5e4cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1a5e50: 0xa0c30004
    ctx->pc = 0x1a5e50u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a5e54: 0x90e30003
    ctx->pc = 0x1a5e54u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x1a5e58: 0xa0c30005
    ctx->pc = 0x1a5e58u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a5e5c: 0xa0200988
    ctx->pc = 0x1a5e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 2440), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a5e60: 0x3c01002b
    ctx->pc = 0x1a5e60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a5e64: 0xa0200990
    ctx->pc = 0x1a5e64u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 2448), (uint8_t)GPR_U32(ctx, 0));
label_1a5e68:
    // 0x1a5e68: 0xdfbf0010
    ctx->pc = 0x1a5e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5e6c: 0x7bb00000
    ctx->pc = 0x1a5e6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5e70: 0x3e00008
    ctx->pc = 0x1A5E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5E74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5CA0u: goto label_1a5ca0;
            case 0x1A5D40u: goto label_1a5d40;
            case 0x1A5D50u: goto label_1a5d50;
            case 0x1A5D78u: goto label_1a5d78;
            case 0x1A5DC0u: goto label_1a5dc0;
            case 0x1A5DD0u: goto label_1a5dd0;
            case 0x1A5DFCu: goto label_1a5dfc;
            case 0x1A5E10u: goto label_1a5e10;
            case 0x1A5E68u: goto label_1a5e68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5E78u;
    // 0x1a5e78: 0x0
    ctx->pc = 0x1a5e78u;
    // NOP
    // 0x1a5e7c: 0x0
    ctx->pc = 0x1a5e7cu;
    // NOP
    // 0x1a5e80: 0x27bdfff0
    ctx->pc = 0x1a5e80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a5e84: 0xffbf0000
    ctx->pc = 0x1a5e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a5e88: 0xc06980c
    ctx->pc = 0x1A5E88u;
    SET_GPR_U32(ctx, 31, 0x1A5E90u);
    ctx->pc = 0x1A6030u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6030_0x1a6030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5E90u; }
    }
    if (ctx->pc != 0x1A5E90u) { return; }
    ctx->pc = 0x1A5E90u;
    // 0x1a5e90: 0xc0699c8
    ctx->pc = 0x1A5E90u;
    SET_GPR_U32(ctx, 31, 0x1A5E98u);
    ctx->pc = 0x1A6720u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6720_0x1a6720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5E98u; }
    }
    if (ctx->pc != 0x1A5E98u) { return; }
    ctx->pc = 0x1A5E98u;
    // 0x1a5e98: 0xdfbf0000
    ctx->pc = 0x1a5e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5e9c: 0x3e00008
    ctx->pc = 0x1A5E9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5EA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5CA0u: goto label_1a5ca0;
            case 0x1A5D40u: goto label_1a5d40;
            case 0x1A5D50u: goto label_1a5d50;
            case 0x1A5D78u: goto label_1a5d78;
            case 0x1A5DC0u: goto label_1a5dc0;
            case 0x1A5DD0u: goto label_1a5dd0;
            case 0x1A5DFCu: goto label_1a5dfc;
            case 0x1A5E10u: goto label_1a5e10;
            case 0x1A5E68u: goto label_1a5e68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5EA4u;
    // 0x1a5ea4: 0x0
    ctx->pc = 0x1a5ea4u;
    // NOP
    // 0x1a5ea8: 0x0
    ctx->pc = 0x1a5ea8u;
    // NOP
    // 0x1a5eac: 0x0
    ctx->pc = 0x1a5eacu;
    // NOP
    // 0x1a5eb0: 0x3c01002b
    ctx->pc = 0x1a5eb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a5eb4: 0x3e00008
    ctx->pc = 0x1A5EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5EB8u;
        WRITE8(ADD32(GPR_U32(ctx, 1), 2448), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5CA0u: goto label_1a5ca0;
            case 0x1A5D40u: goto label_1a5d40;
            case 0x1A5D50u: goto label_1a5d50;
            case 0x1A5D78u: goto label_1a5d78;
            case 0x1A5DC0u: goto label_1a5dc0;
            case 0x1A5DD0u: goto label_1a5dd0;
            case 0x1A5DFCu: goto label_1a5dfc;
            case 0x1A5E10u: goto label_1a5e10;
            case 0x1A5E68u: goto label_1a5e68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5EBCu;
    // 0x1a5ebc: 0x0
    ctx->pc = 0x1a5ebcu;
    // NOP
    // 0x1a5ec0: 0x448c0
    ctx->pc = 0x1a5ec0u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a5ec4: 0x3c03002b
    ctx->pc = 0x1a5ec4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
    // 0x1a5ec8: 0x3c04002b
    ctx->pc = 0x1a5ec8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a5ecc: 0x24630a02
    ctx->pc = 0x1a5eccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2562));
    // 0x1a5ed0: 0x24840a00
    ctx->pc = 0x1a5ed0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2560));
    // 0x1a5ed4: 0x894021
    ctx->pc = 0x1a5ed4u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1a5ed8: 0x692021
    ctx->pc = 0x1a5ed8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1a5edc: 0xa5050000
    ctx->pc = 0x1a5edcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x1a5ee0: 0x3c03002b
    ctx->pc = 0x1a5ee0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
    // 0x1a5ee4: 0xa4860000
    ctx->pc = 0x1a5ee4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x1a5ee8: 0x24630a04
    ctx->pc = 0x1a5ee8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2564));
    // 0x1a5eec: 0x691821
    ctx->pc = 0x1a5eecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1a5ef0: 0x3e00008
    ctx->pc = 0x1A5EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5EF4u;
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5CA0u: goto label_1a5ca0;
            case 0x1A5D40u: goto label_1a5d40;
            case 0x1A5D50u: goto label_1a5d50;
            case 0x1A5D78u: goto label_1a5d78;
            case 0x1A5DC0u: goto label_1a5dc0;
            case 0x1A5DD0u: goto label_1a5dd0;
            case 0x1A5DFCu: goto label_1a5dfc;
            case 0x1A5E10u: goto label_1a5e10;
            case 0x1A5E68u: goto label_1a5e68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5EF8u;
    // 0x1a5ef8: 0x0
    ctx->pc = 0x1a5ef8u;
    // NOP
    // 0x1a5efc: 0x0
    ctx->pc = 0x1a5efcu;
    // NOP
}
