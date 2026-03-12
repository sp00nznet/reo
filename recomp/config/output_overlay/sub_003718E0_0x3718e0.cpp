#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_003718E0
// Address: 0x3718e0 - 0x3719f0
void sub_003718E0_0x3718e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3718e0u;

    // 0x3718e0: 0x27bdfec0
    ctx->pc = 0x3718e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x3718e4: 0x3c010032
    ctx->pc = 0x3718e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x3718e8: 0xffbf0030
    ctx->pc = 0x3718e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3718ec: 0x24020006
    ctx->pc = 0x3718ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x3718f0: 0x7fb20020
    ctx->pc = 0x3718f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3718f4: 0x7fb10010
    ctx->pc = 0x3718f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3718f8: 0x7fb00000
    ctx->pc = 0x3718f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3718fc: 0x942343da
    ctx->pc = 0x3718fcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17370)));
    // 0x371900: 0x14620003
    ctx->pc = 0x371900u;
    {
        const bool branch_taken_0x371900 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x371904u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x371900) {
            ctx->pc = 0x371910u;
            goto label_371910;
        }
    }
    ctx->pc = 0x371908u;
    // 0x371908: 0x1000002d
    ctx->pc = 0x371908u;
    {
        const bool branch_taken_0x371908 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37190Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x371908) {
            ctx->pc = 0x3719C0u;
            goto label_3719c0;
        }
    }
    ctx->pc = 0x371910u;
label_371910:
    // 0x371910: 0x3c040039
    ctx->pc = 0x371910u;
    SET_GPR_U32(ctx, 4, ((uint32_t)57 << 16));
    // 0x371914: 0x802d
    ctx->pc = 0x371914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371918: 0x10000006
    ctx->pc = 0x371918u;
    {
        const bool branch_taken_0x371918 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37191Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939888));
        if (branch_taken_0x371918) {
            ctx->pc = 0x371934u;
            goto label_371934;
        }
    }
    ctx->pc = 0x371920u;
label_371920:
    // 0x371920: 0x14430003
    ctx->pc = 0x371920u;
    {
        const bool branch_taken_0x371920 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x371920) {
            ctx->pc = 0x371930u;
            goto label_371930;
        }
    }
    ctx->pc = 0x371928u;
    // 0x371928: 0x10000005
    ctx->pc = 0x371928u;
    {
        const bool branch_taken_0x371928 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37192Cu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        if (branch_taken_0x371928) {
            ctx->pc = 0x371940u;
            goto label_371940;
        }
    }
    ctx->pc = 0x371930u;
label_371930:
    // 0x371930: 0x24840008
    ctx->pc = 0x371930u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
label_371934:
    // 0x371934: 0x8c820000
    ctx->pc = 0x371934u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x371938: 0x441fff9
    ctx->pc = 0x371938u;
    {
        const bool branch_taken_0x371938 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x371938) {
            ctx->pc = 0x371920u;
            goto label_371920;
        }
    }
    ctx->pc = 0x371940u;
label_371940:
    // 0x371940: 0x1600001c
    ctx->pc = 0x371940u;
    {
        const bool branch_taken_0x371940 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x371944u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x371940) {
            ctx->pc = 0x3719B4u;
            goto label_3719b4;
        }
    }
    ctx->pc = 0x371948u;
    // 0x371948: 0x1000001e
    ctx->pc = 0x371948u;
    {
        const bool branch_taken_0x371948 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37194Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x371948) {
            ctx->pc = 0x3719C4u;
            goto label_3719c4;
        }
    }
    ctx->pc = 0x371950u;
label_371950:
    // 0x371950: 0xc042c56
    ctx->pc = 0x371950u;
    SET_GPR_U32(ctx, 31, 0x371958u);
    ctx->pc = 0x371954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        auto targetFn = runtime->lookupFunction(0x10B158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371958u; }
        if (ctx->pc != 0x371958u) { return; }
    }
    ctx->pc = 0x371958u;
    // 0x371958: 0x27a40040
    ctx->pc = 0x371958u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x37195c: 0x10000009
    ctx->pc = 0x37195Cu;
    {
        const bool branch_taken_0x37195c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x371960u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37195c) {
            ctx->pc = 0x371984u;
            goto label_371984;
        }
    }
    ctx->pc = 0x371964u;
label_371964:
    // 0x371964: 0x82430000
    ctx->pc = 0x371964u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x371968: 0x10600009
    ctx->pc = 0x371968u;
    {
        const bool branch_taken_0x371968 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x371968) {
            ctx->pc = 0x371990u;
            goto label_371990;
        }
    }
    ctx->pc = 0x371970u;
    // 0x371970: 0x386300ff
    ctx->pc = 0x371970u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 255));
    // 0x371974: 0x26520001
    ctx->pc = 0x371974u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x371978: 0xa0830000
    ctx->pc = 0x371978u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x37197c: 0x24a50001
    ctx->pc = 0x37197cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x371980: 0x24840001
    ctx->pc = 0x371980u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_371984:
    // 0x371984: 0xa2182a
    ctx->pc = 0x371984u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x371988: 0x1460fff6
    ctx->pc = 0x371988u;
    {
        const bool branch_taken_0x371988 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x371988) {
            ctx->pc = 0x371964u;
            goto label_371964;
        }
    }
    ctx->pc = 0x371990u;
label_371990:
    // 0x371990: 0xa0800000
    ctx->pc = 0x371990u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x371994: 0x220282d
    ctx->pc = 0x371994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371998: 0xc042b9e
    ctx->pc = 0x371998u;
    SET_GPR_U32(ctx, 31, 0x3719A0u);
    ctx->pc = 0x37199Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x10AE78u;
    {
        auto targetFn = runtime->lookupFunction(0x10AE78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3719A0u; }
        if (ctx->pc != 0x3719A0u) { return; }
    }
    ctx->pc = 0x3719A0u;
    // 0x3719a0: 0x14400003
    ctx->pc = 0x3719A0u;
    {
        const bool branch_taken_0x3719a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x3719a0) {
            ctx->pc = 0x3719B0u;
            goto label_3719b0;
        }
    }
    ctx->pc = 0x3719A8u;
    // 0x3719a8: 0x10000005
    ctx->pc = 0x3719A8u;
    {
        const bool branch_taken_0x3719a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3719ACu;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
        if (branch_taken_0x3719a8) {
            ctx->pc = 0x3719C0u;
            goto label_3719c0;
        }
    }
    ctx->pc = 0x3719B0u;
label_3719b0:
    // 0x3719b0: 0x26100008
    ctx->pc = 0x3719b0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8));
label_3719b4:
    // 0x3719b4: 0x8e120000
    ctx->pc = 0x3719b4u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3719b8: 0x1640ffe5
    ctx->pc = 0x3719B8u;
    {
        const bool branch_taken_0x3719b8 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x3719BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x3719b8) {
            ctx->pc = 0x371950u;
            goto label_371950;
        }
    }
    ctx->pc = 0x3719C0u;
label_3719c0:
    // 0x3719c0: 0xdfbf0030
    ctx->pc = 0x3719c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3719c4:
    // 0x3719c4: 0x7bb20020
    ctx->pc = 0x3719c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3719c8: 0x7bb10010
    ctx->pc = 0x3719c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3719cc: 0x7bb00000
    ctx->pc = 0x3719ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3719d0: 0x3e00008
    ctx->pc = 0x3719D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3719D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x371910u: goto label_371910;
            case 0x371920u: goto label_371920;
            case 0x371930u: goto label_371930;
            case 0x371934u: goto label_371934;
            case 0x371940u: goto label_371940;
            case 0x371950u: goto label_371950;
            case 0x371964u: goto label_371964;
            case 0x371984u: goto label_371984;
            case 0x371990u: goto label_371990;
            case 0x3719B0u: goto label_3719b0;
            case 0x3719B4u: goto label_3719b4;
            case 0x3719C0u: goto label_3719c0;
            case 0x3719C4u: goto label_3719c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3719D8u;
    // 0x3719d8: 0x0
    ctx->pc = 0x3719d8u;
    // NOP
    // 0x3719dc: 0x0
    ctx->pc = 0x3719dcu;
    // NOP
    // 0x3719e0: 0x807312c
    ctx->pc = 0x3719E0u;
    ctx->pc = 0x1CC4B0u;
    {
        auto targetFn = runtime->lookupFunction(0x1CC4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3719E8u;
    // 0x3719e8: 0x0
    ctx->pc = 0x3719e8u;
    // NOP
    // 0x3719ec: 0x0
    ctx->pc = 0x3719ecu;
    // NOP
}
