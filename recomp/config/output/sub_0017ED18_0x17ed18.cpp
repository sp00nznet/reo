#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017ED18
// Address: 0x17ed18 - 0x17eda0
void sub_0017ED18_0x17ed18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17ed18u;

    // 0x17ed18: 0x27bdffd0
    ctx->pc = 0x17ed18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17ed1c: 0xffb10010
    ctx->pc = 0x17ed1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17ed20: 0xffb00000
    ctx->pc = 0x17ed20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17ed24: 0x80882d
    ctx->pc = 0x17ed24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed28: 0xffbf0020
    ctx->pc = 0x17ed28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17ed2c: 0xc047598
    ctx->pc = 0x17ED2Cu;
    SET_GPR_U32(ctx, 31, 0x17ED34u);
    ctx->pc = 0x17ED30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ED34u; }
    }
    if (ctx->pc != 0x17ED34u) { return; }
    ctx->pc = 0x17ED34u;
    // 0x17ed34: 0x7a080000
    ctx->pc = 0x17ed34u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17ed38: 0x7a090010
    ctx->pc = 0x17ed38u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x17ed3c: 0x7a0a0020
    ctx->pc = 0x17ed3cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17ed40: 0x7a0b0030
    ctx->pc = 0x17ed40u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x17ed44: 0x71286488
    ctx->pc = 0x17ed44u;
    SET_GPR_VEC(ctx, 12, PS2_PEXTLW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x17ed48: 0x71286ca8
    ctx->pc = 0x17ed48u;
    SET_GPR_VEC(ctx, 13, PS2_PEXTUW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x17ed4c: 0x716a7488
    ctx->pc = 0x17ed4cu;
    SET_GPR_VEC(ctx, 14, PS2_PEXTLW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x17ed50: 0x716a7ca8
    ctx->pc = 0x17ed50u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x17ed54: 0x71cc4389
    ctx->pc = 0x17ed54u;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x17ed58: 0x718e4ba9
    ctx->pc = 0x17ed58u;
    SET_GPR_VEC(ctx, 9, _mm_unpackhi_epi64(GPR_VEC(ctx, 12), GPR_VEC(ctx, 14)));
    // 0x17ed5c: 0x71ed5389
    ctx->pc = 0x17ed5cu;
    SET_GPR_VEC(ctx, 10, _mm_unpacklo_epi64(GPR_VEC(ctx, 15), GPR_VEC(ctx, 13)));
    // 0x17ed60: 0x71af5ba9
    ctx->pc = 0x17ed60u;
    SET_GPR_VEC(ctx, 11, _mm_unpackhi_epi64(GPR_VEC(ctx, 13), GPR_VEC(ctx, 15)));
    // 0x17ed64: 0x7e280000
    ctx->pc = 0x17ed64u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 8));
    // 0x17ed68: 0x7e290010
    ctx->pc = 0x17ed68u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 9));
    // 0x17ed6c: 0x7e2a0020
    ctx->pc = 0x17ed6cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 10));
    // 0x17ed70: 0x7e2b0030
    ctx->pc = 0x17ed70u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 11));
    // 0x17ed74: 0x10400005
    ctx->pc = 0x17ED74u;
    {
        const bool branch_taken_0x17ed74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17ED78u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x17ed74) {
            ctx->pc = 0x17ED8Cu;
            goto label_17ed8c;
        }
    }
    ctx->pc = 0x17ED7Cu;
    // 0x17ed7c: 0xdfb10010
    ctx->pc = 0x17ed7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ed80: 0xdfb00000
    ctx->pc = 0x17ed80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ed84: 0x80475ae
    ctx->pc = 0x17ED84u;
    ctx->pc = 0x17ED88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x11D6B8u;
    sub_0011D6B8_0x11d6b8(rdram, ctx, runtime); return;
    ctx->pc = 0x17ED8Cu;
label_17ed8c:
    // 0x17ed8c: 0xdfb10010
    ctx->pc = 0x17ed8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ed90: 0xdfb00000
    ctx->pc = 0x17ed90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ed94: 0x3e00008
    ctx->pc = 0x17ED94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17ED98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17ED8Cu: goto label_17ed8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17ED9Cu;
    // 0x17ed9c: 0x0
    ctx->pc = 0x17ed9cu;
    // NOP
}
