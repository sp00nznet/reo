#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A6140
// Address: 0x1a6140 - 0x1a6480
void sub_001A6140_0x1a6140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a6140u;

    // 0x1a6140: 0x41840
    ctx->pc = 0x1a6140u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a6144: 0x27bdffe0
    ctx->pc = 0x1a6144u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a6148: 0x3c02002b
    ctx->pc = 0x1a6148u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1a614c: 0x641821
    ctx->pc = 0x1a614cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6150: 0xffbf0010
    ctx->pc = 0x1a6150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a6154: 0x24420a10
    ctx->pc = 0x1a6154u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2576));
    // 0x1a6158: 0x318c0
    ctx->pc = 0x1a6158u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a615c: 0x7fb00000
    ctx->pc = 0x1a615cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a6160: 0x431021
    ctx->pc = 0x1a6160u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a6164: 0x90420000
    ctx->pc = 0x1a6164u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6168: 0x14400003
    ctx->pc = 0x1A6168u;
    {
        const bool branch_taken_0x1a6168 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A616Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a6168) {
            ctx->pc = 0x1A6178u;
            goto label_1a6178;
        }
    }
    ctx->pc = 0x1A6170u;
    // 0x1a6170: 0x100000bc
    ctx->pc = 0x1A6170u;
    {
        const bool branch_taken_0x1a6170 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A6174u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a6170) {
            ctx->pc = 0x1A6464u;
            goto label_1a6464;
        }
    }
    ctx->pc = 0x1A6178u;
label_1a6178:
    // 0x1a6178: 0xc0699d8
    ctx->pc = 0x1A6178u;
    SET_GPR_U32(ctx, 31, 0x1A6180u);
    ctx->pc = 0x1A6760u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6760_0x1a6760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6180u; }
    }
    if (ctx->pc != 0x1A6180u) { return; }
    ctx->pc = 0x1A6180u;
    // 0x1a6180: 0x3c02002b
    ctx->pc = 0x1a6180u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1a6184: 0x103140
    ctx->pc = 0x1a6184u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 16), 5));
    // 0x1a6188: 0x244209e0
    ctx->pc = 0x1a6188u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2528));
    // 0x1a618c: 0x463821
    ctx->pc = 0x1a618cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a6190: 0x90e30000
    ctx->pc = 0x1a6190u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a6194: 0x240200ff
    ctx->pc = 0x1a6194u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a6198: 0x1462001a
    ctx->pc = 0x1A6198u;
    {
        const bool branch_taken_0x1a6198 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1A619Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 3));
        if (branch_taken_0x1a6198) {
            ctx->pc = 0x1A6204u;
            goto label_1a6204;
        }
    }
    ctx->pc = 0x1A61A0u;
    // 0x1a61a0: 0x1010c0
    ctx->pc = 0x1a61a0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a61a4: 0x3c04002b
    ctx->pc = 0x1a61a4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a61a8: 0x501021
    ctx->pc = 0x1a61a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a61ac: 0x3c03002b
    ctx->pc = 0x1a61acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
    // 0x1a61b0: 0x23080
    ctx->pc = 0x1a61b0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a61b4: 0x24840a38
    ctx->pc = 0x1a61b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2616));
    // 0x1a61b8: 0x3c02002b
    ctx->pc = 0x1a61b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1a61bc: 0x862821
    ctx->pc = 0x1a61bcu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1a61c0: 0x24630a3c
    ctx->pc = 0x1a61c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2620));
    // 0x1a61c4: 0x24420a3e
    ctx->pc = 0x1a61c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2622));
    // 0x1a61c8: 0x662021
    ctx->pc = 0x1a61c8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a61cc: 0xaca00000
    ctx->pc = 0x1a61ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1a61d0: 0x461821
    ctx->pc = 0x1a61d0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a61d4: 0xa4800000
    ctx->pc = 0x1a61d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a61d8: 0x3c02002b
    ctx->pc = 0x1a61d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1a61dc: 0xa4600000
    ctx->pc = 0x1a61dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a61e0: 0x24420a48
    ctx->pc = 0x1a61e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2632));
    // 0x1a61e4: 0x461021
    ctx->pc = 0x1a61e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a61e8: 0xa4400000
    ctx->pc = 0x1a61e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a61ec: 0x3c02002b
    ctx->pc = 0x1a61ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1a61f0: 0x24420a4a
    ctx->pc = 0x1a61f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2634));
    // 0x1a61f4: 0x461821
    ctx->pc = 0x1a61f4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a61f8: 0x24020001
    ctx->pc = 0x1a61f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a61fc: 0x10000099
    ctx->pc = 0x1A61FCu;
    {
        const bool branch_taken_0x1a61fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A6200u;
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1a61fc) {
            ctx->pc = 0x1A6464u;
            goto label_1a6464;
        }
    }
    ctx->pc = 0x1A6204u;
label_1a6204:
    // 0x1a6204: 0x3c02002b
    ctx->pc = 0x1a6204u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1a6208: 0x701821
    ctx->pc = 0x1a6208u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a620c: 0x24420a32
    ctx->pc = 0x1a620cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2610));
    // 0x1a6210: 0x32880
    ctx->pc = 0x1a6210u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a6214: 0x454021
    ctx->pc = 0x1a6214u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a6218: 0x95020000
    ctx->pc = 0x1a6218u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a621c: 0x10400006
    ctx->pc = 0x1A621Cu;
    {
        const bool branch_taken_0x1a621c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a621c) {
            ctx->pc = 0x1A6238u;
            goto label_1a6238;
        }
    }
    ctx->pc = 0x1A6224u;
    // 0x1a6224: 0x30420001
    ctx->pc = 0x1a6224u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x1a6228: 0x14400003
    ctx->pc = 0x1A6228u;
    {
        const bool branch_taken_0x1a6228 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a6228) {
            ctx->pc = 0x1A6238u;
            goto label_1a6238;
        }
    }
    ctx->pc = 0x1A6230u;
    // 0x1a6230: 0x34028000
    ctx->pc = 0x1a6230u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
    // 0x1a6234: 0xa5020000
    ctx->pc = 0x1a6234u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
label_1a6238:
    // 0x1a6238: 0x3c03002b
    ctx->pc = 0x1a6238u;
    SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
    // 0x1a623c: 0x24020020
    ctx->pc = 0x1a623cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a6240: 0x246309e2
    ctx->pc = 0x1a6240u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2530));
    // 0x1a6244: 0x662021
    ctx->pc = 0x1a6244u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a6248: 0x94830000
    ctx->pc = 0x1a6248u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a624c: 0x601827
    ctx->pc = 0x1a624cu;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
    // 0x1a6250: 0xa4830000
    ctx->pc = 0x1a6250u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a6254: 0x95030000
    ctx->pc = 0x1a6254u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a6258: 0x10620012
    ctx->pc = 0x1A6258u;
    {
        const bool branch_taken_0x1a6258 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1a6258) {
            ctx->pc = 0x1A62A4u;
            goto label_1a62a4;
        }
    }
    ctx->pc = 0x1A6260u;
    // 0x1a6260: 0x24020010
    ctx->pc = 0x1a6260u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a6264: 0x1062000f
    ctx->pc = 0x1A6264u;
    {
        const bool branch_taken_0x1a6264 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1a6264) {
            ctx->pc = 0x1A62A4u;
            goto label_1a62a4;
        }
    }
    ctx->pc = 0x1A626Cu;
    // 0x1a626c: 0x24020008
    ctx->pc = 0x1a626cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a6270: 0x1062000c
    ctx->pc = 0x1A6270u;
    {
        const bool branch_taken_0x1a6270 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1a6270) {
            ctx->pc = 0x1A62A4u;
            goto label_1a62a4;
        }
    }
    ctx->pc = 0x1A6278u;
    // 0x1a6278: 0x24020004
    ctx->pc = 0x1a6278u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a627c: 0x10620009
    ctx->pc = 0x1A627Cu;
    {
        const bool branch_taken_0x1a627c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1a627c) {
            ctx->pc = 0x1A62A4u;
            goto label_1a62a4;
        }
    }
    ctx->pc = 0x1A6284u;
    // 0x1a6284: 0x24020002
    ctx->pc = 0x1a6284u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a6288: 0x10620006
    ctx->pc = 0x1A6288u;
    {
        const bool branch_taken_0x1a6288 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1a6288) {
            ctx->pc = 0x1A62A4u;
            goto label_1a62a4;
        }
    }
    ctx->pc = 0x1A6290u;
    // 0x1a6290: 0x24020001
    ctx->pc = 0x1a6290u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6294: 0x10620003
    ctx->pc = 0x1A6294u;
    {
        const bool branch_taken_0x1a6294 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1a6294) {
            ctx->pc = 0x1A62A4u;
            goto label_1a62a4;
        }
    }
    ctx->pc = 0x1A629Cu;
    // 0x1a629c: 0x1000005d
    ctx->pc = 0x1A629Cu;
    {
        const bool branch_taken_0x1a629c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A62A0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
        if (branch_taken_0x1a629c) {
            ctx->pc = 0x1A6414u;
            goto label_1a6414;
        }
    }
    ctx->pc = 0x1A62A4u;
label_1a62a4:
    // 0x1a62a4: 0x3c02002b
    ctx->pc = 0x1a62a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1a62a8: 0x1019c0
    ctx->pc = 0x1a62a8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 7));
    // 0x1a62ac: 0x24420900
    ctx->pc = 0x1a62acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2304));
    // 0x1a62b0: 0x482d
    ctx->pc = 0x1a62b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a62b4: 0x434021
    ctx->pc = 0x1a62b4u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a62b8: 0x502d
    ctx->pc = 0x1a62b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a62bc: 0x24e20002
    ctx->pc = 0x1a62bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 2));
    // 0x1a62c0: 0x94440000
    ctx->pc = 0x1a62c0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a62c4: 0x3c030024
    ctx->pc = 0x1a62c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x1a62c8: 0x24631b10
    ctx->pc = 0x1a62c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 6928));
    // 0x1a62cc: 0xa10c0
    ctx->pc = 0x1a62ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 10), 3));
label_1a62d0:
    // 0x1a62d0: 0x1021021
    ctx->pc = 0x1a62d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1a62d4: 0x8c420000
    ctx->pc = 0x1a62d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a62d8: 0x821024
    ctx->pc = 0x1a62d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a62dc: 0x10400004
    ctx->pc = 0x1A62DCu;
    {
        const bool branch_taken_0x1a62dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A62E0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 10), 2));
        if (branch_taken_0x1a62dc) {
            ctx->pc = 0x1A62F0u;
            goto label_1a62f0;
        }
    }
    ctx->pc = 0x1A62E4u;
    // 0x1a62e4: 0x621021
    ctx->pc = 0x1a62e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a62e8: 0x8c420000
    ctx->pc = 0x1a62e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a62ec: 0x1224825
    ctx->pc = 0x1a62ecu;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_1a62f0:
    // 0x1a62f0: 0x254a0001
    ctx->pc = 0x1a62f0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x1a62f4: 0x29420010
    ctx->pc = 0x1a62f4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 16));
    // 0x1a62f8: 0x1440fff5
    ctx->pc = 0x1A62F8u;
    {
        const bool branch_taken_0x1a62f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A62FCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 10), 3));
        if (branch_taken_0x1a62f8) {
            ctx->pc = 0x1A62D0u;
            goto label_1a62d0;
        }
    }
    ctx->pc = 0x1A6300u;
    // 0x1a6300: 0x3c03002b
    ctx->pc = 0x1a6300u;
    SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
    // 0x1a6304: 0x3c02002b
    ctx->pc = 0x1a6304u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1a6308: 0x24630a38
    ctx->pc = 0x1a6308u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2616));
    // 0x1a630c: 0x24420a31
    ctx->pc = 0x1a630cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2609));
    // 0x1a6310: 0x651821
    ctx->pc = 0x1a6310u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a6314: 0x454021
    ctx->pc = 0x1a6314u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a6318: 0xac690000
    ctx->pc = 0x1a6318u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x1a631c: 0x91020000
    ctx->pc = 0x1a631cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a6320: 0x30420020
    ctx->pc = 0x1a6320u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x1a6324: 0x10400012
    ctx->pc = 0x1A6324u;
    {
        const bool branch_taken_0x1a6324 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A6328u;
        SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
        if (branch_taken_0x1a6324) {
            ctx->pc = 0x1A6370u;
            goto label_1a6370;
        }
    }
    ctx->pc = 0x1A632Cu;
    // 0x1a632c: 0x244209e6
    ctx->pc = 0x1a632cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2534));
    // 0x1a6330: 0x461021
    ctx->pc = 0x1a6330u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a6334: 0xc069824
    ctx->pc = 0x1A6334u;
    SET_GPR_U32(ctx, 31, 0x1A633Cu);
    ctx->pc = 0x1A6338u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1A6090u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6090_0x1a6090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A633Cu; }
    }
    if (ctx->pc != 0x1A633Cu) { return; }
    ctx->pc = 0x1A633Cu;
    // 0x1a633c: 0x3c04002b
    ctx->pc = 0x1a633cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a6340: 0x3c03002b
    ctx->pc = 0x1a6340u;
    SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
    // 0x1a6344: 0x24840a3c
    ctx->pc = 0x1a6344u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2620));
    // 0x1a6348: 0x246309e7
    ctx->pc = 0x1a6348u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2535));
    // 0x1a634c: 0x852021
    ctx->pc = 0x1a634cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a6350: 0x661821
    ctx->pc = 0x1a6350u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a6354: 0xa4820000
    ctx->pc = 0x1a6354u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a6358: 0xc069824
    ctx->pc = 0x1A6358u;
    SET_GPR_U32(ctx, 31, 0x1A6360u);
    ctx->pc = 0x1A635Cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x1A6090u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6090_0x1a6090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6360u; }
    }
    if (ctx->pc != 0x1A6360u) { return; }
    ctx->pc = 0x1A6360u;
    // 0x1a6360: 0x3c03002b
    ctx->pc = 0x1a6360u;
    SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
    // 0x1a6364: 0x24630a3e
    ctx->pc = 0x1a6364u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2622));
    // 0x1a6368: 0x651821
    ctx->pc = 0x1a6368u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a636c: 0xa4620000
    ctx->pc = 0x1a636cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_1a6370:
    // 0x1a6370: 0x91020000
    ctx->pc = 0x1a6370u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a6374: 0x30420040
    ctx->pc = 0x1a6374u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
    // 0x1a6378: 0x10400013
    ctx->pc = 0x1A6378u;
    {
        const bool branch_taken_0x1a6378 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a6378) {
            ctx->pc = 0x1A63C8u;
            goto label_1a63c8;
        }
    }
    ctx->pc = 0x1A6380u;
    // 0x1a6380: 0x3c02002b
    ctx->pc = 0x1a6380u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1a6384: 0x244209e4
    ctx->pc = 0x1a6384u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2532));
    // 0x1a6388: 0x461021
    ctx->pc = 0x1a6388u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a638c: 0xc069824
    ctx->pc = 0x1A638Cu;
    SET_GPR_U32(ctx, 31, 0x1A6394u);
    ctx->pc = 0x1A6390u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1A6090u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6090_0x1a6090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6394u; }
    }
    if (ctx->pc != 0x1A6394u) { return; }
    ctx->pc = 0x1A6394u;
    // 0x1a6394: 0x3c04002b
    ctx->pc = 0x1a6394u;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a6398: 0x3c03002b
    ctx->pc = 0x1a6398u;
    SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
    // 0x1a639c: 0x24840a48
    ctx->pc = 0x1a639cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2632));
    // 0x1a63a0: 0x246309e5
    ctx->pc = 0x1a63a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2533));
    // 0x1a63a4: 0x852021
    ctx->pc = 0x1a63a4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a63a8: 0x661821
    ctx->pc = 0x1a63a8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a63ac: 0xa4820000
    ctx->pc = 0x1a63acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a63b0: 0xc069824
    ctx->pc = 0x1A63B0u;
    SET_GPR_U32(ctx, 31, 0x1A63B8u);
    ctx->pc = 0x1A63B4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x1A6090u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6090_0x1a6090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A63B8u; }
    }
    if (ctx->pc != 0x1A63B8u) { return; }
    ctx->pc = 0x1A63B8u;
    // 0x1a63b8: 0x3c03002b
    ctx->pc = 0x1a63b8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
    // 0x1a63bc: 0x24630a4a
    ctx->pc = 0x1a63bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2634));
    // 0x1a63c0: 0x651821
    ctx->pc = 0x1a63c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a63c4: 0xa4620000
    ctx->pc = 0x1a63c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_1a63c8:
    // 0x1a63c8: 0x3c02002b
    ctx->pc = 0x1a63c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1a63cc: 0x24040008
    ctx->pc = 0x1a63ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a63d0: 0x244209c0
    ctx->pc = 0x1a63d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2496));
    // 0x1a63d4: 0x462821
    ctx->pc = 0x1a63d4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1a63d8:
    // 0x1a63d8: 0x84e30000
    ctx->pc = 0x1a63d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a63dc: 0x2484ffff
    ctx->pc = 0x1a63dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1a63e0: 0x84e20002
    ctx->pc = 0x1a63e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1a63e4: 0xa4a30000
    ctx->pc = 0x1a63e4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a63e8: 0x24e70004
    ctx->pc = 0x1a63e8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
    // 0x1a63ec: 0xa4a20002
    ctx->pc = 0x1a63ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a63f0: 0x1c80fff9
    ctx->pc = 0x1A63F0u;
    {
        const bool branch_taken_0x1a63f0 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1A63F4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
        if (branch_taken_0x1a63f0) {
            ctx->pc = 0x1A63D8u;
            goto label_1a63d8;
        }
    }
    ctx->pc = 0x1A63F8u;
    // 0x1a63f8: 0x3c02002b
    ctx->pc = 0x1a63f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1a63fc: 0x244209c2
    ctx->pc = 0x1a63fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2498));
    // 0x1a6400: 0x461821
    ctx->pc = 0x1a6400u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a6404: 0x94620000
    ctx->pc = 0x1a6404u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a6408: 0x401027
    ctx->pc = 0x1a6408u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
    // 0x1a640c: 0x10000014
    ctx->pc = 0x1A640Cu;
    {
        const bool branch_taken_0x1a640c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A6410u;
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1a640c) {
            ctx->pc = 0x1A6460u;
            goto label_1a6460;
        }
    }
    ctx->pc = 0x1A6414u;
label_1a6414:
    // 0x1a6414: 0x3c02002b
    ctx->pc = 0x1a6414u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1a6418: 0x24630a38
    ctx->pc = 0x1a6418u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2616));
    // 0x1a641c: 0x24420a3c
    ctx->pc = 0x1a641cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2620));
    // 0x1a6420: 0x652021
    ctx->pc = 0x1a6420u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a6424: 0x451821
    ctx->pc = 0x1a6424u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a6428: 0xac800000
    ctx->pc = 0x1a6428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1a642c: 0x3c02002b
    ctx->pc = 0x1a642cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1a6430: 0xa4600000
    ctx->pc = 0x1a6430u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a6434: 0x24420a3e
    ctx->pc = 0x1a6434u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2622));
    // 0x1a6438: 0x451021
    ctx->pc = 0x1a6438u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a643c: 0xa4400000
    ctx->pc = 0x1a643cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a6440: 0x3c02002b
    ctx->pc = 0x1a6440u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1a6444: 0x24420a48
    ctx->pc = 0x1a6444u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2632));
    // 0x1a6448: 0x451821
    ctx->pc = 0x1a6448u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a644c: 0x3c02002b
    ctx->pc = 0x1a644cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1a6450: 0xa4600000
    ctx->pc = 0x1a6450u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a6454: 0x24420a4a
    ctx->pc = 0x1a6454u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2634));
    // 0x1a6458: 0x451021
    ctx->pc = 0x1a6458u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a645c: 0xa4400000
    ctx->pc = 0x1a645cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
label_1a6460:
    // 0x1a6460: 0x24020001
    ctx->pc = 0x1a6460u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1a6464:
    // 0x1a6464: 0xdfbf0010
    ctx->pc = 0x1a6464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6468: 0x7bb00000
    ctx->pc = 0x1a6468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a646c: 0x3e00008
    ctx->pc = 0x1A646Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6470u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6178u: goto label_1a6178;
            case 0x1A6204u: goto label_1a6204;
            case 0x1A6238u: goto label_1a6238;
            case 0x1A62A4u: goto label_1a62a4;
            case 0x1A62D0u: goto label_1a62d0;
            case 0x1A62F0u: goto label_1a62f0;
            case 0x1A6370u: goto label_1a6370;
            case 0x1A63C8u: goto label_1a63c8;
            case 0x1A63D8u: goto label_1a63d8;
            case 0x1A6414u: goto label_1a6414;
            case 0x1A6460u: goto label_1a6460;
            case 0x1A6464u: goto label_1a6464;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A6474u;
    // 0x1a6474: 0x0
    ctx->pc = 0x1a6474u;
    // NOP
    // 0x1a6478: 0x0
    ctx->pc = 0x1a6478u;
    // NOP
    // 0x1a647c: 0x0
    ctx->pc = 0x1a647cu;
    // NOP
}
