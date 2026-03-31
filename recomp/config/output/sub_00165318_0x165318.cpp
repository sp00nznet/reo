#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00165318
// Address: 0x165318 - 0x1653c0
void sub_00165318_0x165318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x165318u;

    // 0x165318: 0x27bdffd0
    ctx->pc = 0x165318u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16531c: 0xffb10008
    ctx->pc = 0x16531cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x165320: 0x80882d
    ctx->pc = 0x165320u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165324: 0xffb30018
    ctx->pc = 0x165324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x165328: 0x24130001
    ctx->pc = 0x165328u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16532c: 0xffb00000
    ctx->pc = 0x16532cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x165330: 0x26221b6c
    ctx->pc = 0x165330u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 7020));
    // 0x165334: 0xffb20010
    ctx->pc = 0x165334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x165338: 0xffbf0020
    ctx->pc = 0x165338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16533c: 0x8c520014
    ctx->pc = 0x16533cu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x165340: 0x8c500010
    ctx->pc = 0x165340u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x165344: 0xc059f30
    ctx->pc = 0x165344u;
    SET_GPR_U32(ctx, 31, 0x16534Cu);
    ctx->pc = 0x165348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x167CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167CC0_0x167cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16534Cu; }
    }
    if (ctx->pc != 0x16534Cu) { return; }
    ctx->pc = 0x16534Cu;
    // 0x16534c: 0x220202d
    ctx->pc = 0x16534cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165350: 0x10530013
    ctx->pc = 0x165350u;
    {
        const bool branch_taken_0x165350 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 19));
        ctx->pc = 0x165354u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x165350) {
            ctx->pc = 0x1653A0u;
            goto label_1653a0;
        }
    }
    ctx->pc = 0x165358u;
    // 0x165358: 0xc059f30
    ctx->pc = 0x165358u;
    SET_GPR_U32(ctx, 31, 0x165360u);
    ctx->pc = 0x167CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167CC0_0x167cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165360u; }
    }
    if (ctx->pc != 0x165360u) { return; }
    ctx->pc = 0x165360u;
    // 0x165360: 0x54530010
    ctx->pc = 0x165360u;
    {
        const bool branch_taken_0x165360 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        if (branch_taken_0x165360) {
            ctx->pc = 0x165364u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x1653A4u;
            goto label_1653a4;
        }
    }
    ctx->pc = 0x165368u;
    // 0x165368: 0xc0594f0
    ctx->pc = 0x165368u;
    SET_GPR_U32(ctx, 31, 0x165370u);
    ctx->pc = 0x16536Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1653C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001653C0_0x1653c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165370u; }
    }
    if (ctx->pc != 0x165370u) { return; }
    ctx->pc = 0x165370u;
    // 0x165370: 0x1040000b
    ctx->pc = 0x165370u;
    {
        const bool branch_taken_0x165370 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x165374u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x165370) {
            ctx->pc = 0x1653A0u;
            goto label_1653a0;
        }
    }
    ctx->pc = 0x165378u;
    // 0x165378: 0x240282d
    ctx->pc = 0x165378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16537c: 0xdfb20010
    ctx->pc = 0x16537cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165380: 0xdfb00000
    ctx->pc = 0x165380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165384: 0x24060001
    ctx->pc = 0x165384u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x165388: 0xdfb10008
    ctx->pc = 0x165388u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16538c: 0xdfb30018
    ctx->pc = 0x16538cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x165390: 0xdfbf0020
    ctx->pc = 0x165390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165394: 0x8059f28
    ctx->pc = 0x165394u;
    ctx->pc = 0x165398u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x167CA0u;
    sub_00167CA0_0x167ca0(rdram, ctx, runtime); return;
    ctx->pc = 0x16539Cu;
    // 0x16539c: 0x0
    ctx->pc = 0x16539cu;
    // NOP
label_1653a0:
    // 0x1653a0: 0xdfb00000
    ctx->pc = 0x1653a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1653a4:
    // 0x1653a4: 0xdfb10008
    ctx->pc = 0x1653a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1653a8: 0xdfb20010
    ctx->pc = 0x1653a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1653ac: 0xdfb30018
    ctx->pc = 0x1653acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1653b0: 0xdfbf0020
    ctx->pc = 0x1653b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1653b4: 0x3e00008
    ctx->pc = 0x1653B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1653B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1653A0u: goto label_1653a0;
            case 0x1653A4u: goto label_1653a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1653BCu;
    // 0x1653bc: 0x0
    ctx->pc = 0x1653bcu;
    // NOP
}
