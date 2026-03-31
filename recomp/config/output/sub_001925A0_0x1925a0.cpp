#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001925A0
// Address: 0x1925a0 - 0x192710
void sub_001925A0_0x1925a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1925a0u;

    // 0x1925a0: 0x27bdfff0
    ctx->pc = 0x1925a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1925a4: 0xffbf0000
    ctx->pc = 0x1925a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1925a8: 0xc063724
    ctx->pc = 0x1925A8u;
    SET_GPR_U32(ctx, 31, 0x1925B0u);
    ctx->pc = 0x18DC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DC90_0x18dc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1925B0u; }
    }
    if (ctx->pc != 0x1925B0u) { return; }
    ctx->pc = 0x1925B0u;
    // 0x1925b0: 0xdfbf0000
    ctx->pc = 0x1925b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1925b4: 0x24020001
    ctx->pc = 0x1925b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1925b8: 0x3e00008
    ctx->pc = 0x1925B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1925BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1925C0u;
    // 0x1925c0: 0x27bdff00
    ctx->pc = 0x1925c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1925c4: 0xffbf0040
    ctx->pc = 0x1925c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1925c8: 0x7fb20030
    ctx->pc = 0x1925c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1925cc: 0x7fb10020
    ctx->pc = 0x1925ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1925d0: 0x80902d
    ctx->pc = 0x1925d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1925d4: 0x7fb00010
    ctx->pc = 0x1925d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1925d8: 0xa0882d
    ctx->pc = 0x1925d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1925dc: 0xe7b50004
    ctx->pc = 0x1925dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1925e0: 0xe7b40000
    ctx->pc = 0x1925e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1925e4: 0x8ca400d4
    ctx->pc = 0x1925e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x1925e8: 0x46006546
    ctx->pc = 0x1925e8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1925ec: 0xc064914
    ctx->pc = 0x1925ECu;
    SET_GPR_U32(ctx, 31, 0x1925F4u);
    ctx->pc = 0x1925F0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    ctx->pc = 0x192450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00192450_0x192450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1925F4u; }
    }
    if (ctx->pc != 0x1925F4u) { return; }
    ctx->pc = 0x1925F4u;
    // 0x1925f4: 0x3c010029
    ctx->pc = 0x1925f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x1925f8: 0x8e2300d8
    ctx->pc = 0x1925f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x1925fc: 0x8c224168
    ctx->pc = 0x1925fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 16744)));
    // 0x192600: 0x4600ab06
    ctx->pc = 0x192600u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x192604: 0x262500dc
    ctx->pc = 0x192604u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 220));
    // 0x192608: 0x27a60050
    ctx->pc = 0x192608u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 80));
    // 0x19260c: 0x27a700c0
    ctx->pc = 0x19260cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 192));
    // 0x192610: 0x2628015c
    ctx->pc = 0x192610u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 17), 348));
    // 0x192614: 0x628021
    ctx->pc = 0x192614u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x192618: 0xc064b7c
    ctx->pc = 0x192618u;
    SET_GPR_U32(ctx, 31, 0x192620u);
    ctx->pc = 0x19261Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192DF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00192DF0_0x192df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192620u; }
    }
    if (ctx->pc != 0x192620u) { return; }
    ctx->pc = 0x192620u;
    // 0x192620: 0x200202d
    ctx->pc = 0x192620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192624: 0x262500dc
    ctx->pc = 0x192624u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 220));
    // 0x192628: 0x4600a306
    ctx->pc = 0x192628u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x19262c: 0x2628015c
    ctx->pc = 0x19262cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 17), 348));
    // 0x192630: 0x27a60050
    ctx->pc = 0x192630u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 80));
    // 0x192634: 0xc064b7c
    ctx->pc = 0x192634u;
    SET_GPR_U32(ctx, 31, 0x19263Cu);
    ctx->pc = 0x192638u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 128));
    ctx->pc = 0x192DF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00192DF0_0x192df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19263Cu; }
    }
    if (ctx->pc != 0x19263Cu) { return; }
    ctx->pc = 0x19263Cu;
    // 0x19263c: 0xc7a100b0
    ctx->pc = 0x19263cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192640: 0x24020001
    ctx->pc = 0x192640u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x192644: 0xc7a000f0
    ctx->pc = 0x192644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192648: 0x46000801
    ctx->pc = 0x192648u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x19264c: 0xe6400000
    ctx->pc = 0x19264cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x192650: 0xc7a100b4
    ctx->pc = 0x192650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192654: 0xc7a000f4
    ctx->pc = 0x192654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192658: 0x46000801
    ctx->pc = 0x192658u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x19265c: 0xe6400004
    ctx->pc = 0x19265cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x192660: 0xc7a100b8
    ctx->pc = 0x192660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192664: 0xc7a000f8
    ctx->pc = 0x192664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192668: 0x46000801
    ctx->pc = 0x192668u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x19266c: 0xe6400008
    ctx->pc = 0x19266cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x192670: 0xdfbf0040
    ctx->pc = 0x192670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x192674: 0xc7b50004
    ctx->pc = 0x192674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x192678: 0x7bb20030
    ctx->pc = 0x192678u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19267c: 0xc7b40000
    ctx->pc = 0x19267cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x192680: 0x7bb10020
    ctx->pc = 0x192680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192684: 0x7bb00010
    ctx->pc = 0x192684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192688: 0x3e00008
    ctx->pc = 0x192688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19268Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192690u;
    // 0x192690: 0x27bdffc0
    ctx->pc = 0x192690u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x192694: 0xffbf0030
    ctx->pc = 0x192694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x192698: 0x7fb10020
    ctx->pc = 0x192698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x19269c: 0x7fb00010
    ctx->pc = 0x19269cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1926a0: 0xc0882d
    ctx->pc = 0x1926a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1926a4: 0xe7b50004
    ctx->pc = 0x1926a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1926a8: 0xa0802d
    ctx->pc = 0x1926a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1926ac: 0xe7b40000
    ctx->pc = 0x1926acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1926b0: 0x220282d
    ctx->pc = 0x1926b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1926b4: 0x46006546
    ctx->pc = 0x1926b4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1926b8: 0xc064b44
    ctx->pc = 0x1926B8u;
    SET_GPR_U32(ctx, 31, 0x1926C0u);
    ctx->pc = 0x1926BCu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    ctx->pc = 0x192D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00192D10_0x192d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1926C0u; }
    }
    if (ctx->pc != 0x1926C0u) { return; }
    ctx->pc = 0x1926C0u;
    // 0x1926c0: 0x200202d
    ctx->pc = 0x1926c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1926c4: 0x220282d
    ctx->pc = 0x1926c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1926c8: 0xc064b44
    ctx->pc = 0x1926C8u;
    SET_GPR_U32(ctx, 31, 0x1926D0u);
    ctx->pc = 0x1926CCu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00192D10_0x192d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1926D0u; }
    }
    if (ctx->pc != 0x1926D0u) { return; }
    ctx->pc = 0x1926D0u;
    // 0x1926d0: 0x200202d
    ctx->pc = 0x1926d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1926d4: 0x40282d
    ctx->pc = 0x1926d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1926d8: 0x4600ab06
    ctx->pc = 0x1926d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1926dc: 0x220302d
    ctx->pc = 0x1926dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1926e0: 0xc0649c4
    ctx->pc = 0x1926E0u;
    SET_GPR_U32(ctx, 31, 0x1926E8u);
    ctx->pc = 0x1926E4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x192710u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00192710_0x192710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1926E8u; }
    }
    if (ctx->pc != 0x1926E8u) { return; }
    ctx->pc = 0x1926E8u;
    // 0x1926e8: 0xdfbf0030
    ctx->pc = 0x1926e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1926ec: 0xc7b50004
    ctx->pc = 0x1926ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1926f0: 0x7bb10020
    ctx->pc = 0x1926f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1926f4: 0xc7b40000
    ctx->pc = 0x1926f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1926f8: 0x7bb00010
    ctx->pc = 0x1926f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1926fc: 0x24020001
    ctx->pc = 0x1926fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x192700: 0x3e00008
    ctx->pc = 0x192700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192704u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192708u;
    // 0x192708: 0x0
    ctx->pc = 0x192708u;
    // NOP
    // 0x19270c: 0x0
    ctx->pc = 0x19270cu;
    // NOP
}
