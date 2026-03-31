#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B2140
// Address: 0x1b2140 - 0x1b22c0
void sub_001B2140_0x1b2140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b2140u;

label_1b2140:
    // 0x1b2140: 0x282d
    ctx->pc = 0x1b2140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2144: 0x8041f1a
    ctx->pc = 0x1B2144u;
    ctx->pc = 0x1B2148u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1004));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x1B214Cu;
    // 0x1b214c: 0x0
    ctx->pc = 0x1b214cu;
    // NOP
    // 0x1b2150: 0x27bdffe0
    ctx->pc = 0x1b2150u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b2154: 0x3c04004f
    ctx->pc = 0x1b2154u;
    SET_GPR_U32(ctx, 4, ((uint32_t)79 << 16));
    // 0x1b2158: 0xffbf0010
    ctx->pc = 0x1b2158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b215c: 0x2484a8c0
    ctx->pc = 0x1b215cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944960));
    // 0x1b2160: 0xc06c84c
    ctx->pc = 0x1B2160u;
    SET_GPR_U32(ctx, 31, 0x1B2168u);
    ctx->pc = 0x1B2164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1B2130u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2130_0x1b2130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2168u; }
    }
    if (ctx->pc != 0x1B2168u) { return; }
    ctx->pc = 0x1B2168u;
    // 0x1b2168: 0x3c04004f
    ctx->pc = 0x1b2168u;
    SET_GPR_U32(ctx, 4, ((uint32_t)79 << 16));
    // 0x1b216c: 0xc06c84c
    ctx->pc = 0x1B216Cu;
    SET_GPR_U32(ctx, 31, 0x1B2174u);
    ctx->pc = 0x1B2170u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936944));
    ctx->pc = 0x1B2130u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2130_0x1b2130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2174u; }
    }
    if (ctx->pc != 0x1B2174u) { return; }
    ctx->pc = 0x1B2174u;
    // 0x1b2174: 0x3c04004e
    ctx->pc = 0x1b2174u;
    SET_GPR_U32(ctx, 4, ((uint32_t)78 << 16));
    // 0x1b2178: 0xc06c84c
    ctx->pc = 0x1B2178u;
    SET_GPR_U32(ctx, 31, 0x1B2180u);
    ctx->pc = 0x1B217Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27168));
    ctx->pc = 0x1B2130u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2130_0x1b2130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2180u; }
    }
    if (ctx->pc != 0x1B2180u) { return; }
    ctx->pc = 0x1B2180u;
    // 0x1b2180: 0x802d
    ctx->pc = 0x1b2180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2184: 0x24031f44
    ctx->pc = 0x1b2184u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8004));
label_1b2188:
    // 0x1b2188: 0x3c02004d
    ctx->pc = 0x1b2188u;
    SET_GPR_U32(ctx, 2, ((uint32_t)77 << 16));
    // 0x1b218c: 0x2031818
    ctx->pc = 0x1b218cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1b2190: 0x24427000
    ctx->pc = 0x1b2190u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 28672));
    // 0x1b2194: 0xc06c84c
    ctx->pc = 0x1B2194u;
    SET_GPR_U32(ctx, 31, 0x1B219Cu);
    ctx->pc = 0x1B2198u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1B2130u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2130_0x1b2130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B219Cu; }
    }
    if (ctx->pc != 0x1B219Cu) { return; }
    ctx->pc = 0x1B219Cu;
    // 0x1b219c: 0x26100001
    ctx->pc = 0x1b219cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b21a0: 0x2a020008
    ctx->pc = 0x1b21a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 8));
    // 0x1b21a4: 0x1440fff8
    ctx->pc = 0x1B21A4u;
    {
        const bool branch_taken_0x1b21a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B21A8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8004));
        if (branch_taken_0x1b21a4) {
            ctx->pc = 0x1B2188u;
            goto label_1b2188;
        }
    }
    ctx->pc = 0x1B21ACu;
    // 0x1b21ac: 0x802d
    ctx->pc = 0x1b21acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b21b0: 0x24031f44
    ctx->pc = 0x1b21b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8004));
label_1b21b4:
    // 0x1b21b4: 0x3c02004c
    ctx->pc = 0x1b21b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)76 << 16));
    // 0x1b21b8: 0x2031818
    ctx->pc = 0x1b21b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1b21bc: 0x24423750
    ctx->pc = 0x1b21bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14160));
    // 0x1b21c0: 0xc06c84c
    ctx->pc = 0x1B21C0u;
    SET_GPR_U32(ctx, 31, 0x1B21C8u);
    ctx->pc = 0x1B21C4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1B2130u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2130_0x1b2130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B21C8u; }
    }
    if (ctx->pc != 0x1B21C8u) { return; }
    ctx->pc = 0x1B21C8u;
    // 0x1b21c8: 0x26100001
    ctx->pc = 0x1b21c8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b21cc: 0x2a02000a
    ctx->pc = 0x1b21ccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 10));
    // 0x1b21d0: 0x1440fff8
    ctx->pc = 0x1B21D0u;
    {
        const bool branch_taken_0x1b21d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B21D4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8004));
        if (branch_taken_0x1b21d0) {
            ctx->pc = 0x1B21B4u;
            goto label_1b21b4;
        }
    }
    ctx->pc = 0x1B21D8u;
    // 0x1b21d8: 0x802d
    ctx->pc = 0x1b21d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b21dc: 0x24030c84
    ctx->pc = 0x1b21dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3204));
label_1b21e0:
    // 0x1b21e0: 0x3c02004c
    ctx->pc = 0x1b21e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)76 << 16));
    // 0x1b21e4: 0x2031818
    ctx->pc = 0x1b21e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1b21e8: 0x2442ec30
    ctx->pc = 0x1b21e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962224));
    // 0x1b21ec: 0xc06c848
    ctx->pc = 0x1B21ECu;
    SET_GPR_U32(ctx, 31, 0x1B21F4u);
    ctx->pc = 0x1B21F0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1B2120u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2120_0x1b2120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B21F4u; }
    }
    if (ctx->pc != 0x1B21F4u) { return; }
    ctx->pc = 0x1B21F4u;
    // 0x1b21f4: 0x26100001
    ctx->pc = 0x1b21f4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b21f8: 0x2a020006
    ctx->pc = 0x1b21f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 6));
    // 0x1b21fc: 0x1440fff8
    ctx->pc = 0x1B21FCu;
    {
        const bool branch_taken_0x1b21fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B2200u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3204));
        if (branch_taken_0x1b21fc) {
            ctx->pc = 0x1B21E0u;
            goto label_1b21e0;
        }
    }
    ctx->pc = 0x1B2204u;
    // 0x1b2204: 0x802d
    ctx->pc = 0x1b2204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2208: 0x101980
    ctx->pc = 0x1b2208u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 6));
label_1b220c:
    // 0x1b220c: 0x3c02004c
    ctx->pc = 0x1b220cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)76 << 16));
    // 0x1b2210: 0x701823
    ctx->pc = 0x1b2210u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1b2214: 0x2442d4a0
    ctx->pc = 0x1b2214u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294956192));
    // 0x1b2218: 0x31880
    ctx->pc = 0x1b2218u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b221c: 0x701823
    ctx->pc = 0x1b221cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1b2220: 0x31880
    ctx->pc = 0x1b2220u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b2224: 0xc06c850
    ctx->pc = 0x1B2224u;
    SET_GPR_U32(ctx, 31, 0x1B222Cu);
    ctx->pc = 0x1B2228u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1B2140u;
    goto label_1b2140;
    ctx->pc = 0x1B222Cu;
label_1b222c:
    // 0x1b222c: 0x26100001
    ctx->pc = 0x1b222cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b2230: 0x2a030006
    ctx->pc = 0x1b2230u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 6));
    // 0x1b2234: 0x1460fff5
    ctx->pc = 0x1B2234u;
    {
        const bool branch_taken_0x1b2234 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B2238u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 6));
        if (branch_taken_0x1b2234) {
            ctx->pc = 0x1B220Cu;
            goto label_1b220c;
        }
    }
    ctx->pc = 0x1B223Cu;
    // 0x1b223c: 0x2406003d
    ctx->pc = 0x1b223cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 61));
    // 0x1b2240: 0x3c04004c
    ctx->pc = 0x1b2240u;
    SET_GPR_U32(ctx, 4, ((uint32_t)76 << 16));
    // 0x1b2244: 0x240500ff
    ctx->pc = 0x1b2244u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1b2248: 0x2484aeb0
    ctx->pc = 0x1b2248u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946480));
label_1b224c:
    // 0x1b224c: 0x861821
    ctx->pc = 0x1b224cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1b2250: 0x24c6ffff
    ctx->pc = 0x1b2250u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b2254: 0xa0650000
    ctx->pc = 0x1b2254u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1b2258: 0x0
    ctx->pc = 0x1b2258u;
    // NOP
    // 0x1b225c: 0x0
    ctx->pc = 0x1b225cu;
    // NOP
    // 0x1b2260: 0x4c1fffa
    ctx->pc = 0x1B2260u;
    {
        const bool branch_taken_0x1b2260 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x1b2260) {
            ctx->pc = 0x1B224Cu;
            goto label_1b224c;
        }
    }
    ctx->pc = 0x1B2268u;
    // 0x1b2268: 0xdfbf0010
    ctx->pc = 0x1b2268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b226c: 0x7bb00000
    ctx->pc = 0x1b226cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2270: 0x3e00008
    ctx->pc = 0x1B2270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2274u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B2140u: goto label_1b2140;
            case 0x1B2188u: goto label_1b2188;
            case 0x1B21B4u: goto label_1b21b4;
            case 0x1B21E0u: goto label_1b21e0;
            case 0x1B220Cu: goto label_1b220c;
            case 0x1B222Cu: goto label_1b222c;
            case 0x1B224Cu: goto label_1b224c;
            case 0x1B22A0u: goto label_1b22a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B2278u;
    // 0x1b2278: 0x0
    ctx->pc = 0x1b2278u;
    // NOP
    // 0x1b227c: 0x0
    ctx->pc = 0x1b227cu;
    // NOP
    // 0x1b2280: 0x27bdffe0
    ctx->pc = 0x1b2280u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b2284: 0xffbf0010
    ctx->pc = 0x1b2284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b2288: 0x7fb00000
    ctx->pc = 0x1b2288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b228c: 0x80830000
    ctx->pc = 0x1b228cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b2290: 0x10600003
    ctx->pc = 0x1B2290u;
    {
        const bool branch_taken_0x1b2290 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B2294u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b2290) {
            ctx->pc = 0x1B22A0u;
            goto label_1b22a0;
        }
    }
    ctx->pc = 0x1B2298u;
    // 0x1b2298: 0xc06c608
    ctx->pc = 0x1B2298u;
    SET_GPR_U32(ctx, 31, 0x1B22A0u);
    ctx->pc = 0x1B229Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4));
    ctx->pc = 0x1B1820u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1820_0x1b1820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B22A0u; }
    }
    if (ctx->pc != 0x1B22A0u) { return; }
    ctx->pc = 0x1B22A0u;
label_1b22a0:
    // 0x1b22a0: 0xa2000000
    ctx->pc = 0x1b22a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b22a4: 0xdfbf0010
    ctx->pc = 0x1b22a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b22a8: 0x7bb00000
    ctx->pc = 0x1b22a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b22ac: 0x3e00008
    ctx->pc = 0x1B22ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B22B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B2140u: goto label_1b2140;
            case 0x1B2188u: goto label_1b2188;
            case 0x1B21B4u: goto label_1b21b4;
            case 0x1B21E0u: goto label_1b21e0;
            case 0x1B220Cu: goto label_1b220c;
            case 0x1B222Cu: goto label_1b222c;
            case 0x1B224Cu: goto label_1b224c;
            case 0x1B22A0u: goto label_1b22a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B22B4u;
    // 0x1b22b4: 0x0
    ctx->pc = 0x1b22b4u;
    // NOP
    // 0x1b22b8: 0x0
    ctx->pc = 0x1b22b8u;
    // NOP
    // 0x1b22bc: 0x0
    ctx->pc = 0x1b22bcu;
    // NOP
}
