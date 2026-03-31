#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017F158
// Address: 0x17f158 - 0x17f1d8
void sub_0017F158_0x17f158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17f158u;

    // 0x17f158: 0x27bdffc0
    ctx->pc = 0x17f158u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17f15c: 0xffb20020
    ctx->pc = 0x17f15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17f160: 0xffb10010
    ctx->pc = 0x17f160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17f164: 0x80902d
    ctx->pc = 0x17f164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f168: 0xffb00000
    ctx->pc = 0x17f168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17f16c: 0xa0882d
    ctx->pc = 0x17f16cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f170: 0xffbf0030
    ctx->pc = 0x17f170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17f174: 0xc047598
    ctx->pc = 0x17F174u;
    SET_GPR_U32(ctx, 31, 0x17F17Cu);
    ctx->pc = 0x17F178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F17Cu; }
    }
    if (ctx->pc != 0x17F17Cu) { return; }
    ctx->pc = 0x17F17Cu;
    // 0x17f17c: 0xda040000
    ctx->pc = 0x17f17cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17f180: 0xda250030
    ctx->pc = 0x17f180u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x17f184: 0x7a270000
    ctx->pc = 0x17f184u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17f188: 0x7a280010
    ctx->pc = 0x17f188u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17f18c: 0x7a290020
    ctx->pc = 0x17f18cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x17f190: 0x4bc42968
    ctx->pc = 0x17f190u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17f194: 0x7e470000
    ctx->pc = 0x17f194u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 7));
    // 0x17f198: 0x7e480010
    ctx->pc = 0x17f198u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 8));
    // 0x17f19c: 0x7e490020
    ctx->pc = 0x17f19cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 9));
    // 0x17f1a0: 0xfa450030
    ctx->pc = 0x17f1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x17f1a4: 0x10400006
    ctx->pc = 0x17F1A4u;
    {
        const bool branch_taken_0x17f1a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F1A8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x17f1a4) {
            ctx->pc = 0x17F1C0u;
            goto label_17f1c0;
        }
    }
    ctx->pc = 0x17F1ACu;
    // 0x17f1ac: 0xdfb20020
    ctx->pc = 0x17f1acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f1b0: 0xdfb10010
    ctx->pc = 0x17f1b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f1b4: 0xdfb00000
    ctx->pc = 0x17f1b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f1b8: 0x80475ae
    ctx->pc = 0x17F1B8u;
    ctx->pc = 0x17F1BCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x11D6B8u;
    sub_0011D6B8_0x11d6b8(rdram, ctx, runtime); return;
    ctx->pc = 0x17F1C0u;
label_17f1c0:
    // 0x17f1c0: 0xdfb20020
    ctx->pc = 0x17f1c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f1c4: 0xdfb10010
    ctx->pc = 0x17f1c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f1c8: 0xdfb00000
    ctx->pc = 0x17f1c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f1cc: 0x3e00008
    ctx->pc = 0x17F1CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F1D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F1C0u: goto label_17f1c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17F1D4u;
    // 0x17f1d4: 0x0
    ctx->pc = 0x17f1d4u;
    // NOP
}
