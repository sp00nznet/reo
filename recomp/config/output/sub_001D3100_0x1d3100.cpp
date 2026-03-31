#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D3100
// Address: 0x1d3100 - 0x1d3350
void sub_001D3100_0x1d3100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d3100u;

    // 0x1d3100: 0x27bdfe80
    ctx->pc = 0x1d3100u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1d3104: 0xffbf0050
    ctx->pc = 0x1d3104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1d3108: 0x7fb40040
    ctx->pc = 0x1d3108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d310c: 0x7fb30030
    ctx->pc = 0x1d310cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d3110: 0x7fb20020
    ctx->pc = 0x1d3110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d3114: 0x7fb10010
    ctx->pc = 0x1d3114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d3118: 0x80902d
    ctx->pc = 0x1d3118u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d311c: 0xa0882d
    ctx->pc = 0x1d311cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3120: 0x7fb00000
    ctx->pc = 0x1d3120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d3124: 0xc068abc
    ctx->pc = 0x1D3124u;
    SET_GPR_U32(ctx, 31, 0x1D312Cu);
    ctx->pc = 0x1D3128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A2AF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2AF0_0x1a2af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D312Cu; }
    }
    if (ctx->pc != 0x1D312Cu) { return; }
    ctx->pc = 0x1D312Cu;
    // 0x1d312c: 0xa6420816
    ctx->pc = 0x1d312cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2070), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d3130: 0xc068acc
    ctx->pc = 0x1D3130u;
    SET_GPR_U32(ctx, 31, 0x1D3138u);
    ctx->pc = 0x1D3134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A2B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2B30_0x1a2b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3138u; }
    }
    if (ctx->pc != 0x1D3138u) { return; }
    ctx->pc = 0x1D3138u;
    // 0x1d3138: 0x3c01003e
    ctx->pc = 0x1d3138u;
    SET_GPR_U32(ctx, 1, ((uint32_t)62 << 16));
    // 0x1d313c: 0x802d
    ctx->pc = 0x1d313cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3140: 0x10000009
    ctx->pc = 0x1D3140u;
    {
        const bool branch_taken_0x1d3140 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D3144u;
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294949456), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1d3140) {
            ctx->pc = 0x1D3168u;
            goto label_1d3168;
        }
    }
    ctx->pc = 0x1D3148u;
label_1d3148:
    // 0x1d3148: 0xc068ad8
    ctx->pc = 0x1D3148u;
    SET_GPR_U32(ctx, 31, 0x1D3150u);
    ctx->pc = 0x1D314Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A2B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2B60_0x1a2b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3150u; }
    }
    if (ctx->pc != 0x1D3150u) { return; }
    ctx->pc = 0x1D3150u;
    // 0x1d3150: 0x3204ffff
    ctx->pc = 0x1d3150u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 16), 65535));
    // 0x1d3154: 0x26030001
    ctx->pc = 0x1d3154u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d3158: 0x42040
    ctx->pc = 0x1d3158u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d315c: 0x3070ffff
    ctx->pc = 0x1d315cu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 3), 65535));
    // 0x1d3160: 0x9d1821
    ctx->pc = 0x1d3160u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x1d3164: 0xa46200b0
    ctx->pc = 0x1d3164u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 176), (uint16_t)GPR_U32(ctx, 2));
label_1d3168:
    // 0x1d3168: 0x3c01003e
    ctx->pc = 0x1d3168u;
    SET_GPR_U32(ctx, 1, ((uint32_t)62 << 16));
    // 0x1d316c: 0x3203ffff
    ctx->pc = 0x1d316cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 16), 65535));
    // 0x1d3170: 0x8422ba50
    ctx->pc = 0x1d3170u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294949456)));
    // 0x1d3174: 0x62102a
    ctx->pc = 0x1d3174u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x1d3178: 0x1440fff3
    ctx->pc = 0x1D3178u;
    {
        const bool branch_taken_0x1d3178 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D317Cu;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 16), 65535));
        if (branch_taken_0x1d3178) {
            ctx->pc = 0x1D3148u;
            goto label_1d3148;
        }
    }
    ctx->pc = 0x1D3180u;
    // 0x1d3180: 0x96450816
    ctx->pc = 0x1d3180u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2070)));
    // 0x1d3184: 0x31040
    ctx->pc = 0x1d3184u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d3188: 0x5d1821
    ctx->pc = 0x1d3188u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d318c: 0x3c010032
    ctx->pc = 0x1d318cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1d3190: 0x3c020020
    ctx->pc = 0x1d3190u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32 << 16));
    // 0x1d3194: 0x27a40060
    ctx->pc = 0x1d3194u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    // 0x1d3198: 0xa46500b0
    ctx->pc = 0x1d3198u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 176), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d319c: 0x8c23440c
    ctx->pc = 0x1d319cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 17420)));
    // 0x1d31a0: 0xc063f7c
    ctx->pc = 0x1D31A0u;
    SET_GPR_U32(ctx, 31, 0x1D31A8u);
    ctx->pc = 0x1D31A4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x18FDF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018FDF0_0x18fdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D31A8u; }
    }
    if (ctx->pc != 0x1D31A8u) { return; }
    ctx->pc = 0x1D31A8u;
    // 0x1d31a8: 0x1000005b
    ctx->pc = 0x1D31A8u;
    {
        const bool branch_taken_0x1d31a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D31ACu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d31a8) {
            ctx->pc = 0x1D3318u;
            goto label_1d3318;
        }
    }
    ctx->pc = 0x1D31B0u;
label_1d31b0:
    // 0x1d31b0: 0x27a400a0
    ctx->pc = 0x1d31b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d31b4: 0x200282d
    ctx->pc = 0x1d31b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d31b8: 0xc074d50
    ctx->pc = 0x1D31B8u;
    SET_GPR_U32(ctx, 31, 0x1D31C0u);
    ctx->pc = 0x1D31BCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D3540u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3540_0x1d3540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D31C0u; }
    }
    if (ctx->pc != 0x1D31C0u) { return; }
    ctx->pc = 0x1D31C0u;
    // 0x1d31c0: 0xc064920
    ctx->pc = 0x1D31C0u;
    SET_GPR_U32(ctx, 31, 0x1D31C8u);
    ctx->pc = 0x1D31C4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
    ctx->pc = 0x192480u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00192480_0x192480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D31C8u; }
    }
    if (ctx->pc != 0x1D31C8u) { return; }
    ctx->pc = 0x1D31C8u;
    // 0x1d31c8: 0xae42080c
    ctx->pc = 0x1d31c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2060), GPR_U32(ctx, 2));
    // 0x1d31cc: 0xc06c430
    ctx->pc = 0x1D31CCu;
    SET_GPR_U32(ctx, 31, 0x1D31D4u);
    ctx->pc = 0x1D31D0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 2060)));
    ctx->pc = 0x1B10C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B10C0_0x1b10c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D31D4u; }
    }
    if (ctx->pc != 0x1D31D4u) { return; }
    ctx->pc = 0x1D31D4u;
    // 0x1d31d4: 0x8e45080c
    ctx->pc = 0x1d31d4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 2060)));
    // 0x1d31d8: 0xc064ce0
    ctx->pc = 0x1D31D8u;
    SET_GPR_U32(ctx, 31, 0x1D31E0u);
    ctx->pc = 0x1D31DCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193380u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00193380_0x193380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D31E0u; }
    }
    if (ctx->pc != 0x1D31E0u) { return; }
    ctx->pc = 0x1D31E0u;
    // 0x1d31e0: 0x200202d
    ctx->pc = 0x1d31e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d31e4: 0xc064c90
    ctx->pc = 0x1D31E4u;
    SET_GPR_U32(ctx, 31, 0x1D31ECu);
    ctx->pc = 0x1D31E8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x193240u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00193240_0x193240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D31ECu; }
    }
    if (ctx->pc != 0x1D31ECu) { return; }
    ctx->pc = 0x1D31ECu;
    // 0x1d31ec: 0x3263ffff
    ctx->pc = 0x1d31ecu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), 65535));
    // 0x1d31f0: 0x3c04003d
    ctx->pc = 0x1d31f0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)61 << 16));
    // 0x1d31f4: 0x33840
    ctx->pc = 0x1d31f4u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d31f8: 0x24849230
    ctx->pc = 0x1d31f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939184));
    // 0x1d31fc: 0xe31821
    ctx->pc = 0x1d31fcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1d3200: 0x3c010001
    ctx->pc = 0x1d3200u;
    SET_GPR_U32(ctx, 1, ((uint32_t)1 << 16));
    // 0x1d3204: 0x319c0
    ctx->pc = 0x1d3204u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 7));
    // 0x1d3208: 0x141040
    ctx->pc = 0x1d3208u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 1));
    // 0x1d320c: 0x832821
    ctx->pc = 0x1d320cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d3210: 0x873021
    ctx->pc = 0x1d3210u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1d3214: 0x342128e4
    ctx->pc = 0x1d3214u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 10468));
    // 0x1d3218: 0xfd1821
    ctx->pc = 0x1d3218u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x1d321c: 0xc12021
    ctx->pc = 0x1d321cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x1d3220: 0x5d1021
    ctx->pc = 0x1d3220u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d3224: 0xa4800000
    ctx->pc = 0x1d3224u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d3228: 0x246700b0
    ctx->pc = 0x1d3228u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 176));
    // 0x1d322c: 0x3c010001
    ctx->pc = 0x1d322cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)1 << 16));
    // 0x1d3230: 0x944200b2
    ctx->pc = 0x1d3230u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 178)));
    // 0x1d3234: 0x34212824
    ctx->pc = 0x1d3234u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 10276));
    // 0x1d3238: 0x94e90000
    ctx->pc = 0x1d3238u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d323c: 0xc13021
    ctx->pc = 0x1d323cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x1d3240: 0x200402d
    ctx->pc = 0x1d3240u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3244: 0x34019820
    ctx->pc = 0x1d3244u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 0), 38944));
    // 0x1d3248: 0x10000028
    ctx->pc = 0x1D3248u;
    {
        const bool branch_taken_0x1d3248 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D324Cu;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
        if (branch_taken_0x1d3248) {
            ctx->pc = 0x1D32ECu;
            goto label_1d32ec;
        }
    }
    ctx->pc = 0x1D3250u;
label_1d3250:
    // 0x1d3250: 0x94ea0000
    ctx->pc = 0x1d3250u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d3254: 0x156a0004
    ctx->pc = 0x1D3254u;
    {
        const bool branch_taken_0x1d3254 = (GPR_U32(ctx, 11) != GPR_U32(ctx, 10));
        if (branch_taken_0x1d3254) {
            ctx->pc = 0x1D3268u;
            goto label_1d3268;
        }
    }
    ctx->pc = 0x1D325Cu;
    // 0x1d325c: 0x950a00c6
    ctx->pc = 0x1d325cu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 198)));
    // 0x1d3260: 0x1000001f
    ctx->pc = 0x1D3260u;
    {
        const bool branch_taken_0x1d3260 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D3264u;
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 10));
        if (branch_taken_0x1d3260) {
            ctx->pc = 0x1D32E0u;
            goto label_1d32e0;
        }
    }
    ctx->pc = 0x1D3268u;
label_1d3268:
    // 0x1d3268: 0x848a0000
    ctx->pc = 0x1d3268u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d326c: 0x240c0008
    ctx->pc = 0x1d326cu;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d3270: 0x100702d
    ctx->pc = 0x1d3270u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3274: 0xa5180
    ctx->pc = 0x1d3274u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 6));
    // 0x1d3278: 0xaa5021
    ctx->pc = 0x1d3278u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x1d327c: 0x254d0820
    ctx->pc = 0x1d327cu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 10), 2080));
label_1d3280:
    // 0x1d3280: 0x8dcb0000
    ctx->pc = 0x1d3280u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1d3284: 0x258cffff
    ctx->pc = 0x1d3284u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x1d3288: 0x8dca0004
    ctx->pc = 0x1d3288u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x1d328c: 0xadab0000
    ctx->pc = 0x1d328cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 11));
    // 0x1d3290: 0x25ce0008
    ctx->pc = 0x1d3290u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 8));
    // 0x1d3294: 0xadaa0004
    ctx->pc = 0x1d3294u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 10));
    // 0x1d3298: 0x1d80fff9
    ctx->pc = 0x1D3298u;
    {
        const bool branch_taken_0x1d3298 = (GPR_S32(ctx, 12) > 0);
        ctx->pc = 0x1D329Cu;
        SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 8));
        if (branch_taken_0x1d3298) {
            ctx->pc = 0x1D3280u;
            goto label_1d3280;
        }
    }
    ctx->pc = 0x1D32A0u;
    // 0x1d32a0: 0x848a0000
    ctx->pc = 0x1d32a0u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d32a4: 0x250d0080
    ctx->pc = 0x1d32a4u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 8), 128));
    // 0x1d32a8: 0x240c0008
    ctx->pc = 0x1d32a8u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d32ac: 0xa5180
    ctx->pc = 0x1d32acu;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 6));
    // 0x1d32b0: 0x6a7021
    ctx->pc = 0x1d32b0u;
    SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_1d32b4:
    // 0x1d32b4: 0x8dab0000
    ctx->pc = 0x1d32b4u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1d32b8: 0x258cffff
    ctx->pc = 0x1d32b8u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x1d32bc: 0x8daa0004
    ctx->pc = 0x1d32bcu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x1d32c0: 0xadcb0000
    ctx->pc = 0x1d32c0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 11));
    // 0x1d32c4: 0x25ad0008
    ctx->pc = 0x1d32c4u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 8));
    // 0x1d32c8: 0xadca0004
    ctx->pc = 0x1d32c8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 10));
    // 0x1d32cc: 0x1d80fff9
    ctx->pc = 0x1D32CCu;
    {
        const bool branch_taken_0x1d32cc = (GPR_S32(ctx, 12) > 0);
        ctx->pc = 0x1D32D0u;
        SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 8));
        if (branch_taken_0x1d32cc) {
            ctx->pc = 0x1D32B4u;
            goto label_1d32b4;
        }
    }
    ctx->pc = 0x1D32D4u;
    // 0x1d32d4: 0x848a0000
    ctx->pc = 0x1d32d4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d32d8: 0x254a0001
    ctx->pc = 0x1d32d8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x1d32dc: 0xa48a0000
    ctx->pc = 0x1d32dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 10));
label_1d32e0:
    // 0x1d32e0: 0x25290001
    ctx->pc = 0x1d32e0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d32e4: 0x25080190
    ctx->pc = 0x1d32e4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 400));
    // 0x1d32e8: 0x3129ffff
    ctx->pc = 0x1d32e8u;
    SET_GPR_U32(ctx, 9, AND32(GPR_U32(ctx, 9), 65535));
label_1d32ec:
    // 0x1d32ec: 0x312bffff
    ctx->pc = 0x1d32ecu;
    SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 9), 65535));
    // 0x1d32f0: 0x162502a
    ctx->pc = 0x1d32f0u;
    SET_GPR_U32(ctx, 10, SLT32(GPR_S32(ctx, 11), GPR_S32(ctx, 2)));
    // 0x1d32f4: 0x1540ffd6
    ctx->pc = 0x1D32F4u;
    {
        const bool branch_taken_0x1d32f4 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d32f4) {
            ctx->pc = 0x1D3250u;
            goto label_1d3250;
        }
    }
    ctx->pc = 0x1D32FCu;
    // 0x1d32fc: 0xc064960
    ctx->pc = 0x1D32FCu;
    SET_GPR_U32(ctx, 31, 0x1D3304u);
    ctx->pc = 0x1D3300u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 2060)));
    ctx->pc = 0x192580u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00192580_0x192580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3304u; }
    }
    if (ctx->pc != 0x1D3304u) { return; }
    ctx->pc = 0x1D3304u;
    // 0x1d3304: 0xc06c444
    ctx->pc = 0x1D3304u;
    SET_GPR_U32(ctx, 31, 0x1D330Cu);
    ctx->pc = 0x1D3308u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 2060)));
    ctx->pc = 0x1B1110u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1110_0x1b1110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D330Cu; }
    }
    if (ctx->pc != 0x1D330Cu) { return; }
    ctx->pc = 0x1D330Cu;
    // 0x1d330c: 0x26630001
    ctx->pc = 0x1d330cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d3310: 0xae40080c
    ctx->pc = 0x1d3310u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2060), GPR_U32(ctx, 0));
    // 0x1d3314: 0x3073ffff
    ctx->pc = 0x1d3314u;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 3), 65535));
label_1d3318:
    // 0x1d3318: 0x3c01003e
    ctx->pc = 0x1d3318u;
    SET_GPR_U32(ctx, 1, ((uint32_t)62 << 16));
    // 0x1d331c: 0x3274ffff
    ctx->pc = 0x1d331cu;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 19), 65535));
    // 0x1d3320: 0x8423ba50
    ctx->pc = 0x1d3320u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294949456)));
    // 0x1d3324: 0x283182a
    ctx->pc = 0x1d3324u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 3)));
    // 0x1d3328: 0x1460ffa1
    ctx->pc = 0x1D3328u;
    {
        const bool branch_taken_0x1d3328 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D332Cu;
        SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 19), 65535));
        if (branch_taken_0x1d3328) {
            ctx->pc = 0x1D31B0u;
            goto label_1d31b0;
        }
    }
    ctx->pc = 0x1D3330u;
    // 0x1d3330: 0xdfbf0050
    ctx->pc = 0x1d3330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d3334: 0x7bb40040
    ctx->pc = 0x1d3334u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d3338: 0x7bb30030
    ctx->pc = 0x1d3338u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d333c: 0x7bb20020
    ctx->pc = 0x1d333cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3340: 0x7bb10010
    ctx->pc = 0x1d3340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3344: 0x7bb00000
    ctx->pc = 0x1d3344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3348: 0x3e00008
    ctx->pc = 0x1D3348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D334Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3148u: goto label_1d3148;
            case 0x1D3168u: goto label_1d3168;
            case 0x1D31B0u: goto label_1d31b0;
            case 0x1D3250u: goto label_1d3250;
            case 0x1D3268u: goto label_1d3268;
            case 0x1D3280u: goto label_1d3280;
            case 0x1D32B4u: goto label_1d32b4;
            case 0x1D32E0u: goto label_1d32e0;
            case 0x1D32ECu: goto label_1d32ec;
            case 0x1D3318u: goto label_1d3318;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D3350u;
}
