#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00166498
// Address: 0x166498 - 0x166548
void sub_00166498_0x166498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x166498u;

    // 0x166498: 0x27bdffe0
    ctx->pc = 0x166498u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16649c: 0x24050007
    ctx->pc = 0x16649cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1664a0: 0xffb00000
    ctx->pc = 0x1664a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1664a4: 0x80802d
    ctx->pc = 0x1664a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1664a8: 0xffb10008
    ctx->pc = 0x1664a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1664ac: 0xffbf0010
    ctx->pc = 0x1664acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1664b0: 0xc05df1e
    ctx->pc = 0x1664B0u;
    SET_GPR_U32(ctx, 31, 0x1664B8u);
    ctx->pc = 0x1664B4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x177C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177C78_0x177c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1664B8u; }
    }
    if (ctx->pc != 0x1664B8u) { return; }
    ctx->pc = 0x1664B8u;
    // 0x1664b8: 0x1051000d
    ctx->pc = 0x1664B8u;
    {
        const bool branch_taken_0x1664b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        ctx->pc = 0x1664BCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1664b8) {
            ctx->pc = 0x1664F0u;
            goto label_1664f0;
        }
    }
    ctx->pc = 0x1664C0u;
    // 0x1664c0: 0xc059f40
    ctx->pc = 0x1664C0u;
    SET_GPR_U32(ctx, 31, 0x1664C8u);
    ctx->pc = 0x1664C4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 7308)));
    ctx->pc = 0x167D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D00_0x167d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1664C8u; }
    }
    if (ctx->pc != 0x1664C8u) { return; }
    ctx->pc = 0x1664C8u;
    // 0x1664c8: 0x200202d
    ctx->pc = 0x1664c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1664cc: 0x24050007
    ctx->pc = 0x1664ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1664d0: 0x14510007
    ctx->pc = 0x1664D0u;
    {
        const bool branch_taken_0x1664d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x1664D4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1664d0) {
            ctx->pc = 0x1664F0u;
            goto label_1664f0;
        }
    }
    ctx->pc = 0x1664D8u;
    // 0x1664d8: 0xdfb00000
    ctx->pc = 0x1664d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1664dc: 0xdfb10008
    ctx->pc = 0x1664dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1664e0: 0xdfbf0010
    ctx->pc = 0x1664e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1664e4: 0x805df18
    ctx->pc = 0x1664E4u;
    ctx->pc = 0x1664E8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x177C60u;
    entry_177c60_0x177c78(rdram, ctx, runtime); return;
    ctx->pc = 0x1664ECu;
    // 0x1664ec: 0x0
    ctx->pc = 0x1664ecu;
    // NOP
label_1664f0:
    // 0x1664f0: 0xdfb00000
    ctx->pc = 0x1664f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1664f4: 0xdfb10008
    ctx->pc = 0x1664f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1664f8: 0xdfbf0010
    ctx->pc = 0x1664f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1664fc: 0x3e00008
    ctx->pc = 0x1664FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166500u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1664F0u: goto label_1664f0;
            case 0x166538u: goto label_166538;
            default: break;
        }
        return;
    }
    ctx->pc = 0x166504u;
    // 0x166504: 0x0
    ctx->pc = 0x166504u;
    // NOP
    // 0x166508: 0x27bdfff0
    ctx->pc = 0x166508u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16650c: 0x24050006
    ctx->pc = 0x16650cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x166510: 0xffb00000
    ctx->pc = 0x166510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x166514: 0xffbf0008
    ctx->pc = 0x166514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x166518: 0xc05d58a
    ctx->pc = 0x166518u;
    SET_GPR_U32(ctx, 31, 0x166520u);
    ctx->pc = 0x16651Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166520u; }
    }
    if (ctx->pc != 0x166520u) { return; }
    ctx->pc = 0x166520u;
    // 0x166520: 0x26032a5c
    ctx->pc = 0x166520u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 10844));
    // 0x166524: 0x10400004
    ctx->pc = 0x166524u;
    {
        const bool branch_taken_0x166524 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x166528u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x166524) {
            ctx->pc = 0x166538u;
            goto label_166538;
        }
    }
    ctx->pc = 0x16652Cu;
    // 0x16652c: 0xc059952
    ctx->pc = 0x16652Cu;
    SET_GPR_U32(ctx, 31, 0x166534u);
    ctx->pc = 0x166530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7300), GPR_U32(ctx, 3));
    ctx->pc = 0x166548u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00166548_0x166548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166534u; }
    }
    if (ctx->pc != 0x166534u) { return; }
    ctx->pc = 0x166534u;
    // 0x166534: 0x102d
    ctx->pc = 0x166534u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166538:
    // 0x166538: 0xdfb00000
    ctx->pc = 0x166538u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16653c: 0xdfbf0008
    ctx->pc = 0x16653cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x166540: 0x3e00008
    ctx->pc = 0x166540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166544u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1664F0u: goto label_1664f0;
            case 0x166538u: goto label_166538;
            default: break;
        }
        return;
    }
    ctx->pc = 0x166548u;
}
