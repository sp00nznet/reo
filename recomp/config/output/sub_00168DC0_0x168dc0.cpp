#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00168DC0
// Address: 0x168dc0 - 0x168f60
void sub_00168DC0_0x168dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x168dc0u;

    // 0x168dc0: 0x27bdffd0
    ctx->pc = 0x168dc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x168dc4: 0xffb00000
    ctx->pc = 0x168dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x168dc8: 0xa0802d
    ctx->pc = 0x168dc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168dcc: 0xffb10008
    ctx->pc = 0x168dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x168dd0: 0x80882d
    ctx->pc = 0x168dd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168dd4: 0xffb20010
    ctx->pc = 0x168dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x168dd8: 0xc0902d
    ctx->pc = 0x168dd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ddc: 0xffb30018
    ctx->pc = 0x168ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x168de0: 0xffb40020
    ctx->pc = 0x168de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x168de4: 0x1a000046
    ctx->pc = 0x168DE4u;
    {
        const bool branch_taken_0x168de4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x168DE8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        if (branch_taken_0x168de4) {
            ctx->pc = 0x168F00u;
            goto label_168f00;
        }
    }
    ctx->pc = 0x168DECu;
    // 0x168dec: 0x3c020024
    ctx->pc = 0x168decu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x168df0: 0x3c030024
    ctx->pc = 0x168df0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x168df4: 0x24530638
    ctx->pc = 0x168df4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 1592));
    // 0x168df8: 0x24740860
    ctx->pc = 0x168df8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 3), 2144));
    // 0x168dfc: 0x220202d
    ctx->pc = 0x168dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_168e00:
    // 0x168e00: 0x200282d
    ctx->pc = 0x168e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e04: 0xc0561d4
    ctx->pc = 0x168E04u;
    SET_GPR_U32(ctx, 31, 0x168E0Cu);
    ctx->pc = 0x168E08u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x158750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00158750_0x158750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168E0Cu; }
    }
    if (ctx->pc != 0x168E0Cu) { return; }
    ctx->pc = 0x168E0Cu;
    // 0x168e0c: 0x40282d
    ctx->pc = 0x168e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e10: 0x10a0003c
    ctx->pc = 0x168E10u;
    {
        const bool branch_taken_0x168e10 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x168E14u;
        SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        if (branch_taken_0x168e10) {
            ctx->pc = 0x168F04u;
            goto label_168f04;
        }
    }
    ctx->pc = 0x168E18u;
    // 0x168e18: 0x90a60007
    ctx->pc = 0x168e18u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x168e1c: 0x24840001
    ctx->pc = 0x168e1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x168e20: 0x2048023
    ctx->pc = 0x168e20u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x168e24: 0x2248821
    ctx->pc = 0x168e24u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x168e28: 0x61902
    ctx->pc = 0x168e28u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 6), 4));
    // 0x168e2c: 0x30c6000f
    ctx->pc = 0x168e2cu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), 15));
    // 0x168e30: 0x24c200ff
    ctx->pc = 0x168e30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 255));
    // 0x168e34: 0x90ac000b
    ctx->pc = 0x168e34u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 11)));
    // 0x168e38: 0x304200ff
    ctx->pc = 0x168e38u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x168e3c: 0x90a7000a
    ctx->pc = 0x168e3cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x168e40: 0x2c420008
    ctx->pc = 0x168e40u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 8));
    // 0x168e44: 0x90a80004
    ctx->pc = 0x168e44u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x168e48: 0x90a40005
    ctx->pc = 0x168e48u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x168e4c: 0x90a90006
    ctx->pc = 0x168e4cu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x168e50: 0x90aa0008
    ctx->pc = 0x168e50u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x168e54: 0x10600028
    ctx->pc = 0x168E54u;
    {
        const bool branch_taken_0x168e54 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x168E58u;
        SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
        if (branch_taken_0x168e54) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168E5Cu;
    // 0x168e5c: 0x10400026
    ctx->pc = 0x168E5Cu;
    {
        const bool branch_taken_0x168e5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x168E60u;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 7), 5));
        if (branch_taken_0x168e5c) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168E64u;
    // 0x168e64: 0x30420001
    ctx->pc = 0x168e64u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x168e68: 0x304200ff
    ctx->pc = 0x168e68u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x168e6c: 0x10400022
    ctx->pc = 0x168E6Cu;
    {
        const bool branch_taken_0x168e6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x168E70u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 15));
        if (branch_taken_0x168e6c) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168E74u;
    // 0x168e74: 0x42102
    ctx->pc = 0x168e74u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 4));
    // 0x168e78: 0x81900
    ctx->pc = 0x168e78u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 4));
    // 0x168e7c: 0x21200
    ctx->pc = 0x168e7cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
    // 0x168e80: 0x8e45001c
    ctx->pc = 0x168e80u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x168e84: 0x641825
    ctx->pc = 0x168e84u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x168e88: 0x491025
    ctx->pc = 0x168e88u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x168e8c: 0xae430014
    ctx->pc = 0x168e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x168e90: 0x14a0000c
    ctx->pc = 0x168E90u;
    {
        const bool branch_taken_0x168e90 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x168E94u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
        if (branch_taken_0x168e90) {
            ctx->pc = 0x168EC4u;
            goto label_168ec4;
        }
    }
    ctx->pc = 0x168E98u;
    // 0x168e98: 0xb1080
    ctx->pc = 0x168e98u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 11), 2));
    // 0x168e9c: 0xa1a80
    ctx->pc = 0x168e9cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 10), 10));
    // 0x168ea0: 0x621825
    ctx->pc = 0x168ea0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x168ea4: 0x72182
    ctx->pc = 0x168ea4u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 7), 6));
    // 0x168ea8: 0x641825
    ctx->pc = 0x168ea8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x168eac: 0x31040
    ctx->pc = 0x168eacu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x168eb0: 0x431021
    ctx->pc = 0x168eb0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x168eb4: 0x210c0
    ctx->pc = 0x168eb4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x168eb8: 0x431021
    ctx->pc = 0x168eb8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x168ebc: 0x21040
    ctx->pc = 0x168ebcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x168ec0: 0xae42001c
    ctx->pc = 0x168ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_168ec4:
    // 0x168ec4: 0x61880
    ctx->pc = 0x168ec4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
    // 0x168ec8: 0x30e2001f
    ctx->pc = 0x168ec8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 7), 31));
    // 0x168ecc: 0x731821
    ctx->pc = 0x168eccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x168ed0: 0x21140
    ctx->pc = 0x168ed0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x168ed4: 0xc20c2
    ctx->pc = 0x168ed4u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 12), 3));
    // 0x168ed8: 0x8c650000
    ctx->pc = 0x168ed8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x168edc: 0x441025
    ctx->pc = 0x168edcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x168ee0: 0xae540008
    ctx->pc = 0x168ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 20));
    // 0x168ee4: 0x212c0
    ctx->pc = 0x168ee4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 11));
    // 0x168ee8: 0xae450020
    ctx->pc = 0x168ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 5));
    // 0x168eec: 0x10000004
    ctx->pc = 0x168EECu;
    {
        const bool branch_taken_0x168eec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x168EF0u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
        if (branch_taken_0x168eec) {
            ctx->pc = 0x168F00u;
            goto label_168f00;
        }
    }
    ctx->pc = 0x168EF4u;
    // 0x168ef4: 0x0
    ctx->pc = 0x168ef4u;
    // NOP
label_168ef8:
    // 0x168ef8: 0x1e00ffc1
    ctx->pc = 0x168EF8u;
    {
        const bool branch_taken_0x168ef8 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x168EFCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x168ef8) {
            ctx->pc = 0x168E00u;
            goto label_168e00;
        }
    }
    ctx->pc = 0x168F00u;
label_168f00:
    // 0x168f00: 0x24020001
    ctx->pc = 0x168f00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_168f04:
    // 0x168f04: 0xdfb00000
    ctx->pc = 0x168f04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168f08: 0xdfb10008
    ctx->pc = 0x168f08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x168f0c: 0xdfb20010
    ctx->pc = 0x168f0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168f10: 0xdfb30018
    ctx->pc = 0x168f10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x168f14: 0xdfb40020
    ctx->pc = 0x168f14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168f18: 0xdfbf0028
    ctx->pc = 0x168f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x168f1c: 0x3e00008
    ctx->pc = 0x168F1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168F20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168E00u: goto label_168e00;
            case 0x168EC4u: goto label_168ec4;
            case 0x168EF8u: goto label_168ef8;
            case 0x168F00u: goto label_168f00;
            case 0x168F04u: goto label_168f04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x168F24u;
    // 0x168f24: 0x0
    ctx->pc = 0x168f24u;
    // NOP
    // 0x168f28: 0x27bdfff0
    ctx->pc = 0x168f28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x168f2c: 0x3c050027
    ctx->pc = 0x168f2cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)39 << 16));
    // 0x168f30: 0xffbf0000
    ctx->pc = 0x168f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168f34: 0x24040020
    ctx->pc = 0x168f34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    // 0x168f38: 0x24a51808
    ctx->pc = 0x168f38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 6152));
    // 0x168f3c: 0xdfbf0000
    ctx->pc = 0x168f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168f40: 0x805e406
    ctx->pc = 0x168F40u;
    ctx->pc = 0x168F44u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x179018u;
    entry_179018_0x1790a8(rdram, ctx, runtime); return;
    ctx->pc = 0x168F48u;
    // 0x168f48: 0x27bdfff0
    ctx->pc = 0x168f48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x168f4c: 0xffbf0000
    ctx->pc = 0x168f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168f50: 0xdfbf0000
    ctx->pc = 0x168f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168f54: 0x805e42a
    ctx->pc = 0x168F54u;
    ctx->pc = 0x168F58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1790A8u;
    entry_1790a8_0x1790f0(rdram, ctx, runtime); return;
    ctx->pc = 0x168F5Cu;
    // 0x168f5c: 0x0
    ctx->pc = 0x168f5cu;
    // NOP
}
