#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0037E0C0
// Address: 0x37e0c0 - 0x37e1e0
void sub_0037E0C0_0x37e0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x37e0c0u;

    // 0x37e0c0: 0x3c01003c
    ctx->pc = 0x37e0c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x37e0c4: 0xa0208507
    ctx->pc = 0x37e0c4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294935815), (uint8_t)GPR_U32(ctx, 0));
    // 0x37e0c8: 0x3c01003c
    ctx->pc = 0x37e0c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x37e0cc: 0x902284f6
    ctx->pc = 0x37e0ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294935798)));
    // 0x37e0d0: 0x1040002b
    ctx->pc = 0x37E0D0u;
    {
        const bool branch_taken_0x37e0d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x37E0D4u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 255));
        if (branch_taken_0x37e0d0) {
            ctx->pc = 0x37E180u;
            goto label_37e180;
        }
    }
    ctx->pc = 0x37E0D8u;
    // 0x37e0d8: 0x3c01003c
    ctx->pc = 0x37e0d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x37e0dc: 0x308300ff
    ctx->pc = 0x37e0dcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 255));
    // 0x37e0e0: 0x90268507
    ctx->pc = 0x37e0e0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294935815)));
    // 0x37e0e4: 0x24020001
    ctx->pc = 0x37e0e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37e0e8: 0x24c60001
    ctx->pc = 0x37e0e8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x37e0ec: 0x3c01003c
    ctx->pc = 0x37e0ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x37e0f0: 0x14620008
    ctx->pc = 0x37E0F0u;
    {
        const bool branch_taken_0x37e0f0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x37E0F4u;
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294935815), (uint8_t)GPR_U32(ctx, 6));
        if (branch_taken_0x37e0f0) {
            ctx->pc = 0x37E114u;
            goto label_37e114;
        }
    }
    ctx->pc = 0x37E0F8u;
    // 0x37e0f8: 0x30a300ff
    ctx->pc = 0x37e0f8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 255));
    // 0x37e0fc: 0x3c020039
    ctx->pc = 0x37e0fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)57 << 16));
    // 0x37e100: 0x2442a790
    ctx->pc = 0x37e100u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944656));
    // 0x37e104: 0x31880
    ctx->pc = 0x37e104u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x37e108: 0x431021
    ctx->pc = 0x37e108u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37e10c: 0x1000002f
    ctx->pc = 0x37E10Cu;
    {
        const bool branch_taken_0x37e10c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37E110u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x37e10c) {
            ctx->pc = 0x37E1CCu;
            goto label_37e1cc;
        }
    }
    ctx->pc = 0x37E114u;
label_37e114:
    // 0x37e114: 0x3c010032
    ctx->pc = 0x37e114u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x37e118: 0x90224477
    ctx->pc = 0x37e118u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17527)));
    // 0x37e11c: 0x10400008
    ctx->pc = 0x37E11Cu;
    {
        const bool branch_taken_0x37e11c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x37E120u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 255));
        if (branch_taken_0x37e11c) {
            ctx->pc = 0x37E140u;
            goto label_37e140;
        }
    }
    ctx->pc = 0x37E124u;
    // 0x37e124: 0x30a300ff
    ctx->pc = 0x37e124u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 255));
    // 0x37e128: 0x3c020039
    ctx->pc = 0x37e128u;
    SET_GPR_U32(ctx, 2, ((uint32_t)57 << 16));
    // 0x37e12c: 0x2442a7d0
    ctx->pc = 0x37e12cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944720));
    // 0x37e130: 0x31880
    ctx->pc = 0x37e130u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x37e134: 0x431021
    ctx->pc = 0x37e134u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37e138: 0x10000024
    ctx->pc = 0x37E138u;
    {
        const bool branch_taken_0x37e138 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37E13Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x37e138) {
            ctx->pc = 0x37E1CCu;
            goto label_37e1cc;
        }
    }
    ctx->pc = 0x37E140u;
label_37e140:
    // 0x37e140: 0x3c020039
    ctx->pc = 0x37e140u;
    SET_GPR_U32(ctx, 2, ((uint32_t)57 << 16));
    // 0x37e144: 0x2442a7b0
    ctx->pc = 0x37e144u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944688));
    // 0x37e148: 0x31880
    ctx->pc = 0x37e148u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x37e14c: 0x431021
    ctx->pc = 0x37e14cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37e150: 0x1000001e
    ctx->pc = 0x37E150u;
    {
        const bool branch_taken_0x37e150 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37E154u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x37e150) {
            ctx->pc = 0x37E1CCu;
            goto label_37e1cc;
        }
    }
    ctx->pc = 0x37E158u;
label_37e158:
    // 0x37e158: 0x24a50004
    ctx->pc = 0x37e158u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x37e15c: 0x90228507
    ctx->pc = 0x37e15cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294935815)));
    // 0x37e160: 0x24420001
    ctx->pc = 0x37e160u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x37e164: 0x3c01003c
    ctx->pc = 0x37e164u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x37e168: 0xa0228507
    ctx->pc = 0x37e168u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294935815), (uint8_t)GPR_U32(ctx, 2));
label_37e16c:
    // 0x37e16c: 0x8ca20000
    ctx->pc = 0x37e16cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37e170: 0x62102a
    ctx->pc = 0x37e170u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x37e174: 0x1440fff8
    ctx->pc = 0x37E174u;
    {
        const bool branch_taken_0x37e174 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37E178u;
        SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
        if (branch_taken_0x37e174) {
            ctx->pc = 0x37E158u;
            goto label_37e158;
        }
    }
    ctx->pc = 0x37E17Cu;
    // 0x37e17c: 0x308300ff
    ctx->pc = 0x37e17cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 255));
label_37e180:
    // 0x37e180: 0x24020001
    ctx->pc = 0x37e180u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37e184: 0x14620009
    ctx->pc = 0x37E184u;
    {
        const bool branch_taken_0x37e184 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x37E188u;
        SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
        if (branch_taken_0x37e184) {
            ctx->pc = 0x37E1ACu;
            goto label_37e1ac;
        }
    }
    ctx->pc = 0x37E18Cu;
    // 0x37e18c: 0x3c01003c
    ctx->pc = 0x37e18cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x37e190: 0x3c020039
    ctx->pc = 0x37e190u;
    SET_GPR_U32(ctx, 2, ((uint32_t)57 << 16));
    // 0x37e194: 0x90238507
    ctx->pc = 0x37e194u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294935815)));
    // 0x37e198: 0x2442a750
    ctx->pc = 0x37e198u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944592));
    // 0x37e19c: 0x31880
    ctx->pc = 0x37e19cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x37e1a0: 0x431021
    ctx->pc = 0x37e1a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37e1a4: 0x10000007
    ctx->pc = 0x37E1A4u;
    {
        const bool branch_taken_0x37e1a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37E1A8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x37e1a4) {
            ctx->pc = 0x37E1C4u;
            goto label_37e1c4;
        }
    }
    ctx->pc = 0x37E1ACu;
label_37e1ac:
    // 0x37e1ac: 0x3c020039
    ctx->pc = 0x37e1acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)57 << 16));
    // 0x37e1b0: 0x90238507
    ctx->pc = 0x37e1b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294935815)));
    // 0x37e1b4: 0x2442a770
    ctx->pc = 0x37e1b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944624));
    // 0x37e1b8: 0x31880
    ctx->pc = 0x37e1b8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x37e1bc: 0x431021
    ctx->pc = 0x37e1bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37e1c0: 0xc4400000
    ctx->pc = 0x37e1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37e1c4:
    // 0x37e1c4: 0x10000004
    ctx->pc = 0x37E1C4u;
    {
        const bool branch_taken_0x37e1c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x37e1c4) {
            ctx->pc = 0x37E1D8u;
            goto label_37e1d8;
        }
    }
    ctx->pc = 0x37E1CCu;
label_37e1cc:
    // 0x37e1cc: 0x3c01004c
    ctx->pc = 0x37e1ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x37e1d0: 0x1000ffe6
    ctx->pc = 0x37E1D0u;
    {
        const bool branch_taken_0x37e1d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37E1D4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294946280)));
        if (branch_taken_0x37e1d0) {
            ctx->pc = 0x37E16Cu;
            goto label_37e16c;
        }
    }
    ctx->pc = 0x37E1D8u;
label_37e1d8:
    // 0x37e1d8: 0x3e00008
    ctx->pc = 0x37E1D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37E114u: goto label_37e114;
            case 0x37E140u: goto label_37e140;
            case 0x37E158u: goto label_37e158;
            case 0x37E16Cu: goto label_37e16c;
            case 0x37E180u: goto label_37e180;
            case 0x37E1ACu: goto label_37e1ac;
            case 0x37E1C4u: goto label_37e1c4;
            case 0x37E1CCu: goto label_37e1cc;
            case 0x37E1D8u: goto label_37e1d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37E1E0u;
}
