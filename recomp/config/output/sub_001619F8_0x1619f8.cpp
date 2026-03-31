#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001619F8
// Address: 0x1619f8 - 0x161a80
void sub_001619F8_0x1619f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1619f8u;

label_1619f8:
    // 0x1619f8: 0x27bdfff0
    ctx->pc = 0x1619f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1619fc:
    // 0x1619fc: 0xffbf0000
    ctx->pc = 0x1619fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_161a00:
    // 0x161a00: 0x8c8200e8
    ctx->pc = 0x161a00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 232)));
label_161a04:
    // 0x161a04: 0x10400005
label_161a08:
    if (ctx->pc == 0x161A08u) {
        ctx->pc = 0x161A08u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x161A0Cu;
        goto label_161a0c;
    }
    ctx->pc = 0x161A04u;
    {
        const bool branch_taken_0x161a04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x161A08u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x161a04) {
            ctx->pc = 0x161A1Cu;
            goto label_161a1c;
        }
    }
    ctx->pc = 0x161A0Cu;
label_161a0c:
    // 0x161a0c: 0x8c420000
    ctx->pc = 0x161a0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_161a10:
    // 0x161a10: 0x8c430014
    ctx->pc = 0x161a10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_161a14:
    // 0x161a14: 0x60f809
label_161a18:
    if (ctx->pc == 0x161A18u) {
        ctx->pc = 0x161A1Cu;
        goto label_161a1c;
    }
    ctx->pc = 0x161A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x161A1Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1619F8u: goto label_1619f8;
            case 0x1619FCu: goto label_1619fc;
            case 0x161A00u: goto label_161a00;
            case 0x161A04u: goto label_161a04;
            case 0x161A08u: goto label_161a08;
            case 0x161A0Cu: goto label_161a0c;
            case 0x161A10u: goto label_161a10;
            case 0x161A14u: goto label_161a14;
            case 0x161A18u: goto label_161a18;
            case 0x161A1Cu: goto label_161a1c;
            case 0x161A20u: goto label_161a20;
            case 0x161A24u: goto label_161a24;
            case 0x161A28u: goto label_161a28;
            case 0x161A2Cu: goto label_161a2c;
            case 0x161A30u: goto label_161a30;
            case 0x161A34u: goto label_161a34;
            case 0x161A38u: goto label_161a38;
            case 0x161A3Cu: goto label_161a3c;
            case 0x161A40u: goto label_161a40;
            case 0x161A44u: goto label_161a44;
            case 0x161A48u: goto label_161a48;
            case 0x161A4Cu: goto label_161a4c;
            case 0x161A50u: goto label_161a50;
            case 0x161A54u: goto label_161a54;
            case 0x161A58u: goto label_161a58;
            case 0x161A5Cu: goto label_161a5c;
            case 0x161A60u: goto label_161a60;
            case 0x161A64u: goto label_161a64;
            case 0x161A68u: goto label_161a68;
            case 0x161A6Cu: goto label_161a6c;
            case 0x161A70u: goto label_161a70;
            case 0x161A74u: goto label_161a74;
            case 0x161A78u: goto label_161a78;
            case 0x161A7Cu: goto label_161a7c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x161A1Cu; }
            if (ctx->pc != 0x161A1Cu) { return; }
        }
    }
    ctx->pc = 0x161A1Cu;
label_161a1c:
    // 0x161a1c: 0xdfbf0000
    ctx->pc = 0x161a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_161a20:
    // 0x161a20: 0x3e00008
label_161a24:
    if (ctx->pc == 0x161A24u) {
        ctx->pc = 0x161A24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x161A28u;
        goto label_161a28;
    }
    ctx->pc = 0x161A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161A24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1619F8u: goto label_1619f8;
            case 0x1619FCu: goto label_1619fc;
            case 0x161A00u: goto label_161a00;
            case 0x161A04u: goto label_161a04;
            case 0x161A08u: goto label_161a08;
            case 0x161A0Cu: goto label_161a0c;
            case 0x161A10u: goto label_161a10;
            case 0x161A14u: goto label_161a14;
            case 0x161A18u: goto label_161a18;
            case 0x161A1Cu: goto label_161a1c;
            case 0x161A20u: goto label_161a20;
            case 0x161A24u: goto label_161a24;
            case 0x161A28u: goto label_161a28;
            case 0x161A2Cu: goto label_161a2c;
            case 0x161A30u: goto label_161a30;
            case 0x161A34u: goto label_161a34;
            case 0x161A38u: goto label_161a38;
            case 0x161A3Cu: goto label_161a3c;
            case 0x161A40u: goto label_161a40;
            case 0x161A44u: goto label_161a44;
            case 0x161A48u: goto label_161a48;
            case 0x161A4Cu: goto label_161a4c;
            case 0x161A50u: goto label_161a50;
            case 0x161A54u: goto label_161a54;
            case 0x161A58u: goto label_161a58;
            case 0x161A5Cu: goto label_161a5c;
            case 0x161A60u: goto label_161a60;
            case 0x161A64u: goto label_161a64;
            case 0x161A68u: goto label_161a68;
            case 0x161A6Cu: goto label_161a6c;
            case 0x161A70u: goto label_161a70;
            case 0x161A74u: goto label_161a74;
            case 0x161A78u: goto label_161a78;
            case 0x161A7Cu: goto label_161a7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x161A28u;
label_161a28:
    // 0x161a28: 0x27bdfff0
    ctx->pc = 0x161a28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_161a2c:
    // 0x161a2c: 0xffb00000
    ctx->pc = 0x161a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_161a30:
    // 0x161a30: 0x80802d
    ctx->pc = 0x161a30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_161a34:
    // 0x161a34: 0xffbf0008
    ctx->pc = 0x161a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_161a38:
    // 0x161a38: 0x8e0200e8
    ctx->pc = 0x161a38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_161a3c:
    // 0x161a3c: 0x1040000c
label_161a40:
    if (ctx->pc == 0x161A40u) {
        ctx->pc = 0x161A40u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 256));
        ctx->pc = 0x161A44u;
        goto label_161a44;
    }
    ctx->pc = 0x161A3Cu;
    {
        const bool branch_taken_0x161a3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x161A40u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 256));
        if (branch_taken_0x161a3c) {
            ctx->pc = 0x161A70u;
            goto label_161a70;
        }
    }
    ctx->pc = 0x161A44u;
label_161a44:
    // 0x161a44: 0x8c630000
    ctx->pc = 0x161a44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_161a48:
    // 0x161a48: 0x24020001
    ctx->pc = 0x161a48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_161a4c:
    // 0x161a4c: 0x50620009
label_161a50:
    if (ctx->pc == 0x161A50u) {
        ctx->pc = 0x161A50u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x161A54u;
        goto label_161a54;
    }
    ctx->pc = 0x161A4Cu;
    {
        const bool branch_taken_0x161a4c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x161a4c) {
            ctx->pc = 0x161A50u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x161A74u;
            goto label_161a74;
        }
    }
    ctx->pc = 0x161A54u;
label_161a54:
    // 0x161a54: 0xc0586b2
label_161a58:
    if (ctx->pc == 0x161A58u) {
        ctx->pc = 0x161A5Cu;
        goto label_161a5c;
    }
    ctx->pc = 0x161A54u;
    SET_GPR_U32(ctx, 31, 0x161A5Cu);
    ctx->pc = 0x161AC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00161AC8_0x161ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161A5Cu; }
    }
    if (ctx->pc != 0x161A5Cu) { return; }
    ctx->pc = 0x161A5Cu;
label_161a5c:
    // 0x161a5c: 0x200202d
    ctx->pc = 0x161a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_161a60:
    // 0x161a60: 0xdfbf0008
    ctx->pc = 0x161a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_161a64:
    // 0x161a64: 0xdfb00000
    ctx->pc = 0x161a64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_161a68:
    // 0x161a68: 0x805871e
label_161a6c:
    if (ctx->pc == 0x161A6Cu) {
        ctx->pc = 0x161A6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x161A70u;
        goto label_161a70;
    }
    ctx->pc = 0x161A68u;
    ctx->pc = 0x161A6Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x161C78u;
    entry_161c78_0x161d20(rdram, ctx, runtime); return;
    ctx->pc = 0x161A70u;
label_161a70:
    // 0x161a70: 0xdfb00000
    ctx->pc = 0x161a70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_161a74:
    // 0x161a74: 0xdfbf0008
    ctx->pc = 0x161a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_161a78:
    // 0x161a78: 0x3e00008
label_161a7c:
    if (ctx->pc == 0x161A7Cu) {
        ctx->pc = 0x161A7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x161A80u;
        goto label_fallthrough_0x161a78;
    }
    ctx->pc = 0x161A78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161A7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1619F8u: goto label_1619f8;
            case 0x1619FCu: goto label_1619fc;
            case 0x161A00u: goto label_161a00;
            case 0x161A04u: goto label_161a04;
            case 0x161A08u: goto label_161a08;
            case 0x161A0Cu: goto label_161a0c;
            case 0x161A10u: goto label_161a10;
            case 0x161A14u: goto label_161a14;
            case 0x161A18u: goto label_161a18;
            case 0x161A1Cu: goto label_161a1c;
            case 0x161A20u: goto label_161a20;
            case 0x161A24u: goto label_161a24;
            case 0x161A28u: goto label_161a28;
            case 0x161A2Cu: goto label_161a2c;
            case 0x161A30u: goto label_161a30;
            case 0x161A34u: goto label_161a34;
            case 0x161A38u: goto label_161a38;
            case 0x161A3Cu: goto label_161a3c;
            case 0x161A40u: goto label_161a40;
            case 0x161A44u: goto label_161a44;
            case 0x161A48u: goto label_161a48;
            case 0x161A4Cu: goto label_161a4c;
            case 0x161A50u: goto label_161a50;
            case 0x161A54u: goto label_161a54;
            case 0x161A58u: goto label_161a58;
            case 0x161A5Cu: goto label_161a5c;
            case 0x161A60u: goto label_161a60;
            case 0x161A64u: goto label_161a64;
            case 0x161A68u: goto label_161a68;
            case 0x161A6Cu: goto label_161a6c;
            case 0x161A70u: goto label_161a70;
            case 0x161A74u: goto label_161a74;
            case 0x161A78u: goto label_161a78;
            case 0x161A7Cu: goto label_161a7c;
            default: break;
        }
        return;
    }
label_fallthrough_0x161a78:
    ctx->pc = 0x161A80u;
}
