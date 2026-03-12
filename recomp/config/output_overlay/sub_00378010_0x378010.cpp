#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00378010
// Address: 0x378010 - 0x378a00
void sub_00378010_0x378010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x378010u;

    // 0x378010: 0x27bdff20
    ctx->pc = 0x378010u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x378014: 0x302d
    ctx->pc = 0x378014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378018: 0xffbf0090
    ctx->pc = 0x378018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x37801c: 0x7fbe0080
    ctx->pc = 0x37801cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x378020: 0x7fb70070
    ctx->pc = 0x378020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x378024: 0x7fb60060
    ctx->pc = 0x378024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x378028: 0x7fb50050
    ctx->pc = 0x378028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x37802c: 0x7fb40040
    ctx->pc = 0x37802cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x378030: 0x80a82d
    ctx->pc = 0x378030u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378034: 0x7fb30030
    ctx->pc = 0x378034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x378038: 0x7fb20020
    ctx->pc = 0x378038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37803c: 0x7fb10010
    ctx->pc = 0x37803cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x378040: 0x2412fffe
    ctx->pc = 0x378040u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x378044: 0x7fb00000
    ctx->pc = 0x378044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x378048: 0x3c040057
    ctx->pc = 0x378048u;
    SET_GPR_U32(ctx, 4, ((uint32_t)87 << 16));
    // 0x37804c: 0x44800800
    ctx->pc = 0x37804cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x378050: 0x2484af50
    ctx->pc = 0x378050u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946640));
label_378054:
    // 0x378054: 0x61840
    ctx->pc = 0x378054u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 1));
    // 0x378058: 0x61100
    ctx->pc = 0x378058u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 4));
    // 0x37805c: 0x661821
    ctx->pc = 0x37805cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x378060: 0x822821
    ctx->pc = 0x378060u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x378064: 0x31080
    ctx->pc = 0x378064u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x378068: 0x24c60001
    ctx->pc = 0x378068u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x37806c: 0x2a21821
    ctx->pc = 0x37806cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x378070: 0xc4600060
    ctx->pc = 0x378070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x378074: 0x28c20004
    ctx->pc = 0x378074u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 4));
    // 0x378078: 0xe4a00000
    ctx->pc = 0x378078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x37807c: 0xc4600064
    ctx->pc = 0x37807cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x378080: 0xe4a00004
    ctx->pc = 0x378080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x378084: 0xc4600068
    ctx->pc = 0x378084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x378088: 0xe4a00008
    ctx->pc = 0x378088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x37808c: 0x1440fff1
    ctx->pc = 0x37808Cu;
    {
        const bool branch_taken_0x37808c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x378090u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
        if (branch_taken_0x37808c) {
            ctx->pc = 0x378054u;
            goto label_378054;
        }
    }
    ctx->pc = 0x378094u;
    // 0x378094: 0xc6a00090
    ctx->pc = 0x378094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x378098: 0x3c010057
    ctx->pc = 0x378098u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37809c: 0x3c050057
    ctx->pc = 0x37809cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)87 << 16));
    // 0x3780a0: 0x80302d
    ctx->pc = 0x3780a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3780a4: 0x24a5ba40
    ctx->pc = 0x3780a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294949440));
    // 0x3780a8: 0xe420ba00
    ctx->pc = 0x3780a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949376), bits); }
    // 0x3780ac: 0xc6a00094
    ctx->pc = 0x3780acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3780b0: 0x3c010057
    ctx->pc = 0x3780b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3780b4: 0xe420ba04
    ctx->pc = 0x3780b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949380), bits); }
    // 0x3780b8: 0xc6a00098
    ctx->pc = 0x3780b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3780bc: 0x3c010057
    ctx->pc = 0x3780bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3780c0: 0xe420ba08
    ctx->pc = 0x3780c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949384), bits); }
    // 0x3780c4: 0x3c010057
    ctx->pc = 0x3780c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3780c8: 0xc05faca
    ctx->pc = 0x3780C8u;
    SET_GPR_U32(ctx, 31, 0x3780D0u);
    ctx->pc = 0x3780CCu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949388), bits); }
    ctx->pc = 0x17EB28u;
    {
        auto targetFn = runtime->lookupFunction(0x17EB28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3780D0u; }
        if (ctx->pc != 0x3780D0u) { return; }
    }
    ctx->pc = 0x3780D0u;
    // 0x3780d0: 0x3c040057
    ctx->pc = 0x3780d0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)87 << 16));
    // 0x3780d4: 0x3c050057
    ctx->pc = 0x3780d4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)87 << 16));
    // 0x3780d8: 0x2484ba00
    ctx->pc = 0x3780d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949376));
    // 0x3780dc: 0x24a5ba40
    ctx->pc = 0x3780dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294949440));
    // 0x3780e0: 0xc05faaa
    ctx->pc = 0x3780E0u;
    SET_GPR_U32(ctx, 31, 0x3780E8u);
    ctx->pc = 0x3780E4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17EAA8u;
    {
        auto targetFn = runtime->lookupFunction(0x17EAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3780E8u; }
        if (ctx->pc != 0x3780E8u) { return; }
    }
    ctx->pc = 0x3780E8u;
    // 0x3780e8: 0x882d
    ctx->pc = 0x3780e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3780ec: 0x802d
    ctx->pc = 0x3780ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3780f0: 0x24020003
    ctx->pc = 0x3780f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_3780f4:
    // 0x3780f4: 0x3c050057
    ctx->pc = 0x3780f4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)87 << 16));
    // 0x3780f8: 0x501823
    ctx->pc = 0x3780f8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3780fc: 0x24a5afd0
    ctx->pc = 0x3780fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294946768));
    // 0x378100: 0x3c020057
    ctx->pc = 0x378100u;
    SET_GPR_U32(ctx, 2, ((uint32_t)87 << 16));
    // 0x378104: 0x31900
    ctx->pc = 0x378104u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x378108: 0x2442af50
    ctx->pc = 0x378108u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294946640));
    // 0x37810c: 0x118840
    ctx->pc = 0x37810cu;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 1));
    // 0x378110: 0xc05fb0a
    ctx->pc = 0x378110u;
    SET_GPR_U32(ctx, 31, 0x378118u);
    ctx->pc = 0x378114u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x17EC28u;
    {
        auto targetFn = runtime->lookupFunction(0x17EC28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378118u; }
        if (ctx->pc != 0x378118u) { return; }
    }
    ctx->pc = 0x378118u;
    // 0x378118: 0x44800800
    ctx->pc = 0x378118u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x37811c: 0x0
    ctx->pc = 0x37811cu;
    // NOP
    // 0x378120: 0x46010036
    ctx->pc = 0x378120u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x378124: 0x45010002
    ctx->pc = 0x378124u;
    {
        const bool branch_taken_0x378124 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x378124) {
            ctx->pc = 0x378130u;
            goto label_378130;
        }
    }
    ctx->pc = 0x37812Cu;
    // 0x37812c: 0x26310001
    ctx->pc = 0x37812cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_378130:
    // 0x378130: 0x26100001
    ctx->pc = 0x378130u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x378134: 0x2a020004
    ctx->pc = 0x378134u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x378138: 0x1440ffee
    ctx->pc = 0x378138u;
    {
        const bool branch_taken_0x378138 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37813Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x378138) {
            ctx->pc = 0x3780F4u;
            goto label_3780f4;
        }
    }
    ctx->pc = 0x378140u;
    // 0x378140: 0x3c040057
    ctx->pc = 0x378140u;
    SET_GPR_U32(ctx, 4, ((uint32_t)87 << 16));
    // 0x378144: 0x3c050057
    ctx->pc = 0x378144u;
    SET_GPR_U32(ctx, 5, ((uint32_t)87 << 16));
    // 0x378148: 0x2484ba00
    ctx->pc = 0x378148u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949376));
    // 0x37814c: 0xc05fb0a
    ctx->pc = 0x37814Cu;
    SET_GPR_U32(ctx, 31, 0x378154u);
    ctx->pc = 0x378150u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294946768));
    ctx->pc = 0x17EC28u;
    {
        auto targetFn = runtime->lookupFunction(0x17EC28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378154u; }
        if (ctx->pc != 0x378154u) { return; }
    }
    ctx->pc = 0x378154u;
    // 0x378154: 0x44800800
    ctx->pc = 0x378154u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x378158: 0x0
    ctx->pc = 0x378158u;
    // NOP
    // 0x37815c: 0x46010036
    ctx->pc = 0x37815cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x378160: 0x45010007
    ctx->pc = 0x378160u;
    {
        const bool branch_taken_0x378160 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x378164u;
        SET_GPR_U32(ctx, 2, ((uint32_t)57 << 16));
        if (branch_taken_0x378160) {
            ctx->pc = 0x378180u;
            goto label_378180;
        }
    }
    ctx->pc = 0x378168u;
    // 0x378168: 0x3c020039
    ctx->pc = 0x378168u;
    SET_GPR_U32(ctx, 2, ((uint32_t)57 << 16));
    // 0x37816c: 0x112100
    ctx->pc = 0x37816cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 17), 4));
    // 0x378170: 0x24429754
    ctx->pc = 0x378170u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294940500));
    // 0x378174: 0x441021
    ctx->pc = 0x378174u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x378178: 0x10000005
    ctx->pc = 0x378178u;
    {
        const bool branch_taken_0x378178 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37817Cu;
        SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x378178) {
            ctx->pc = 0x378190u;
            goto label_378190;
        }
    }
    ctx->pc = 0x378180u;
label_378180:
    // 0x378180: 0x112100
    ctx->pc = 0x378180u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 17), 4));
    // 0x378184: 0x24429758
    ctx->pc = 0x378184u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294940504));
    // 0x378188: 0x441021
    ctx->pc = 0x378188u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37818c: 0x8c540000
    ctx->pc = 0x37818cu;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_378190:
    // 0x378190: 0x3c030039
    ctx->pc = 0x378190u;
    SET_GPR_U32(ctx, 3, ((uint32_t)57 << 16));
    // 0x378194: 0x3c020039
    ctx->pc = 0x378194u;
    SET_GPR_U32(ctx, 2, ((uint32_t)57 << 16));
    // 0x378198: 0x2463975c
    ctx->pc = 0x378198u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294940508));
    // 0x37819c: 0x24429750
    ctx->pc = 0x37819cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294940496));
    // 0x3781a0: 0x641821
    ctx->pc = 0x3781a0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3781a4: 0x441021
    ctx->pc = 0x3781a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3781a8: 0x8c730000
    ctx->pc = 0x3781a8u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3781ac: 0x8c560000
    ctx->pc = 0x3781acu;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3781b0: 0x1000004e
    ctx->pc = 0x3781B0u;
    {
        const bool branch_taken_0x3781b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3781B4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x3781b0) {
            ctx->pc = 0x3782ECu;
            goto label_3782ec;
        }
    }
    ctx->pc = 0x3781B8u;
label_3781b8:
    // 0x3781b8: 0x82870000
    ctx->pc = 0x3781b8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3781bc: 0x3c020057
    ctx->pc = 0x3781bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)87 << 16));
    // 0x3781c0: 0x3c050057
    ctx->pc = 0x3781c0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)87 << 16));
    // 0x3781c4: 0x3c060057
    ctx->pc = 0x3781c4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)87 << 16));
    // 0x3781c8: 0x108900
    ctx->pc = 0x3781c8u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 16), 4));
    // 0x3781cc: 0x2442b280
    ctx->pc = 0x3781ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947456));
    // 0x3781d0: 0x51b821
    ctx->pc = 0x3781d0u;
    SET_GPR_U32(ctx, 23, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3781d4: 0x3c010057
    ctx->pc = 0x3781d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3781d8: 0x3c033f80
    ctx->pc = 0x3781d8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x3781dc: 0x24a5ba40
    ctx->pc = 0x3781dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294949440));
    // 0x3781e0: 0x2e0202d
    ctx->pc = 0x3781e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3781e4: 0x24c6ba10
    ctx->pc = 0x3781e4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294949392));
    // 0x3781e8: 0x71040
    ctx->pc = 0x3781e8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 1));
    // 0x3781ec: 0x471021
    ctx->pc = 0x3781ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3781f0: 0x21080
    ctx->pc = 0x3781f0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x3781f4: 0x2a21021
    ctx->pc = 0x3781f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x3781f8: 0xc4400000
    ctx->pc = 0x3781f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3781fc: 0xe420ba10
    ctx->pc = 0x3781fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949392), bits); }
    // 0x378200: 0x82870000
    ctx->pc = 0x378200u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x378204: 0x3c010057
    ctx->pc = 0x378204u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378208: 0x71040
    ctx->pc = 0x378208u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 1));
    // 0x37820c: 0x471021
    ctx->pc = 0x37820cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x378210: 0x21080
    ctx->pc = 0x378210u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x378214: 0x2a21021
    ctx->pc = 0x378214u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x378218: 0xc4400004
    ctx->pc = 0x378218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37821c: 0xe420ba14
    ctx->pc = 0x37821cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949396), bits); }
    // 0x378220: 0x82870000
    ctx->pc = 0x378220u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x378224: 0x3c010057
    ctx->pc = 0x378224u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378228: 0x71040
    ctx->pc = 0x378228u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 1));
    // 0x37822c: 0x26940001
    ctx->pc = 0x37822cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    // 0x378230: 0x471021
    ctx->pc = 0x378230u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x378234: 0x21080
    ctx->pc = 0x378234u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x378238: 0x2a21021
    ctx->pc = 0x378238u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x37823c: 0xc4400008
    ctx->pc = 0x37823cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x378240: 0xe420ba18
    ctx->pc = 0x378240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949400), bits); }
    // 0x378244: 0x3c010057
    ctx->pc = 0x378244u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378248: 0xc05faaa
    ctx->pc = 0x378248u;
    SET_GPR_U32(ctx, 31, 0x378250u);
    ctx->pc = 0x37824Cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949404), GPR_U32(ctx, 3));
    ctx->pc = 0x17EAA8u;
    {
        auto targetFn = runtime->lookupFunction(0x17EAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378250u; }
        if (ctx->pc != 0x378250u) { return; }
    }
    ctx->pc = 0x378250u;
    // 0x378250: 0x3c020057
    ctx->pc = 0x378250u;
    SET_GPR_U32(ctx, 2, ((uint32_t)87 << 16));
    // 0x378254: 0x3c050057
    ctx->pc = 0x378254u;
    SET_GPR_U32(ctx, 5, ((uint32_t)87 << 16));
    // 0x378258: 0x2442b100
    ctx->pc = 0x378258u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947072));
    // 0x37825c: 0x24a5af90
    ctx->pc = 0x37825cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294946704));
    // 0x378260: 0x51f021
    ctx->pc = 0x378260u;
    SET_GPR_U32(ctx, 30, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x378264: 0x2e0302d
    ctx->pc = 0x378264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378268: 0xc05faaa
    ctx->pc = 0x378268u;
    SET_GPR_U32(ctx, 31, 0x378270u);
    ctx->pc = 0x37826Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17EAA8u;
    {
        auto targetFn = runtime->lookupFunction(0x17EAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378270u; }
        if (ctx->pc != 0x378270u) { return; }
    }
    ctx->pc = 0x378270u;
    // 0x378270: 0x3c010057
    ctx->pc = 0x378270u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378274: 0x3c020057
    ctx->pc = 0x378274u;
    SET_GPR_U32(ctx, 2, ((uint32_t)87 << 16));
    // 0x378278: 0x8c25bab0
    ctx->pc = 0x378278u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294949552)));
    // 0x37827c: 0x2e0302d
    ctx->pc = 0x37827cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378280: 0x2442b880
    ctx->pc = 0x378280u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294948992));
    // 0x378284: 0x51b821
    ctx->pc = 0x378284u;
    SET_GPR_U32(ctx, 23, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x378288: 0xc05faaa
    ctx->pc = 0x378288u;
    SET_GPR_U32(ctx, 31, 0x378290u);
    ctx->pc = 0x37828Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17EAA8u;
    {
        auto targetFn = runtime->lookupFunction(0x17EAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378290u; }
        if (ctx->pc != 0x378290u) { return; }
    }
    ctx->pc = 0x378290u;
    // 0x378290: 0x3c010057
    ctx->pc = 0x378290u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378294: 0x3c020057
    ctx->pc = 0x378294u;
    SET_GPR_U32(ctx, 2, ((uint32_t)87 << 16));
    // 0x378298: 0x8c25bab0
    ctx->pc = 0x378298u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294949552)));
    // 0x37829c: 0x2442b580
    ctx->pc = 0x37829cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294948224));
    // 0x3782a0: 0x518821
    ctx->pc = 0x3782a0u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3782a4: 0x3c0302d
    ctx->pc = 0x3782a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3782a8: 0xc05faaa
    ctx->pc = 0x3782A8u;
    SET_GPR_U32(ctx, 31, 0x3782B0u);
    ctx->pc = 0x3782ACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17EAA8u;
    {
        auto targetFn = runtime->lookupFunction(0x17EAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3782B0u; }
        if (ctx->pc != 0x3782B0u) { return; }
    }
    ctx->pc = 0x3782B0u;
    // 0x3782b0: 0x44920000
    ctx->pc = 0x3782b0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 18);
    // 0x3782b4: 0xc6e10008
    ctx->pc = 0x3782b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3782b8: 0x46800020
    ctx->pc = 0x3782b8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x3782bc: 0x46010034
    ctx->pc = 0x3782bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3782c0: 0x45000002
    ctx->pc = 0x3782C0u;
    {
        const bool branch_taken_0x3782c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3782C4u;
        *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
        if (branch_taken_0x3782c0) {
            ctx->pc = 0x3782CCu;
            goto label_3782cc;
        }
    }
    ctx->pc = 0x3782C8u;
    // 0x3782c8: 0x44120000
    ctx->pc = 0x3782c8u;
    SET_GPR_U32(ctx, 18, *(uint32_t*)&ctx->f[0]);
label_3782cc:
    // 0x3782cc: 0x44920000
    ctx->pc = 0x3782ccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 18);
    // 0x3782d0: 0xc6210008
    ctx->pc = 0x3782d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3782d4: 0x46800020
    ctx->pc = 0x3782d4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x3782d8: 0x46010034
    ctx->pc = 0x3782d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3782dc: 0x45000002
    ctx->pc = 0x3782DCu;
    {
        const bool branch_taken_0x3782dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3782E0u;
        *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
        if (branch_taken_0x3782dc) {
            ctx->pc = 0x3782E8u;
            goto label_3782e8;
        }
    }
    ctx->pc = 0x3782E4u;
    // 0x3782e4: 0x44120000
    ctx->pc = 0x3782e4u;
    SET_GPR_U32(ctx, 18, *(uint32_t*)&ctx->f[0]);
label_3782e8:
    // 0x3782e8: 0x26100001
    ctx->pc = 0x3782e8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_3782ec:
    // 0x3782ec: 0x216102b
    ctx->pc = 0x3782ecu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x3782f0: 0x1440ffb1
    ctx->pc = 0x3782F0u;
    {
        const bool branch_taken_0x3782f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x3782f0) {
            ctx->pc = 0x3781B8u;
            goto label_3781b8;
        }
    }
    ctx->pc = 0x3782F8u;
    // 0x3782f8: 0x44920800
    ctx->pc = 0x3782f8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 18);
    // 0x3782fc: 0x3c02c000
    ctx->pc = 0x3782fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49152 << 16));
    // 0x378300: 0x44820000
    ctx->pc = 0x378300u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x378304: 0x0
    ctx->pc = 0x378304u;
    // NOP
    // 0x378308: 0x46800860
    ctx->pc = 0x378308u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x37830c: 0x46000836
    ctx->pc = 0x37830cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x378310: 0x45010003
    ctx->pc = 0x378310u;
    {
        const bool branch_taken_0x378310 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x378314u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x378310) {
            ctx->pc = 0x378320u;
            goto label_378320;
        }
    }
    ctx->pc = 0x378318u;
    // 0x378318: 0x100001ab
    ctx->pc = 0x378318u;
    {
        const bool branch_taken_0x378318 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37831Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x378318) {
            ctx->pc = 0x3789C8u;
            goto label_3789c8;
        }
    }
    ctx->pc = 0x378320u;
label_378320:
    // 0x378320: 0x1000003b
    ctx->pc = 0x378320u;
    {
        const bool branch_taken_0x378320 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x378324u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
        if (branch_taken_0x378320) {
            ctx->pc = 0x378410u;
            goto label_378410;
        }
    }
    ctx->pc = 0x378328u;
label_378328:
    // 0x378328: 0x3c020057
    ctx->pc = 0x378328u;
    SET_GPR_U32(ctx, 2, ((uint32_t)87 << 16));
    // 0x37832c: 0x8c25baa0
    ctx->pc = 0x37832cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294949536)));
    // 0x378330: 0x10a100
    ctx->pc = 0x378330u;
    SET_GPR_U32(ctx, 20, SLL32(GPR_U32(ctx, 16), 4));
    // 0x378334: 0x2442b700
    ctx->pc = 0x378334u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294948608));
    // 0x378338: 0x24070001
    ctx->pc = 0x378338u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37833c: 0x549021
    ctx->pc = 0x37833cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x378340: 0x3c020057
    ctx->pc = 0x378340u;
    SET_GPR_U32(ctx, 2, ((uint32_t)87 << 16));
    // 0x378344: 0x240202d
    ctx->pc = 0x378344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378348: 0x2442b880
    ctx->pc = 0x378348u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294948992));
    // 0x37834c: 0xc05ff64
    ctx->pc = 0x37834Cu;
    SET_GPR_U32(ctx, 31, 0x378354u);
    ctx->pc = 0x378350u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    ctx->pc = 0x17FD90u;
    {
        auto targetFn = runtime->lookupFunction(0x17FD90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378354u; }
        if (ctx->pc != 0x378354u) { return; }
    }
    ctx->pc = 0x378354u;
    // 0x378354: 0x3c010057
    ctx->pc = 0x378354u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378358: 0x3c030057
    ctx->pc = 0x378358u;
    SET_GPR_U32(ctx, 3, ((uint32_t)87 << 16));
    // 0x37835c: 0x8c25baa0
    ctx->pc = 0x37835cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294949536)));
    // 0x378360: 0x2463b400
    ctx->pc = 0x378360u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294947840));
    // 0x378364: 0x3c020057
    ctx->pc = 0x378364u;
    SET_GPR_U32(ctx, 2, ((uint32_t)87 << 16));
    // 0x378368: 0x748821
    ctx->pc = 0x378368u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x37836c: 0x2442b580
    ctx->pc = 0x37836cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294948224));
    // 0x378370: 0x220202d
    ctx->pc = 0x378370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378374: 0x543021
    ctx->pc = 0x378374u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x378378: 0xc05ff64
    ctx->pc = 0x378378u;
    SET_GPR_U32(ctx, 31, 0x378380u);
    ctx->pc = 0x37837Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x17FD90u;
    {
        auto targetFn = runtime->lookupFunction(0x17FD90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378380u; }
        if (ctx->pc != 0x378380u) { return; }
    }
    ctx->pc = 0x378380u;
    // 0x378380: 0x8e420000
    ctx->pc = 0x378380u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x378384: 0x4400004
    ctx->pc = 0x378384u;
    {
        const bool branch_taken_0x378384 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x378388u;
        SET_GPR_U32(ctx, 1, ((uint32_t)1 << 16));
        if (branch_taken_0x378384) {
            ctx->pc = 0x378398u;
            goto label_378398;
        }
    }
    ctx->pc = 0x37838Cu;
    // 0x37838c: 0x41082a
    ctx->pc = 0x37838cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 1)));
    // 0x378390: 0x14200003
    ctx->pc = 0x378390u;
    {
        const bool branch_taken_0x378390 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x378390) {
            ctx->pc = 0x3783A0u;
            goto label_3783a0;
        }
    }
    ctx->pc = 0x378398u;
label_378398:
    // 0x378398: 0x1000018b
    ctx->pc = 0x378398u;
    {
        const bool branch_taken_0x378398 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37839Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x378398) {
            ctx->pc = 0x3789C8u;
            goto label_3789c8;
        }
    }
    ctx->pc = 0x3783A0u;
label_3783a0:
    // 0x3783a0: 0x8e420004
    ctx->pc = 0x3783a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3783a4: 0x4400004
    ctx->pc = 0x3783A4u;
    {
        const bool branch_taken_0x3783a4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3783A8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)1 << 16));
        if (branch_taken_0x3783a4) {
            ctx->pc = 0x3783B8u;
            goto label_3783b8;
        }
    }
    ctx->pc = 0x3783ACu;
    // 0x3783ac: 0x41082a
    ctx->pc = 0x3783acu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 1)));
    // 0x3783b0: 0x14200003
    ctx->pc = 0x3783B0u;
    {
        const bool branch_taken_0x3783b0 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x3783b0) {
            ctx->pc = 0x3783C0u;
            goto label_3783c0;
        }
    }
    ctx->pc = 0x3783B8u;
label_3783b8:
    // 0x3783b8: 0x10000183
    ctx->pc = 0x3783B8u;
    {
        const bool branch_taken_0x3783b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3783BCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x3783b8) {
            ctx->pc = 0x3789C8u;
            goto label_3789c8;
        }
    }
    ctx->pc = 0x3783C0u;
label_3783c0:
    // 0x3783c0: 0x8e220000
    ctx->pc = 0x3783c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3783c4: 0x4400004
    ctx->pc = 0x3783C4u;
    {
        const bool branch_taken_0x3783c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3783C8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)1 << 16));
        if (branch_taken_0x3783c4) {
            ctx->pc = 0x3783D8u;
            goto label_3783d8;
        }
    }
    ctx->pc = 0x3783CCu;
    // 0x3783cc: 0x41082a
    ctx->pc = 0x3783ccu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 1)));
    // 0x3783d0: 0x14200003
    ctx->pc = 0x3783D0u;
    {
        const bool branch_taken_0x3783d0 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x3783d0) {
            ctx->pc = 0x3783E0u;
            goto label_3783e0;
        }
    }
    ctx->pc = 0x3783D8u;
label_3783d8:
    // 0x3783d8: 0x1000017b
    ctx->pc = 0x3783D8u;
    {
        const bool branch_taken_0x3783d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3783DCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x3783d8) {
            ctx->pc = 0x3789C8u;
            goto label_3789c8;
        }
    }
    ctx->pc = 0x3783E0u;
label_3783e0:
    // 0x3783e0: 0x8e220004
    ctx->pc = 0x3783e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3783e4: 0x4410003
    ctx->pc = 0x3783E4u;
    {
        const bool branch_taken_0x3783e4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3783E8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)1 << 16));
        if (branch_taken_0x3783e4) {
            ctx->pc = 0x3783F4u;
            goto label_3783f4;
        }
    }
    ctx->pc = 0x3783ECu;
    // 0x3783ec: 0x10000176
    ctx->pc = 0x3783ECu;
    {
        const bool branch_taken_0x3783ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3783F0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x3783ec) {
            ctx->pc = 0x3789C8u;
            goto label_3789c8;
        }
    }
    ctx->pc = 0x3783F4u;
label_3783f4:
    // 0x3783f4: 0x41082a
    ctx->pc = 0x3783f4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 1)));
    // 0x3783f8: 0x14200003
    ctx->pc = 0x3783F8u;
    {
        const bool branch_taken_0x3783f8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x3783f8) {
            ctx->pc = 0x378408u;
            goto label_378408;
        }
    }
    ctx->pc = 0x378400u;
    // 0x378400: 0x10000171
    ctx->pc = 0x378400u;
    {
        const bool branch_taken_0x378400 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x378404u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x378400) {
            ctx->pc = 0x3789C8u;
            goto label_3789c8;
        }
    }
    ctx->pc = 0x378408u;
label_378408:
    // 0x378408: 0x26100001
    ctx->pc = 0x378408u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x37840c: 0x216102b
    ctx->pc = 0x37840cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
label_378410:
    // 0x378410: 0x1440ffc5
    ctx->pc = 0x378410u;
    {
        const bool branch_taken_0x378410 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x378414u;
        SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
        if (branch_taken_0x378410) {
            ctx->pc = 0x378328u;
            goto label_378328;
        }
    }
    ctx->pc = 0x378418u;
    // 0x378418: 0x24030080
    ctx->pc = 0x378418u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 128));
    // 0x37841c: 0x3c040057
    ctx->pc = 0x37841cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)87 << 16));
    // 0x378420: 0x240200a1
    ctx->pc = 0x378420u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 161));
    // 0x378424: 0x3183c
    ctx->pc = 0x378424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x378428: 0x438825
    ctx->pc = 0x378428u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37842c: 0x282d
    ctx->pc = 0x37842cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378430: 0x3c020038
    ctx->pc = 0x378430u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x378434: 0x27ac00a4
    ctx->pc = 0x378434u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 29), 164));
    // 0x378438: 0x34523838
    ctx->pc = 0x378438u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 2), 14392));
    // 0x37843c: 0x27a900a8
    ctx->pc = 0x37843cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 168));
    // 0x378440: 0x24020068
    ctx->pc = 0x378440u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 104));
    // 0x378444: 0x27ae00b0
    ctx->pc = 0x378444u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 29), 176));
    // 0x378448: 0x43a025
    ctx->pc = 0x378448u;
    SET_GPR_U32(ctx, 20, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37844c: 0x27ad00b4
    ctx->pc = 0x37844cu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 29), 180));
    // 0x378450: 0x3c028000
    ctx->pc = 0x378450u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x378454: 0x3c030057
    ctx->pc = 0x378454u;
    SET_GPR_U32(ctx, 3, ((uint32_t)87 << 16));
    // 0x378458: 0x2103c
    ctx->pc = 0x378458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x37845c: 0x27b900b8
    ctx->pc = 0x37845cu;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 29), 184));
    // 0x378460: 0x27ab00c0
    ctx->pc = 0x378460u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 29), 192));
    // 0x378464: 0x27aa00c4
    ctx->pc = 0x378464u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 29), 196));
    // 0x378468: 0x27be00c8
    ctx->pc = 0x378468u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 29), 200));
    // 0x37846c: 0x2484b700
    ctx->pc = 0x37846cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948608));
    // 0x378470: 0x2463b400
    ctx->pc = 0x378470u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294947840));
    // 0x378474: 0x240f0004
    ctx->pc = 0x378474u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 0), 4));
    // 0x378478: 0x100000bb
    ctx->pc = 0x378478u;
    {
        const bool branch_taken_0x378478 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37847Cu;
        SET_GPR_VEC(ctx, 16, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
        if (branch_taken_0x378478) {
            ctx->pc = 0x378768u;
            goto label_378768;
        }
    }
    ctx->pc = 0x378480u;
label_378480:
    // 0x378480: 0x3c010057
    ctx->pc = 0x378480u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378484: 0x823021
    ctx->pc = 0x378484u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x378488: 0x8cc70000
    ctx->pc = 0x378488u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x37848c: 0x621021
    ctx->pc = 0x37848cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x378490: 0xafa700a0
    ctx->pc = 0x378490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x378494: 0x8cc70004
    ctx->pc = 0x378494u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x378498: 0xad870000
    ctx->pc = 0x378498u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 7));
    // 0x37849c: 0x8cc70008
    ctx->pc = 0x37849cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3784a0: 0xad270000
    ctx->pc = 0x3784a0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
    // 0x3784a4: 0x8cc8000c
    ctx->pc = 0x3784a4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x3784a8: 0x27a700ac
    ctx->pc = 0x3784a8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 172));
    // 0x3784ac: 0xace80000
    ctx->pc = 0x3784acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x3784b0: 0x8c470000
    ctx->pc = 0x3784b0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3784b4: 0xadc70000
    ctx->pc = 0x3784b4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 7));
    // 0x3784b8: 0x8c470004
    ctx->pc = 0x3784b8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3784bc: 0xada70000
    ctx->pc = 0x3784bcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 7));
    // 0x3784c0: 0x8c470008
    ctx->pc = 0x3784c0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3784c4: 0xaf270000
    ctx->pc = 0x3784c4u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 7));
    // 0x3784c8: 0x8c48000c
    ctx->pc = 0x3784c8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3784cc: 0x27a700bc
    ctx->pc = 0x3784ccu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 188));
    // 0x3784d0: 0xace80000
    ctx->pc = 0x3784d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x3784d4: 0x8cc70010
    ctx->pc = 0x3784d4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3784d8: 0xad670000
    ctx->pc = 0x3784d8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 7));
    // 0x3784dc: 0x8cc70014
    ctx->pc = 0x3784dcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x3784e0: 0xad470000
    ctx->pc = 0x3784e0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
    // 0x3784e4: 0x8cc70018
    ctx->pc = 0x3784e4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3784e8: 0xafc70000
    ctx->pc = 0x3784e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 7));
    // 0x3784ec: 0x8cc7001c
    ctx->pc = 0x3784ecu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x3784f0: 0x27a600cc
    ctx->pc = 0x3784f0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 204));
    // 0x3784f4: 0xacc70000
    ctx->pc = 0x3784f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x3784f8: 0x8c470010
    ctx->pc = 0x3784f8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3784fc: 0x27a600d0
    ctx->pc = 0x3784fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 208));
    // 0x378500: 0xacc70000
    ctx->pc = 0x378500u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x378504: 0x8c470014
    ctx->pc = 0x378504u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x378508: 0x27a600d4
    ctx->pc = 0x378508u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 212));
    // 0x37850c: 0xacc70000
    ctx->pc = 0x37850cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x378510: 0x8c470018
    ctx->pc = 0x378510u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x378514: 0x27a600d8
    ctx->pc = 0x378514u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 216));
    // 0x378518: 0xacc70000
    ctx->pc = 0x378518u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x37851c: 0x8c46001c
    ctx->pc = 0x37851cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x378520: 0x27a200dc
    ctx->pc = 0x378520u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 220));
    // 0x378524: 0xac460000
    ctx->pc = 0x378524u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x378528: 0x8d880000
    ctx->pc = 0x378528u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x37852c: 0x8d580000
    ctx->pc = 0x37852cu;
    SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x378530: 0x8fa700a0
    ctx->pc = 0x378530u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x378534: 0x8dc20000
    ctx->pc = 0x378534u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x378538: 0x8c26ba90
    ctx->pc = 0x378538u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x37853c: 0x8db70000
    ctx->pc = 0x37853cu;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x378540: 0x8d750000
    ctx->pc = 0x378540u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x378544: 0x118c023
    ctx->pc = 0x378544u;
    SET_GPR_U32(ctx, 24, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 24)));
    // 0x378548: 0xe21023
    ctx->pc = 0x378548u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x37854c: 0x3c010057
    ctx->pc = 0x37854cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378550: 0x1174023
    ctx->pc = 0x378550u;
    SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 23)));
    // 0x378554: 0xf53823
    ctx->pc = 0x378554u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 21)));
    // 0x378558: 0x71074018
    ctx->pc = 0x378558u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x37855c: 0x581018
    ctx->pc = 0x37855cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x378560: 0x24070044
    ctx->pc = 0x378560u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 68));
    // 0x378564: 0xfcc70000
    ctx->pc = 0x378564u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 7));
    // 0x378568: 0xfcc00008
    ctx->pc = 0x378568u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 0));
    // 0x37856c: 0x8c27ba90
    ctx->pc = 0x37856cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378570: 0x481023
    ctx->pc = 0x378570u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x378574: 0x40102a
    ctx->pc = 0x378574u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 0)));
    // 0x378578: 0x3c010057
    ctx->pc = 0x378578u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37857c: 0x24e70010
    ctx->pc = 0x37857cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 16));
    // 0x378580: 0x9026af38
    ctx->pc = 0x378580u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946616)));
    // 0x378584: 0x3c010057
    ctx->pc = 0x378584u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378588: 0x10c2002f
    ctx->pc = 0x378588u;
    {
        const bool branch_taken_0x378588 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x37858Cu;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 7));
        if (branch_taken_0x378588) {
            ctx->pc = 0x378648u;
            goto label_378648;
        }
    }
    ctx->pc = 0x378590u;
    // 0x378590: 0x3c010057
    ctx->pc = 0x378590u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378594: 0xa022af38
    ctx->pc = 0x378594u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294946616), (uint8_t)GPR_U32(ctx, 2));
    // 0x378598: 0x3c010057
    ctx->pc = 0x378598u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37859c: 0x9022af38
    ctx->pc = 0x37859cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946616)));
    // 0x3785a0: 0x10400016
    ctx->pc = 0x3785A0u;
    {
        const bool branch_taken_0x3785a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x3785A4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
        if (branch_taken_0x3785a0) {
            ctx->pc = 0x3785FCu;
            goto label_3785fc;
        }
    }
    ctx->pc = 0x3785A8u;
    // 0x3785a8: 0x3c010057
    ctx->pc = 0x3785a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3785ac: 0x24020042
    ctx->pc = 0x3785acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 66));
    // 0x3785b0: 0x8c26ba90
    ctx->pc = 0x3785b0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x3785b4: 0xfcd40000
    ctx->pc = 0x3785b4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 20));
    // 0x3785b8: 0x3c010057
    ctx->pc = 0x3785b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3785bc: 0xfcc20008
    ctx->pc = 0x3785bcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
    // 0x3785c0: 0x8c22ba90
    ctx->pc = 0x3785c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x3785c4: 0x24420010
    ctx->pc = 0x3785c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16));
    // 0x3785c8: 0x3c010057
    ctx->pc = 0x3785c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3785cc: 0xac22ba90
    ctx->pc = 0x3785ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 2));
    // 0x3785d0: 0x3c010057
    ctx->pc = 0x3785d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3785d4: 0x24020001
    ctx->pc = 0x3785d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x3785d8: 0x8c26ba90
    ctx->pc = 0x3785d8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x3785dc: 0xfcd20000
    ctx->pc = 0x3785dcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 18));
    // 0x3785e0: 0x3c010057
    ctx->pc = 0x3785e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3785e4: 0xfcc20008
    ctx->pc = 0x3785e4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
    // 0x3785e8: 0x8c22ba90
    ctx->pc = 0x3785e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x3785ec: 0x24420010
    ctx->pc = 0x3785ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16));
    // 0x3785f0: 0x3c010057
    ctx->pc = 0x3785f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3785f4: 0x10000014
    ctx->pc = 0x3785F4u;
    {
        const bool branch_taken_0x3785f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3785F8u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 2));
        if (branch_taken_0x3785f4) {
            ctx->pc = 0x378648u;
            goto label_378648;
        }
    }
    ctx->pc = 0x3785FCu;
label_3785fc:
    // 0x3785fc: 0x24020042
    ctx->pc = 0x3785fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 66));
    // 0x378600: 0x8c26ba90
    ctx->pc = 0x378600u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378604: 0xfcd10000
    ctx->pc = 0x378604u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 17));
    // 0x378608: 0x3c010057
    ctx->pc = 0x378608u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37860c: 0xfcc20008
    ctx->pc = 0x37860cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
    // 0x378610: 0x8c22ba90
    ctx->pc = 0x378610u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378614: 0x24420010
    ctx->pc = 0x378614u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16));
    // 0x378618: 0x3c010057
    ctx->pc = 0x378618u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37861c: 0xac22ba90
    ctx->pc = 0x37861cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 2));
    // 0x378620: 0x3c010057
    ctx->pc = 0x378620u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378624: 0x24020001
    ctx->pc = 0x378624u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x378628: 0x8c26ba90
    ctx->pc = 0x378628u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x37862c: 0xfcd20000
    ctx->pc = 0x37862cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 18));
    // 0x378630: 0x3c010057
    ctx->pc = 0x378630u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378634: 0xfcc20008
    ctx->pc = 0x378634u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
    // 0x378638: 0x8c22ba90
    ctx->pc = 0x378638u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x37863c: 0x24420010
    ctx->pc = 0x37863cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16));
    // 0x378640: 0x3c010057
    ctx->pc = 0x378640u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378644: 0xac22ba90
    ctx->pc = 0x378644u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 2));
label_378648:
    // 0x378648: 0x8d880000
    ctx->pc = 0x378648u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x37864c: 0x3c010057
    ctx->pc = 0x37864cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378650: 0x8d260000
    ctx->pc = 0x378650u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x378654: 0x24a50002
    ctx->pc = 0x378654u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
    // 0x378658: 0x8fa700a0
    ctx->pc = 0x378658u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x37865c: 0x8c22ba90
    ctx->pc = 0x37865cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378660: 0x84438
    ctx->pc = 0x378660u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x378664: 0x6303c
    ctx->pc = 0x378664u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x378668: 0xe83825
    ctx->pc = 0x378668u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x37866c: 0xc73025
    ctx->pc = 0x37866cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x378670: 0x3c010057
    ctx->pc = 0x378670u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378674: 0xd03025
    ctx->pc = 0x378674u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x378678: 0xfc460000
    ctx->pc = 0x378678u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
    // 0x37867c: 0xfc4f0008
    ctx->pc = 0x37867cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 15));
    // 0x378680: 0x8c22ba90
    ctx->pc = 0x378680u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378684: 0x24420010
    ctx->pc = 0x378684u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16));
    // 0x378688: 0x3c010057
    ctx->pc = 0x378688u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37868c: 0xac22ba90
    ctx->pc = 0x37868cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 2));
    // 0x378690: 0x8da70000
    ctx->pc = 0x378690u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x378694: 0x3c010057
    ctx->pc = 0x378694u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378698: 0x8f260000
    ctx->pc = 0x378698u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x37869c: 0x8dc80000
    ctx->pc = 0x37869cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x3786a0: 0x8c22ba90
    ctx->pc = 0x3786a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x3786a4: 0x73c38
    ctx->pc = 0x3786a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x3786a8: 0x6303c
    ctx->pc = 0x3786a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3786ac: 0x1073825
    ctx->pc = 0x3786acu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x3786b0: 0xc73025
    ctx->pc = 0x3786b0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3786b4: 0x3c010057
    ctx->pc = 0x3786b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3786b8: 0xd03025
    ctx->pc = 0x3786b8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x3786bc: 0xfc460000
    ctx->pc = 0x3786bcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
    // 0x3786c0: 0xfc4f0008
    ctx->pc = 0x3786c0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 15));
    // 0x3786c4: 0x8c22ba90
    ctx->pc = 0x3786c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x3786c8: 0x24420010
    ctx->pc = 0x3786c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16));
    // 0x3786cc: 0x3c010057
    ctx->pc = 0x3786ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3786d0: 0xac22ba90
    ctx->pc = 0x3786d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 2));
    // 0x3786d4: 0x8d470000
    ctx->pc = 0x3786d4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3786d8: 0x3c010057
    ctx->pc = 0x3786d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3786dc: 0x8fc60000
    ctx->pc = 0x3786dcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3786e0: 0x8c22ba90
    ctx->pc = 0x3786e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x3786e4: 0x8d680000
    ctx->pc = 0x3786e4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3786e8: 0x73c38
    ctx->pc = 0x3786e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x3786ec: 0x6303c
    ctx->pc = 0x3786ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3786f0: 0x3c010057
    ctx->pc = 0x3786f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3786f4: 0x1073825
    ctx->pc = 0x3786f4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x3786f8: 0xc73025
    ctx->pc = 0x3786f8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3786fc: 0xd03025
    ctx->pc = 0x3786fcu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x378700: 0x27a700d4
    ctx->pc = 0x378700u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 212));
    // 0x378704: 0xfc460000
    ctx->pc = 0x378704u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
    // 0x378708: 0xfc4f0008
    ctx->pc = 0x378708u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 15));
    // 0x37870c: 0x8c22ba90
    ctx->pc = 0x37870cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378710: 0x24420010
    ctx->pc = 0x378710u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16));
    // 0x378714: 0x3c010057
    ctx->pc = 0x378714u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378718: 0xac22ba90
    ctx->pc = 0x378718u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 2));
    // 0x37871c: 0x8ce80000
    ctx->pc = 0x37871cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x378720: 0x27a200d0
    ctx->pc = 0x378720u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 208));
    // 0x378724: 0x3c010057
    ctx->pc = 0x378724u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378728: 0x8c420000
    ctx->pc = 0x378728u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37872c: 0x8c26ba90
    ctx->pc = 0x37872cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378730: 0x27a700d8
    ctx->pc = 0x378730u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 216));
    // 0x378734: 0x84438
    ctx->pc = 0x378734u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x378738: 0x8ce70000
    ctx->pc = 0x378738u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x37873c: 0x484025
    ctx->pc = 0x37873cu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x378740: 0x3c010057
    ctx->pc = 0x378740u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378744: 0x7103c
    ctx->pc = 0x378744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x378748: 0x481025
    ctx->pc = 0x378748u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x37874c: 0x501025
    ctx->pc = 0x37874cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x378750: 0xfcc20000
    ctx->pc = 0x378750u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x378754: 0xfccf0008
    ctx->pc = 0x378754u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 15));
    // 0x378758: 0x8c22ba90
    ctx->pc = 0x378758u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x37875c: 0x24420010
    ctx->pc = 0x37875cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16));
    // 0x378760: 0x3c010057
    ctx->pc = 0x378760u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378764: 0xac22ba90
    ctx->pc = 0x378764u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 2));
label_378768:
    // 0x378768: 0xb6102b
    ctx->pc = 0x378768u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x37876c: 0x1440ff44
    ctx->pc = 0x37876Cu;
    {
        const bool branch_taken_0x37876c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x378770u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
        if (branch_taken_0x37876c) {
            ctx->pc = 0x378480u;
            goto label_378480;
        }
    }
    ctx->pc = 0x378774u;
    // 0x378774: 0x3c010057
    ctx->pc = 0x378774u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378778: 0x24040080
    ctx->pc = 0x378778u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 128));
    // 0x37877c: 0x8c26ba90
    ctx->pc = 0x37877cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378780: 0x24050043
    ctx->pc = 0x378780u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 67));
    // 0x378784: 0x4403c
    ctx->pc = 0x378784u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << (32 + 0));
    // 0x378788: 0x3c028000
    ctx->pc = 0x378788u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x37878c: 0x2183c
    ctx->pc = 0x37878cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x378790: 0x240400a1
    ctx->pc = 0x378790u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 161));
    // 0x378794: 0x3c0f0057
    ctx->pc = 0x378794u;
    SET_GPR_U32(ctx, 15, ((uint32_t)87 << 16));
    // 0x378798: 0x882025
    ctx->pc = 0x378798u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x37879c: 0x24090068
    ctx->pc = 0x37879cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 104));
    // 0x3787a0: 0x882d
    ctx->pc = 0x3787a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3787a4: 0x1284025
    ctx->pc = 0x3787a4u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x3787a8: 0x24020004
    ctx->pc = 0x3787a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x3787ac: 0xfcc50000
    ctx->pc = 0x3787acu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x3787b0: 0x3c010057
    ctx->pc = 0x3787b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3787b4: 0xfcc00008
    ctx->pc = 0x3787b4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 0));
    // 0x3787b8: 0x3c050038
    ctx->pc = 0x3787b8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)56 << 16));
    // 0x3787bc: 0x8c30ba90
    ctx->pc = 0x3787bcu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x3787c0: 0x34a63838
    ctx->pc = 0x3787c0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 5), 14392));
    // 0x3787c4: 0x70031b89
    ctx->pc = 0x3787c4u;
    SET_GPR_VEC(ctx, 3, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x3787c8: 0x25efb700
    ctx->pc = 0x3787c8u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 15), 4294948608));
    // 0x3787cc: 0x24070042
    ctx->pc = 0x3787ccu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 66));
    // 0x3787d0: 0x24050001
    ctx->pc = 0x3787d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x3787d4: 0x26090010
    ctx->pc = 0x3787d4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 16), 16));
    // 0x3787d8: 0x3c010057
    ctx->pc = 0x3787d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3787dc: 0xac29ba90
    ctx->pc = 0x3787dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 9));
    // 0x3787e0: 0x82700000
    ctx->pc = 0x3787e0u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3787e4: 0x10000074
    ctx->pc = 0x3787E4u;
    {
        const bool branch_taken_0x3787e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3787E8u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x3787e4) {
            ctx->pc = 0x3789B8u;
            goto label_3789b8;
        }
    }
    ctx->pc = 0x3787ECu;
label_3787ec:
    // 0x3787ec: 0x82750000
    ctx->pc = 0x3787ecu;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3787f0: 0x124e3c
    ctx->pc = 0x3787f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18) << (32 + 24));
    // 0x3787f4: 0x94e3f
    ctx->pc = 0x3787f4u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 24));
    // 0x3787f8: 0x9a100
    ctx->pc = 0x3787f8u;
    SET_GPR_U32(ctx, 20, SLL32(GPR_U32(ctx, 9), 4));
    // 0x3787fc: 0x26490001
    ctx->pc = 0x3787fcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 18), 1));
    // 0x378800: 0x29da021
    ctx->pc = 0x378800u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x378804: 0x9963c
    ctx->pc = 0x378804u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) << (32 + 24));
    // 0x378808: 0x268900a0
    ctx->pc = 0x378808u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 20), 160));
    // 0x37880c: 0x12963f
    ctx->pc = 0x37880cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
    // 0x378810: 0x15a900
    ctx->pc = 0x378810u;
    SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 21), 4));
    // 0x378814: 0x2a540003
    ctx->pc = 0x378814u;
    SET_GPR_U32(ctx, 20, SLT32(GPR_S32(ctx, 18), 3));
    // 0x378818: 0x1f5a821
    ctx->pc = 0x378818u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 21)));
    // 0x37881c: 0x8eb50000
    ctx->pc = 0x37881cu;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x378820: 0xad350000
    ctx->pc = 0x378820u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 21));
    // 0x378824: 0x82750000
    ctx->pc = 0x378824u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x378828: 0x15a900
    ctx->pc = 0x378828u;
    SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 21), 4));
    // 0x37882c: 0x1f5a821
    ctx->pc = 0x37882cu;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 21)));
    // 0x378830: 0x8eb50004
    ctx->pc = 0x378830u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x378834: 0xad350004
    ctx->pc = 0x378834u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 21));
    // 0x378838: 0x82750000
    ctx->pc = 0x378838u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x37883c: 0x15a900
    ctx->pc = 0x37883cu;
    SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 21), 4));
    // 0x378840: 0x26730001
    ctx->pc = 0x378840u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x378844: 0x1f5a821
    ctx->pc = 0x378844u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 21)));
    // 0x378848: 0x8eb50008
    ctx->pc = 0x378848u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x37884c: 0x1680ffe7
    ctx->pc = 0x37884Cu;
    {
        const bool branch_taken_0x37884c = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        ctx->pc = 0x378850u;
        WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 21));
        if (branch_taken_0x37884c) {
            ctx->pc = 0x3787ECu;
            goto label_3787ec;
        }
    }
    ctx->pc = 0x378854u;
    // 0x378854: 0x8d940000
    ctx->pc = 0x378854u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x378858: 0x3c010057
    ctx->pc = 0x378858u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37885c: 0x8d580000
    ctx->pc = 0x37885cu;
    SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x378860: 0x8fb200a0
    ctx->pc = 0x378860u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x378864: 0x8dc90000
    ctx->pc = 0x378864u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x378868: 0x8db70000
    ctx->pc = 0x378868u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x37886c: 0x8d760000
    ctx->pc = 0x37886cu;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x378870: 0x9035af38
    ctx->pc = 0x378870u;
    SET_GPR_U32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946616)));
    // 0x378874: 0x298c023
    ctx->pc = 0x378874u;
    SET_GPR_U32(ctx, 24, SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 24)));
    // 0x378878: 0x2494823
    ctx->pc = 0x378878u;
    SET_GPR_U32(ctx, 9, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x37887c: 0x1384818
    ctx->pc = 0x37887cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)(uint32_t)result); }
    // 0x378880: 0x297a023
    ctx->pc = 0x378880u;
    SET_GPR_U32(ctx, 20, SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 23)));
    // 0x378884: 0x2569023
    ctx->pc = 0x378884u;
    SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x378888: 0x72929018
    ctx->pc = 0x378888u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 18); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x37888c: 0x1324823
    ctx->pc = 0x37888cu;
    SET_GPR_U32(ctx, 9, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 18)));
    // 0x378890: 0x120482a
    ctx->pc = 0x378890u;
    SET_GPR_U32(ctx, 9, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 0)));
    // 0x378894: 0x12a9002b
    ctx->pc = 0x378894u;
    {
        const bool branch_taken_0x378894 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 9));
        ctx->pc = 0x378898u;
        SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
        if (branch_taken_0x378894) {
            ctx->pc = 0x378944u;
            goto label_378944;
        }
    }
    ctx->pc = 0x37889Cu;
    // 0x37889c: 0xa029af38
    ctx->pc = 0x37889cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294946616), (uint8_t)GPR_U32(ctx, 9));
    // 0x3788a0: 0x3c010057
    ctx->pc = 0x3788a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3788a4: 0x9029af38
    ctx->pc = 0x3788a4u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946616)));
    // 0x3788a8: 0x11200014
    ctx->pc = 0x3788A8u;
    {
        const bool branch_taken_0x3788a8 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        if (branch_taken_0x3788a8) {
            ctx->pc = 0x3788FCu;
            goto label_3788fc;
        }
    }
    ctx->pc = 0x3788B0u;
    // 0x3788b0: 0x3c010057
    ctx->pc = 0x3788b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3788b4: 0x8c29ba90
    ctx->pc = 0x3788b4u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x3788b8: 0xfd280000
    ctx->pc = 0x3788b8u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 8));
    // 0x3788bc: 0x3c010057
    ctx->pc = 0x3788bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3788c0: 0xfd270008
    ctx->pc = 0x3788c0u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 7));
    // 0x3788c4: 0x8c29ba90
    ctx->pc = 0x3788c4u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x3788c8: 0x25290010
    ctx->pc = 0x3788c8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 16));
    // 0x3788cc: 0x3c010057
    ctx->pc = 0x3788ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3788d0: 0xac29ba90
    ctx->pc = 0x3788d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 9));
    // 0x3788d4: 0x3c010057
    ctx->pc = 0x3788d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3788d8: 0x8c29ba90
    ctx->pc = 0x3788d8u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x3788dc: 0xfd260000
    ctx->pc = 0x3788dcu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 6));
    // 0x3788e0: 0x3c010057
    ctx->pc = 0x3788e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3788e4: 0xfd250008
    ctx->pc = 0x3788e4u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 5));
    // 0x3788e8: 0x8c29ba90
    ctx->pc = 0x3788e8u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x3788ec: 0x25290010
    ctx->pc = 0x3788ecu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 16));
    // 0x3788f0: 0x3c010057
    ctx->pc = 0x3788f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3788f4: 0x10000013
    ctx->pc = 0x3788F4u;
    {
        const bool branch_taken_0x3788f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3788F8u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 9));
        if (branch_taken_0x3788f4) {
            ctx->pc = 0x378944u;
            goto label_378944;
        }
    }
    ctx->pc = 0x3788FCu;
label_3788fc:
    // 0x3788fc: 0x3c010057
    ctx->pc = 0x3788fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378900: 0x8c29ba90
    ctx->pc = 0x378900u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378904: 0xfd240000
    ctx->pc = 0x378904u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 4));
    // 0x378908: 0x3c010057
    ctx->pc = 0x378908u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37890c: 0xfd270008
    ctx->pc = 0x37890cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 7));
    // 0x378910: 0x8c29ba90
    ctx->pc = 0x378910u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378914: 0x25290010
    ctx->pc = 0x378914u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 16));
    // 0x378918: 0x3c010057
    ctx->pc = 0x378918u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37891c: 0xac29ba90
    ctx->pc = 0x37891cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 9));
    // 0x378920: 0x3c010057
    ctx->pc = 0x378920u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378924: 0x8c29ba90
    ctx->pc = 0x378924u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378928: 0xfd260000
    ctx->pc = 0x378928u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 6));
    // 0x37892c: 0x3c010057
    ctx->pc = 0x37892cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378930: 0xfd250008
    ctx->pc = 0x378930u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 5));
    // 0x378934: 0x8c29ba90
    ctx->pc = 0x378934u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378938: 0x25290010
    ctx->pc = 0x378938u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 16));
    // 0x37893c: 0x3c010057
    ctx->pc = 0x37893cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378940: 0xac29ba90
    ctx->pc = 0x378940u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 9));
label_378944:
    // 0x378944: 0x482d
    ctx->pc = 0x378944u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_378948:
    // 0x378948: 0x9a63c
    ctx->pc = 0x378948u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 9) << (32 + 24));
    // 0x37894c: 0x3c010057
    ctx->pc = 0x37894cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378950: 0x14a63f
    ctx->pc = 0x378950u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 24));
    // 0x378954: 0x8c32ba90
    ctx->pc = 0x378954u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378958: 0x14a100
    ctx->pc = 0x378958u;
    SET_GPR_U32(ctx, 20, SLL32(GPR_U32(ctx, 20), 4));
    // 0x37895c: 0x25290001
    ctx->pc = 0x37895cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x378960: 0x29da021
    ctx->pc = 0x378960u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x378964: 0x94e3c
    ctx->pc = 0x378964u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 24));
    // 0x378968: 0x269500a0
    ctx->pc = 0x378968u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 20), 160));
    // 0x37896c: 0x94e3f
    ctx->pc = 0x37896cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 24));
    // 0x378970: 0x8eb70004
    ctx->pc = 0x378970u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x378974: 0x29340003
    ctx->pc = 0x378974u;
    SET_GPR_U32(ctx, 20, SLT32(GPR_S32(ctx, 9), 3));
    // 0x378978: 0x8eb60000
    ctx->pc = 0x378978u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x37897c: 0x3c010057
    ctx->pc = 0x37897cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378980: 0x17bc38
    ctx->pc = 0x378980u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << 16);
    // 0x378984: 0x8eb50008
    ctx->pc = 0x378984u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x378988: 0x2d7b025
    ctx->pc = 0x378988u;
    SET_GPR_U32(ctx, 22, OR32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
    // 0x37898c: 0x15a83c
    ctx->pc = 0x37898cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 0));
    // 0x378990: 0x2b6a825
    ctx->pc = 0x378990u;
    SET_GPR_U32(ctx, 21, OR32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    // 0x378994: 0x2a3a825
    ctx->pc = 0x378994u;
    SET_GPR_U32(ctx, 21, OR32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x378998: 0xfe550000
    ctx->pc = 0x378998u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 21));
    // 0x37899c: 0xfe420008
    ctx->pc = 0x37899cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x3789a0: 0x8c32ba90
    ctx->pc = 0x3789a0u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x3789a4: 0x26520010
    ctx->pc = 0x3789a4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 16));
    // 0x3789a8: 0x3c010057
    ctx->pc = 0x3789a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3789ac: 0x1680ffe6
    ctx->pc = 0x3789ACu;
    {
        const bool branch_taken_0x3789ac = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        ctx->pc = 0x3789B0u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 18));
        if (branch_taken_0x3789ac) {
            ctx->pc = 0x378948u;
            goto label_378948;
        }
    }
    ctx->pc = 0x3789B4u;
    // 0x3789b4: 0x26310001
    ctx->pc = 0x3789b4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_3789b8:
    // 0x3789b8: 0x230482b
    ctx->pc = 0x3789b8u;
    SET_GPR_U32(ctx, 9, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x3789bc: 0x1520ff8b
    ctx->pc = 0x3789BCu;
    {
        const bool branch_taken_0x3789bc = (GPR_U32(ctx, 9) != GPR_U32(ctx, 0));
        ctx->pc = 0x3789C0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x3789bc) {
            ctx->pc = 0x3787ECu;
            goto label_3787ec;
        }
    }
    ctx->pc = 0x3789C4u;
    // 0x3789c4: 0x24020001
    ctx->pc = 0x3789c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_3789c8:
    // 0x3789c8: 0xdfbf0090
    ctx->pc = 0x3789c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3789cc: 0x7bbe0080
    ctx->pc = 0x3789ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3789d0: 0x7bb70070
    ctx->pc = 0x3789d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3789d4: 0x7bb60060
    ctx->pc = 0x3789d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3789d8: 0x7bb50050
    ctx->pc = 0x3789d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3789dc: 0x7bb40040
    ctx->pc = 0x3789dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3789e0: 0x7bb30030
    ctx->pc = 0x3789e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3789e4: 0x7bb20020
    ctx->pc = 0x3789e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3789e8: 0x7bb10010
    ctx->pc = 0x3789e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3789ec: 0x7bb00000
    ctx->pc = 0x3789ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3789f0: 0x3e00008
    ctx->pc = 0x3789F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3789F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x378054u: goto label_378054;
            case 0x3780F4u: goto label_3780f4;
            case 0x378130u: goto label_378130;
            case 0x378180u: goto label_378180;
            case 0x378190u: goto label_378190;
            case 0x3781B8u: goto label_3781b8;
            case 0x3782CCu: goto label_3782cc;
            case 0x3782E8u: goto label_3782e8;
            case 0x3782ECu: goto label_3782ec;
            case 0x378320u: goto label_378320;
            case 0x378328u: goto label_378328;
            case 0x378398u: goto label_378398;
            case 0x3783A0u: goto label_3783a0;
            case 0x3783B8u: goto label_3783b8;
            case 0x3783C0u: goto label_3783c0;
            case 0x3783D8u: goto label_3783d8;
            case 0x3783E0u: goto label_3783e0;
            case 0x3783F4u: goto label_3783f4;
            case 0x378408u: goto label_378408;
            case 0x378410u: goto label_378410;
            case 0x378480u: goto label_378480;
            case 0x3785FCu: goto label_3785fc;
            case 0x378648u: goto label_378648;
            case 0x378768u: goto label_378768;
            case 0x3787ECu: goto label_3787ec;
            case 0x3788FCu: goto label_3788fc;
            case 0x378944u: goto label_378944;
            case 0x378948u: goto label_378948;
            case 0x3789B8u: goto label_3789b8;
            case 0x3789C8u: goto label_3789c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3789F8u;
    // 0x3789f8: 0x0
    ctx->pc = 0x3789f8u;
    // NOP
    // 0x3789fc: 0x0
    ctx->pc = 0x3789fcu;
    // NOP
}
