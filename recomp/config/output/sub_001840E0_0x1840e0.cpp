#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001840E0
// Address: 0x1840e0 - 0x184360
void sub_001840E0_0x1840e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1840e0u;

    // 0x1840e0: 0x27bdfba0
    ctx->pc = 0x1840e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966176));
    // 0x1840e4: 0xffb20420
    ctx->pc = 0x1840e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 18));
    // 0x1840e8: 0x120902d
    ctx->pc = 0x1840e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1840ec: 0xffb30428
    ctx->pc = 0x1840ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1064), GPR_U64(ctx, 19));
    // 0x1840f0: 0x100982d
    ctx->pc = 0x1840f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1840f4: 0xffb40430
    ctx->pc = 0x1840f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 20));
    // 0x1840f8: 0xa02d
    ctx->pc = 0x1840f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1840fc: 0xffb50438
    ctx->pc = 0x1840fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1080), GPR_U64(ctx, 21));
    // 0x184100: 0x80a82d
    ctx->pc = 0x184100u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184104: 0xffb60440
    ctx->pc = 0x184104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 22));
    // 0x184108: 0xe0b02d
    ctx->pc = 0x184108u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18410c: 0xffb70448
    ctx->pc = 0x18410cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1096), GPR_U64(ctx, 23));
    // 0x184110: 0x24170001
    ctx->pc = 0x184110u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 1));
    // 0x184114: 0xffbe0450
    ctx->pc = 0x184114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 30));
    // 0x184118: 0xa0f02d
    ctx->pc = 0x184118u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18411c: 0xffb00410
    ctx->pc = 0x18411cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 16));
    // 0x184120: 0xffb10418
    ctx->pc = 0x184120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1048), GPR_U64(ctx, 17));
    // 0x184124: 0xffbf0458
    ctx->pc = 0x184124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1112), GPR_U64(ctx, 31));
    // 0x184128: 0xafa60404
    ctx->pc = 0x184128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1028), GPR_U32(ctx, 6));
    // 0x18412c: 0x10000068
    ctx->pc = 0x18412Cu;
    {
        const bool branch_taken_0x18412c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184130u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 0));
        if (branch_taken_0x18412c) {
            ctx->pc = 0x1842D0u;
            goto label_1842d0;
        }
    }
    ctx->pc = 0x184134u;
    // 0x184134: 0x0
    ctx->pc = 0x184134u;
    // NOP
label_184138:
    // 0x184138: 0x200202d
    ctx->pc = 0x184138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18413c: 0xc042b9e
    ctx->pc = 0x18413Cu;
    SET_GPR_U32(ctx, 31, 0x184144u);
    ctx->pc = 0x184140u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 6064));
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184144u; }
    }
    if (ctx->pc != 0x184144u) { return; }
    ctx->pc = 0x184144u;
    // 0x184144: 0x14400075
    ctx->pc = 0x184144u;
    {
        const bool branch_taken_0x184144 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x184148u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 576));
        if (branch_taken_0x184144) {
            ctx->pc = 0x18431Cu;
            goto label_18431c;
        }
    }
    ctx->pc = 0x18414Cu;
    // 0x18414c: 0xc042c56
    ctx->pc = 0x18414Cu;
    SET_GPR_U32(ctx, 31, 0x184154u);
    ctx->pc = 0x184150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184154u; }
    }
    if (ctx->pc != 0x184154u) { return; }
    ctx->pc = 0x184154u;
    // 0x184154: 0x2c430020
    ctx->pc = 0x184154u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), 32));
    // 0x184158: 0x3c028101
    ctx->pc = 0x184158u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x18415c: 0x10600074
    ctx->pc = 0x18415Cu;
    {
        const bool branch_taken_0x18415c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x184160u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 36866));
        if (branch_taken_0x18415c) {
            ctx->pc = 0x184330u;
            goto label_184330;
        }
    }
    ctx->pc = 0x184164u;
    // 0x184164: 0x3c060024
    ctx->pc = 0x184164u;
    SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
    // 0x184168: 0x200202d
    ctx->pc = 0x184168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18416c: 0xc042b9e
    ctx->pc = 0x18416Cu;
    SET_GPR_U32(ctx, 31, 0x184174u);
    ctx->pc = 0x184170u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 6072));
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184174u; }
    }
    if (ctx->pc != 0x184174u) { return; }
    ctx->pc = 0x184174u;
    // 0x184174: 0x14400069
    ctx->pc = 0x184174u;
    {
        const bool branch_taken_0x184174 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x184178u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x184174) {
            ctx->pc = 0x18431Cu;
            goto label_18431c;
        }
    }
    ctx->pc = 0x18417Cu;
label_18417c:
    // 0x18417c: 0x12400047
    ctx->pc = 0x18417Cu;
    {
        const bool branch_taken_0x18417c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x184180u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18417c) {
            ctx->pc = 0x18429Cu;
            goto label_18429c;
        }
    }
    ctx->pc = 0x184184u;
    // 0x184184: 0x96020000
    ctx->pc = 0x184184u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_184188:
    // 0x184188: 0x30428000
    ctx->pc = 0x184188u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
    // 0x18418c: 0x1040003a
    ctx->pc = 0x18418Cu;
    {
        const bool branch_taken_0x18418c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x184190u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 64));
        if (branch_taken_0x18418c) {
            ctx->pc = 0x184278u;
            goto label_184278;
        }
    }
    ctx->pc = 0x184194u;
    // 0x184194: 0xa200005f
    ctx->pc = 0x184194u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 95), (uint8_t)GPR_U32(ctx, 0));
    // 0x184198: 0xc042b9e
    ctx->pc = 0x184198u;
    SET_GPR_U32(ctx, 31, 0x1841A0u);
    ctx->pc = 0x18419Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1841A0u; }
    }
    if (ctx->pc != 0x1841A0u) { return; }
    ctx->pc = 0x1841A0u;
    // 0x1841a0: 0x14400036
    ctx->pc = 0x1841A0u;
    {
        const bool branch_taken_0x1841a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1841A4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 18)));
        if (branch_taken_0x1841a0) {
            ctx->pc = 0x18427Cu;
            goto label_18427c;
        }
    }
    ctx->pc = 0x1841A8u;
    // 0x1841a8: 0x13c0002e
    ctx->pc = 0x1841A8u;
    {
        const bool branch_taken_0x1841a8 = (GPR_U32(ctx, 30) == GPR_U32(ctx, 0));
        ctx->pc = 0x1841ACu;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 1028)));
        if (branch_taken_0x1841a8) {
            ctx->pc = 0x184264u;
            goto label_184264;
        }
    }
    ctx->pc = 0x1841B0u;
    // 0x1841b0: 0x3c0282d
    ctx->pc = 0x1841b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1841b4: 0x2051025
    ctx->pc = 0x1841b4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1841b8: 0x30420007
    ctx->pc = 0x1841b8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 7));
    // 0x1841bc: 0x1040001a
    ctx->pc = 0x1841BCu;
    {
        const bool branch_taken_0x1841bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1841C0u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1841bc) {
            ctx->pc = 0x184228u;
            goto label_184228;
        }
    }
    ctx->pc = 0x1841C4u;
    // 0x1841c4: 0x26020200
    ctx->pc = 0x1841c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 512));
label_1841c8:
    // 0x1841c8: 0x68670007
    ctx->pc = 0x1841c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1841cc: 0x6c670000
    ctx->pc = 0x1841ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1841d0: 0x6868000f
    ctx->pc = 0x1841d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1841d4: 0x6c680008
    ctx->pc = 0x1841d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1841d8: 0x68640017
    ctx->pc = 0x1841d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1841dc: 0x6c640010
    ctx->pc = 0x1841dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1841e0: 0x6866001f
    ctx->pc = 0x1841e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1841e4: 0x6c660018
    ctx->pc = 0x1841e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1841e8: 0xb0a70007
    ctx->pc = 0x1841e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1841ec: 0xb4a70000
    ctx->pc = 0x1841ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1841f0: 0xb0a8000f
    ctx->pc = 0x1841f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1841f4: 0xb4a80008
    ctx->pc = 0x1841f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1841f8: 0xb0a40017
    ctx->pc = 0x1841f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1841fc: 0xb4a40010
    ctx->pc = 0x1841fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184200: 0xb0a6001f
    ctx->pc = 0x184200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184204: 0xb4a60018
    ctx->pc = 0x184204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184208: 0x24630020
    ctx->pc = 0x184208u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x18420c: 0x0
    ctx->pc = 0x18420cu;
    // NOP
    // 0x184210: 0x0
    ctx->pc = 0x184210u;
    // NOP
    // 0x184214: 0x1462ffec
    ctx->pc = 0x184214u;
    {
        const bool branch_taken_0x184214 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x184218u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
        if (branch_taken_0x184214) {
            ctx->pc = 0x1841C8u;
            goto label_1841c8;
        }
    }
    ctx->pc = 0x18421Cu;
    // 0x18421c: 0x10000011
    ctx->pc = 0x18421Cu;
    {
        const bool branch_taken_0x18421c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184220u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 1028)));
        if (branch_taken_0x18421c) {
            ctx->pc = 0x184264u;
            goto label_184264;
        }
    }
    ctx->pc = 0x184224u;
    // 0x184224: 0x0
    ctx->pc = 0x184224u;
    // NOP
label_184228:
    // 0x184228: 0x26020200
    ctx->pc = 0x184228u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 512));
label_18422c:
    // 0x18422c: 0xdc670000
    ctx->pc = 0x18422cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x184230: 0xdc680008
    ctx->pc = 0x184230u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x184234: 0xdc640010
    ctx->pc = 0x184234u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x184238: 0xdc660018
    ctx->pc = 0x184238u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x18423c: 0xfca70000
    ctx->pc = 0x18423cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 7));
    // 0x184240: 0xfca80008
    ctx->pc = 0x184240u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 8));
    // 0x184244: 0xfca40010
    ctx->pc = 0x184244u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 4));
    // 0x184248: 0xfca60018
    ctx->pc = 0x184248u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 6));
    // 0x18424c: 0x24630020
    ctx->pc = 0x18424cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x184250: 0x0
    ctx->pc = 0x184250u;
    // NOP
    // 0x184254: 0x0
    ctx->pc = 0x184254u;
    // NOP
    // 0x184258: 0x1462fff4
    ctx->pc = 0x184258u;
    {
        const bool branch_taken_0x184258 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x18425Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
        if (branch_taken_0x184258) {
            ctx->pc = 0x18422Cu;
            goto label_18422c;
        }
    }
    ctx->pc = 0x184260u;
    // 0x184260: 0x8fa70404
    ctx->pc = 0x184260u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 1028)));
label_184264:
    // 0x184264: 0x54e00001
    ctx->pc = 0x184264u;
    {
        const bool branch_taken_0x184264 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        if (branch_taken_0x184264) {
            ctx->pc = 0x184268u;
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 20));
            ctx->pc = 0x18426Cu;
            goto label_18426c;
        }
    }
    ctx->pc = 0x18426Cu;
label_18426c:
    // 0x18426c: 0x10000030
    ctx->pc = 0x18426Cu;
    {
        const bool branch_taken_0x18426c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184270u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18426c) {
            ctx->pc = 0x184330u;
            goto label_184330;
        }
    }
    ctx->pc = 0x184274u;
    // 0x184274: 0x0
    ctx->pc = 0x184274u;
    // NOP
label_184278:
    // 0x184278: 0x12102a
    ctx->pc = 0x184278u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 18)));
label_18427c:
    // 0x18427c: 0x26310001
    ctx->pc = 0x18427cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x184280: 0x2429023
    ctx->pc = 0x184280u;
    SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x184284: 0x2a220002
    ctx->pc = 0x184284u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 2));
    // 0x184288: 0x26100200
    ctx->pc = 0x184288u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 512));
    // 0x18428c: 0x10400003
    ctx->pc = 0x18428Cu;
    {
        const bool branch_taken_0x18428c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x184290u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        if (branch_taken_0x18428c) {
            ctx->pc = 0x18429Cu;
            goto label_18429c;
        }
    }
    ctx->pc = 0x184294u;
    // 0x184294: 0x5640ffbc
    ctx->pc = 0x184294u;
    {
        const bool branch_taken_0x184294 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x184294) {
            ctx->pc = 0x184298u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x184188u;
            goto label_184188;
        }
    }
    ctx->pc = 0x18429Cu;
label_18429c:
    // 0x18429c: 0x260282d
    ctx->pc = 0x18429cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1842a0: 0x2a0202d
    ctx->pc = 0x1842a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1842a4: 0xc060b02
    ctx->pc = 0x1842A4u;
    SET_GPR_U32(ctx, 31, 0x1842ACu);
    ctx->pc = 0x1842A8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 1024));
    ctx->pc = 0x182C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182C08_0x182c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1842ACu; }
    }
    if (ctx->pc != 0x1842ACu) { return; }
    ctx->pc = 0x1842ACu;
    // 0x1842ac: 0x8fa30400
    ctx->pc = 0x1842acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x1842b0: 0x40982d
    ctx->pc = 0x1842b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1842b4: 0x1460001e
    ctx->pc = 0x1842B4u;
    {
        const bool branch_taken_0x1842b4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1842B8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1842b4) {
            ctx->pc = 0x184330u;
            goto label_184330;
        }
    }
    ctx->pc = 0x1842BCu;
    // 0x1842bc: 0x2402ffff
    ctx->pc = 0x1842bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1842c0: 0x12620019
    ctx->pc = 0x1842C0u;
    {
        const bool branch_taken_0x1842c0 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x1842C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
        if (branch_taken_0x1842c0) {
            ctx->pc = 0x184328u;
            goto label_184328;
        }
    }
    ctx->pc = 0x1842C8u;
    // 0x1842c8: 0x3442ffff
    ctx->pc = 0x1842c8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1842cc: 0x2629824
    ctx->pc = 0x1842ccu;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1842d0:
    // 0x1842d0: 0x2a0202d
    ctx->pc = 0x1842d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1842d4: 0x3a0282d
    ctx->pc = 0x1842d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1842d8: 0x260302d
    ctx->pc = 0x1842d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1842dc: 0xc061d1e
    ctx->pc = 0x1842DCu;
    SET_GPR_U32(ctx, 31, 0x1842E4u);
    ctx->pc = 0x1842E0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x187478u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187478_0x187478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1842E4u; }
    }
    if (ctx->pc != 0x1842E4u) { return; }
    ctx->pc = 0x1842E4u;
    // 0x1842e4: 0x14400004
    ctx->pc = 0x1842E4u;
    {
        const bool branch_taken_0x1842e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1842e4) {
            ctx->pc = 0x1842F8u;
            goto label_1842f8;
        }
    }
    ctx->pc = 0x1842ECu;
    // 0x1842ec: 0x3c028101
    ctx->pc = 0x1842ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x1842f0: 0x1000000f
    ctx->pc = 0x1842F0u;
    {
        const bool branch_taken_0x1842f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1842F4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 111));
        if (branch_taken_0x1842f0) {
            ctx->pc = 0x184330u;
            goto label_184330;
        }
    }
    ctx->pc = 0x1842F8u;
label_1842f8:
    // 0x1842f8: 0x12e0ffa0
    ctx->pc = 0x1842F8u;
    {
        const bool branch_taken_0x1842f8 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x1842FCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1842f8) {
            ctx->pc = 0x18417Cu;
            goto label_18417c;
        }
    }
    ctx->pc = 0x184300u;
    // 0x184300: 0x27b00040
    ctx->pc = 0x184300u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 64));
    // 0x184304: 0xb82d
    ctx->pc = 0x184304u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184308: 0xc042c56
    ctx->pc = 0x184308u;
    SET_GPR_U32(ctx, 31, 0x184310u);
    ctx->pc = 0x18430Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184310u; }
    }
    if (ctx->pc != 0x184310u) { return; }
    ctx->pc = 0x184310u;
    // 0x184310: 0x2c420020
    ctx->pc = 0x184310u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 32));
    // 0x184314: 0x5440ff88
    ctx->pc = 0x184314u;
    {
        const bool branch_taken_0x184314 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x184314) {
            ctx->pc = 0x184318u;
            SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
            ctx->pc = 0x184138u;
            goto label_184138;
        }
    }
    ctx->pc = 0x18431Cu;
label_18431c:
    // 0x18431c: 0x3c028101
    ctx->pc = 0x18431cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x184320: 0x10000003
    ctx->pc = 0x184320u;
    {
        const bool branch_taken_0x184320 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184324u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 36866));
        if (branch_taken_0x184320) {
            ctx->pc = 0x184330u;
            goto label_184330;
        }
    }
    ctx->pc = 0x184328u;
label_184328:
    // 0x184328: 0x3c028101
    ctx->pc = 0x184328u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x18432c: 0x34420002
    ctx->pc = 0x18432cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
label_184330:
    // 0x184330: 0xdfb00410
    ctx->pc = 0x184330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x184334: 0xdfb10418
    ctx->pc = 0x184334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1048)));
    // 0x184338: 0xdfb20420
    ctx->pc = 0x184338u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x18433c: 0xdfb30428
    ctx->pc = 0x18433cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1064)));
    // 0x184340: 0xdfb40430
    ctx->pc = 0x184340u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x184344: 0xdfb50438
    ctx->pc = 0x184344u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1080)));
    // 0x184348: 0xdfb60440
    ctx->pc = 0x184348u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x18434c: 0xdfb70448
    ctx->pc = 0x18434cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1096)));
    // 0x184350: 0xdfbe0450
    ctx->pc = 0x184350u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x184354: 0xdfbf0458
    ctx->pc = 0x184354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1112)));
    // 0x184358: 0x3e00008
    ctx->pc = 0x184358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18435Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 1120));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x184138u: goto label_184138;
            case 0x18417Cu: goto label_18417c;
            case 0x184188u: goto label_184188;
            case 0x1841C8u: goto label_1841c8;
            case 0x184228u: goto label_184228;
            case 0x18422Cu: goto label_18422c;
            case 0x184264u: goto label_184264;
            case 0x18426Cu: goto label_18426c;
            case 0x184278u: goto label_184278;
            case 0x18427Cu: goto label_18427c;
            case 0x18429Cu: goto label_18429c;
            case 0x1842D0u: goto label_1842d0;
            case 0x1842F8u: goto label_1842f8;
            case 0x18431Cu: goto label_18431c;
            case 0x184328u: goto label_184328;
            case 0x184330u: goto label_184330;
            default: break;
        }
        return;
    }
    ctx->pc = 0x184360u;
}
