#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00175500
// Address: 0x175500 - 0x175588
void sub_00175500_0x175500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x175500u;

    // 0x175500: 0x27bdffe0
    ctx->pc = 0x175500u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175504: 0x24020006
    ctx->pc = 0x175504u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x175508: 0xffb00000
    ctx->pc = 0x175508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17550c: 0xa0802d
    ctx->pc = 0x17550cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175510: 0xffb10008
    ctx->pc = 0x175510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x175514: 0xc0882d
    ctx->pc = 0x175514u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175518: 0xffb20010
    ctx->pc = 0x175518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17551c: 0x80902d
    ctx->pc = 0x17551cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175520: 0x16020008
    ctx->pc = 0x175520u;
    {
        const bool branch_taken_0x175520 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x175524u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        if (branch_taken_0x175520) {
            ctx->pc = 0x175544u;
            goto label_175544;
        }
    }
    ctx->pc = 0x175528u;
    // 0x175528: 0x24020001
    ctx->pc = 0x175528u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17552c: 0x56220006
    ctx->pc = 0x17552Cu;
    {
        const bool branch_taken_0x17552c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x17552c) {
            ctx->pc = 0x175530u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
            ctx->pc = 0x175548u;
            goto label_175548;
        }
    }
    ctx->pc = 0x175534u;
    // 0x175534: 0xc05df24
    ctx->pc = 0x175534u;
    SET_GPR_U32(ctx, 31, 0x17553Cu);
    ctx->pc = 0x175538u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x177C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177C90_0x177c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17553Cu; }
    }
    if (ctx->pc != 0x17553Cu) { return; }
    ctx->pc = 0x17553Cu;
    // 0x17553c: 0x5040000d
    ctx->pc = 0x17553Cu;
    {
        const bool branch_taken_0x17553c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x17553c) {
            ctx->pc = 0x175540u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x175574u;
            goto label_175574;
        }
    }
    ctx->pc = 0x175544u;
label_175544:
    // 0x175544: 0x24020005
    ctx->pc = 0x175544u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_175548:
    // 0x175548: 0x16020009
    ctx->pc = 0x175548u;
    {
        const bool branch_taken_0x175548 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x17554Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x175548) {
            ctx->pc = 0x175570u;
            goto label_175570;
        }
    }
    ctx->pc = 0x175550u;
    // 0x175550: 0x56220008
    ctx->pc = 0x175550u;
    {
        const bool branch_taken_0x175550 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x175550) {
            ctx->pc = 0x175554u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x175574u;
            goto label_175574;
        }
    }
    ctx->pc = 0x175558u;
    // 0x175558: 0x240202d
    ctx->pc = 0x175558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17555c: 0xc05df24
    ctx->pc = 0x17555Cu;
    SET_GPR_U32(ctx, 31, 0x175564u);
    ctx->pc = 0x175560u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x177C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177C90_0x177c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175564u; }
    }
    if (ctx->pc != 0x175564u) { return; }
    ctx->pc = 0x175564u;
    // 0x175564: 0x10400003
    ctx->pc = 0x175564u;
    {
        const bool branch_taken_0x175564 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x175568u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x175564) {
            ctx->pc = 0x175574u;
            goto label_175574;
        }
    }
    ctx->pc = 0x17556Cu;
    // 0x17556c: 0x24020001
    ctx->pc = 0x17556cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_175570:
    // 0x175570: 0xdfb00000
    ctx->pc = 0x175570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_175574:
    // 0x175574: 0xdfb10008
    ctx->pc = 0x175574u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175578: 0xdfb20010
    ctx->pc = 0x175578u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17557c: 0xdfbf0018
    ctx->pc = 0x17557cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x175580: 0x3e00008
    ctx->pc = 0x175580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175584u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175544u: goto label_175544;
            case 0x175548u: goto label_175548;
            case 0x175570u: goto label_175570;
            case 0x175574u: goto label_175574;
            default: break;
        }
        return;
    }
    ctx->pc = 0x175588u;
}
