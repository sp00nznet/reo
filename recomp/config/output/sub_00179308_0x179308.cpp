#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00179308
// Address: 0x179308 - 0x1793f8
void sub_00179308_0x179308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x179308u;

    // 0x179308: 0x27bdffc0
    ctx->pc = 0x179308u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17930c: 0xffb00010
    ctx->pc = 0x17930cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x179310: 0x80802d
    ctx->pc = 0x179310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179314: 0xffb10018
    ctx->pc = 0x179314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x179318: 0xffb20020
    ctx->pc = 0x179318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17931c: 0xa0902d
    ctx->pc = 0x17931cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179320: 0xffb30028
    ctx->pc = 0x179320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x179324: 0x24130001
    ctx->pc = 0x179324u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    // 0x179328: 0xffbf0030
    ctx->pc = 0x179328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17932c: 0xae400000
    ctx->pc = 0x17932cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x179330: 0x8e020004
    ctx->pc = 0x179330u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x179334: 0xc05e4a2
    ctx->pc = 0x179334u;
    SET_GPR_U32(ctx, 31, 0x17933Cu);
    ctx->pc = 0x179338u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 32));
    ctx->pc = 0x179288u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00179288_0x179288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17933Cu; }
    }
    if (ctx->pc != 0x17933Cu) { return; }
    ctx->pc = 0x17933Cu;
    // 0x17933c: 0x54530004
    ctx->pc = 0x17933Cu;
    {
        const bool branch_taken_0x17933c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        if (branch_taken_0x17933c) {
            ctx->pc = 0x179340u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->pc = 0x179350u;
            goto label_179350;
        }
    }
    ctx->pc = 0x179344u;
    // 0x179344: 0x10000025
    ctx->pc = 0x179344u;
    {
        const bool branch_taken_0x179344 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x179348u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x179344) {
            ctx->pc = 0x1793DCu;
            goto label_1793dc;
        }
    }
    ctx->pc = 0x17934Cu;
    // 0x17934c: 0x0
    ctx->pc = 0x17934cu;
    // NOP
label_179350:
    // 0x179350: 0x2c420800
    ctx->pc = 0x179350u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2048));
    // 0x179354: 0x10400006
    ctx->pc = 0x179354u;
    {
        const bool branch_taken_0x179354 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x179358u;
        SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
        if (branch_taken_0x179354) {
            ctx->pc = 0x179370u;
            goto label_179370;
        }
    }
    ctx->pc = 0x17935Cu;
    // 0x17935c: 0x2403ffff
    ctx->pc = 0x17935cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x179360: 0x102d
    ctx->pc = 0x179360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179364: 0x1000001d
    ctx->pc = 0x179364u;
    {
        const bool branch_taken_0x179364 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x179368u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x179364) {
            ctx->pc = 0x1793DCu;
            goto label_1793dc;
        }
    }
    ctx->pc = 0x17936Cu;
    // 0x17936c: 0x0
    ctx->pc = 0x17936cu;
    // NOP
label_179370:
    // 0x179370: 0x220202d
    ctx->pc = 0x179370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179374: 0x24060018
    ctx->pc = 0x179374u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 24));
    // 0x179378: 0xc041e86
    ctx->pc = 0x179378u;
    SET_GPR_U32(ctx, 31, 0x179380u);
    ctx->pc = 0x17937Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 3560));
    ctx->pc = 0x107A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107A18_0x107a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179380u; }
    }
    if (ctx->pc != 0x179380u) { return; }
    ctx->pc = 0x179380u;
    // 0x179380: 0x200202d
    ctx->pc = 0x179380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179384: 0x3a0282d
    ctx->pc = 0x179384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179388: 0x10400005
    ctx->pc = 0x179388u;
    {
        const bool branch_taken_0x179388 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17938Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
        if (branch_taken_0x179388) {
            ctx->pc = 0x1793A0u;
            goto label_1793a0;
        }
    }
    ctx->pc = 0x179390u;
    // 0x179390: 0x2402ffff
    ctx->pc = 0x179390u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x179394: 0xae020000
    ctx->pc = 0x179394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x179398: 0x10000010
    ctx->pc = 0x179398u;
    {
        const bool branch_taken_0x179398 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17939Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x179398) {
            ctx->pc = 0x1793DCu;
            goto label_1793dc;
        }
    }
    ctx->pc = 0x1793A0u;
label_1793a0:
    // 0x1793a0: 0x24020002
    ctx->pc = 0x1793a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1793a4: 0xc05e5bc
    ctx->pc = 0x1793A4u;
    SET_GPR_U32(ctx, 31, 0x1793ACu);
    ctx->pc = 0x1793A8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1796F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001796F0_0x1796f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1793ACu; }
    }
    if (ctx->pc != 0x1793ACu) { return; }
    ctx->pc = 0x1793ACu;
    // 0x1793ac: 0x1040000b
    ctx->pc = 0x1793ACu;
    {
        const bool branch_taken_0x1793ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1793B0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1793ac) {
            ctx->pc = 0x1793DCu;
            goto label_1793dc;
        }
    }
    ctx->pc = 0x1793B4u;
    // 0x1793b4: 0x24020001
    ctx->pc = 0x1793b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1793b8: 0x8fa50004
    ctx->pc = 0x1793b8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1793bc: 0x32040
    ctx->pc = 0x1793bcu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1793c0: 0x832021
    ctx->pc = 0x1793c0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1793c4: 0x420c0
    ctx->pc = 0x1793c4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 3));
    // 0x1793c8: 0x832021
    ctx->pc = 0x1793c8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1793cc: 0x42080
    ctx->pc = 0x1793ccu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1793d0: 0x852021
    ctx->pc = 0x1793d0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1793d4: 0xae04000c
    ctx->pc = 0x1793d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x1793d8: 0xae530000
    ctx->pc = 0x1793d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
label_1793dc:
    // 0x1793dc: 0xdfb00010
    ctx->pc = 0x1793dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1793e0: 0xdfb10018
    ctx->pc = 0x1793e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1793e4: 0xdfb20020
    ctx->pc = 0x1793e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1793e8: 0xdfb30028
    ctx->pc = 0x1793e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1793ec: 0xdfbf0030
    ctx->pc = 0x1793ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1793f0: 0x3e00008
    ctx->pc = 0x1793F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1793F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x179350u: goto label_179350;
            case 0x179370u: goto label_179370;
            case 0x1793A0u: goto label_1793a0;
            case 0x1793DCu: goto label_1793dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1793F8u;
}
