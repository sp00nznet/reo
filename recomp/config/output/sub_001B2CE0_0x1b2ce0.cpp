#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B2CE0
// Address: 0x1b2ce0 - 0x1b33b0
void sub_001B2CE0_0x1b2ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b2ce0u;

    // 0x1b2ce0: 0x3c01004c
    ctx->pc = 0x1b2ce0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x1b2ce4: 0xa420a828
    ctx->pc = 0x1b2ce4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294944808), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b2ce8: 0x3c01004c
    ctx->pc = 0x1b2ce8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x1b2cec: 0x3e00008
    ctx->pc = 0x1B2CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2CF0u;
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294944810), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B2D44u: goto label_1b2d44;
            case 0x1B2D70u: goto label_1b2d70;
            case 0x1B2E58u: goto label_1b2e58;
            case 0x1B2E64u: goto label_1b2e64;
            case 0x1B2EE0u: goto label_1b2ee0;
            case 0x1B2F44u: goto label_1b2f44;
            case 0x1B2F8Cu: goto label_1b2f8c;
            case 0x1B2F94u: goto label_1b2f94;
            case 0x1B2FACu: goto label_1b2fac;
            case 0x1B2FB0u: goto label_1b2fb0;
            case 0x1B2FD8u: goto label_1b2fd8;
            case 0x1B3004u: goto label_1b3004;
            case 0x1B300Cu: goto label_1b300c;
            case 0x1B3034u: goto label_1b3034;
            case 0x1B3038u: goto label_1b3038;
            case 0x1B306Cu: goto label_1b306c;
            case 0x1B3074u: goto label_1b3074;
            case 0x1B30BCu: goto label_1b30bc;
            case 0x1B30C8u: goto label_1b30c8;
            case 0x1B3130u: goto label_1b3130;
            case 0x1B3194u: goto label_1b3194;
            case 0x1B31DCu: goto label_1b31dc;
            case 0x1B31E4u: goto label_1b31e4;
            case 0x1B31FCu: goto label_1b31fc;
            case 0x1B3200u: goto label_1b3200;
            case 0x1B3228u: goto label_1b3228;
            case 0x1B3254u: goto label_1b3254;
            case 0x1B325Cu: goto label_1b325c;
            case 0x1B3284u: goto label_1b3284;
            case 0x1B3288u: goto label_1b3288;
            case 0x1B32BCu: goto label_1b32bc;
            case 0x1B32C4u: goto label_1b32c4;
            case 0x1B3340u: goto label_1b3340;
            case 0x1B338Cu: goto label_1b338c;
            case 0x1B3390u: goto label_1b3390;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B2CF4u;
    // 0x1b2cf4: 0x0
    ctx->pc = 0x1b2cf4u;
    // NOP
    // 0x1b2cf8: 0x0
    ctx->pc = 0x1b2cf8u;
    // NOP
    // 0x1b2cfc: 0x0
    ctx->pc = 0x1b2cfcu;
    // NOP
    // 0x1b2d00: 0x27bdfff0
    ctx->pc = 0x1b2d00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2d04: 0x3c03004c
    ctx->pc = 0x1b2d04u;
    SET_GPR_U32(ctx, 3, ((uint32_t)76 << 16));
    // 0x1b2d08: 0xffbf0000
    ctx->pc = 0x1b2d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2d0c: 0x3c01004c
    ctx->pc = 0x1b2d0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x1b2d10: 0x9425a828
    ctx->pc = 0x1b2d10u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294944808)));
    // 0x1b2d14: 0x2463a420
    ctx->pc = 0x1b2d14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294943776));
    // 0x1b2d18: 0x3c010032
    ctx->pc = 0x1b2d18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b2d1c: 0x942443dc
    ctx->pc = 0x1b2d1cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17372)));
    // 0x1b2d20: 0x42040
    ctx->pc = 0x1b2d20u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1b2d24: 0x641821
    ctx->pc = 0x1b2d24u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b2d28: 0x94630000
    ctx->pc = 0x1b2d28u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b2d2c: 0x10650010
    ctx->pc = 0x1B2D2Cu;
    {
        const bool branch_taken_0x1b2d2c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 5));
        if (branch_taken_0x1b2d2c) {
            ctx->pc = 0x1B2D70u;
            goto label_1b2d70;
        }
    }
    ctx->pc = 0x1B2D34u;
    // 0x1b2d34: 0x10a00003
    ctx->pc = 0x1B2D34u;
    {
        const bool branch_taken_0x1b2d34 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b2d34) {
            ctx->pc = 0x1B2D44u;
            goto label_1b2d44;
        }
    }
    ctx->pc = 0x1B2D3Cu;
    // 0x1b2d3c: 0xc06c788
    ctx->pc = 0x1B2D3Cu;
    SET_GPR_U32(ctx, 31, 0x1B2D44u);
    ctx->pc = 0x1B1E20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1E20_0x1b1e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D44u; }
    }
    if (ctx->pc != 0x1B2D44u) { return; }
    ctx->pc = 0x1B2D44u;
label_1b2d44:
    // 0x1b2d44: 0x3c010032
    ctx->pc = 0x1b2d44u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b2d48: 0x3c02004c
    ctx->pc = 0x1b2d48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)76 << 16));
    // 0x1b2d4c: 0x942343dc
    ctx->pc = 0x1b2d4cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17372)));
    // 0x1b2d50: 0x2442a420
    ctx->pc = 0x1b2d50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294943776));
    // 0x1b2d54: 0x31840
    ctx->pc = 0x1b2d54u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1b2d58: 0x3c01004c
    ctx->pc = 0x1b2d58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x1b2d5c: 0x431821
    ctx->pc = 0x1b2d5cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2d60: 0x94620000
    ctx->pc = 0x1b2d60u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b2d64: 0xa422a828
    ctx->pc = 0x1b2d64u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294944808), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b2d68: 0xc0746c4
    ctx->pc = 0x1B2D68u;
    SET_GPR_U32(ctx, 31, 0x1B2D70u);
    ctx->pc = 0x1B2D6Cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x1D1B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1B10_0x1d1b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D70u; }
    }
    if (ctx->pc != 0x1B2D70u) { return; }
    ctx->pc = 0x1B2D70u;
label_1b2d70:
    // 0x1b2d70: 0xdfbf0000
    ctx->pc = 0x1b2d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2d74: 0x3e00008
    ctx->pc = 0x1B2D74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2D78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B2D44u: goto label_1b2d44;
            case 0x1B2D70u: goto label_1b2d70;
            case 0x1B2E58u: goto label_1b2e58;
            case 0x1B2E64u: goto label_1b2e64;
            case 0x1B2EE0u: goto label_1b2ee0;
            case 0x1B2F44u: goto label_1b2f44;
            case 0x1B2F8Cu: goto label_1b2f8c;
            case 0x1B2F94u: goto label_1b2f94;
            case 0x1B2FACu: goto label_1b2fac;
            case 0x1B2FB0u: goto label_1b2fb0;
            case 0x1B2FD8u: goto label_1b2fd8;
            case 0x1B3004u: goto label_1b3004;
            case 0x1B300Cu: goto label_1b300c;
            case 0x1B3034u: goto label_1b3034;
            case 0x1B3038u: goto label_1b3038;
            case 0x1B306Cu: goto label_1b306c;
            case 0x1B3074u: goto label_1b3074;
            case 0x1B30BCu: goto label_1b30bc;
            case 0x1B30C8u: goto label_1b30c8;
            case 0x1B3130u: goto label_1b3130;
            case 0x1B3194u: goto label_1b3194;
            case 0x1B31DCu: goto label_1b31dc;
            case 0x1B31E4u: goto label_1b31e4;
            case 0x1B31FCu: goto label_1b31fc;
            case 0x1B3200u: goto label_1b3200;
            case 0x1B3228u: goto label_1b3228;
            case 0x1B3254u: goto label_1b3254;
            case 0x1B325Cu: goto label_1b325c;
            case 0x1B3284u: goto label_1b3284;
            case 0x1B3288u: goto label_1b3288;
            case 0x1B32BCu: goto label_1b32bc;
            case 0x1B32C4u: goto label_1b32c4;
            case 0x1B3340u: goto label_1b3340;
            case 0x1B338Cu: goto label_1b338c;
            case 0x1B3390u: goto label_1b3390;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B2D7Cu;
    // 0x1b2d7c: 0x0
    ctx->pc = 0x1b2d7cu;
    // NOP
    // 0x1b2d80: 0x27bdfff0
    ctx->pc = 0x1b2d80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2d84: 0x3c04004c
    ctx->pc = 0x1b2d84u;
    SET_GPR_U32(ctx, 4, ((uint32_t)76 << 16));
    // 0x1b2d88: 0xffbf0000
    ctx->pc = 0x1b2d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2d8c: 0x3c01004c
    ctx->pc = 0x1b2d8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x1b2d90: 0xa420a82c
    ctx->pc = 0x1b2d90u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294944812), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b2d94: 0x2484a830
    ctx->pc = 0x1b2d94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944816));
    // 0x1b2d98: 0x3c01004c
    ctx->pc = 0x1b2d98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x1b2d9c: 0x282d
    ctx->pc = 0x1b2d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2da0: 0x24060004
    ctx->pc = 0x1b2da0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b2da4: 0xc041f1a
    ctx->pc = 0x1B2DA4u;
    SET_GPR_U32(ctx, 31, 0x1B2DACu);
    ctx->pc = 0x1B2DA8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294944814), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2DACu; }
    }
    if (ctx->pc != 0x1B2DACu) { return; }
    ctx->pc = 0x1B2DACu;
    // 0x1b2dac: 0x3c04004c
    ctx->pc = 0x1b2dacu;
    SET_GPR_U32(ctx, 4, ((uint32_t)76 << 16));
    // 0x1b2db0: 0x240500ff
    ctx->pc = 0x1b2db0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1b2db4: 0x24849680
    ctx->pc = 0x1b2db4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294940288));
    // 0x1b2db8: 0xc041f1a
    ctx->pc = 0x1B2DB8u;
    SET_GPR_U32(ctx, 31, 0x1B2DC0u);
    ctx->pc = 0x1B2DBCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1024));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2DC0u; }
    }
    if (ctx->pc != 0x1B2DC0u) { return; }
    ctx->pc = 0x1B2DC0u;
    // 0x1b2dc0: 0xdfbf0000
    ctx->pc = 0x1b2dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2dc4: 0x3e00008
    ctx->pc = 0x1B2DC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2DC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B2D44u: goto label_1b2d44;
            case 0x1B2D70u: goto label_1b2d70;
            case 0x1B2E58u: goto label_1b2e58;
            case 0x1B2E64u: goto label_1b2e64;
            case 0x1B2EE0u: goto label_1b2ee0;
            case 0x1B2F44u: goto label_1b2f44;
            case 0x1B2F8Cu: goto label_1b2f8c;
            case 0x1B2F94u: goto label_1b2f94;
            case 0x1B2FACu: goto label_1b2fac;
            case 0x1B2FB0u: goto label_1b2fb0;
            case 0x1B2FD8u: goto label_1b2fd8;
            case 0x1B3004u: goto label_1b3004;
            case 0x1B300Cu: goto label_1b300c;
            case 0x1B3034u: goto label_1b3034;
            case 0x1B3038u: goto label_1b3038;
            case 0x1B306Cu: goto label_1b306c;
            case 0x1B3074u: goto label_1b3074;
            case 0x1B30BCu: goto label_1b30bc;
            case 0x1B30C8u: goto label_1b30c8;
            case 0x1B3130u: goto label_1b3130;
            case 0x1B3194u: goto label_1b3194;
            case 0x1B31DCu: goto label_1b31dc;
            case 0x1B31E4u: goto label_1b31e4;
            case 0x1B31FCu: goto label_1b31fc;
            case 0x1B3200u: goto label_1b3200;
            case 0x1B3228u: goto label_1b3228;
            case 0x1B3254u: goto label_1b3254;
            case 0x1B325Cu: goto label_1b325c;
            case 0x1B3284u: goto label_1b3284;
            case 0x1B3288u: goto label_1b3288;
            case 0x1B32BCu: goto label_1b32bc;
            case 0x1B32C4u: goto label_1b32c4;
            case 0x1B3340u: goto label_1b3340;
            case 0x1B338Cu: goto label_1b338c;
            case 0x1B3390u: goto label_1b3390;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B2DCCu;
    // 0x1b2dcc: 0x0
    ctx->pc = 0x1b2dccu;
    // NOP
    // 0x1b2dd0: 0x3c01004c
    ctx->pc = 0x1b2dd0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x1b2dd4: 0x3c04004c
    ctx->pc = 0x1b2dd4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)76 << 16));
    // 0x1b2dd8: 0xa420a82c
    ctx->pc = 0x1b2dd8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294944812), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b2ddc: 0x24849680
    ctx->pc = 0x1b2ddcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294940288));
    // 0x1b2de0: 0x3c01004c
    ctx->pc = 0x1b2de0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x1b2de4: 0x240500ff
    ctx->pc = 0x1b2de4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1b2de8: 0xa420a82e
    ctx->pc = 0x1b2de8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294944814), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b2dec: 0x24060400
    ctx->pc = 0x1b2decu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1b2df0: 0x3c01004c
    ctx->pc = 0x1b2df0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x1b2df4: 0xa420a828
    ctx->pc = 0x1b2df4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294944808), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b2df8: 0x3c01004c
    ctx->pc = 0x1b2df8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x1b2dfc: 0x8041f1a
    ctx->pc = 0x1B2DFCu;
    ctx->pc = 0x1B2E00u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294944810), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x1B2E04u;
    // 0x1b2e04: 0x0
    ctx->pc = 0x1b2e04u;
    // NOP
    // 0x1b2e08: 0x0
    ctx->pc = 0x1b2e08u;
    // NOP
    // 0x1b2e0c: 0x0
    ctx->pc = 0x1b2e0cu;
    // NOP
    // 0x1b2e10: 0x27bdffd0
    ctx->pc = 0x1b2e10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b2e14: 0x3c04004c
    ctx->pc = 0x1b2e14u;
    SET_GPR_U32(ctx, 4, ((uint32_t)76 << 16));
    // 0x1b2e18: 0x7fb20020
    ctx->pc = 0x1b2e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b2e1c: 0x3c010032
    ctx->pc = 0x1b2e1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b2e20: 0x7fb10010
    ctx->pc = 0x1b2e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b2e24: 0x2484a620
    ctx->pc = 0x1b2e24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944288));
    // 0x1b2e28: 0x7fb00000
    ctx->pc = 0x1b2e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b2e2c: 0x942543dc
    ctx->pc = 0x1b2e2cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17372)));
    // 0x1b2e30: 0x53840
    ctx->pc = 0x1b2e30u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1b2e34: 0x3c01004c
    ctx->pc = 0x1b2e34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x1b2e38: 0x872021
    ctx->pc = 0x1b2e38u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1b2e3c: 0x9423a82c
    ctx->pc = 0x1b2e3cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294944812)));
    // 0x1b2e40: 0x948b0000
    ctx->pc = 0x1b2e40u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b2e44: 0x11630004
    ctx->pc = 0x1B2E44u;
    {
        const bool branch_taken_0x1b2e44 = (GPR_U32(ctx, 11) == GPR_U32(ctx, 3));
        ctx->pc = 0x1B2E48u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 31));
        if (branch_taken_0x1b2e44) {
            ctx->pc = 0x1B2E58u;
            goto label_1b2e58;
        }
    }
    ctx->pc = 0x1B2E4Cu;
    // 0x1b2e4c: 0x24030001
    ctx->pc = 0x1b2e4cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2e50: 0x3c01003b
    ctx->pc = 0x1b2e50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)59 << 16));
    // 0x1b2e54: 0xa0235048
    ctx->pc = 0x1b2e54u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20552), (uint8_t)GPR_U32(ctx, 3));
label_1b2e58:
    // 0x1b2e58: 0x3c05004c
    ctx->pc = 0x1b2e58u;
    SET_GPR_U32(ctx, 5, ((uint32_t)76 << 16));
    // 0x1b2e5c: 0x2403ffff
    ctx->pc = 0x1b2e5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b2e60: 0x24a59680
    ctx->pc = 0x1b2e60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294940288));
label_1b2e64:
    // 0x1b2e64: 0x82080
    ctx->pc = 0x1b2e64u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 8), 2));
    // 0x1b2e68: 0xa43021
    ctx->pc = 0x1b2e68u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1b2e6c: 0x2508ffff
    ctx->pc = 0x1b2e6cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1b2e70: 0x8cc40000
    ctx->pc = 0x1b2e70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b2e74: 0xacc40200
    ctx->pc = 0x1b2e74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 512), GPR_U32(ctx, 4));
    // 0x1b2e78: 0x8cc40100
    ctx->pc = 0x1b2e78u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 256)));
    // 0x1b2e7c: 0xacc40300
    ctx->pc = 0x1b2e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 768), GPR_U32(ctx, 4));
    // 0x1b2e80: 0xacc30000
    ctx->pc = 0x1b2e80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1b2e84: 0x501fff7
    ctx->pc = 0x1B2E84u;
    {
        const bool branch_taken_0x1b2e84 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1B2E88u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 256), GPR_U32(ctx, 3));
        if (branch_taken_0x1b2e84) {
            ctx->pc = 0x1B2E64u;
            goto label_1b2e64;
        }
    }
    ctx->pc = 0x1B2E8Cu;
    // 0x1b2e8c: 0x3c01004c
    ctx->pc = 0x1b2e8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x1b2e90: 0x3c06004c
    ctx->pc = 0x1b2e90u;
    SET_GPR_U32(ctx, 6, ((uint32_t)76 << 16));
    // 0x1b2e94: 0x942da820
    ctx->pc = 0x1b2e94u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294944800)));
    // 0x1b2e98: 0x24c69a80
    ctx->pc = 0x1b2e98u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294941312));
    // 0x1b2e9c: 0x3c180075
    ctx->pc = 0x1b2e9cu;
    SET_GPR_U32(ctx, 24, ((uint32_t)117 << 16));
    // 0x1b2ea0: 0xc75021
    ctx->pc = 0x1b2ea0u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1b2ea4: 0x3c03004c
    ctx->pc = 0x1b2ea4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)76 << 16));
    // 0x1b2ea8: 0x3c050071
    ctx->pc = 0x1b2ea8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)113 << 16));
    // 0x1b2eac: 0x802d
    ctx->pc = 0x1b2eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2eb0: 0xc82d
    ctx->pc = 0x1b2eb0u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2eb4: 0x2718f250
    ctx->pc = 0x1b2eb4u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 4294963792));
    // 0x1b2eb8: 0x482d
    ctx->pc = 0x1b2eb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2ebc: 0x254c0ba0
    ctx->pc = 0x1b2ebcu;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 10), 2976));
    // 0x1b2ec0: 0x24639680
    ctx->pc = 0x1b2ec0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294940288));
    // 0x1b2ec4: 0x3c010032
    ctx->pc = 0x1b2ec4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b2ec8: 0x24040001
    ctx->pc = 0x1b2ec8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2ecc: 0x942f43dc
    ctx->pc = 0x1b2eccu;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17372)));
    // 0x1b2ed0: 0x3c01004c
    ctx->pc = 0x1b2ed0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x1b2ed4: 0x902eae8e
    ctx->pc = 0x1b2ed4u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946446)));
    // 0x1b2ed8: 0x10000066
    ctx->pc = 0x1B2ED8u;
    {
        const bool branch_taken_0x1b2ed8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B2EDCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941376));
        if (branch_taken_0x1b2ed8) {
            ctx->pc = 0x1B3074u;
            goto label_1b3074;
        }
    }
    ctx->pc = 0x1B2EE0u;
label_1b2ee0:
    // 0x1b2ee0: 0x93120002
    ctx->pc = 0x1b2ee0u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x1b2ee4: 0x124142
    ctx->pc = 0x1b2ee4u;
    SET_GPR_U32(ctx, 8, SRL32(GPR_U32(ctx, 18), 5));
    // 0x1b2ee8: 0x3247001f
    ctx->pc = 0x1b2ee8u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 18), 31));
    // 0x1b2eec: 0x88880
    ctx->pc = 0x1b2eecu;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 8), 2));
    // 0x1b2ef0: 0xe44004
    ctx->pc = 0x1b2ef0u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x1b2ef4: 0xb13821
    ctx->pc = 0x1b2ef4u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1b2ef8: 0x8ce70000
    ctx->pc = 0x1b2ef8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1b2efc: 0x1073824
    ctx->pc = 0x1b2efcu;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1b2f00: 0x7382b
    ctx->pc = 0x1b2f00u;
    SET_GPR_U32(ctx, 7, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x1b2f04: 0x10e00059
    ctx->pc = 0x1B2F04u;
    {
        const bool branch_taken_0x1b2f04 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b2f04) {
            ctx->pc = 0x1B306Cu;
            goto label_1b306c;
        }
    }
    ctx->pc = 0x1B2F0Cu;
    // 0x1b2f0c: 0x164d0057
    ctx->pc = 0x1B2F0Cu;
    {
        const bool branch_taken_0x1b2f0c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 13));
        if (branch_taken_0x1b2f0c) {
            ctx->pc = 0x1B306Cu;
            goto label_1b306c;
        }
    }
    ctx->pc = 0x1B2F14u;
    // 0x1b2f14: 0x93110022
    ctx->pc = 0x1b2f14u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 34)));
    // 0x1b2f18: 0x95870000
    ctx->pc = 0x1b2f18u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1b2f1c: 0x114040
    ctx->pc = 0x1b2f1cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 17), 1));
    // 0x1b2f20: 0xc84021
    ctx->pc = 0x1b2f20u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1b2f24: 0x95080ba0
    ctx->pc = 0x1b2f24u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2976)));
    // 0x1b2f28: 0x15070050
    ctx->pc = 0x1B2F28u;
    {
        const bool branch_taken_0x1b2f28 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 7));
        if (branch_taken_0x1b2f28) {
            ctx->pc = 0x1B306Cu;
            goto label_1b306c;
        }
    }
    ctx->pc = 0x1B2F30u;
    // 0x1b2f30: 0x93070026
    ctx->pc = 0x1b2f30u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 38)));
    // 0x1b2f34: 0x14e00003
    ctx->pc = 0x1B2F34u;
    {
        const bool branch_taken_0x1b2f34 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b2f34) {
            ctx->pc = 0x1B2F44u;
            goto label_1b2f44;
        }
    }
    ctx->pc = 0x1B2F3Cu;
    // 0x1b2f3c: 0x162f004b
    ctx->pc = 0x1B2F3Cu;
    {
        const bool branch_taken_0x1b2f3c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 15));
        if (branch_taken_0x1b2f3c) {
            ctx->pc = 0x1B306Cu;
            goto label_1b306c;
        }
    }
    ctx->pc = 0x1B2F44u;
label_1b2f44:
    // 0x1b2f44: 0x93070004
    ctx->pc = 0x1b2f44u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 4)));
    // 0x1b2f48: 0x74142
    ctx->pc = 0x1b2f48u;
    SET_GPR_U32(ctx, 8, SRL32(GPR_U32(ctx, 7), 5));
    // 0x1b2f4c: 0x30e7001f
    ctx->pc = 0x1b2f4cu;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 7), 31));
    // 0x1b2f50: 0x88880
    ctx->pc = 0x1b2f50u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 8), 2));
    // 0x1b2f54: 0xe44004
    ctx->pc = 0x1b2f54u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x1b2f58: 0xd13821
    ctx->pc = 0x1b2f58u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x1b2f5c: 0x8ce70fb0
    ctx->pc = 0x1b2f5cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 7), 4016)));
    // 0x1b2f60: 0xe83824
    ctx->pc = 0x1b2f60u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1b2f64: 0x10e00041
    ctx->pc = 0x1B2F64u;
    {
        const bool branch_taken_0x1b2f64 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b2f64) {
            ctx->pc = 0x1B306Cu;
            goto label_1b306c;
        }
    }
    ctx->pc = 0x1B2F6Cu;
    // 0x1b2f6c: 0x16000007
    ctx->pc = 0x1B2F6Cu;
    {
        const bool branch_taken_0x1b2f6c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B2F70u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b2f6c) {
            ctx->pc = 0x1B2F8Cu;
            goto label_1b2f8c;
        }
    }
    ctx->pc = 0x1B2F74u;
    // 0x1b2f74: 0x93080003
    ctx->pc = 0x1b2f74u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x1b2f78: 0x103880
    ctx->pc = 0x1b2f78u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b2f7c: 0x673821
    ctx->pc = 0x1b2f7cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1b2f80: 0x26100001
    ctx->pc = 0x1b2f80u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b2f84: 0x10000014
    ctx->pc = 0x1B2F84u;
    {
        const bool branch_taken_0x1b2f84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B2F88u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
        if (branch_taken_0x1b2f84) {
            ctx->pc = 0x1B2FD8u;
            goto label_1b2fd8;
        }
    }
    ctx->pc = 0x1B2F8Cu;
label_1b2f8c:
    // 0x1b2f8c: 0x10000008
    ctx->pc = 0x1B2F8Cu;
    {
        const bool branch_taken_0x1b2f8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B2F90u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b2f8c) {
            ctx->pc = 0x1B2FB0u;
            goto label_1b2fb0;
        }
    }
    ctx->pc = 0x1B2F94u;
label_1b2f94:
    // 0x1b2f94: 0x93080003
    ctx->pc = 0x1b2f94u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x1b2f98: 0x673821
    ctx->pc = 0x1b2f98u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1b2f9c: 0x8ce70000
    ctx->pc = 0x1b2f9cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1b2fa0: 0x15070002
    ctx->pc = 0x1B2FA0u;
    {
        const bool branch_taken_0x1b2fa0 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 7));
        if (branch_taken_0x1b2fa0) {
            ctx->pc = 0x1B2FACu;
            goto label_1b2fac;
        }
    }
    ctx->pc = 0x1B2FA8u;
    // 0x1b2fa8: 0x24110001
    ctx->pc = 0x1b2fa8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
label_1b2fac:
    // 0x1b2fac: 0x26520001
    ctx->pc = 0x1b2facu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_1b2fb0:
    // 0x1b2fb0: 0x250382a
    ctx->pc = 0x1b2fb0u;
    SET_GPR_U32(ctx, 7, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 16)));
    // 0x1b2fb4: 0x14e0fff7
    ctx->pc = 0x1B2FB4u;
    {
        const bool branch_taken_0x1b2fb4 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B2FB8u;
        SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 18), 2));
        if (branch_taken_0x1b2fb4) {
            ctx->pc = 0x1B2F94u;
            goto label_1b2f94;
        }
    }
    ctx->pc = 0x1B2FBCu;
    // 0x1b2fbc: 0x16200006
    ctx->pc = 0x1B2FBCu;
    {
        const bool branch_taken_0x1b2fbc = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b2fbc) {
            ctx->pc = 0x1B2FD8u;
            goto label_1b2fd8;
        }
    }
    ctx->pc = 0x1B2FC4u;
    // 0x1b2fc4: 0x93080003
    ctx->pc = 0x1b2fc4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x1b2fc8: 0x103880
    ctx->pc = 0x1b2fc8u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b2fcc: 0x673821
    ctx->pc = 0x1b2fccu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1b2fd0: 0x26100001
    ctx->pc = 0x1b2fd0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b2fd4: 0xace80000
    ctx->pc = 0x1b2fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
label_1b2fd8:
    // 0x1b2fd8: 0x1720000a
    ctx->pc = 0x1B2FD8u;
    {
        const bool branch_taken_0x1b2fd8 = (GPR_U32(ctx, 25) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B2FDCu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b2fd8) {
            ctx->pc = 0x1B3004u;
            goto label_1b3004;
        }
    }
    ctx->pc = 0x1B2FE0u;
    // 0x1b2fe0: 0x95880000
    ctx->pc = 0x1b2fe0u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1b2fe4: 0x193880
    ctx->pc = 0x1b2fe4u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 25), 2));
    // 0x1b2fe8: 0x673821
    ctx->pc = 0x1b2fe8u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1b2fec: 0x27390001
    ctx->pc = 0x1b2fecu;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 25), 1));
    // 0x1b2ff0: 0x84040
    ctx->pc = 0x1b2ff0u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 1));
    // 0x1b2ff4: 0xc84021
    ctx->pc = 0x1b2ff4u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1b2ff8: 0x95080db0
    ctx->pc = 0x1b2ff8u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 3504)));
    // 0x1b2ffc: 0x1000001b
    ctx->pc = 0x1B2FFCu;
    {
        const bool branch_taken_0x1b2ffc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B3000u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 256), GPR_U32(ctx, 8));
        if (branch_taken_0x1b2ffc) {
            ctx->pc = 0x1B306Cu;
            goto label_1b306c;
        }
    }
    ctx->pc = 0x1B3004u;
label_1b3004:
    // 0x1b3004: 0x1000000c
    ctx->pc = 0x1B3004u;
    {
        const bool branch_taken_0x1b3004 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B3008u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b3004) {
            ctx->pc = 0x1B3038u;
            goto label_1b3038;
        }
    }
    ctx->pc = 0x1B300Cu;
label_1b300c:
    // 0x1b300c: 0x95910000
    ctx->pc = 0x1b300cu;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1b3010: 0x79080
    ctx->pc = 0x1b3010u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 7), 2));
    // 0x1b3014: 0x729021
    ctx->pc = 0x1b3014u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1b3018: 0x8e520100
    ctx->pc = 0x1b3018u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x1b301c: 0x118840
    ctx->pc = 0x1b301cu;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 1));
    // 0x1b3020: 0xd18821
    ctx->pc = 0x1b3020u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x1b3024: 0x96310db0
    ctx->pc = 0x1b3024u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 3504)));
    // 0x1b3028: 0x16510002
    ctx->pc = 0x1B3028u;
    {
        const bool branch_taken_0x1b3028 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 17));
        if (branch_taken_0x1b3028) {
            ctx->pc = 0x1B3034u;
            goto label_1b3034;
        }
    }
    ctx->pc = 0x1B3030u;
    // 0x1b3030: 0x24080001
    ctx->pc = 0x1b3030u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
label_1b3034:
    // 0x1b3034: 0x24e70001
    ctx->pc = 0x1b3034u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_1b3038:
    // 0x1b3038: 0xf9882a
    ctx->pc = 0x1b3038u;
    SET_GPR_U32(ctx, 17, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 25)));
    // 0x1b303c: 0x1620fff3
    ctx->pc = 0x1B303Cu;
    {
        const bool branch_taken_0x1b303c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b303c) {
            ctx->pc = 0x1B300Cu;
            goto label_1b300c;
        }
    }
    ctx->pc = 0x1B3044u;
    // 0x1b3044: 0x15000009
    ctx->pc = 0x1B3044u;
    {
        const bool branch_taken_0x1b3044 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b3044) {
            ctx->pc = 0x1B306Cu;
            goto label_1b306c;
        }
    }
    ctx->pc = 0x1B304Cu;
    // 0x1b304c: 0x95880000
    ctx->pc = 0x1b304cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1b3050: 0x193880
    ctx->pc = 0x1b3050u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 25), 2));
    // 0x1b3054: 0x673821
    ctx->pc = 0x1b3054u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1b3058: 0x27390001
    ctx->pc = 0x1b3058u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 25), 1));
    // 0x1b305c: 0x84040
    ctx->pc = 0x1b305cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 1));
    // 0x1b3060: 0xc84021
    ctx->pc = 0x1b3060u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1b3064: 0x95080db0
    ctx->pc = 0x1b3064u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 3504)));
    // 0x1b3068: 0xace80100
    ctx->pc = 0x1b3068u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 256), GPR_U32(ctx, 8));
label_1b306c:
    // 0x1b306c: 0x25290001
    ctx->pc = 0x1b306cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1b3070: 0x27180060
    ctx->pc = 0x1b3070u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 96));
label_1b3074:
    // 0x1b3074: 0x12e382a
    ctx->pc = 0x1b3074u;
    SET_GPR_U32(ctx, 7, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 14)));
    // 0x1b3078: 0x14e0ff99
    ctx->pc = 0x1B3078u;
    {
        const bool branch_taken_0x1b3078 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b3078) {
            ctx->pc = 0x1B2EE0u;
            goto label_1b2ee0;
        }
    }
    ctx->pc = 0x1B3080u;
    // 0x1b3080: 0x31e3ffff
    ctx->pc = 0x1b3080u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 15), 65535));
    // 0x1b3084: 0x3c01004c
    ctx->pc = 0x1b3084u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x1b3088: 0x32040
    ctx->pc = 0x1b3088u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1b308c: 0xa42ba82c
    ctx->pc = 0x1b308cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294944812), (uint16_t)GPR_U32(ctx, 11));
    // 0x1b3090: 0x3c03004c
    ctx->pc = 0x1b3090u;
    SET_GPR_U32(ctx, 3, ((uint32_t)76 << 16));
    // 0x1b3094: 0x3c01004c
    ctx->pc = 0x1b3094u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x1b3098: 0x2463a720
    ctx->pc = 0x1b3098u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294944544));
    // 0x1b309c: 0x642021
    ctx->pc = 0x1b309cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b30a0: 0x9423a82e
    ctx->pc = 0x1b30a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294944814)));
    // 0x1b30a4: 0x948b0000
    ctx->pc = 0x1b30a4u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b30a8: 0x11630004
    ctx->pc = 0x1B30A8u;
    {
        const bool branch_taken_0x1b30a8 = (GPR_U32(ctx, 11) == GPR_U32(ctx, 3));
        ctx->pc = 0x1B30ACu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 31));
        if (branch_taken_0x1b30a8) {
            ctx->pc = 0x1B30BCu;
            goto label_1b30bc;
        }
    }
    ctx->pc = 0x1B30B0u;
    // 0x1b30b0: 0x24030001
    ctx->pc = 0x1b30b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b30b4: 0x3c01003b
    ctx->pc = 0x1b30b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)59 << 16));
    // 0x1b30b8: 0xa0235049
    ctx->pc = 0x1b30b8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20553), (uint8_t)GPR_U32(ctx, 3));
label_1b30bc:
    // 0x1b30bc: 0x3c05004c
    ctx->pc = 0x1b30bcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)76 << 16));
    // 0x1b30c0: 0x2403ffff
    ctx->pc = 0x1b30c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b30c4: 0x24a59680
    ctx->pc = 0x1b30c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294940288));
label_1b30c8:
    // 0x1b30c8: 0x62080
    ctx->pc = 0x1b30c8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1b30cc: 0xa43821
    ctx->pc = 0x1b30ccu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1b30d0: 0x24c6ffff
    ctx->pc = 0x1b30d0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b30d4: 0x8ce40080
    ctx->pc = 0x1b30d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x1b30d8: 0xace40280
    ctx->pc = 0x1b30d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 640), GPR_U32(ctx, 4));
    // 0x1b30dc: 0x8ce40180
    ctx->pc = 0x1b30dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 384)));
    // 0x1b30e0: 0xace40380
    ctx->pc = 0x1b30e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 896), GPR_U32(ctx, 4));
    // 0x1b30e4: 0xace30080
    ctx->pc = 0x1b30e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 128), GPR_U32(ctx, 3));
    // 0x1b30e8: 0x4c1fff7
    ctx->pc = 0x1B30E8u;
    {
        const bool branch_taken_0x1b30e8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1B30ECu;
        WRITE32(ADD32(GPR_U32(ctx, 7), 384), GPR_U32(ctx, 3));
        if (branch_taken_0x1b30e8) {
            ctx->pc = 0x1B30C8u;
            goto label_1b30c8;
        }
    }
    ctx->pc = 0x1B30F0u;
    // 0x1b30f0: 0x3c01004c
    ctx->pc = 0x1b30f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x1b30f4: 0x254c0ca0
    ctx->pc = 0x1b30f4u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 10), 3232));
    // 0x1b30f8: 0x942da822
    ctx->pc = 0x1b30f8u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294944802)));
    // 0x1b30fc: 0x3c070075
    ctx->pc = 0x1b30fcu;
    SET_GPR_U32(ctx, 7, ((uint32_t)117 << 16));
    // 0x1b3100: 0x3c03004c
    ctx->pc = 0x1b3100u;
    SET_GPR_U32(ctx, 3, ((uint32_t)76 << 16));
    // 0x1b3104: 0x3c04004c
    ctx->pc = 0x1b3104u;
    SET_GPR_U32(ctx, 4, ((uint32_t)76 << 16));
    // 0x1b3108: 0x3c060071
    ctx->pc = 0x1b3108u;
    SET_GPR_U32(ctx, 6, ((uint32_t)113 << 16));
    // 0x1b310c: 0x482d
    ctx->pc = 0x1b310cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3110: 0x402d
    ctx->pc = 0x1b3110u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3114: 0x24e7f250
    ctx->pc = 0x1b3114u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294963792));
    // 0x1b3118: 0x502d
    ctx->pc = 0x1b3118u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b311c: 0x24639680
    ctx->pc = 0x1b311cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294940288));
    // 0x1b3120: 0x24849a80
    ctx->pc = 0x1b3120u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941312));
    // 0x1b3124: 0x24050001
    ctx->pc = 0x1b3124u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3128: 0x10000066
    ctx->pc = 0x1B3128u;
    {
        const bool branch_taken_0x1b3128 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B312Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294941376));
        if (branch_taken_0x1b3128) {
            ctx->pc = 0x1B32C4u;
            goto label_1b32c4;
        }
    }
    ctx->pc = 0x1B3130u;
label_1b3130:
    // 0x1b3130: 0x90f10002
    ctx->pc = 0x1b3130u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1b3134: 0x11c142
    ctx->pc = 0x1b3134u;
    SET_GPR_U32(ctx, 24, SRL32(GPR_U32(ctx, 17), 5));
    // 0x1b3138: 0x3230001f
    ctx->pc = 0x1b3138u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 17), 31));
    // 0x1b313c: 0x18c880
    ctx->pc = 0x1b313cu;
    SET_GPR_U32(ctx, 25, SLL32(GPR_U32(ctx, 24), 2));
    // 0x1b3140: 0x205c004
    ctx->pc = 0x1b3140u;
    SET_GPR_U32(ctx, 24, SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 16) & 0x1F));
    // 0x1b3144: 0xd98021
    ctx->pc = 0x1b3144u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 25)));
    // 0x1b3148: 0x8e100000
    ctx->pc = 0x1b3148u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b314c: 0x3108024
    ctx->pc = 0x1b314cu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 24), GPR_U32(ctx, 16)));
    // 0x1b3150: 0x10802b
    ctx->pc = 0x1b3150u;
    SET_GPR_U32(ctx, 16, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x1b3154: 0x12000059
    ctx->pc = 0x1B3154u;
    {
        const bool branch_taken_0x1b3154 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b3154) {
            ctx->pc = 0x1B32BCu;
            goto label_1b32bc;
        }
    }
    ctx->pc = 0x1B315Cu;
    // 0x1b315c: 0x162d0057
    ctx->pc = 0x1B315Cu;
    {
        const bool branch_taken_0x1b315c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 13));
        if (branch_taken_0x1b315c) {
            ctx->pc = 0x1B32BCu;
            goto label_1b32bc;
        }
    }
    ctx->pc = 0x1B3164u;
    // 0x1b3164: 0x90f90022
    ctx->pc = 0x1b3164u;
    SET_GPR_U32(ctx, 25, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 34)));
    // 0x1b3168: 0x95900000
    ctx->pc = 0x1b3168u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1b316c: 0x19c040
    ctx->pc = 0x1b316cu;
    SET_GPR_U32(ctx, 24, SLL32(GPR_U32(ctx, 25), 1));
    // 0x1b3170: 0x98c021
    ctx->pc = 0x1b3170u;
    SET_GPR_U32(ctx, 24, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 24)));
    // 0x1b3174: 0x97180ca0
    ctx->pc = 0x1b3174u;
    SET_GPR_U32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 3232)));
    // 0x1b3178: 0x17100050
    ctx->pc = 0x1B3178u;
    {
        const bool branch_taken_0x1b3178 = (GPR_U32(ctx, 24) != GPR_U32(ctx, 16));
        if (branch_taken_0x1b3178) {
            ctx->pc = 0x1B32BCu;
            goto label_1b32bc;
        }
    }
    ctx->pc = 0x1B3180u;
    // 0x1b3180: 0x90f00026
    ctx->pc = 0x1b3180u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 38)));
    // 0x1b3184: 0x16000003
    ctx->pc = 0x1B3184u;
    {
        const bool branch_taken_0x1b3184 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b3184) {
            ctx->pc = 0x1B3194u;
            goto label_1b3194;
        }
    }
    ctx->pc = 0x1B318Cu;
    // 0x1b318c: 0x172f004b
    ctx->pc = 0x1B318Cu;
    {
        const bool branch_taken_0x1b318c = (GPR_U32(ctx, 25) != GPR_U32(ctx, 15));
        if (branch_taken_0x1b318c) {
            ctx->pc = 0x1B32BCu;
            goto label_1b32bc;
        }
    }
    ctx->pc = 0x1B3194u;
label_1b3194:
    // 0x1b3194: 0x90f00004
    ctx->pc = 0x1b3194u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1b3198: 0x10c142
    ctx->pc = 0x1b3198u;
    SET_GPR_U32(ctx, 24, SRL32(GPR_U32(ctx, 16), 5));
    // 0x1b319c: 0x3210001f
    ctx->pc = 0x1b319cu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), 31));
    // 0x1b31a0: 0x18c880
    ctx->pc = 0x1b31a0u;
    SET_GPR_U32(ctx, 25, SLL32(GPR_U32(ctx, 24), 2));
    // 0x1b31a4: 0x205c004
    ctx->pc = 0x1b31a4u;
    SET_GPR_U32(ctx, 24, SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 16) & 0x1F));
    // 0x1b31a8: 0x998021
    ctx->pc = 0x1b31a8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    // 0x1b31ac: 0x8e100fb0
    ctx->pc = 0x1b31acu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 4016)));
    // 0x1b31b0: 0x2188024
    ctx->pc = 0x1b31b0u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 24)));
    // 0x1b31b4: 0x12000041
    ctx->pc = 0x1B31B4u;
    {
        const bool branch_taken_0x1b31b4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b31b4) {
            ctx->pc = 0x1B32BCu;
            goto label_1b32bc;
        }
    }
    ctx->pc = 0x1B31BCu;
    // 0x1b31bc: 0x15200007
    ctx->pc = 0x1B31BCu;
    {
        const bool branch_taken_0x1b31bc = (GPR_U32(ctx, 9) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B31C0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b31bc) {
            ctx->pc = 0x1B31DCu;
            goto label_1b31dc;
        }
    }
    ctx->pc = 0x1B31C4u;
    // 0x1b31c4: 0x90f80003
    ctx->pc = 0x1b31c4u;
    SET_GPR_U32(ctx, 24, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x1b31c8: 0x98080
    ctx->pc = 0x1b31c8u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 9), 2));
    // 0x1b31cc: 0x708021
    ctx->pc = 0x1b31ccu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1b31d0: 0x25290001
    ctx->pc = 0x1b31d0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1b31d4: 0x10000014
    ctx->pc = 0x1B31D4u;
    {
        const bool branch_taken_0x1b31d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B31D8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 24));
        if (branch_taken_0x1b31d4) {
            ctx->pc = 0x1B3228u;
            goto label_1b3228;
        }
    }
    ctx->pc = 0x1B31DCu;
label_1b31dc:
    // 0x1b31dc: 0x10000008
    ctx->pc = 0x1B31DCu;
    {
        const bool branch_taken_0x1b31dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B31E0u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b31dc) {
            ctx->pc = 0x1B3200u;
            goto label_1b3200;
        }
    }
    ctx->pc = 0x1B31E4u;
label_1b31e4:
    // 0x1b31e4: 0x90f00003
    ctx->pc = 0x1b31e4u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x1b31e8: 0x78c021
    ctx->pc = 0x1b31e8u;
    SET_GPR_U32(ctx, 24, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x1b31ec: 0x8f180080
    ctx->pc = 0x1b31ecu;
    SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 24), 128)));
    // 0x1b31f0: 0x17100002
    ctx->pc = 0x1B31F0u;
    {
        const bool branch_taken_0x1b31f0 = (GPR_U32(ctx, 24) != GPR_U32(ctx, 16));
        if (branch_taken_0x1b31f0) {
            ctx->pc = 0x1B31FCu;
            goto label_1b31fc;
        }
    }
    ctx->pc = 0x1B31F8u;
    // 0x1b31f8: 0x24120001
    ctx->pc = 0x1b31f8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
label_1b31fc:
    // 0x1b31fc: 0x26310001
    ctx->pc = 0x1b31fcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1b3200:
    // 0x1b3200: 0x229802a
    ctx->pc = 0x1b3200u;
    SET_GPR_U32(ctx, 16, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 9)));
    // 0x1b3204: 0x1600fff7
    ctx->pc = 0x1B3204u;
    {
        const bool branch_taken_0x1b3204 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B3208u;
        SET_GPR_U32(ctx, 24, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x1b3204) {
            ctx->pc = 0x1B31E4u;
            goto label_1b31e4;
        }
    }
    ctx->pc = 0x1B320Cu;
    // 0x1b320c: 0x16400006
    ctx->pc = 0x1B320Cu;
    {
        const bool branch_taken_0x1b320c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b320c) {
            ctx->pc = 0x1B3228u;
            goto label_1b3228;
        }
    }
    ctx->pc = 0x1B3214u;
    // 0x1b3214: 0x90f80003
    ctx->pc = 0x1b3214u;
    SET_GPR_U32(ctx, 24, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x1b3218: 0x98080
    ctx->pc = 0x1b3218u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 9), 2));
    // 0x1b321c: 0x708021
    ctx->pc = 0x1b321cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1b3220: 0x25290001
    ctx->pc = 0x1b3220u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1b3224: 0xae180080
    ctx->pc = 0x1b3224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 24));
label_1b3228:
    // 0x1b3228: 0x1500000a
    ctx->pc = 0x1B3228u;
    {
        const bool branch_taken_0x1b3228 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B322Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b3228) {
            ctx->pc = 0x1B3254u;
            goto label_1b3254;
        }
    }
    ctx->pc = 0x1B3230u;
    // 0x1b3230: 0x95980000
    ctx->pc = 0x1b3230u;
    SET_GPR_U32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1b3234: 0x88080
    ctx->pc = 0x1b3234u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 8), 2));
    // 0x1b3238: 0x708021
    ctx->pc = 0x1b3238u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1b323c: 0x25080001
    ctx->pc = 0x1b323cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x1b3240: 0x18c040
    ctx->pc = 0x1b3240u;
    SET_GPR_U32(ctx, 24, SLL32(GPR_U32(ctx, 24), 1));
    // 0x1b3244: 0x98c021
    ctx->pc = 0x1b3244u;
    SET_GPR_U32(ctx, 24, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 24)));
    // 0x1b3248: 0x97180eb0
    ctx->pc = 0x1b3248u;
    SET_GPR_U32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 3760)));
    // 0x1b324c: 0x1000001b
    ctx->pc = 0x1B324Cu;
    {
        const bool branch_taken_0x1b324c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B3250u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 24));
        if (branch_taken_0x1b324c) {
            ctx->pc = 0x1B32BCu;
            goto label_1b32bc;
        }
    }
    ctx->pc = 0x1B3254u;
label_1b3254:
    // 0x1b3254: 0x1000000c
    ctx->pc = 0x1B3254u;
    {
        const bool branch_taken_0x1b3254 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B3258u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b3254) {
            ctx->pc = 0x1B3288u;
            goto label_1b3288;
        }
    }
    ctx->pc = 0x1B325Cu;
label_1b325c:
    // 0x1b325c: 0x95900000
    ctx->pc = 0x1b325cu;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1b3260: 0x11c080
    ctx->pc = 0x1b3260u;
    SET_GPR_U32(ctx, 24, SLL32(GPR_U32(ctx, 17), 2));
    // 0x1b3264: 0x78c021
    ctx->pc = 0x1b3264u;
    SET_GPR_U32(ctx, 24, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x1b3268: 0x8f180180
    ctx->pc = 0x1b3268u;
    SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 24), 384)));
    // 0x1b326c: 0x108040
    ctx->pc = 0x1b326cu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 1));
    // 0x1b3270: 0x908021
    ctx->pc = 0x1b3270u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1b3274: 0x96100eb0
    ctx->pc = 0x1b3274u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 3760)));
    // 0x1b3278: 0x17100002
    ctx->pc = 0x1B3278u;
    {
        const bool branch_taken_0x1b3278 = (GPR_U32(ctx, 24) != GPR_U32(ctx, 16));
        if (branch_taken_0x1b3278) {
            ctx->pc = 0x1B3284u;
            goto label_1b3284;
        }
    }
    ctx->pc = 0x1B3280u;
    // 0x1b3280: 0x24120001
    ctx->pc = 0x1b3280u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
label_1b3284:
    // 0x1b3284: 0x26310001
    ctx->pc = 0x1b3284u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1b3288:
    // 0x1b3288: 0x228802a
    ctx->pc = 0x1b3288u;
    SET_GPR_U32(ctx, 16, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 8)));
    // 0x1b328c: 0x1600fff3
    ctx->pc = 0x1B328Cu;
    {
        const bool branch_taken_0x1b328c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b328c) {
            ctx->pc = 0x1B325Cu;
            goto label_1b325c;
        }
    }
    ctx->pc = 0x1B3294u;
    // 0x1b3294: 0x16400009
    ctx->pc = 0x1B3294u;
    {
        const bool branch_taken_0x1b3294 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b3294) {
            ctx->pc = 0x1B32BCu;
            goto label_1b32bc;
        }
    }
    ctx->pc = 0x1B329Cu;
    // 0x1b329c: 0x95980000
    ctx->pc = 0x1b329cu;
    SET_GPR_U32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1b32a0: 0x88080
    ctx->pc = 0x1b32a0u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 8), 2));
    // 0x1b32a4: 0x708021
    ctx->pc = 0x1b32a4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1b32a8: 0x25080001
    ctx->pc = 0x1b32a8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x1b32ac: 0x18c040
    ctx->pc = 0x1b32acu;
    SET_GPR_U32(ctx, 24, SLL32(GPR_U32(ctx, 24), 1));
    // 0x1b32b0: 0x98c021
    ctx->pc = 0x1b32b0u;
    SET_GPR_U32(ctx, 24, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 24)));
    // 0x1b32b4: 0x97180eb0
    ctx->pc = 0x1b32b4u;
    SET_GPR_U32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 3760)));
    // 0x1b32b8: 0xae180180
    ctx->pc = 0x1b32b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 24));
label_1b32bc:
    // 0x1b32bc: 0x254a0001
    ctx->pc = 0x1b32bcu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x1b32c0: 0x24e70060
    ctx->pc = 0x1b32c0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 96));
label_1b32c4:
    // 0x1b32c4: 0x14e802a
    ctx->pc = 0x1b32c4u;
    SET_GPR_U32(ctx, 16, SLT32(GPR_S32(ctx, 10), GPR_S32(ctx, 14)));
    // 0x1b32c8: 0x1600ff99
    ctx->pc = 0x1B32C8u;
    {
        const bool branch_taken_0x1b32c8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B32CCu;
        SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
        if (branch_taken_0x1b32c8) {
            ctx->pc = 0x1B3130u;
            goto label_1b3130;
        }
    }
    ctx->pc = 0x1B32D0u;
    // 0x1b32d0: 0xa42ba82e
    ctx->pc = 0x1b32d0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294944814), (uint16_t)GPR_U32(ctx, 11));
    // 0x1b32d4: 0x7bb20020
    ctx->pc = 0x1b32d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b32d8: 0x7bb10010
    ctx->pc = 0x1b32d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b32dc: 0x7bb00000
    ctx->pc = 0x1b32dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b32e0: 0x3e00008
    ctx->pc = 0x1B32E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B32E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B2D44u: goto label_1b2d44;
            case 0x1B2D70u: goto label_1b2d70;
            case 0x1B2E58u: goto label_1b2e58;
            case 0x1B2E64u: goto label_1b2e64;
            case 0x1B2EE0u: goto label_1b2ee0;
            case 0x1B2F44u: goto label_1b2f44;
            case 0x1B2F8Cu: goto label_1b2f8c;
            case 0x1B2F94u: goto label_1b2f94;
            case 0x1B2FACu: goto label_1b2fac;
            case 0x1B2FB0u: goto label_1b2fb0;
            case 0x1B2FD8u: goto label_1b2fd8;
            case 0x1B3004u: goto label_1b3004;
            case 0x1B300Cu: goto label_1b300c;
            case 0x1B3034u: goto label_1b3034;
            case 0x1B3038u: goto label_1b3038;
            case 0x1B306Cu: goto label_1b306c;
            case 0x1B3074u: goto label_1b3074;
            case 0x1B30BCu: goto label_1b30bc;
            case 0x1B30C8u: goto label_1b30c8;
            case 0x1B3130u: goto label_1b3130;
            case 0x1B3194u: goto label_1b3194;
            case 0x1B31DCu: goto label_1b31dc;
            case 0x1B31E4u: goto label_1b31e4;
            case 0x1B31FCu: goto label_1b31fc;
            case 0x1B3200u: goto label_1b3200;
            case 0x1B3228u: goto label_1b3228;
            case 0x1B3254u: goto label_1b3254;
            case 0x1B325Cu: goto label_1b325c;
            case 0x1B3284u: goto label_1b3284;
            case 0x1B3288u: goto label_1b3288;
            case 0x1B32BCu: goto label_1b32bc;
            case 0x1B32C4u: goto label_1b32c4;
            case 0x1B3340u: goto label_1b3340;
            case 0x1B338Cu: goto label_1b338c;
            case 0x1B3390u: goto label_1b3390;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B32E8u;
    // 0x1b32e8: 0x0
    ctx->pc = 0x1b32e8u;
    // NOP
    // 0x1b32ec: 0x0
    ctx->pc = 0x1b32ecu;
    // NOP
    // 0x1b32f0: 0x3c01004c
    ctx->pc = 0x1b32f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x1b32f4: 0x90860002
    ctx->pc = 0x1b32f4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1b32f8: 0x9422a820
    ctx->pc = 0x1b32f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294944800)));
    // 0x1b32fc: 0x14c20010
    ctx->pc = 0x1B32FCu;
    {
        const bool branch_taken_0x1b32fc = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        if (branch_taken_0x1b32fc) {
            ctx->pc = 0x1B3340u;
            goto label_1b3340;
        }
    }
    ctx->pc = 0x1B3304u;
    // 0x1b3304: 0x3c010032
    ctx->pc = 0x1b3304u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b3308: 0x90820022
    ctx->pc = 0x1b3308u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x1b330c: 0x942343dc
    ctx->pc = 0x1b330cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17372)));
    // 0x1b3310: 0x3c05004c
    ctx->pc = 0x1b3310u;
    SET_GPR_U32(ctx, 5, ((uint32_t)76 << 16));
    // 0x1b3314: 0x24a5a620
    ctx->pc = 0x1b3314u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294944288));
    // 0x1b3318: 0x21040
    ctx->pc = 0x1b3318u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1b331c: 0x31840
    ctx->pc = 0x1b331cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1b3320: 0xa21021
    ctx->pc = 0x1b3320u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b3324: 0xa31821
    ctx->pc = 0x1b3324u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1b3328: 0x94420000
    ctx->pc = 0x1b3328u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b332c: 0x94630000
    ctx->pc = 0x1b332cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b3330: 0x14620003
    ctx->pc = 0x1B3330u;
    {
        const bool branch_taken_0x1b3330 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1b3330) {
            ctx->pc = 0x1B3340u;
            goto label_1b3340;
        }
    }
    ctx->pc = 0x1B3338u;
    // 0x1b3338: 0x10000015
    ctx->pc = 0x1B3338u;
    {
        const bool branch_taken_0x1b3338 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B333Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1b3338) {
            ctx->pc = 0x1B3390u;
            goto label_1b3390;
        }
    }
    ctx->pc = 0x1B3340u;
label_1b3340:
    // 0x1b3340: 0x3c01004c
    ctx->pc = 0x1b3340u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x1b3344: 0x9422a822
    ctx->pc = 0x1b3344u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294944802)));
    // 0x1b3348: 0x14c20011
    ctx->pc = 0x1B3348u;
    {
        const bool branch_taken_0x1b3348 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        ctx->pc = 0x1B334Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b3348) {
            ctx->pc = 0x1B3390u;
            goto label_1b3390;
        }
    }
    ctx->pc = 0x1B3350u;
    // 0x1b3350: 0x90820022
    ctx->pc = 0x1b3350u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x1b3354: 0x3c010032
    ctx->pc = 0x1b3354u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b3358: 0x3c03004c
    ctx->pc = 0x1b3358u;
    SET_GPR_U32(ctx, 3, ((uint32_t)76 << 16));
    // 0x1b335c: 0x2463a720
    ctx->pc = 0x1b335cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294944544));
    // 0x1b3360: 0x942443dc
    ctx->pc = 0x1b3360u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17372)));
    // 0x1b3364: 0x21040
    ctx->pc = 0x1b3364u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1b3368: 0x621021
    ctx->pc = 0x1b3368u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b336c: 0x94420000
    ctx->pc = 0x1b336cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3370: 0x42040
    ctx->pc = 0x1b3370u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1b3374: 0x641821
    ctx->pc = 0x1b3374u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b3378: 0x94630000
    ctx->pc = 0x1b3378u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b337c: 0x14620003
    ctx->pc = 0x1B337Cu;
    {
        const bool branch_taken_0x1b337c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1B3380u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1b337c) {
            ctx->pc = 0x1B338Cu;
            goto label_1b338c;
        }
    }
    ctx->pc = 0x1B3384u;
    // 0x1b3384: 0x10000002
    ctx->pc = 0x1B3384u;
    {
        const bool branch_taken_0x1b3384 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b3384) {
            ctx->pc = 0x1B3390u;
            goto label_1b3390;
        }
    }
    ctx->pc = 0x1B338Cu;
label_1b338c:
    // 0x1b338c: 0x102d
    ctx->pc = 0x1b338cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b3390:
    // 0x1b3390: 0x3e00008
    ctx->pc = 0x1B3390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B2D44u: goto label_1b2d44;
            case 0x1B2D70u: goto label_1b2d70;
            case 0x1B2E58u: goto label_1b2e58;
            case 0x1B2E64u: goto label_1b2e64;
            case 0x1B2EE0u: goto label_1b2ee0;
            case 0x1B2F44u: goto label_1b2f44;
            case 0x1B2F8Cu: goto label_1b2f8c;
            case 0x1B2F94u: goto label_1b2f94;
            case 0x1B2FACu: goto label_1b2fac;
            case 0x1B2FB0u: goto label_1b2fb0;
            case 0x1B2FD8u: goto label_1b2fd8;
            case 0x1B3004u: goto label_1b3004;
            case 0x1B300Cu: goto label_1b300c;
            case 0x1B3034u: goto label_1b3034;
            case 0x1B3038u: goto label_1b3038;
            case 0x1B306Cu: goto label_1b306c;
            case 0x1B3074u: goto label_1b3074;
            case 0x1B30BCu: goto label_1b30bc;
            case 0x1B30C8u: goto label_1b30c8;
            case 0x1B3130u: goto label_1b3130;
            case 0x1B3194u: goto label_1b3194;
            case 0x1B31DCu: goto label_1b31dc;
            case 0x1B31E4u: goto label_1b31e4;
            case 0x1B31FCu: goto label_1b31fc;
            case 0x1B3200u: goto label_1b3200;
            case 0x1B3228u: goto label_1b3228;
            case 0x1B3254u: goto label_1b3254;
            case 0x1B325Cu: goto label_1b325c;
            case 0x1B3284u: goto label_1b3284;
            case 0x1B3288u: goto label_1b3288;
            case 0x1B32BCu: goto label_1b32bc;
            case 0x1B32C4u: goto label_1b32c4;
            case 0x1B3340u: goto label_1b3340;
            case 0x1B338Cu: goto label_1b338c;
            case 0x1B3390u: goto label_1b3390;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B3398u;
    // 0x1b3398: 0x0
    ctx->pc = 0x1b3398u;
    // NOP
    // 0x1b339c: 0x0
    ctx->pc = 0x1b339cu;
    // NOP
    // 0x1b33a0: 0x806315c
    ctx->pc = 0x1B33A0u;
    ctx->pc = 0x18C570u;
    entry_18c570_0x18c5f0(rdram, ctx, runtime); return;
    ctx->pc = 0x1B33A8u;
    // 0x1b33a8: 0x0
    ctx->pc = 0x1b33a8u;
    // NOP
    // 0x1b33ac: 0x0
    ctx->pc = 0x1b33acu;
    // NOP
}
