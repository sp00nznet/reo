#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CF090
// Address: 0x1cf090 - 0x1cf300
void sub_001CF090_0x1cf090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cf090u;

    // 0x1cf090: 0x27bdff70
    ctx->pc = 0x1cf090u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1cf094: 0x3c010023
    ctx->pc = 0x1cf094u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1cf098: 0xffbf0080
    ctx->pc = 0x1cf098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1cf09c: 0xc0482d
    ctx->pc = 0x1cf09cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf0a0: 0x7fb70070
    ctx->pc = 0x1cf0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1cf0a4: 0x7fb60060
    ctx->pc = 0x1cf0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1cf0a8: 0x100b82d
    ctx->pc = 0x1cf0a8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf0ac: 0x7fb50050
    ctx->pc = 0x1cf0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1cf0b0: 0x80b02d
    ctx->pc = 0x1cf0b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf0b4: 0x7fb40040
    ctx->pc = 0x1cf0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1cf0b8: 0xa0a82d
    ctx->pc = 0x1cf0b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf0bc: 0x7fb30030
    ctx->pc = 0x1cf0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1cf0c0: 0xe0a02d
    ctx->pc = 0x1cf0c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf0c4: 0x7fb20020
    ctx->pc = 0x1cf0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cf0c8: 0x7fb10010
    ctx->pc = 0x1cf0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cf0cc: 0x7fb00000
    ctx->pc = 0x1cf0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cf0d0: 0x8c2366c8
    ctx->pc = 0x1cf0d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 26312)));
    // 0x1cf0d4: 0x28621200
    ctx->pc = 0x1cf0d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4608));
    // 0x1cf0d8: 0x14400005
    ctx->pc = 0x1CF0D8u;
    {
        const bool branch_taken_0x1cf0d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CF0DCu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cf0d8) {
            ctx->pc = 0x1CF0F0u;
            goto label_1cf0f0;
        }
    }
    ctx->pc = 0x1CF0E0u;
    // 0x1cf0e0: 0x28611400
    ctx->pc = 0x1cf0e0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 5120));
    // 0x1cf0e4: 0x10200003
    ctx->pc = 0x1CF0E4u;
    {
        const bool branch_taken_0x1cf0e4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF0E8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 5120));
        if (branch_taken_0x1cf0e4) {
            ctx->pc = 0x1CF0F4u;
            goto label_1cf0f4;
        }
    }
    ctx->pc = 0x1CF0ECu;
    // 0x1cf0ec: 0x24120001
    ctx->pc = 0x1cf0ecu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
label_1cf0f0:
    // 0x1cf0f0: 0x28621400
    ctx->pc = 0x1cf0f0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 5120));
label_1cf0f4:
    // 0x1cf0f4: 0x14400004
    ctx->pc = 0x1CF0F4u;
    {
        const bool branch_taken_0x1cf0f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CF0F8u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 6144));
        if (branch_taken_0x1cf0f4) {
            ctx->pc = 0x1CF108u;
            goto label_1cf108;
        }
    }
    ctx->pc = 0x1CF0FCu;
    // 0x1cf0fc: 0x10200002
    ctx->pc = 0x1CF0FCu;
    {
        const bool branch_taken_0x1cf0fc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cf0fc) {
            ctx->pc = 0x1CF108u;
            goto label_1cf108;
        }
    }
    ctx->pc = 0x1CF104u;
    // 0x1cf104: 0x24120002
    ctx->pc = 0x1cf104u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 2));
label_1cf108:
    // 0x1cf108: 0x16400003
    ctx->pc = 0x1CF108u;
    {
        const bool branch_taken_0x1cf108 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CF10Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
        if (branch_taken_0x1cf108) {
            ctx->pc = 0x1CF118u;
            goto label_1cf118;
        }
    }
    ctx->pc = 0x1CF110u;
    // 0x1cf110: 0x1000006d
    ctx->pc = 0x1CF110u;
    {
        const bool branch_taken_0x1cf110 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF114u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cf110) {
            ctx->pc = 0x1CF2C8u;
            goto label_1cf2c8;
        }
    }
    ctx->pc = 0x1CF118u;
label_1cf118:
    // 0x1cf118: 0x2821024
    ctx->pc = 0x1cf118u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1cf11c: 0x10400003
    ctx->pc = 0x1CF11Cu;
    {
        const bool branch_taken_0x1cf11c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF120u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1cf11c) {
            ctx->pc = 0x1CF12Cu;
            goto label_1cf12c;
        }
    }
    ctx->pc = 0x1CF124u;
    // 0x1cf124: 0x10000007
    ctx->pc = 0x1CF124u;
    {
        const bool branch_taken_0x1cf124 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF128u;
        SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
        if (branch_taken_0x1cf124) {
            ctx->pc = 0x1CF144u;
            goto label_1cf144;
        }
    }
    ctx->pc = 0x1CF12Cu;
label_1cf12c:
    // 0x1cf12c: 0x3c024000
    ctx->pc = 0x1cf12cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x1cf130: 0x2821024
    ctx->pc = 0x1cf130u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1cf134: 0x10400002
    ctx->pc = 0x1CF134u;
    {
        const bool branch_taken_0x1cf134 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF138u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1cf134) {
            ctx->pc = 0x1CF140u;
            goto label_1cf140;
        }
    }
    ctx->pc = 0x1CF13Cu;
    // 0x1cf13c: 0x24080002
    ctx->pc = 0x1cf13cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 2));
label_1cf140:
    // 0x1cf140: 0x3c022000
    ctx->pc = 0x1cf140u;
    SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
label_1cf144:
    // 0x1cf144: 0x324400ff
    ctx->pc = 0x1cf144u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 18), 255));
    // 0x1cf148: 0x2821824
    ctx->pc = 0x1cf148u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1cf14c: 0x882d
    ctx->pc = 0x1cf14cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf150: 0x3802b
    ctx->pc = 0x1cf150u;
    SET_GPR_U32(ctx, 16, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1cf154: 0x32a2ffff
    ctx->pc = 0x1cf154u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 21), 65535));
    // 0x1cf158: 0x101bc0
    ctx->pc = 0x1cf158u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 15));
    // 0x1cf15c: 0x3067ffff
    ctx->pc = 0x1cf15cu;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 3), 65535));
    // 0x1cf160: 0x475025
    ctx->pc = 0x1cf160u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1cf164: 0xc073ba4
    ctx->pc = 0x1CF164u;
    SET_GPR_U32(ctx, 31, 0x1CF16Cu);
    ctx->pc = 0x1CF168u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 10), 65535));
    ctx->pc = 0x1CEE90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CEE90_0x1cee90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF16Cu; }
    }
    if (ctx->pc != 0x1CF16Cu) { return; }
    ctx->pc = 0x1CF16Cu;
    // 0x1cf16c: 0x40982d
    ctx->pc = 0x1cf16cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf170: 0x1260000b
    ctx->pc = 0x1CF170u;
    {
        const bool branch_taken_0x1cf170 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cf170) {
            ctx->pc = 0x1CF1A0u;
            goto label_1cf1a0;
        }
    }
    ctx->pc = 0x1CF178u;
    // 0x1cf178: 0x92630003
    ctx->pc = 0x1cf178u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x1cf17c: 0x1001027
    ctx->pc = 0x1cf17cu;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 8), GPR_U32(ctx, 0)));
    // 0x1cf180: 0x621024
    ctx->pc = 0x1cf180u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cf184: 0x1021025
    ctx->pc = 0x1cf184u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1cf188: 0x12c00019
    ctx->pc = 0x1CF188u;
    {
        const bool branch_taken_0x1cf188 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF18Cu;
        WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1cf188) {
            ctx->pc = 0x1CF1F0u;
            goto label_1cf1f0;
        }
    }
    ctx->pc = 0x1CF190u;
    // 0x1cf190: 0x92620000
    ctx->pc = 0x1cf190u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1cf194: 0x24420001
    ctx->pc = 0x1cf194u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cf198: 0x10000015
    ctx->pc = 0x1CF198u;
    {
        const bool branch_taken_0x1cf198 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF19Cu;
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1cf198) {
            ctx->pc = 0x1CF1F0u;
            goto label_1cf1f0;
        }
    }
    ctx->pc = 0x1CF1A0u;
label_1cf1a0:
    // 0x1cf1a0: 0x24020004
    ctx->pc = 0x1cf1a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cf1a4: 0x15020005
    ctx->pc = 0x1CF1A4u;
    {
        const bool branch_taken_0x1cf1a4 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 2));
        ctx->pc = 0x1CF1A8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1cf1a4) {
            ctx->pc = 0x1CF1BCu;
            goto label_1cf1bc;
        }
    }
    ctx->pc = 0x1CF1ACu;
    // 0x1cf1ac: 0x12c00004
    ctx->pc = 0x1CF1ACu;
    {
        const bool branch_taken_0x1cf1ac = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF1B0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cf1ac) {
            ctx->pc = 0x1CF1C0u;
            goto label_1cf1c0;
        }
    }
    ctx->pc = 0x1CF1B4u;
    // 0x1cf1b4: 0x10000044
    ctx->pc = 0x1CF1B4u;
    {
        const bool branch_taken_0x1cf1b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF1B8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cf1b4) {
            ctx->pc = 0x1CF2C8u;
            goto label_1cf2c8;
        }
    }
    ctx->pc = 0x1CF1BCu;
label_1cf1bc:
    // 0x1cf1bc: 0x100202d
    ctx->pc = 0x1cf1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1cf1c0:
    // 0x1cf1c0: 0xc073b7c
    ctx->pc = 0x1CF1C0u;
    SET_GPR_U32(ctx, 31, 0x1CF1C8u);
    ctx->pc = 0x1CEDF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CEDF0_0x1cedf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF1C8u; }
    }
    if (ctx->pc != 0x1CF1C8u) { return; }
    ctx->pc = 0x1CF1C8u;
    // 0x1cf1c8: 0x40982d
    ctx->pc = 0x1cf1c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1cc: 0x16600003
    ctx->pc = 0x1CF1CCu;
    {
        const bool branch_taken_0x1cf1cc = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        if (branch_taken_0x1cf1cc) {
            ctx->pc = 0x1CF1DCu;
            goto label_1cf1dc;
        }
    }
    ctx->pc = 0x1CF1D4u;
    // 0x1cf1d4: 0x1000003c
    ctx->pc = 0x1CF1D4u;
    {
        const bool branch_taken_0x1cf1d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF1D8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cf1d4) {
            ctx->pc = 0x1CF2C8u;
            goto label_1cf2c8;
        }
    }
    ctx->pc = 0x1CF1DCu;
label_1cf1dc:
    // 0x1cf1dc: 0xa2680003
    ctx->pc = 0x1cf1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x1cf1e0: 0x24020001
    ctx->pc = 0x1cf1e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf1e4: 0xa66a000a
    ctx->pc = 0x1cf1e4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10), (uint16_t)GPR_U32(ctx, 10));
    // 0x1cf1e8: 0xa2620000
    ctx->pc = 0x1cf1e8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cf1ec: 0xa2720008
    ctx->pc = 0x1cf1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 18));
label_1cf1f0:
    // 0x1cf1f0: 0x3122ffff
    ctx->pc = 0x1cf1f0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 9), 65535));
    // 0x1cf1f4: 0x324400ff
    ctx->pc = 0x1cf1f4u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 18), 255));
    // 0x1cf1f8: 0x473825
    ctx->pc = 0x1cf1f8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1cf1fc: 0xc0739e4
    ctx->pc = 0x1CF1FCu;
    SET_GPR_U32(ctx, 31, 0x1CF204u);
    ctx->pc = 0x1CF200u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 7), 65535));
    ctx->pc = 0x1CE790u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE790_0x1ce790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF204u; }
    }
    if (ctx->pc != 0x1CF204u) { return; }
    ctx->pc = 0x1CF204u;
    // 0x1cf204: 0x14400011
    ctx->pc = 0x1CF204u;
    {
        const bool branch_taken_0x1cf204 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CF208u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 7), 65535));
        if (branch_taken_0x1cf204) {
            ctx->pc = 0x1CF24Cu;
            goto label_1cf24c;
        }
    }
    ctx->pc = 0x1CF20Cu;
    // 0x1cf20c: 0x100302d
    ctx->pc = 0x1cf20cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf210: 0x324400ff
    ctx->pc = 0x1cf210u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 18), 255));
    // 0x1cf214: 0xc073a00
    ctx->pc = 0x1CF214u;
    SET_GPR_U32(ctx, 31, 0x1CF21Cu);
    ctx->pc = 0x1CF218u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x1CE800u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE800_0x1ce800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF21Cu; }
    }
    if (ctx->pc != 0x1CF21Cu) { return; }
    ctx->pc = 0x1CF21Cu;
    // 0x1cf21c: 0x2403ffff
    ctx->pc = 0x1cf21cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cf220: 0x14430003
    ctx->pc = 0x1CF220u;
    {
        const bool branch_taken_0x1cf220 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1CF224u;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 2));
        if (branch_taken_0x1cf220) {
            ctx->pc = 0x1CF230u;
            goto label_1cf230;
        }
    }
    ctx->pc = 0x1CF228u;
    // 0x1cf228: 0x10000027
    ctx->pc = 0x1CF228u;
    {
        const bool branch_taken_0x1cf228 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF22Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cf228) {
            ctx->pc = 0x1CF2C8u;
            goto label_1cf2c8;
        }
    }
    ctx->pc = 0x1CF230u;
label_1cf230:
    // 0x1cf230: 0x3c030034
    ctx->pc = 0x1cf230u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x1cf234: 0x821021
    ctx->pc = 0x1cf234u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1cf238: 0x24631500
    ctx->pc = 0x1cf238u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 5376));
    // 0x1cf23c: 0x21080
    ctx->pc = 0x1cf23cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf240: 0x621021
    ctx->pc = 0x1cf240u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cf244: 0x1000000b
    ctx->pc = 0x1CF244u;
    {
        const bool branch_taken_0x1cf244 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF248u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 2));
        if (branch_taken_0x1cf244) {
            ctx->pc = 0x1CF274u;
            goto label_1cf274;
        }
    }
    ctx->pc = 0x1CF24Cu;
label_1cf24c:
    // 0x1cf24c: 0x9044000f
    ctx->pc = 0x1cf24cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 15)));
    // 0x1cf250: 0x1001827
    ctx->pc = 0x1cf250u;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 8), GPR_U32(ctx, 0)));
    // 0x1cf254: 0x831824
    ctx->pc = 0x1cf254u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1cf258: 0x1031825
    ctx->pc = 0x1cf258u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1cf25c: 0x12c00004
    ctx->pc = 0x1CF25Cu;
    {
        const bool branch_taken_0x1cf25c = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF260u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 15), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1cf25c) {
            ctx->pc = 0x1CF270u;
            goto label_1cf270;
        }
    }
    ctx->pc = 0x1CF264u;
    // 0x1cf264: 0x90430000
    ctx->pc = 0x1cf264u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf268: 0x24630001
    ctx->pc = 0x1cf268u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cf26c: 0xa0430000
    ctx->pc = 0x1cf26cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_1cf270:
    // 0x1cf270: 0x24460002
    ctx->pc = 0x1cf270u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 2));
label_1cf274:
    // 0x1cf274: 0x24020001
    ctx->pc = 0x1cf274u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf278: 0x16420002
    ctx->pc = 0x1CF278u;
    {
        const bool branch_taken_0x1cf278 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x1cf278) {
            ctx->pc = 0x1CF284u;
            goto label_1cf284;
        }
    }
    ctx->pc = 0x1CF280u;
    // 0x1cf280: 0x802d
    ctx->pc = 0x1cf280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf284:
    // 0x1cf284: 0x8e650004
    ctx->pc = 0x1cf284u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1cf288: 0x1438fc
    ctx->pc = 0x1cf288u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 20) << (32 + 3));
    // 0x1cf28c: 0x1011c0
    ctx->pc = 0x1cf28cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 7));
    // 0x1cf290: 0x738fe
    ctx->pc = 0x1cf290u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 3));
    // 0x1cf294: 0x2a0202d
    ctx->pc = 0x1cf294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf298: 0x2e0482d
    ctx->pc = 0x1cf298u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf29c: 0x240502d
    ctx->pc = 0x1cf29cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf2a0: 0x2224025
    ctx->pc = 0x1cf2a0u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1cf2a4: 0xc073cc8
    ctx->pc = 0x1CF2A4u;
    SET_GPR_U32(ctx, 31, 0x1CF2ACu);
    ctx->pc = 0x1CF2A8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CF320u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CF320_0x1cf320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF2ACu; }
    }
    if (ctx->pc != 0x1CF2ACu) { return; }
    ctx->pc = 0x1CF2ACu;
    // 0x1cf2ac: 0x12c00006
    ctx->pc = 0x1CF2ACu;
    {
        const bool branch_taken_0x1cf2ac = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF2B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1cf2ac) {
            ctx->pc = 0x1CF2C8u;
            goto label_1cf2c8;
        }
    }
    ctx->pc = 0x1CF2B4u;
    // 0x1cf2b4: 0x8e640004
    ctx->pc = 0x1cf2b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1cf2b8: 0x2c0282d
    ctx->pc = 0x1cf2b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf2bc: 0xc073bc0
    ctx->pc = 0x1CF2BCu;
    SET_GPR_U32(ctx, 31, 0x1CF2C4u);
    ctx->pc = 0x1CF2C0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CEF00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CEF00_0x1cef00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF2C4u; }
    }
    if (ctx->pc != 0x1CF2C4u) { return; }
    ctx->pc = 0x1CF2C4u;
    // 0x1cf2c4: 0x24020001
    ctx->pc = 0x1cf2c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1cf2c8:
    // 0x1cf2c8: 0xdfbf0080
    ctx->pc = 0x1cf2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1cf2cc: 0x7bb70070
    ctx->pc = 0x1cf2ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cf2d0: 0x7bb60060
    ctx->pc = 0x1cf2d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1cf2d4: 0x7bb50050
    ctx->pc = 0x1cf2d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cf2d8: 0x7bb40040
    ctx->pc = 0x1cf2d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cf2dc: 0x7bb30030
    ctx->pc = 0x1cf2dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cf2e0: 0x7bb20020
    ctx->pc = 0x1cf2e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf2e4: 0x7bb10010
    ctx->pc = 0x1cf2e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf2e8: 0x7bb00000
    ctx->pc = 0x1cf2e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf2ec: 0x3e00008
    ctx->pc = 0x1CF2ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF2F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CF0F0u: goto label_1cf0f0;
            case 0x1CF0F4u: goto label_1cf0f4;
            case 0x1CF108u: goto label_1cf108;
            case 0x1CF118u: goto label_1cf118;
            case 0x1CF12Cu: goto label_1cf12c;
            case 0x1CF140u: goto label_1cf140;
            case 0x1CF144u: goto label_1cf144;
            case 0x1CF1A0u: goto label_1cf1a0;
            case 0x1CF1BCu: goto label_1cf1bc;
            case 0x1CF1C0u: goto label_1cf1c0;
            case 0x1CF1DCu: goto label_1cf1dc;
            case 0x1CF1F0u: goto label_1cf1f0;
            case 0x1CF230u: goto label_1cf230;
            case 0x1CF24Cu: goto label_1cf24c;
            case 0x1CF270u: goto label_1cf270;
            case 0x1CF274u: goto label_1cf274;
            case 0x1CF284u: goto label_1cf284;
            case 0x1CF2C8u: goto label_1cf2c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CF2F4u;
    // 0x1cf2f4: 0x0
    ctx->pc = 0x1cf2f4u;
    // NOP
    // 0x1cf2f8: 0x0
    ctx->pc = 0x1cf2f8u;
    // NOP
    // 0x1cf2fc: 0x0
    ctx->pc = 0x1cf2fcu;
    // NOP
}
