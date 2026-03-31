#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17c420
// Address: 0x17c420 - 0x17c530
void entry_17c420_0x17c530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17c420u;

    // 0x17c420: 0x27bdff80
    ctx->pc = 0x17c420u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x17c424: 0x240a0040
    ctx->pc = 0x17c424u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 64));
    // 0x17c428: 0xffb00040
    ctx->pc = 0x17c428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x17c42c: 0xffb10048
    ctx->pc = 0x17c42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x17c430: 0xc0882d
    ctx->pc = 0x17c430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c434: 0xffb20050
    ctx->pc = 0x17c434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x17c438: 0x80902d
    ctx->pc = 0x17c438u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c43c: 0xffb30058
    ctx->pc = 0x17c43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x17c440: 0x220202d
    ctx->pc = 0x17c440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c444: 0xffb40060
    ctx->pc = 0x17c444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x17c448: 0xe0a02d
    ctx->pc = 0x17c448u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c44c: 0xffb50068
    ctx->pc = 0x17c44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x17c450: 0xffb60070
    ctx->pc = 0x17c450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x17c454: 0xa0b02d
    ctx->pc = 0x17c454u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c458: 0xffbf0078
    ctx->pc = 0x17c458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x17c45c: 0x26d00004
    ctx->pc = 0x17c45cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 22), 4));
    // 0x17c460: 0x8e030008
    ctx->pc = 0x17c460u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17c464: 0x8e090004
    ctx->pc = 0x17c464u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17c468: 0x8e480008
    ctx->pc = 0x17c468u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x17c46c: 0x317c2
    ctx->pc = 0x17c46cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 31));
    // 0x17c470: 0x8e46000c
    ctx->pc = 0x17c470u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x17c474: 0x621021
    ctx->pc = 0x17c474u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17c478: 0x8e050000
    ctx->pc = 0x17c478u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17c47c: 0x120a82d
    ctx->pc = 0x17c47cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c480: 0x108a80b
    ctx->pc = 0x17c480u;
    if (GPR_U32(ctx, 8) != 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 8));
    // 0x17c484: 0xafaa000c
    ctx->pc = 0x17c484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 10));
    // 0x17c488: 0xafa50000
    ctx->pc = 0x17c488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x17c48c: 0x29843
    ctx->pc = 0x17c48cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 1));
    // 0x17c490: 0xafa90004
    ctx->pc = 0x17c490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x17c494: 0x10c00002
    ctx->pc = 0x17C494u;
    {
        const bool branch_taken_0x17c494 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C498u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        if (branch_taken_0x17c494) {
            ctx->pc = 0x17C4A0u;
            goto label_17c4a0;
        }
    }
    ctx->pc = 0x17C49Cu;
    // 0x17c49c: 0xc0982d
    ctx->pc = 0x17c49cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17c4a0:
    // 0x17c4a0: 0xc05f14c
    ctx->pc = 0x17C4A0u;
    SET_GPR_U32(ctx, 31, 0x17C4A8u);
    ctx->pc = 0x17C530u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C530_0x17c530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C4A8u; }
    }
    if (ctx->pc != 0x17C4A8u) { return; }
    ctx->pc = 0x17C4A8u;
    // 0x17c4a8: 0x24060020
    ctx->pc = 0x17c4a8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    // 0x17c4ac: 0x8e030008
    ctx->pc = 0x17c4acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17c4b0: 0x24050010
    ctx->pc = 0x17c4b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    // 0x17c4b4: 0xafa20020
    ctx->pc = 0x17c4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x17c4b8: 0x317c2
    ctx->pc = 0x17c4b8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 31));
    // 0x17c4bc: 0x8e040004
    ctx->pc = 0x17c4bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17c4c0: 0x621821
    ctx->pc = 0x17c4c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17c4c4: 0xafb40024
    ctx->pc = 0x17c4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 20));
    // 0x17c4c8: 0x31843
    ctx->pc = 0x17c4c8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x17c4cc: 0xafa40030
    ctx->pc = 0x17c4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x17c4d0: 0xafb50028
    ctx->pc = 0x17c4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 21));
    // 0x17c4d4: 0xafb3002c
    ctx->pc = 0x17c4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 19));
    // 0x17c4d8: 0x1225000b
    ctx->pc = 0x17C4D8u;
    {
        const bool branch_taken_0x17c4d8 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 5));
        ctx->pc = 0x17C4DCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
        if (branch_taken_0x17c4d8) {
            ctx->pc = 0x17C508u;
            goto label_17c508;
        }
    }
    ctx->pc = 0x17C4E0u;
    // 0x17c4e0: 0x5626000a
    ctx->pc = 0x17C4E0u;
    {
        const bool branch_taken_0x17c4e0 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 6));
        if (branch_taken_0x17c4e0) {
            ctx->pc = 0x17C4E4u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->pc = 0x17C50Cu;
            goto label_17c50c;
        }
    }
    ctx->pc = 0x17C4E8u;
    // 0x17c4e8: 0x2c0282d
    ctx->pc = 0x17c4e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c4ec: 0x2406000d
    ctx->pc = 0x17c4ecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 13));
    // 0x17c4f0: 0xc05f164
    ctx->pc = 0x17C4F0u;
    SET_GPR_U32(ctx, 31, 0x17C4F8u);
    ctx->pc = 0x17C4F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17C590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C590_0x17c590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C4F8u; }
    }
    if (ctx->pc != 0x17C4F8u) { return; }
    ctx->pc = 0x17C4F8u;
    // 0x17c4f8: 0x8e46003c
    ctx->pc = 0x17c4f8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x17c4fc: 0x3a0202d
    ctx->pc = 0x17c4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c500: 0xc0524b6
    ctx->pc = 0x17C500u;
    SET_GPR_U32(ctx, 31, 0x17C508u);
    ctx->pc = 0x17C504u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1492D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001492D8_0x1492d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C508u; }
    }
    if (ctx->pc != 0x17C508u) { return; }
    ctx->pc = 0x17C508u;
label_17c508:
    // 0x17c508: 0xdfb00040
    ctx->pc = 0x17c508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_17c50c:
    // 0x17c50c: 0xdfb10048
    ctx->pc = 0x17c50cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17c510: 0xdfb20050
    ctx->pc = 0x17c510u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17c514: 0xdfb30058
    ctx->pc = 0x17c514u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17c518: 0xdfb40060
    ctx->pc = 0x17c518u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17c51c: 0xdfb50068
    ctx->pc = 0x17c51cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17c520: 0xdfb60070
    ctx->pc = 0x17c520u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17c524: 0xdfbf0078
    ctx->pc = 0x17c524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17c528: 0x3e00008
    ctx->pc = 0x17C528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C52Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C4A0u: goto label_17c4a0;
            case 0x17C508u: goto label_17c508;
            case 0x17C50Cu: goto label_17c50c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17C530u;
}
