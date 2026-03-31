#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016B0C8
// Address: 0x16b0c8 - 0x16b218
void sub_0016B0C8_0x16b0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16b0c8u;

    // 0x16b0c8: 0x27bdffb0
    ctx->pc = 0x16b0c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16b0cc: 0xffb00000
    ctx->pc = 0x16b0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b0d0: 0x80802d
    ctx->pc = 0x16b0d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b0d4: 0xffb10008
    ctx->pc = 0x16b0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16b0d8: 0x26111ae4
    ctx->pc = 0x16b0d8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 6884));
    // 0x16b0dc: 0xffb50028
    ctx->pc = 0x16b0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x16b0e0: 0xc0a82d
    ctx->pc = 0x16b0e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b0e4: 0xffb60030
    ctx->pc = 0x16b0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x16b0e8: 0xe0b02d
    ctx->pc = 0x16b0e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b0ec: 0xffb20010
    ctx->pc = 0x16b0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16b0f0: 0x2aa20004
    ctx->pc = 0x16b0f0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), 4));
    // 0x16b0f4: 0xffb30018
    ctx->pc = 0x16b0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16b0f8: 0xa0202d
    ctx->pc = 0x16b0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b0fc: 0xffb40020
    ctx->pc = 0x16b0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16b100: 0xffb70038
    ctx->pc = 0x16b100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x16b104: 0xffbf0040
    ctx->pc = 0x16b104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16b108: 0x8e330008
    ctx->pc = 0x16b108u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x16b10c: 0x8e340010
    ctx->pc = 0x16b10cu;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x16b110: 0x14400017
    ctx->pc = 0x16B110u;
    {
        const bool branch_taken_0x16b110 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16B114u;
        SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        if (branch_taken_0x16b110) {
            ctx->pc = 0x16B170u;
            goto label_16b170;
        }
    }
    ctx->pc = 0x16B118u;
    // 0x16b118: 0xc055f4a
    ctx->pc = 0x16B118u;
    SET_GPR_U32(ctx, 31, 0x16B120u);
    ctx->pc = 0x157D28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00157D28_0x157d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B120u; }
    }
    if (ctx->pc != 0x16B120u) { return; }
    ctx->pc = 0x16B120u;
    // 0x16b120: 0x40902d
    ctx->pc = 0x16b120u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b124: 0x3c020008
    ctx->pc = 0x16b124u;
    SET_GPR_U32(ctx, 2, ((uint32_t)8 << 16));
    // 0x16b128: 0x1642000d
    ctx->pc = 0x16B128u;
    {
        const bool branch_taken_0x16b128 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x16b128) {
            ctx->pc = 0x16B160u;
            goto label_16b160;
        }
    }
    ctx->pc = 0x16B130u;
    // 0x16b130: 0x8e220020
    ctx->pc = 0x16b130u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x16b134: 0x4430007
    ctx->pc = 0x16B134u;
    {
        const bool branch_taken_0x16b134 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16b134) {
            ctx->pc = 0x16B138u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x16B154u;
            goto label_16b154;
        }
    }
    ctx->pc = 0x16B13Cu;
    // 0x16b13c: 0x200202d
    ctx->pc = 0x16b13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b140: 0xc059d4a
    ctx->pc = 0x16B140u;
    SET_GPR_U32(ctx, 31, 0x16B148u);
    ctx->pc = 0x16B144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x167528u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167528_0x167528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B148u; }
    }
    if (ctx->pc != 0x16B148u) { return; }
    ctx->pc = 0x16B148u;
    // 0x16b148: 0x24420004
    ctx->pc = 0x16b148u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x16b14c: 0xae220020
    ctx->pc = 0x16b14cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x16b150: 0x24020001
    ctx->pc = 0x16b150u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_16b154:
    // 0x16b154: 0x10000007
    ctx->pc = 0x16B154u;
    {
        const bool branch_taken_0x16b154 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16B158u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
        if (branch_taken_0x16b154) {
            ctx->pc = 0x16B174u;
            goto label_16b174;
        }
    }
    ctx->pc = 0x16B15Cu;
    // 0x16b15c: 0x0
    ctx->pc = 0x16b15cu;
    // NOP
label_16b160:
    // 0x16b160: 0x56400004
    ctx->pc = 0x16B160u;
    {
        const bool branch_taken_0x16b160 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x16b160) {
            ctx->pc = 0x16B164u;
            WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
            ctx->pc = 0x16B174u;
            goto label_16b174;
        }
    }
    ctx->pc = 0x16B168u;
    // 0x16b168: 0x10000003
    ctx->pc = 0x16B168u;
    {
        const bool branch_taken_0x16b168 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16B16Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16b168) {
            ctx->pc = 0x16B178u;
            goto label_16b178;
        }
    }
    ctx->pc = 0x16B170u;
label_16b170:
    // 0x16b170: 0x902d
    ctx->pc = 0x16b170u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16b174:
    // 0x16b174: 0x200202d
    ctx->pc = 0x16b174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16b178:
    // 0x16b178: 0xc05ac86
    ctx->pc = 0x16B178u;
    SET_GPR_U32(ctx, 31, 0x16B180u);
    ctx->pc = 0x16B17Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16B218u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B218_0x16b218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B180u; }
    }
    if (ctx->pc != 0x16B180u) { return; }
    ctx->pc = 0x16B180u;
    // 0x16b180: 0x10400005
    ctx->pc = 0x16B180u;
    {
        const bool branch_taken_0x16b180 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16B184u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16b180) {
            ctx->pc = 0x16B198u;
            goto label_16b198;
        }
    }
    ctx->pc = 0x16B188u;
    // 0x16b188: 0x24050001
    ctx->pc = 0x16b188u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b18c: 0x1000000e
    ctx->pc = 0x16B18Cu;
    {
        const bool branch_taken_0x16b18c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16B190u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x16b18c) {
            ctx->pc = 0x16B1C8u;
            goto label_16b1c8;
        }
    }
    ctx->pc = 0x16B194u;
    // 0x16b194: 0x0
    ctx->pc = 0x16b194u;
    // NOP
label_16b198:
    // 0x16b198: 0x2ac20004
    ctx->pc = 0x16b198u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), 4));
    // 0x16b19c: 0x5040000e
    ctx->pc = 0x16B19Cu;
    {
        const bool branch_taken_0x16b19c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16b19c) {
            ctx->pc = 0x16B1A0u;
            SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 23)));
            ctx->pc = 0x16B1D8u;
            goto label_16b1d8;
        }
    }
    ctx->pc = 0x16B1A4u;
    // 0x16b1a4: 0x280282d
    ctx->pc = 0x16b1a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b1a8: 0xc059f40
    ctx->pc = 0x16B1A8u;
    SET_GPR_U32(ctx, 31, 0x16B1B0u);
    ctx->pc = 0x16B1ACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x167D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D00_0x167d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B1B0u; }
    }
    if (ctx->pc != 0x16B1B0u) { return; }
    ctx->pc = 0x16B1B0u;
    // 0x16b1b0: 0x24030001
    ctx->pc = 0x16b1b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b1b4: 0x54430008
    ctx->pc = 0x16B1B4u;
    {
        const bool branch_taken_0x16b1b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x16b1b4) {
            ctx->pc = 0x16B1B8u;
            SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 23)));
            ctx->pc = 0x16B1D8u;
            goto label_16b1d8;
        }
    }
    ctx->pc = 0x16B1BCu;
    // 0x16b1bc: 0x8e660030
    ctx->pc = 0x16b1bcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x16b1c0: 0x200202d
    ctx->pc = 0x16b1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b1c4: 0x24050001
    ctx->pc = 0x16b1c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_16b1c8:
    // 0x16b1c8: 0xc05abf2
    ctx->pc = 0x16B1C8u;
    SET_GPR_U32(ctx, 31, 0x16B1D0u);
    ctx->pc = 0x16AFC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016AFC8_0x16afc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B1D0u; }
    }
    if (ctx->pc != 0x16B1D0u) { return; }
    ctx->pc = 0x16B1D0u;
    // 0x16b1d0: 0x10000006
    ctx->pc = 0x16B1D0u;
    {
        const bool branch_taken_0x16b1d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16B1D4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16b1d0) {
            ctx->pc = 0x16B1ECu;
            goto label_16b1ec;
        }
    }
    ctx->pc = 0x16B1D8u;
label_16b1d8:
    // 0x16b1d8: 0x50400004
    ctx->pc = 0x16B1D8u;
    {
        const bool branch_taken_0x16b1d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16b1d8) {
            ctx->pc = 0x16B1DCu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x16B1ECu;
            goto label_16b1ec;
        }
    }
    ctx->pc = 0x16B1E0u;
    // 0x16b1e0: 0x3c020001
    ctx->pc = 0x16b1e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x16b1e4: 0x2421026
    ctx->pc = 0x16b1e4u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x16b1e8: 0x2102b
    ctx->pc = 0x16b1e8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_16b1ec:
    // 0x16b1ec: 0xdfb00000
    ctx->pc = 0x16b1ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b1f0: 0xdfb10008
    ctx->pc = 0x16b1f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b1f4: 0xdfb20010
    ctx->pc = 0x16b1f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b1f8: 0xdfb30018
    ctx->pc = 0x16b1f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16b1fc: 0xdfb40020
    ctx->pc = 0x16b1fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b200: 0xdfb50028
    ctx->pc = 0x16b200u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16b204: 0xdfb60030
    ctx->pc = 0x16b204u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16b208: 0xdfb70038
    ctx->pc = 0x16b208u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16b20c: 0xdfbf0040
    ctx->pc = 0x16b20cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16b210: 0x3e00008
    ctx->pc = 0x16B210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B214u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16B154u: goto label_16b154;
            case 0x16B160u: goto label_16b160;
            case 0x16B170u: goto label_16b170;
            case 0x16B174u: goto label_16b174;
            case 0x16B178u: goto label_16b178;
            case 0x16B198u: goto label_16b198;
            case 0x16B1C8u: goto label_16b1c8;
            case 0x16B1D8u: goto label_16b1d8;
            case 0x16B1ECu: goto label_16b1ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16B218u;
}
