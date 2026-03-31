#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001328B8
// Address: 0x1328b8 - 0x132978
void sub_001328B8_0x1328b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1328b8u;

    // 0x1328b8: 0x27bdfff0
    ctx->pc = 0x1328b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1328bc: 0x14800006
    ctx->pc = 0x1328BCu;
    {
        const bool branch_taken_0x1328bc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1328C0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x1328bc) {
            ctx->pc = 0x1328D8u;
            goto label_1328d8;
        }
    }
    ctx->pc = 0x1328C4u;
    // 0x1328c4: 0x3c040024
    ctx->pc = 0x1328c4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1328c8: 0xdfbf0000
    ctx->pc = 0x1328c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1328cc: 0x2484b1d8
    ctx->pc = 0x1328ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947288));
    // 0x1328d0: 0x804a034
    ctx->pc = 0x1328D0u;
    ctx->pc = 0x1328D4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1280D0u;
    sub_001280D0_0x1280d0(rdram, ctx, runtime); return;
    ctx->pc = 0x1328D8u;
label_1328d8:
    // 0x1328d8: 0xdfbf0000
    ctx->pc = 0x1328d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1328dc: 0xac850038
    ctx->pc = 0x1328dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
    // 0x1328e0: 0x3e00008
    ctx->pc = 0x1328E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1328E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1328D8u: goto label_1328d8;
            case 0x132910u: goto label_132910;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1328E8u;
    // 0x1328e8: 0x27bdfff0
    ctx->pc = 0x1328e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1328ec: 0x80382d
    ctx->pc = 0x1328ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1328f0: 0xffbf0000
    ctx->pc = 0x1328f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1328f4: 0x14e00006
    ctx->pc = 0x1328F4u;
    {
        const bool branch_taken_0x1328f4 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x1328F8u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1328f4) {
            ctx->pc = 0x132910u;
            goto label_132910;
        }
    }
    ctx->pc = 0x1328FCu;
    // 0x1328fc: 0x3c040024
    ctx->pc = 0x1328fcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x132900: 0xdfbf0000
    ctx->pc = 0x132900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132904: 0x2484b208
    ctx->pc = 0x132904u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947336));
    // 0x132908: 0x804a034
    ctx->pc = 0x132908u;
    ctx->pc = 0x13290Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1280D0u;
    sub_001280D0_0x1280d0(rdram, ctx, runtime); return;
    ctx->pc = 0x132910u;
label_132910:
    // 0x132910: 0x44860000
    ctx->pc = 0x132910u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 6);
    // 0x132914: 0x46800020
    ctx->pc = 0x132914u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x132918: 0x84e5003c
    ctx->pc = 0x132918u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x13291c: 0xdfbf0000
    ctx->pc = 0x13291cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132920: 0x46006002
    ctx->pc = 0x132920u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x132924: 0x46000064
    ctx->pc = 0x132924u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x132928: 0x44030800
    ctx->pc = 0x132928u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x13292c: 0x2464001f
    ctx->pc = 0x13292cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 31));
    // 0x132930: 0x28620000
    ctx->pc = 0x132930u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 0));
    // 0x132934: 0x82180b
    ctx->pc = 0x132934u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
    // 0x132938: 0x31943
    ctx->pc = 0x132938u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x13293c: 0x681818
    ctx->pc = 0x13293cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x132940: 0x310c0
    ctx->pc = 0x132940u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
    // 0x132944: 0x431021
    ctx->pc = 0x132944u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x132948: 0x21040
    ctx->pc = 0x132948u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x13294c: 0x244407ff
    ctx->pc = 0x13294cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 2047));
    // 0x132950: 0x40182d
    ctx->pc = 0x132950u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132954: 0x28420000
    ctx->pc = 0x132954u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 0));
    // 0x132958: 0x82180b
    ctx->pc = 0x132958u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
    // 0x13295c: 0x31ac3
    ctx->pc = 0x13295cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x132960: 0x65102a
    ctx->pc = 0x132960u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 5)));
    // 0x132964: 0x62280b
    ctx->pc = 0x132964u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
    // 0x132968: 0xa4e5003e
    ctx->pc = 0x132968u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 62), (uint16_t)GPR_U32(ctx, 5));
    // 0x13296c: 0x3e00008
    ctx->pc = 0x13296Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132970u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1328D8u: goto label_1328d8;
            case 0x132910u: goto label_132910;
            default: break;
        }
        return;
    }
    ctx->pc = 0x132974u;
    // 0x132974: 0x0
    ctx->pc = 0x132974u;
    // NOP
}
