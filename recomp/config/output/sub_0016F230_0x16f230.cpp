#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016F230
// Address: 0x16f230 - 0x16f338
void sub_0016F230_0x16f230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16f230u;

    // 0x16f230: 0x27bdffb0
    ctx->pc = 0x16f230u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16f234: 0xffb00030
    ctx->pc = 0x16f234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x16f238: 0x80802d
    ctx->pc = 0x16f238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f23c: 0xffb10038
    ctx->pc = 0x16f23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x16f240: 0x26110da4
    ctx->pc = 0x16f240u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 3492));
    // 0x16f244: 0xffb20040
    ctx->pc = 0x16f244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x16f248: 0xffbf0048
    ctx->pc = 0x16f248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x16f24c: 0x8e220000
    ctx->pc = 0x16f24cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16f250: 0x14400033
    ctx->pc = 0x16F250u;
    {
        const bool branch_taken_0x16f250 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16F254u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 3292));
        if (branch_taken_0x16f250) {
            ctx->pc = 0x16F320u;
            goto label_16f320;
        }
    }
    ctx->pc = 0x16F258u;
    // 0x16f258: 0x6a020d5f
    ctx->pc = 0x16f258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3423); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16f25c: 0x6e020d58
    ctx->pc = 0x16f25cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3416); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16f260: 0x6a030d67
    ctx->pc = 0x16f260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3431); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16f264: 0x6e030d60
    ctx->pc = 0x16f264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3424); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16f268: 0x6a060d6f
    ctx->pc = 0x16f268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3439); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16f26c: 0x6e060d68
    ctx->pc = 0x16f26cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3432); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16f270: 0x8e070d70
    ctx->pc = 0x16f270u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 3440)));
    // 0x16f274: 0xb3a20007
    ctx->pc = 0x16f274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16f278: 0xb7a20000
    ctx->pc = 0x16f278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16f27c: 0xb3a3000f
    ctx->pc = 0x16f27cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16f280: 0xb7a30008
    ctx->pc = 0x16f280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16f284: 0xb3a60017
    ctx->pc = 0x16f284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16f288: 0xb7a60010
    ctx->pc = 0x16f288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16f28c: 0xafa70018
    ctx->pc = 0x16f28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x16f290: 0xc05b9da
    ctx->pc = 0x16F290u;
    SET_GPR_U32(ctx, 31, 0x16F298u);
    ctx->pc = 0x16F294u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x16E768u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E768_0x16e768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F298u; }
    }
    if (ctx->pc != 0x16F298u) { return; }
    ctx->pc = 0x16F298u;
    // 0x16f298: 0x200202d
    ctx->pc = 0x16f298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f29c: 0x14400006
    ctx->pc = 0x16F29Cu;
    {
        const bool branch_taken_0x16f29c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16F2A0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x16f29c) {
            ctx->pc = 0x16F2B8u;
            goto label_16f2b8;
        }
    }
    ctx->pc = 0x16F2A4u;
    // 0x16f2a4: 0xc05ba38
    ctx->pc = 0x16F2A4u;
    SET_GPR_U32(ctx, 31, 0x16F2ACu);
    ctx->pc = 0x16E8E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E8E0_0x16e8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F2ACu; }
    }
    if (ctx->pc != 0x16F2ACu) { return; }
    ctx->pc = 0x16F2ACu;
    // 0x16f2ac: 0x8fa30018
    ctx->pc = 0x16f2acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16f2b0: 0x2180a
    ctx->pc = 0x16f2b0u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 0));
    // 0x16f2b4: 0xafa30018
    ctx->pc = 0x16f2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_16f2b8:
    // 0x16f2b8: 0x3a0202d
    ctx->pc = 0x16f2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f2bc: 0x27a50020
    ctx->pc = 0x16f2bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x16f2c0: 0xc05da70
    ctx->pc = 0x16F2C0u;
    SET_GPR_U32(ctx, 31, 0x16F2C8u);
    ctx->pc = 0x16F2C4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 36));
    ctx->pc = 0x1769C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001769C0_0x1769c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F2C8u; }
    }
    if (ctx->pc != 0x16F2C8u) { return; }
    ctx->pc = 0x16F2C8u;
    // 0x16f2c8: 0x24050001
    ctx->pc = 0x16f2c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f2cc: 0x6ba20007
    ctx->pc = 0x16f2ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16f2d0: 0x6fa20000
    ctx->pc = 0x16f2d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16f2d4: 0x6ba3000f
    ctx->pc = 0x16f2d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16f2d8: 0x6fa30008
    ctx->pc = 0x16f2d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16f2dc: 0x6ba40017
    ctx->pc = 0x16f2dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16f2e0: 0x6fa40010
    ctx->pc = 0x16f2e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16f2e4: 0x8fa60018
    ctx->pc = 0x16f2e4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16f2e8: 0xb2020daf
    ctx->pc = 0x16f2e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3503); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16f2ec: 0xb6020da8
    ctx->pc = 0x16f2ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3496); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16f2f0: 0xb2030db7
    ctx->pc = 0x16f2f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3511); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16f2f4: 0xb6030db0
    ctx->pc = 0x16f2f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3504); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16f2f8: 0xb2040dbf
    ctx->pc = 0x16f2f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3519); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16f2fc: 0xb6040db8
    ctx->pc = 0x16f2fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3512); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16f300: 0xae060dc0
    ctx->pc = 0x16f300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3520), GPR_U32(ctx, 6));
    // 0x16f304: 0x8fa40024
    ctx->pc = 0x16f304u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x16f308: 0x8fa20020
    ctx->pc = 0x16f308u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16f30c: 0x8e430020
    ctx->pc = 0x16f30cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x16f310: 0xae250000
    ctx->pc = 0x16f310u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x16f314: 0x431023
    ctx->pc = 0x16f314u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16f318: 0xae240024
    ctx->pc = 0x16f318u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 4));
    // 0x16f31c: 0xae220020
    ctx->pc = 0x16f31cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_16f320:
    // 0x16f320: 0xdfb00030
    ctx->pc = 0x16f320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16f324: 0xdfb10038
    ctx->pc = 0x16f324u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16f328: 0xdfb20040
    ctx->pc = 0x16f328u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16f32c: 0xdfbf0048
    ctx->pc = 0x16f32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x16f330: 0x3e00008
    ctx->pc = 0x16F330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F334u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16F2B8u: goto label_16f2b8;
            case 0x16F320u: goto label_16f320;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16F338u;
}
