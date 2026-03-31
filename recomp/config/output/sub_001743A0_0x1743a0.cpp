#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001743A0
// Address: 0x1743a0 - 0x174448
void sub_001743A0_0x1743a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1743a0u;

    // 0x1743a0: 0x27bdffe0
    ctx->pc = 0x1743a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1743a4: 0xffb00000
    ctx->pc = 0x1743a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1743a8: 0x80802d
    ctx->pc = 0x1743a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1743ac: 0xffb10008
    ctx->pc = 0x1743acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1743b0: 0xc0882d
    ctx->pc = 0x1743b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1743b4: 0xffbf0010
    ctx->pc = 0x1743b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1743b8: 0xe0302d
    ctx->pc = 0x1743b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1743bc: 0x8e020008
    ctx->pc = 0x1743bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1743c0: 0x1040001c
    ctx->pc = 0x1743C0u;
    {
        const bool branch_taken_0x1743c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1743C4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1743c0) {
            ctx->pc = 0x174434u;
            goto label_174434;
        }
    }
    ctx->pc = 0x1743C8u;
    // 0x1743c8: 0xc05d112
    ctx->pc = 0x1743C8u;
    SET_GPR_U32(ctx, 31, 0x1743D0u);
    ctx->pc = 0x174448u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00174448_0x174448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1743D0u; }
    }
    if (ctx->pc != 0x1743D0u) { return; }
    ctx->pc = 0x1743D0u;
    // 0x1743d0: 0x40302d
    ctx->pc = 0x1743d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1743d4: 0x2402ffff
    ctx->pc = 0x1743d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1743d8: 0x50c20017
    ctx->pc = 0x1743D8u;
    {
        const bool branch_taken_0x1743d8 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        if (branch_taken_0x1743d8) {
            ctx->pc = 0x1743DCu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x174438u;
            goto label_174438;
        }
    }
    ctx->pc = 0x1743E0u;
    // 0x1743e0: 0x8e030010
    ctx->pc = 0x1743e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1743e4: 0x8e020004
    ctx->pc = 0x1743e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1743e8: 0x661821
    ctx->pc = 0x1743e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1743ec: 0x8e040008
    ctx->pc = 0x1743ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1743f0: 0x622823
    ctx->pc = 0x1743f0u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1743f4: 0x62102a
    ctx->pc = 0x1743f4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x1743f8: 0xa2180a
    ctx->pc = 0x1743f8u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 5));
    // 0x1743fc: 0x8e050000
    ctx->pc = 0x1743fcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x174400: 0x31040
    ctx->pc = 0x174400u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x174404: 0x862023
    ctx->pc = 0x174404u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x174408: 0x431021
    ctx->pc = 0x174408u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17440c: 0xae040008
    ctx->pc = 0x17440cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x174410: 0xae030010
    ctx->pc = 0x174410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x174414: 0x21080
    ctx->pc = 0x174414u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x174418: 0x451021
    ctx->pc = 0x174418u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17441c: 0x68430007
    ctx->pc = 0x17441cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x174420: 0x6c430000
    ctx->pc = 0x174420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x174424: 0x8c440008
    ctx->pc = 0x174424u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x174428: 0xb2230007
    ctx->pc = 0x174428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17442c: 0xb6230000
    ctx->pc = 0x17442cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x174430: 0xae240008
    ctx->pc = 0x174430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
label_174434:
    // 0x174434: 0xdfb00000
    ctx->pc = 0x174434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_174438:
    // 0x174438: 0xdfb10008
    ctx->pc = 0x174438u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17443c: 0xdfbf0010
    ctx->pc = 0x17443cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174440: 0x3e00008
    ctx->pc = 0x174440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174444u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174434u: goto label_174434;
            case 0x174438u: goto label_174438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174448u;
}
