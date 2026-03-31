#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17b098
// Address: 0x17b098 - 0x17b288
void entry_17b098_0x17b288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17b098u;

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
    entry_17b288_0x17b360(rdram, ctx, runtime); return;
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
    entry_17b288_0x17b360(rdram, ctx, runtime); return;
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
    entry_17b288_0x17b360(rdram, ctx, runtime); return;
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
    entry_17b288_0x17b360(rdram, ctx, runtime); return;
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
    entry_17b288_0x17b360(rdram, ctx, runtime); return;
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
    entry_17b360_0x17b460(rdram, ctx, runtime); return;
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
}
