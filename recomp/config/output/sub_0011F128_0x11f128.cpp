#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011F128
// Address: 0x11f128 - 0x11f228
void sub_0011F128_0x11f128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11f128u;

    // 0x11f128: 0x27bdffe0
    ctx->pc = 0x11f128u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11f12c: 0x3c0208ca
    ctx->pc = 0x11f12cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)2250 << 16));
    // 0x11f130: 0xffb00000
    ctx->pc = 0x11f130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11f134: 0x80802d
    ctx->pc = 0x11f134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f138: 0xffbf0010
    ctx->pc = 0x11f138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11f13c: 0xa0202d
    ctx->pc = 0x11f13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f140: 0x72020019
    ctx->pc = 0x11f140u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 16) * (uint64_t)GPR_U32(ctx, 2); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x11f144: 0x820019
    ctx->pc = 0x11f144u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_U32(ctx, 0, (uint32_t)result); }
    // 0x11f148: 0x3c05000f
    ctx->pc = 0x11f148u;
    SET_GPR_U32(ctx, 5, ((uint32_t)15 << 16));
    // 0x11f14c: 0x34a54240
    ctx->pc = 0x11f14cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 16960));
    // 0x11f150: 0x70008010
    ctx->pc = 0x11f150u;
    SET_GPR_U32(ctx, 16, ctx->hi1);
    // 0x11f154: 0x3012
    ctx->pc = 0x11f154u;
    SET_GPR_U32(ctx, 6, ctx->lo);
    // 0x11f158: 0x10803c
    ctx->pc = 0x11f158u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x11f15c: 0x6303c
    ctx->pc = 0x11f15cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11f160: 0x2010
    ctx->pc = 0x11f160u;
    SET_GPR_U32(ctx, 4, ctx->hi);
    // 0x11f164: 0x6303e
    ctx->pc = 0x11f164u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x11f168: 0x4203c
    ctx->pc = 0x11f168u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11f16c: 0x862025
    ctx->pc = 0x11f16cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x11f170: 0x70003012
    ctx->pc = 0x11f170u;
    SET_GPR_U32(ctx, 6, ctx->lo1);
    // 0x11f174: 0x6303c
    ctx->pc = 0x11f174u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11f178: 0x6303e
    ctx->pc = 0x11f178u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x11f17c: 0xc044210
    ctx->pc = 0x11F17Cu;
    SET_GPR_U32(ctx, 31, 0x11F184u);
    ctx->pc = 0x11F180u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    ctx->pc = 0x110840u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00110840_0x110840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F184u; }
    }
    if (ctx->pc != 0x11F184u) { return; }
    ctx->pc = 0x11F184u;
    // 0x11f184: 0x202102d
    ctx->pc = 0x11f184u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x11f188: 0xdfbf0010
    ctx->pc = 0x11f188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f18c: 0xdfb00000
    ctx->pc = 0x11f18cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f190: 0x3e00008
    ctx->pc = 0x11F190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F194u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F1B4u: goto label_11f1b4;
            case 0x11F1C8u: goto label_11f1c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11F198u;
    // 0x11f198: 0x27bdfff0
    ctx->pc = 0x11f198u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11f19c: 0x4800005
    ctx->pc = 0x11F19Cu;
    {
        const bool branch_taken_0x11f19c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x11F1A0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x11f19c) {
            ctx->pc = 0x11F1B4u;
            goto label_11f1b4;
        }
    }
    ctx->pc = 0x11F1A4u;
    // 0x11f1a4: 0xc0444f4
    ctx->pc = 0x11F1A4u;
    SET_GPR_U32(ctx, 31, 0x11F1ACu);
    ctx->pc = 0x1113D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001113D0_0x1113d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F1ACu; }
    }
    if (ctx->pc != 0x11F1ACu) { return; }
    ctx->pc = 0x11F1ACu;
    // 0x11f1ac: 0x10000006
    ctx->pc = 0x11F1ACu;
    {
        const bool branch_taken_0x11f1ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11F1B0u;
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x11f1ac) {
            ctx->pc = 0x11F1C8u;
            goto label_11f1c8;
        }
    }
    ctx->pc = 0x11F1B4u;
label_11f1b4:
    // 0x11f1b4: 0x4107a
    ctx->pc = 0x11f1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 1);
    // 0x11f1b8: 0x30840001
    ctx->pc = 0x11f1b8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 1));
    // 0x11f1bc: 0xc0444f4
    ctx->pc = 0x11F1BCu;
    SET_GPR_U32(ctx, 31, 0x11F1C4u);
    ctx->pc = 0x11F1C0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x1113D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001113D0_0x1113d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F1C4u; }
    }
    if (ctx->pc != 0x11F1C4u) { return; }
    ctx->pc = 0x11F1C4u;
    // 0x11f1c4: 0x46000040
    ctx->pc = 0x11f1c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_11f1c8:
    // 0x11f1c8: 0x3c014d0c
    ctx->pc = 0x11f1c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)19724 << 16));
    // 0x11f1cc: 0x3421a000
    ctx->pc = 0x11f1ccu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 40960));
    // 0x11f1d0: 0x44810000
    ctx->pc = 0x11f1d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x11f1d4: 0xdfbf0000
    ctx->pc = 0x11f1d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f1d8: 0x0
    ctx->pc = 0x11f1d8u;
    // NOP
    // 0x11f1dc: 0x0
    ctx->pc = 0x11f1dcu;
    // NOP
    // 0x11f1e0: 0x46010003
    ctx->pc = 0x11f1e0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x11f1e4: 0x3e00008
    ctx->pc = 0x11F1E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F1E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F1B4u: goto label_11f1b4;
            case 0x11F1C8u: goto label_11f1c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11F1ECu;
    // 0x11f1ec: 0x0
    ctx->pc = 0x11f1ecu;
    // NOP
    // 0x11f1f0: 0x3c014d0c
    ctx->pc = 0x11f1f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)19724 << 16));
    // 0x11f1f4: 0x3421a000
    ctx->pc = 0x11f1f4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 40960));
    // 0x11f1f8: 0x44810000
    ctx->pc = 0x11f1f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x11f1fc: 0x27bdfff0
    ctx->pc = 0x11f1fcu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11f200: 0xffbf0000
    ctx->pc = 0x11f200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11f204: 0x0
    ctx->pc = 0x11f204u;
    // NOP
    // 0x11f208: 0x0
    ctx->pc = 0x11f208u;
    // NOP
    // 0x11f20c: 0x460c0303
    ctx->pc = 0x11f20cu;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[12];
    // 0x11f210: 0xc044592
    ctx->pc = 0x11F210u;
    SET_GPR_U32(ctx, 31, 0x11F218u);
    ctx->pc = 0x111648u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111648_0x111648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F218u; }
    }
    if (ctx->pc != 0x11F218u) { return; }
    ctx->pc = 0x11F218u;
    // 0x11f218: 0xdfbf0000
    ctx->pc = 0x11f218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f21c: 0x3e00008
    ctx->pc = 0x11F21Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F220u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F1B4u: goto label_11f1b4;
            case 0x11F1C8u: goto label_11f1c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11F224u;
    // 0x11f224: 0x0
    ctx->pc = 0x11f224u;
    // NOP
}
