#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017B010
// Address: 0x17b010 - 0x17b530
void sub_0017B010_0x17b010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17b010u;

    // 0x17b010: 0x27bdffd0
    ctx->pc = 0x17b010u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17b014: 0xffb00000
    ctx->pc = 0x17b014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b018: 0xa0802d
    ctx->pc = 0x17b018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b01c: 0xffb10008
    ctx->pc = 0x17b01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17b020: 0x80882d
    ctx->pc = 0x17b020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b024: 0xffb20010
    ctx->pc = 0x17b024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17b028: 0xe0282d
    ctx->pc = 0x17b028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b02c: 0xffb30018
    ctx->pc = 0x17b02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17b030: 0xc0982d
    ctx->pc = 0x17b030u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b034: 0xffbf0020
    ctx->pc = 0x17b034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17b038: 0x200202d
    ctx->pc = 0x17b038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b03c: 0xae090044
    ctx->pc = 0x17b03cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 9));
    // 0x17b040: 0x100302d
    ctx->pc = 0x17b040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b044: 0xc05f550
    ctx->pc = 0x17B044u;
    SET_GPR_U32(ctx, 31, 0x17B04Cu);
    ctx->pc = 0x17B048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 10));
    ctx->pc = 0x17D540u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D540_0x17d540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B04Cu; }
    }
    if (ctx->pc != 0x17B04Cu) { return; }
    ctx->pc = 0x17B04Cu;
    // 0x17b04c: 0xc05f494
    ctx->pc = 0x17B04Cu;
    SET_GPR_U32(ctx, 31, 0x17B054u);
    ctx->pc = 0x17B050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17D250u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D250_0x17d250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B054u; }
    }
    if (ctx->pc != 0x17B054u) { return; }
    ctx->pc = 0x17B054u;
    // 0x17b054: 0x220202d
    ctx->pc = 0x17b054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b058: 0x24050011
    ctx->pc = 0x17b058u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 17));
    // 0x17b05c: 0xc05f492
    ctx->pc = 0x17B05Cu;
    SET_GPR_U32(ctx, 31, 0x17B064u);
    ctx->pc = 0x17B060u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17D248u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D248_0x17d248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B064u; }
    }
    if (ctx->pc != 0x17B064u) { return; }
    ctx->pc = 0x17B064u;
    // 0x17b064: 0x220202d
    ctx->pc = 0x17b064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b068: 0x200282d
    ctx->pc = 0x17b068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b06c: 0xc05ea46
    ctx->pc = 0x17B06Cu;
    SET_GPR_U32(ctx, 31, 0x17B074u);
    ctx->pc = 0x17B070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17A918u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A918_0x17a918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B074u; }
    }
    if (ctx->pc != 0x17B074u) { return; }
    ctx->pc = 0x17B074u;
    // 0x17b074: 0x220202d
    ctx->pc = 0x17b074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b078: 0x240282d
    ctx->pc = 0x17b078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b07c: 0xdfb20010
    ctx->pc = 0x17b07cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b080: 0xdfb00000
    ctx->pc = 0x17b080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b084: 0xdfb10008
    ctx->pc = 0x17b084u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b088: 0xdfb30018
    ctx->pc = 0x17b088u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17b08c: 0xdfbf0020
    ctx->pc = 0x17b08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b090: 0x805f492
    ctx->pc = 0x17B090u;
    ctx->pc = 0x17B094u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x17D248u;
    sub_0017D248_0x17d248(rdram, ctx, runtime); return;
    ctx->pc = 0x17B098u;
    // 0x17b098: 0x27bdffe0
    ctx->pc = 0x17b098u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b09c: 0x24020041
    ctx->pc = 0x17b09cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 65));
    // 0x17b0a0: 0xffb00000
    ctx->pc = 0x17b0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b0a4: 0x80802d
    ctx->pc = 0x17b0a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b0a8: 0xffb10008
    ctx->pc = 0x17b0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17b0ac: 0xa0882d
    ctx->pc = 0x17b0acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b0b0: 0xffb20010
    ctx->pc = 0x17b0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17b0b4: 0xffbf0018
    ctx->pc = 0x17b0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17b0b8: 0x8e030004
    ctx->pc = 0x17b0b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17b0bc: 0x10620050
    ctx->pc = 0x17B0BCu;
    {
        const bool branch_taken_0x17b0bc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x17B0C0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17b0bc) {
            ctx->pc = 0x17B200u;
            goto label_17b200;
        }
    }
    ctx->pc = 0x17B0C4u;
    // 0x17b0c4: 0x28620042
    ctx->pc = 0x17b0c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 66));
    // 0x17b0c8: 0x1040000f
    ctx->pc = 0x17B0C8u;
    {
        const bool branch_taken_0x17b0c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17B0CCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 257));
        if (branch_taken_0x17b0c8) {
            ctx->pc = 0x17B108u;
            goto label_17b108;
        }
    }
    ctx->pc = 0x17B0D0u;
    // 0x17b0d0: 0x24020021
    ctx->pc = 0x17b0d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 33));
    // 0x17b0d4: 0x10620056
    ctx->pc = 0x17B0D4u;
    {
        const bool branch_taken_0x17b0d4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x17B0D8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 34));
        if (branch_taken_0x17b0d4) {
            ctx->pc = 0x17B230u;
            goto label_17b230;
        }
    }
    ctx->pc = 0x17B0DCu;
    // 0x17b0dc: 0x10400006
    ctx->pc = 0x17B0DCu;
    {
        const bool branch_taken_0x17b0dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17B0E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 49));
        if (branch_taken_0x17b0dc) {
            ctx->pc = 0x17B0F8u;
            goto label_17b0f8;
        }
    }
    ctx->pc = 0x17B0E4u;
    // 0x17b0e4: 0x24020011
    ctx->pc = 0x17b0e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 17));
    // 0x17b0e8: 0x10620011
    ctx->pc = 0x17B0E8u;
    {
        const bool branch_taken_0x17b0e8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x17b0e8) {
            ctx->pc = 0x17B130u;
            goto label_17b130;
        }
    }
    ctx->pc = 0x17B0F0u;
    // 0x17b0f0: 0x1000005c
    ctx->pc = 0x17B0F0u;
    {
        const bool branch_taken_0x17b0f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17B0F4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17b0f0) {
            ctx->pc = 0x17B264u;
            goto label_17b264;
        }
    }
    ctx->pc = 0x17B0F8u;
label_17b0f8:
    // 0x17b0f8: 0x10620035
    ctx->pc = 0x17B0F8u;
    {
        const bool branch_taken_0x17b0f8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x17b0f8) {
            ctx->pc = 0x17B1D0u;
            goto label_17b1d0;
        }
    }
    ctx->pc = 0x17B100u;
    // 0x17b100: 0x10000058
    ctx->pc = 0x17B100u;
    {
        const bool branch_taken_0x17b100 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17B104u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17b100) {
            ctx->pc = 0x17B264u;
            goto label_17b264;
        }
    }
    ctx->pc = 0x17B108u;
label_17b108:
    // 0x17b108: 0x10620055
    ctx->pc = 0x17B108u;
    {
        const bool branch_taken_0x17b108 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x17B10Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 258));
        if (branch_taken_0x17b108) {
            ctx->pc = 0x17B260u;
            goto label_17b260;
        }
    }
    ctx->pc = 0x17B110u;
    // 0x17b110: 0x54400054
    ctx->pc = 0x17B110u;
    {
        const bool branch_taken_0x17b110 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17b110) {
            ctx->pc = 0x17B114u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x17B264u;
            goto label_17b264;
        }
    }
    ctx->pc = 0x17B118u;
    // 0x17b118: 0x24021001
    ctx->pc = 0x17b118u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4097));
    // 0x17b11c: 0x10620020
    ctx->pc = 0x17B11Cu;
    {
        const bool branch_taken_0x17b11c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x17b11c) {
            ctx->pc = 0x17B1A0u;
            goto label_17b1a0;
        }
    }
    ctx->pc = 0x17B124u;
    // 0x17b124: 0x1000004f
    ctx->pc = 0x17B124u;
    {
        const bool branch_taken_0x17b124 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17B128u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17b124) {
            ctx->pc = 0x17B264u;
            goto label_17b264;
        }
    }
    ctx->pc = 0x17B12Cu;
    // 0x17b12c: 0x0
    ctx->pc = 0x17b12cu;
    // NOP
label_17b130:
    // 0x17b130: 0xc05f51a
    ctx->pc = 0x17B130u;
    SET_GPR_U32(ctx, 31, 0x17B138u);
    ctx->pc = 0x17D468u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D468_0x17d468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B138u; }
    }
    if (ctx->pc != 0x17B138u) { return; }
    ctx->pc = 0x17B138u;
    // 0x17b138: 0x24030001
    ctx->pc = 0x17b138u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b13c: 0x1043000a
    ctx->pc = 0x17B13Cu;
    {
        const bool branch_taken_0x17b13c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x17B140u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17b13c) {
            ctx->pc = 0x17B168u;
            goto label_17b168;
        }
    }
    ctx->pc = 0x17B144u;
    // 0x17b144: 0xdfb00000
    ctx->pc = 0x17b144u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b148: 0x220282d
    ctx->pc = 0x17b148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b14c: 0xdfb10008
    ctx->pc = 0x17b14cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b150: 0x240302d
    ctx->pc = 0x17b150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b154: 0xdfb20010
    ctx->pc = 0x17b154u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b158: 0xdfbf0018
    ctx->pc = 0x17b158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17b15c: 0x382d
    ctx->pc = 0x17b15cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b160: 0x805eca2
    ctx->pc = 0x17B160u;
    ctx->pc = 0x17B164u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17B288u;
    goto label_17b288;
    ctx->pc = 0x17B168u;
label_17b168:
    // 0x17b168: 0x220282d
    ctx->pc = 0x17b168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b16c: 0xc05f164
    ctx->pc = 0x17B16Cu;
    SET_GPR_U32(ctx, 31, 0x17B174u);
    ctx->pc = 0x17B170u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 21));
    ctx->pc = 0x17C590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C590_0x17c590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B174u; }
    }
    if (ctx->pc != 0x17B174u) { return; }
    ctx->pc = 0x17B174u;
    // 0x17b174: 0x200202d
    ctx->pc = 0x17b174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b178: 0x220282d
    ctx->pc = 0x17b178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b17c: 0xdfb10008
    ctx->pc = 0x17b17cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b180: 0x240302d
    ctx->pc = 0x17b180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b184: 0xdfb20010
    ctx->pc = 0x17b184u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b188: 0xdfb00000
    ctx->pc = 0x17b188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b18c: 0x24070001
    ctx->pc = 0x17b18cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b190: 0xdfbf0018
    ctx->pc = 0x17b190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17b194: 0x805eca2
    ctx->pc = 0x17B194u;
    ctx->pc = 0x17B198u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17B288u;
    goto label_17b288;
    ctx->pc = 0x17B19Cu;
    // 0x17b19c: 0x0
    ctx->pc = 0x17b19cu;
    // NOP
label_17b1a0:
    // 0x17b1a0: 0xc05f164
    ctx->pc = 0x17B1A0u;
    SET_GPR_U32(ctx, 31, 0x17B1A8u);
    ctx->pc = 0x17B1A4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 21));
    ctx->pc = 0x17C590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C590_0x17c590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B1A8u; }
    }
    if (ctx->pc != 0x17B1A8u) { return; }
    ctx->pc = 0x17B1A8u;
    // 0x17b1a8: 0x200202d
    ctx->pc = 0x17b1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b1ac: 0x220282d
    ctx->pc = 0x17b1acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b1b0: 0xdfb10008
    ctx->pc = 0x17b1b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b1b4: 0x240302d
    ctx->pc = 0x17b1b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b1b8: 0xdfb20010
    ctx->pc = 0x17b1b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b1bc: 0xdfb00000
    ctx->pc = 0x17b1bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b1c0: 0x24070001
    ctx->pc = 0x17b1c0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b1c4: 0xdfbf0018
    ctx->pc = 0x17b1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17b1c8: 0x805eca2
    ctx->pc = 0x17B1C8u;
    ctx->pc = 0x17B1CCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17B288u;
    goto label_17b288;
    ctx->pc = 0x17B1D0u;
label_17b1d0:
    // 0x17b1d0: 0xc05f164
    ctx->pc = 0x17B1D0u;
    SET_GPR_U32(ctx, 31, 0x17B1D8u);
    ctx->pc = 0x17B1D4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x17C590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C590_0x17c590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B1D8u; }
    }
    if (ctx->pc != 0x17B1D8u) { return; }
    ctx->pc = 0x17B1D8u;
    // 0x17b1d8: 0x200202d
    ctx->pc = 0x17b1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b1dc: 0x220282d
    ctx->pc = 0x17b1dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b1e0: 0xdfb10008
    ctx->pc = 0x17b1e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b1e4: 0x240302d
    ctx->pc = 0x17b1e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b1e8: 0xdfb20010
    ctx->pc = 0x17b1e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b1ec: 0xdfb00000
    ctx->pc = 0x17b1ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b1f0: 0x24070001
    ctx->pc = 0x17b1f0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b1f4: 0xdfbf0018
    ctx->pc = 0x17b1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17b1f8: 0x805eca2
    ctx->pc = 0x17B1F8u;
    ctx->pc = 0x17B1FCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17B288u;
    goto label_17b288;
    ctx->pc = 0x17B200u;
label_17b200:
    // 0x17b200: 0xc05f164
    ctx->pc = 0x17B200u;
    SET_GPR_U32(ctx, 31, 0x17B208u);
    ctx->pc = 0x17B204u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x17C590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C590_0x17c590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B208u; }
    }
    if (ctx->pc != 0x17B208u) { return; }
    ctx->pc = 0x17B208u;
    // 0x17b208: 0x200202d
    ctx->pc = 0x17b208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b20c: 0x220282d
    ctx->pc = 0x17b20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b210: 0xdfb10008
    ctx->pc = 0x17b210u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b214: 0x240302d
    ctx->pc = 0x17b214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b218: 0xdfb20010
    ctx->pc = 0x17b218u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b21c: 0xdfb00000
    ctx->pc = 0x17b21cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b220: 0x24070001
    ctx->pc = 0x17b220u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b224: 0xdfbf0018
    ctx->pc = 0x17b224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17b228: 0x805eca2
    ctx->pc = 0x17B228u;
    ctx->pc = 0x17B22Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17B288u;
    goto label_17b288;
    ctx->pc = 0x17B230u;
label_17b230:
    // 0x17b230: 0xc05f164
    ctx->pc = 0x17B230u;
    SET_GPR_U32(ctx, 31, 0x17B238u);
    ctx->pc = 0x17B234u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x17C590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C590_0x17c590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B238u; }
    }
    if (ctx->pc != 0x17B238u) { return; }
    ctx->pc = 0x17B238u;
    // 0x17b238: 0x200202d
    ctx->pc = 0x17b238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b23c: 0x220282d
    ctx->pc = 0x17b23cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b240: 0xdfb10008
    ctx->pc = 0x17b240u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b244: 0x240302d
    ctx->pc = 0x17b244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b248: 0xdfb20010
    ctx->pc = 0x17b248u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b24c: 0xdfb00000
    ctx->pc = 0x17b24cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b250: 0xdfbf0018
    ctx->pc = 0x17b250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17b254: 0x805ecd8
    ctx->pc = 0x17B254u;
    ctx->pc = 0x17B258u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17B360u;
    goto label_17b360;
    ctx->pc = 0x17B25Cu;
    // 0x17b25c: 0x0
    ctx->pc = 0x17b25cu;
    // NOP
label_17b260:
    // 0x17b260: 0x200202d
    ctx->pc = 0x17b260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17b264:
    // 0x17b264: 0xdfb00000
    ctx->pc = 0x17b264u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b268: 0x220282d
    ctx->pc = 0x17b268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b26c: 0xdfb10008
    ctx->pc = 0x17b26cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b270: 0x3c060024
    ctx->pc = 0x17b270u;
    SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
    // 0x17b274: 0xdfb20010
    ctx->pc = 0x17b274u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b278: 0xdfbf0018
    ctx->pc = 0x17b278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17b27c: 0x24c60e70
    ctx->pc = 0x17b27cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3696));
    // 0x17b280: 0x805f472
    ctx->pc = 0x17B280u;
    ctx->pc = 0x17B284u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17D1C8u;
    sub_0017D1C8_0x17d1c8(rdram, ctx, runtime); return;
    ctx->pc = 0x17B288u;
label_17b288:
    // 0x17b288: 0x27bdffa0
    ctx->pc = 0x17b288u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17b28c: 0xffb00030
    ctx->pc = 0x17b28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x17b290: 0xa0802d
    ctx->pc = 0x17b290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b294: 0xffb10038
    ctx->pc = 0x17b294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x17b298: 0x26110004
    ctx->pc = 0x17b298u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 4));
    // 0x17b29c: 0xffb20040
    ctx->pc = 0x17b29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x17b2a0: 0x80902d
    ctx->pc = 0x17b2a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b2a4: 0xffb30048
    ctx->pc = 0x17b2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x17b2a8: 0xe0982d
    ctx->pc = 0x17b2a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b2ac: 0xffbf0050
    ctx->pc = 0x17b2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x17b2b0: 0xafa60010
    ctx->pc = 0x17b2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x17b2b4: 0x8e050044
    ctx->pc = 0x17b2b4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x17b2b8: 0x8e020048
    ctx->pc = 0x17b2b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x17b2bc: 0x8e230000
    ctx->pc = 0x17b2bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17b2c0: 0xafa50014
    ctx->pc = 0x17b2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x17b2c4: 0xafa30000
    ctx->pc = 0x17b2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x17b2c8: 0xafa50004
    ctx->pc = 0x17b2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x17b2cc: 0xc05eb6a
    ctx->pc = 0x17B2CCu;
    SET_GPR_U32(ctx, 31, 0x17B2D4u);
    ctx->pc = 0x17B2D0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x17ADA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017ADA8_0x17ada8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B2D4u; }
    }
    if (ctx->pc != 0x17B2D4u) { return; }
    ctx->pc = 0x17B2D4u;
    // 0x17b2d4: 0x24030001
    ctx->pc = 0x17b2d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b2d8: 0x3a0202d
    ctx->pc = 0x17b2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b2dc: 0x27a50010
    ctx->pc = 0x17b2dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    // 0x17b2e0: 0x14430007
    ctx->pc = 0x17B2E0u;
    {
        const bool branch_taken_0x17b2e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x17B2E4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x17b2e0) {
            ctx->pc = 0x17B300u;
            goto label_17b300;
        }
    }
    ctx->pc = 0x17B2E8u;
    // 0x17b2e8: 0x8e020048
    ctx->pc = 0x17b2e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x17b2ec: 0x21fc2
    ctx->pc = 0x17b2ecu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x17b2f0: 0x431021
    ctx->pc = 0x17b2f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17b2f4: 0x10000003
    ctx->pc = 0x17B2F4u;
    {
        const bool branch_taken_0x17b2f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17B2F8u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        if (branch_taken_0x17b2f4) {
            ctx->pc = 0x17B304u;
            goto label_17b304;
        }
    }
    ctx->pc = 0x17B2FCu;
    // 0x17b2fc: 0x0
    ctx->pc = 0x17b2fcu;
    // NOP
label_17b300:
    // 0x17b300: 0x8e020048
    ctx->pc = 0x17b300u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_17b304:
    // 0x17b304: 0xafa20018
    ctx->pc = 0x17b304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x17b308: 0x8e420008
    ctx->pc = 0x17b308u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x17b30c: 0x14400003
    ctx->pc = 0x17B30Cu;
    {
        const bool branch_taken_0x17b30c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17b30c) {
            ctx->pc = 0x17B31Cu;
            goto label_17b31c;
        }
    }
    ctx->pc = 0x17B314u;
    // 0x17b314: 0x8e220004
    ctx->pc = 0x17b314u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17b318: 0x21080
    ctx->pc = 0x17b318u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_17b31c:
    // 0x17b31c: 0x16660006
    ctx->pc = 0x17B31Cu;
    {
        const bool branch_taken_0x17b31c = (GPR_U32(ctx, 19) != GPR_U32(ctx, 6));
        ctx->pc = 0x17B320u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        if (branch_taken_0x17b31c) {
            ctx->pc = 0x17B338u;
            goto label_17b338;
        }
    }
    ctx->pc = 0x17B324u;
    // 0x17b324: 0xc053dfa
    ctx->pc = 0x17B324u;
    SET_GPR_U32(ctx, 31, 0x17B32Cu);
    ctx->pc = 0x17B328u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 60)));
    ctx->pc = 0x14F7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0014F7E8_0x14f7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B32Cu; }
    }
    if (ctx->pc != 0x17B32Cu) { return; }
    ctx->pc = 0x17B32Cu;
    // 0x17b32c: 0x10000006
    ctx->pc = 0x17B32Cu;
    {
        const bool branch_taken_0x17b32c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17B330u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x17b32c) {
            ctx->pc = 0x17B348u;
            goto label_17b348;
        }
    }
    ctx->pc = 0x17B334u;
    // 0x17b334: 0x0
    ctx->pc = 0x17b334u;
    // NOP
label_17b338:
    // 0x17b338: 0x3a0202d
    ctx->pc = 0x17b338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b33c: 0xc053df2
    ctx->pc = 0x17B33Cu;
    SET_GPR_U32(ctx, 31, 0x17B344u);
    ctx->pc = 0x17B340u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x14F7C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0014F7C8_0x14f7c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B344u; }
    }
    if (ctx->pc != 0x17B344u) { return; }
    ctx->pc = 0x17B344u;
    // 0x17b344: 0xdfb00030
    ctx->pc = 0x17b344u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17b348:
    // 0x17b348: 0xdfb10038
    ctx->pc = 0x17b348u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17b34c: 0xdfb20040
    ctx->pc = 0x17b34cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17b350: 0xdfb30048
    ctx->pc = 0x17b350u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17b354: 0xdfbf0050
    ctx->pc = 0x17b354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17b358: 0x3e00008
    ctx->pc = 0x17B358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B35Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B0F8u: goto label_17b0f8;
            case 0x17B108u: goto label_17b108;
            case 0x17B130u: goto label_17b130;
            case 0x17B168u: goto label_17b168;
            case 0x17B1A0u: goto label_17b1a0;
            case 0x17B1D0u: goto label_17b1d0;
            case 0x17B200u: goto label_17b200;
            case 0x17B230u: goto label_17b230;
            case 0x17B260u: goto label_17b260;
            case 0x17B264u: goto label_17b264;
            case 0x17B288u: goto label_17b288;
            case 0x17B300u: goto label_17b300;
            case 0x17B304u: goto label_17b304;
            case 0x17B31Cu: goto label_17b31c;
            case 0x17B338u: goto label_17b338;
            case 0x17B348u: goto label_17b348;
            case 0x17B360u: goto label_17b360;
            case 0x17B3D8u: goto label_17b3d8;
            case 0x17B3DCu: goto label_17b3dc;
            case 0x17B430u: goto label_17b430;
            case 0x17B434u: goto label_17b434;
            case 0x17B4B0u: goto label_17b4b0;
            case 0x17B4C0u: goto label_17b4c0;
            case 0x17B4C4u: goto label_17b4c4;
            case 0x17B4C8u: goto label_17b4c8;
            case 0x17B4E0u: goto label_17b4e0;
            case 0x17B4E8u: goto label_17b4e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17B360u;
label_17b360:
    // 0x17b360: 0x27bdffa0
    ctx->pc = 0x17b360u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17b364: 0xffb10038
    ctx->pc = 0x17b364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x17b368: 0xa0882d
    ctx->pc = 0x17b368u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b36c: 0xffb20040
    ctx->pc = 0x17b36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x17b370: 0x26320004
    ctx->pc = 0x17b370u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 4));
    // 0x17b374: 0xffb30048
    ctx->pc = 0x17b374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x17b378: 0x80982d
    ctx->pc = 0x17b378u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b37c: 0xffb40050
    ctx->pc = 0x17b37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x17b380: 0xc0a02d
    ctx->pc = 0x17b380u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b384: 0xffb00030
    ctx->pc = 0x17b384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x17b388: 0x3a0202d
    ctx->pc = 0x17b388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b38c: 0xffbf0058
    ctx->pc = 0x17b38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x17b390: 0x8e230048
    ctx->pc = 0x17b390u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x17b394: 0x8e270044
    ctx->pc = 0x17b394u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x17b398: 0x317c2
    ctx->pc = 0x17b398u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 31));
    // 0x17b39c: 0x8e680008
    ctx->pc = 0x17b39cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x17b3a0: 0x8e450000
    ctx->pc = 0x17b3a0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17b3a4: 0x621021
    ctx->pc = 0x17b3a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17b3a8: 0x21043
    ctx->pc = 0x17b3a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x17b3ac: 0xafa70014
    ctx->pc = 0x17b3acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x17b3b0: 0xafa50000
    ctx->pc = 0x17b3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x17b3b4: 0xafa20018
    ctx->pc = 0x17b3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x17b3b8: 0xafa70004
    ctx->pc = 0x17b3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x17b3bc: 0xafa30008
    ctx->pc = 0x17b3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x17b3c0: 0x15000005
    ctx->pc = 0x17B3C0u;
    {
        const bool branch_taken_0x17b3c0 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x17B3C4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
        if (branch_taken_0x17b3c0) {
            ctx->pc = 0x17B3D8u;
            goto label_17b3d8;
        }
    }
    ctx->pc = 0x17B3C8u;
    // 0x17b3c8: 0x8e420004
    ctx->pc = 0x17b3c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x17b3cc: 0x21080
    ctx->pc = 0x17b3ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x17b3d0: 0x10000002
    ctx->pc = 0x17B3D0u;
    {
        const bool branch_taken_0x17b3d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17B3D4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        if (branch_taken_0x17b3d0) {
            ctx->pc = 0x17B3DCu;
            goto label_17b3dc;
        }
    }
    ctx->pc = 0x17B3D8u;
label_17b3d8:
    // 0x17b3d8: 0xafa8001c
    ctx->pc = 0x17b3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 8));
label_17b3dc:
    // 0x17b3dc: 0x27b00010
    ctx->pc = 0x17b3dcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 16));
    // 0x17b3e0: 0xc053df2
    ctx->pc = 0x17B3E0u;
    SET_GPR_U32(ctx, 31, 0x17B3E8u);
    ctx->pc = 0x17B3E4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14F7C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0014F7C8_0x14f7c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B3E8u; }
    }
    if (ctx->pc != 0x17B3E8u) { return; }
    ctx->pc = 0x17B3E8u;
    // 0x17b3e8: 0x200282d
    ctx->pc = 0x17b3e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b3ec: 0x8e260048
    ctx->pc = 0x17b3ecu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x17b3f0: 0x3a0202d
    ctx->pc = 0x17b3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b3f4: 0x8e230044
    ctx->pc = 0x17b3f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x17b3f8: 0x8e670008
    ctx->pc = 0x17b3f8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x17b3fc: 0x8e420000
    ctx->pc = 0x17b3fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17b400: 0xafa30014
    ctx->pc = 0x17b400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x17b404: 0xafa20000
    ctx->pc = 0x17b404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x17b408: 0xafb40010
    ctx->pc = 0x17b408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x17b40c: 0xafa60018
    ctx->pc = 0x17b40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x17b410: 0xafa30004
    ctx->pc = 0x17b410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x17b414: 0x14e00006
    ctx->pc = 0x17B414u;
    {
        const bool branch_taken_0x17b414 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x17B418u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
        if (branch_taken_0x17b414) {
            ctx->pc = 0x17B430u;
            goto label_17b430;
        }
    }
    ctx->pc = 0x17B41Cu;
    // 0x17b41c: 0x8e420004
    ctx->pc = 0x17b41cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x17b420: 0x21080
    ctx->pc = 0x17b420u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x17b424: 0x10000003
    ctx->pc = 0x17B424u;
    {
        const bool branch_taken_0x17b424 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17B428u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        if (branch_taken_0x17b424) {
            ctx->pc = 0x17B434u;
            goto label_17b434;
        }
    }
    ctx->pc = 0x17B42Cu;
    // 0x17b42c: 0x0
    ctx->pc = 0x17b42cu;
    // NOP
label_17b430:
    // 0x17b430: 0xafa7001c
    ctx->pc = 0x17b430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 7));
label_17b434:
    // 0x17b434: 0xc054000
    ctx->pc = 0x17B434u;
    SET_GPR_U32(ctx, 31, 0x17B43Cu);
    ctx->pc = 0x17B438u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 60)));
    ctx->pc = 0x150000u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00150000_0x150000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B43Cu; }
    }
    if (ctx->pc != 0x17B43Cu) { return; }
    ctx->pc = 0x17B43Cu;
    // 0x17b43c: 0xdfb00030
    ctx->pc = 0x17b43cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17b440: 0xdfb10038
    ctx->pc = 0x17b440u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17b444: 0xdfb20040
    ctx->pc = 0x17b444u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17b448: 0xdfb30048
    ctx->pc = 0x17b448u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17b44c: 0xdfb40050
    ctx->pc = 0x17b44cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17b450: 0xdfbf0058
    ctx->pc = 0x17b450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17b454: 0x3e00008
    ctx->pc = 0x17B454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B458u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B0F8u: goto label_17b0f8;
            case 0x17B108u: goto label_17b108;
            case 0x17B130u: goto label_17b130;
            case 0x17B168u: goto label_17b168;
            case 0x17B1A0u: goto label_17b1a0;
            case 0x17B1D0u: goto label_17b1d0;
            case 0x17B200u: goto label_17b200;
            case 0x17B230u: goto label_17b230;
            case 0x17B260u: goto label_17b260;
            case 0x17B264u: goto label_17b264;
            case 0x17B288u: goto label_17b288;
            case 0x17B300u: goto label_17b300;
            case 0x17B304u: goto label_17b304;
            case 0x17B31Cu: goto label_17b31c;
            case 0x17B338u: goto label_17b338;
            case 0x17B348u: goto label_17b348;
            case 0x17B360u: goto label_17b360;
            case 0x17B3D8u: goto label_17b3d8;
            case 0x17B3DCu: goto label_17b3dc;
            case 0x17B430u: goto label_17b430;
            case 0x17B434u: goto label_17b434;
            case 0x17B4B0u: goto label_17b4b0;
            case 0x17B4C0u: goto label_17b4c0;
            case 0x17B4C4u: goto label_17b4c4;
            case 0x17B4C8u: goto label_17b4c8;
            case 0x17B4E0u: goto label_17b4e0;
            case 0x17B4E8u: goto label_17b4e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17B45Cu;
    // 0x17b45c: 0x0
    ctx->pc = 0x17b45cu;
    // NOP
    // 0x17b460: 0x27bdfff0
    ctx->pc = 0x17b460u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17b464: 0x80382d
    ctx->pc = 0x17b464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b468: 0xffbf0000
    ctx->pc = 0x17b468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b46c: 0x24020041
    ctx->pc = 0x17b46cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 65));
    // 0x17b470: 0x8ce30004
    ctx->pc = 0x17b470u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x17b474: 0x10620012
    ctx->pc = 0x17B474u;
    {
        const bool branch_taken_0x17b474 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x17B478u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17b474) {
            ctx->pc = 0x17B4C0u;
            goto label_17b4c0;
        }
    }
    ctx->pc = 0x17B47Cu;
    // 0x17b47c: 0x28620042
    ctx->pc = 0x17b47cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 66));
    // 0x17b480: 0x50400010
    ctx->pc = 0x17B480u;
    {
        const bool branch_taken_0x17b480 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x17b480) {
            ctx->pc = 0x17B484u;
            SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
            ctx->pc = 0x17B4C4u;
            goto label_17b4c4;
        }
    }
    ctx->pc = 0x17B488u;
    // 0x17b488: 0x24020021
    ctx->pc = 0x17b488u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 33));
    // 0x17b48c: 0x10620008
    ctx->pc = 0x17B48Cu;
    {
        const bool branch_taken_0x17b48c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x17B490u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 34));
        if (branch_taken_0x17b48c) {
            ctx->pc = 0x17B4B0u;
            goto label_17b4b0;
        }
    }
    ctx->pc = 0x17B494u;
    // 0x17b494: 0x1040000b
    ctx->pc = 0x17B494u;
    {
        const bool branch_taken_0x17b494 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17B498u;
        SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
        if (branch_taken_0x17b494) {
            ctx->pc = 0x17B4C4u;
            goto label_17b4c4;
        }
    }
    ctx->pc = 0x17B49Cu;
    // 0x17b49c: 0x24020011
    ctx->pc = 0x17b49cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 17));
    // 0x17b4a0: 0x1062000f
    ctx->pc = 0x17B4A0u;
    {
        const bool branch_taken_0x17b4a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x17B4A4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x17b4a0) {
            ctx->pc = 0x17B4E0u;
            goto label_17b4e0;
        }
    }
    ctx->pc = 0x17B4A8u;
    // 0x17b4a8: 0x10000007
    ctx->pc = 0x17B4A8u;
    {
        const bool branch_taken_0x17b4a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x17b4a8) {
            ctx->pc = 0x17B4C8u;
            goto label_17b4c8;
        }
    }
    ctx->pc = 0x17B4B0u;
label_17b4b0:
    // 0x17b4b0: 0xdfbf0000
    ctx->pc = 0x17b4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b4b4: 0x805ed3a
    ctx->pc = 0x17B4B4u;
    ctx->pc = 0x17B4B8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17B4E8u;
    goto label_17b4e8;
    ctx->pc = 0x17B4BCu;
    // 0x17b4bc: 0x0
    ctx->pc = 0x17b4bcu;
    // NOP
label_17b4c0:
    // 0x17b4c0: 0x3c060024
    ctx->pc = 0x17b4c0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
label_17b4c4:
    // 0x17b4c4: 0xdfbf0000
    ctx->pc = 0x17b4c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17b4c8:
    // 0x17b4c8: 0xe0202d
    ctx->pc = 0x17b4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b4cc: 0x100282d
    ctx->pc = 0x17b4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b4d0: 0x24c60e70
    ctx->pc = 0x17b4d0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3696));
    // 0x17b4d4: 0x805f472
    ctx->pc = 0x17B4D4u;
    ctx->pc = 0x17B4D8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17D1C8u;
    sub_0017D1C8_0x17d1c8(rdram, ctx, runtime); return;
    ctx->pc = 0x17B4DCu;
    // 0x17b4dc: 0x0
    ctx->pc = 0x17b4dcu;
    // NOP
label_17b4e0:
    // 0x17b4e0: 0x3e00008
    ctx->pc = 0x17B4E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B4E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B0F8u: goto label_17b0f8;
            case 0x17B108u: goto label_17b108;
            case 0x17B130u: goto label_17b130;
            case 0x17B168u: goto label_17b168;
            case 0x17B1A0u: goto label_17b1a0;
            case 0x17B1D0u: goto label_17b1d0;
            case 0x17B200u: goto label_17b200;
            case 0x17B230u: goto label_17b230;
            case 0x17B260u: goto label_17b260;
            case 0x17B264u: goto label_17b264;
            case 0x17B288u: goto label_17b288;
            case 0x17B300u: goto label_17b300;
            case 0x17B304u: goto label_17b304;
            case 0x17B31Cu: goto label_17b31c;
            case 0x17B338u: goto label_17b338;
            case 0x17B348u: goto label_17b348;
            case 0x17B360u: goto label_17b360;
            case 0x17B3D8u: goto label_17b3d8;
            case 0x17B3DCu: goto label_17b3dc;
            case 0x17B430u: goto label_17b430;
            case 0x17B434u: goto label_17b434;
            case 0x17B4B0u: goto label_17b4b0;
            case 0x17B4C0u: goto label_17b4c0;
            case 0x17B4C4u: goto label_17b4c4;
            case 0x17B4C8u: goto label_17b4c8;
            case 0x17B4E0u: goto label_17b4e0;
            case 0x17B4E8u: goto label_17b4e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17B4E8u;
label_17b4e8:
    // 0x17b4e8: 0x27bdffb0
    ctx->pc = 0x17b4e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17b4ec: 0xa0102d
    ctx->pc = 0x17b4ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b4f0: 0xffbf0040
    ctx->pc = 0x17b4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17b4f4: 0x3a0202d
    ctx->pc = 0x17b4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b4f8: 0x27a50020
    ctx->pc = 0x17b4f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x17b4fc: 0x8c480048
    ctx->pc = 0x17b4fcu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x17b500: 0x8c470044
    ctx->pc = 0x17b500u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x17b504: 0x8c430004
    ctx->pc = 0x17b504u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17b508: 0xafa70024
    ctx->pc = 0x17b508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 7));
    // 0x17b50c: 0xafa60020
    ctx->pc = 0x17b50cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x17b510: 0xafa30000
    ctx->pc = 0x17b510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x17b514: 0xafa80028
    ctx->pc = 0x17b514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
    // 0x17b518: 0xafa70004
    ctx->pc = 0x17b518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x17b51c: 0xc053fd4
    ctx->pc = 0x17B51Cu;
    SET_GPR_U32(ctx, 31, 0x17B524u);
    ctx->pc = 0x17B520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    ctx->pc = 0x14FF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0014FF50_0x14ff50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B524u; }
    }
    if (ctx->pc != 0x17B524u) { return; }
    ctx->pc = 0x17B524u;
    // 0x17b524: 0xdfbf0040
    ctx->pc = 0x17b524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17b528: 0x3e00008
    ctx->pc = 0x17B528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B52Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B0F8u: goto label_17b0f8;
            case 0x17B108u: goto label_17b108;
            case 0x17B130u: goto label_17b130;
            case 0x17B168u: goto label_17b168;
            case 0x17B1A0u: goto label_17b1a0;
            case 0x17B1D0u: goto label_17b1d0;
            case 0x17B200u: goto label_17b200;
            case 0x17B230u: goto label_17b230;
            case 0x17B260u: goto label_17b260;
            case 0x17B264u: goto label_17b264;
            case 0x17B288u: goto label_17b288;
            case 0x17B300u: goto label_17b300;
            case 0x17B304u: goto label_17b304;
            case 0x17B31Cu: goto label_17b31c;
            case 0x17B338u: goto label_17b338;
            case 0x17B348u: goto label_17b348;
            case 0x17B360u: goto label_17b360;
            case 0x17B3D8u: goto label_17b3d8;
            case 0x17B3DCu: goto label_17b3dc;
            case 0x17B430u: goto label_17b430;
            case 0x17B434u: goto label_17b434;
            case 0x17B4B0u: goto label_17b4b0;
            case 0x17B4C0u: goto label_17b4c0;
            case 0x17B4C4u: goto label_17b4c4;
            case 0x17B4C8u: goto label_17b4c8;
            case 0x17B4E0u: goto label_17b4e0;
            case 0x17B4E8u: goto label_17b4e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17B530u;
}
