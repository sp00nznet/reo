#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00130FE8
// Address: 0x130fe8 - 0x131088
void sub_00130FE8_0x130fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x130fe8u;

    // 0x130fe8: 0x27bdffe0
    ctx->pc = 0x130fe8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x130fec: 0xffb00000
    ctx->pc = 0x130fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130ff0: 0x80802d
    ctx->pc = 0x130ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ff4: 0xffb10008
    ctx->pc = 0x130ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x130ff8: 0xffb20010
    ctx->pc = 0x130ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x130ffc: 0xffbf0018
    ctx->pc = 0x130ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x131000: 0x8e02004c
    ctx->pc = 0x131000u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x131004: 0x50400015
    ctx->pc = 0x131004u;
    {
        const bool branch_taken_0x131004 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x131004) {
            ctx->pc = 0x131008u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x13105Cu;
            goto label_13105c;
        }
    }
    ctx->pc = 0x13100Cu;
    // 0x13100c: 0x8e020008
    ctx->pc = 0x13100cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x131010: 0x54400012
    ctx->pc = 0x131010u;
    {
        const bool branch_taken_0x131010 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x131010) {
            ctx->pc = 0x131014u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x13105Cu;
            goto label_13105c;
        }
    }
    ctx->pc = 0x131018u;
    // 0x131018: 0x24020001
    ctx->pc = 0x131018u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x13101c: 0x3c030022
    ctx->pc = 0x13101cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x131020: 0xa2020041
    ctx->pc = 0x131020u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 65), (uint8_t)GPR_U32(ctx, 2));
    // 0x131024: 0x2471a8b0
    ctx->pc = 0x131024u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 4294944944));
    // 0x131028: 0x24120001
    ctx->pc = 0x131028u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x13102c: 0x0
    ctx->pc = 0x13102cu;
    // NOP
label_131030:
    // 0x131030: 0xc050864
    ctx->pc = 0x131030u;
    SET_GPR_U32(ctx, 31, 0x131038u);
    ctx->pc = 0x131034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x142190u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00142190_0x142190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131038u; }
    }
    if (ctx->pc != 0x131038u) { return; }
    ctx->pc = 0x131038u;
    // 0x131038: 0x14520004
    ctx->pc = 0x131038u;
    {
        const bool branch_taken_0x131038 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        ctx->pc = 0x13103Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x131038) {
            ctx->pc = 0x13104Cu;
            goto label_13104c;
        }
    }
    ctx->pc = 0x131040u;
    // 0x131040: 0xc04c2de
    ctx->pc = 0x131040u;
    SET_GPR_U32(ctx, 31, 0x131048u);
    ctx->pc = 0x130B78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130B78_0x130b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131048u; }
    }
    if (ctx->pc != 0x131048u) { return; }
    ctx->pc = 0x131048u;
    // 0x131048: 0xae200000
    ctx->pc = 0x131048u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_13104c:
    // 0x13104c: 0x82020041
    ctx->pc = 0x13104cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 65)));
    // 0x131050: 0x1440fff7
    ctx->pc = 0x131050u;
    {
        const bool branch_taken_0x131050 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x131050) {
            ctx->pc = 0x131030u;
            goto label_131030;
        }
    }
    ctx->pc = 0x131058u;
    // 0x131058: 0xdfb00000
    ctx->pc = 0x131058u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13105c:
    // 0x13105c: 0xdfb10008
    ctx->pc = 0x13105cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x131060: 0xdfb20010
    ctx->pc = 0x131060u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131064: 0xdfbf0018
    ctx->pc = 0x131064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x131068: 0x3e00008
    ctx->pc = 0x131068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13106Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131030u: goto label_131030;
            case 0x13104Cu: goto label_13104c;
            case 0x13105Cu: goto label_13105c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x131070u;
    // 0x131070: 0x27bdfff0
    ctx->pc = 0x131070u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x131074: 0xa0202d
    ctx->pc = 0x131074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131078: 0xffbf0000
    ctx->pc = 0x131078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13107c: 0xdfbf0000
    ctx->pc = 0x13107cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131080: 0x804a034
    ctx->pc = 0x131080u;
    ctx->pc = 0x131084u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1280D0u;
    sub_001280D0_0x1280d0(rdram, ctx, runtime); return;
    ctx->pc = 0x131088u;
}
