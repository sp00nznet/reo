#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_003707A0
// Address: 0x3707a0 - 0x370960
void sub_003707A0_0x3707a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3707a0u;

    // 0x3707a0: 0x27bdffb0
    ctx->pc = 0x3707a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3707a4: 0xffbf0040
    ctx->pc = 0x3707a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3707a8: 0x7fb30030
    ctx->pc = 0x3707a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3707ac: 0x7fb20020
    ctx->pc = 0x3707acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3707b0: 0x80982d
    ctx->pc = 0x3707b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3707b4: 0x7fb10010
    ctx->pc = 0x3707b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3707b8: 0xa0902d
    ctx->pc = 0x3707b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3707bc: 0x7fb00000
    ctx->pc = 0x3707bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3707c0: 0xc0882d
    ctx->pc = 0x3707c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3707c4: 0xc0dc1d8
    ctx->pc = 0x3707C4u;
    SET_GPR_U32(ctx, 31, 0x3707CCu);
    ctx->pc = 0x3707C8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x370760u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370760_0x370760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3707CCu; }
    }
    if (ctx->pc != 0x3707CCu) { return; }
    ctx->pc = 0x3707CCu;
    // 0x3707cc: 0x14400003
    ctx->pc = 0x3707CCu;
    {
        const bool branch_taken_0x3707cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x3707cc) {
            ctx->pc = 0x3707DCu;
            goto label_3707dc;
        }
    }
    ctx->pc = 0x3707D4u;
    // 0x3707d4: 0x1000002e
    ctx->pc = 0x3707D4u;
    {
        const bool branch_taken_0x3707d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3707D8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x3707d4) {
            ctx->pc = 0x370890u;
            goto label_370890;
        }
    }
    ctx->pc = 0x3707DCu;
label_3707dc:
    // 0x3707dc: 0x4410016
    ctx->pc = 0x3707DCu;
    {
        const bool branch_taken_0x3707dc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3707E0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x3707dc) {
            ctx->pc = 0x370838u;
            goto label_370838;
        }
    }
    ctx->pc = 0x3707E4u;
    // 0x3707e4: 0x260202d
    ctx->pc = 0x3707e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3707e8: 0x240282d
    ctx->pc = 0x3707e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3707ec: 0xc0dc1d8
    ctx->pc = 0x3707ECu;
    SET_GPR_U32(ctx, 31, 0x3707F4u);
    ctx->pc = 0x3707F0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x370760u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370760_0x370760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3707F4u; }
    }
    if (ctx->pc != 0x3707F4u) { return; }
    ctx->pc = 0x3707F4u;
    // 0x3707f4: 0x18400003
    ctx->pc = 0x3707F4u;
    {
        const bool branch_taken_0x3707f4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3707F8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x3707f4) {
            ctx->pc = 0x370804u;
            goto label_370804;
        }
    }
    ctx->pc = 0x3707FCu;
    // 0x3707fc: 0x10000024
    ctx->pc = 0x3707FCu;
    {
        const bool branch_taken_0x3707fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x370800u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x3707fc) {
            ctx->pc = 0x370890u;
            goto label_370890;
        }
    }
    ctx->pc = 0x370804u;
label_370804:
    // 0x370804: 0x220282d
    ctx->pc = 0x370804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370808: 0xc0dc1d8
    ctx->pc = 0x370808u;
    SET_GPR_U32(ctx, 31, 0x370810u);
    ctx->pc = 0x37080Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x370760u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370760_0x370760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370810u; }
    }
    if (ctx->pc != 0x370810u) { return; }
    ctx->pc = 0x370810u;
    // 0x370810: 0x18400003
    ctx->pc = 0x370810u;
    {
        const bool branch_taken_0x370810 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x370814u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x370810) {
            ctx->pc = 0x370820u;
            goto label_370820;
        }
    }
    ctx->pc = 0x370818u;
    // 0x370818: 0x1000001d
    ctx->pc = 0x370818u;
    {
        const bool branch_taken_0x370818 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37081Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x370818) {
            ctx->pc = 0x370890u;
            goto label_370890;
        }
    }
    ctx->pc = 0x370820u;
label_370820:
    // 0x370820: 0x260282d
    ctx->pc = 0x370820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370824: 0xc0dc1d8
    ctx->pc = 0x370824u;
    SET_GPR_U32(ctx, 31, 0x37082Cu);
    ctx->pc = 0x370828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x370760u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370760_0x370760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37082Cu; }
    }
    if (ctx->pc != 0x37082Cu) { return; }
    ctx->pc = 0x37082Cu;
    // 0x37082c: 0x2102a
    ctx->pc = 0x37082cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 2)));
    // 0x370830: 0x10000017
    ctx->pc = 0x370830u;
    {
        const bool branch_taken_0x370830 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x370834u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x370830) {
            ctx->pc = 0x370890u;
            goto label_370890;
        }
    }
    ctx->pc = 0x370838u;
label_370838:
    // 0x370838: 0x240282d
    ctx->pc = 0x370838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37083c: 0xc0dc1d8
    ctx->pc = 0x37083Cu;
    SET_GPR_U32(ctx, 31, 0x370844u);
    ctx->pc = 0x370840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x370760u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370760_0x370760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370844u; }
    }
    if (ctx->pc != 0x370844u) { return; }
    ctx->pc = 0x370844u;
    // 0x370844: 0x4410003
    ctx->pc = 0x370844u;
    {
        const bool branch_taken_0x370844 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x370848u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x370844) {
            ctx->pc = 0x370854u;
            goto label_370854;
        }
    }
    ctx->pc = 0x37084Cu;
    // 0x37084c: 0x10000010
    ctx->pc = 0x37084Cu;
    {
        const bool branch_taken_0x37084c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x370850u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37084c) {
            ctx->pc = 0x370890u;
            goto label_370890;
        }
    }
    ctx->pc = 0x370854u;
label_370854:
    // 0x370854: 0x220282d
    ctx->pc = 0x370854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370858: 0xc0dc1d8
    ctx->pc = 0x370858u;
    SET_GPR_U32(ctx, 31, 0x370860u);
    ctx->pc = 0x37085Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x370760u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370760_0x370760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370860u; }
    }
    if (ctx->pc != 0x370860u) { return; }
    ctx->pc = 0x370860u;
    // 0x370860: 0x4410003
    ctx->pc = 0x370860u;
    {
        const bool branch_taken_0x370860 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x370864u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x370860) {
            ctx->pc = 0x370870u;
            goto label_370870;
        }
    }
    ctx->pc = 0x370868u;
    // 0x370868: 0x10000009
    ctx->pc = 0x370868u;
    {
        const bool branch_taken_0x370868 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37086Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x370868) {
            ctx->pc = 0x370890u;
            goto label_370890;
        }
    }
    ctx->pc = 0x370870u;
label_370870:
    // 0x370870: 0x260282d
    ctx->pc = 0x370870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370874: 0xc0dc1d8
    ctx->pc = 0x370874u;
    SET_GPR_U32(ctx, 31, 0x37087Cu);
    ctx->pc = 0x370878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x370760u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370760_0x370760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37087Cu; }
    }
    if (ctx->pc != 0x37087Cu) { return; }
    ctx->pc = 0x37087Cu;
    // 0x37087c: 0x4410003
    ctx->pc = 0x37087Cu;
    {
        const bool branch_taken_0x37087c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x37087c) {
            ctx->pc = 0x37088Cu;
            goto label_37088c;
        }
    }
    ctx->pc = 0x370884u;
    // 0x370884: 0x10000002
    ctx->pc = 0x370884u;
    {
        const bool branch_taken_0x370884 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x370888u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x370884) {
            ctx->pc = 0x370890u;
            goto label_370890;
        }
    }
    ctx->pc = 0x37088Cu;
label_37088c:
    // 0x37088c: 0x24020002
    ctx->pc = 0x37088cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_370890:
    // 0x370890: 0xdfbf0040
    ctx->pc = 0x370890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x370894: 0x7bb30030
    ctx->pc = 0x370894u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x370898: 0x7bb20020
    ctx->pc = 0x370898u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37089c: 0x7bb10010
    ctx->pc = 0x37089cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3708a0: 0x7bb00000
    ctx->pc = 0x3708a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3708a4: 0x3e00008
    ctx->pc = 0x3708A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3708A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3707DCu: goto label_3707dc;
            case 0x370804u: goto label_370804;
            case 0x370820u: goto label_370820;
            case 0x370838u: goto label_370838;
            case 0x370854u: goto label_370854;
            case 0x370870u: goto label_370870;
            case 0x37088Cu: goto label_37088c;
            case 0x370890u: goto label_370890;
            case 0x370900u: goto label_370900;
            case 0x370920u: goto label_370920;
            case 0x370940u: goto label_370940;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3708ACu;
    // 0x3708ac: 0x0
    ctx->pc = 0x3708acu;
    // NOP
    // 0x3708b0: 0x27bdffd0
    ctx->pc = 0x3708b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3708b4: 0xffbf0020
    ctx->pc = 0x3708b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3708b8: 0x7fb10010
    ctx->pc = 0x3708b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3708bc: 0x7fb00000
    ctx->pc = 0x3708bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3708c0: 0x80882d
    ctx->pc = 0x3708c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3708c4: 0xc4a00000
    ctx->pc = 0x3708c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3708c8: 0xe4800000
    ctx->pc = 0x3708c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3708cc: 0xc4a00004
    ctx->pc = 0x3708ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3708d0: 0xe4800004
    ctx->pc = 0x3708d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x3708d4: 0xc4a00008
    ctx->pc = 0x3708d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3708d8: 0xe4800008
    ctx->pc = 0x3708d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x3708dc: 0xc4ac0000
    ctx->pc = 0x3708dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3708e0: 0xc064828
    ctx->pc = 0x3708E0u;
    SET_GPR_U32(ctx, 31, 0x3708E8u);
    ctx->pc = 0x3708E4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1920A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1920A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3708E8u; }
        if (ctx->pc != 0x3708E8u) { return; }
    }
    ctx->pc = 0x3708E8u;
    // 0x3708e8: 0x3c010039
    ctx->pc = 0x3708e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)57 << 16));
    // 0x3708ec: 0xc421b280
    ctx->pc = 0x3708ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294947456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3708f0: 0x46010034
    ctx->pc = 0x3708f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3708f4: 0x45000002
    ctx->pc = 0x3708F4u;
    {
        const bool branch_taken_0x3708f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3708f4) {
            ctx->pc = 0x370900u;
            goto label_370900;
        }
    }
    ctx->pc = 0x3708FCu;
    // 0x3708fc: 0xae200000
    ctx->pc = 0x3708fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_370900:
    // 0x370900: 0xc064828
    ctx->pc = 0x370900u;
    SET_GPR_U32(ctx, 31, 0x370908u);
    ctx->pc = 0x370904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1920A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1920A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370908u; }
        if (ctx->pc != 0x370908u) { return; }
    }
    ctx->pc = 0x370908u;
    // 0x370908: 0x3c010039
    ctx->pc = 0x370908u;
    SET_GPR_U32(ctx, 1, ((uint32_t)57 << 16));
    // 0x37090c: 0xc421b280
    ctx->pc = 0x37090cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294947456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370910: 0x46010034
    ctx->pc = 0x370910u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x370914: 0x45000002
    ctx->pc = 0x370914u;
    {
        const bool branch_taken_0x370914 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x370914) {
            ctx->pc = 0x370920u;
            goto label_370920;
        }
    }
    ctx->pc = 0x37091Cu;
    // 0x37091c: 0xae200004
    ctx->pc = 0x37091cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_370920:
    // 0x370920: 0xc064828
    ctx->pc = 0x370920u;
    SET_GPR_U32(ctx, 31, 0x370928u);
    ctx->pc = 0x370924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1920A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1920A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370928u; }
        if (ctx->pc != 0x370928u) { return; }
    }
    ctx->pc = 0x370928u;
    // 0x370928: 0x3c010039
    ctx->pc = 0x370928u;
    SET_GPR_U32(ctx, 1, ((uint32_t)57 << 16));
    // 0x37092c: 0xc421b280
    ctx->pc = 0x37092cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294947456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370930: 0x46010034
    ctx->pc = 0x370930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x370934: 0x45000002
    ctx->pc = 0x370934u;
    {
        const bool branch_taken_0x370934 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x370934) {
            ctx->pc = 0x370940u;
            goto label_370940;
        }
    }
    ctx->pc = 0x37093Cu;
    // 0x37093c: 0xae200008
    ctx->pc = 0x37093cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_370940:
    // 0x370940: 0xdfbf0020
    ctx->pc = 0x370940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x370944: 0x7bb10010
    ctx->pc = 0x370944u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x370948: 0x7bb00000
    ctx->pc = 0x370948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37094c: 0x3e00008
    ctx->pc = 0x37094Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370950u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3707DCu: goto label_3707dc;
            case 0x370804u: goto label_370804;
            case 0x370820u: goto label_370820;
            case 0x370838u: goto label_370838;
            case 0x370854u: goto label_370854;
            case 0x370870u: goto label_370870;
            case 0x37088Cu: goto label_37088c;
            case 0x370890u: goto label_370890;
            case 0x370900u: goto label_370900;
            case 0x370920u: goto label_370920;
            case 0x370940u: goto label_370940;
            default: break;
        }
        return;
    }
    ctx->pc = 0x370954u;
    // 0x370954: 0x0
    ctx->pc = 0x370954u;
    // NOP
    // 0x370958: 0x0
    ctx->pc = 0x370958u;
    // NOP
    // 0x37095c: 0x0
    ctx->pc = 0x37095cu;
    // NOP
}
