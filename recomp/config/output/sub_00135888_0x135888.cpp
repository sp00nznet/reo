#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00135888
// Address: 0x135888 - 0x135930
void sub_00135888_0x135888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x135888u;

    // 0x135888: 0x27bdffd0
    ctx->pc = 0x135888u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13588c: 0xffb10008
    ctx->pc = 0x13588cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x135890: 0x80882d
    ctx->pc = 0x135890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135894: 0xffb20010
    ctx->pc = 0x135894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x135898: 0xa0902d
    ctx->pc = 0x135898u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13589c: 0xffb30018
    ctx->pc = 0x13589cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1358a0: 0xffb00000
    ctx->pc = 0x1358a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1358a4: 0xffbf0020
    ctx->pc = 0x1358a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1358a8: 0x82220000
    ctx->pc = 0x1358a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1358ac: 0x14400006
    ctx->pc = 0x1358ACu;
    {
        const bool branch_taken_0x1358ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1358B0u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1358ac) {
            ctx->pc = 0x1358C8u;
            goto label_1358c8;
        }
    }
    ctx->pc = 0x1358B4u;
    // 0x1358b4: 0xc04d706
    ctx->pc = 0x1358B4u;
    SET_GPR_U32(ctx, 31, 0x1358BCu);
    ctx->pc = 0x135C18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135C18_0x135c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1358BCu; }
    }
    if (ctx->pc != 0x1358BCu) { return; }
    ctx->pc = 0x1358BCu;
    // 0x1358bc: 0x82230000
    ctx->pc = 0x1358bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1358c0: 0x10600014
    ctx->pc = 0x1358C0u;
    {
        const bool branch_taken_0x1358c0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1358C4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1358c0) {
            ctx->pc = 0x135914u;
            goto label_135914;
        }
    }
    ctx->pc = 0x1358C8u;
label_1358c8:
    // 0x1358c8: 0x240282d
    ctx->pc = 0x1358c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1358cc: 0xc04dbfa
    ctx->pc = 0x1358CCu;
    SET_GPR_U32(ctx, 31, 0x1358D4u);
    ctx->pc = 0x1358D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x136FE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00136FE8_0x136fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1358D4u; }
    }
    if (ctx->pc != 0x1358D4u) { return; }
    ctx->pc = 0x1358D4u;
    // 0x1358d4: 0xc04d558
    ctx->pc = 0x1358D4u;
    SET_GPR_U32(ctx, 31, 0x1358DCu);
    ctx->pc = 0x1358D8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x135560u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135560_0x135560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1358DCu; }
    }
    if (ctx->pc != 0x1358DCu) { return; }
    ctx->pc = 0x1358DCu;
    // 0x1358dc: 0x40802d
    ctx->pc = 0x1358dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1358e0: 0x1600000b
    ctx->pc = 0x1358E0u;
    {
        const bool branch_taken_0x1358e0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1358E4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1358e0) {
            ctx->pc = 0x135910u;
            goto label_135910;
        }
    }
    ctx->pc = 0x1358E8u;
    // 0x1358e8: 0xc04d706
    ctx->pc = 0x1358E8u;
    SET_GPR_U32(ctx, 31, 0x1358F0u);
    ctx->pc = 0x135C18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135C18_0x135c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1358F0u; }
    }
    if (ctx->pc != 0x1358F0u) { return; }
    ctx->pc = 0x1358F0u;
    // 0x1358f0: 0xc04d558
    ctx->pc = 0x1358F0u;
    SET_GPR_U32(ctx, 31, 0x1358F8u);
    ctx->pc = 0x1358F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x135560u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135560_0x135560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1358F8u; }
    }
    if (ctx->pc != 0x1358F8u) { return; }
    ctx->pc = 0x1358F8u;
    // 0x1358f8: 0x240202d
    ctx->pc = 0x1358f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1358fc: 0x40802d
    ctx->pc = 0x1358fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135900: 0x12000004
    ctx->pc = 0x135900u;
    {
        const bool branch_taken_0x135900 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x135904u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x135900) {
            ctx->pc = 0x135914u;
            goto label_135914;
        }
    }
    ctx->pc = 0x135908u;
    // 0x135908: 0xc042bf0
    ctx->pc = 0x135908u;
    SET_GPR_U32(ctx, 31, 0x135910u);
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135910u; }
    }
    if (ctx->pc != 0x135910u) { return; }
    ctx->pc = 0x135910u;
label_135910:
    // 0x135910: 0x200102d
    ctx->pc = 0x135910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_135914:
    // 0x135914: 0xdfb00000
    ctx->pc = 0x135914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135918: 0xdfb10008
    ctx->pc = 0x135918u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13591c: 0xdfb20010
    ctx->pc = 0x13591cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135920: 0xdfb30018
    ctx->pc = 0x135920u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135924: 0xdfbf0020
    ctx->pc = 0x135924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135928: 0x3e00008
    ctx->pc = 0x135928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13592Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1358C8u: goto label_1358c8;
            case 0x135910u: goto label_135910;
            case 0x135914u: goto label_135914;
            default: break;
        }
        return;
    }
    ctx->pc = 0x135930u;
}
