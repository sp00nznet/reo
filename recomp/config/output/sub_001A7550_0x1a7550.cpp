#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A7550
// Address: 0x1a7550 - 0x1a7690
void sub_001A7550_0x1a7550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a7550u;

    // 0x1a7550: 0x27bdfff0
    ctx->pc = 0x1a7550u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a7554: 0x3c03002b
    ctx->pc = 0x1a7554u;
    SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
    // 0x1a7558: 0xffbf0000
    ctx->pc = 0x1a7558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a755c: 0x3c01002b
    ctx->pc = 0x1a755cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a7560: 0x8c280a68
    ctx->pc = 0x1a7560u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 1), 2664)));
    // 0x1a7564: 0x24630a80
    ctx->pc = 0x1a7564u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2688));
    // 0x1a7568: 0x81040
    ctx->pc = 0x1a7568u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), 1));
    // 0x1a756c: 0x481021
    ctx->pc = 0x1a756cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1a7570: 0x21080
    ctx->pc = 0x1a7570u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a7574: 0x625021
    ctx->pc = 0x1a7574u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a7578: 0x8d430000
    ctx->pc = 0x1a7578u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1a757c: 0x4600006
    ctx->pc = 0x1A757Cu;
    {
        const bool branch_taken_0x1a757c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1A7580u;
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
        if (branch_taken_0x1a757c) {
            ctx->pc = 0x1A7598u;
            goto label_1a7598;
        }
    }
    ctx->pc = 0x1A7584u;
    // 0x1a7584: 0x3c040024
    ctx->pc = 0x1a7584u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1a7588: 0xc0423b4
    ctx->pc = 0x1A7588u;
    SET_GPR_U32(ctx, 31, 0x1A7590u);
    ctx->pc = 0x1A758Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8480));
    ctx->pc = 0x108ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108ED0_0x108ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7590u; }
    }
    if (ctx->pc != 0x1A7590u) { return; }
    ctx->pc = 0x1A7590u;
    // 0x1a7590: 0x1000003a
    ctx->pc = 0x1A7590u;
    {
        const bool branch_taken_0x1a7590 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7594u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a7590) {
            ctx->pc = 0x1A767Cu;
            goto label_1a767c;
        }
    }
    ctx->pc = 0x1A7598u;
label_1a7598:
    // 0x1a7598: 0x6463c
    ctx->pc = 0x1a7598u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 24));
    // 0x1a759c: 0x31e3f
    ctx->pc = 0x1a759cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a75a0: 0x8463f
    ctx->pc = 0x1a75a0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 24));
    // 0x1a75a4: 0x60182a
    ctx->pc = 0x1a75a4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 0)));
    // 0x1a75a8: 0x100482a
    ctx->pc = 0x1a75a8u;
    SET_GPR_U32(ctx, 9, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 0)));
    // 0x1a75ac: 0x38630001
    ctx->pc = 0x1a75acu;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 1));
    // 0x1a75b0: 0x39290001
    ctx->pc = 0x1a75b0u;
    SET_GPR_U32(ctx, 9, XOR32(GPR_U32(ctx, 9), 1));
    // 0x1a75b4: 0x30680001
    ctx->pc = 0x1a75b4u;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 3), 1));
    // 0x1a75b8: 0x31230001
    ctx->pc = 0x1a75b8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 9), 1));
    // 0x1a75bc: 0x35080008
    ctx->pc = 0x1a75bcu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), 8));
    // 0x1a75c0: 0x31840
    ctx->pc = 0x1a75c0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a75c4: 0x1034825
    ctx->pc = 0x1a75c4u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1a75c8: 0x71c3c
    ctx->pc = 0x1a75c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 16));
    // 0x1a75cc: 0x31c3f
    ctx->pc = 0x1a75ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1a75d0: 0x60402a
    ctx->pc = 0x1a75d0u;
    SET_GPR_U32(ctx, 8, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 0)));
    // 0x1a75d4: 0x39080001
    ctx->pc = 0x1a75d4u;
    SET_GPR_U32(ctx, 8, XOR32(GPR_U32(ctx, 8), 1));
    // 0x1a75d8: 0x24030008
    ctx->pc = 0x1a75d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a75dc: 0x84080
    ctx->pc = 0x1a75dcu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a75e0: 0x1094025
    ctx->pc = 0x1a75e0u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1a75e4: 0x8463c
    ctx->pc = 0x1a75e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 24));
    // 0x1a75e8: 0x8463f
    ctx->pc = 0x1a75e8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 24));
    // 0x1a75ec: 0x15030003
    ctx->pc = 0x1A75ECu;
    {
        const bool branch_taken_0x1a75ec = (GPR_U32(ctx, 8) != GPR_U32(ctx, 3));
        if (branch_taken_0x1a75ec) {
            ctx->pc = 0x1A75FCu;
            goto label_1a75fc;
        }
    }
    ctx->pc = 0x1A75F4u;
    // 0x1a75f4: 0x10000021
    ctx->pc = 0x1A75F4u;
    {
        const bool branch_taken_0x1a75f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A75F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1a75f4) {
            ctx->pc = 0x1A767Cu;
            goto label_1a767c;
        }
    }
    ctx->pc = 0x1A75FCu;
label_1a75fc:
    // 0x1a75fc: 0x41a3c
    ctx->pc = 0x1a75fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 8));
    // 0x1a7600: 0x84600
    ctx->pc = 0x1a7600u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 24));
    // 0x1a7604: 0x31a3e
    ctx->pc = 0x1a7604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x1a7608: 0x3c01002b
    ctx->pc = 0x1a7608u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a760c: 0x1032025
    ctx->pc = 0x1a760cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1a7610: 0x3c03002b
    ctx->pc = 0x1a7610u;
    SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
    // 0x1a7614: 0xad440000
    ctx->pc = 0x1a7614u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x1a7618: 0x24630a84
    ctx->pc = 0x1a7618u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2692));
    // 0x1a761c: 0x621821
    ctx->pc = 0x1a761cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a7620: 0xa0650000
    ctx->pc = 0x1a7620u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a7624: 0x3c03002b
    ctx->pc = 0x1a7624u;
    SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
    // 0x1a7628: 0x24630a85
    ctx->pc = 0x1a7628u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2693));
    // 0x1a762c: 0x622021
    ctx->pc = 0x1a762cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a7630: 0x3c03002b
    ctx->pc = 0x1a7630u;
    SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
    // 0x1a7634: 0xa0860000
    ctx->pc = 0x1a7634u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x1a7638: 0x24630a86
    ctx->pc = 0x1a7638u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2694));
    // 0x1a763c: 0x621821
    ctx->pc = 0x1a763cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a7640: 0xa4670000
    ctx->pc = 0x1a7640u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x1a7644: 0x3c03002b
    ctx->pc = 0x1a7644u;
    SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
    // 0x1a7648: 0x24630a88
    ctx->pc = 0x1a7648u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2696));
    // 0x1a764c: 0x621021
    ctx->pc = 0x1a764cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a7650: 0xa0400000
    ctx->pc = 0x1a7650u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a7654: 0x8c220a68
    ctx->pc = 0x1a7654u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2664)));
    // 0x1a7658: 0x24430001
    ctx->pc = 0x1a7658u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a765c: 0x4610004
    ctx->pc = 0x1A765Cu;
    {
        const bool branch_taken_0x1a765c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1A7660u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 31));
        if (branch_taken_0x1a765c) {
            ctx->pc = 0x1A7670u;
            goto label_1a7670;
        }
    }
    ctx->pc = 0x1A7664u;
    // 0x1a7664: 0x10400002
    ctx->pc = 0x1A7664u;
    {
        const bool branch_taken_0x1a7664 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a7664) {
            ctx->pc = 0x1A7670u;
            goto label_1a7670;
        }
    }
    ctx->pc = 0x1A766Cu;
    // 0x1a766c: 0x2442ffe0
    ctx->pc = 0x1a766cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967264));
label_1a7670:
    // 0x1a7670: 0x3c01002b
    ctx->pc = 0x1a7670u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a7674: 0xac220a68
    ctx->pc = 0x1a7674u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2664), GPR_U32(ctx, 2));
    // 0x1a7678: 0x102d
    ctx->pc = 0x1a7678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a767c:
    // 0x1a767c: 0xdfbf0000
    ctx->pc = 0x1a767cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7680: 0x3e00008
    ctx->pc = 0x1A7680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7684u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7598u: goto label_1a7598;
            case 0x1A75FCu: goto label_1a75fc;
            case 0x1A7670u: goto label_1a7670;
            case 0x1A767Cu: goto label_1a767c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A7688u;
    // 0x1a7688: 0x0
    ctx->pc = 0x1a7688u;
    // NOP
    // 0x1a768c: 0x0
    ctx->pc = 0x1a768cu;
    // NOP
}
