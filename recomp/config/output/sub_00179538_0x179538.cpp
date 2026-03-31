#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00179538
// Address: 0x179538 - 0x179660
void sub_00179538_0x179538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x179538u;

    // 0x179538: 0x24830180
    ctx->pc = 0x179538u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 384));
    // 0x17953c: 0x382d
    ctx->pc = 0x17953cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179540: 0x90620018
    ctx->pc = 0x179540u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x179544: 0x10000008
    ctx->pc = 0x179544u;
    {
        const bool branch_taken_0x179544 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x179548u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x179544) {
            ctx->pc = 0x179568u;
            goto label_179568;
        }
    }
    ctx->pc = 0x17954Cu;
    // 0x17954c: 0x0
    ctx->pc = 0x17954cu;
    // NOP
label_179550:
    // 0x179550: 0x61180
    ctx->pc = 0x179550u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 6));
    // 0x179554: 0x28c3001a
    ctx->pc = 0x179554u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 26));
    // 0x179558: 0x10600007
    ctx->pc = 0x179558u;
    {
        const bool branch_taken_0x179558 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x17955Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        if (branch_taken_0x179558) {
            ctx->pc = 0x179578u;
            goto label_179578;
        }
    }
    ctx->pc = 0x179560u;
    // 0x179560: 0x24430180
    ctx->pc = 0x179560u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 384));
    // 0x179564: 0x90620018
    ctx->pc = 0x179564u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
label_179568:
    // 0x179568: 0x0
    ctx->pc = 0x179568u;
    // NOP
    // 0x17956c: 0x5445fff8
    ctx->pc = 0x17956Cu;
    {
        const bool branch_taken_0x17956c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x17956c) {
            ctx->pc = 0x179570u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x179550u;
            goto label_179550;
        }
    }
    ctx->pc = 0x179574u;
    // 0x179574: 0x60382d
    ctx->pc = 0x179574u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_179578:
    // 0x179578: 0x3e00008
    ctx->pc = 0x179578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17957Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x179550u: goto label_179550;
            case 0x179568u: goto label_179568;
            case 0x179578u: goto label_179578;
            case 0x1795DCu: goto label_1795dc;
            case 0x179648u: goto label_179648;
            default: break;
        }
        return;
    }
    ctx->pc = 0x179580u;
    // 0x179580: 0x27bdffe0
    ctx->pc = 0x179580u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x179584: 0xffb00000
    ctx->pc = 0x179584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x179588: 0xa0802d
    ctx->pc = 0x179588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17958c: 0xffb10008
    ctx->pc = 0x17958cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x179590: 0xffbf0010
    ctx->pc = 0x179590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x179594: 0x8c820004
    ctx->pc = 0x179594u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x179598: 0xc05e4a6
    ctx->pc = 0x179598u;
    SET_GPR_U32(ctx, 31, 0x1795A0u);
    ctx->pc = 0x17959Cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x179298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00179298_0x179298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1795A0u; }
    }
    if (ctx->pc != 0x1795A0u) { return; }
    ctx->pc = 0x1795A0u;
    // 0x1795a0: 0x200202d
    ctx->pc = 0x1795a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1795a4: 0x282d
    ctx->pc = 0x1795a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1795a8: 0x1040000c
    ctx->pc = 0x1795A8u;
    {
        const bool branch_taken_0x1795a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1795ACu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 13));
        if (branch_taken_0x1795a8) {
            ctx->pc = 0x1795DCu;
            goto label_1795dc;
        }
    }
    ctx->pc = 0x1795B0u;
    // 0x1795b0: 0xc041f1a
    ctx->pc = 0x1795B0u;
    SET_GPR_U32(ctx, 31, 0x1795B8u);
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1795B8u; }
    }
    if (ctx->pc != 0x1795B8u) { return; }
    ctx->pc = 0x1795B8u;
    // 0x1795b8: 0x24020001
    ctx->pc = 0x1795b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1795bc: 0x6a230007
    ctx->pc = 0x1795bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1795c0: 0x6e230000
    ctx->pc = 0x1795c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1795c4: 0x8a24000b
    ctx->pc = 0x1795c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 4, (GPR_U32(ctx, 4) & ~mask) | ((aligned_word << shift) & mask)); }
    // 0x1795c8: 0x9a240008
    ctx->pc = 0x1795c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 4, (GPR_U32(ctx, 4) & ~mask) | ((aligned_word >> shift) & mask)); }
    // 0x1795cc: 0xb2030007
    ctx->pc = 0x1795ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1795d0: 0xb6030000
    ctx->pc = 0x1795d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1795d4: 0xaa04000b
    ctx->pc = 0x1795d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 4) >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1795d8: 0xba040008
    ctx->pc = 0x1795d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 4) << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1795dc:
    // 0x1795dc: 0xdfb00000
    ctx->pc = 0x1795dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1795e0: 0xdfb10008
    ctx->pc = 0x1795e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1795e4: 0xdfbf0010
    ctx->pc = 0x1795e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1795e8: 0x3e00008
    ctx->pc = 0x1795E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1795ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x179550u: goto label_179550;
            case 0x179568u: goto label_179568;
            case 0x179578u: goto label_179578;
            case 0x1795DCu: goto label_1795dc;
            case 0x179648u: goto label_179648;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1795F0u;
    // 0x1795f0: 0x27bdffe0
    ctx->pc = 0x1795f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1795f4: 0xffb00000
    ctx->pc = 0x1795f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1795f8: 0xa0802d
    ctx->pc = 0x1795f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1795fc: 0xffb10008
    ctx->pc = 0x1795fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x179600: 0xffbf0010
    ctx->pc = 0x179600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x179604: 0xc05e4a6
    ctx->pc = 0x179604u;
    SET_GPR_U32(ctx, 31, 0x17960Cu);
    ctx->pc = 0x179608u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x179298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00179298_0x179298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17960Cu; }
    }
    if (ctx->pc != 0x17960Cu) { return; }
    ctx->pc = 0x17960Cu;
    // 0x17960c: 0x200202d
    ctx->pc = 0x17960cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179610: 0x282d
    ctx->pc = 0x179610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179614: 0x1040000c
    ctx->pc = 0x179614u;
    {
        const bool branch_taken_0x179614 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x179618u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 13));
        if (branch_taken_0x179614) {
            ctx->pc = 0x179648u;
            goto label_179648;
        }
    }
    ctx->pc = 0x17961Cu;
    // 0x17961c: 0xc041f1a
    ctx->pc = 0x17961Cu;
    SET_GPR_U32(ctx, 31, 0x179624u);
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179624u; }
    }
    if (ctx->pc != 0x179624u) { return; }
    ctx->pc = 0x179624u;
    // 0x179624: 0x24020001
    ctx->pc = 0x179624u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x179628: 0x6a230053
    ctx->pc = 0x179628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 83); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x17962c: 0x6e23004c
    ctx->pc = 0x17962cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 76); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x179630: 0x8a240057
    ctx->pc = 0x179630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 87); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 4, (GPR_U32(ctx, 4) & ~mask) | ((aligned_word << shift) & mask)); }
    // 0x179634: 0x9a240054
    ctx->pc = 0x179634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 84); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 4, (GPR_U32(ctx, 4) & ~mask) | ((aligned_word >> shift) & mask)); }
    // 0x179638: 0xb2030007
    ctx->pc = 0x179638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17963c: 0xb6030000
    ctx->pc = 0x17963cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x179640: 0xaa04000b
    ctx->pc = 0x179640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 4) >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x179644: 0xba040008
    ctx->pc = 0x179644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 4) << shift) & mask); WRITE32(aligned_addr, new_data); }
label_179648:
    // 0x179648: 0xdfb00000
    ctx->pc = 0x179648u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17964c: 0xdfb10008
    ctx->pc = 0x17964cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x179650: 0xdfbf0010
    ctx->pc = 0x179650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179654: 0x3e00008
    ctx->pc = 0x179654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179658u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x179550u: goto label_179550;
            case 0x179568u: goto label_179568;
            case 0x179578u: goto label_179578;
            case 0x1795DCu: goto label_1795dc;
            case 0x179648u: goto label_179648;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17965Cu;
    // 0x17965c: 0x0
    ctx->pc = 0x17965cu;
    // NOP
}
