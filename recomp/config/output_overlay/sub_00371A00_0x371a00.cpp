#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00371A00
// Address: 0x371a00 - 0x371ef0
void sub_00371A00_0x371a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x371a00u;

    // 0x371a00: 0x8073090
    ctx->pc = 0x371A00u;
    ctx->pc = 0x1CC240u;
    {
        auto targetFn = runtime->lookupFunction(0x1CC240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x371A08u;
    // 0x371a08: 0x0
    ctx->pc = 0x371a08u;
    // NOP
    // 0x371a0c: 0x0
    ctx->pc = 0x371a0cu;
    // NOP
    // 0x371a10: 0x27bdffe0
    ctx->pc = 0x371a10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x371a14: 0xffbf0010
    ctx->pc = 0x371a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x371a18: 0x7fb00000
    ctx->pc = 0x371a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x371a1c: 0xc07312c
    ctx->pc = 0x371A1Cu;
    SET_GPR_U32(ctx, 31, 0x371A24u);
    ctx->pc = 0x371A20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CC4B0u;
    {
        auto targetFn = runtime->lookupFunction(0x1CC4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371A24u; }
        if (ctx->pc != 0x371A24u) { return; }
    }
    ctx->pc = 0x371A24u;
    // 0x371a24: 0x3c010032
    ctx->pc = 0x371a24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x371a28: 0x942243da
    ctx->pc = 0x371a28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17370)));
    // 0x371a2c: 0x14400007
    ctx->pc = 0x371A2Cu;
    {
        const bool branch_taken_0x371a2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x371a2c) {
            ctx->pc = 0x371A4Cu;
            goto label_371a4c;
        }
    }
    ctx->pc = 0x371A34u;
    // 0x371a34: 0x3c010032
    ctx->pc = 0x371a34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x371a38: 0x24020001
    ctx->pc = 0x371a38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x371a3c: 0x942343dc
    ctx->pc = 0x371a3cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17372)));
    // 0x371a40: 0x14620002
    ctx->pc = 0x371A40u;
    {
        const bool branch_taken_0x371a40 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x371a40) {
            ctx->pc = 0x371A4Cu;
            goto label_371a4c;
        }
    }
    ctx->pc = 0x371A48u;
    // 0x371a48: 0x24100080
    ctx->pc = 0x371a48u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 128));
label_371a4c:
    // 0x371a4c: 0x3c040034
    ctx->pc = 0x371a4cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x371a50: 0x282d
    ctx->pc = 0x371a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371a54: 0x24840a40
    ctx->pc = 0x371a54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2624));
    // 0x371a58: 0xc041f1a
    ctx->pc = 0x371A58u;
    SET_GPR_U32(ctx, 31, 0x371A60u);
    ctx->pc = 0x371A5Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 152));
    ctx->pc = 0x107C68u;
    {
        auto targetFn = runtime->lookupFunction(0x107C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371A60u; }
        if (ctx->pc != 0x371A60u) { return; }
    }
    ctx->pc = 0x371A60u;
    // 0x371a60: 0x3c010034
    ctx->pc = 0x371a60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x371a64: 0x24030001
    ctx->pc = 0x371a64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x371a68: 0xa4300ad4
    ctx->pc = 0x371a68u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 2772), (uint16_t)GPR_U32(ctx, 16));
    // 0x371a6c: 0x3c010034
    ctx->pc = 0x371a6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x371a70: 0xa0230ad2
    ctx->pc = 0x371a70u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 2770), (uint8_t)GPR_U32(ctx, 3));
    // 0x371a74: 0xdfbf0010
    ctx->pc = 0x371a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x371a78: 0x7bb00000
    ctx->pc = 0x371a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371a7c: 0x3e00008
    ctx->pc = 0x371A7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371A80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x371A4Cu: goto label_371a4c;
            case 0x371AC0u: goto label_371ac0;
            case 0x371C68u: goto label_371c68;
            case 0x371C6Cu: goto label_371c6c;
            case 0x371CBCu: goto label_371cbc;
            case 0x371CE4u: goto label_371ce4;
            case 0x371CF4u: goto label_371cf4;
            case 0x371D08u: goto label_371d08;
            case 0x371D18u: goto label_371d18;
            case 0x371D24u: goto label_371d24;
            case 0x371D44u: goto label_371d44;
            case 0x371E18u: goto label_371e18;
            case 0x371E38u: goto label_371e38;
            case 0x371E4Cu: goto label_371e4c;
            case 0x371E50u: goto label_371e50;
            case 0x371EB4u: goto label_371eb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x371A84u;
    // 0x371a84: 0x0
    ctx->pc = 0x371a84u;
    // NOP
    // 0x371a88: 0x0
    ctx->pc = 0x371a88u;
    // NOP
    // 0x371a8c: 0x0
    ctx->pc = 0x371a8cu;
    // NOP
    // 0x371a90: 0x27bdfff0
    ctx->pc = 0x371a90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x371a94: 0x3c010034
    ctx->pc = 0x371a94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x371a98: 0xffbf0000
    ctx->pc = 0x371a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x371a9c: 0x24030001
    ctx->pc = 0x371a9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x371aa0: 0x90240ad2
    ctx->pc = 0x371aa0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 2770)));
    // 0x371aa4: 0x14830006
    ctx->pc = 0x371AA4u;
    {
        const bool branch_taken_0x371aa4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x371AA8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
        if (branch_taken_0x371aa4) {
            ctx->pc = 0x371AC0u;
            goto label_371ac0;
        }
    }
    ctx->pc = 0x371AACu;
    // 0x371aac: 0xc0730b4
    ctx->pc = 0x371AACu;
    SET_GPR_U32(ctx, 31, 0x371AB4u);
    ctx->pc = 0x371AB0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 2772)));
    ctx->pc = 0x1CC2D0u;
    {
        auto targetFn = runtime->lookupFunction(0x1CC2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371AB4u; }
        if (ctx->pc != 0x371AB4u) { return; }
    }
    ctx->pc = 0x371AB4u;
    // 0x371ab4: 0x24030002
    ctx->pc = 0x371ab4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x371ab8: 0x3c010034
    ctx->pc = 0x371ab8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x371abc: 0xa0230ad2
    ctx->pc = 0x371abcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 2770), (uint8_t)GPR_U32(ctx, 3));
label_371ac0:
    // 0x371ac0: 0xdfbf0000
    ctx->pc = 0x371ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371ac4: 0x3e00008
    ctx->pc = 0x371AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371AC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x371A4Cu: goto label_371a4c;
            case 0x371AC0u: goto label_371ac0;
            case 0x371C68u: goto label_371c68;
            case 0x371C6Cu: goto label_371c6c;
            case 0x371CBCu: goto label_371cbc;
            case 0x371CE4u: goto label_371ce4;
            case 0x371CF4u: goto label_371cf4;
            case 0x371D08u: goto label_371d08;
            case 0x371D18u: goto label_371d18;
            case 0x371D24u: goto label_371d24;
            case 0x371D44u: goto label_371d44;
            case 0x371E18u: goto label_371e18;
            case 0x371E38u: goto label_371e38;
            case 0x371E4Cu: goto label_371e4c;
            case 0x371E50u: goto label_371e50;
            case 0x371EB4u: goto label_371eb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x371ACCu;
    // 0x371acc: 0x0
    ctx->pc = 0x371accu;
    // NOP
    // 0x371ad0: 0x27bdfff0
    ctx->pc = 0x371ad0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x371ad4: 0xffbf0000
    ctx->pc = 0x371ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x371ad8: 0xc06be70
    ctx->pc = 0x371AD8u;
    SET_GPR_U32(ctx, 31, 0x371AE0u);
    ctx->pc = 0x1AF9C0u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371AE0u; }
        if (ctx->pc != 0x371AE0u) { return; }
    }
    ctx->pc = 0x371AE0u;
    // 0x371ae0: 0xc0ddec8
    ctx->pc = 0x371AE0u;
    SET_GPR_U32(ctx, 31, 0x371AE8u);
    ctx->pc = 0x377B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00377B20_0x377b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371AE8u; }
    }
    if (ctx->pc != 0x371AE8u) { return; }
    ctx->pc = 0x371AE8u;
    // 0x371ae8: 0x3c040037
    ctx->pc = 0x371ae8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
    // 0x371aec: 0xc06be80
    ctx->pc = 0x371AECu;
    SET_GPR_U32(ctx, 31, 0x371AF4u);
    ctx->pc = 0x371AF0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7072));
    ctx->pc = 0x1AFA00u;
    {
        auto targetFn = runtime->lookupFunction(0x1AFA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371AF4u; }
        if (ctx->pc != 0x371AF4u) { return; }
    }
    ctx->pc = 0x371AF4u;
    // 0x371af4: 0xc06d288
    ctx->pc = 0x371AF4u;
    SET_GPR_U32(ctx, 31, 0x371AFCu);
    ctx->pc = 0x1B4A20u;
    {
        auto targetFn = runtime->lookupFunction(0x1B4A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371AFCu; }
        if (ctx->pc != 0x371AFCu) { return; }
    }
    ctx->pc = 0x371AFCu;
    // 0x371afc: 0xc0dd594
    ctx->pc = 0x371AFCu;
    SET_GPR_U32(ctx, 31, 0x371B04u);
    ctx->pc = 0x375650u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00375650_0x375650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371B04u; }
    }
    if (ctx->pc != 0x371B04u) { return; }
    ctx->pc = 0x371B04u;
    // 0x371b04: 0xdfbf0000
    ctx->pc = 0x371b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371b08: 0x3e00008
    ctx->pc = 0x371B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371B0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x371A4Cu: goto label_371a4c;
            case 0x371AC0u: goto label_371ac0;
            case 0x371C68u: goto label_371c68;
            case 0x371C6Cu: goto label_371c6c;
            case 0x371CBCu: goto label_371cbc;
            case 0x371CE4u: goto label_371ce4;
            case 0x371CF4u: goto label_371cf4;
            case 0x371D08u: goto label_371d08;
            case 0x371D18u: goto label_371d18;
            case 0x371D24u: goto label_371d24;
            case 0x371D44u: goto label_371d44;
            case 0x371E18u: goto label_371e18;
            case 0x371E38u: goto label_371e38;
            case 0x371E4Cu: goto label_371e4c;
            case 0x371E50u: goto label_371e50;
            case 0x371EB4u: goto label_371eb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x371B10u;
    // 0x371b10: 0x27bdfff0
    ctx->pc = 0x371b10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x371b14: 0xffbf0000
    ctx->pc = 0x371b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x371b18: 0xc06bc10
    ctx->pc = 0x371B18u;
    SET_GPR_U32(ctx, 31, 0x371B20u);
    ctx->pc = 0x1AF040u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371B20u; }
        if (ctx->pc != 0x371B20u) { return; }
    }
    ctx->pc = 0x371B20u;
    // 0x371b20: 0xc06c9d0
    ctx->pc = 0x371B20u;
    SET_GPR_U32(ctx, 31, 0x371B28u);
    ctx->pc = 0x1B2740u;
    {
        auto targetFn = runtime->lookupFunction(0x1B2740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371B28u; }
        if (ctx->pc != 0x371B28u) { return; }
    }
    ctx->pc = 0x371B28u;
    // 0x371b28: 0xc06edb8
    ctx->pc = 0x371B28u;
    SET_GPR_U32(ctx, 31, 0x371B30u);
    ctx->pc = 0x1BB6E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1BB6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371B30u; }
        if (ctx->pc != 0x371B30u) { return; }
    }
    ctx->pc = 0x371B30u;
    // 0x371b30: 0xdfbf0000
    ctx->pc = 0x371b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371b34: 0x3e00008
    ctx->pc = 0x371B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371B38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x371A4Cu: goto label_371a4c;
            case 0x371AC0u: goto label_371ac0;
            case 0x371C68u: goto label_371c68;
            case 0x371C6Cu: goto label_371c6c;
            case 0x371CBCu: goto label_371cbc;
            case 0x371CE4u: goto label_371ce4;
            case 0x371CF4u: goto label_371cf4;
            case 0x371D08u: goto label_371d08;
            case 0x371D18u: goto label_371d18;
            case 0x371D24u: goto label_371d24;
            case 0x371D44u: goto label_371d44;
            case 0x371E18u: goto label_371e18;
            case 0x371E38u: goto label_371e38;
            case 0x371E4Cu: goto label_371e4c;
            case 0x371E50u: goto label_371e50;
            case 0x371EB4u: goto label_371eb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x371B3Cu;
    // 0x371b3c: 0x0
    ctx->pc = 0x371b3cu;
    // NOP
    // 0x371b40: 0x27bdfff0
    ctx->pc = 0x371b40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x371b44: 0xffbf0000
    ctx->pc = 0x371b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x371b48: 0xc06be70
    ctx->pc = 0x371B48u;
    SET_GPR_U32(ctx, 31, 0x371B50u);
    ctx->pc = 0x1AF9C0u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371B50u; }
        if (ctx->pc != 0x371B50u) { return; }
    }
    ctx->pc = 0x371B50u;
    // 0x371b50: 0x3c040037
    ctx->pc = 0x371b50u;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
    // 0x371b54: 0xc06be80
    ctx->pc = 0x371B54u;
    SET_GPR_U32(ctx, 31, 0x371B5Cu);
    ctx->pc = 0x371B58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6928));
    ctx->pc = 0x1AFA00u;
    {
        auto targetFn = runtime->lookupFunction(0x1AFA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371B5Cu; }
        if (ctx->pc != 0x371B5Cu) { return; }
    }
    ctx->pc = 0x371B5Cu;
    // 0x371b5c: 0xc06d288
    ctx->pc = 0x371B5Cu;
    SET_GPR_U32(ctx, 31, 0x371B64u);
    ctx->pc = 0x1B4A20u;
    {
        auto targetFn = runtime->lookupFunction(0x1B4A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371B64u; }
        if (ctx->pc != 0x371B64u) { return; }
    }
    ctx->pc = 0x371B64u;
    // 0x371b64: 0xdfbf0000
    ctx->pc = 0x371b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371b68: 0x3e00008
    ctx->pc = 0x371B68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371B6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x371A4Cu: goto label_371a4c;
            case 0x371AC0u: goto label_371ac0;
            case 0x371C68u: goto label_371c68;
            case 0x371C6Cu: goto label_371c6c;
            case 0x371CBCu: goto label_371cbc;
            case 0x371CE4u: goto label_371ce4;
            case 0x371CF4u: goto label_371cf4;
            case 0x371D08u: goto label_371d08;
            case 0x371D18u: goto label_371d18;
            case 0x371D24u: goto label_371d24;
            case 0x371D44u: goto label_371d44;
            case 0x371E18u: goto label_371e18;
            case 0x371E38u: goto label_371e38;
            case 0x371E4Cu: goto label_371e4c;
            case 0x371E50u: goto label_371e50;
            case 0x371EB4u: goto label_371eb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x371B70u;
    // 0x371b70: 0x27bdfff0
    ctx->pc = 0x371b70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x371b74: 0xffbf0000
    ctx->pc = 0x371b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x371b78: 0xc06be70
    ctx->pc = 0x371B78u;
    SET_GPR_U32(ctx, 31, 0x371B80u);
    ctx->pc = 0x1AF9C0u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371B80u; }
        if (ctx->pc != 0x371B80u) { return; }
    }
    ctx->pc = 0x371B80u;
    // 0x371b80: 0x3c040037
    ctx->pc = 0x371b80u;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
    // 0x371b84: 0xc06be80
    ctx->pc = 0x371B84u;
    SET_GPR_U32(ctx, 31, 0x371B8Cu);
    ctx->pc = 0x371B88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6928));
    ctx->pc = 0x1AFA00u;
    {
        auto targetFn = runtime->lookupFunction(0x1AFA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371B8Cu; }
        if (ctx->pc != 0x371B8Cu) { return; }
    }
    ctx->pc = 0x371B8Cu;
    // 0x371b8c: 0xc06d288
    ctx->pc = 0x371B8Cu;
    SET_GPR_U32(ctx, 31, 0x371B94u);
    ctx->pc = 0x1B4A20u;
    {
        auto targetFn = runtime->lookupFunction(0x1B4A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371B94u; }
        if (ctx->pc != 0x371B94u) { return; }
    }
    ctx->pc = 0x371B94u;
    // 0x371b94: 0xdfbf0000
    ctx->pc = 0x371b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371b98: 0x3e00008
    ctx->pc = 0x371B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371B9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x371A4Cu: goto label_371a4c;
            case 0x371AC0u: goto label_371ac0;
            case 0x371C68u: goto label_371c68;
            case 0x371C6Cu: goto label_371c6c;
            case 0x371CBCu: goto label_371cbc;
            case 0x371CE4u: goto label_371ce4;
            case 0x371CF4u: goto label_371cf4;
            case 0x371D08u: goto label_371d08;
            case 0x371D18u: goto label_371d18;
            case 0x371D24u: goto label_371d24;
            case 0x371D44u: goto label_371d44;
            case 0x371E18u: goto label_371e18;
            case 0x371E38u: goto label_371e38;
            case 0x371E4Cu: goto label_371e4c;
            case 0x371E50u: goto label_371e50;
            case 0x371EB4u: goto label_371eb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x371BA0u;
    // 0x371ba0: 0x27bdffb0
    ctx->pc = 0x371ba0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x371ba4: 0xffbf0040
    ctx->pc = 0x371ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x371ba8: 0x7fb30030
    ctx->pc = 0x371ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x371bac: 0x7fb20020
    ctx->pc = 0x371bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x371bb0: 0x7fb10010
    ctx->pc = 0x371bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x371bb4: 0xc06bc10
    ctx->pc = 0x371BB4u;
    SET_GPR_U32(ctx, 31, 0x371BBCu);
    ctx->pc = 0x371BB8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1AF040u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371BBCu; }
        if (ctx->pc != 0x371BBCu) { return; }
    }
    ctx->pc = 0x371BBCu;
    // 0x371bbc: 0x3c010057
    ctx->pc = 0x371bbcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x371bc0: 0x3c02002b
    ctx->pc = 0x371bc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x371bc4: 0xac20aee8
    ctx->pc = 0x371bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294946536), GPR_U32(ctx, 0));
    // 0x371bc8: 0x3442f000
    ctx->pc = 0x371bc8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 61440));
    // 0x371bcc: 0x3c010032
    ctx->pc = 0x371bccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x371bd0: 0x282d
    ctx->pc = 0x371bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371bd4: 0x8c23440c
    ctx->pc = 0x371bd4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 17420)));
    // 0x371bd8: 0x621021
    ctx->pc = 0x371bd8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x371bdc: 0x3c010001
    ctx->pc = 0x371bdcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)1 << 16));
    // 0x371be0: 0x411021
    ctx->pc = 0x371be0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x371be4: 0x3c010057
    ctx->pc = 0x371be4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x371be8: 0xac22aee0
    ctx->pc = 0x371be8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294946528), GPR_U32(ctx, 2));
    // 0x371bec: 0x3c010057
    ctx->pc = 0x371becu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x371bf0: 0x8c24aee0
    ctx->pc = 0x371bf0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
    // 0x371bf4: 0xc041f1a
    ctx->pc = 0x371BF4u;
    SET_GPR_U32(ctx, 31, 0x371BFCu);
    ctx->pc = 0x371BF8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 24576));
    ctx->pc = 0x107C68u;
    {
        auto targetFn = runtime->lookupFunction(0x107C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371BFCu; }
        if (ctx->pc != 0x371BFCu) { return; }
    }
    ctx->pc = 0x371BFCu;
    // 0x371bfc: 0x3c010057
    ctx->pc = 0x371bfcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x371c00: 0x202d
    ctx->pc = 0x371c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371c04: 0xc1ac574
    ctx->pc = 0x371C04u;
    SET_GPR_U32(ctx, 31, 0x371C0Cu);
    ctx->pc = 0x371C08u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294946520), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x6B15D0u;
    {
        auto targetFn = runtime->lookupFunction(0x6B15D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371C0Cu; }
        if (ctx->pc != 0x371C0Cu) { return; }
    }
    ctx->pc = 0x371C0Cu;
    // 0x371c0c: 0xc0dd648
    ctx->pc = 0x371C0Cu;
    SET_GPR_U32(ctx, 31, 0x371C14u);
    ctx->pc = 0x375920u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00375920_0x375920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371C14u; }
    }
    if (ctx->pc != 0x371C14u) { return; }
    ctx->pc = 0x371C14u;
    // 0x371c14: 0xc065bc0
    ctx->pc = 0x371C14u;
    SET_GPR_U32(ctx, 31, 0x371C1Cu);
    ctx->pc = 0x371C18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
    ctx->pc = 0x196F00u;
    {
        auto targetFn = runtime->lookupFunction(0x196F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371C1Cu; }
        if (ctx->pc != 0x371C1Cu) { return; }
    }
    ctx->pc = 0x371C1Cu;
    // 0x371c1c: 0xc1ac574
    ctx->pc = 0x371C1Cu;
    SET_GPR_U32(ctx, 31, 0x371C24u);
    ctx->pc = 0x371C20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x6B15D0u;
    {
        auto targetFn = runtime->lookupFunction(0x6B15D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371C24u; }
        if (ctx->pc != 0x371C24u) { return; }
    }
    ctx->pc = 0x371C24u;
    // 0x371c24: 0x2404006c
    ctx->pc = 0x371c24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 108));
    // 0x371c28: 0xc06bde0
    ctx->pc = 0x371C28u;
    SET_GPR_U32(ctx, 31, 0x371C30u);
    ctx->pc = 0x371C2Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371C30u; }
        if (ctx->pc != 0x371C30u) { return; }
    }
    ctx->pc = 0x371C30u;
    // 0x371c30: 0x3c01004a
    ctx->pc = 0x371c30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)74 << 16));
    // 0x371c34: 0x8022eef0
    ctx->pc = 0x371c34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294962928)));
    // 0x371c38: 0x1040000c
    ctx->pc = 0x371C38u;
    {
        const bool branch_taken_0x371c38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x371C3Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 94));
        if (branch_taken_0x371c38) {
            ctx->pc = 0x371C6Cu;
            goto label_371c6c;
        }
    }
    ctx->pc = 0x371C40u;
    // 0x371c40: 0x3c01004a
    ctx->pc = 0x371c40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)74 << 16));
    // 0x371c44: 0x8022eef1
    ctx->pc = 0x371c44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294962929)));
    // 0x371c48: 0x10400007
    ctx->pc = 0x371C48u;
    {
        const bool branch_taken_0x371c48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x371C4Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 28));
        if (branch_taken_0x371c48) {
            ctx->pc = 0x371C68u;
            goto label_371c68;
        }
    }
    ctx->pc = 0x371C50u;
    // 0x371c50: 0xc06e0a8
    ctx->pc = 0x371C50u;
    SET_GPR_U32(ctx, 31, 0x371C58u);
    ctx->pc = 0x1B82A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1B82A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371C58u; }
        if (ctx->pc != 0x371C58u) { return; }
    }
    ctx->pc = 0x371C58u;
    // 0x371c58: 0x14400003
    ctx->pc = 0x371C58u;
    {
        const bool branch_taken_0x371c58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x371C5Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)74 << 16));
        if (branch_taken_0x371c58) {
            ctx->pc = 0x371C68u;
            goto label_371c68;
        }
    }
    ctx->pc = 0x371C60u;
    // 0x371c60: 0xc0dc7bc
    ctx->pc = 0x371C60u;
    SET_GPR_U32(ctx, 31, 0x371C68u);
    ctx->pc = 0x371C64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962928));
    ctx->pc = 0x371EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00371EF0_0x371ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371C68u; }
    }
    if (ctx->pc != 0x371C68u) { return; }
    ctx->pc = 0x371C68u;
label_371c68:
    // 0x371c68: 0x2404005e
    ctx->pc = 0x371c68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 94));
label_371c6c:
    // 0x371c6c: 0xc06bde0
    ctx->pc = 0x371C6Cu;
    SET_GPR_U32(ctx, 31, 0x371C74u);
    ctx->pc = 0x371C70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 50));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371C74u; }
        if (ctx->pc != 0x371C74u) { return; }
    }
    ctx->pc = 0x371C74u;
    // 0x371c74: 0x2404000d
    ctx->pc = 0x371c74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 13));
    // 0x371c78: 0xc06bde0
    ctx->pc = 0x371C78u;
    SET_GPR_U32(ctx, 31, 0x371C80u);
    ctx->pc = 0x371C7Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371C80u; }
        if (ctx->pc != 0x371C80u) { return; }
    }
    ctx->pc = 0x371C80u;
    // 0x371c80: 0xc1ac574
    ctx->pc = 0x371C80u;
    SET_GPR_U32(ctx, 31, 0x371C88u);
    ctx->pc = 0x371C84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x6B15D0u;
    {
        auto targetFn = runtime->lookupFunction(0x6B15D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371C88u; }
        if (ctx->pc != 0x371C88u) { return; }
    }
    ctx->pc = 0x371C88u;
    // 0x371c88: 0x2404006c
    ctx->pc = 0x371c88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 108));
    // 0x371c8c: 0xc06bde0
    ctx->pc = 0x371C8Cu;
    SET_GPR_U32(ctx, 31, 0x371C94u);
    ctx->pc = 0x371C90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371C94u; }
        if (ctx->pc != 0x371C94u) { return; }
    }
    ctx->pc = 0x371C94u;
    // 0x371c94: 0x3c01004c
    ctx->pc = 0x371c94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x371c98: 0x8022adf8
    ctx->pc = 0x371c98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946296)));
    // 0x371c9c: 0x14400021
    ctx->pc = 0x371C9Cu;
    {
        const bool branch_taken_0x371c9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x371CA0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)59 << 16));
        if (branch_taken_0x371c9c) {
            ctx->pc = 0x371D24u;
            goto label_371d24;
        }
    }
    ctx->pc = 0x371CA4u;
    // 0x371ca4: 0x3c11004a
    ctx->pc = 0x371ca4u;
    SET_GPR_U32(ctx, 17, ((uint32_t)74 << 16));
    // 0x371ca8: 0x8c325900
    ctx->pc = 0x371ca8u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 1), 22784)));
    // 0x371cac: 0x26315c30
    ctx->pc = 0x371cacu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 23600));
    // 0x371cb0: 0x982d
    ctx->pc = 0x371cb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371cb4: 0x3c01003b
    ctx->pc = 0x371cb4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)59 << 16));
    // 0x371cb8: 0x8c3059f0
    ctx->pc = 0x371cb8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 1), 23024)));
label_371cbc:
    // 0x371cbc: 0xc0dd478
    ctx->pc = 0x371CBCu;
    SET_GPR_U32(ctx, 31, 0x371CC4u);
    ctx->pc = 0x371CC0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3751E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_003751E0_0x3751e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371CC4u; }
    }
    if (ctx->pc != 0x371CC4u) { return; }
    ctx->pc = 0x371CC4u;
    // 0x371cc4: 0x26620001
    ctx->pc = 0x371cc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 1));
    // 0x371cc8: 0x29e3c
    ctx->pc = 0x371cc8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 24));
    // 0x371ccc: 0x139e3f
    ctx->pc = 0x371cccu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 24));
    // 0x371cd0: 0x2a620008
    ctx->pc = 0x371cd0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 8));
    // 0x371cd4: 0x1440fff9
    ctx->pc = 0x371CD4u;
    {
        const bool branch_taken_0x371cd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x371CD8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4320));
        if (branch_taken_0x371cd4) {
            ctx->pc = 0x371CBCu;
            goto label_371cbc;
        }
    }
    ctx->pc = 0x371CDCu;
    // 0x371cdc: 0x10000005
    ctx->pc = 0x371CDCu;
    {
        const bool branch_taken_0x371cdc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x371cdc) {
            ctx->pc = 0x371CF4u;
            goto label_371cf4;
        }
    }
    ctx->pc = 0x371CE4u;
label_371ce4:
    // 0x371ce4: 0xc0dd478
    ctx->pc = 0x371CE4u;
    SET_GPR_U32(ctx, 31, 0x371CECu);
    ctx->pc = 0x371CE8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3751E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_003751E0_0x3751e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371CECu; }
    }
    if (ctx->pc != 0x371CECu) { return; }
    ctx->pc = 0x371CECu;
    // 0x371cec: 0x8e10001c
    ctx->pc = 0x371cecu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x371cf0: 0x0
    ctx->pc = 0x371cf0u;
    // NOP
label_371cf4:
    // 0x371cf4: 0x0
    ctx->pc = 0x371cf4u;
    // NOP
    // 0x371cf8: 0x1600fffa
    ctx->pc = 0x371CF8u;
    {
        const bool branch_taken_0x371cf8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x371cf8) {
            ctx->pc = 0x371CE4u;
            goto label_371ce4;
        }
    }
    ctx->pc = 0x371D00u;
    // 0x371d00: 0x10000005
    ctx->pc = 0x371D00u;
    {
        const bool branch_taken_0x371d00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x371d00) {
            ctx->pc = 0x371D18u;
            goto label_371d18;
        }
    }
    ctx->pc = 0x371D08u;
label_371d08:
    // 0x371d08: 0xc0dd4cc
    ctx->pc = 0x371D08u;
    SET_GPR_U32(ctx, 31, 0x371D10u);
    ctx->pc = 0x371D0Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x375330u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00375330_0x375330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371D10u; }
    }
    if (ctx->pc != 0x371D10u) { return; }
    ctx->pc = 0x371D10u;
    // 0x371d10: 0x8e52001c
    ctx->pc = 0x371d10u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x371d14: 0x0
    ctx->pc = 0x371d14u;
    // NOP
label_371d18:
    // 0x371d18: 0x0
    ctx->pc = 0x371d18u;
    // NOP
    // 0x371d1c: 0x1640fffa
    ctx->pc = 0x371D1Cu;
    {
        const bool branch_taken_0x371d1c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x371d1c) {
            ctx->pc = 0x371D08u;
            goto label_371d08;
        }
    }
    ctx->pc = 0x371D24u;
label_371d24:
    // 0x371d24: 0xc0ddf08
    ctx->pc = 0x371D24u;
    SET_GPR_U32(ctx, 31, 0x371D2Cu);
    ctx->pc = 0x377C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00377C20_0x377c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371D2Cu; }
    }
    if (ctx->pc != 0x371D2Cu) { return; }
    ctx->pc = 0x371D2Cu;
    // 0x371d2c: 0xc0dd300
    ctx->pc = 0x371D2Cu;
    SET_GPR_U32(ctx, 31, 0x371D34u);
    ctx->pc = 0x374C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00374C00_0x374c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371D34u; }
    }
    if (ctx->pc != 0x371D34u) { return; }
    ctx->pc = 0x371D34u;
    // 0x371d34: 0xc0dd554
    ctx->pc = 0x371D34u;
    SET_GPR_U32(ctx, 31, 0x371D3Cu);
    ctx->pc = 0x375550u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00375550_0x375550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371D3Cu; }
    }
    if (ctx->pc != 0x371D3Cu) { return; }
    ctx->pc = 0x371D3Cu;
    // 0x371d3c: 0x802d
    ctx->pc = 0x371d3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371d40: 0x10263c
    ctx->pc = 0x371d40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 24));
label_371d44:
    // 0x371d44: 0x3c02004a
    ctx->pc = 0x371d44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
    // 0x371d48: 0x4263f
    ctx->pc = 0x371d48u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x371d4c: 0x24425c30
    ctx->pc = 0x371d4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23600));
    // 0x371d50: 0x41900
    ctx->pc = 0x371d50u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x371d54: 0x642023
    ctx->pc = 0x371d54u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x371d58: 0x418c0
    ctx->pc = 0x371d58u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x371d5c: 0x831821
    ctx->pc = 0x371d5cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x371d60: 0x31940
    ctx->pc = 0x371d60u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
    // 0x371d64: 0xc0dd4f4
    ctx->pc = 0x371D64u;
    SET_GPR_U32(ctx, 31, 0x371D6Cu);
    ctx->pc = 0x371D68u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x3753D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_003753D0_0x3753d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371D6Cu; }
    }
    if (ctx->pc != 0x371D6Cu) { return; }
    ctx->pc = 0x371D6Cu;
    // 0x371d6c: 0x26020001
    ctx->pc = 0x371d6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 1));
    // 0x371d70: 0x2863c
    ctx->pc = 0x371d70u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 24));
    // 0x371d74: 0x10863f
    ctx->pc = 0x371d74u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
    // 0x371d78: 0x2a020008
    ctx->pc = 0x371d78u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 8));
    // 0x371d7c: 0x1440fff1
    ctx->pc = 0x371D7Cu;
    {
        const bool branch_taken_0x371d7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x371D80u;
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 24));
        if (branch_taken_0x371d7c) {
            ctx->pc = 0x371D44u;
            goto label_371d44;
        }
    }
    ctx->pc = 0x371D84u;
    // 0x371d84: 0x2404006c
    ctx->pc = 0x371d84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 108));
    // 0x371d88: 0xc06bde0
    ctx->pc = 0x371D88u;
    SET_GPR_U32(ctx, 31, 0x371D90u);
    ctx->pc = 0x371D8Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371D90u; }
        if (ctx->pc != 0x371D90u) { return; }
    }
    ctx->pc = 0x371D90u;
    // 0x371d90: 0xc1a0cf0
    ctx->pc = 0x371D90u;
    SET_GPR_U32(ctx, 31, 0x371D98u);
    ctx->pc = 0x6833C0u;
    {
        auto targetFn = runtime->lookupFunction(0x6833C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371D98u; }
        if (ctx->pc != 0x371D98u) { return; }
    }
    ctx->pc = 0x371D98u;
    // 0x371d98: 0x2404006c
    ctx->pc = 0x371d98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 108));
    // 0x371d9c: 0xc06bde0
    ctx->pc = 0x371D9Cu;
    SET_GPR_U32(ctx, 31, 0x371DA4u);
    ctx->pc = 0x371DA0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371DA4u; }
        if (ctx->pc != 0x371DA4u) { return; }
    }
    ctx->pc = 0x371DA4u;
    // 0x371da4: 0xc1ae904
    ctx->pc = 0x371DA4u;
    SET_GPR_U32(ctx, 31, 0x371DACu);
    ctx->pc = 0x6BA410u;
    {
        auto targetFn = runtime->lookupFunction(0x6BA410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371DACu; }
        if (ctx->pc != 0x371DACu) { return; }
    }
    ctx->pc = 0x371DACu;
    // 0x371dac: 0x2404005f
    ctx->pc = 0x371dacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 95));
    // 0x371db0: 0xc06bde0
    ctx->pc = 0x371DB0u;
    SET_GPR_U32(ctx, 31, 0x371DB8u);
    ctx->pc = 0x371DB4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371DB8u; }
        if (ctx->pc != 0x371DB8u) { return; }
    }
    ctx->pc = 0x371DB8u;
    // 0x371db8: 0x24040060
    ctx->pc = 0x371db8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 96));
    // 0x371dbc: 0xc06bde0
    ctx->pc = 0x371DBCu;
    SET_GPR_U32(ctx, 31, 0x371DC4u);
    ctx->pc = 0x371DC0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371DC4u; }
        if (ctx->pc != 0x371DC4u) { return; }
    }
    ctx->pc = 0x371DC4u;
    // 0x371dc4: 0xc0dd300
    ctx->pc = 0x371DC4u;
    SET_GPR_U32(ctx, 31, 0x371DCCu);
    ctx->pc = 0x374C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00374C00_0x374c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371DCCu; }
    }
    if (ctx->pc != 0x371DCCu) { return; }
    ctx->pc = 0x371DCCu;
    // 0x371dcc: 0xc1643c4
    ctx->pc = 0x371DCCu;
    SET_GPR_U32(ctx, 31, 0x371DD4u);
    ctx->pc = 0x590F10u;
    {
        auto targetFn = runtime->lookupFunction(0x590F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371DD4u; }
        if (ctx->pc != 0x371DD4u) { return; }
    }
    ctx->pc = 0x371DD4u;
    // 0x371dd4: 0xc0dd648
    ctx->pc = 0x371DD4u;
    SET_GPR_U32(ctx, 31, 0x371DDCu);
    ctx->pc = 0x375920u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00375920_0x375920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371DDCu; }
    }
    if (ctx->pc != 0x371DDCu) { return; }
    ctx->pc = 0x371DDCu;
    // 0x371ddc: 0xc160890
    ctx->pc = 0x371DDCu;
    SET_GPR_U32(ctx, 31, 0x371DE4u);
    ctx->pc = 0x582240u;
    {
        auto targetFn = runtime->lookupFunction(0x582240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371DE4u; }
        if (ctx->pc != 0x371DE4u) { return; }
    }
    ctx->pc = 0x371DE4u;
    // 0x371de4: 0xc15ce3c
    ctx->pc = 0x371DE4u;
    SET_GPR_U32(ctx, 31, 0x371DECu);
    ctx->pc = 0x5738F0u;
    {
        auto targetFn = runtime->lookupFunction(0x5738F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371DECu; }
        if (ctx->pc != 0x371DECu) { return; }
    }
    ctx->pc = 0x371DECu;
    // 0x371dec: 0x2404006c
    ctx->pc = 0x371decu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 108));
    // 0x371df0: 0xc06bde0
    ctx->pc = 0x371DF0u;
    SET_GPR_U32(ctx, 31, 0x371DF8u);
    ctx->pc = 0x371DF4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371DF8u; }
        if (ctx->pc != 0x371DF8u) { return; }
    }
    ctx->pc = 0x371DF8u;
    // 0x371df8: 0x3c01004c
    ctx->pc = 0x371df8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x371dfc: 0x8022adf8
    ctx->pc = 0x371dfcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946296)));
    // 0x371e00: 0x10400013
    ctx->pc = 0x371E00u;
    {
        const bool branch_taken_0x371e00 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x371E04u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 108));
        if (branch_taken_0x371e00) {
            ctx->pc = 0x371E50u;
            goto label_371e50;
        }
    }
    ctx->pc = 0x371E08u;
    // 0x371e08: 0x3c010039
    ctx->pc = 0x371e08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)57 << 16));
    // 0x371e0c: 0x8c31edd4
    ctx->pc = 0x371e0cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 1), 4294962644)));
    // 0x371e10: 0x1220000e
    ctx->pc = 0x371E10u;
    {
        const bool branch_taken_0x371e10 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x371E14u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x371e10) {
            ctx->pc = 0x371E4Cu;
            goto label_371e4c;
        }
    }
    ctx->pc = 0x371E18u;
label_371e18:
    // 0x371e18: 0x82230000
    ctx->pc = 0x371e18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371e1c: 0x82220001
    ctx->pc = 0x371e1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x371e20: 0x621024
    ctx->pc = 0x371e20u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x371e24: 0x10400004
    ctx->pc = 0x371E24u;
    {
        const bool branch_taken_0x371e24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x371E28u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x371e24) {
            ctx->pc = 0x371E38u;
            goto label_371e38;
        }
    }
    ctx->pc = 0x371E2Cu;
    // 0x371e2c: 0xc0dc7bc
    ctx->pc = 0x371E2Cu;
    SET_GPR_U32(ctx, 31, 0x371E34u);
    ctx->pc = 0x371E30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x371EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00371EF0_0x371ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371E34u; }
    }
    if (ctx->pc != 0x371E34u) { return; }
    ctx->pc = 0x371E34u;
    // 0x371e34: 0x26020001
    ctx->pc = 0x371e34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 1));
label_371e38:
    // 0x371e38: 0x2863c
    ctx->pc = 0x371e38u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 24));
    // 0x371e3c: 0x10863f
    ctx->pc = 0x371e3cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
    // 0x371e40: 0x2a020010
    ctx->pc = 0x371e40u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 16));
    // 0x371e44: 0x1440fff4
    ctx->pc = 0x371E44u;
    {
        const bool branch_taken_0x371e44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x371E48u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4512));
        if (branch_taken_0x371e44) {
            ctx->pc = 0x371E18u;
            goto label_371e18;
        }
    }
    ctx->pc = 0x371E4Cu;
label_371e4c:
    // 0x371e4c: 0x2404006c
    ctx->pc = 0x371e4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 108));
label_371e50:
    // 0x371e50: 0xc06bde0
    ctx->pc = 0x371E50u;
    SET_GPR_U32(ctx, 31, 0x371E58u);
    ctx->pc = 0x371E54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371E58u; }
        if (ctx->pc != 0x371E58u) { return; }
    }
    ctx->pc = 0x371E58u;
    // 0x371e58: 0x2404005e
    ctx->pc = 0x371e58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 94));
    // 0x371e5c: 0xc06bde0
    ctx->pc = 0x371E5Cu;
    SET_GPR_U32(ctx, 31, 0x371E64u);
    ctx->pc = 0x371E60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 50));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371E64u; }
        if (ctx->pc != 0x371E64u) { return; }
    }
    ctx->pc = 0x371E64u;
    // 0x371e64: 0x2404005f
    ctx->pc = 0x371e64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 95));
    // 0x371e68: 0xc06bde0
    ctx->pc = 0x371E68u;
    SET_GPR_U32(ctx, 31, 0x371E70u);
    ctx->pc = 0x371E6Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371E70u; }
        if (ctx->pc != 0x371E70u) { return; }
    }
    ctx->pc = 0x371E70u;
    // 0x371e70: 0x24040060
    ctx->pc = 0x371e70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 96));
    // 0x371e74: 0xc06bde0
    ctx->pc = 0x371E74u;
    SET_GPR_U32(ctx, 31, 0x371E7Cu);
    ctx->pc = 0x371E78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371E7Cu; }
        if (ctx->pc != 0x371E7Cu) { return; }
    }
    ctx->pc = 0x371E7Cu;
    // 0x371e7c: 0xc1ac574
    ctx->pc = 0x371E7Cu;
    SET_GPR_U32(ctx, 31, 0x371E84u);
    ctx->pc = 0x371E80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x6B15D0u;
    {
        auto targetFn = runtime->lookupFunction(0x6B15D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371E84u; }
        if (ctx->pc != 0x371E84u) { return; }
    }
    ctx->pc = 0x371E84u;
    // 0x371e84: 0xc1947d8
    ctx->pc = 0x371E84u;
    SET_GPR_U32(ctx, 31, 0x371E8Cu);
    ctx->pc = 0x651F60u;
    {
        auto targetFn = runtime->lookupFunction(0x651F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371E8Cu; }
        if (ctx->pc != 0x371E8Cu) { return; }
    }
    ctx->pc = 0x371E8Cu;
    // 0x371e8c: 0xc06c9d0
    ctx->pc = 0x371E8Cu;
    SET_GPR_U32(ctx, 31, 0x371E94u);
    ctx->pc = 0x1B2740u;
    {
        auto targetFn = runtime->lookupFunction(0x1B2740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371E94u; }
        if (ctx->pc != 0x371E94u) { return; }
    }
    ctx->pc = 0x371E94u;
    // 0x371e94: 0xc0dc67c
    ctx->pc = 0x371E94u;
    SET_GPR_U32(ctx, 31, 0x371E9Cu);
    ctx->pc = 0x3719F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_003719F0_0x3719f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371E9Cu; }
    }
    if (ctx->pc != 0x371E9Cu) { return; }
    ctx->pc = 0x371E9Cu;
    // 0x371e9c: 0x3c010032
    ctx->pc = 0x371e9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x371ea0: 0x902243d5
    ctx->pc = 0x371ea0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17365)));
    // 0x371ea4: 0x14400003
    ctx->pc = 0x371EA4u;
    {
        const bool branch_taken_0x371ea4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x371ea4) {
            ctx->pc = 0x371EB4u;
            goto label_371eb4;
        }
    }
    ctx->pc = 0x371EACu;
    // 0x371eac: 0xc06f174
    ctx->pc = 0x371EACu;
    SET_GPR_U32(ctx, 31, 0x371EB4u);
    ctx->pc = 0x1BC5D0u;
    {
        auto targetFn = runtime->lookupFunction(0x1BC5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371EB4u; }
        if (ctx->pc != 0x371EB4u) { return; }
    }
    ctx->pc = 0x371EB4u;
label_371eb4:
    // 0x371eb4: 0xc06edb8
    ctx->pc = 0x371EB4u;
    SET_GPR_U32(ctx, 31, 0x371EBCu);
    ctx->pc = 0x1BB6E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1BB6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371EBCu; }
        if (ctx->pc != 0x371EBCu) { return; }
    }
    ctx->pc = 0x371EBCu;
    // 0x371ebc: 0x2404005e
    ctx->pc = 0x371ebcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 94));
    // 0x371ec0: 0xc06bde0
    ctx->pc = 0x371EC0u;
    SET_GPR_U32(ctx, 31, 0x371EC8u);
    ctx->pc = 0x371EC4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371EC8u; }
        if (ctx->pc != 0x371EC8u) { return; }
    }
    ctx->pc = 0x371EC8u;
    // 0x371ec8: 0xdfbf0040
    ctx->pc = 0x371ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x371ecc: 0x7bb30030
    ctx->pc = 0x371eccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x371ed0: 0x7bb20020
    ctx->pc = 0x371ed0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x371ed4: 0x7bb10010
    ctx->pc = 0x371ed4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x371ed8: 0x7bb00000
    ctx->pc = 0x371ed8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371edc: 0x3e00008
    ctx->pc = 0x371EDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371EE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x371A4Cu: goto label_371a4c;
            case 0x371AC0u: goto label_371ac0;
            case 0x371C68u: goto label_371c68;
            case 0x371C6Cu: goto label_371c6c;
            case 0x371CBCu: goto label_371cbc;
            case 0x371CE4u: goto label_371ce4;
            case 0x371CF4u: goto label_371cf4;
            case 0x371D08u: goto label_371d08;
            case 0x371D18u: goto label_371d18;
            case 0x371D24u: goto label_371d24;
            case 0x371D44u: goto label_371d44;
            case 0x371E18u: goto label_371e18;
            case 0x371E38u: goto label_371e38;
            case 0x371E4Cu: goto label_371e4c;
            case 0x371E50u: goto label_371e50;
            case 0x371EB4u: goto label_371eb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x371EE4u;
    // 0x371ee4: 0x0
    ctx->pc = 0x371ee4u;
    // NOP
    // 0x371ee8: 0x0
    ctx->pc = 0x371ee8u;
    // NOP
    // 0x371eec: 0x0
    ctx->pc = 0x371eecu;
    // NOP
}
