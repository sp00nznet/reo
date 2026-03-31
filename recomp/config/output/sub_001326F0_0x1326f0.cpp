#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001326F0
// Address: 0x1326f0 - 0x1327b8
void sub_001326F0_0x1326f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1326f0u;

    // 0x1326f0: 0x27bdfff0
    ctx->pc = 0x1326f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1326f4: 0x51840
    ctx->pc = 0x1326f4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1326f8: 0x14800007
    ctx->pc = 0x1326F8u;
    {
        const bool branch_taken_0x1326f8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1326FCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x1326f8) {
            ctx->pc = 0x132718u;
            goto label_132718;
        }
    }
    ctx->pc = 0x132700u;
    // 0x132700: 0x3c040024
    ctx->pc = 0x132700u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x132704: 0xc04a034
    ctx->pc = 0x132704u;
    SET_GPR_U32(ctx, 31, 0x13270Cu);
    ctx->pc = 0x132708u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947048));
    ctx->pc = 0x1280D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001280D0_0x1280d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13270Cu; }
    }
    if (ctx->pc != 0x13270Cu) { return; }
    ctx->pc = 0x13270Cu;
    // 0x13270c: 0x10000004
    ctx->pc = 0x13270Cu;
    {
        const bool branch_taken_0x13270c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x132710u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13270c) {
            ctx->pc = 0x132720u;
            goto label_132720;
        }
    }
    ctx->pc = 0x132714u;
    // 0x132714: 0x0
    ctx->pc = 0x132714u;
    // NOP
label_132718:
    // 0x132718: 0x641821
    ctx->pc = 0x132718u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13271c: 0x84620042
    ctx->pc = 0x13271cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
label_132720:
    // 0x132720: 0xdfbf0000
    ctx->pc = 0x132720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132724: 0x3e00008
    ctx->pc = 0x132724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132728u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132718u: goto label_132718;
            case 0x132720u: goto label_132720;
            case 0x132760u: goto label_132760;
            case 0x1327A8u: goto label_1327a8;
            case 0x1327ACu: goto label_1327ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13272Cu;
    // 0x13272c: 0x0
    ctx->pc = 0x13272cu;
    // NOP
    // 0x132730: 0x27bdfff0
    ctx->pc = 0x132730u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x132734: 0xffb00000
    ctx->pc = 0x132734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x132738: 0x80802d
    ctx->pc = 0x132738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13273c: 0x16000008
    ctx->pc = 0x13273Cu;
    {
        const bool branch_taken_0x13273c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x132740u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        if (branch_taken_0x13273c) {
            ctx->pc = 0x132760u;
            goto label_132760;
        }
    }
    ctx->pc = 0x132744u;
    // 0x132744: 0x3c040024
    ctx->pc = 0x132744u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x132748: 0xdfb00000
    ctx->pc = 0x132748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13274c: 0xdfbf0008
    ctx->pc = 0x13274cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x132750: 0x2484b118
    ctx->pc = 0x132750u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947096));
    // 0x132754: 0x804a034
    ctx->pc = 0x132754u;
    ctx->pc = 0x132758u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1280D0u;
    sub_001280D0_0x1280d0(rdram, ctx, runtime); return;
    ctx->pc = 0x13275Cu;
    // 0x13275c: 0x0
    ctx->pc = 0x13275cu;
    // NOP
label_132760:
    // 0x132760: 0xc04b20a
    ctx->pc = 0x132760u;
    SET_GPR_U32(ctx, 31, 0x132768u);
    ctx->pc = 0x132764u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x12C828u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C828_0x12c828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132768u; }
    }
    if (ctx->pc != 0x132768u) { return; }
    ctx->pc = 0x132768u;
    // 0x132768: 0xc04b224
    ctx->pc = 0x132768u;
    SET_GPR_U32(ctx, 31, 0x132770u);
    ctx->pc = 0x13276Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x12C890u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C890_0x12c890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132770u; }
    }
    if (ctx->pc != 0x132770u) { return; }
    ctx->pc = 0x132770u;
    // 0x132770: 0xa6020046
    ctx->pc = 0x132770u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x132774: 0xdfbf0008
    ctx->pc = 0x132774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x132778: 0xdfb00000
    ctx->pc = 0x132778u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13277c: 0x3e00008
    ctx->pc = 0x13277Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132780u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132718u: goto label_132718;
            case 0x132720u: goto label_132720;
            case 0x132760u: goto label_132760;
            case 0x1327A8u: goto label_1327a8;
            case 0x1327ACu: goto label_1327ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x132784u;
    // 0x132784: 0x0
    ctx->pc = 0x132784u;
    // NOP
    // 0x132788: 0x27bdfff0
    ctx->pc = 0x132788u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13278c: 0x14800006
    ctx->pc = 0x13278Cu;
    {
        const bool branch_taken_0x13278c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x132790u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x13278c) {
            ctx->pc = 0x1327A8u;
            goto label_1327a8;
        }
    }
    ctx->pc = 0x132794u;
    // 0x132794: 0x3c040024
    ctx->pc = 0x132794u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x132798: 0xc04a034
    ctx->pc = 0x132798u;
    SET_GPR_U32(ctx, 31, 0x1327A0u);
    ctx->pc = 0x13279Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947144));
    ctx->pc = 0x1280D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001280D0_0x1280d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1327A0u; }
    }
    if (ctx->pc != 0x1327A0u) { return; }
    ctx->pc = 0x1327A0u;
    // 0x1327a0: 0x10000002
    ctx->pc = 0x1327A0u;
    {
        const bool branch_taken_0x1327a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1327A4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1327a0) {
            ctx->pc = 0x1327ACu;
            goto label_1327ac;
        }
    }
    ctx->pc = 0x1327A8u;
label_1327a8:
    // 0x1327a8: 0x84820046
    ctx->pc = 0x1327a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 70)));
label_1327ac:
    // 0x1327ac: 0xdfbf0000
    ctx->pc = 0x1327acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1327b0: 0x3e00008
    ctx->pc = 0x1327B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1327B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132718u: goto label_132718;
            case 0x132720u: goto label_132720;
            case 0x132760u: goto label_132760;
            case 0x1327A8u: goto label_1327a8;
            case 0x1327ACu: goto label_1327ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1327B8u;
}
