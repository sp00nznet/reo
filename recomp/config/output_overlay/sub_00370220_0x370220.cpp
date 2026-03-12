#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00370220
// Address: 0x370220 - 0x3703a0
void sub_00370220_0x370220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x370220u;

    // 0x370220: 0x27bdffb0
    ctx->pc = 0x370220u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x370224: 0x3084ffff
    ctx->pc = 0x370224u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x370228: 0xffbf0040
    ctx->pc = 0x370228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x37022c: 0x7fb20030
    ctx->pc = 0x37022cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x370230: 0x7fb10020
    ctx->pc = 0x370230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x370234: 0xa0902d
    ctx->pc = 0x370234u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370238: 0x7fb00010
    ctx->pc = 0x370238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37023c: 0xc0882d
    ctx->pc = 0x37023cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370240: 0xe7b50004
    ctx->pc = 0x370240u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x370244: 0xe0802d
    ctx->pc = 0x370244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370248: 0xc0647e0
    ctx->pc = 0x370248u;
    SET_GPR_U32(ctx, 31, 0x370250u);
    ctx->pc = 0x37024Cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->pc = 0x191F80u;
    {
        auto targetFn = runtime->lookupFunction(0x191F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370250u; }
        if (ctx->pc != 0x370250u) { return; }
    }
    ctx->pc = 0x370250u;
    // 0x370250: 0x3244ffff
    ctx->pc = 0x370250u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 18), 65535));
    // 0x370254: 0xc0647e0
    ctx->pc = 0x370254u;
    SET_GPR_U32(ctx, 31, 0x37025Cu);
    ctx->pc = 0x370258u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x191F80u;
    {
        auto targetFn = runtime->lookupFunction(0x191F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37025Cu; }
        if (ctx->pc != 0x37025Cu) { return; }
    }
    ctx->pc = 0x37025Cu;
    // 0x37025c: 0x3224ffff
    ctx->pc = 0x37025cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 17), 65535));
    // 0x370260: 0xc0647e0
    ctx->pc = 0x370260u;
    SET_GPR_U32(ctx, 31, 0x370268u);
    ctx->pc = 0x370264u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x191F80u;
    {
        auto targetFn = runtime->lookupFunction(0x191F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370268u; }
        if (ctx->pc != 0x370268u) { return; }
    }
    ctx->pc = 0x370268u;
    // 0x370268: 0x200202d
    ctx->pc = 0x370268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37026c: 0x4600ab06
    ctx->pc = 0x37026cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x370270: 0x4600a346
    ctx->pc = 0x370270u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x370274: 0xc064284
    ctx->pc = 0x370274u;
    SET_GPR_U32(ctx, 31, 0x37027Cu);
    ctx->pc = 0x370278u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x190A10u;
    {
        auto targetFn = runtime->lookupFunction(0x190A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37027Cu; }
        if (ctx->pc != 0x37027Cu) { return; }
    }
    ctx->pc = 0x37027Cu;
    // 0x37027c: 0xdfbf0040
    ctx->pc = 0x37027cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x370280: 0xc7b50004
    ctx->pc = 0x370280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x370284: 0x7bb20030
    ctx->pc = 0x370284u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x370288: 0xc7b40000
    ctx->pc = 0x370288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x37028c: 0x7bb10020
    ctx->pc = 0x37028cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x370290: 0x7bb00010
    ctx->pc = 0x370290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x370294: 0x3e00008
    ctx->pc = 0x370294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370298u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37029Cu;
    // 0x37029c: 0x0
    ctx->pc = 0x37029cu;
    // NOP
    // 0x3702a0: 0x27bdffb0
    ctx->pc = 0x3702a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3702a4: 0x3084ffff
    ctx->pc = 0x3702a4u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x3702a8: 0xffbf0040
    ctx->pc = 0x3702a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3702ac: 0x7fb20030
    ctx->pc = 0x3702acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3702b0: 0x7fb10020
    ctx->pc = 0x3702b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3702b4: 0xa0902d
    ctx->pc = 0x3702b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3702b8: 0x7fb00010
    ctx->pc = 0x3702b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3702bc: 0xc0882d
    ctx->pc = 0x3702bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3702c0: 0xe7b50004
    ctx->pc = 0x3702c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3702c4: 0xe0802d
    ctx->pc = 0x3702c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3702c8: 0xc0647e0
    ctx->pc = 0x3702C8u;
    SET_GPR_U32(ctx, 31, 0x3702D0u);
    ctx->pc = 0x3702CCu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->pc = 0x191F80u;
    {
        auto targetFn = runtime->lookupFunction(0x191F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3702D0u; }
        if (ctx->pc != 0x3702D0u) { return; }
    }
    ctx->pc = 0x3702D0u;
    // 0x3702d0: 0x3244ffff
    ctx->pc = 0x3702d0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 18), 65535));
    // 0x3702d4: 0xc0647e0
    ctx->pc = 0x3702D4u;
    SET_GPR_U32(ctx, 31, 0x3702DCu);
    ctx->pc = 0x3702D8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x191F80u;
    {
        auto targetFn = runtime->lookupFunction(0x191F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3702DCu; }
        if (ctx->pc != 0x3702DCu) { return; }
    }
    ctx->pc = 0x3702DCu;
    // 0x3702dc: 0x3224ffff
    ctx->pc = 0x3702dcu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 17), 65535));
    // 0x3702e0: 0xc0647e0
    ctx->pc = 0x3702E0u;
    SET_GPR_U32(ctx, 31, 0x3702E8u);
    ctx->pc = 0x3702E4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x191F80u;
    {
        auto targetFn = runtime->lookupFunction(0x191F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3702E8u; }
        if (ctx->pc != 0x3702E8u) { return; }
    }
    ctx->pc = 0x3702E8u;
    // 0x3702e8: 0x200202d
    ctx->pc = 0x3702e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3702ec: 0x4600ab06
    ctx->pc = 0x3702ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x3702f0: 0x4600a346
    ctx->pc = 0x3702f0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3702f4: 0xc06434c
    ctx->pc = 0x3702F4u;
    SET_GPR_U32(ctx, 31, 0x3702FCu);
    ctx->pc = 0x3702F8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x190D30u;
    {
        auto targetFn = runtime->lookupFunction(0x190D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3702FCu; }
        if (ctx->pc != 0x3702FCu) { return; }
    }
    ctx->pc = 0x3702FCu;
    // 0x3702fc: 0xdfbf0040
    ctx->pc = 0x3702fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x370300: 0xc7b50004
    ctx->pc = 0x370300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x370304: 0x7bb20030
    ctx->pc = 0x370304u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x370308: 0xc7b40000
    ctx->pc = 0x370308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x37030c: 0x7bb10020
    ctx->pc = 0x37030cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x370310: 0x7bb00010
    ctx->pc = 0x370310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x370314: 0x3e00008
    ctx->pc = 0x370314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370318u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37031Cu;
    // 0x37031c: 0x0
    ctx->pc = 0x37031cu;
    // NOP
    // 0x370320: 0x27bdffb0
    ctx->pc = 0x370320u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x370324: 0x3084ffff
    ctx->pc = 0x370324u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x370328: 0xffbf0040
    ctx->pc = 0x370328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x37032c: 0x7fb20030
    ctx->pc = 0x37032cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x370330: 0x7fb10020
    ctx->pc = 0x370330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x370334: 0xa0902d
    ctx->pc = 0x370334u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370338: 0x7fb00010
    ctx->pc = 0x370338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37033c: 0xc0882d
    ctx->pc = 0x37033cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370340: 0xe7b50004
    ctx->pc = 0x370340u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x370344: 0xe0802d
    ctx->pc = 0x370344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370348: 0xc0647e0
    ctx->pc = 0x370348u;
    SET_GPR_U32(ctx, 31, 0x370350u);
    ctx->pc = 0x37034Cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->pc = 0x191F80u;
    {
        auto targetFn = runtime->lookupFunction(0x191F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370350u; }
        if (ctx->pc != 0x370350u) { return; }
    }
    ctx->pc = 0x370350u;
    // 0x370350: 0x3244ffff
    ctx->pc = 0x370350u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 18), 65535));
    // 0x370354: 0xc0647e0
    ctx->pc = 0x370354u;
    SET_GPR_U32(ctx, 31, 0x37035Cu);
    ctx->pc = 0x370358u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x191F80u;
    {
        auto targetFn = runtime->lookupFunction(0x191F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37035Cu; }
        if (ctx->pc != 0x37035Cu) { return; }
    }
    ctx->pc = 0x37035Cu;
    // 0x37035c: 0x3224ffff
    ctx->pc = 0x37035cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 17), 65535));
    // 0x370360: 0xc0647e0
    ctx->pc = 0x370360u;
    SET_GPR_U32(ctx, 31, 0x370368u);
    ctx->pc = 0x370364u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x191F80u;
    {
        auto targetFn = runtime->lookupFunction(0x191F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370368u; }
        if (ctx->pc != 0x370368u) { return; }
    }
    ctx->pc = 0x370368u;
    // 0x370368: 0x200202d
    ctx->pc = 0x370368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37036c: 0x4600ab06
    ctx->pc = 0x37036cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x370370: 0x4600a346
    ctx->pc = 0x370370u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x370374: 0xc0640b4
    ctx->pc = 0x370374u;
    SET_GPR_U32(ctx, 31, 0x37037Cu);
    ctx->pc = 0x370378u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x1902D0u;
    {
        auto targetFn = runtime->lookupFunction(0x1902D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37037Cu; }
        if (ctx->pc != 0x37037Cu) { return; }
    }
    ctx->pc = 0x37037Cu;
    // 0x37037c: 0xdfbf0040
    ctx->pc = 0x37037cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x370380: 0xc7b50004
    ctx->pc = 0x370380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x370384: 0x7bb20030
    ctx->pc = 0x370384u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x370388: 0xc7b40000
    ctx->pc = 0x370388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x37038c: 0x7bb10020
    ctx->pc = 0x37038cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x370390: 0x7bb00010
    ctx->pc = 0x370390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x370394: 0x3e00008
    ctx->pc = 0x370394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370398u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37039Cu;
    // 0x37039c: 0x0
    ctx->pc = 0x37039cu;
    // NOP
}
