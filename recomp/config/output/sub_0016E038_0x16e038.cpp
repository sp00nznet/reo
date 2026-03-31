#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016E038
// Address: 0x16e038 - 0x16e0e0
void sub_0016E038_0x16e038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16e038u;

    // 0x16e038: 0x27bdffb0
    ctx->pc = 0x16e038u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16e03c: 0xffb00030
    ctx->pc = 0x16e03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x16e040: 0xffb10038
    ctx->pc = 0x16e040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x16e044: 0x80882d
    ctx->pc = 0x16e044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e048: 0xffbf0040
    ctx->pc = 0x16e048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16e04c: 0x26300cdc
    ctx->pc = 0x16e04cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 3292));
    // 0x16e050: 0xa0202d
    ctx->pc = 0x16e050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e054: 0x8e020000
    ctx->pc = 0x16e054u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16e058: 0x1440001c
    ctx->pc = 0x16E058u;
    {
        const bool branch_taken_0x16e058 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16E05Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16e058) {
            ctx->pc = 0x16E0CCu;
            goto label_16e0cc;
        }
    }
    ctx->pc = 0x16E060u;
    // 0x16e060: 0xc05b87c
    ctx->pc = 0x16E060u;
    SET_GPR_U32(ctx, 31, 0x16E068u);
    ctx->pc = 0x16E1F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E1F0_0x16e1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E068u; }
    }
    if (ctx->pc != 0x16E068u) { return; }
    ctx->pc = 0x16E068u;
    // 0x16e068: 0x3a0202d
    ctx->pc = 0x16e068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e06c: 0x27a50020
    ctx->pc = 0x16e06cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x16e070: 0x27a60024
    ctx->pc = 0x16e070u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 36));
    // 0x16e074: 0xc05da70
    ctx->pc = 0x16E074u;
    SET_GPR_U32(ctx, 31, 0x16E07Cu);
    ctx->pc = 0x16E078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->pc = 0x1769C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001769C0_0x1769c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E07Cu; }
    }
    if (ctx->pc != 0x16E07Cu) { return; }
    ctx->pc = 0x16E07Cu;
    // 0x16e07c: 0x24020001
    ctx->pc = 0x16e07cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e080: 0x8fa30020
    ctx->pc = 0x16e080u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16e084: 0x8fa40024
    ctx->pc = 0x16e084u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x16e088: 0x6ba50007
    ctx->pc = 0x16e088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16e08c: 0x6fa50000
    ctx->pc = 0x16e08cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16e090: 0x6ba6000f
    ctx->pc = 0x16e090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16e094: 0x6fa60008
    ctx->pc = 0x16e094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16e098: 0x6ba70017
    ctx->pc = 0x16e098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16e09c: 0x6fa70010
    ctx->pc = 0x16e09cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16e0a0: 0x8fa80018
    ctx->pc = 0x16e0a0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16e0a4: 0xb2250ce7
    ctx->pc = 0x16e0a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3303); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16e0a8: 0xb6250ce0
    ctx->pc = 0x16e0a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3296); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16e0ac: 0xb2260cef
    ctx->pc = 0x16e0acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3311); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16e0b0: 0xb6260ce8
    ctx->pc = 0x16e0b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3304); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16e0b4: 0xb2270cf7
    ctx->pc = 0x16e0b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3319); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16e0b8: 0xb6270cf0
    ctx->pc = 0x16e0b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3312); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16e0bc: 0xae280cf8
    ctx->pc = 0x16e0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3320), GPR_U32(ctx, 8));
    // 0x16e0c0: 0xae020000
    ctx->pc = 0x16e0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x16e0c4: 0xae030020
    ctx->pc = 0x16e0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x16e0c8: 0xae040024
    ctx->pc = 0x16e0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 4));
label_16e0cc:
    // 0x16e0cc: 0xdfb00030
    ctx->pc = 0x16e0ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16e0d0: 0xdfb10038
    ctx->pc = 0x16e0d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16e0d4: 0xdfbf0040
    ctx->pc = 0x16e0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16e0d8: 0x3e00008
    ctx->pc = 0x16E0D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E0DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E0CCu: goto label_16e0cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16E0E0u;
}
