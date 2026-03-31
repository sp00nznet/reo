#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00193790
// Address: 0x193790 - 0x193880
void sub_00193790_0x193790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x193790u;

label_193790:
    // 0x193790: 0x27bdff80
    ctx->pc = 0x193790u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x193794: 0xffbf0030
    ctx->pc = 0x193794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x193798: 0x7fb10020
    ctx->pc = 0x193798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x19379c: 0x7fb00010
    ctx->pc = 0x19379cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1937a0: 0x80882d
    ctx->pc = 0x1937a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1937a4: 0xe7b60008
    ctx->pc = 0x1937a4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1937a8: 0xa0802d
    ctx->pc = 0x1937a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1937ac: 0xe7b50004
    ctx->pc = 0x1937acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1937b0: 0x202d
    ctx->pc = 0x1937b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1937b4: 0xe7b40000
    ctx->pc = 0x1937b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1937b8: 0x46006586
    ctx->pc = 0x1937b8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x1937bc: 0x46006d46
    ctx->pc = 0x1937bcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x1937c0: 0x46007506
    ctx->pc = 0x1937c0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
label_1937c4:
    // 0x1937c4: 0x41080
    ctx->pc = 0x1937c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1937c8: 0x2221821
    ctx->pc = 0x1937c8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1937cc: 0x24840001
    ctx->pc = 0x1937ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1937d0: 0xc46000dc
    ctx->pc = 0x1937d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1937d4: 0x2882000a
    ctx->pc = 0x1937d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 10));
    // 0x1937d8: 0x1440fffa
    ctx->pc = 0x1937D8u;
    {
        const bool branch_taken_0x1937d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1937DCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
        if (branch_taken_0x1937d8) {
            ctx->pc = 0x1937C4u;
            goto label_1937c4;
        }
    }
    ctx->pc = 0x1937E0u;
    // 0x1937e0: 0x26240040
    ctx->pc = 0x1937e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 64));
    // 0x1937e4: 0x26250104
    ctx->pc = 0x1937e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 260));
    // 0x1937e8: 0x4600b306
    ctx->pc = 0x1937e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1937ec: 0x4600ab46
    ctx->pc = 0x1937ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1937f0: 0xc064e80
    ctx->pc = 0x1937F0u;
    SET_GPR_U32(ctx, 31, 0x1937F8u);
    ctx->pc = 0x1937F4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x193A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00193A00_0x193a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1937F8u; }
    }
    if (ctx->pc != 0x1937F8u) { return; }
    ctx->pc = 0x1937F8u;
    // 0x1937f8: 0x27a40040
    ctx->pc = 0x1937f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1937fc: 0x26250040
    ctx->pc = 0x1937fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 64));
    // 0x193800: 0xc0644a0
    ctx->pc = 0x193800u;
    SET_GPR_U32(ctx, 31, 0x193808u);
    ctx->pc = 0x193804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x191280u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00191280_0x191280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193808u; }
    }
    if (ctx->pc != 0x193808u) { return; }
    ctx->pc = 0x193808u;
    // 0x193808: 0x26240080
    ctx->pc = 0x193808u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 128));
    // 0x19380c: 0xc06450c
    ctx->pc = 0x19380Cu;
    SET_GPR_U32(ctx, 31, 0x193814u);
    ctx->pc = 0x193810u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x191430u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00191430_0x191430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193814u; }
    }
    if (ctx->pc != 0x193814u) { return; }
    ctx->pc = 0x193814u;
    // 0x193814: 0x8e2400d0
    ctx->pc = 0x193814u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x193818: 0x10800009
    ctx->pc = 0x193818u;
    {
        const bool branch_taken_0x193818 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x193818) {
            ctx->pc = 0x193840u;
            goto label_193840;
        }
    }
    ctx->pc = 0x193820u;
    // 0x193820: 0xc6220104
    ctx->pc = 0x193820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x193824: 0x27a50040
    ctx->pc = 0x193824u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 64));
    // 0x193828: 0xc6210108
    ctx->pc = 0x193828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19382c: 0xc620010c
    ctx->pc = 0x19382cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193830: 0x4602b302
    ctx->pc = 0x193830u;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
    // 0x193834: 0x4601ab42
    ctx->pc = 0x193834u;
    ctx->f[13] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x193838: 0xc064de4
    ctx->pc = 0x193838u;
    SET_GPR_U32(ctx, 31, 0x193840u);
    ctx->pc = 0x19383Cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->pc = 0x193790u;
    goto label_193790;
    ctx->pc = 0x193840u;
label_193840:
    // 0x193840: 0x8e2400cc
    ctx->pc = 0x193840u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x193844: 0x10800005
    ctx->pc = 0x193844u;
    {
        const bool branch_taken_0x193844 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x193848u;
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        if (branch_taken_0x193844) {
            ctx->pc = 0x19385Cu;
            goto label_19385c;
        }
    }
    ctx->pc = 0x19384Cu;
    // 0x19384c: 0x200282d
    ctx->pc = 0x19384cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193850: 0x4600ab46
    ctx->pc = 0x193850u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x193854: 0xc064de4
    ctx->pc = 0x193854u;
    SET_GPR_U32(ctx, 31, 0x19385Cu);
    ctx->pc = 0x193858u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x193790u;
    goto label_193790;
    ctx->pc = 0x19385Cu;
label_19385c:
    // 0x19385c: 0xdfbf0030
    ctx->pc = 0x19385cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193860: 0xc7b60008
    ctx->pc = 0x193860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x193864: 0x7bb10020
    ctx->pc = 0x193864u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193868: 0xc7b50004
    ctx->pc = 0x193868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x19386c: 0x7bb00010
    ctx->pc = 0x19386cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193870: 0xc7b40000
    ctx->pc = 0x193870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x193874: 0x24020001
    ctx->pc = 0x193874u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x193878: 0x3e00008
    ctx->pc = 0x193878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19387Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193790u: goto label_193790;
            case 0x1937C4u: goto label_1937c4;
            case 0x193840u: goto label_193840;
            case 0x19385Cu: goto label_19385c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193880u;
}
