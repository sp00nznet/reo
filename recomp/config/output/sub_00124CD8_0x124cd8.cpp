#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00124CD8
// Address: 0x124cd8 - 0x124e40
void sub_00124CD8_0x124cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x124cd8u;

    // 0x124cd8: 0x27bdffe0
    ctx->pc = 0x124cd8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x124cdc: 0x34028000
    ctx->pc = 0x124cdcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
    // 0x124ce0: 0xffb00000
    ctx->pc = 0x124ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x124ce4: 0xa0802d
    ctx->pc = 0x124ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124ce8: 0xffb10008
    ctx->pc = 0x124ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x124cec: 0x80882d
    ctx->pc = 0x124cecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124cf0: 0xffb20010
    ctx->pc = 0x124cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x124cf4: 0xffbf0018
    ctx->pc = 0x124cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x124cf8: 0x96030000
    ctx->pc = 0x124cf8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x124cfc: 0x33a00
    ctx->pc = 0x124cfcu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 3), 8));
    // 0x124d00: 0x31a02
    ctx->pc = 0x124d00u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 8));
    // 0x124d04: 0x671825
    ctx->pc = 0x124d04u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x124d08: 0x3063ffff
    ctx->pc = 0x124d08u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 65535));
    // 0x124d0c: 0x14620008
    ctx->pc = 0x124D0Cu;
    {
        const bool branch_taken_0x124d0c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x124D10u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x124d0c) {
            ctx->pc = 0x124D30u;
            goto label_124d30;
        }
    }
    ctx->pc = 0x124D14u;
    // 0x124d14: 0xdfb00000
    ctx->pc = 0x124d14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124d18: 0xdfb10008
    ctx->pc = 0x124d18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124d1c: 0xdfb20010
    ctx->pc = 0x124d1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124d20: 0xdfbf0018
    ctx->pc = 0x124d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124d24: 0x804927a
    ctx->pc = 0x124D24u;
    ctx->pc = 0x124D28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1249E8u;
    entry_1249e8_0x124cd8(rdram, ctx, runtime); return;
    ctx->pc = 0x124D2Cu;
    // 0x124d2c: 0x0
    ctx->pc = 0x124d2cu;
    // NOP
label_124d30:
    // 0x124d30: 0xc049702
    ctx->pc = 0x124D30u;
    SET_GPR_U32(ctx, 31, 0x124D38u);
    ctx->pc = 0x124D34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x125C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00125C08_0x125c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124D38u; }
    }
    if (ctx->pc != 0x124D38u) { return; }
    ctx->pc = 0x124D38u;
    // 0x124d38: 0x10400009
    ctx->pc = 0x124D38u;
    {
        const bool branch_taken_0x124d38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x124D3Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x124d38) {
            ctx->pc = 0x124D60u;
            goto label_124d60;
        }
    }
    ctx->pc = 0x124D40u;
    // 0x124d40: 0x220202d
    ctx->pc = 0x124d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124d44: 0xdfb10008
    ctx->pc = 0x124d44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124d48: 0xdfb00000
    ctx->pc = 0x124d48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124d4c: 0x240302d
    ctx->pc = 0x124d4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124d50: 0xdfb20010
    ctx->pc = 0x124d50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124d54: 0xdfbf0018
    ctx->pc = 0x124d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124d58: 0x8049666
    ctx->pc = 0x124D58u;
    ctx->pc = 0x124D5Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x125998u;
    entry_125998_0x125a90(rdram, ctx, runtime); return;
    ctx->pc = 0x124D60u;
label_124d60:
    // 0x124d60: 0xc049904
    ctx->pc = 0x124D60u;
    SET_GPR_U32(ctx, 31, 0x124D68u);
    ctx->pc = 0x124D64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x126410u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00126410_0x126410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124D68u; }
    }
    if (ctx->pc != 0x124D68u) { return; }
    ctx->pc = 0x124D68u;
    // 0x124d68: 0x10400009
    ctx->pc = 0x124D68u;
    {
        const bool branch_taken_0x124d68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x124D6Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x124d68) {
            ctx->pc = 0x124D90u;
            goto label_124d90;
        }
    }
    ctx->pc = 0x124D70u;
    // 0x124d70: 0x220202d
    ctx->pc = 0x124d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124d74: 0xdfb10008
    ctx->pc = 0x124d74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124d78: 0xdfb00000
    ctx->pc = 0x124d78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124d7c: 0x240302d
    ctx->pc = 0x124d7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124d80: 0xdfb20010
    ctx->pc = 0x124d80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124d84: 0xdfbf0018
    ctx->pc = 0x124d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124d88: 0x8049798
    ctx->pc = 0x124D88u;
    ctx->pc = 0x124D8Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x125E60u;
    entry_125e60_0x125f60(rdram, ctx, runtime); return;
    ctx->pc = 0x124D90u;
label_124d90:
    // 0x124d90: 0xc048d1c
    ctx->pc = 0x124D90u;
    SET_GPR_U32(ctx, 31, 0x124D98u);
    ctx->pc = 0x124D94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x123470u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00123470_0x123470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124D98u; }
    }
    if (ctx->pc != 0x124D98u) { return; }
    ctx->pc = 0x124D98u;
    // 0x124d98: 0x10400009
    ctx->pc = 0x124D98u;
    {
        const bool branch_taken_0x124d98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x124D9Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x124d98) {
            ctx->pc = 0x124DC0u;
            goto label_124dc0;
        }
    }
    ctx->pc = 0x124DA0u;
    // 0x124da0: 0x220202d
    ctx->pc = 0x124da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124da4: 0xdfb10008
    ctx->pc = 0x124da4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124da8: 0xdfb00000
    ctx->pc = 0x124da8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124dac: 0x240302d
    ctx->pc = 0x124dacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124db0: 0xdfb20010
    ctx->pc = 0x124db0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124db4: 0xdfbf0018
    ctx->pc = 0x124db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124db8: 0x8048d7a
    ctx->pc = 0x124DB8u;
    ctx->pc = 0x124DBCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1235E8u;
    entry_1235e8_0x123700(rdram, ctx, runtime); return;
    ctx->pc = 0x124DC0u;
label_124dc0:
    // 0x124dc0: 0xc048f56
    ctx->pc = 0x124DC0u;
    SET_GPR_U32(ctx, 31, 0x124DC8u);
    ctx->pc = 0x124DC4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x123D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00123D58_0x123d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124DC8u; }
    }
    if (ctx->pc != 0x124DC8u) { return; }
    ctx->pc = 0x124DC8u;
    // 0x124dc8: 0x10400009
    ctx->pc = 0x124DC8u;
    {
        const bool branch_taken_0x124dc8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x124DCCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x124dc8) {
            ctx->pc = 0x124DF0u;
            goto label_124df0;
        }
    }
    ctx->pc = 0x124DD0u;
    // 0x124dd0: 0x220202d
    ctx->pc = 0x124dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124dd4: 0xdfb10008
    ctx->pc = 0x124dd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124dd8: 0xdfb00000
    ctx->pc = 0x124dd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124ddc: 0x240302d
    ctx->pc = 0x124ddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124de0: 0xdfb20010
    ctx->pc = 0x124de0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124de4: 0xdfbf0018
    ctx->pc = 0x124de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124de8: 0x8048fb0
    ctx->pc = 0x124DE8u;
    ctx->pc = 0x124DECu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x123EC0u;
    entry_123ec0_0x123fc0(rdram, ctx, runtime); return;
    ctx->pc = 0x124DF0u;
label_124df0:
    // 0x124df0: 0xc048be8
    ctx->pc = 0x124DF0u;
    SET_GPR_U32(ctx, 31, 0x124DF8u);
    ctx->pc = 0x124DF4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x122FA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00122FA0_0x122fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124DF8u; }
    }
    if (ctx->pc != 0x124DF8u) { return; }
    ctx->pc = 0x124DF8u;
    // 0x124df8: 0x10400009
    ctx->pc = 0x124DF8u;
    {
        const bool branch_taken_0x124df8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x124DFCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x124df8) {
            ctx->pc = 0x124E20u;
            goto label_124e20;
        }
    }
    ctx->pc = 0x124E00u;
    // 0x124e00: 0xdfb10008
    ctx->pc = 0x124e00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124e04: 0x200282d
    ctx->pc = 0x124e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124e08: 0xdfb00000
    ctx->pc = 0x124e08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124e0c: 0x240302d
    ctx->pc = 0x124e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124e10: 0xdfb20010
    ctx->pc = 0x124e10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124e14: 0xdfbf0018
    ctx->pc = 0x124e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124e18: 0x8048bbc
    ctx->pc = 0x124E18u;
    ctx->pc = 0x124E1Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x122EF0u;
    entry_122ef0_0x122fa0(rdram, ctx, runtime); return;
    ctx->pc = 0x124E20u;
label_124e20:
    // 0x124e20: 0xdfb00000
    ctx->pc = 0x124e20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124e24: 0x2402ffff
    ctx->pc = 0x124e24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x124e28: 0xdfb10008
    ctx->pc = 0x124e28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124e2c: 0xdfb20010
    ctx->pc = 0x124e2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124e30: 0xdfbf0018
    ctx->pc = 0x124e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124e34: 0x3e00008
    ctx->pc = 0x124E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124E38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124D30u: goto label_124d30;
            case 0x124D60u: goto label_124d60;
            case 0x124D90u: goto label_124d90;
            case 0x124DC0u: goto label_124dc0;
            case 0x124DF0u: goto label_124df0;
            case 0x124E20u: goto label_124e20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x124E3Cu;
    // 0x124e3c: 0x0
    ctx->pc = 0x124e3cu;
    // NOP
}
