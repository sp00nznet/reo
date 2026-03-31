#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C2120
// Address: 0x1c2120 - 0x1c2260
void sub_001C2120_0x1c2120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c2120u;

    // 0x1c2120: 0x27bdff10
    ctx->pc = 0x1c2120u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1c2124: 0xffbf0050
    ctx->pc = 0x1c2124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c2128: 0x7fb40040
    ctx->pc = 0x1c2128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c212c: 0x7fb30030
    ctx->pc = 0x1c212cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c2130: 0xc0a02d
    ctx->pc = 0x1c2130u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2134: 0x7fb20020
    ctx->pc = 0x1c2134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c2138: 0xe0982d
    ctx->pc = 0x1c2138u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c213c: 0x7fb10010
    ctx->pc = 0x1c213cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c2140: 0x902d
    ctx->pc = 0x1c2140u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2144: 0x7fb00000
    ctx->pc = 0x1c2144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c2148: 0x80882d
    ctx->pc = 0x1c2148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c214c: 0xa0802d
    ctx->pc = 0x1c214cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2150: 0xc06d584
    ctx->pc = 0x1C2150u;
    SET_GPR_U32(ctx, 31, 0x1C2158u);
    ctx->pc = 0x1C2154u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->pc = 0x1B5610u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5610_0x1b5610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2158u; }
    }
    if (ctx->pc != 0x1C2158u) { return; }
    ctx->pc = 0x1C2158u;
    // 0x1c2158: 0x220202d
    ctx->pc = 0x1c2158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c215c: 0xc06d57c
    ctx->pc = 0x1C215Cu;
    SET_GPR_U32(ctx, 31, 0x1C2164u);
    ctx->pc = 0x1C2160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B55F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B55F0_0x1b55f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2164u; }
    }
    if (ctx->pc != 0x1C2164u) { return; }
    ctx->pc = 0x1C2164u;
    // 0x1c2164: 0x10000030
    ctx->pc = 0x1C2164u;
    {
        const bool branch_taken_0x1c2164 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2168u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
        if (branch_taken_0x1c2164) {
            ctx->pc = 0x1C2228u;
            goto label_1c2228;
        }
    }
    ctx->pc = 0x1C216Cu;
label_1c216c:
    // 0x1c216c: 0xc070898
    ctx->pc = 0x1C216Cu;
    SET_GPR_U32(ctx, 31, 0x1C2174u);
    ctx->pc = 0x1C2170u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x1C2260u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2260_0x1c2260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2174u; }
    }
    if (ctx->pc != 0x1C2174u) { return; }
    ctx->pc = 0x1C2174u;
    // 0x1c2174: 0x14400028
    ctx->pc = 0x1C2174u;
    {
        const bool branch_taken_0x1c2174 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C2178u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c2174) {
            ctx->pc = 0x1C2218u;
            goto label_1c2218;
        }
    }
    ctx->pc = 0x1C217Cu;
    // 0x1c217c: 0x280202d
    ctx->pc = 0x1c217cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2180: 0xc0708b0
    ctx->pc = 0x1C2180u;
    SET_GPR_U32(ctx, 31, 0x1C2188u);
    ctx->pc = 0x1C2184u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x1C22C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C22C0_0x1c22c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2188u; }
    }
    if (ctx->pc != 0x1C2188u) { return; }
    ctx->pc = 0x1C2188u;
    // 0x1c2188: 0x16600005
    ctx->pc = 0x1C2188u;
    {
        const bool branch_taken_0x1c2188 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C218Cu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c2188) {
            ctx->pc = 0x1C21A0u;
            goto label_1c21a0;
        }
    }
    ctx->pc = 0x1C2190u;
    // 0x1c2190: 0xc06de28
    ctx->pc = 0x1C2190u;
    SET_GPR_U32(ctx, 31, 0x1C2198u);
    ctx->pc = 0x1C2194u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x1B78A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B78A0_0x1b78a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2198u; }
    }
    if (ctx->pc != 0x1C2198u) { return; }
    ctx->pc = 0x1C2198u;
    // 0x1c2198: 0x10000022
    ctx->pc = 0x1C2198u;
    {
        const bool branch_taken_0x1c2198 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c2198) {
            ctx->pc = 0x1C2224u;
            goto label_1c2224;
        }
    }
    ctx->pc = 0x1C21A0u;
label_1c21a0:
    // 0x1c21a0: 0x27b00060
    ctx->pc = 0x1c21a0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c21a4: 0x10000017
    ctx->pc = 0x1C21A4u;
    {
        const bool branch_taken_0x1c21a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C21A8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 236));
        if (branch_taken_0x1c21a4) {
            ctx->pc = 0x1C2204u;
            goto label_1c2204;
        }
    }
    ctx->pc = 0x1C21ACu;
label_1c21ac:
    // 0x1c21ac: 0xc06db50
    ctx->pc = 0x1C21ACu;
    SET_GPR_U32(ctx, 31, 0x1C21B4u);
    ctx->pc = 0x1C21B0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B6D40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6D40_0x1b6d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C21B4u; }
    }
    if (ctx->pc != 0x1C21B4u) { return; }
    ctx->pc = 0x1C21B4u;
    // 0x1c21b4: 0x30430003
    ctx->pc = 0x1c21b4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 3));
    // 0x1c21b8: 0x10000006
    ctx->pc = 0x1C21B8u;
    {
        const bool branch_taken_0x1c21b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C21BCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c21b8) {
            ctx->pc = 0x1C21D4u;
            goto label_1c21d4;
        }
    }
    ctx->pc = 0x1C21C0u;
label_1c21c0:
    // 0x1c21c0: 0x82020000
    ctx->pc = 0x1c21c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c21c4: 0x24840001
    ctx->pc = 0x1c21c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1c21c8: 0xa2220000
    ctx->pc = 0x1c21c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c21cc: 0x26100001
    ctx->pc = 0x1c21ccu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c21d0: 0x26310001
    ctx->pc = 0x1c21d0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1c21d4:
    // 0x1c21d4: 0x83102a
    ctx->pc = 0x1c21d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x1c21d8: 0x1440fff9
    ctx->pc = 0x1C21D8u;
    {
        const bool branch_taken_0x1c21d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c21d8) {
            ctx->pc = 0x1C21C0u;
            goto label_1c21c0;
        }
    }
    ctx->pc = 0x1C21E0u;
    // 0x1c21e0: 0x27a400ec
    ctx->pc = 0x1c21e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 236));
    // 0x1c21e4: 0xc06de28
    ctx->pc = 0x1C21E4u;
    SET_GPR_U32(ctx, 31, 0x1C21ECu);
    ctx->pc = 0x1C21E8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1B78A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B78A0_0x1b78a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C21ECu; }
    }
    if (ctx->pc != 0x1C21ECu) { return; }
    ctx->pc = 0x1C21ECu;
    // 0x1c21ec: 0x26520001
    ctx->pc = 0x1c21ecu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x1c21f0: 0x253102a
    ctx->pc = 0x1c21f0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 19)));
    // 0x1c21f4: 0x14400003
    ctx->pc = 0x1C21F4u;
    {
        const bool branch_taken_0x1c21f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C21F8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 236));
        if (branch_taken_0x1c21f4) {
            ctx->pc = 0x1C2204u;
            goto label_1c2204;
        }
    }
    ctx->pc = 0x1C21FCu;
    // 0x1c21fc: 0x1000000d
    ctx->pc = 0x1C21FCu;
    {
        const bool branch_taken_0x1c21fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2200u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c21fc) {
            ctx->pc = 0x1C2234u;
            goto label_1c2234;
        }
    }
    ctx->pc = 0x1C2204u;
label_1c2204:
    // 0x1c2204: 0x92020000
    ctx->pc = 0x1c2204u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c2208: 0x1440ffe8
    ctx->pc = 0x1C2208u;
    {
        const bool branch_taken_0x1c2208 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c2208) {
            ctx->pc = 0x1C21ACu;
            goto label_1c21ac;
        }
    }
    ctx->pc = 0x1C2210u;
    // 0x1c2210: 0x10000004
    ctx->pc = 0x1C2210u;
    {
        const bool branch_taken_0x1c2210 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c2210) {
            ctx->pc = 0x1C2224u;
            goto label_1c2224;
        }
    }
    ctx->pc = 0x1C2218u;
label_1c2218:
    // 0x1c2218: 0xc0708d8
    ctx->pc = 0x1C2218u;
    SET_GPR_U32(ctx, 31, 0x1C2220u);
    ctx->pc = 0x1C221Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x1C2360u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2360_0x1c2360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2220u; }
    }
    if (ctx->pc != 0x1C2220u) { return; }
    ctx->pc = 0x1C2220u;
    // 0x1c2220: 0x200a02d
    ctx->pc = 0x1c2220u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c2224:
    // 0x1c2224: 0x82820000
    ctx->pc = 0x1c2224u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_1c2228:
    // 0x1c2228: 0x1440ffd0
    ctx->pc = 0x1C2228u;
    {
        const bool branch_taken_0x1c2228 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C222Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c2228) {
            ctx->pc = 0x1C216Cu;
            goto label_1c216c;
        }
    }
    ctx->pc = 0x1C2230u;
    // 0x1c2230: 0x102d
    ctx->pc = 0x1c2230u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2234:
    // 0x1c2234: 0xdfbf0050
    ctx->pc = 0x1c2234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c2238: 0x7bb40040
    ctx->pc = 0x1c2238u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c223c: 0x7bb30030
    ctx->pc = 0x1c223cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c2240: 0x7bb20020
    ctx->pc = 0x1c2240u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2244: 0x7bb10010
    ctx->pc = 0x1c2244u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2248: 0x7bb00000
    ctx->pc = 0x1c2248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c224c: 0x3e00008
    ctx->pc = 0x1C224Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2250u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C216Cu: goto label_1c216c;
            case 0x1C21A0u: goto label_1c21a0;
            case 0x1C21ACu: goto label_1c21ac;
            case 0x1C21C0u: goto label_1c21c0;
            case 0x1C21D4u: goto label_1c21d4;
            case 0x1C2204u: goto label_1c2204;
            case 0x1C2218u: goto label_1c2218;
            case 0x1C2224u: goto label_1c2224;
            case 0x1C2228u: goto label_1c2228;
            case 0x1C2234u: goto label_1c2234;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C2254u;
    // 0x1c2254: 0x0
    ctx->pc = 0x1c2254u;
    // NOP
    // 0x1c2258: 0x0
    ctx->pc = 0x1c2258u;
    // NOP
    // 0x1c225c: 0x0
    ctx->pc = 0x1c225cu;
    // NOP
}
