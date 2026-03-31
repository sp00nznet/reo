#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00186D30
// Address: 0x186d30 - 0x186e60
void sub_00186D30_0x186d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x186d30u;

    // 0x186d30: 0x27bdffe0
    ctx->pc = 0x186d30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x186d34: 0x240500ff
    ctx->pc = 0x186d34u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    // 0x186d38: 0xffb20010
    ctx->pc = 0x186d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x186d3c: 0x3c120029
    ctx->pc = 0x186d3cu;
    SET_GPR_U32(ctx, 18, ((uint32_t)41 << 16));
    // 0x186d40: 0xffb00000
    ctx->pc = 0x186d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x186d44: 0x2650b0c0
    ctx->pc = 0x186d44u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 4294947008));
    // 0x186d48: 0xffb10008
    ctx->pc = 0x186d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x186d4c: 0x80882d
    ctx->pc = 0x186d4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186d50: 0x24060800
    ctx->pc = 0x186d50u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x186d54: 0xffbf0018
    ctx->pc = 0x186d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x186d58: 0xc041f1a
    ctx->pc = 0x186D58u;
    SET_GPR_U32(ctx, 31, 0x186D60u);
    ctx->pc = 0x186D5Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186D60u; }
    }
    if (ctx->pc != 0x186D60u) { return; }
    ctx->pc = 0x186D60u;
    // 0x186d60: 0x111840
    ctx->pc = 0x186d60u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 1));
    // 0x186d64: 0x711821
    ctx->pc = 0x186d64u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x186d68: 0x31940
    ctx->pc = 0x186d68u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
    // 0x186d6c: 0x711821
    ctx->pc = 0x186d6cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x186d70: 0x31880
    ctx->pc = 0x186d70u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x186d74: 0x3c010023
    ctx->pc = 0x186d74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x186d78: 0x2421fa18
    ctx->pc = 0x186d78u;
    SET_GPR_S32(ctx, 1, ADD32(GPR_U32(ctx, 1), 4294965784));
    // 0x186d7c: 0x231821
    ctx->pc = 0x186d7cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x186d80: 0x701025
    ctx->pc = 0x186d80u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x186d84: 0x30420007
    ctx->pc = 0x186d84u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 7));
    // 0x186d88: 0x10400019
    ctx->pc = 0x186D88u;
    {
        const bool branch_taken_0x186d88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x186D8Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 384));
        if (branch_taken_0x186d88) {
            ctx->pc = 0x186DF0u;
            goto label_186df0;
        }
    }
    ctx->pc = 0x186D90u;
label_186d90:
    // 0x186d90: 0x68640007
    ctx->pc = 0x186d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x186d94: 0x6c640000
    ctx->pc = 0x186d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x186d98: 0x6865000f
    ctx->pc = 0x186d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x186d9c: 0x6c650008
    ctx->pc = 0x186d9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x186da0: 0x68660017
    ctx->pc = 0x186da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x186da4: 0x6c660010
    ctx->pc = 0x186da4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x186da8: 0x6867001f
    ctx->pc = 0x186da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x186dac: 0x6c670018
    ctx->pc = 0x186dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x186db0: 0xb2040007
    ctx->pc = 0x186db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x186db4: 0xb6040000
    ctx->pc = 0x186db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x186db8: 0xb205000f
    ctx->pc = 0x186db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x186dbc: 0xb6050008
    ctx->pc = 0x186dbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x186dc0: 0xb2060017
    ctx->pc = 0x186dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x186dc4: 0xb6060010
    ctx->pc = 0x186dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x186dc8: 0xb207001f
    ctx->pc = 0x186dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x186dcc: 0xb6070018
    ctx->pc = 0x186dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x186dd0: 0x24630020
    ctx->pc = 0x186dd0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x186dd4: 0x0
    ctx->pc = 0x186dd4u;
    // NOP
    // 0x186dd8: 0x0
    ctx->pc = 0x186dd8u;
    // NOP
    // 0x186ddc: 0x1462ffec
    ctx->pc = 0x186DDCu;
    {
        const bool branch_taken_0x186ddc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x186DE0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 32));
        if (branch_taken_0x186ddc) {
            ctx->pc = 0x186D90u;
            goto label_186d90;
        }
    }
    ctx->pc = 0x186DE4u;
    // 0x186de4: 0x1000000f
    ctx->pc = 0x186DE4u;
    {
        const bool branch_taken_0x186de4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x186de4) {
            ctx->pc = 0x186E24u;
            goto label_186e24;
        }
    }
    ctx->pc = 0x186DECu;
    // 0x186dec: 0x0
    ctx->pc = 0x186decu;
    // NOP
label_186df0:
    // 0x186df0: 0xdc680000
    ctx->pc = 0x186df0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x186df4: 0xdc690008
    ctx->pc = 0x186df4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x186df8: 0xdc6a0010
    ctx->pc = 0x186df8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x186dfc: 0xdc640018
    ctx->pc = 0x186dfcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x186e00: 0xfe080000
    ctx->pc = 0x186e00u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 8));
    // 0x186e04: 0xfe090008
    ctx->pc = 0x186e04u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 9));
    // 0x186e08: 0xfe0a0010
    ctx->pc = 0x186e08u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 10));
    // 0x186e0c: 0xfe040018
    ctx->pc = 0x186e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 4));
    // 0x186e10: 0x24630020
    ctx->pc = 0x186e10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x186e14: 0x0
    ctx->pc = 0x186e14u;
    // NOP
    // 0x186e18: 0x0
    ctx->pc = 0x186e18u;
    // NOP
    // 0x186e1c: 0x1462fff4
    ctx->pc = 0x186E1Cu;
    {
        const bool branch_taken_0x186e1c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x186E20u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 32));
        if (branch_taken_0x186e1c) {
            ctx->pc = 0x186DF0u;
            goto label_186df0;
        }
    }
    ctx->pc = 0x186E24u;
label_186e24:
    // 0x186e24: 0x8c680000
    ctx->pc = 0x186e24u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x186e28: 0x220202d
    ctx->pc = 0x186e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186e2c: 0x2645b0c0
    ctx->pc = 0x186e2cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 4294947008));
    // 0x186e30: 0x302d
    ctx->pc = 0x186e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186e34: 0x24070001
    ctx->pc = 0x186e34u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x186e38: 0xc0620d2
    ctx->pc = 0x186E38u;
    SET_GPR_U32(ctx, 31, 0x186E40u);
    ctx->pc = 0x186E3Cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    ctx->pc = 0x188348u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00188348_0x188348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186E40u; }
    }
    if (ctx->pc != 0x186E40u) { return; }
    ctx->pc = 0x186E40u;
    // 0x186e40: 0xdfb00000
    ctx->pc = 0x186e40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186e44: 0x2102b
    ctx->pc = 0x186e44u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x186e48: 0xdfb10008
    ctx->pc = 0x186e48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x186e4c: 0xdfb20010
    ctx->pc = 0x186e4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186e50: 0xdfbf0018
    ctx->pc = 0x186e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x186e54: 0x3e00008
    ctx->pc = 0x186E54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186E58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186D90u: goto label_186d90;
            case 0x186DF0u: goto label_186df0;
            case 0x186E24u: goto label_186e24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x186E5Cu;
    // 0x186e5c: 0x0
    ctx->pc = 0x186e5cu;
    // NOP
}
