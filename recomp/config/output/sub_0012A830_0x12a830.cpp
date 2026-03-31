#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012A830
// Address: 0x12a830 - 0x12a8e8
void sub_0012A830_0x12a830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12a830u;

    // 0x12a830: 0x27bdfff0
    ctx->pc = 0x12a830u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12a834: 0x14800006
    ctx->pc = 0x12A834u;
    {
        const bool branch_taken_0x12a834 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x12A838u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x12a834) {
            ctx->pc = 0x12A850u;
            goto label_12a850;
        }
    }
    ctx->pc = 0x12A83Cu;
    // 0x12a83c: 0x3c040024
    ctx->pc = 0x12a83cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x12a840: 0xdfbf0000
    ctx->pc = 0x12a840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a844: 0x2484a3c8
    ctx->pc = 0x12a844u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943688));
    // 0x12a848: 0x804a034
    ctx->pc = 0x12A848u;
    ctx->pc = 0x12A84Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1280D0u;
    sub_001280D0_0x1280d0(rdram, ctx, runtime); return;
    ctx->pc = 0x12A850u;
label_12a850:
    // 0x12a850: 0x8c840094
    ctx->pc = 0x12a850u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x12a854: 0xdfbf0000
    ctx->pc = 0x12a854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a858: 0x804f51a
    ctx->pc = 0x12A858u;
    ctx->pc = 0x12A85Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13D468u;
    sub_0013D468_0x13d468(rdram, ctx, runtime); return;
    ctx->pc = 0x12A860u;
    // 0x12a860: 0x27bdffe0
    ctx->pc = 0x12a860u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12a864: 0xffb10008
    ctx->pc = 0x12a864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12a868: 0x80882d
    ctx->pc = 0x12a868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a86c: 0xffb20010
    ctx->pc = 0x12a86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12a870: 0xa0902d
    ctx->pc = 0x12a870u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a874: 0xffb00000
    ctx->pc = 0x12a874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12a878: 0x12200003
    ctx->pc = 0x12A878u;
    {
        const bool branch_taken_0x12a878 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x12A87Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        if (branch_taken_0x12a878) {
            ctx->pc = 0x12A888u;
            goto label_12a888;
        }
    }
    ctx->pc = 0x12A880u;
    // 0x12a880: 0x56400009
    ctx->pc = 0x12A880u;
    {
        const bool branch_taken_0x12a880 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x12a880) {
            ctx->pc = 0x12A884u;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 148)));
            ctx->pc = 0x12A8A8u;
            goto label_12a8a8;
        }
    }
    ctx->pc = 0x12A888u;
label_12a888:
    // 0x12a888: 0x3c040024
    ctx->pc = 0x12a888u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x12a88c: 0xdfb00000
    ctx->pc = 0x12a88cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a890: 0xdfb10008
    ctx->pc = 0x12a890u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12a894: 0x2484a3f8
    ctx->pc = 0x12a894u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943736));
    // 0x12a898: 0xdfb20010
    ctx->pc = 0x12a898u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a89c: 0xdfbf0018
    ctx->pc = 0x12a89cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12a8a0: 0x804a034
    ctx->pc = 0x12A8A0u;
    ctx->pc = 0x12A8A4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1280D0u;
    sub_001280D0_0x1280d0(rdram, ctx, runtime); return;
    ctx->pc = 0x12A8A8u;
label_12a8a8:
    // 0x12a8a8: 0xc04f3de
    ctx->pc = 0x12A8A8u;
    SET_GPR_U32(ctx, 31, 0x12A8B0u);
    ctx->pc = 0x12A8ACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13CF78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CF78_0x13cf78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A8B0u; }
    }
    if (ctx->pc != 0x12A8B0u) { return; }
    ctx->pc = 0x12A8B0u;
    // 0x12a8b0: 0x220202d
    ctx->pc = 0x12a8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a8b4: 0xc04a996
    ctx->pc = 0x12A8B4u;
    SET_GPR_U32(ctx, 31, 0x12A8BCu);
    ctx->pc = 0x12A8B8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12A658u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A658_0x12a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A8BCu; }
    }
    if (ctx->pc != 0x12A8BCu) { return; }
    ctx->pc = 0x12A8BCu;
    // 0x12a8bc: 0x200202d
    ctx->pc = 0x12a8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a8c0: 0xc04f51a
    ctx->pc = 0x12A8C0u;
    SET_GPR_U32(ctx, 31, 0x12A8C8u);
    ctx->pc = 0x12A8C4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x13D468u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D468_0x13d468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A8C8u; }
    }
    if (ctx->pc != 0x12A8C8u) { return; }
    ctx->pc = 0x12A8C8u;
    // 0x12a8c8: 0x220202d
    ctx->pc = 0x12a8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a8cc: 0xdfb00000
    ctx->pc = 0x12a8ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a8d0: 0xdfb10008
    ctx->pc = 0x12a8d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12a8d4: 0xdfb20010
    ctx->pc = 0x12a8d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a8d8: 0xdfbf0018
    ctx->pc = 0x12a8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12a8dc: 0x804a9e0
    ctx->pc = 0x12A8DCu;
    ctx->pc = 0x12A8E0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x12A780u;
    sub_0012A780_0x12a780(rdram, ctx, runtime); return;
    ctx->pc = 0x12A8E4u;
    // 0x12a8e4: 0x0
    ctx->pc = 0x12a8e4u;
    // NOP
}
