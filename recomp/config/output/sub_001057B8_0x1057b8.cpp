#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001057B8
// Address: 0x1057b8 - 0x1058d8
void sub_001057B8_0x1057b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1057b8u;

    // 0x1057b8: 0x27bdffc0
    ctx->pc = 0x1057b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1057bc: 0xffb40020
    ctx->pc = 0x1057bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1057c0: 0xa0a02d
    ctx->pc = 0x1057c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1057c4: 0xffb60030
    ctx->pc = 0x1057c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1057c8: 0xc0b02d
    ctx->pc = 0x1057c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1057cc: 0xffb30018
    ctx->pc = 0x1057ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1057d0: 0x2d49818
    ctx->pc = 0x1057d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)(uint32_t)result); }
    // 0x1057d4: 0xffb10008
    ctx->pc = 0x1057d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1057d8: 0xe0882d
    ctx->pc = 0x1057d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1057dc: 0xffb00000
    ctx->pc = 0x1057dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1057e0: 0xffb20010
    ctx->pc = 0x1057e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1057e4: 0xffb50028
    ctx->pc = 0x1057e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1057e8: 0x16600009
    ctx->pc = 0x1057E8u;
    {
        const bool branch_taken_0x1057e8 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x1057ECu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        if (branch_taken_0x1057e8) {
            ctx->pc = 0x105810u;
            goto label_105810;
        }
    }
    ctx->pc = 0x1057F0u;
    // 0x1057f0: 0x1000002e
    ctx->pc = 0x1057F0u;
    {
        const bool branch_taken_0x1057f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1057F4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1057f0) {
            ctx->pc = 0x1058ACu;
            goto label_1058ac;
        }
    }
    ctx->pc = 0x1057F8u;
label_1057f8:
    // 0x1057f8: 0x52800001
    ctx->pc = 0x1057F8u;
    {
        const bool branch_taken_0x1057f8 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        if (branch_taken_0x1057f8) {
            ctx->pc = 0x1057FCu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x105800u;
            goto label_105800;
        }
    }
    ctx->pc = 0x105800u;
label_105800:
    // 0x105800: 0x54001b
    ctx->pc = 0x105800u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 2) / divisor; ctx->hi = GPR_U32(ctx, 20) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,2); } }
    // 0x105804: 0x1012
    ctx->pc = 0x105804u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x105808: 0x10000029
    ctx->pc = 0x105808u;
    {
        const bool branch_taken_0x105808 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10580Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x105808) {
            ctx->pc = 0x1058B0u;
            goto label_1058b0;
        }
    }
    ctx->pc = 0x105810u;
label_105810:
    // 0x105810: 0x8e260004
    ctx->pc = 0x105810u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x105814: 0x4c10004
    ctx->pc = 0x105814u;
    {
        const bool branch_taken_0x105814 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x105818u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x105814) {
            ctx->pc = 0x105828u;
            goto label_105828;
        }
    }
    ctx->pc = 0x10581Cu;
    // 0x10581c: 0xae200004
    ctx->pc = 0x10581cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x105820: 0x302d
    ctx->pc = 0x105820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105824: 0xc0802d
    ctx->pc = 0x105824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_105828:
    // 0x105828: 0x80902d
    ctx->pc = 0x105828u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10582c: 0x213102b
    ctx->pc = 0x10582cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x105830: 0x10400013
    ctx->pc = 0x105830u;
    {
        const bool branch_taken_0x105830 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x105834u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x105830) {
            ctx->pc = 0x105880u;
            goto label_105880;
        }
    }
    ctx->pc = 0x105838u;
    // 0x105838: 0x8e250000
    ctx->pc = 0x105838u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10583c: 0x0
    ctx->pc = 0x10583cu;
    // NOP
label_105840:
    // 0x105840: 0x240202d
    ctx->pc = 0x105840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105844: 0x200302d
    ctx->pc = 0x105844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105848: 0xc041eac
    ctx->pc = 0x105848u;
    SET_GPR_U32(ctx, 31, 0x105850u);
    ctx->pc = 0x10584Cu;
    SET_GPR_U32(ctx, 19, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105850u; }
    }
    if (ctx->pc != 0x105850u) { return; }
    ctx->pc = 0x105850u;
    // 0x105850: 0x8e230000
    ctx->pc = 0x105850u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x105854: 0x220202d
    ctx->pc = 0x105854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105858: 0x2509021
    ctx->pc = 0x105858u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x10585c: 0x701821
    ctx->pc = 0x10585cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x105860: 0xc042814
    ctx->pc = 0x105860u;
    SET_GPR_U32(ctx, 31, 0x105868u);
    ctx->pc = 0x105864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x10A050u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A050_0x10a050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105868u; }
    }
    if (ctx->pc != 0x105868u) { return; }
    ctx->pc = 0x105868u;
    // 0x105868: 0x1440ffe3
    ctx->pc = 0x105868u;
    {
        const bool branch_taken_0x105868 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10586Cu;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        if (branch_taken_0x105868) {
            ctx->pc = 0x1057F8u;
            goto label_1057f8;
        }
    }
    ctx->pc = 0x105870u;
    // 0x105870: 0x8e300004
    ctx->pc = 0x105870u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x105874: 0x213102b
    ctx->pc = 0x105874u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x105878: 0x5440fff1
    ctx->pc = 0x105878u;
    {
        const bool branch_taken_0x105878 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x105878) {
            ctx->pc = 0x10587Cu;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x105840u;
            goto label_105840;
        }
    }
    ctx->pc = 0x105880u;
label_105880:
    // 0x105880: 0x8e250000
    ctx->pc = 0x105880u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x105884: 0x240202d
    ctx->pc = 0x105884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105888: 0xc041eac
    ctx->pc = 0x105888u;
    SET_GPR_U32(ctx, 31, 0x105890u);
    ctx->pc = 0x10588Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105890u; }
    }
    if (ctx->pc != 0x105890u) { return; }
    ctx->pc = 0x105890u;
    // 0x105890: 0x8e230004
    ctx->pc = 0x105890u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x105894: 0x8e240000
    ctx->pc = 0x105894u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x105898: 0x2c0102d
    ctx->pc = 0x105898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10589c: 0x731823
    ctx->pc = 0x10589cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1058a0: 0x932021
    ctx->pc = 0x1058a0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1058a4: 0xae230004
    ctx->pc = 0x1058a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1058a8: 0xae240000
    ctx->pc = 0x1058a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_1058ac:
    // 0x1058ac: 0xdfb00000
    ctx->pc = 0x1058acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1058b0:
    // 0x1058b0: 0xdfb10008
    ctx->pc = 0x1058b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1058b4: 0xdfb20010
    ctx->pc = 0x1058b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1058b8: 0xdfb30018
    ctx->pc = 0x1058b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1058bc: 0xdfb40020
    ctx->pc = 0x1058bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1058c0: 0xdfb50028
    ctx->pc = 0x1058c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1058c4: 0xdfb60030
    ctx->pc = 0x1058c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1058c8: 0xdfbf0038
    ctx->pc = 0x1058c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1058cc: 0x3e00008
    ctx->pc = 0x1058CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1058D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1057F8u: goto label_1057f8;
            case 0x105800u: goto label_105800;
            case 0x105810u: goto label_105810;
            case 0x105828u: goto label_105828;
            case 0x105840u: goto label_105840;
            case 0x105880u: goto label_105880;
            case 0x1058ACu: goto label_1058ac;
            case 0x1058B0u: goto label_1058b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1058D4u;
    // 0x1058d4: 0x0
    ctx->pc = 0x1058d4u;
    // NOP
}
