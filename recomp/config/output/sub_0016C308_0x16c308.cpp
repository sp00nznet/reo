#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016C308
// Address: 0x16c308 - 0x16c3c8
void sub_0016C308_0x16c308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16c308u;

    // 0x16c308: 0x3e00008
    ctx->pc = 0x16C308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C30Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16C348u: goto label_16c348;
            case 0x16C388u: goto label_16c388;
            case 0x16C3B0u: goto label_16c3b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16C310u;
    // 0x16c310: 0x27bdfff0
    ctx->pc = 0x16c310u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c314: 0xffbf0000
    ctx->pc = 0x16c314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16c318: 0xc056d1e
    ctx->pc = 0x16C318u;
    SET_GPR_U32(ctx, 31, 0x16C320u);
    ctx->pc = 0x15B478u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B478_0x15b478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C320u; }
    }
    if (ctx->pc != 0x16C320u) { return; }
    ctx->pc = 0x16C320u;
    // 0x16c320: 0xdfbf0000
    ctx->pc = 0x16c320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c324: 0x102d
    ctx->pc = 0x16c324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c328: 0x3e00008
    ctx->pc = 0x16C328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C32Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16C348u: goto label_16c348;
            case 0x16C388u: goto label_16c388;
            case 0x16C3B0u: goto label_16c3b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16C330u;
    // 0x16c330: 0x27bdfff0
    ctx->pc = 0x16c330u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c334: 0xffbf0000
    ctx->pc = 0x16c334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16c338: 0xdfbf0000
    ctx->pc = 0x16c338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c33c: 0x805b0d2
    ctx->pc = 0x16C33Cu;
    ctx->pc = 0x16C340u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x16C348u;
    goto label_16c348;
    ctx->pc = 0x16C344u;
    // 0x16c344: 0x0
    ctx->pc = 0x16c344u;
    // NOP
label_16c348:
    // 0x16c348: 0x27bdffe0
    ctx->pc = 0x16c348u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16c34c: 0x24050005
    ctx->pc = 0x16c34cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x16c350: 0xffb10008
    ctx->pc = 0x16c350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16c354: 0xffb00000
    ctx->pc = 0x16c354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16c358: 0xffbf0010
    ctx->pc = 0x16c358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16c35c: 0xc05d58a
    ctx->pc = 0x16C35Cu;
    SET_GPR_U32(ctx, 31, 0x16C364u);
    ctx->pc = 0x16C360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C364u; }
    }
    if (ctx->pc != 0x16C364u) { return; }
    ctx->pc = 0x16C364u;
    // 0x16c364: 0x10400012
    ctx->pc = 0x16C364u;
    {
        const bool branch_taken_0x16c364 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16C368u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16c364) {
            ctx->pc = 0x16C3B0u;
            goto label_16c3b0;
        }
    }
    ctx->pc = 0x16C36Cu;
    // 0x16c36c: 0xc05b10e
    ctx->pc = 0x16C36Cu;
    SET_GPR_U32(ctx, 31, 0x16C374u);
    ctx->pc = 0x16C438u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016C438_0x16c438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C374u; }
    }
    if (ctx->pc != 0x16C374u) { return; }
    ctx->pc = 0x16C374u;
    // 0x16c374: 0x24030001
    ctx->pc = 0x16c374u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c378: 0x14430003
    ctx->pc = 0x16C378u;
    {
        const bool branch_taken_0x16c378 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x16C37Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16c378) {
            ctx->pc = 0x16C388u;
            goto label_16c388;
        }
    }
    ctx->pc = 0x16C380u;
    // 0x16c380: 0x1000000b
    ctx->pc = 0x16C380u;
    {
        const bool branch_taken_0x16c380 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16C384u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16c380) {
            ctx->pc = 0x16C3B0u;
            goto label_16c3b0;
        }
    }
    ctx->pc = 0x16C388u;
label_16c388:
    // 0x16c388: 0xc05b0f2
    ctx->pc = 0x16C388u;
    SET_GPR_U32(ctx, 31, 0x16C390u);
    ctx->pc = 0x16C3C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016C3C8_0x16c3c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C390u; }
    }
    if (ctx->pc != 0x16C390u) { return; }
    ctx->pc = 0x16C390u;
    // 0x16c390: 0xc05b1e0
    ctx->pc = 0x16C390u;
    SET_GPR_U32(ctx, 31, 0x16C398u);
    ctx->pc = 0x16C394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16C780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016C780_0x16c780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C398u; }
    }
    if (ctx->pc != 0x16C398u) { return; }
    ctx->pc = 0x16C398u;
    // 0x16c398: 0x220202d
    ctx->pc = 0x16c398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c39c: 0xc05b114
    ctx->pc = 0x16C39Cu;
    SET_GPR_U32(ctx, 31, 0x16C3A4u);
    ctx->pc = 0x16C3A0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16C450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016C450_0x16c450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C3A4u; }
    }
    if (ctx->pc != 0x16C3A4u) { return; }
    ctx->pc = 0x16C3A4u;
    // 0x16c3a4: 0xc05b1ae
    ctx->pc = 0x16C3A4u;
    SET_GPR_U32(ctx, 31, 0x16C3ACu);
    ctx->pc = 0x16C3A8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16C6B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016C6B8_0x16c6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C3ACu; }
    }
    if (ctx->pc != 0x16C3ACu) { return; }
    ctx->pc = 0x16C3ACu;
    // 0x16c3ac: 0x200102d
    ctx->pc = 0x16c3acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c3b0:
    // 0x16c3b0: 0xdfb00000
    ctx->pc = 0x16c3b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c3b4: 0xdfb10008
    ctx->pc = 0x16c3b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c3b8: 0xdfbf0010
    ctx->pc = 0x16c3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c3bc: 0x3e00008
    ctx->pc = 0x16C3BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C3C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16C348u: goto label_16c348;
            case 0x16C388u: goto label_16c388;
            case 0x16C3B0u: goto label_16c3b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16C3C4u;
    // 0x16c3c4: 0x0
    ctx->pc = 0x16c3c4u;
    // NOP
}
