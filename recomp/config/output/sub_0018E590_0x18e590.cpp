#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018E590
// Address: 0x18e590 - 0x18e660
void sub_0018E590_0x18e590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18e590u;

    // 0x18e590: 0x27bdffc0
    ctx->pc = 0x18e590u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18e594: 0xffbf0020
    ctx->pc = 0x18e594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18e598: 0x27a60038
    ctx->pc = 0x18e598u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 56));
    // 0x18e59c: 0x7fb00010
    ctx->pc = 0x18e59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18e5a0: 0xe7b40000
    ctx->pc = 0x18e5a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18e5a4: 0xa0802d
    ctx->pc = 0x18e5a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e5a8: 0xafa0003c
    ctx->pc = 0x18e5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x18e5ac: 0x46006506
    ctx->pc = 0x18e5acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x18e5b0: 0xafa00038
    ctx->pc = 0x18e5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x18e5b4: 0x86070000
    ctx->pc = 0x18e5b4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18e5b8: 0xc063aec
    ctx->pc = 0x18E5B8u;
    SET_GPR_U32(ctx, 31, 0x18E5C0u);
    ctx->pc = 0x18E5BCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 60));
    ctx->pc = 0x18EBB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018EBB0_0x18ebb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E5C0u; }
    }
    if (ctx->pc != 0x18E5C0u) { return; }
    ctx->pc = 0x18E5C0u;
    // 0x18e5c0: 0xa6020000
    ctx->pc = 0x18e5c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18e5c4: 0x8fa50038
    ctx->pc = 0x18e5c4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x18e5c8: 0x14a00004
    ctx->pc = 0x18E5C8u;
    {
        const bool branch_taken_0x18e5c8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x18e5c8) {
            ctx->pc = 0x18E5DCu;
            goto label_18e5dc;
        }
    }
    ctx->pc = 0x18E5D0u;
    // 0x18e5d0: 0x8fa2003c
    ctx->pc = 0x18e5d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x18e5d4: 0x1000001d
    ctx->pc = 0x18E5D4u;
    {
        const bool branch_taken_0x18e5d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18E5D8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x18e5d4) {
            ctx->pc = 0x18E64Cu;
            goto label_18e64c;
        }
    }
    ctx->pc = 0x18E5DCu;
label_18e5dc:
    // 0x18e5dc: 0x8fa4003c
    ctx->pc = 0x18e5dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x18e5e0: 0x3c020002
    ctx->pc = 0x18e5e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x18e5e4: 0x8c830000
    ctx->pc = 0x18e5e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18e5e8: 0x1062000d
    ctx->pc = 0x18E5E8u;
    {
        const bool branch_taken_0x18e5e8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x18E5ECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
        if (branch_taken_0x18e5e8) {
            ctx->pc = 0x18E620u;
            goto label_18e620;
        }
    }
    ctx->pc = 0x18E5F0u;
    // 0x18e5f0: 0x10620003
    ctx->pc = 0x18E5F0u;
    {
        const bool branch_taken_0x18e5f0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x18e5f0) {
            ctx->pc = 0x18E600u;
            goto label_18e600;
        }
    }
    ctx->pc = 0x18E5F8u;
    // 0x18e5f8: 0x10000013
    ctx->pc = 0x18E5F8u;
    {
        const bool branch_taken_0x18e5f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x18e5f8) {
            ctx->pc = 0x18E648u;
            goto label_18e648;
        }
    }
    ctx->pc = 0x18E600u;
label_18e600:
    // 0x18e600: 0xc48d0004
    ctx->pc = 0x18e600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x18e604: 0xc48e0008
    ctx->pc = 0x18e604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x18e608: 0xc4af0004
    ctx->pc = 0x18e608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x18e60c: 0xc4b00008
    ctx->pc = 0x18e60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x18e610: 0xc063c78
    ctx->pc = 0x18E610u;
    SET_GPR_U32(ctx, 31, 0x18E618u);
    ctx->pc = 0x18E614u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x18F1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F1E0_0x18f1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E618u; }
    }
    if (ctx->pc != 0x18E618u) { return; }
    ctx->pc = 0x18E618u;
    // 0x18e618: 0x1000000d
    ctx->pc = 0x18E618u;
    {
        const bool branch_taken_0x18e618 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18E61Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x18e618) {
            ctx->pc = 0x18E650u;
            goto label_18e650;
        }
    }
    ctx->pc = 0x18E620u;
label_18e620:
    // 0x18e620: 0xc48d0004
    ctx->pc = 0x18e620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x18e624: 0xc48e0008
    ctx->pc = 0x18e624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x18e628: 0xc48f0010
    ctx->pc = 0x18e628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x18e62c: 0xc4b00004
    ctx->pc = 0x18e62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x18e630: 0xc4b10008
    ctx->pc = 0x18e630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x18e634: 0xc4b2000c
    ctx->pc = 0x18e634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x18e638: 0xc063c98
    ctx->pc = 0x18E638u;
    SET_GPR_U32(ctx, 31, 0x18E640u);
    ctx->pc = 0x18E63Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x18F260u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F260_0x18f260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E640u; }
    }
    if (ctx->pc != 0x18E640u) { return; }
    ctx->pc = 0x18E640u;
    // 0x18e640: 0x10000002
    ctx->pc = 0x18E640u;
    {
        const bool branch_taken_0x18e640 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x18e640) {
            ctx->pc = 0x18E64Cu;
            goto label_18e64c;
        }
    }
    ctx->pc = 0x18E648u;
label_18e648:
    // 0x18e648: 0x44800000
    ctx->pc = 0x18e648u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_18e64c:
    // 0x18e64c: 0xdfbf0020
    ctx->pc = 0x18e64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18e650:
    // 0x18e650: 0xc7b40000
    ctx->pc = 0x18e650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18e654: 0x7bb00010
    ctx->pc = 0x18e654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e658: 0x3e00008
    ctx->pc = 0x18E658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E65Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18E5DCu: goto label_18e5dc;
            case 0x18E600u: goto label_18e600;
            case 0x18E620u: goto label_18e620;
            case 0x18E648u: goto label_18e648;
            case 0x18E64Cu: goto label_18e64c;
            case 0x18E650u: goto label_18e650;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18E660u;
}
