#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00370FE0
// Address: 0x370fe0 - 0x371160
void sub_00370FE0_0x370fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x370fe0u;

    // 0x370fe0: 0x27bdffb0
    ctx->pc = 0x370fe0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x370fe4: 0x80102d
    ctx->pc = 0x370fe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370fe8: 0xffbf0030
    ctx->pc = 0x370fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x370fec: 0x27a40040
    ctx->pc = 0x370fecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x370ff0: 0x7fb10020
    ctx->pc = 0x370ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x370ff4: 0x7fb00010
    ctx->pc = 0x370ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x370ff8: 0xa0882d
    ctx->pc = 0x370ff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370ffc: 0xe7b40000
    ctx->pc = 0x370ffcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x371000: 0xc0802d
    ctx->pc = 0x371000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371004: 0x46006506
    ctx->pc = 0x371004u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x371008: 0xc0647b4
    ctx->pc = 0x371008u;
    SET_GPR_U32(ctx, 31, 0x371010u);
    ctx->pc = 0x37100Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x191ED0u;
    {
        auto targetFn = runtime->lookupFunction(0x191ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371010u; }
        if (ctx->pc != 0x371010u) { return; }
    }
    ctx->pc = 0x371010u;
    // 0x371010: 0xc064760
    ctx->pc = 0x371010u;
    SET_GPR_U32(ctx, 31, 0x371018u);
    ctx->pc = 0x371014u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x191D80u;
    {
        auto targetFn = runtime->lookupFunction(0x191D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371018u; }
        if (ctx->pc != 0x371018u) { return; }
    }
    ctx->pc = 0x371018u;
    // 0x371018: 0xc7a00040
    ctx->pc = 0x371018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37101c: 0xc6210000
    ctx->pc = 0x37101cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371020: 0x46140002
    ctx->pc = 0x371020u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x371024: 0x46000800
    ctx->pc = 0x371024u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x371028: 0xe6000000
    ctx->pc = 0x371028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x37102c: 0xc7a00044
    ctx->pc = 0x37102cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371030: 0xc6210004
    ctx->pc = 0x371030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371034: 0x46140002
    ctx->pc = 0x371034u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x371038: 0x46000800
    ctx->pc = 0x371038u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x37103c: 0xe6000004
    ctx->pc = 0x37103cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x371040: 0xc7a00048
    ctx->pc = 0x371040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371044: 0xc6210008
    ctx->pc = 0x371044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371048: 0x46140002
    ctx->pc = 0x371048u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x37104c: 0x46000800
    ctx->pc = 0x37104cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x371050: 0xe6000008
    ctx->pc = 0x371050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x371054: 0xdfbf0030
    ctx->pc = 0x371054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x371058: 0xc7b40000
    ctx->pc = 0x371058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x37105c: 0x7bb10020
    ctx->pc = 0x37105cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x371060: 0x7bb00010
    ctx->pc = 0x371060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x371064: 0x3e00008
    ctx->pc = 0x371064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371068u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3710C0u: goto label_3710c0;
            case 0x371104u: goto label_371104;
            case 0x371120u: goto label_371120;
            case 0x371138u: goto label_371138;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37106Cu;
    // 0x37106c: 0x0
    ctx->pc = 0x37106cu;
    // NOP
    // 0x371070: 0x27bdff80
    ctx->pc = 0x371070u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x371074: 0xffbf0040
    ctx->pc = 0x371074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x371078: 0x27a70050
    ctx->pc = 0x371078u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 80));
    // 0x37107c: 0x7fb20030
    ctx->pc = 0x37107cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x371080: 0x7fb10020
    ctx->pc = 0x371080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x371084: 0x80902d
    ctx->pc = 0x371084u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371088: 0x7fb00010
    ctx->pc = 0x371088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37108c: 0xa0882d
    ctx->pc = 0x37108cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371090: 0xe7b40000
    ctx->pc = 0x371090u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x371094: 0xc0802d
    ctx->pc = 0x371094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371098: 0xc0dc458
    ctx->pc = 0x371098u;
    SET_GPR_U32(ctx, 31, 0x3710A0u);
    ctx->pc = 0x37109Cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x371160u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00371160_0x371160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3710A0u; }
    }
    if (ctx->pc != 0x3710A0u) { return; }
    ctx->pc = 0x3710A0u;
    // 0x3710a0: 0x27a40050
    ctx->pc = 0x3710a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x3710a4: 0xc064744
    ctx->pc = 0x3710A4u;
    SET_GPR_U32(ctx, 31, 0x3710ACu);
    ctx->pc = 0x3710A8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x191D10u;
    {
        auto targetFn = runtime->lookupFunction(0x191D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3710ACu; }
        if (ctx->pc != 0x3710ACu) { return; }
    }
    ctx->pc = 0x3710ACu;
    // 0x3710ac: 0x46140036
    ctx->pc = 0x3710acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3710b0: 0x45010003
    ctx->pc = 0x3710B0u;
    {
        const bool branch_taken_0x3710b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3710B4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 112));
        if (branch_taken_0x3710b0) {
            ctx->pc = 0x3710C0u;
            goto label_3710c0;
        }
    }
    ctx->pc = 0x3710B8u;
    // 0x3710b8: 0x1000001f
    ctx->pc = 0x3710B8u;
    {
        const bool branch_taken_0x3710b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3710BCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x3710b8) {
            ctx->pc = 0x371138u;
            goto label_371138;
        }
    }
    ctx->pc = 0x3710C0u;
label_3710c0:
    // 0x3710c0: 0x240282d
    ctx->pc = 0x3710c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3710c4: 0xc0dc108
    ctx->pc = 0x3710C4u;
    SET_GPR_U32(ctx, 31, 0x3710CCu);
    ctx->pc = 0x3710C8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x370420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370420_0x370420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3710CCu; }
    }
    if (ctx->pc != 0x3710CCu) { return; }
    ctx->pc = 0x3710CCu;
    // 0x3710cc: 0x27a40060
    ctx->pc = 0x3710ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    // 0x3710d0: 0x220282d
    ctx->pc = 0x3710d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3710d4: 0xc0dc108
    ctx->pc = 0x3710D4u;
    SET_GPR_U32(ctx, 31, 0x3710DCu);
    ctx->pc = 0x3710D8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x370420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370420_0x370420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3710DCu; }
    }
    if (ctx->pc != 0x3710DCu) { return; }
    ctx->pc = 0x3710DCu;
    // 0x3710dc: 0x27a40070
    ctx->pc = 0x3710dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 112));
    // 0x3710e0: 0xc06477c
    ctx->pc = 0x3710E0u;
    SET_GPR_U32(ctx, 31, 0x3710E8u);
    ctx->pc = 0x3710E4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x191DF0u;
    {
        auto targetFn = runtime->lookupFunction(0x191DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3710E8u; }
        if (ctx->pc != 0x3710E8u) { return; }
    }
    ctx->pc = 0x3710E8u;
    // 0x3710e8: 0x44800800
    ctx->pc = 0x3710e8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x3710ec: 0x0
    ctx->pc = 0x3710ecu;
    // NOP
    // 0x3710f0: 0x46010034
    ctx->pc = 0x3710f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3710f4: 0x45000003
    ctx->pc = 0x3710F4u;
    {
        const bool branch_taken_0x3710f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3710F8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x3710f4) {
            ctx->pc = 0x371104u;
            goto label_371104;
        }
    }
    ctx->pc = 0x3710FCu;
    // 0x3710fc: 0x1000000e
    ctx->pc = 0x3710FCu;
    {
        const bool branch_taken_0x3710fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x371100u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x3710fc) {
            ctx->pc = 0x371138u;
            goto label_371138;
        }
    }
    ctx->pc = 0x371104u;
label_371104:
    // 0x371104: 0xc064744
    ctx->pc = 0x371104u;
    SET_GPR_U32(ctx, 31, 0x37110Cu);
    ctx->pc = 0x371108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x191D10u;
    {
        auto targetFn = runtime->lookupFunction(0x191D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37110Cu; }
        if (ctx->pc != 0x37110Cu) { return; }
    }
    ctx->pc = 0x37110Cu;
    // 0x37110c: 0x46140034
    ctx->pc = 0x37110cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x371110: 0x45000003
    ctx->pc = 0x371110u;
    {
        const bool branch_taken_0x371110 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x371114u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x371110) {
            ctx->pc = 0x371120u;
            goto label_371120;
        }
    }
    ctx->pc = 0x371118u;
    // 0x371118: 0x10000007
    ctx->pc = 0x371118u;
    {
        const bool branch_taken_0x371118 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37111Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x371118) {
            ctx->pc = 0x371138u;
            goto label_371138;
        }
    }
    ctx->pc = 0x371120u;
label_371120:
    // 0x371120: 0xc064744
    ctx->pc = 0x371120u;
    SET_GPR_U32(ctx, 31, 0x371128u);
    ctx->pc = 0x371124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x191D10u;
    {
        auto targetFn = runtime->lookupFunction(0x191D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371128u; }
        if (ctx->pc != 0x371128u) { return; }
    }
    ctx->pc = 0x371128u;
    // 0x371128: 0x46140034
    ctx->pc = 0x371128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37112c: 0x45010002
    ctx->pc = 0x37112Cu;
    {
        const bool branch_taken_0x37112c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x371130u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x37112c) {
            ctx->pc = 0x371138u;
            goto label_371138;
        }
    }
    ctx->pc = 0x371134u;
    // 0x371134: 0x102d
    ctx->pc = 0x371134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_371138:
    // 0x371138: 0xdfbf0040
    ctx->pc = 0x371138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37113c: 0xc7b40000
    ctx->pc = 0x37113cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x371140: 0x7bb20030
    ctx->pc = 0x371140u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x371144: 0x7bb10020
    ctx->pc = 0x371144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x371148: 0x7bb00010
    ctx->pc = 0x371148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37114c: 0x3e00008
    ctx->pc = 0x37114Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371150u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3710C0u: goto label_3710c0;
            case 0x371104u: goto label_371104;
            case 0x371120u: goto label_371120;
            case 0x371138u: goto label_371138;
            default: break;
        }
        return;
    }
    ctx->pc = 0x371154u;
    // 0x371154: 0x0
    ctx->pc = 0x371154u;
    // NOP
    // 0x371158: 0x0
    ctx->pc = 0x371158u;
    // NOP
    // 0x37115c: 0x0
    ctx->pc = 0x37115cu;
    // NOP
}
