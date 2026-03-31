#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A8CE0
// Address: 0x1a8ce0 - 0x1a8ec0
void sub_001A8CE0_0x1a8ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a8ce0u;

    // 0x1a8ce0: 0x27bdfed0
    ctx->pc = 0x1a8ce0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1a8ce4: 0x3c01002b
    ctx->pc = 0x1a8ce4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a8ce8: 0xffbf0020
    ctx->pc = 0x1a8ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a8cec: 0x7fb10010
    ctx->pc = 0x1a8cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a8cf0: 0x7fb00000
    ctx->pc = 0x1a8cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a8cf4: 0x8c220ec8
    ctx->pc = 0x1a8cf4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 3784)));
    // 0x1a8cf8: 0x14400004
    ctx->pc = 0x1A8CF8u;
    {
        const bool branch_taken_0x1a8cf8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A8CFCu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a8cf8) {
            ctx->pc = 0x1A8D0Cu;
            goto label_1a8d0c;
        }
    }
    ctx->pc = 0x1A8D00u;
    // 0x1a8d00: 0x3c10002b
    ctx->pc = 0x1a8d00u;
    SET_GPR_U32(ctx, 16, ((uint32_t)43 << 16));
    // 0x1a8d04: 0x10000003
    ctx->pc = 0x1A8D04u;
    {
        const bool branch_taken_0x1a8d04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8D08u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4080));
        if (branch_taken_0x1a8d04) {
            ctx->pc = 0x1A8D14u;
            goto label_1a8d14;
        }
    }
    ctx->pc = 0x1A8D0Cu;
label_1a8d0c:
    // 0x1a8d0c: 0x3c10002b
    ctx->pc = 0x1a8d0cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)43 << 16));
    // 0x1a8d10: 0x26101010
    ctx->pc = 0x1a8d10u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4112));
label_1a8d14:
    // 0x1a8d14: 0x2402fffe
    ctx->pc = 0x1a8d14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1a8d18: 0x16220007
    ctx->pc = 0x1A8D18u;
    {
        const bool branch_taken_0x1a8d18 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x1A8D1Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a8d18) {
            ctx->pc = 0x1A8D38u;
            goto label_1a8d38;
        }
    }
    ctx->pc = 0x1A8D20u;
    // 0x1a8d20: 0x3c050024
    ctx->pc = 0x1a8d20u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x1a8d24: 0x27a40030
    ctx->pc = 0x1a8d24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a8d28: 0xc042bf0
    ctx->pc = 0x1A8D28u;
    SET_GPR_U32(ctx, 31, 0x1A8D30u);
    ctx->pc = 0x1A8D2Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9696));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D30u; }
    }
    if (ctx->pc != 0x1A8D30u) { return; }
    ctx->pc = 0x1A8D30u;
    // 0x1a8d30: 0x1000001d
    ctx->pc = 0x1A8D30u;
    {
        const bool branch_taken_0x1a8d30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a8d30) {
            ctx->pc = 0x1A8DA8u;
            goto label_1a8da8;
        }
    }
    ctx->pc = 0x1A8D38u;
label_1a8d38:
    // 0x1a8d38: 0x16220007
    ctx->pc = 0x1A8D38u;
    {
        const bool branch_taken_0x1a8d38 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x1A8D3Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
        if (branch_taken_0x1a8d38) {
            ctx->pc = 0x1A8D58u;
            goto label_1a8d58;
        }
    }
    ctx->pc = 0x1A8D40u;
    // 0x1a8d40: 0x3c050024
    ctx->pc = 0x1a8d40u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x1a8d44: 0x27a40030
    ctx->pc = 0x1a8d44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a8d48: 0xc042bf0
    ctx->pc = 0x1A8D48u;
    SET_GPR_U32(ctx, 31, 0x1A8D50u);
    ctx->pc = 0x1A8D4Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9720));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D50u; }
    }
    if (ctx->pc != 0x1A8D50u) { return; }
    ctx->pc = 0x1A8D50u;
    // 0x1a8d50: 0x10000015
    ctx->pc = 0x1A8D50u;
    {
        const bool branch_taken_0x1a8d50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a8d50) {
            ctx->pc = 0x1A8DA8u;
            goto label_1a8da8;
        }
    }
    ctx->pc = 0x1A8D58u;
label_1a8d58:
    // 0x1a8d58: 0x3c02002b
    ctx->pc = 0x1a8d58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1a8d5c: 0x8c230ec8
    ctx->pc = 0x1a8d5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 3784)));
    // 0x1a8d60: 0x3c050024
    ctx->pc = 0x1a8d60u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x1a8d64: 0x24421060
    ctx->pc = 0x1a8d64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4192));
    // 0x1a8d68: 0x27a40030
    ctx->pc = 0x1a8d68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a8d6c: 0x24a52608
    ctx->pc = 0x1a8d6cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9736));
    // 0x1a8d70: 0x220382d
    ctx->pc = 0x1a8d70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8d74: 0x31a00
    ctx->pc = 0x1a8d74u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x1a8d78: 0xc042a0c
    ctx->pc = 0x1A8D78u;
    SET_GPR_U32(ctx, 31, 0x1A8D80u);
    ctx->pc = 0x1A8D7Cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D80u; }
    }
    if (ctx->pc != 0x1A8D80u) { return; }
    ctx->pc = 0x1A8D80u;
    // 0x1a8d80: 0xc06a3b0
    ctx->pc = 0x1A8D80u;
    SET_GPR_U32(ctx, 31, 0x1A8D88u);
    ctx->pc = 0x1A8D84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1A8EC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8EC0_0x1a8ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D88u; }
    }
    if (ctx->pc != 0x1A8D88u) { return; }
    ctx->pc = 0x1A8D88u;
    // 0x1a8d88: 0x14400003
    ctx->pc = 0x1A8D88u;
    {
        const bool branch_taken_0x1a8d88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A8D8Cu;
        SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
        if (branch_taken_0x1a8d88) {
            ctx->pc = 0x1A8D98u;
            goto label_1a8d98;
        }
    }
    ctx->pc = 0x1A8D90u;
    // 0x1a8d90: 0x1000ffe0
    ctx->pc = 0x1A8D90u;
    {
        const bool branch_taken_0x1a8d90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8D94u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a8d90) {
            ctx->pc = 0x1A8D14u;
            goto label_1a8d14;
        }
    }
    ctx->pc = 0x1A8D98u;
label_1a8d98:
    // 0x1a8d98: 0x220302d
    ctx->pc = 0x1a8d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8d9c: 0x27a40030
    ctx->pc = 0x1a8d9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a8da0: 0xc042a0c
    ctx->pc = 0x1A8DA0u;
    SET_GPR_U32(ctx, 31, 0x1A8DA8u);
    ctx->pc = 0x1A8DA4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9752));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8DA8u; }
    }
    if (ctx->pc != 0x1A8DA8u) { return; }
    ctx->pc = 0x1A8DA8u;
label_1a8da8:
    // 0x1a8da8: 0x3c01002b
    ctx->pc = 0x1a8da8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a8dac: 0x3c02002b
    ctx->pc = 0x1a8dacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1a8db0: 0x8c230ec8
    ctx->pc = 0x1a8db0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 3784)));
    // 0x1a8db4: 0x24421040
    ctx->pc = 0x1a8db4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4160));
    // 0x1a8db8: 0x27a50030
    ctx->pc = 0x1a8db8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a8dbc: 0x31900
    ctx->pc = 0x1a8dbcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a8dc0: 0xc042b9e
    ctx->pc = 0x1A8DC0u;
    SET_GPR_U32(ctx, 31, 0x1A8DC8u);
    ctx->pc = 0x1A8DC4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8DC8u; }
    }
    if (ctx->pc != 0x1A8DC8u) { return; }
    ctx->pc = 0x1A8DC8u;
    // 0x1a8dc8: 0x14400003
    ctx->pc = 0x1A8DC8u;
    {
        const bool branch_taken_0x1a8dc8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A8DCCu;
        SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
        if (branch_taken_0x1a8dc8) {
            ctx->pc = 0x1A8DD8u;
            goto label_1a8dd8;
        }
    }
    ctx->pc = 0x1A8DD0u;
    // 0x1a8dd0: 0x10000035
    ctx->pc = 0x1A8DD0u;
    {
        const bool branch_taken_0x1a8dd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8DD4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a8dd0) {
            ctx->pc = 0x1A8EA8u;
            goto label_1a8ea8;
        }
    }
    ctx->pc = 0x1A8DD8u;
label_1a8dd8:
    // 0x1a8dd8: 0x8c220ec8
    ctx->pc = 0x1a8dd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 3784)));
    // 0x1a8ddc: 0x14400005
    ctx->pc = 0x1A8DDCu;
    {
        const bool branch_taken_0x1a8ddc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a8ddc) {
            ctx->pc = 0x1A8DF4u;
            goto label_1a8df4;
        }
    }
    ctx->pc = 0x1A8DE4u;
    // 0x1a8de4: 0xc06a318
    ctx->pc = 0x1A8DE4u;
    SET_GPR_U32(ctx, 31, 0x1A8DECu);
    ctx->pc = 0x1A8C60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8C60_0x1a8c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8DECu; }
    }
    if (ctx->pc != 0x1A8DECu) { return; }
    ctx->pc = 0x1A8DECu;
    // 0x1a8dec: 0x10000004
    ctx->pc = 0x1A8DECu;
    {
        const bool branch_taken_0x1a8dec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8DF0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a8dec) {
            ctx->pc = 0x1A8E00u;
            goto label_1a8e00;
        }
    }
    ctx->pc = 0x1A8DF4u;
label_1a8df4:
    // 0x1a8df4: 0xc06a328
    ctx->pc = 0x1A8DF4u;
    SET_GPR_U32(ctx, 31, 0x1A8DFCu);
    ctx->pc = 0x1A8CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8CA0_0x1a8ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8DFCu; }
    }
    if (ctx->pc != 0x1A8DFCu) { return; }
    ctx->pc = 0x1A8DFCu;
    // 0x1a8dfc: 0x200202d
    ctx->pc = 0x1a8dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a8e00:
    // 0x1a8e00: 0x282d
    ctx->pc = 0x1a8e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8e04: 0xc041f1a
    ctx->pc = 0x1A8E04u;
    SET_GPR_U32(ctx, 31, 0x1A8E0Cu);
    ctx->pc = 0x1A8E08u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E0Cu; }
    }
    if (ctx->pc != 0x1A8E0Cu) { return; }
    ctx->pc = 0x1A8E0Cu;
    // 0x1a8e0c: 0x27a30030
    ctx->pc = 0x1a8e0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a8e10: 0x24020020
    ctx->pc = 0x1a8e10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a8e14: 0xae030000
    ctx->pc = 0x1a8e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1a8e18: 0x3c01002b
    ctx->pc = 0x1a8e18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a8e1c: 0xae020004
    ctx->pc = 0x1a8e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1a8e20: 0x3c030023
    ctx->pc = 0x1a8e20u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x1a8e24: 0x8c240ec8
    ctx->pc = 0x1a8e24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3784)));
    // 0x1a8e28: 0x3c020023
    ctx->pc = 0x1a8e28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1a8e2c: 0x24631198
    ctx->pc = 0x1a8e2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4504));
    // 0x1a8e30: 0x24421190
    ctx->pc = 0x1a8e30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4496));
    // 0x1a8e34: 0x42080
    ctx->pc = 0x1a8e34u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a8e38: 0x3c01002b
    ctx->pc = 0x1a8e38u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a8e3c: 0x641821
    ctx->pc = 0x1a8e3cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a8e40: 0x8c630000
    ctx->pc = 0x1a8e40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a8e44: 0xae03000c
    ctx->pc = 0x1a8e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1a8e48: 0x8c230ec8
    ctx->pc = 0x1a8e48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 3784)));
    // 0x1a8e4c: 0x31880
    ctx->pc = 0x1a8e4cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a8e50: 0x3c01002b
    ctx->pc = 0x1a8e50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a8e54: 0x431021
    ctx->pc = 0x1a8e54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a8e58: 0x8c420000
    ctx->pc = 0x1a8e58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a8e5c: 0xae020008
    ctx->pc = 0x1a8e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1a8e60: 0x8c220ec8
    ctx->pc = 0x1a8e60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 3784)));
    // 0x1a8e64: 0x14400005
    ctx->pc = 0x1A8E64u;
    {
        const bool branch_taken_0x1a8e64 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A8E68u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a8e64) {
            ctx->pc = 0x1A8E7Cu;
            goto label_1a8e7c;
        }
    }
    ctx->pc = 0x1A8E6Cu;
    // 0x1a8e6c: 0xc04c50a
    ctx->pc = 0x1A8E6Cu;
    SET_GPR_U32(ctx, 31, 0x1A8E74u);
    ctx->pc = 0x1A8E70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x131428u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00131428_0x131428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E74u; }
    }
    if (ctx->pc != 0x1A8E74u) { return; }
    ctx->pc = 0x1A8E74u;
    // 0x1a8e74: 0x10000003
    ctx->pc = 0x1A8E74u;
    {
        const bool branch_taken_0x1a8e74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a8e74) {
            ctx->pc = 0x1A8E84u;
            goto label_1a8e84;
        }
    }
    ctx->pc = 0x1A8E7Cu;
label_1a8e7c:
    // 0x1a8e7c: 0xc04c464
    ctx->pc = 0x1A8E7Cu;
    SET_GPR_U32(ctx, 31, 0x1A8E84u);
    ctx->pc = 0x131190u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00131190_0x131190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E84u; }
    }
    if (ctx->pc != 0x1A8E84u) { return; }
    ctx->pc = 0x1A8E84u;
label_1a8e84:
    // 0x1a8e84: 0x3c01002b
    ctx->pc = 0x1a8e84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a8e88: 0x3c02002b
    ctx->pc = 0x1a8e88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1a8e8c: 0x8c230ec8
    ctx->pc = 0x1a8e8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 3784)));
    // 0x1a8e90: 0x24421040
    ctx->pc = 0x1a8e90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4160));
    // 0x1a8e94: 0x27a50030
    ctx->pc = 0x1a8e94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a8e98: 0x31900
    ctx->pc = 0x1a8e98u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a8e9c: 0xc042bf0
    ctx->pc = 0x1A8E9Cu;
    SET_GPR_U32(ctx, 31, 0x1A8EA4u);
    ctx->pc = 0x1A8EA0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8EA4u; }
    }
    if (ctx->pc != 0x1A8EA4u) { return; }
    ctx->pc = 0x1A8EA4u;
    // 0x1a8ea4: 0x24020001
    ctx->pc = 0x1a8ea4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1a8ea8:
    // 0x1a8ea8: 0xdfbf0020
    ctx->pc = 0x1a8ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8eac: 0x7bb10010
    ctx->pc = 0x1a8eacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8eb0: 0x7bb00000
    ctx->pc = 0x1a8eb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8eb4: 0x3e00008
    ctx->pc = 0x1A8EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8EB8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A8D0Cu: goto label_1a8d0c;
            case 0x1A8D14u: goto label_1a8d14;
            case 0x1A8D38u: goto label_1a8d38;
            case 0x1A8D58u: goto label_1a8d58;
            case 0x1A8D98u: goto label_1a8d98;
            case 0x1A8DA8u: goto label_1a8da8;
            case 0x1A8DD8u: goto label_1a8dd8;
            case 0x1A8DF4u: goto label_1a8df4;
            case 0x1A8E00u: goto label_1a8e00;
            case 0x1A8E7Cu: goto label_1a8e7c;
            case 0x1A8E84u: goto label_1a8e84;
            case 0x1A8EA8u: goto label_1a8ea8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A8EBCu;
    // 0x1a8ebc: 0x0
    ctx->pc = 0x1a8ebcu;
    // NOP
}
