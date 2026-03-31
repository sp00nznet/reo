#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00137468
// Address: 0x137468 - 0x137558
void sub_00137468_0x137468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x137468u;

    // 0x137468: 0x27bdffc0
    ctx->pc = 0x137468u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13746c: 0xffb10008
    ctx->pc = 0x13746cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x137470: 0x80882d
    ctx->pc = 0x137470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137474: 0x24041200
    ctx->pc = 0x137474u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4608));
    // 0x137478: 0xffb00000
    ctx->pc = 0x137478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13747c: 0xffb20010
    ctx->pc = 0x13747cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x137480: 0x100902d
    ctx->pc = 0x137480u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137484: 0xffb30018
    ctx->pc = 0x137484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x137488: 0xa0982d
    ctx->pc = 0x137488u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13748c: 0xffb40020
    ctx->pc = 0x13748cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x137490: 0xa02d
    ctx->pc = 0x137490u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137494: 0xffb50028
    ctx->pc = 0x137494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x137498: 0xc0a82d
    ctx->pc = 0x137498u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13749c: 0xffb60030
    ctx->pc = 0x13749cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1374a0: 0xffbf0038
    ctx->pc = 0x1374a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1374a4: 0xc04e082
    ctx->pc = 0x1374A4u;
    SET_GPR_U32(ctx, 31, 0x1374ACu);
    ctx->pc = 0x1374A8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1374ACu; }
    }
    if (ctx->pc != 0x1374ACu) { return; }
    ctx->pc = 0x1374ACu;
    // 0x1374ac: 0xc04035e
    ctx->pc = 0x1374ACu;
    SET_GPR_U32(ctx, 31, 0x1374B4u);
    ctx->pc = 0x1374B0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x100D78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00100D78_0x100d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1374B4u; }
    }
    if (ctx->pc != 0x1374B4u) { return; }
    ctx->pc = 0x1374B4u;
    // 0x1374b4: 0x24041201
    ctx->pc = 0x1374b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4609));
    // 0x1374b8: 0xc04e082
    ctx->pc = 0x1374B8u;
    SET_GPR_U32(ctx, 31, 0x1374C0u);
    ctx->pc = 0x1374BCu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1374C0u; }
    }
    if (ctx->pc != 0x1374C0u) { return; }
    ctx->pc = 0x1374C0u;
    // 0x1374c0: 0x24030001
    ctx->pc = 0x1374c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1374c4: 0x12030019
    ctx->pc = 0x1374C4u;
    {
        const bool branch_taken_0x1374c4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        ctx->pc = 0x1374C8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1374c4) {
            ctx->pc = 0x13752Cu;
            goto label_13752c;
        }
    }
    ctx->pc = 0x1374CCu;
    // 0x1374cc: 0xc0505c0
    ctx->pc = 0x1374CCu;
    SET_GPR_U32(ctx, 31, 0x1374D4u);
    ctx->pc = 0x141700u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00141700_0x141700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1374D4u; }
    }
    if (ctx->pc != 0x1374D4u) { return; }
    ctx->pc = 0x1374D4u;
    // 0x1374d4: 0x24040001
    ctx->pc = 0x1374d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1374d8: 0x82230002
    ctx->pc = 0x1374d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1374dc: 0x10600005
    ctx->pc = 0x1374DCu;
    {
        const bool branch_taken_0x1374dc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1374E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1374dc) {
            ctx->pc = 0x1374F4u;
            goto label_1374f4;
        }
    }
    ctx->pc = 0x1374E4u;
    // 0x1374e4: 0x10620003
    ctx->pc = 0x1374E4u;
    {
        const bool branch_taken_0x1374e4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1374E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
        if (branch_taken_0x1374e4) {
            ctx->pc = 0x1374F4u;
            goto label_1374f4;
        }
    }
    ctx->pc = 0x1374ECu;
    // 0x1374ec: 0x1462000c
    ctx->pc = 0x1374ECu;
    {
        const bool branch_taken_0x1374ec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1374ec) {
            ctx->pc = 0x137520u;
            goto label_137520;
        }
    }
    ctx->pc = 0x1374F4u;
label_1374f4:
    // 0x1374f4: 0xa2240002
    ctx->pc = 0x1374f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1374f8: 0x24140001
    ctx->pc = 0x1374f8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1374fc: 0xa2240001
    ctx->pc = 0x1374fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x137500: 0xae330008
    ctx->pc = 0x137500u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
    // 0x137504: 0x8a420003
    ctx->pc = 0x137504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 2, (GPR_U32(ctx, 2) & ~mask) | ((aligned_word << shift) & mask)); }
    // 0x137508: 0x9a420000
    ctx->pc = 0x137508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 2, (GPR_U32(ctx, 2) & ~mask) | ((aligned_word >> shift) & mask)); }
    // 0x13750c: 0xaa220017
    ctx->pc = 0x13750cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 2) >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x137510: 0xba220014
    ctx->pc = 0x137510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 20); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 2) << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x137514: 0xae35000c
    ctx->pc = 0x137514u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 21));
    // 0x137518: 0xae360010
    ctx->pc = 0x137518u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 22));
    // 0x13751c: 0xae200004
    ctx->pc = 0x13751cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_137520:
    // 0x137520: 0xc0505de
    ctx->pc = 0x137520u;
    SET_GPR_U32(ctx, 31, 0x137528u);
    ctx->pc = 0x141778u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00141778_0x141778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137528u; }
    }
    if (ctx->pc != 0x137528u) { return; }
    ctx->pc = 0x137528u;
    // 0x137528: 0x280102d
    ctx->pc = 0x137528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13752c:
    // 0x13752c: 0xdfb00000
    ctx->pc = 0x13752cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137530: 0xdfb10008
    ctx->pc = 0x137530u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x137534: 0xdfb20010
    ctx->pc = 0x137534u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137538: 0xdfb30018
    ctx->pc = 0x137538u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13753c: 0xdfb40020
    ctx->pc = 0x13753cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137540: 0xdfb50028
    ctx->pc = 0x137540u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x137544: 0xdfb60030
    ctx->pc = 0x137544u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137548: 0xdfbf0038
    ctx->pc = 0x137548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13754c: 0x3e00008
    ctx->pc = 0x13754Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137550u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1374F4u: goto label_1374f4;
            case 0x137520u: goto label_137520;
            case 0x13752Cu: goto label_13752c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x137554u;
    // 0x137554: 0x0
    ctx->pc = 0x137554u;
    // NOP
}
