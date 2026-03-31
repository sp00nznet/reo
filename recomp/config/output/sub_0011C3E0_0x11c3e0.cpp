#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011C3E0
// Address: 0x11c3e0 - 0x11c530
void sub_0011C3E0_0x11c3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11c3e0u;

    // 0x11c3e0: 0x27bdffd0
    ctx->pc = 0x11c3e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11c3e4: 0xffb00010
    ctx->pc = 0x11c3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11c3e8: 0xffbf0020
    ctx->pc = 0x11c3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11c3ec: 0xc046f5e
    ctx->pc = 0x11C3ECu;
    SET_GPR_U32(ctx, 31, 0x11C3F4u);
    ctx->pc = 0x11C3F0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11BD78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011BD78_0x11bd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C3F4u; }
    }
    if (ctx->pc != 0x11C3F4u) { return; }
    ctx->pc = 0x11C3F4u;
    // 0x11c3f4: 0x440001e
    ctx->pc = 0x11C3F4u;
    {
        const bool branch_taken_0x11c3f4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11C3F8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
        if (branch_taken_0x11c3f4) {
            ctx->pc = 0x11C470u;
            goto label_11c470;
        }
    }
    ctx->pc = 0x11C3FCu;
    // 0x11c3fc: 0xc046f9e
    ctx->pc = 0x11C3FCu;
    SET_GPR_U32(ctx, 31, 0x11C404u);
    ctx->pc = 0x11BE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011BE78_0x11be78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C404u; }
    }
    if (ctx->pc != 0x11C404u) { return; }
    ctx->pc = 0x11C404u;
    // 0x11c404: 0x50400004
    ctx->pc = 0x11C404u;
    {
        const bool branch_taken_0x11c404 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x11c404) {
            ctx->pc = 0x11C408u;
            SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
            ctx->pc = 0x11C418u;
            goto label_11c418;
        }
    }
    ctx->pc = 0x11C40Cu;
    // 0x11c40c: 0x3c02fffe
    ctx->pc = 0x11c40cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65534 << 16));
    // 0x11c410: 0x10000017
    ctx->pc = 0x11C410u;
    {
        const bool branch_taken_0x11c410 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C414u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65532));
        if (branch_taken_0x11c410) {
            ctx->pc = 0x11C470u;
            goto label_11c470;
        }
    }
    ctx->pc = 0x11C418u;
label_11c418:
    // 0x11c418: 0x200282d
    ctx->pc = 0x11c418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c41c: 0x2450e408
    ctx->pc = 0x11c41cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294960136));
    // 0x11c420: 0x240600fc
    ctx->pc = 0x11c420u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 252));
    // 0x11c424: 0xc042d7e
    ctx->pc = 0x11C424u;
    SET_GPR_U32(ctx, 31, 0x11C42Cu);
    ctx->pc = 0x11C428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B5F8_0x10b5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C42Cu; }
    }
    if (ctx->pc != 0x11C42Cu) { return; }
    ctx->pc = 0x11C42Cu;
    // 0x11c42c: 0x2603fff8
    ctx->pc = 0x11c42cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x11c430: 0x3c040026
    ctx->pc = 0x11c430u;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x11c434: 0x60382d
    ctx->pc = 0x11c434u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c438: 0xa0600103
    ctx->pc = 0x11c438u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 259), (uint8_t)GPR_U32(ctx, 0));
    // 0x11c43c: 0x2484e600
    ctx->pc = 0x11c43cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294960640));
    // 0x11c440: 0x24050009
    ctx->pc = 0x11c440u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
    // 0x11c444: 0xafa00000
    ctx->pc = 0x11c444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11c448: 0x302d
    ctx->pc = 0x11c448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c44c: 0x24080200
    ctx->pc = 0x11c44cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 512));
    // 0x11c450: 0xe0482d
    ctx->pc = 0x11c450u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c454: 0x240a0004
    ctx->pc = 0x11c454u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4));
    // 0x11c458: 0xc045e7a
    ctx->pc = 0x11C458u;
    SET_GPR_U32(ctx, 31, 0x11C460u);
    ctx->pc = 0x11C45Cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C460u; }
    }
    if (ctx->pc != 0x11C460u) { return; }
    ctx->pc = 0x11C460u;
    // 0x11c460: 0x4430003
    ctx->pc = 0x11C460u;
    {
        const bool branch_taken_0x11c460 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11c460) {
            ctx->pc = 0x11C464u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
            ctx->pc = 0x11C470u;
            goto label_11c470;
        }
    }
    ctx->pc = 0x11C468u;
    // 0x11c468: 0x3c02fffe
    ctx->pc = 0x11c468u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65534 << 16));
    // 0x11c46c: 0x3442ffff
    ctx->pc = 0x11c46cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_11c470:
    // 0x11c470: 0xdfbf0020
    ctx->pc = 0x11c470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c474: 0xdfb00010
    ctx->pc = 0x11c474u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c478: 0x3e00008
    ctx->pc = 0x11C478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C47Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C418u: goto label_11c418;
            case 0x11C470u: goto label_11c470;
            case 0x11C4BCu: goto label_11c4bc;
            case 0x11C4FCu: goto label_11c4fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11C480u;
    // 0x11c480: 0x27bdffc0
    ctx->pc = 0x11c480u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11c484: 0xffb10020
    ctx->pc = 0x11c484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11c488: 0xffbf0030
    ctx->pc = 0x11c488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11c48c: 0x80882d
    ctx->pc = 0x11c48cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c490: 0xc046f5e
    ctx->pc = 0x11C490u;
    SET_GPR_U32(ctx, 31, 0x11C498u);
    ctx->pc = 0x11C494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->pc = 0x11BD78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011BD78_0x11bd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C498u; }
    }
    if (ctx->pc != 0x11C498u) { return; }
    ctx->pc = 0x11C498u;
    // 0x11c498: 0x4400018
    ctx->pc = 0x11C498u;
    {
        const bool branch_taken_0x11c498 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11C49Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
        if (branch_taken_0x11c498) {
            ctx->pc = 0x11C4FCu;
            goto label_11c4fc;
        }
    }
    ctx->pc = 0x11C4A0u;
    // 0x11c4a0: 0xc046f9e
    ctx->pc = 0x11C4A0u;
    SET_GPR_U32(ctx, 31, 0x11C4A8u);
    ctx->pc = 0x11BE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011BE78_0x11be78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C4A8u; }
    }
    if (ctx->pc != 0x11C4A8u) { return; }
    ctx->pc = 0x11C4A8u;
    // 0x11c4a8: 0x10400004
    ctx->pc = 0x11C4A8u;
    {
        const bool branch_taken_0x11c4a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C4ACu;
        SET_GPR_U32(ctx, 16, ((uint32_t)38 << 16));
        if (branch_taken_0x11c4a8) {
            ctx->pc = 0x11C4BCu;
            goto label_11c4bc;
        }
    }
    ctx->pc = 0x11C4B0u;
    // 0x11c4b0: 0x3c02fffe
    ctx->pc = 0x11c4b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65534 << 16));
    // 0x11c4b4: 0x10000011
    ctx->pc = 0x11C4B4u;
    {
        const bool branch_taken_0x11c4b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C4B8u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65532));
        if (branch_taken_0x11c4b4) {
            ctx->pc = 0x11C4FCu;
            goto label_11c4fc;
        }
    }
    ctx->pc = 0x11C4BCu;
label_11c4bc:
    // 0x11c4bc: 0x3c040026
    ctx->pc = 0x11c4bcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x11c4c0: 0x2607e400
    ctx->pc = 0x11c4c0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 4294960128));
    // 0x11c4c4: 0xae11e400
    ctx->pc = 0x11c4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294960128), GPR_U32(ctx, 17));
    // 0x11c4c8: 0x2484e600
    ctx->pc = 0x11c4c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294960640));
    // 0x11c4cc: 0xafa00000
    ctx->pc = 0x11c4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11c4d0: 0x2405000a
    ctx->pc = 0x11c4d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    // 0x11c4d4: 0x302d
    ctx->pc = 0x11c4d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c4d8: 0x24080004
    ctx->pc = 0x11c4d8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4));
    // 0x11c4dc: 0xe0482d
    ctx->pc = 0x11c4dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c4e0: 0x240a0004
    ctx->pc = 0x11c4e0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4));
    // 0x11c4e4: 0xc045e7a
    ctx->pc = 0x11C4E4u;
    SET_GPR_U32(ctx, 31, 0x11C4ECu);
    ctx->pc = 0x11C4E8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C4ECu; }
    }
    if (ctx->pc != 0x11C4ECu) { return; }
    ctx->pc = 0x11C4ECu;
    // 0x11c4ec: 0x4430003
    ctx->pc = 0x11C4ECu;
    {
        const bool branch_taken_0x11c4ec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11c4ec) {
            ctx->pc = 0x11C4F0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294960128)));
            ctx->pc = 0x11C4FCu;
            goto label_11c4fc;
        }
    }
    ctx->pc = 0x11C4F4u;
    // 0x11c4f4: 0x3c02fffe
    ctx->pc = 0x11c4f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65534 << 16));
    // 0x11c4f8: 0x3442ffff
    ctx->pc = 0x11c4f8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_11c4fc:
    // 0x11c4fc: 0xdfbf0030
    ctx->pc = 0x11c4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c500: 0xdfb10020
    ctx->pc = 0x11c500u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c504: 0xdfb00010
    ctx->pc = 0x11c504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c508: 0x3e00008
    ctx->pc = 0x11C508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C50Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C418u: goto label_11c418;
            case 0x11C470u: goto label_11c470;
            case 0x11C4BCu: goto label_11c4bc;
            case 0x11C4FCu: goto label_11c4fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11C510u;
    // 0x11c510: 0x27bdffe0
    ctx->pc = 0x11c510u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11c514: 0xffbf0010
    ctx->pc = 0x11c514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11c518: 0xc046fd0
    ctx->pc = 0x11C518u;
    SET_GPR_U32(ctx, 31, 0x11C520u);
    ctx->pc = 0x11C51Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11BF40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011BF40_0x11bf40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C520u; }
    }
    if (ctx->pc != 0x11C520u) { return; }
    ctx->pc = 0x11C520u;
    // 0x11c520: 0xdfbf0010
    ctx->pc = 0x11c520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c524: 0x3e00008
    ctx->pc = 0x11C524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C528u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C418u: goto label_11c418;
            case 0x11C470u: goto label_11c470;
            case 0x11C4BCu: goto label_11c4bc;
            case 0x11C4FCu: goto label_11c4fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11C52Cu;
    // 0x11c52c: 0x0
    ctx->pc = 0x11c52cu;
    // NOP
}
