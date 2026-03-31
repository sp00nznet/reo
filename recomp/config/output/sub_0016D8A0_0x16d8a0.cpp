#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016D8A0
// Address: 0x16d8a0 - 0x16d960
void sub_0016D8A0_0x16d8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16d8a0u;

    // 0x16d8a0: 0x27bdffb0
    ctx->pc = 0x16d8a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16d8a4: 0x2402ffff
    ctx->pc = 0x16d8a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16d8a8: 0xffb10018
    ctx->pc = 0x16d8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x16d8ac: 0x80882d
    ctx->pc = 0x16d8acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d8b0: 0xffb20020
    ctx->pc = 0x16d8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16d8b4: 0x100902d
    ctx->pc = 0x16d8b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d8b8: 0xffb30028
    ctx->pc = 0x16d8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x16d8bc: 0xa0982d
    ctx->pc = 0x16d8bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d8c0: 0xffb40030
    ctx->pc = 0x16d8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x16d8c4: 0xe0a02d
    ctx->pc = 0x16d8c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d8c8: 0xffb00010
    ctx->pc = 0x16d8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16d8cc: 0x26271b28
    ctx->pc = 0x16d8ccu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 17), 6952));
    // 0x16d8d0: 0xffb50038
    ctx->pc = 0x16d8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x16d8d4: 0xc0182d
    ctx->pc = 0x16d8d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d8d8: 0xffbf0040
    ctx->pc = 0x16d8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16d8dc: 0x24060004
    ctx->pc = 0x16d8dcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x16d8e0: 0x8cf50008
    ctx->pc = 0x16d8e0u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x16d8e4: 0xae820000
    ctx->pc = 0x16d8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x16d8e8: 0x8c640000
    ctx->pc = 0x16d8e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d8ec: 0x8c650004
    ctx->pc = 0x16d8ecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16d8f0: 0xc0561d4
    ctx->pc = 0x16D8F0u;
    SET_GPR_U32(ctx, 31, 0x16D8F8u);
    ctx->pc = 0x16D8F4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 7), 16)));
    ctx->pc = 0x158750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00158750_0x158750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D8F8u; }
    }
    if (ctx->pc != 0x16D8F8u) { return; }
    ctx->pc = 0x16D8F8u;
    // 0x16d8f8: 0x220202d
    ctx->pc = 0x16d8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d8fc: 0x200282d
    ctx->pc = 0x16d8fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d900: 0x40302d
    ctx->pc = 0x16d900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d904: 0x1040000d
    ctx->pc = 0x16D904u;
    {
        const bool branch_taken_0x16d904 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16D908u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16d904) {
            ctx->pc = 0x16D93Cu;
            goto label_16d93c;
        }
    }
    ctx->pc = 0x16D90Cu;
    // 0x16d90c: 0xc05d0ca
    ctx->pc = 0x16D90Cu;
    SET_GPR_U32(ctx, 31, 0x16D914u);
    ctx->pc = 0x174328u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00174328_0x174328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D914u; }
    }
    if (ctx->pc != 0x16D914u) { return; }
    ctx->pc = 0x16D914u;
    // 0x16d914: 0x26240cc0
    ctx->pc = 0x16d914u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 3264));
    // 0x16d918: 0x8fa20000
    ctx->pc = 0x16d918u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d91c: 0x240402d
    ctx->pc = 0x16d91cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d920: 0x26a500ec
    ctx->pc = 0x16d920u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 21), 236));
    // 0x16d924: 0x260302d
    ctx->pc = 0x16d924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d928: 0x4400004
    ctx->pc = 0x16D928u;
    {
        const bool branch_taken_0x16d928 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16D92Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16d928) {
            ctx->pc = 0x16D93Cu;
            goto label_16d93c;
        }
    }
    ctx->pc = 0x16D930u;
    // 0x16d930: 0xc05b662
    ctx->pc = 0x16D930u;
    SET_GPR_U32(ctx, 31, 0x16D938u);
    ctx->pc = 0x16D988u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D988_0x16d988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D938u; }
    }
    if (ctx->pc != 0x16D938u) { return; }
    ctx->pc = 0x16D938u;
    // 0x16d938: 0xae820000
    ctx->pc = 0x16d938u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_16d93c:
    // 0x16d93c: 0xdfb00010
    ctx->pc = 0x16d93cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d940: 0xdfb10018
    ctx->pc = 0x16d940u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16d944: 0xdfb20020
    ctx->pc = 0x16d944u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d948: 0xdfb30028
    ctx->pc = 0x16d948u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16d94c: 0xdfb40030
    ctx->pc = 0x16d94cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d950: 0xdfb50038
    ctx->pc = 0x16d950u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16d954: 0xdfbf0040
    ctx->pc = 0x16d954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16d958: 0x3e00008
    ctx->pc = 0x16D958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D95Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D93Cu: goto label_16d93c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D960u;
}
