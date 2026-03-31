#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00111328
// Address: 0x111328 - 0x1113d0
void sub_00111328_0x111328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x111328u;

    // 0x111328: 0x27bdffe0
    ctx->pc = 0x111328u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11132c: 0xffb00000
    ctx->pc = 0x11132cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x111330: 0x80802d
    ctx->pc = 0x111330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111334: 0xffb10008
    ctx->pc = 0x111334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x111338: 0x10203f
    ctx->pc = 0x111338u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x11133c: 0x341181e0
    ctx->pc = 0x11133cu;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 0), 33248));
    // 0x111340: 0x118bfc
    ctx->pc = 0x111340u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 15));
    // 0x111344: 0xffbf0010
    ctx->pc = 0x111344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x111348: 0xc0448ba
    ctx->pc = 0x111348u;
    SET_GPR_U32(ctx, 31, 0x111350u);
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111350u; }
    }
    if (ctx->pc != 0x111350u) { return; }
    ctx->pc = 0x111350u;
    // 0x111350: 0x40202d
    ctx->pc = 0x111350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111354: 0x220282d
    ctx->pc = 0x111354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111358: 0xc04476c
    ctx->pc = 0x111358u;
    SET_GPR_U32(ctx, 31, 0x111360u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111360u; }
    }
    if (ctx->pc != 0x111360u) { return; }
    ctx->pc = 0x111360u;
    // 0x111360: 0x220282d
    ctx->pc = 0x111360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111364: 0x40202d
    ctx->pc = 0x111364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111368: 0xc04476c
    ctx->pc = 0x111368u;
    SET_GPR_U32(ctx, 31, 0x111370u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111370u; }
    }
    if (ctx->pc != 0x111370u) { return; }
    ctx->pc = 0x111370u;
    // 0x111370: 0x40882d
    ctx->pc = 0x111370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111374: 0x3c02ffff
    ctx->pc = 0x111374u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x111378: 0x2103e
    ctx->pc = 0x111378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11137c: 0x2028024
    ctx->pc = 0x11137cu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x111380: 0x10803c
    ctx->pc = 0x111380u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x111384: 0x10803f
    ctx->pc = 0x111384u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x111388: 0xc0448ba
    ctx->pc = 0x111388u;
    SET_GPR_U32(ctx, 31, 0x111390u);
    ctx->pc = 0x11138Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111390u; }
    }
    if (ctx->pc != 0x111390u) { return; }
    ctx->pc = 0x111390u;
    // 0x111390: 0x340583e0
    ctx->pc = 0x111390u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 33760));
    // 0x111394: 0x52bfc
    ctx->pc = 0x111394u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x111398: 0x6010004
    ctx->pc = 0x111398u;
    {
        const bool branch_taken_0x111398 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x111398) {
            ctx->pc = 0x1113ACu;
            goto label_1113ac;
        }
    }
    ctx->pc = 0x1113A0u;
    // 0x1113a0: 0x40202d
    ctx->pc = 0x1113a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1113a4: 0xc04473c
    ctx->pc = 0x1113A4u;
    SET_GPR_U32(ctx, 31, 0x1113ACu);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1113ACu; }
    }
    if (ctx->pc != 0x1113ACu) { return; }
    ctx->pc = 0x1113ACu;
label_1113ac:
    // 0x1113ac: 0x220202d
    ctx->pc = 0x1113acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1113b0: 0x40282d
    ctx->pc = 0x1113b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1113b4: 0xc04473c
    ctx->pc = 0x1113B4u;
    SET_GPR_U32(ctx, 31, 0x1113BCu);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1113BCu; }
    }
    if (ctx->pc != 0x1113BCu) { return; }
    ctx->pc = 0x1113BCu;
    // 0x1113bc: 0xdfb00000
    ctx->pc = 0x1113bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1113c0: 0xdfb10008
    ctx->pc = 0x1113c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1113c4: 0xdfbf0010
    ctx->pc = 0x1113c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1113c8: 0x3e00008
    ctx->pc = 0x1113C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1113CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1113ACu: goto label_1113ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1113D0u;
}
