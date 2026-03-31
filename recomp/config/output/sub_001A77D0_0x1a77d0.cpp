#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A77D0
// Address: 0x1a77d0 - 0x1a7900
void sub_001A77D0_0x1a77d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a77d0u;

    // 0x1a77d0: 0x24ab000f
    ctx->pc = 0x1a77d0u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 5), 15));
    // 0x1a77d4: 0x3c01002b
    ctx->pc = 0x1a77d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a77d8: 0x2405fff0
    ctx->pc = 0x1a77d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1a77dc: 0x3c03002b
    ctx->pc = 0x1a77dcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
    // 0x1a77e0: 0x1652824
    ctx->pc = 0x1a77e0u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x1a77e4: 0x8c2c0a68
    ctx->pc = 0x1a77e4u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 1), 2664)));
    // 0x1a77e8: 0x55903
    ctx->pc = 0x1a77e8u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 5), 4));
    // 0x1a77ec: 0x3c0a4f00
    ctx->pc = 0x1a77ecu;
    SET_GPR_U32(ctx, 10, ((uint32_t)20224 << 16));
    // 0x1a77f0: 0x52d03
    ctx->pc = 0x1a77f0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 20));
    // 0x1a77f4: 0x24630a80
    ctx->pc = 0x1a77f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2688));
    // 0x1a77f8: 0x852825
    ctx->pc = 0x1a77f8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a77fc: 0xb223c
    ctx->pc = 0x1a77fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) << (32 + 8));
    // 0x1a7800: 0x4223e
    ctx->pc = 0x1a7800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x1a7804: 0x8a5825
    ctx->pc = 0x1a7804u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1a7808: 0xc2040
    ctx->pc = 0x1a7808u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 12), 1));
    // 0x1a780c: 0x8c5021
    ctx->pc = 0x1a780cu;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x1a7810: 0xa5080
    ctx->pc = 0x1a7810u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 2));
    // 0x1a7814: 0x25840001
    ctx->pc = 0x1a7814u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 12), 1));
    // 0x1a7818: 0x6a5021
    ctx->pc = 0x1a7818u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1a781c: 0x308c001f
    ctx->pc = 0x1a781cu;
    SET_GPR_U32(ctx, 12, AND32(GPR_U32(ctx, 4), 31));
    // 0x1a7820: 0xad4b0000
    ctx->pc = 0x1a7820u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 11));
    // 0x1a7824: 0x4810004
    ctx->pc = 0x1A7824u;
    {
        const bool branch_taken_0x1a7824 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1A7828u;
        WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 5));
        if (branch_taken_0x1a7824) {
            ctx->pc = 0x1A7838u;
            goto label_1a7838;
        }
    }
    ctx->pc = 0x1A782Cu;
    // 0x1a782c: 0x11800003
    ctx->pc = 0x1A782Cu;
    {
        const bool branch_taken_0x1a782c = (GPR_U32(ctx, 12) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7830u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 7), 15));
        if (branch_taken_0x1a782c) {
            ctx->pc = 0x1A783Cu;
            goto label_1a783c;
        }
    }
    ctx->pc = 0x1A7834u;
    // 0x1a7834: 0x258cffe0
    ctx->pc = 0x1a7834u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 4294967264));
label_1a7838:
    // 0x1a7838: 0x24e5000f
    ctx->pc = 0x1a7838u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 7), 15));
label_1a783c:
    // 0x1a783c: 0x2404fff0
    ctx->pc = 0x1a783cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1a7840: 0xa43824
    ctx->pc = 0x1a7840u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1a7844: 0xc2040
    ctx->pc = 0x1a7844u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 12), 1));
    // 0x1a7848: 0x8c2821
    ctx->pc = 0x1a7848u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x1a784c: 0x55080
    ctx->pc = 0x1a784cu;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a7850: 0x25840001
    ctx->pc = 0x1a7850u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 12), 1));
    // 0x1a7854: 0x72903
    ctx->pc = 0x1a7854u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 4));
    // 0x1a7858: 0x6a5821
    ctx->pc = 0x1a7858u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1a785c: 0x5523c
    ctx->pc = 0x1a785cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) << (32 + 8));
    // 0x1a7860: 0x72d03
    ctx->pc = 0x1a7860u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 20));
    // 0x1a7864: 0xa523e
    ctx->pc = 0x1a7864u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> (32 + 8));
    // 0x1a7868: 0x3c074f00
    ctx->pc = 0x1a7868u;
    SET_GPR_U32(ctx, 7, ((uint32_t)20224 << 16));
    // 0x1a786c: 0xc52825
    ctx->pc = 0x1a786cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1a7870: 0x1473825
    ctx->pc = 0x1a7870u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x1a7874: 0x3086001f
    ctx->pc = 0x1a7874u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 4), 31));
    // 0x1a7878: 0xad670000
    ctx->pc = 0x1a7878u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 7));
    // 0x1a787c: 0x4810004
    ctx->pc = 0x1A787Cu;
    {
        const bool branch_taken_0x1a787c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1A7880u;
        WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 5));
        if (branch_taken_0x1a787c) {
            ctx->pc = 0x1A7890u;
            goto label_1a7890;
        }
    }
    ctx->pc = 0x1A7884u;
    // 0x1a7884: 0x10c00003
    ctx->pc = 0x1A7884u;
    {
        const bool branch_taken_0x1a7884 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7888u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 9), 15));
        if (branch_taken_0x1a7884) {
            ctx->pc = 0x1A7894u;
            goto label_1a7894;
        }
    }
    ctx->pc = 0x1A788Cu;
    // 0x1a788c: 0x24c6ffe0
    ctx->pc = 0x1a788cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967264));
label_1a7890:
    // 0x1a7890: 0x2525000f
    ctx->pc = 0x1a7890u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 9), 15));
label_1a7894:
    // 0x1a7894: 0x2404fff0
    ctx->pc = 0x1a7894u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1a7898: 0xa44824
    ctx->pc = 0x1a7898u;
    SET_GPR_U32(ctx, 9, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1a789c: 0x62040
    ctx->pc = 0x1a789cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 6), 1));
    // 0x1a78a0: 0x862821
    ctx->pc = 0x1a78a0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1a78a4: 0x24c40001
    ctx->pc = 0x1a78a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a78a8: 0x53080
    ctx->pc = 0x1a78a8u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a78ac: 0x663821
    ctx->pc = 0x1a78acu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a78b0: 0x92903
    ctx->pc = 0x1a78b0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 9), 4));
    // 0x1a78b4: 0x5323c
    ctx->pc = 0x1a78b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 8));
    // 0x1a78b8: 0x91d03
    ctx->pc = 0x1a78b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 9), 20));
    // 0x1a78bc: 0x6323e
    ctx->pc = 0x1a78bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 8));
    // 0x1a78c0: 0x3c054f00
    ctx->pc = 0x1a78c0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)20224 << 16));
    // 0x1a78c4: 0xc53025
    ctx->pc = 0x1a78c4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1a78c8: 0x1032825
    ctx->pc = 0x1a78c8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1a78cc: 0xace60000
    ctx->pc = 0x1a78ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x1a78d0: 0x3083001f
    ctx->pc = 0x1a78d0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 31));
    // 0x1a78d4: 0x4810004
    ctx->pc = 0x1A78D4u;
    {
        const bool branch_taken_0x1a78d4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1A78D8u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
        if (branch_taken_0x1a78d4) {
            ctx->pc = 0x1A78E8u;
            goto label_1a78e8;
        }
    }
    ctx->pc = 0x1A78DCu;
    // 0x1a78dc: 0x10600002
    ctx->pc = 0x1A78DCu;
    {
        const bool branch_taken_0x1a78dc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a78dc) {
            ctx->pc = 0x1A78E8u;
            goto label_1a78e8;
        }
    }
    ctx->pc = 0x1A78E4u;
    // 0x1a78e4: 0x2463ffe0
    ctx->pc = 0x1a78e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967264));
label_1a78e8:
    // 0x1a78e8: 0x3c01002b
    ctx->pc = 0x1a78e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a78ec: 0x3e00008
    ctx->pc = 0x1A78ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A78F0u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 2664), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7838u: goto label_1a7838;
            case 0x1A783Cu: goto label_1a783c;
            case 0x1A7890u: goto label_1a7890;
            case 0x1A7894u: goto label_1a7894;
            case 0x1A78E8u: goto label_1a78e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A78F4u;
    // 0x1a78f4: 0x0
    ctx->pc = 0x1a78f4u;
    // NOP
    // 0x1a78f8: 0x0
    ctx->pc = 0x1a78f8u;
    // NOP
    // 0x1a78fc: 0x0
    ctx->pc = 0x1a78fcu;
    // NOP
}
