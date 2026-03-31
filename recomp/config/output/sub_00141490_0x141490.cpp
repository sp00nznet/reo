#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00141490
// Address: 0x141490 - 0x141588
void sub_00141490_0x141490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x141490u;

    // 0x141490: 0x27bdffc0
    ctx->pc = 0x141490u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x141494: 0x3c020023
    ctx->pc = 0x141494u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x141498: 0xffb00010
    ctx->pc = 0x141498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14149c: 0x24509a90
    ctx->pc = 0x14149cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294941328));
    // 0x1414a0: 0xffb10018
    ctx->pc = 0x1414a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1414a4: 0xc0882d
    ctx->pc = 0x1414a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1414a8: 0xffb20020
    ctx->pc = 0x1414a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1414ac: 0xa0902d
    ctx->pc = 0x1414acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1414b0: 0xffb30028
    ctx->pc = 0x1414b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1414b4: 0x80982d
    ctx->pc = 0x1414b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1414b8: 0xffbf0030
    ctx->pc = 0x1414b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1414bc: 0x82020000
    ctx->pc = 0x1414bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1414c0: 0x1040000c
    ctx->pc = 0x1414C0u;
    {
        const bool branch_taken_0x1414c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1414C4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1414c0) {
            ctx->pc = 0x1414F4u;
            goto label_1414f4;
        }
    }
    ctx->pc = 0x1414C8u;
    // 0x1414c8: 0x200282d
    ctx->pc = 0x1414c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1414cc: 0x200182d
    ctx->pc = 0x1414ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1414d0:
    // 0x1414d0: 0x24840001
    ctx->pc = 0x1414d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1414d4: 0x24a50014
    ctx->pc = 0x1414d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 20));
    // 0x1414d8: 0x28820020
    ctx->pc = 0x1414d8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 32));
    // 0x1414dc: 0x10400005
    ctx->pc = 0x1414DCu;
    {
        const bool branch_taken_0x1414dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1414E0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 20));
        if (branch_taken_0x1414dc) {
            ctx->pc = 0x1414F4u;
            goto label_1414f4;
        }
    }
    ctx->pc = 0x1414E4u;
    // 0x1414e4: 0x80a20000
    ctx->pc = 0x1414e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1414e8: 0x0
    ctx->pc = 0x1414e8u;
    // NOP
    // 0x1414ec: 0x1440fff8
    ctx->pc = 0x1414ECu;
    {
        const bool branch_taken_0x1414ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1414F0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1414ec) {
            ctx->pc = 0x1414D0u;
            goto label_1414d0;
        }
    }
    ctx->pc = 0x1414F4u;
label_1414f4:
    // 0x1414f4: 0x24030020
    ctx->pc = 0x1414f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1414f8: 0x1083001c
    ctx->pc = 0x1414F8u;
    {
        const bool branch_taken_0x1414f8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1414FCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1414f8) {
            ctx->pc = 0x14156Cu;
            goto label_14156c;
        }
    }
    ctx->pc = 0x141500u;
    // 0x141500: 0x200202d
    ctx->pc = 0x141500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141504: 0x282d
    ctx->pc = 0x141504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141508: 0xc041f1a
    ctx->pc = 0x141508u;
    SET_GPR_U32(ctx, 31, 0x141510u);
    ctx->pc = 0x14150Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141510u; }
    }
    if (ctx->pc != 0x141510u) { return; }
    ctx->pc = 0x141510u;
    // 0x141510: 0xae130004
    ctx->pc = 0x141510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x141514: 0xae11000c
    ctx->pc = 0x141514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x141518: 0x202d
    ctx->pc = 0x141518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14151c: 0xae120008
    ctx->pc = 0x14151cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x141520: 0x3a0282d
    ctx->pc = 0x141520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141524: 0x24060004
    ctx->pc = 0x141524u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x141528: 0x3a0382d
    ctx->pc = 0x141528u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14152c: 0x24080001
    ctx->pc = 0x14152cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x141530: 0xafb30000
    ctx->pc = 0x141530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x141534: 0xafb20004
    ctx->pc = 0x141534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
    // 0x141538: 0xafb10008
    ctx->pc = 0x141538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    // 0x14153c: 0xc04e518
    ctx->pc = 0x14153Cu;
    SET_GPR_U32(ctx, 31, 0x141544u);
    ctx->pc = 0x141540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
    ctx->pc = 0x139460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00139460_0x139460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141544u; }
    }
    if (ctx->pc != 0x141544u) { return; }
    ctx->pc = 0x141544u;
    // 0x141544: 0x14400006
    ctx->pc = 0x141544u;
    {
        const bool branch_taken_0x141544 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x141548u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x141544) {
            ctx->pc = 0x141560u;
            goto label_141560;
        }
    }
    ctx->pc = 0x14154Cu;
    // 0x14154c: 0x3c040024
    ctx->pc = 0x14154cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x141550: 0xc045a12
    ctx->pc = 0x141550u;
    SET_GPR_U32(ctx, 31, 0x141558u);
    ctx->pc = 0x141554u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957904));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141558u; }
    }
    if (ctx->pc != 0x141558u) { return; }
    ctx->pc = 0x141558u;
    // 0x141558: 0x10000004
    ctx->pc = 0x141558u;
    {
        const bool branch_taken_0x141558 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14155Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x141558) {
            ctx->pc = 0x14156Cu;
            goto label_14156c;
        }
    }
    ctx->pc = 0x141560u;
label_141560:
    // 0x141560: 0x24030001
    ctx->pc = 0x141560u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x141564: 0x200102d
    ctx->pc = 0x141564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141568: 0xa2030000
    ctx->pc = 0x141568u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_14156c:
    // 0x14156c: 0xdfb00010
    ctx->pc = 0x14156cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141570: 0xdfb10018
    ctx->pc = 0x141570u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x141574: 0xdfb20020
    ctx->pc = 0x141574u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x141578: 0xdfb30028
    ctx->pc = 0x141578u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14157c: 0xdfbf0030
    ctx->pc = 0x14157cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x141580: 0x3e00008
    ctx->pc = 0x141580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141584u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1414D0u: goto label_1414d0;
            case 0x1414F4u: goto label_1414f4;
            case 0x141560u: goto label_141560;
            case 0x14156Cu: goto label_14156c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x141588u;
}
