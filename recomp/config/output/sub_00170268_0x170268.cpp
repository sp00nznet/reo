#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00170268
// Address: 0x170268 - 0x170358
void sub_00170268_0x170268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x170268u;

    // 0x170268: 0x27bdffc0
    ctx->pc = 0x170268u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17026c: 0xffb20030
    ctx->pc = 0x17026cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x170270: 0xc0902d
    ctx->pc = 0x170270u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170274: 0xffb00020
    ctx->pc = 0x170274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x170278: 0xa0802d
    ctx->pc = 0x170278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17027c: 0xffb10028
    ctx->pc = 0x17027cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x170280: 0x80882d
    ctx->pc = 0x170280u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170284: 0xffbf0038
    ctx->pc = 0x170284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x170288: 0xc05c0d6
    ctx->pc = 0x170288u;
    SET_GPR_U32(ctx, 31, 0x170290u);
    ctx->pc = 0x17028Cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x170358u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00170358_0x170358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170290u; }
    }
    if (ctx->pc != 0x170290u) { return; }
    ctx->pc = 0x170290u;
    // 0x170290: 0x40202d
    ctx->pc = 0x170290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170294: 0x5080002b
    ctx->pc = 0x170294u;
    {
        const bool branch_taken_0x170294 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x170294) {
            ctx->pc = 0x170298u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->pc = 0x170344u;
            goto label_170344;
        }
    }
    ctx->pc = 0x17029Cu;
    // 0x17029c: 0x8c830000
    ctx->pc = 0x17029cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1702a0: 0x10600027
    ctx->pc = 0x1702A0u;
    {
        const bool branch_taken_0x1702a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1702A4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1702a0) {
            ctx->pc = 0x170340u;
            goto label_170340;
        }
    }
    ctx->pc = 0x1702A8u;
    // 0x1702a8: 0x68820013
    ctx->pc = 0x1702a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 19); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1702ac: 0x6c82000c
    ctx->pc = 0x1702acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 12); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1702b0: 0x6883001b
    ctx->pc = 0x1702b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1702b4: 0x6c830014
    ctx->pc = 0x1702b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 20); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1702b8: 0x68850023
    ctx->pc = 0x1702b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 35); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1702bc: 0x6c85001c
    ctx->pc = 0x1702bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 28); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1702c0: 0x6886002b
    ctx->pc = 0x1702c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 43); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1702c4: 0x6c860024
    ctx->pc = 0x1702c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 36); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1702c8: 0xb2220ce3
    ctx->pc = 0x1702c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3299); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1702cc: 0xb6220cdc
    ctx->pc = 0x1702ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3292); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1702d0: 0xb2230ceb
    ctx->pc = 0x1702d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3307); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1702d4: 0xb6230ce4
    ctx->pc = 0x1702d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3300); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1702d8: 0xb2250cf3
    ctx->pc = 0x1702d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3315); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1702dc: 0xb6250cec
    ctx->pc = 0x1702dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3308); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1702e0: 0xb2260cfb
    ctx->pc = 0x1702e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3323); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1702e4: 0xb6260cf4
    ctx->pc = 0x1702e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3316); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1702e8: 0x68820033
    ctx->pc = 0x1702e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 51); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1702ec: 0x6c82002c
    ctx->pc = 0x1702ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 44); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1702f0: 0xb2220d03
    ctx->pc = 0x1702f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3331); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1702f4: 0xb6220cfc
    ctx->pc = 0x1702f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3324); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1702f8: 0x24830034
    ctx->pc = 0x1702f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 52));
    // 0x1702fc: 0x8e040000
    ctx->pc = 0x1702fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x170300: 0x3a0282d
    ctx->pc = 0x170300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170304: 0x8c620200
    ctx->pc = 0x170304u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 512)));
    // 0x170308: 0x27a60010
    ctx->pc = 0x170308u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    // 0x17030c: 0xafa30000
    ctx->pc = 0x17030cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x170310: 0xc0565e0
    ctx->pc = 0x170310u;
    SET_GPR_U32(ctx, 31, 0x170318u);
    ctx->pc = 0x170314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x159780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00159780_0x159780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170318u; }
    }
    if (ctx->pc != 0x170318u) { return; }
    ctx->pc = 0x170318u;
    // 0x170318: 0x3c05ff00
    ctx->pc = 0x170318u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x17031c: 0x220202d
    ctx->pc = 0x17031cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170320: 0x10400005
    ctx->pc = 0x170320u;
    {
        const bool branch_taken_0x170320 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x170324u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3867));
        if (branch_taken_0x170320) {
            ctx->pc = 0x170338u;
            goto label_170338;
        }
    }
    ctx->pc = 0x170328u;
    // 0x170328: 0xc05a704
    ctx->pc = 0x170328u;
    SET_GPR_U32(ctx, 31, 0x170330u);
    ctx->pc = 0x169C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169C10_0x169c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170330u; }
    }
    if (ctx->pc != 0x170330u) { return; }
    ctx->pc = 0x170330u;
    // 0x170330: 0x10000004
    ctx->pc = 0x170330u;
    {
        const bool branch_taken_0x170330 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x170334u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x170330) {
            ctx->pc = 0x170344u;
            goto label_170344;
        }
    }
    ctx->pc = 0x170338u;
label_170338:
    // 0x170338: 0x24030001
    ctx->pc = 0x170338u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17033c: 0xae430000
    ctx->pc = 0x17033cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_170340:
    // 0x170340: 0xdfb00020
    ctx->pc = 0x170340u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_170344:
    // 0x170344: 0xdfb10028
    ctx->pc = 0x170344u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x170348: 0xdfb20030
    ctx->pc = 0x170348u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17034c: 0xdfbf0038
    ctx->pc = 0x17034cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x170350: 0x3e00008
    ctx->pc = 0x170350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170354u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170338u: goto label_170338;
            case 0x170340u: goto label_170340;
            case 0x170344u: goto label_170344;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170358u;
}
