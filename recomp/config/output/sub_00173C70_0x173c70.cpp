#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00173C70
// Address: 0x173c70 - 0x173e38
void sub_00173C70_0x173c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x173c70u;

    // 0x173c70: 0x27bdfdd0
    ctx->pc = 0x173c70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966736));
    // 0x173c74: 0xffb00200
    ctx->pc = 0x173c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 16));
    // 0x173c78: 0x80802d
    ctx->pc = 0x173c78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173c7c: 0x32020007
    ctx->pc = 0x173c7cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 7));
    // 0x173c80: 0xffb30218
    ctx->pc = 0x173c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 536), GPR_U64(ctx, 19));
    // 0x173c84: 0xffb10208
    ctx->pc = 0x173c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 520), GPR_U64(ctx, 17));
    // 0x173c88: 0x3a0202d
    ctx->pc = 0x173c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173c8c: 0xffb20210
    ctx->pc = 0x173c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 18));
    // 0x173c90: 0x982d
    ctx->pc = 0x173c90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173c94: 0xffbf0220
    ctx->pc = 0x173c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 31));
    // 0x173c98: 0x10400019
    ctx->pc = 0x173C98u;
    {
        const bool branch_taken_0x173c98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x173C9Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x173c98) {
            ctx->pc = 0x173D00u;
            goto label_173d00;
        }
    }
    ctx->pc = 0x173CA0u;
    // 0x173ca0: 0x26020040
    ctx->pc = 0x173ca0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 64));
label_173ca4:
    // 0x173ca4: 0x68650007
    ctx->pc = 0x173ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x173ca8: 0x6c650000
    ctx->pc = 0x173ca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x173cac: 0x6866000f
    ctx->pc = 0x173cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x173cb0: 0x6c660008
    ctx->pc = 0x173cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x173cb4: 0x68670017
    ctx->pc = 0x173cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x173cb8: 0x6c670010
    ctx->pc = 0x173cb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x173cbc: 0x6868001f
    ctx->pc = 0x173cbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x173cc0: 0x6c680018
    ctx->pc = 0x173cc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x173cc4: 0xb0850007
    ctx->pc = 0x173cc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x173cc8: 0xb4850000
    ctx->pc = 0x173cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x173ccc: 0xb086000f
    ctx->pc = 0x173cccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x173cd0: 0xb4860008
    ctx->pc = 0x173cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x173cd4: 0xb0870017
    ctx->pc = 0x173cd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x173cd8: 0xb4870010
    ctx->pc = 0x173cd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x173cdc: 0xb088001f
    ctx->pc = 0x173cdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x173ce0: 0xb4880018
    ctx->pc = 0x173ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x173ce4: 0x24630020
    ctx->pc = 0x173ce4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x173ce8: 0x0
    ctx->pc = 0x173ce8u;
    // NOP
    // 0x173cec: 0x0
    ctx->pc = 0x173cecu;
    // NOP
    // 0x173cf0: 0x1462ffec
    ctx->pc = 0x173CF0u;
    {
        const bool branch_taken_0x173cf0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x173CF4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
        if (branch_taken_0x173cf0) {
            ctx->pc = 0x173CA4u;
            goto label_173ca4;
        }
    }
    ctx->pc = 0x173CF8u;
    // 0x173cf8: 0x1000000f
    ctx->pc = 0x173CF8u;
    {
        const bool branch_taken_0x173cf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x173cf8) {
            ctx->pc = 0x173D38u;
            goto label_173d38;
        }
    }
    ctx->pc = 0x173D00u;
label_173d00:
    // 0x173d00: 0x26020040
    ctx->pc = 0x173d00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 64));
label_173d04:
    // 0x173d04: 0xdc650000
    ctx->pc = 0x173d04u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x173d08: 0xdc660008
    ctx->pc = 0x173d08u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x173d0c: 0xdc670010
    ctx->pc = 0x173d0cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x173d10: 0xdc680018
    ctx->pc = 0x173d10u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x173d14: 0xfc850000
    ctx->pc = 0x173d14u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x173d18: 0xfc860008
    ctx->pc = 0x173d18u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x173d1c: 0xfc870010
    ctx->pc = 0x173d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x173d20: 0xfc880018
    ctx->pc = 0x173d20u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x173d24: 0x24630020
    ctx->pc = 0x173d24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x173d28: 0x0
    ctx->pc = 0x173d28u;
    // NOP
    // 0x173d2c: 0x0
    ctx->pc = 0x173d2cu;
    // NOP
    // 0x173d30: 0x1462fff4
    ctx->pc = 0x173D30u;
    {
        const bool branch_taken_0x173d30 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x173D34u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
        if (branch_taken_0x173d30) {
            ctx->pc = 0x173D04u;
            goto label_173d04;
        }
    }
    ctx->pc = 0x173D38u;
label_173d38:
    // 0x173d38: 0x8c620000
    ctx->pc = 0x173d38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x173d3c: 0xac820000
    ctx->pc = 0x173d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x173d40: 0x8e1209c0
    ctx->pc = 0x173d40u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 2496)));
    // 0x173d44: 0x12400005
    ctx->pc = 0x173D44u;
    {
        const bool branch_taken_0x173d44 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x173d44) {
            ctx->pc = 0x173D5Cu;
            goto label_173d5c;
        }
    }
    ctx->pc = 0x173D4Cu;
    // 0x173d4c: 0x200202d
    ctx->pc = 0x173d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173d50: 0xc05cf8e
    ctx->pc = 0x173D50u;
    SET_GPR_U32(ctx, 31, 0x173D58u);
    ctx->pc = 0x173D54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x173E38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00173E38_0x173e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173D58u; }
    }
    if (ctx->pc != 0x173D58u) { return; }
    ctx->pc = 0x173D58u;
    // 0x173d58: 0x8fb30064
    ctx->pc = 0x173d58u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_173d5c:
    // 0x173d5c: 0xc05a3de
    ctx->pc = 0x173D5Cu;
    SET_GPR_U32(ctx, 31, 0x173D64u);
    ctx->pc = 0x173D60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 120));
    ctx->pc = 0x168F78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00168F78_0x168f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173D64u; }
    }
    if (ctx->pc != 0x173D64u) { return; }
    ctx->pc = 0x173D64u;
    // 0x173d64: 0xc059a78
    ctx->pc = 0x173D64u;
    SET_GPR_U32(ctx, 31, 0x173D6Cu);
    ctx->pc = 0x173D68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1669E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001669E0_0x1669e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173D6Cu; }
    }
    if (ctx->pc != 0x173D6Cu) { return; }
    ctx->pc = 0x173D6Cu;
    // 0x173d6c: 0xc05ce92
    ctx->pc = 0x173D6Cu;
    SET_GPR_U32(ctx, 31, 0x173D74u);
    ctx->pc = 0x173D70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x173A48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00173A48_0x173a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173D74u; }
    }
    if (ctx->pc != 0x173D74u) { return; }
    ctx->pc = 0x173D74u;
    // 0x173d74: 0x5440002a
    ctx->pc = 0x173D74u;
    {
        const bool branch_taken_0x173d74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x173d74) {
            ctx->pc = 0x173D78u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 512)));
            ctx->pc = 0x173E20u;
            goto label_173e20;
        }
    }
    ctx->pc = 0x173D7Cu;
    // 0x173d7c: 0x27b10070
    ctx->pc = 0x173d7cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 112));
    // 0x173d80: 0x26050b30
    ctx->pc = 0x173d80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 2864));
    // 0x173d84: 0x24060190
    ctx->pc = 0x173d84u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 400));
    // 0x173d88: 0xc055798
    ctx->pc = 0x173D88u;
    SET_GPR_U32(ctx, 31, 0x173D90u);
    ctx->pc = 0x173D8Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x155E60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00155E60_0x155e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173D90u; }
    }
    if (ctx->pc != 0x173D90u) { return; }
    ctx->pc = 0x173D90u;
    // 0x173d90: 0x282d
    ctx->pc = 0x173d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173d94: 0xc05cd6c
    ctx->pc = 0x173D94u;
    SET_GPR_U32(ctx, 31, 0x173D9Cu);
    ctx->pc = 0x173D98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1735B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001735B0_0x1735b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173D9Cu; }
    }
    if (ctx->pc != 0x173D9Cu) { return; }
    ctx->pc = 0x173D9Cu;
    // 0x173d9c: 0x40802d
    ctx->pc = 0x173d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173da0: 0x16000007
    ctx->pc = 0x173DA0u;
    {
        const bool branch_taken_0x173da0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x173DA4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 2464));
        if (branch_taken_0x173da0) {
            ctx->pc = 0x173DC0u;
            goto label_173dc0;
        }
    }
    ctx->pc = 0x173DA8u;
    // 0x173da8: 0x3c05ff00
    ctx->pc = 0x173da8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x173dac: 0x202d
    ctx->pc = 0x173dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173db0: 0xc05a704
    ctx->pc = 0x173DB0u;
    SET_GPR_U32(ctx, 31, 0x173DB8u);
    ctx->pc = 0x173DB4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 514));
    ctx->pc = 0x169C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169C10_0x169c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173DB8u; }
    }
    if (ctx->pc != 0x173DB8u) { return; }
    ctx->pc = 0x173DB8u;
    // 0x173db8: 0x10000019
    ctx->pc = 0x173DB8u;
    {
        const bool branch_taken_0x173db8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x173DBCu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 512)));
        if (branch_taken_0x173db8) {
            ctx->pc = 0x173E20u;
            goto label_173e20;
        }
    }
    ctx->pc = 0x173DC0u;
label_173dc0:
    // 0x173dc0: 0x220282d
    ctx->pc = 0x173dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173dc4: 0xc055798
    ctx->pc = 0x173DC4u;
    SET_GPR_U32(ctx, 31, 0x173DCCu);
    ctx->pc = 0x173DC8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 400));
    ctx->pc = 0x155E60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00155E60_0x155e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173DCCu; }
    }
    if (ctx->pc != 0x173DCCu) { return; }
    ctx->pc = 0x173DCCu;
    // 0x173dcc: 0x26040b30
    ctx->pc = 0x173dccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 2864));
    // 0x173dd0: 0x220282d
    ctx->pc = 0x173dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173dd4: 0xc055798
    ctx->pc = 0x173DD4u;
    SET_GPR_U32(ctx, 31, 0x173DDCu);
    ctx->pc = 0x173DD8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 400));
    ctx->pc = 0x155E60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00155E60_0x155e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173DDCu; }
    }
    if (ctx->pc != 0x173DDCu) { return; }
    ctx->pc = 0x173DDCu;
    // 0x173ddc: 0x1240000f
    ctx->pc = 0x173DDCu;
    {
        const bool branch_taken_0x173ddc = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x173DE0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x173ddc) {
            ctx->pc = 0x173E1Cu;
            goto label_173e1c;
        }
    }
    ctx->pc = 0x173DE4u;
    // 0x173de4: 0x200202d
    ctx->pc = 0x173de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173de8: 0xc05cf8e
    ctx->pc = 0x173DE8u;
    SET_GPR_U32(ctx, 31, 0x173DF0u);
    ctx->pc = 0x173DECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x173E38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00173E38_0x173e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173DF0u; }
    }
    if (ctx->pc != 0x173DF0u) { return; }
    ctx->pc = 0x173DF0u;
    // 0x173df0: 0x5440000b
    ctx->pc = 0x173DF0u;
    {
        const bool branch_taken_0x173df0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x173df0) {
            ctx->pc = 0x173DF4u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 512)));
            ctx->pc = 0x173E20u;
            goto label_173e20;
        }
    }
    ctx->pc = 0x173DF8u;
    // 0x173df8: 0x8fa60064
    ctx->pc = 0x173df8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x173dfc: 0x260282d
    ctx->pc = 0x173dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173e00: 0xc05cfaa
    ctx->pc = 0x173E00u;
    SET_GPR_U32(ctx, 31, 0x173E08u);
    ctx->pc = 0x173E04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x173EA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00173EA8_0x173ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173E08u; }
    }
    if (ctx->pc != 0x173E08u) { return; }
    ctx->pc = 0x173E08u;
    // 0x173e08: 0x54400005
    ctx->pc = 0x173E08u;
    {
        const bool branch_taken_0x173e08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x173e08) {
            ctx->pc = 0x173E0Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 512)));
            ctx->pc = 0x173E20u;
            goto label_173e20;
        }
    }
    ctx->pc = 0x173E10u;
    // 0x173e10: 0xc05cfca
    ctx->pc = 0x173E10u;
    SET_GPR_U32(ctx, 31, 0x173E18u);
    ctx->pc = 0x173E14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x173F28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00173F28_0x173f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173E18u; }
    }
    if (ctx->pc != 0x173E18u) { return; }
    ctx->pc = 0x173E18u;
    // 0x173e18: 0x102d
    ctx->pc = 0x173e18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173e1c:
    // 0x173e1c: 0xdfb00200
    ctx->pc = 0x173e1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 512)));
label_173e20:
    // 0x173e20: 0xdfb10208
    ctx->pc = 0x173e20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x173e24: 0xdfb20210
    ctx->pc = 0x173e24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x173e28: 0xdfb30218
    ctx->pc = 0x173e28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x173e2c: 0xdfbf0220
    ctx->pc = 0x173e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x173e30: 0x3e00008
    ctx->pc = 0x173E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173E34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 560));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173CA4u: goto label_173ca4;
            case 0x173D00u: goto label_173d00;
            case 0x173D04u: goto label_173d04;
            case 0x173D38u: goto label_173d38;
            case 0x173D5Cu: goto label_173d5c;
            case 0x173DC0u: goto label_173dc0;
            case 0x173E1Cu: goto label_173e1c;
            case 0x173E20u: goto label_173e20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173E38u;
}
