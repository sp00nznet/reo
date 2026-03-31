#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00130108
// Address: 0x130108 - 0x130218
void sub_00130108_0x130108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x130108u;

label_130108:
    // 0x130108: 0x27bdffc0
    ctx->pc = 0x130108u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_13010c:
    // 0x13010c: 0xffb00000
    ctx->pc = 0x13010cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_130110:
    // 0x130110: 0xe0802d
    ctx->pc = 0x130110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_130114:
    // 0x130114: 0xffb10008
    ctx->pc = 0x130114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_130118:
    // 0x130118: 0xa0882d
    ctx->pc = 0x130118u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13011c:
    // 0x13011c: 0xffb20010
    ctx->pc = 0x13011cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_130120:
    // 0x130120: 0xc0902d
    ctx->pc = 0x130120u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_130124:
    // 0x130124: 0xffb30018
    ctx->pc = 0x130124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_130128:
    // 0x130128: 0x80982d
    ctx->pc = 0x130128u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13012c:
    // 0x13012c: 0xffb40020
    ctx->pc = 0x13012cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_130130:
    // 0x130130: 0x100a02d
    ctx->pc = 0x130130u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_130134:
    // 0x130134: 0xffb50028
    ctx->pc = 0x130134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_130138:
    // 0x130138: 0xffbf0030
    ctx->pc = 0x130138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_13013c:
    // 0x13013c: 0xc049938
label_130140:
    if (ctx->pc == 0x130140u) {
        ctx->pc = 0x130140u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x130144u;
        goto label_130144;
    }
    ctx->pc = 0x13013Cu;
    SET_GPR_U32(ctx, 31, 0x130144u);
    ctx->pc = 0x130140u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1264E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001264E0_0x1264e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130144u; }
    }
    if (ctx->pc != 0x130144u) { return; }
    ctx->pc = 0x130144u;
label_130144:
    // 0x130144: 0x260707ff
    ctx->pc = 0x130144u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 2047));
label_130148:
    // 0x130148: 0x2a030000
    ctx->pc = 0x130148u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 0));
label_13014c:
    // 0x13014c: 0x200102d
    ctx->pc = 0x13014cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_130150:
    // 0x130150: 0x3c06000f
    ctx->pc = 0x130150u;
    SET_GPR_U32(ctx, 6, ((uint32_t)15 << 16));
label_130154:
    // 0x130154: 0xe3100b
    ctx->pc = 0x130154u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 7));
label_130158:
    // 0x130158: 0x24070200
    ctx->pc = 0x130158u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 512));
label_13015c:
    // 0x13015c: 0x212c3
    ctx->pc = 0x13015cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_130160:
    // 0x130160: 0x34c6ffff
    ctx->pc = 0x130160u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
label_130164:
    // 0x130164: 0x21ac0
    ctx->pc = 0x130164u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 11));
label_130168:
    // 0x130168: 0x280202d
    ctx->pc = 0x130168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13016c:
    // 0x13016c: 0x2031823
    ctx->pc = 0x13016cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_130170:
    // 0x130170: 0x282d
    ctx->pc = 0x130170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_130174:
    // 0x130174: 0x24480001
    ctx->pc = 0x130174u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 1));
label_130178:
    // 0x130178: 0xae710008
    ctx->pc = 0x130178u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
label_13017c:
    // 0x13017c: 0xae72000c
    ctx->pc = 0x13017cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 18));
label_130180:
    // 0x130180: 0xae670028
    ctx->pc = 0x130180u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 7));
label_130184:
    // 0x130184: 0xae660058
    ctx->pc = 0x130184u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 6));
label_130188:
    // 0x130188: 0xa2750001
    ctx->pc = 0x130188u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 21));
label_13018c:
    // 0x13018c: 0xa2600002
    ctx->pc = 0x13018cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
label_130190:
    // 0x130190: 0xae740004
    ctx->pc = 0x130190u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
label_130194:
    // 0x130194: 0xae62002c
    ctx->pc = 0x130194u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
label_130198:
    // 0x130198: 0xae700010
    ctx->pc = 0x130198u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 16));
label_13019c:
    // 0x13019c: 0x18600002
label_1301a0:
    if (ctx->pc == 0x1301A0u) {
        ctx->pc = 0x1301A0u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 0));
        ctx->pc = 0x1301A4u;
        goto label_1301a4;
    }
    ctx->pc = 0x13019Cu;
    {
        const bool branch_taken_0x13019c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1301A0u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 0));
        if (branch_taken_0x13019c) {
            ctx->pc = 0x1301A8u;
            goto label_1301a8;
        }
    }
    ctx->pc = 0x1301A4u;
label_1301a4:
    // 0x1301a4: 0xae68002c
    ctx->pc = 0x1301a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 8));
label_1301a8:
    // 0x1301a8: 0x8e620004
    ctx->pc = 0x1301a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1301ac:
    // 0x1301ac: 0x50400010
label_1301b0:
    if (ctx->pc == 0x1301B0u) {
        ctx->pc = 0x1301B0u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 21));
        ctx->pc = 0x1301B4u;
        goto label_1301b4;
    }
    ctx->pc = 0x1301ACu;
    {
        const bool branch_taken_0x1301ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1301ac) {
            ctx->pc = 0x1301B0u;
            WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 21));
            ctx->pc = 0x1301F0u;
            goto label_1301f0;
        }
    }
    ctx->pc = 0x1301B4u;
label_1301b4:
    // 0x1301b4: 0x8e830000
    ctx->pc = 0x1301b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1301b8:
    // 0x1301b8: 0x8c620024
    ctx->pc = 0x1301b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1301bc:
    // 0x1301bc: 0x40f809
label_1301c0:
    if (ctx->pc == 0x1301C0u) {
        ctx->pc = 0x1301C4u;
        goto label_1301c4;
    }
    ctx->pc = 0x1301BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1301C4u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130108u: goto label_130108;
            case 0x13010Cu: goto label_13010c;
            case 0x130110u: goto label_130110;
            case 0x130114u: goto label_130114;
            case 0x130118u: goto label_130118;
            case 0x13011Cu: goto label_13011c;
            case 0x130120u: goto label_130120;
            case 0x130124u: goto label_130124;
            case 0x130128u: goto label_130128;
            case 0x13012Cu: goto label_13012c;
            case 0x130130u: goto label_130130;
            case 0x130134u: goto label_130134;
            case 0x130138u: goto label_130138;
            case 0x13013Cu: goto label_13013c;
            case 0x130140u: goto label_130140;
            case 0x130144u: goto label_130144;
            case 0x130148u: goto label_130148;
            case 0x13014Cu: goto label_13014c;
            case 0x130150u: goto label_130150;
            case 0x130154u: goto label_130154;
            case 0x130158u: goto label_130158;
            case 0x13015Cu: goto label_13015c;
            case 0x130160u: goto label_130160;
            case 0x130164u: goto label_130164;
            case 0x130168u: goto label_130168;
            case 0x13016Cu: goto label_13016c;
            case 0x130170u: goto label_130170;
            case 0x130174u: goto label_130174;
            case 0x130178u: goto label_130178;
            case 0x13017Cu: goto label_13017c;
            case 0x130180u: goto label_130180;
            case 0x130184u: goto label_130184;
            case 0x130188u: goto label_130188;
            case 0x13018Cu: goto label_13018c;
            case 0x130190u: goto label_130190;
            case 0x130194u: goto label_130194;
            case 0x130198u: goto label_130198;
            case 0x13019Cu: goto label_13019c;
            case 0x1301A0u: goto label_1301a0;
            case 0x1301A4u: goto label_1301a4;
            case 0x1301A8u: goto label_1301a8;
            case 0x1301ACu: goto label_1301ac;
            case 0x1301B0u: goto label_1301b0;
            case 0x1301B4u: goto label_1301b4;
            case 0x1301B8u: goto label_1301b8;
            case 0x1301BCu: goto label_1301bc;
            case 0x1301C0u: goto label_1301c0;
            case 0x1301C4u: goto label_1301c4;
            case 0x1301C8u: goto label_1301c8;
            case 0x1301CCu: goto label_1301cc;
            case 0x1301D0u: goto label_1301d0;
            case 0x1301D4u: goto label_1301d4;
            case 0x1301D8u: goto label_1301d8;
            case 0x1301DCu: goto label_1301dc;
            case 0x1301E0u: goto label_1301e0;
            case 0x1301E4u: goto label_1301e4;
            case 0x1301E8u: goto label_1301e8;
            case 0x1301ECu: goto label_1301ec;
            case 0x1301F0u: goto label_1301f0;
            case 0x1301F4u: goto label_1301f4;
            case 0x1301F8u: goto label_1301f8;
            case 0x1301FCu: goto label_1301fc;
            case 0x130200u: goto label_130200;
            case 0x130204u: goto label_130204;
            case 0x130208u: goto label_130208;
            case 0x13020Cu: goto label_13020c;
            case 0x130210u: goto label_130210;
            case 0x130214u: goto label_130214;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1301C4u; }
            if (ctx->pc != 0x1301C4u) { return; }
        }
    }
    ctx->pc = 0x1301C4u;
label_1301c4:
    // 0x1301c4: 0x8e830000
    ctx->pc = 0x1301c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1301c8:
    // 0x1301c8: 0x40802d
    ctx->pc = 0x1301c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1301cc:
    // 0x1301cc: 0x280202d
    ctx->pc = 0x1301ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1301d0:
    // 0x1301d0: 0x8c620024
    ctx->pc = 0x1301d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1301d4:
    // 0x1301d4: 0x40f809
label_1301d8:
    if (ctx->pc == 0x1301D8u) {
        ctx->pc = 0x1301D8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1301DCu;
        goto label_1301dc;
    }
    ctx->pc = 0x1301D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1301DCu);
        ctx->pc = 0x1301D8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130108u: goto label_130108;
            case 0x13010Cu: goto label_13010c;
            case 0x130110u: goto label_130110;
            case 0x130114u: goto label_130114;
            case 0x130118u: goto label_130118;
            case 0x13011Cu: goto label_13011c;
            case 0x130120u: goto label_130120;
            case 0x130124u: goto label_130124;
            case 0x130128u: goto label_130128;
            case 0x13012Cu: goto label_13012c;
            case 0x130130u: goto label_130130;
            case 0x130134u: goto label_130134;
            case 0x130138u: goto label_130138;
            case 0x13013Cu: goto label_13013c;
            case 0x130140u: goto label_130140;
            case 0x130144u: goto label_130144;
            case 0x130148u: goto label_130148;
            case 0x13014Cu: goto label_13014c;
            case 0x130150u: goto label_130150;
            case 0x130154u: goto label_130154;
            case 0x130158u: goto label_130158;
            case 0x13015Cu: goto label_13015c;
            case 0x130160u: goto label_130160;
            case 0x130164u: goto label_130164;
            case 0x130168u: goto label_130168;
            case 0x13016Cu: goto label_13016c;
            case 0x130170u: goto label_130170;
            case 0x130174u: goto label_130174;
            case 0x130178u: goto label_130178;
            case 0x13017Cu: goto label_13017c;
            case 0x130180u: goto label_130180;
            case 0x130184u: goto label_130184;
            case 0x130188u: goto label_130188;
            case 0x13018Cu: goto label_13018c;
            case 0x130190u: goto label_130190;
            case 0x130194u: goto label_130194;
            case 0x130198u: goto label_130198;
            case 0x13019Cu: goto label_13019c;
            case 0x1301A0u: goto label_1301a0;
            case 0x1301A4u: goto label_1301a4;
            case 0x1301A8u: goto label_1301a8;
            case 0x1301ACu: goto label_1301ac;
            case 0x1301B0u: goto label_1301b0;
            case 0x1301B4u: goto label_1301b4;
            case 0x1301B8u: goto label_1301b8;
            case 0x1301BCu: goto label_1301bc;
            case 0x1301C0u: goto label_1301c0;
            case 0x1301C4u: goto label_1301c4;
            case 0x1301C8u: goto label_1301c8;
            case 0x1301CCu: goto label_1301cc;
            case 0x1301D0u: goto label_1301d0;
            case 0x1301D4u: goto label_1301d4;
            case 0x1301D8u: goto label_1301d8;
            case 0x1301DCu: goto label_1301dc;
            case 0x1301E0u: goto label_1301e0;
            case 0x1301E4u: goto label_1301e4;
            case 0x1301E8u: goto label_1301e8;
            case 0x1301ECu: goto label_1301ec;
            case 0x1301F0u: goto label_1301f0;
            case 0x1301F4u: goto label_1301f4;
            case 0x1301F8u: goto label_1301f8;
            case 0x1301FCu: goto label_1301fc;
            case 0x130200u: goto label_130200;
            case 0x130204u: goto label_130204;
            case 0x130208u: goto label_130208;
            case 0x13020Cu: goto label_13020c;
            case 0x130210u: goto label_130210;
            case 0x130214u: goto label_130214;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1301DCu; }
            if (ctx->pc != 0x1301DCu) { return; }
        }
    }
    ctx->pc = 0x1301DCu;
label_1301dc:
    // 0x1301dc: 0x2028021
    ctx->pc = 0x1301dcu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1301e0:
    // 0x1301e0: 0xae700018
    ctx->pc = 0x1301e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 16));
label_1301e4:
    // 0x1301e4: 0xae70003c
    ctx->pc = 0x1301e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 16));
label_1301e8:
    // 0x1301e8: 0xae700014
    ctx->pc = 0x1301e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 16));
label_1301ec:
    // 0x1301ec: 0xa2750000
    ctx->pc = 0x1301ecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 21));
label_1301f0:
    // 0x1301f0: 0xa2600040
    ctx->pc = 0x1301f0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 64), (uint8_t)GPR_U32(ctx, 0));
label_1301f4:
    // 0x1301f4: 0xdfb00000
    ctx->pc = 0x1301f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1301f8:
    // 0x1301f8: 0xdfb10008
    ctx->pc = 0x1301f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1301fc:
    // 0x1301fc: 0xdfb20010
    ctx->pc = 0x1301fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_130200:
    // 0x130200: 0xdfb30018
    ctx->pc = 0x130200u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_130204:
    // 0x130204: 0xdfb40020
    ctx->pc = 0x130204u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_130208:
    // 0x130208: 0xdfb50028
    ctx->pc = 0x130208u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_13020c:
    // 0x13020c: 0xdfbf0030
    ctx->pc = 0x13020cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_130210:
    // 0x130210: 0x804993e
label_130214:
    if (ctx->pc == 0x130214u) {
        ctx->pc = 0x130214u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x130218u;
        goto label_fallthrough_0x130210;
    }
    ctx->pc = 0x130210u;
    ctx->pc = 0x130214u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1264F8u;
    sub_001264F8_0x1264f8(rdram, ctx, runtime); return;
label_fallthrough_0x130210:
    ctx->pc = 0x130218u;
}
