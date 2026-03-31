#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00157DD0
// Address: 0x157dd0 - 0x157e40
void sub_00157DD0_0x157dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x157dd0u;

    // 0x157dd0: 0x27bdffe0
    ctx->pc = 0x157dd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x157dd4: 0xffb00000
    ctx->pc = 0x157dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x157dd8: 0x80802d
    ctx->pc = 0x157dd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157ddc: 0xffb10008
    ctx->pc = 0x157ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x157de0: 0xffbf0010
    ctx->pc = 0x157de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x157de4: 0xc0560f2
    ctx->pc = 0x157DE4u;
    SET_GPR_U32(ctx, 31, 0x157DECu);
    ctx->pc = 0x157DE8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1583C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001583C8_0x1583c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157DECu; }
    }
    if (ctx->pc != 0x157DECu) { return; }
    ctx->pc = 0x157DECu;
    // 0x157dec: 0x3c05ff02
    ctx->pc = 0x157decu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65282 << 16));
    // 0x157df0: 0x10400007
    ctx->pc = 0x157DF0u;
    {
        const bool branch_taken_0x157df0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x157DF4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x157df0) {
            ctx->pc = 0x157E10u;
            goto label_157e10;
        }
    }
    ctx->pc = 0x157DF8u;
    // 0x157df8: 0xdfb00000
    ctx->pc = 0x157df8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157dfc: 0x34a50201
    ctx->pc = 0x157dfcu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 513));
    // 0x157e00: 0xdfb10008
    ctx->pc = 0x157e00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x157e04: 0xdfbf0010
    ctx->pc = 0x157e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157e08: 0x805607e
    ctx->pc = 0x157E08u;
    ctx->pc = 0x157E0Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1581F8u;
    sub_001581F8_0x1581f8(rdram, ctx, runtime); return;
    ctx->pc = 0x157E10u;
label_157e10:
    // 0x157e10: 0x6a03001b
    ctx->pc = 0x157e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x157e14: 0x6e030014
    ctx->pc = 0x157e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x157e18: 0x8e04001c
    ctx->pc = 0x157e18u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x157e1c: 0xb2230007
    ctx->pc = 0x157e1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157e20: 0xb6230000
    ctx->pc = 0x157e20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157e24: 0xae240008
    ctx->pc = 0x157e24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x157e28: 0xdfb00000
    ctx->pc = 0x157e28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157e2c: 0xdfb10008
    ctx->pc = 0x157e2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x157e30: 0xdfbf0010
    ctx->pc = 0x157e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157e34: 0x3e00008
    ctx->pc = 0x157E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157E38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x157E10u: goto label_157e10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x157E3Cu;
    // 0x157e3c: 0x0
    ctx->pc = 0x157e3cu;
    // NOP
}
