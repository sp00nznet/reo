#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0037A160
// Address: 0x37a160 - 0x37a490
void sub_0037A160_0x37a160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x37a160u;

label_37a160:
    // 0x37a160: 0x27bdfff0
    ctx->pc = 0x37a160u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37a164: 0x3c040057
    ctx->pc = 0x37a164u;
    SET_GPR_U32(ctx, 4, ((uint32_t)87 << 16));
    // 0x37a168: 0x3c050039
    ctx->pc = 0x37a168u;
    SET_GPR_U32(ctx, 5, ((uint32_t)57 << 16));
    // 0x37a16c: 0xffbf0000
    ctx->pc = 0x37a16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37a170: 0x2484baf0
    ctx->pc = 0x37a170u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949616));
    // 0x37a174: 0xc042bf0
    ctx->pc = 0x37A174u;
    SET_GPR_U32(ctx, 31, 0x37A17Cu);
    ctx->pc = 0x37A178u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294953648));
    ctx->pc = 0x10AFC0u;
    {
        auto targetFn = runtime->lookupFunction(0x10AFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A17Cu; }
        if (ctx->pc != 0x37A17Cu) { return; }
    }
    ctx->pc = 0x37A17Cu;
    // 0x37a17c: 0x3c040057
    ctx->pc = 0x37a17cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)87 << 16));
    // 0x37a180: 0xc06acbc
    ctx->pc = 0x37A180u;
    SET_GPR_U32(ctx, 31, 0x37A188u);
    ctx->pc = 0x37A184u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949616));
    ctx->pc = 0x1AB2F0u;
    {
        auto targetFn = runtime->lookupFunction(0x1AB2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A188u; }
        if (ctx->pc != 0x37A188u) { return; }
    }
    ctx->pc = 0x37A188u;
    // 0x37a188: 0x40302d
    ctx->pc = 0x37a188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a18c: 0x3c010034
    ctx->pc = 0x37a18cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x37a190: 0x8c220a20
    ctx->pc = 0x37a190u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2592)));
    // 0x37a194: 0x8c440000
    ctx->pc = 0x37a194u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37a198: 0xc058a02
    ctx->pc = 0x37A198u;
    SET_GPR_U32(ctx, 31, 0x37A1A0u);
    ctx->pc = 0x37A19Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x162808u;
    {
        auto targetFn = runtime->lookupFunction(0x162808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A1A0u; }
        if (ctx->pc != 0x37A1A0u) { return; }
    }
    ctx->pc = 0x37A1A0u;
    // 0x37a1a0: 0xdfbf0000
    ctx->pc = 0x37a1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37a1a4: 0x24020001
    ctx->pc = 0x37a1a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a1a8: 0x3e00008
    ctx->pc = 0x37A1A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A1ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37A160u: goto label_37a160;
            case 0x37A208u: goto label_37a208;
            case 0x37A24Cu: goto label_37a24c;
            case 0x37A274u: goto label_37a274;
            case 0x37A2A0u: goto label_37a2a0;
            case 0x37A2B0u: goto label_37a2b0;
            case 0x37A300u: goto label_37a300;
            case 0x37A304u: goto label_37a304;
            case 0x37A308u: goto label_37a308;
            case 0x37A334u: goto label_37a334;
            case 0x37A37Cu: goto label_37a37c;
            case 0x37A380u: goto label_37a380;
            case 0x37A3F4u: goto label_37a3f4;
            case 0x37A418u: goto label_37a418;
            case 0x37A424u: goto label_37a424;
            case 0x37A43Cu: goto label_37a43c;
            case 0x37A484u: goto label_37a484;
            case 0x37A488u: goto label_37a488;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37A1B0u;
    // 0x37a1b0: 0x27bdffd0
    ctx->pc = 0x37a1b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37a1b4: 0x2404000e
    ctx->pc = 0x37a1b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
    // 0x37a1b8: 0xffbf0020
    ctx->pc = 0x37a1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x37a1bc: 0x7fb10010
    ctx->pc = 0x37a1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37a1c0: 0xc06e0a8
    ctx->pc = 0x37A1C0u;
    SET_GPR_U32(ctx, 31, 0x37A1C8u);
    ctx->pc = 0x37A1C4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1B82A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1B82A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A1C8u; }
        if (ctx->pc != 0x37A1C8u) { return; }
    }
    ctx->pc = 0x37A1C8u;
    // 0x37a1c8: 0x1440006c
    ctx->pc = 0x37A1C8u;
    {
        const bool branch_taken_0x37a1c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37A1CCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x37a1c8) {
            ctx->pc = 0x37A37Cu;
            goto label_37a37c;
        }
    }
    ctx->pc = 0x37A1D0u;
    // 0x37a1d0: 0xc0dee40
    ctx->pc = 0x37A1D0u;
    SET_GPR_U32(ctx, 31, 0x37A1D8u);
    ctx->pc = 0x37B900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0037B900_0x37b900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A1D8u; }
    }
    if (ctx->pc != 0x37A1D8u) { return; }
    ctx->pc = 0x37A1D8u;
    // 0x37a1d8: 0x3c010032
    ctx->pc = 0x37a1d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x37a1dc: 0x902343c0
    ctx->pc = 0x37a1dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17344)));
    // 0x37a1e0: 0x10600009
    ctx->pc = 0x37A1E0u;
    {
        const bool branch_taken_0x37a1e0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x37A1E4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37a1e0) {
            ctx->pc = 0x37A208u;
            goto label_37a208;
        }
    }
    ctx->pc = 0x37A1E8u;
    // 0x37a1e8: 0x3c010032
    ctx->pc = 0x37a1e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x37a1ec: 0x24030002
    ctx->pc = 0x37a1ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x37a1f0: 0x902443fc
    ctx->pc = 0x37a1f0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17404)));
    // 0x37a1f4: 0x14830004
    ctx->pc = 0x37A1F4u;
    {
        const bool branch_taken_0x37a1f4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x37a1f4) {
            ctx->pc = 0x37A208u;
            goto label_37a208;
        }
    }
    ctx->pc = 0x37A1FCu;
    // 0x37a1fc: 0x24100001
    ctx->pc = 0x37a1fcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a200: 0x3c010032
    ctx->pc = 0x37a200u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x37a204: 0xa03043fc
    ctx->pc = 0x37a204u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17404), (uint8_t)GPR_U32(ctx, 16));
label_37a208:
    // 0x37a208: 0x3c030034
    ctx->pc = 0x37a208u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x37a20c: 0x3c010034
    ctx->pc = 0x37a20cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x37a210: 0x24630a40
    ctx->pc = 0x37a210u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2624));
    // 0x37a214: 0xac230a20
    ctx->pc = 0x37a214u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2592), GPR_U32(ctx, 3));
    // 0x37a218: 0x3c010034
    ctx->pc = 0x37a218u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x37a21c: 0x8c240a20
    ctx->pc = 0x37a21cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 2592)));
    // 0x37a220: 0x8c830000
    ctx->pc = 0x37a220u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37a224: 0x14600009
    ctx->pc = 0x37A224u;
    {
        const bool branch_taken_0x37a224 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x37a224) {
            ctx->pc = 0x37A24Cu;
            goto label_37a24c;
        }
    }
    ctx->pc = 0x37A22Cu;
    // 0x37a22c: 0x24040200
    ctx->pc = 0x37a22cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 512));
    // 0x37a230: 0xc0de7b4
    ctx->pc = 0x37A230u;
    SET_GPR_U32(ctx, 31, 0x37A238u);
    ctx->pc = 0x37A234u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 320));
    ctx->pc = 0x379ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00379ED0_0x379ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A238u; }
    }
    if (ctx->pc != 0x37A238u) { return; }
    ctx->pc = 0x37A238u;
    // 0x37a238: 0x3c010034
    ctx->pc = 0x37a238u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x37a23c: 0x8c240a20
    ctx->pc = 0x37a23cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 2592)));
    // 0x37a240: 0x8c830000
    ctx->pc = 0x37a240u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37a244: 0x1060004d
    ctx->pc = 0x37A244u;
    {
        const bool branch_taken_0x37a244 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x37a244) {
            ctx->pc = 0x37A37Cu;
            goto label_37a37c;
        }
    }
    ctx->pc = 0x37A24Cu;
label_37a24c:
    // 0x37a24c: 0x1600004b
    ctx->pc = 0x37A24Cu;
    {
        const bool branch_taken_0x37a24c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x37a24c) {
            ctx->pc = 0x37A37Cu;
            goto label_37a37c;
        }
    }
    ctx->pc = 0x37A254u;
    // 0x37a254: 0x24020001
    ctx->pc = 0x37a254u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a258: 0x3c010032
    ctx->pc = 0x37a258u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x37a25c: 0xa0820091
    ctx->pc = 0x37a25cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 145), (uint8_t)GPR_U32(ctx, 2));
    // 0x37a260: 0x902243c0
    ctx->pc = 0x37a260u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17344)));
    // 0x37a264: 0x10400033
    ctx->pc = 0x37A264u;
    {
        const bool branch_taken_0x37a264 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x37A268u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37a264) {
            ctx->pc = 0x37A334u;
            goto label_37a334;
        }
    }
    ctx->pc = 0x37A26Cu;
    // 0x37a26c: 0x10000026
    ctx->pc = 0x37A26Cu;
    {
        const bool branch_taken_0x37a26c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37A270u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37a26c) {
            ctx->pc = 0x37A308u;
            goto label_37a308;
        }
    }
    ctx->pc = 0x37A274u;
label_37a274:
    // 0x37a274: 0x3c03004c
    ctx->pc = 0x37a274u;
    SET_GPR_U32(ctx, 3, ((uint32_t)76 << 16));
    // 0x37a278: 0x512021
    ctx->pc = 0x37a278u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x37a27c: 0x2463add0
    ctx->pc = 0x37a27cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294946256));
    // 0x37a280: 0x642821
    ctx->pc = 0x37a280u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37a284: 0x24020063
    ctx->pc = 0x37a284u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 99));
    // 0x37a288: 0x90a60066
    ctx->pc = 0x37a288u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 102)));
    // 0x37a28c: 0x90a30068
    ctx->pc = 0x37a28cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x37a290: 0x14c20007
    ctx->pc = 0x37A290u;
    {
        const bool branch_taken_0x37a290 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        ctx->pc = 0x37A294u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 103)));
        if (branch_taken_0x37a290) {
            ctx->pc = 0x37A2B0u;
            goto label_37a2b0;
        }
    }
    ctx->pc = 0x37A298u;
    // 0x37a298: 0xc0de858
    ctx->pc = 0x37A298u;
    SET_GPR_U32(ctx, 31, 0x37A2A0u);
    ctx->pc = 0x37A160u;
    goto label_37a160;
    ctx->pc = 0x37A2A0u;
label_37a2a0:
    // 0x37a2a0: 0x14400017
    ctx->pc = 0x37A2A0u;
    {
        const bool branch_taken_0x37a2a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x37a2a0) {
            ctx->pc = 0x37A300u;
            goto label_37a300;
        }
    }
    ctx->pc = 0x37A2A8u;
    // 0x37a2a8: 0x10000017
    ctx->pc = 0x37A2A8u;
    {
        const bool branch_taken_0x37a2a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37A2ACu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x37a2a8) {
            ctx->pc = 0x37A308u;
            goto label_37a308;
        }
    }
    ctx->pc = 0x37A2B0u;
label_37a2b0:
    // 0x37a2b0: 0x308700ff
    ctx->pc = 0x37a2b0u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 4), 255));
    // 0x37a2b4: 0x3c050039
    ctx->pc = 0x37a2b4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)57 << 16));
    // 0x37a2b8: 0x3c040057
    ctx->pc = 0x37a2b8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)87 << 16));
    // 0x37a2bc: 0x306800ff
    ctx->pc = 0x37a2bcu;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 3), 255));
    // 0x37a2c0: 0x2484baf0
    ctx->pc = 0x37a2c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949616));
    // 0x37a2c4: 0xc042a0c
    ctx->pc = 0x37A2C4u;
    SET_GPR_U32(ctx, 31, 0x37A2CCu);
    ctx->pc = 0x37A2C8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294953664));
    ctx->pc = 0x10A830u;
    {
        auto targetFn = runtime->lookupFunction(0x10A830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A2CCu; }
        if (ctx->pc != 0x37A2CCu) { return; }
    }
    ctx->pc = 0x37A2CCu;
    // 0x37a2cc: 0x3c040057
    ctx->pc = 0x37a2ccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)87 << 16));
    // 0x37a2d0: 0xc0dc638
    ctx->pc = 0x37A2D0u;
    SET_GPR_U32(ctx, 31, 0x37A2D8u);
    ctx->pc = 0x37A2D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949616));
    ctx->pc = 0x3718E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_003718E0_0x3718e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A2D8u; }
    }
    if (ctx->pc != 0x37A2D8u) { return; }
    ctx->pc = 0x37A2D8u;
    // 0x37a2d8: 0x2403ffff
    ctx->pc = 0x37a2d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x37a2dc: 0x10430009
    ctx->pc = 0x37A2DCu;
    {
        const bool branch_taken_0x37a2dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x37A2E0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)57 << 16));
        if (branch_taken_0x37a2dc) {
            ctx->pc = 0x37A304u;
            goto label_37a304;
        }
    }
    ctx->pc = 0x37A2E4u;
    // 0x37a2e4: 0x40302d
    ctx->pc = 0x37a2e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a2e8: 0xac229850
    ctx->pc = 0x37a2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294940752), GPR_U32(ctx, 2));
    // 0x37a2ec: 0x3c010034
    ctx->pc = 0x37a2ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x37a2f0: 0x8c220a20
    ctx->pc = 0x37a2f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2592)));
    // 0x37a2f4: 0x8c440000
    ctx->pc = 0x37a2f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37a2f8: 0xc058a02
    ctx->pc = 0x37A2F8u;
    SET_GPR_U32(ctx, 31, 0x37A300u);
    ctx->pc = 0x37A2FCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x162808u;
    {
        auto targetFn = runtime->lookupFunction(0x162808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A300u; }
        if (ctx->pc != 0x37A300u) { return; }
    }
    ctx->pc = 0x37A300u;
label_37a300:
    // 0x37a300: 0x26100001
    ctx->pc = 0x37a300u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_37a304:
    // 0x37a304: 0x26310001
    ctx->pc = 0x37a304u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_37a308:
    // 0x37a308: 0x3c01004c
    ctx->pc = 0x37a308u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x37a30c: 0x9022ae0b
    ctx->pc = 0x37a30cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946315)));
    // 0x37a310: 0x222102a
    ctx->pc = 0x37a310u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x37a314: 0x1440ffd7
    ctx->pc = 0x37A314u;
    {
        const bool branch_taken_0x37a314 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37A318u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x37a314) {
            ctx->pc = 0x37A274u;
            goto label_37a274;
        }
    }
    ctx->pc = 0x37A31Cu;
    // 0x37a31c: 0x16000005
    ctx->pc = 0x37A31Cu;
    {
        const bool branch_taken_0x37a31c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x37a31c) {
            ctx->pc = 0x37A334u;
            goto label_37a334;
        }
    }
    ctx->pc = 0x37A324u;
    // 0x37a324: 0xc0de938
    ctx->pc = 0x37A324u;
    SET_GPR_U32(ctx, 31, 0x37A32Cu);
    ctx->pc = 0x37A4E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0037A4E0_0x37a4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A32Cu; }
    }
    if (ctx->pc != 0x37A32Cu) { return; }
    ctx->pc = 0x37A32Cu;
    // 0x37a32c: 0x10000014
    ctx->pc = 0x37A32Cu;
    {
        const bool branch_taken_0x37a32c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37A330u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x37a32c) {
            ctx->pc = 0x37A380u;
            goto label_37a380;
        }
    }
    ctx->pc = 0x37A334u;
label_37a334:
    // 0x37a334: 0x3c010034
    ctx->pc = 0x37a334u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x37a338: 0x8c220a20
    ctx->pc = 0x37a338u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2592)));
    // 0x37a33c: 0x8c440000
    ctx->pc = 0x37a33cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37a340: 0xc058998
    ctx->pc = 0x37A340u;
    SET_GPR_U32(ctx, 31, 0x37A348u);
    ctx->pc = 0x37A344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x162660u;
    {
        auto targetFn = runtime->lookupFunction(0x162660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A348u; }
        if (ctx->pc != 0x37A348u) { return; }
    }
    ctx->pc = 0x37A348u;
    // 0x37a348: 0x3c010034
    ctx->pc = 0x37a348u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x37a34c: 0x8c220a20
    ctx->pc = 0x37a34cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2592)));
    // 0x37a350: 0xc058974
    ctx->pc = 0x37A350u;
    SET_GPR_U32(ctx, 31, 0x37A358u);
    ctx->pc = 0x37A354u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1625D0u;
    {
        auto targetFn = runtime->lookupFunction(0x1625D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A358u; }
        if (ctx->pc != 0x37A358u) { return; }
    }
    ctx->pc = 0x37A358u;
    // 0x37a358: 0x3c010034
    ctx->pc = 0x37a358u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x37a35c: 0x8c220a20
    ctx->pc = 0x37a35cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2592)));
    // 0x37a360: 0xc0589ea
    ctx->pc = 0x37A360u;
    SET_GPR_U32(ctx, 31, 0x37A368u);
    ctx->pc = 0x37A364u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1627A8u;
    {
        auto targetFn = runtime->lookupFunction(0x1627A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A368u; }
        if (ctx->pc != 0x37A368u) { return; }
    }
    ctx->pc = 0x37A368u;
    // 0x37a368: 0x3c010034
    ctx->pc = 0x37a368u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x37a36c: 0x202d
    ctx->pc = 0x37a36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a370: 0x8c220a20
    ctx->pc = 0x37a370u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2592)));
    // 0x37a374: 0xc06bda8
    ctx->pc = 0x37A374u;
    SET_GPR_U32(ctx, 31, 0x37A37Cu);
    ctx->pc = 0x37A378u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 145), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1AF6A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A37Cu; }
        if (ctx->pc != 0x37A37Cu) { return; }
    }
    ctx->pc = 0x37A37Cu;
label_37a37c:
    // 0x37a37c: 0xdfbf0020
    ctx->pc = 0x37a37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_37a380:
    // 0x37a380: 0x7bb10010
    ctx->pc = 0x37a380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37a384: 0x7bb00000
    ctx->pc = 0x37a384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37a388: 0x3e00008
    ctx->pc = 0x37A388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A38Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37A160u: goto label_37a160;
            case 0x37A208u: goto label_37a208;
            case 0x37A24Cu: goto label_37a24c;
            case 0x37A274u: goto label_37a274;
            case 0x37A2A0u: goto label_37a2a0;
            case 0x37A2B0u: goto label_37a2b0;
            case 0x37A300u: goto label_37a300;
            case 0x37A304u: goto label_37a304;
            case 0x37A308u: goto label_37a308;
            case 0x37A334u: goto label_37a334;
            case 0x37A37Cu: goto label_37a37c;
            case 0x37A380u: goto label_37a380;
            case 0x37A3F4u: goto label_37a3f4;
            case 0x37A418u: goto label_37a418;
            case 0x37A424u: goto label_37a424;
            case 0x37A43Cu: goto label_37a43c;
            case 0x37A484u: goto label_37a484;
            case 0x37A488u: goto label_37a488;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37A390u;
    // 0x37a390: 0x27bdfff0
    ctx->pc = 0x37a390u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37a394: 0xffbf0000
    ctx->pc = 0x37a394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37a398: 0xc06e0a8
    ctx->pc = 0x37A398u;
    SET_GPR_U32(ctx, 31, 0x37A3A0u);
    ctx->pc = 0x37A39Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
    ctx->pc = 0x1B82A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1B82A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A3A0u; }
        if (ctx->pc != 0x37A3A0u) { return; }
    }
    ctx->pc = 0x37A3A0u;
    // 0x37a3a0: 0x14400038
    ctx->pc = 0x37A3A0u;
    {
        const bool branch_taken_0x37a3a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37A3A4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x37a3a0) {
            ctx->pc = 0x37A484u;
            goto label_37a484;
        }
    }
    ctx->pc = 0x37A3A8u;
    // 0x37a3a8: 0xc0dee40
    ctx->pc = 0x37A3A8u;
    SET_GPR_U32(ctx, 31, 0x37A3B0u);
    ctx->pc = 0x37B900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0037B900_0x37b900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A3B0u; }
    }
    if (ctx->pc != 0x37A3B0u) { return; }
    ctx->pc = 0x37A3B0u;
    // 0x37a3b0: 0x3c020034
    ctx->pc = 0x37a3b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x37a3b4: 0x3c010034
    ctx->pc = 0x37a3b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x37a3b8: 0x24420a40
    ctx->pc = 0x37a3b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2624));
    // 0x37a3bc: 0xac220a20
    ctx->pc = 0x37a3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2592), GPR_U32(ctx, 2));
    // 0x37a3c0: 0x3c010034
    ctx->pc = 0x37a3c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x37a3c4: 0x8c220a20
    ctx->pc = 0x37a3c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2592)));
    // 0x37a3c8: 0x8c420000
    ctx->pc = 0x37a3c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37a3cc: 0x14400009
    ctx->pc = 0x37A3CCu;
    {
        const bool branch_taken_0x37a3cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x37a3cc) {
            ctx->pc = 0x37A3F4u;
            goto label_37a3f4;
        }
    }
    ctx->pc = 0x37A3D4u;
    // 0x37a3d4: 0x24040200
    ctx->pc = 0x37a3d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 512));
    // 0x37a3d8: 0xc0de7b4
    ctx->pc = 0x37A3D8u;
    SET_GPR_U32(ctx, 31, 0x37A3E0u);
    ctx->pc = 0x37A3DCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 368));
    ctx->pc = 0x379ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00379ED0_0x379ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A3E0u; }
    }
    if (ctx->pc != 0x37A3E0u) { return; }
    ctx->pc = 0x37A3E0u;
    // 0x37a3e0: 0x3c010034
    ctx->pc = 0x37a3e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x37a3e4: 0x8c230a20
    ctx->pc = 0x37a3e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 2592)));
    // 0x37a3e8: 0x8c630000
    ctx->pc = 0x37a3e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37a3ec: 0x10600025
    ctx->pc = 0x37A3ECu;
    {
        const bool branch_taken_0x37a3ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x37a3ec) {
            ctx->pc = 0x37A484u;
            goto label_37a484;
        }
    }
    ctx->pc = 0x37A3F4u;
label_37a3f4:
    // 0x37a3f4: 0x3c010032
    ctx->pc = 0x37a3f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x37a3f8: 0x902243fd
    ctx->pc = 0x37a3f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17405)));
    // 0x37a3fc: 0x14400006
    ctx->pc = 0x37A3FCu;
    {
        const bool branch_taken_0x37a3fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37A400u;
        SET_GPR_U32(ctx, 4, ((uint32_t)57 << 16));
        if (branch_taken_0x37a3fc) {
            ctx->pc = 0x37A418u;
            goto label_37a418;
        }
    }
    ctx->pc = 0x37A404u;
    // 0x37a404: 0x3c040039
    ctx->pc = 0x37a404u;
    SET_GPR_U32(ctx, 4, ((uint32_t)57 << 16));
    // 0x37a408: 0xc06acbc
    ctx->pc = 0x37A408u;
    SET_GPR_U32(ctx, 31, 0x37A410u);
    ctx->pc = 0x37A40Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953680));
    ctx->pc = 0x1AB2F0u;
    {
        auto targetFn = runtime->lookupFunction(0x1AB2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A410u; }
        if (ctx->pc != 0x37A410u) { return; }
    }
    ctx->pc = 0x37A410u;
    // 0x37a410: 0x10000004
    ctx->pc = 0x37A410u;
    {
        const bool branch_taken_0x37a410 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37A414u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x37a410) {
            ctx->pc = 0x37A424u;
            goto label_37a424;
        }
    }
    ctx->pc = 0x37A418u;
label_37a418:
    // 0x37a418: 0xc06acbc
    ctx->pc = 0x37A418u;
    SET_GPR_U32(ctx, 31, 0x37A420u);
    ctx->pc = 0x37A41Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953696));
    ctx->pc = 0x1AB2F0u;
    {
        auto targetFn = runtime->lookupFunction(0x1AB2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A420u; }
        if (ctx->pc != 0x37A420u) { return; }
    }
    ctx->pc = 0x37A420u;
    // 0x37a420: 0x2403ffff
    ctx->pc = 0x37a420u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_37a424:
    // 0x37a424: 0x14430005
    ctx->pc = 0x37A424u;
    {
        const bool branch_taken_0x37a424 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x37A428u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37a424) {
            ctx->pc = 0x37A43Cu;
            goto label_37a43c;
        }
    }
    ctx->pc = 0x37A42Cu;
    // 0x37a42c: 0xc0de938
    ctx->pc = 0x37A42Cu;
    SET_GPR_U32(ctx, 31, 0x37A434u);
    ctx->pc = 0x37A4E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0037A4E0_0x37a4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A434u; }
    }
    if (ctx->pc != 0x37A434u) { return; }
    ctx->pc = 0x37A434u;
    // 0x37a434: 0x10000014
    ctx->pc = 0x37A434u;
    {
        const bool branch_taken_0x37a434 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37A438u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x37a434) {
            ctx->pc = 0x37A488u;
            goto label_37a488;
        }
    }
    ctx->pc = 0x37A43Cu;
label_37a43c:
    // 0x37a43c: 0x3c010034
    ctx->pc = 0x37a43cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x37a440: 0x8c220a20
    ctx->pc = 0x37a440u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2592)));
    // 0x37a444: 0x8c440000
    ctx->pc = 0x37a444u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37a448: 0xc058a02
    ctx->pc = 0x37A448u;
    SET_GPR_U32(ctx, 31, 0x37A450u);
    ctx->pc = 0x37A44Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x162808u;
    {
        auto targetFn = runtime->lookupFunction(0x162808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A450u; }
        if (ctx->pc != 0x37A450u) { return; }
    }
    ctx->pc = 0x37A450u;
    // 0x37a450: 0x3c010034
    ctx->pc = 0x37a450u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x37a454: 0x8c220a20
    ctx->pc = 0x37a454u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2592)));
    // 0x37a458: 0x8c440000
    ctx->pc = 0x37a458u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37a45c: 0xc058998
    ctx->pc = 0x37A45Cu;
    SET_GPR_U32(ctx, 31, 0x37A464u);
    ctx->pc = 0x37A460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x162660u;
    {
        auto targetFn = runtime->lookupFunction(0x162660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A464u; }
        if (ctx->pc != 0x37A464u) { return; }
    }
    ctx->pc = 0x37A464u;
    // 0x37a464: 0x3c010034
    ctx->pc = 0x37a464u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x37a468: 0x8c220a20
    ctx->pc = 0x37a468u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2592)));
    // 0x37a46c: 0xc058974
    ctx->pc = 0x37A46Cu;
    SET_GPR_U32(ctx, 31, 0x37A474u);
    ctx->pc = 0x37A470u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1625D0u;
    {
        auto targetFn = runtime->lookupFunction(0x1625D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A474u; }
        if (ctx->pc != 0x37A474u) { return; }
    }
    ctx->pc = 0x37A474u;
    // 0x37a474: 0x3c010034
    ctx->pc = 0x37a474u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x37a478: 0x8c220a20
    ctx->pc = 0x37a478u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2592)));
    // 0x37a47c: 0xc0589ea
    ctx->pc = 0x37A47Cu;
    SET_GPR_U32(ctx, 31, 0x37A484u);
    ctx->pc = 0x37A480u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1627A8u;
    {
        auto targetFn = runtime->lookupFunction(0x1627A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A484u; }
        if (ctx->pc != 0x37A484u) { return; }
    }
    ctx->pc = 0x37A484u;
label_37a484:
    // 0x37a484: 0xdfbf0000
    ctx->pc = 0x37a484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_37a488:
    // 0x37a488: 0x3e00008
    ctx->pc = 0x37A488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A48Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37A160u: goto label_37a160;
            case 0x37A208u: goto label_37a208;
            case 0x37A24Cu: goto label_37a24c;
            case 0x37A274u: goto label_37a274;
            case 0x37A2A0u: goto label_37a2a0;
            case 0x37A2B0u: goto label_37a2b0;
            case 0x37A300u: goto label_37a300;
            case 0x37A304u: goto label_37a304;
            case 0x37A308u: goto label_37a308;
            case 0x37A334u: goto label_37a334;
            case 0x37A37Cu: goto label_37a37c;
            case 0x37A380u: goto label_37a380;
            case 0x37A3F4u: goto label_37a3f4;
            case 0x37A418u: goto label_37a418;
            case 0x37A424u: goto label_37a424;
            case 0x37A43Cu: goto label_37a43c;
            case 0x37A484u: goto label_37a484;
            case 0x37A488u: goto label_37a488;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37A490u;
}
