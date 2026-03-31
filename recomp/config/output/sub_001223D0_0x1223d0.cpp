#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001223D0
// Address: 0x1223d0 - 0x1224a8
void sub_001223D0_0x1223d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1223d0u;

    // 0x1223d0: 0x27bdffd0
    ctx->pc = 0x1223d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1223d4: 0x46006006
    ctx->pc = 0x1223d4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x1223d8: 0xffbf0020
    ctx->pc = 0x1223d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1223dc: 0xe7a00010
    ctx->pc = 0x1223dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1223e0: 0x3c027fff
    ctx->pc = 0x1223e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x1223e4: 0x3c033f49
    ctx->pc = 0x1223e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16201 << 16));
    // 0x1223e8: 0x8fa40010
    ctx->pc = 0x1223e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1223ec: 0x3442ffff
    ctx->pc = 0x1223ecu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1223f0: 0x34630fd8
    ctx->pc = 0x1223f0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 4056));
    // 0x1223f4: 0x821024
    ctx->pc = 0x1223f4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1223f8: 0x62182a
    ctx->pc = 0x1223f8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x1223fc: 0x14600006
    ctx->pc = 0x1223FCu;
    {
        const bool branch_taken_0x1223fc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1223fc) {
            ctx->pc = 0x122418u;
            goto label_122418;
        }
    }
    ctx->pc = 0x122404u;
    // 0x122404: 0x44806800
    ctx->pc = 0x122404u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x122408: 0xc0483da
    ctx->pc = 0x122408u;
    SET_GPR_U32(ctx, 31, 0x122410u);
    ctx->pc = 0x120F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00120F68_0x120f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122410u; }
    }
    if (ctx->pc != 0x122410u) { return; }
    ctx->pc = 0x122410u;
    // 0x122410: 0x10000022
    ctx->pc = 0x122410u;
    {
        const bool branch_taken_0x122410 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x122414u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x122410) {
            ctx->pc = 0x12249Cu;
            goto label_12249c;
        }
    }
    ctx->pc = 0x122418u;
label_122418:
    // 0x122418: 0xc0482ba
    ctx->pc = 0x122418u;
    SET_GPR_U32(ctx, 31, 0x122420u);
    ctx->pc = 0x12241Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x120AE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00120AE8_0x120ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122420u; }
    }
    if (ctx->pc != 0x122420u) { return; }
    ctx->pc = 0x122420u;
    // 0x122420: 0x24030001
    ctx->pc = 0x122420u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x122424: 0x30440003
    ctx->pc = 0x122424u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 3));
    // 0x122428: 0x1083000f
    ctx->pc = 0x122428u;
    {
        const bool branch_taken_0x122428 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x12242Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 2));
        if (branch_taken_0x122428) {
            ctx->pc = 0x122468u;
            goto label_122468;
        }
    }
    ctx->pc = 0x122430u;
    // 0x122430: 0x50400005
    ctx->pc = 0x122430u;
    {
        const bool branch_taken_0x122430 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x122430) {
            ctx->pc = 0x122434u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
            ctx->pc = 0x122448u;
            goto label_122448;
        }
    }
    ctx->pc = 0x122438u;
    // 0x122438: 0x10800007
    ctx->pc = 0x122438u;
    {
        const bool branch_taken_0x122438 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x12243Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x122438) {
            ctx->pc = 0x122458u;
            goto label_122458;
        }
    }
    ctx->pc = 0x122440u;
    // 0x122440: 0x10000013
    ctx->pc = 0x122440u;
    {
        const bool branch_taken_0x122440 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x122444u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x122440) {
            ctx->pc = 0x122490u;
            goto label_122490;
        }
    }
    ctx->pc = 0x122448u;
label_122448:
    // 0x122448: 0x1082000d
    ctx->pc = 0x122448u;
    {
        const bool branch_taken_0x122448 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x12244Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x122448) {
            ctx->pc = 0x122480u;
            goto label_122480;
        }
    }
    ctx->pc = 0x122450u;
    // 0x122450: 0x1000000f
    ctx->pc = 0x122450u;
    {
        const bool branch_taken_0x122450 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x122454u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x122450) {
            ctx->pc = 0x122490u;
            goto label_122490;
        }
    }
    ctx->pc = 0x122458u;
label_122458:
    // 0x122458: 0xc0483da
    ctx->pc = 0x122458u;
    SET_GPR_U32(ctx, 31, 0x122460u);
    ctx->pc = 0x12245Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x120F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00120F68_0x120f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122460u; }
    }
    if (ctx->pc != 0x122460u) { return; }
    ctx->pc = 0x122460u;
    // 0x122460: 0x1000000e
    ctx->pc = 0x122460u;
    {
        const bool branch_taken_0x122460 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x122464u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x122460) {
            ctx->pc = 0x12249Cu;
            goto label_12249c;
        }
    }
    ctx->pc = 0x122468u;
label_122468:
    // 0x122468: 0xc7ac0000
    ctx->pc = 0x122468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12246c: 0x24040001
    ctx->pc = 0x12246cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x122470: 0xc048648
    ctx->pc = 0x122470u;
    SET_GPR_U32(ctx, 31, 0x122478u);
    ctx->pc = 0x122474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x121920u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00121920_0x121920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122478u; }
    }
    if (ctx->pc != 0x122478u) { return; }
    ctx->pc = 0x122478u;
    // 0x122478: 0x10000007
    ctx->pc = 0x122478u;
    {
        const bool branch_taken_0x122478 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12247Cu;
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        if (branch_taken_0x122478) {
            ctx->pc = 0x122498u;
            goto label_122498;
        }
    }
    ctx->pc = 0x122480u;
label_122480:
    // 0x122480: 0xc0483da
    ctx->pc = 0x122480u;
    SET_GPR_U32(ctx, 31, 0x122488u);
    ctx->pc = 0x122484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x120F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00120F68_0x120f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122488u; }
    }
    if (ctx->pc != 0x122488u) { return; }
    ctx->pc = 0x122488u;
    // 0x122488: 0x10000003
    ctx->pc = 0x122488u;
    {
        const bool branch_taken_0x122488 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12248Cu;
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        if (branch_taken_0x122488) {
            ctx->pc = 0x122498u;
            goto label_122498;
        }
    }
    ctx->pc = 0x122490u;
label_122490:
    // 0x122490: 0xc048648
    ctx->pc = 0x122490u;
    SET_GPR_U32(ctx, 31, 0x122498u);
    ctx->pc = 0x122494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x121920u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00121920_0x121920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122498u; }
    }
    if (ctx->pc != 0x122498u) { return; }
    ctx->pc = 0x122498u;
label_122498:
    // 0x122498: 0xdfbf0020
    ctx->pc = 0x122498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12249c:
    // 0x12249c: 0x3e00008
    ctx->pc = 0x12249Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1224A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122418u: goto label_122418;
            case 0x122448u: goto label_122448;
            case 0x122458u: goto label_122458;
            case 0x122468u: goto label_122468;
            case 0x122480u: goto label_122480;
            case 0x122490u: goto label_122490;
            case 0x122498u: goto label_122498;
            case 0x12249Cu: goto label_12249c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1224A4u;
    // 0x1224a4: 0x0
    ctx->pc = 0x1224a4u;
    // NOP
}
