#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00172908
// Address: 0x172908 - 0x1729b0
void sub_00172908_0x172908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x172908u;

    // 0x172908: 0x27bdffe0
    ctx->pc = 0x172908u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17290c: 0x24030001
    ctx->pc = 0x17290cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x172910: 0xffb00000
    ctx->pc = 0x172910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x172914: 0xffb10008
    ctx->pc = 0x172914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x172918: 0x80882d
    ctx->pc = 0x172918u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17291c: 0xffbf0010
    ctx->pc = 0x17291cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x172920: 0x263009a0
    ctx->pc = 0x172920u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 2464));
    // 0x172924: 0x8e020014
    ctx->pc = 0x172924u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x172928: 0x5443000b
    ctx->pc = 0x172928u;
    {
        const bool branch_taken_0x172928 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x172928) {
            ctx->pc = 0x17292Cu;
            SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->pc = 0x172958u;
            goto label_172958;
        }
    }
    ctx->pc = 0x172930u;
    // 0x172930: 0xc059d52
    ctx->pc = 0x172930u;
    SET_GPR_U32(ctx, 31, 0x172938u);
    ctx->pc = 0x172934u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x167548u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167548_0x167548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172938u; }
    }
    if (ctx->pc != 0x172938u) { return; }
    ctx->pc = 0x172938u;
    // 0x172938: 0x54400007
    ctx->pc = 0x172938u;
    {
        const bool branch_taken_0x172938 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x172938) {
            ctx->pc = 0x17293Cu;
            SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->pc = 0x172958u;
            goto label_172958;
        }
    }
    ctx->pc = 0x172940u;
    // 0x172940: 0x220202d
    ctx->pc = 0x172940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172944: 0xc059d4a
    ctx->pc = 0x172944u;
    SET_GPR_U32(ctx, 31, 0x17294Cu);
    ctx->pc = 0x172948u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x167528u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167528_0x167528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17294Cu; }
    }
    if (ctx->pc != 0x17294Cu) { return; }
    ctx->pc = 0x17294Cu;
    // 0x17294c: 0x50400001
    ctx->pc = 0x17294Cu;
    {
        const bool branch_taken_0x17294c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x17294c) {
            ctx->pc = 0x172950u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->pc = 0x172954u;
            goto label_172954;
        }
    }
    ctx->pc = 0x172954u;
label_172954:
    // 0x172954: 0x8e060018
    ctx->pc = 0x172954u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_172958:
    // 0x172958: 0x24020001
    ctx->pc = 0x172958u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17295c: 0x54c2000e
    ctx->pc = 0x17295Cu;
    {
        const bool branch_taken_0x17295c = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        if (branch_taken_0x17295c) {
            ctx->pc = 0x172960u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->pc = 0x172998u;
            goto label_172998;
        }
    }
    ctx->pc = 0x172964u;
    // 0x172964: 0x220202d
    ctx->pc = 0x172964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172968: 0xc059d52
    ctx->pc = 0x172968u;
    SET_GPR_U32(ctx, 31, 0x172970u);
    ctx->pc = 0x17296Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x167548u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167548_0x167548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172970u; }
    }
    if (ctx->pc != 0x172970u) { return; }
    ctx->pc = 0x172970u;
    // 0x172970: 0x54400008
    ctx->pc = 0x172970u;
    {
        const bool branch_taken_0x172970 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x172970) {
            ctx->pc = 0x172974u;
            SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->pc = 0x172994u;
            goto label_172994;
        }
    }
    ctx->pc = 0x172978u;
    // 0x172978: 0x220202d
    ctx->pc = 0x172978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17297c: 0xc059d4a
    ctx->pc = 0x17297Cu;
    SET_GPR_U32(ctx, 31, 0x172984u);
    ctx->pc = 0x172980u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x167528u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167528_0x167528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172984u; }
    }
    if (ctx->pc != 0x172984u) { return; }
    ctx->pc = 0x172984u;
    // 0x172984: 0x54400003
    ctx->pc = 0x172984u;
    {
        const bool branch_taken_0x172984 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x172984) {
            ctx->pc = 0x172988u;
            SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->pc = 0x172994u;
            goto label_172994;
        }
    }
    ctx->pc = 0x17298Cu;
    // 0x17298c: 0xae000018
    ctx->pc = 0x17298cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x172990: 0x302d
    ctx->pc = 0x172990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172994:
    // 0x172994: 0x8e050014
    ctx->pc = 0x172994u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_172998:
    // 0x172998: 0x220202d
    ctx->pc = 0x172998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17299c: 0xdfb00000
    ctx->pc = 0x17299cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1729a0: 0xdfb10008
    ctx->pc = 0x1729a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1729a4: 0xdfbf0010
    ctx->pc = 0x1729a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1729a8: 0x805d212
    ctx->pc = 0x1729A8u;
    ctx->pc = 0x1729ACu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x174848u;
    entry_174848_0x174878(rdram, ctx, runtime); return;
    ctx->pc = 0x1729B0u;
}
