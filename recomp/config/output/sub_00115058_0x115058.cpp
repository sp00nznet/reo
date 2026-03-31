#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00115058
// Address: 0x115058 - 0x115100
void sub_00115058_0x115058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x115058u;

    // 0x115058: 0x27bdffc0
    ctx->pc = 0x115058u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11505c: 0xffb20020
    ctx->pc = 0x11505cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x115060: 0xffb10010
    ctx->pc = 0x115060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x115064: 0x80902d
    ctx->pc = 0x115064u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115068: 0xffbf0030
    ctx->pc = 0x115068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11506c: 0xa0882d
    ctx->pc = 0x11506cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115070: 0xffb00000
    ctx->pc = 0x115070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115074: 0x40106000
    ctx->pc = 0x115074u;
    SET_GPR_U32(ctx, 16, ctx->cop0_status);
    // 0x115078: 0x3c020001
    ctx->pc = 0x115078u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x11507c: 0x2028024
    ctx->pc = 0x11507cu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x115080: 0x12000003
    ctx->pc = 0x115080u;
    {
        const bool branch_taken_0x115080 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x115080) {
            ctx->pc = 0x115090u;
            goto label_115090;
        }
    }
    ctx->pc = 0x115088u;
    // 0x115088: 0xc047598
    ctx->pc = 0x115088u;
    SET_GPR_U32(ctx, 31, 0x115090u);
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115090u; }
    }
    if (ctx->pc != 0x115090u) { return; }
    ctx->pc = 0x115090u;
label_115090:
    // 0x115090: 0x3c04ffff
    ctx->pc = 0x115090u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
    // 0x115094: 0x3484ffc0
    ctx->pc = 0x115094u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65472));
    // 0x115098: 0x2242824
    ctx->pc = 0x115098u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x11509c: 0xc0453ec
    ctx->pc = 0x11509Cu;
    SET_GPR_U32(ctx, 31, 0x1150A4u);
    ctx->pc = 0x1150A0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->pc = 0x114FB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114FB0_0x114fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1150A4u; }
    }
    if (ctx->pc != 0x1150A4u) { return; }
    ctx->pc = 0x1150A4u;
    // 0x1150a4: 0x12000006
    ctx->pc = 0x1150A4u;
    {
        const bool branch_taken_0x1150a4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1150A8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x1150a4) {
            ctx->pc = 0x1150C0u;
            goto label_1150c0;
        }
    }
    ctx->pc = 0x1150ACu;
    // 0x1150ac: 0xdfb20020
    ctx->pc = 0x1150acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1150b0: 0xdfb10010
    ctx->pc = 0x1150b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1150b4: 0xdfb00000
    ctx->pc = 0x1150b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1150b8: 0x80475ae
    ctx->pc = 0x1150B8u;
    ctx->pc = 0x1150BCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x11D6B8u;
    sub_0011D6B8_0x11d6b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1150C0u;
label_1150c0:
    // 0x1150c0: 0xdfb20020
    ctx->pc = 0x1150c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1150c4: 0xdfb10010
    ctx->pc = 0x1150c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1150c8: 0xdfb00000
    ctx->pc = 0x1150c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1150cc: 0x3e00008
    ctx->pc = 0x1150CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1150D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x115090u: goto label_115090;
            case 0x1150C0u: goto label_1150c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1150D4u;
    // 0x1150d4: 0x0
    ctx->pc = 0x1150d4u;
    // NOP
    // 0x1150d8: 0x3c02ffff
    ctx->pc = 0x1150d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x1150dc: 0x3442ffc0
    ctx->pc = 0x1150dcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65472));
    // 0x1150e0: 0xa22824
    ctx->pc = 0x1150e0u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1150e4: 0x80453ec
    ctx->pc = 0x1150E4u;
    ctx->pc = 0x1150E8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x114FB0u;
    sub_00114FB0_0x114fb0(rdram, ctx, runtime); return;
    ctx->pc = 0x1150ECu;
    // 0x1150ec: 0x0
    ctx->pc = 0x1150ecu;
    // NOP
    // 0x1150f0: 0x40026000
    ctx->pc = 0x1150f0u;
    SET_GPR_U32(ctx, 2, ctx->cop0_status);
    // 0x1150f4: 0x38420001
    ctx->pc = 0x1150f4u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x1150f8: 0x3e00008
    ctx->pc = 0x1150F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1150FCu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x115090u: goto label_115090;
            case 0x1150C0u: goto label_1150c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x115100u;
}
