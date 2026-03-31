#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00169D58
// Address: 0x169d58 - 0x169e30
void sub_00169D58_0x169d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x169d58u;

    // 0x169d58: 0xac860004
    ctx->pc = 0x169d58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x169d5c: 0x3e00008
    ctx->pc = 0x169D5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169D60u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169DC0u: goto label_169dc0;
            case 0x169DF0u: goto label_169df0;
            case 0x169E1Cu: goto label_169e1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x169D64u;
    // 0x169d64: 0x0
    ctx->pc = 0x169d64u;
    // NOP
    // 0x169d68: 0x27bdffe0
    ctx->pc = 0x169d68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x169d6c: 0xffb00000
    ctx->pc = 0x169d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169d70: 0x80802d
    ctx->pc = 0x169d70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169d74: 0xffb10008
    ctx->pc = 0x169d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x169d78: 0xa0882d
    ctx->pc = 0x169d78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169d7c: 0x16000010
    ctx->pc = 0x169D7Cu;
    {
        const bool branch_taken_0x169d7c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x169D80u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x169d7c) {
            ctx->pc = 0x169DC0u;
            goto label_169dc0;
        }
    }
    ctx->pc = 0x169D84u;
    // 0x169d84: 0x3c020023
    ctx->pc = 0x169d84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x169d88: 0x2442ef88
    ctx->pc = 0x169d88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294963080));
    // 0x169d8c: 0x684301a3
    ctx->pc = 0x169d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 419); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x169d90: 0x6c43019c
    ctx->pc = 0x169d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 412); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x169d94: 0x684401ab
    ctx->pc = 0x169d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 427); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x169d98: 0x6c4401a4
    ctx->pc = 0x169d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 420); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x169d9c: 0x8c4501ac
    ctx->pc = 0x169d9cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x169da0: 0xb2230007
    ctx->pc = 0x169da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x169da4: 0xb6230000
    ctx->pc = 0x169da4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x169da8: 0xb224000f
    ctx->pc = 0x169da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x169dac: 0xb6240008
    ctx->pc = 0x169dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x169db0: 0xae250010
    ctx->pc = 0x169db0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 5));
    // 0x169db4: 0x10000019
    ctx->pc = 0x169DB4u;
    {
        const bool branch_taken_0x169db4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x169DB8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x169db4) {
            ctx->pc = 0x169E1Cu;
            goto label_169e1c;
        }
    }
    ctx->pc = 0x169DBCu;
    // 0x169dbc: 0x0
    ctx->pc = 0x169dbcu;
    // NOP
label_169dc0:
    // 0x169dc0: 0xc05a78c
    ctx->pc = 0x169DC0u;
    SET_GPR_U32(ctx, 31, 0x169DC8u);
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169DC8u; }
    }
    if (ctx->pc != 0x169DC8u) { return; }
    ctx->pc = 0x169DC8u;
    // 0x169dc8: 0x3c05ff00
    ctx->pc = 0x169dc8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x169dcc: 0x10400008
    ctx->pc = 0x169DCCu;
    {
        const bool branch_taken_0x169dcc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x169DD0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x169dcc) {
            ctx->pc = 0x169DF0u;
            goto label_169df0;
        }
    }
    ctx->pc = 0x169DD4u;
    // 0x169dd4: 0xdfb00000
    ctx->pc = 0x169dd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169dd8: 0x34a50102
    ctx->pc = 0x169dd8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 258));
    // 0x169ddc: 0xdfb10008
    ctx->pc = 0x169ddcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169de0: 0xdfbf0010
    ctx->pc = 0x169de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169de4: 0x805a704
    ctx->pc = 0x169DE4u;
    ctx->pc = 0x169DE8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x169DECu;
    // 0x169dec: 0x0
    ctx->pc = 0x169decu;
    // NOP
label_169df0:
    // 0x169df0: 0x6a020993
    ctx->pc = 0x169df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2451); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x169df4: 0x6e02098c
    ctx->pc = 0x169df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2444); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x169df8: 0x6a03099b
    ctx->pc = 0x169df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2459); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x169dfc: 0x6e030994
    ctx->pc = 0x169dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2452); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x169e00: 0x8e04099c
    ctx->pc = 0x169e00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2460)));
    // 0x169e04: 0xb2220007
    ctx->pc = 0x169e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x169e08: 0xb6220000
    ctx->pc = 0x169e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x169e0c: 0xb223000f
    ctx->pc = 0x169e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x169e10: 0xb6230008
    ctx->pc = 0x169e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x169e14: 0xae240010
    ctx->pc = 0x169e14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
    // 0x169e18: 0xdfb00000
    ctx->pc = 0x169e18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_169e1c:
    // 0x169e1c: 0x102d
    ctx->pc = 0x169e1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e20: 0xdfb10008
    ctx->pc = 0x169e20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169e24: 0xdfbf0010
    ctx->pc = 0x169e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169e28: 0x3e00008
    ctx->pc = 0x169E28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169E2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169DC0u: goto label_169dc0;
            case 0x169DF0u: goto label_169df0;
            case 0x169E1Cu: goto label_169e1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x169E30u;
}
