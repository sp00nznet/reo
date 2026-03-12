#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00374780
// Address: 0x374780 - 0x3748a0
void sub_00374780_0x374780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x374780u;

    // 0x374780: 0x27bdffd0
    ctx->pc = 0x374780u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x374784: 0xffbf0010
    ctx->pc = 0x374784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x374788: 0x7fb00000
    ctx->pc = 0x374788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37478c: 0x80830001
    ctx->pc = 0x37478cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x374790: 0x1060003b
    ctx->pc = 0x374790u;
    {
        const bool branch_taken_0x374790 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x374794u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x374790) {
            ctx->pc = 0x374880u;
            goto label_374880;
        }
    }
    ctx->pc = 0x374798u;
    // 0x374798: 0x96050882
    ctx->pc = 0x374798u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2178)));
    // 0x37479c: 0x26080070
    ctx->pc = 0x37479cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 112));
    // 0x3747a0: 0x382d
    ctx->pc = 0x3747a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3747a4: 0x302d
    ctx->pc = 0x3747a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3747a8: 0x10000016
    ctx->pc = 0x3747A8u;
    {
        const bool branch_taken_0x3747a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3747ACu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x3747a8) {
            ctx->pc = 0x374804u;
            goto label_374804;
        }
    }
    ctx->pc = 0x3747B0u;
label_3747b0:
    // 0x3747b0: 0x8d020808
    ctx->pc = 0x3747b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 2056)));
    // 0x3747b4: 0x620c0
    ctx->pc = 0x3747b4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 6), 3));
    // 0x3747b8: 0x862021
    ctx->pc = 0x3747b8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3747bc: 0x42040
    ctx->pc = 0x3747bcu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    // 0x3747c0: 0x862021
    ctx->pc = 0x3747c0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3747c4: 0x420c0
    ctx->pc = 0x3747c4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 3));
    // 0x3747c8: 0x442021
    ctx->pc = 0x3747c8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3747cc: 0x8c820000
    ctx->pc = 0x3747ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3747d0: 0x1043000b
    ctx->pc = 0x3747D0u;
    {
        const bool branch_taken_0x3747d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x3747d0) {
            ctx->pc = 0x374800u;
            goto label_374800;
        }
    }
    ctx->pc = 0x3747D8u;
    // 0x3747d8: 0x10400009
    ctx->pc = 0x3747D8u;
    {
        const bool branch_taken_0x3747d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x3747d8) {
            ctx->pc = 0x374800u;
            goto label_374800;
        }
    }
    ctx->pc = 0x3747E0u;
    // 0x3747e0: 0x2061021
    ctx->pc = 0x3747e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x3747e4: 0x90420008
    ctx->pc = 0x3747e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3747e8: 0x10400005
    ctx->pc = 0x3747E8u;
    {
        const bool branch_taken_0x3747e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x3747e8) {
            ctx->pc = 0x374800u;
            goto label_374800;
        }
    }
    ctx->pc = 0x3747F0u;
    // 0x3747f0: 0x90820088
    ctx->pc = 0x3747f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x3747f4: 0x10400002
    ctx->pc = 0x3747F4u;
    {
        const bool branch_taken_0x3747f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x3747f4) {
            ctx->pc = 0x374800u;
            goto label_374800;
        }
    }
    ctx->pc = 0x3747FCu;
    // 0x3747fc: 0x24070001
    ctx->pc = 0x3747fcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
label_374800:
    // 0x374800: 0x24c60001
    ctx->pc = 0x374800u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_374804:
    // 0x374804: 0xc5102a
    ctx->pc = 0x374804u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 5)));
    // 0x374808: 0x1440ffe9
    ctx->pc = 0x374808u;
    {
        const bool branch_taken_0x374808 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x374808) {
            ctx->pc = 0x3747B0u;
            goto label_3747b0;
        }
    }
    ctx->pc = 0x374810u;
    // 0x374810: 0x10e00019
    ctx->pc = 0x374810u;
    {
        const bool branch_taken_0x374810 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x374814u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x374810) {
            ctx->pc = 0x374878u;
            goto label_374878;
        }
    }
    ctx->pc = 0x374818u;
    // 0x374818: 0x8e020890
    ctx->pc = 0x374818u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2192)));
    // 0x37481c: 0x844200c2
    ctx->pc = 0x37481cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 194)));
    // 0x374820: 0x28420002
    ctx->pc = 0x374820u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x374824: 0x14400006
    ctx->pc = 0x374824u;
    {
        const bool branch_taken_0x374824 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x374824) {
            ctx->pc = 0x374840u;
            goto label_374840;
        }
    }
    ctx->pc = 0x37482Cu;
    // 0x37482c: 0x8e050898
    ctx->pc = 0x37482cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 2200)));
    // 0x374830: 0xc064038
    ctx->pc = 0x374830u;
    SET_GPR_U32(ctx, 31, 0x374838u);
    ctx->pc = 0x374834u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1900E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1900E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374838u; }
        if (ctx->pc != 0x374838u) { return; }
    }
    ctx->pc = 0x374838u;
    // 0x374838: 0x10000008
    ctx->pc = 0x374838u;
    {
        const bool branch_taken_0x374838 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x374838) {
            ctx->pc = 0x37485Cu;
            goto label_37485c;
        }
    }
    ctx->pc = 0x374840u;
label_374840:
    // 0x374840: 0xc6020020
    ctx->pc = 0x374840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x374844: 0x27a20020
    ctx->pc = 0x374844u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 32));
    // 0x374848: 0xc6010024
    ctx->pc = 0x374848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37484c: 0xc6000028
    ctx->pc = 0x37484cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374850: 0xe4420000
    ctx->pc = 0x374850u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x374854: 0xe4410004
    ctx->pc = 0x374854u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x374858: 0xe4400008
    ctx->pc = 0x374858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_37485c:
    // 0x37485c: 0x3c040037
    ctx->pc = 0x37485cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
    // 0x374860: 0x200282d
    ctx->pc = 0x374860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374864: 0x24844890
    ctx->pc = 0x374864u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18576));
    // 0x374868: 0xc06c8f8
    ctx->pc = 0x374868u;
    SET_GPR_U32(ctx, 31, 0x374870u);
    ctx->pc = 0x37486Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1B23E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1B23E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374870u; }
        if (ctx->pc != 0x374870u) { return; }
    }
    ctx->pc = 0x374870u;
    // 0x374870: 0x10000004
    ctx->pc = 0x374870u;
    {
        const bool branch_taken_0x374870 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x374874u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x374870) {
            ctx->pc = 0x374884u;
            goto label_374884;
        }
    }
    ctx->pc = 0x374878u;
label_374878:
    // 0x374878: 0xc0dd228
    ctx->pc = 0x374878u;
    SET_GPR_U32(ctx, 31, 0x374880u);
    ctx->pc = 0x3748A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_003748A0_0x3748a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374880u; }
    }
    if (ctx->pc != 0x374880u) { return; }
    ctx->pc = 0x374880u;
label_374880:
    // 0x374880: 0xdfbf0010
    ctx->pc = 0x374880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_374884:
    // 0x374884: 0x7bb00000
    ctx->pc = 0x374884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374888: 0x3e00008
    ctx->pc = 0x374888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37488Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3747B0u: goto label_3747b0;
            case 0x374800u: goto label_374800;
            case 0x374804u: goto label_374804;
            case 0x374840u: goto label_374840;
            case 0x37485Cu: goto label_37485c;
            case 0x374878u: goto label_374878;
            case 0x374880u: goto label_374880;
            case 0x374884u: goto label_374884;
            default: break;
        }
        return;
    }
    ctx->pc = 0x374890u;
    // 0x374890: 0x80dd228
    ctx->pc = 0x374890u;
    ctx->pc = 0x374894u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    ctx->pc = 0x3748A0u;
    sub_003748A0_0x3748a0(rdram, ctx, runtime); return;
    ctx->pc = 0x374898u;
    // 0x374898: 0x0
    ctx->pc = 0x374898u;
    // NOP
    // 0x37489c: 0x0
    ctx->pc = 0x37489cu;
    // NOP
}
