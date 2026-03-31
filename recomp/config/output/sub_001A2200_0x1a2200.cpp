#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A2200
// Address: 0x1a2200 - 0x1a22d0
void sub_001A2200_0x1a2200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a2200u;

    // 0x1a2200: 0x27bdffc0
    ctx->pc = 0x1a2200u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a2204: 0xffbf0030
    ctx->pc = 0x1a2204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a2208: 0x7fb20020
    ctx->pc = 0x1a2208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a220c: 0x7fb10010
    ctx->pc = 0x1a220cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a2210: 0xc0902d
    ctx->pc = 0x1a2210u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2214: 0x7fb00000
    ctx->pc = 0x1a2214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a2218: 0x80882d
    ctx->pc = 0x1a2218u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a221c: 0xa0802d
    ctx->pc = 0x1a221cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2220: 0xc068ab4
    ctx->pc = 0x1A2220u;
    SET_GPR_U32(ctx, 31, 0x1A2228u);
    ctx->pc = 0x1A2224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A2AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2AD0_0x1a2ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2228u; }
    }
    if (ctx->pc != 0x1A2228u) { return; }
    ctx->pc = 0x1A2228u;
    // 0x1a2228: 0x52182a
    ctx->pc = 0x1a2228u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 18)));
    // 0x1a222c: 0x14600022
    ctx->pc = 0x1A222Cu;
    {
        const bool branch_taken_0x1a222c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A2230u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a222c) {
            ctx->pc = 0x1A22B8u;
            goto label_1a22b8;
        }
    }
    ctx->pc = 0x1A2234u;
    // 0x1a2234: 0xc06876c
    ctx->pc = 0x1A2234u;
    SET_GPR_U32(ctx, 31, 0x1A223Cu);
    ctx->pc = 0x1A2238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A1DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1DB0_0x1a1db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A223Cu; }
    }
    if (ctx->pc != 0x1A223Cu) { return; }
    ctx->pc = 0x1A223Cu;
    // 0x1a223c: 0x1040001e
    ctx->pc = 0x1A223Cu;
    {
        const bool branch_taken_0x1a223c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A2240u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a223c) {
            ctx->pc = 0x1A22B8u;
            goto label_1a22b8;
        }
    }
    ctx->pc = 0x1A2244u;
    // 0x1a2244: 0xc068768
    ctx->pc = 0x1A2244u;
    SET_GPR_U32(ctx, 31, 0x1A224Cu);
    ctx->pc = 0x1A2248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A1DA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1DA0_0x1a1da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A224Cu; }
    }
    if (ctx->pc != 0x1A224Cu) { return; }
    ctx->pc = 0x1A224Cu;
    // 0x1a224c: 0x1040001a
    ctx->pc = 0x1A224Cu;
    {
        const bool branch_taken_0x1a224c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a224c) {
            ctx->pc = 0x1A22B8u;
            goto label_1a22b8;
        }
    }
    ctx->pc = 0x1A2254u;
    // 0x1a2254: 0x90440000
    ctx->pc = 0x1a2254u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a2258: 0x24030002
    ctx->pc = 0x1a2258u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a225c: 0x10830008
    ctx->pc = 0x1A225Cu;
    {
        const bool branch_taken_0x1a225c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1A2260u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8192));
        if (branch_taken_0x1a225c) {
            ctx->pc = 0x1A2280u;
            goto label_1a2280;
        }
    }
    ctx->pc = 0x1A2264u;
    // 0x1a2264: 0x24030001
    ctx->pc = 0x1a2264u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2268: 0x10830003
    ctx->pc = 0x1A2268u;
    {
        const bool branch_taken_0x1a2268 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1A226Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4096));
        if (branch_taken_0x1a2268) {
            ctx->pc = 0x1A2278u;
            goto label_1a2278;
        }
    }
    ctx->pc = 0x1A2270u;
    // 0x1a2270: 0x10000005
    ctx->pc = 0x1A2270u;
    {
        const bool branch_taken_0x1a2270 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A2274u;
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        if (branch_taken_0x1a2270) {
            ctx->pc = 0x1A2288u;
            goto label_1a2288;
        }
    }
    ctx->pc = 0x1A2278u;
label_1a2278:
    // 0x1a2278: 0x10000002
    ctx->pc = 0x1A2278u;
    {
        const bool branch_taken_0x1a2278 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A227Cu;
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1a2278) {
            ctx->pc = 0x1A2284u;
            goto label_1a2284;
        }
    }
    ctx->pc = 0x1A2280u;
label_1a2280:
    // 0x1a2280: 0xa6230000
    ctx->pc = 0x1a2280u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
label_1a2284:
    // 0x1a2284: 0x96240000
    ctx->pc = 0x1a2284u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_1a2288:
    // 0x1a2288: 0x24032000
    ctx->pc = 0x1a2288u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1a228c: 0x3084f000
    ctx->pc = 0x1a228cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 61440));
    // 0x1a2290: 0x10830005
    ctx->pc = 0x1A2290u;
    {
        const bool branch_taken_0x1a2290 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1A2294u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4096));
        if (branch_taken_0x1a2290) {
            ctx->pc = 0x1A22A8u;
            goto label_1a22a8;
        }
    }
    ctx->pc = 0x1A2298u;
    // 0x1a2298: 0x10830003
    ctx->pc = 0x1A2298u;
    {
        const bool branch_taken_0x1a2298 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1a2298) {
            ctx->pc = 0x1A22A8u;
            goto label_1a22a8;
        }
    }
    ctx->pc = 0x1A22A0u;
    // 0x1a22a0: 0x10000006
    ctx->pc = 0x1A22A0u;
    {
        const bool branch_taken_0x1a22a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A22A4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x1a22a0) {
            ctx->pc = 0x1A22BCu;
            goto label_1a22bc;
        }
    }
    ctx->pc = 0x1A22A8u;
label_1a22a8:
    // 0x1a22a8: 0x200202d
    ctx->pc = 0x1a22a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a22ac: 0x220282d
    ctx->pc = 0x1a22acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a22b0: 0xc0688b4
    ctx->pc = 0x1A22B0u;
    SET_GPR_U32(ctx, 31, 0x1A22B8u);
    ctx->pc = 0x1A22B4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A22D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A22D0_0x1a22d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A22B8u; }
    }
    if (ctx->pc != 0x1A22B8u) { return; }
    ctx->pc = 0x1A22B8u;
label_1a22b8:
    // 0x1a22b8: 0xdfbf0030
    ctx->pc = 0x1a22b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a22bc:
    // 0x1a22bc: 0x7bb20020
    ctx->pc = 0x1a22bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a22c0: 0x7bb10010
    ctx->pc = 0x1a22c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a22c4: 0x7bb00000
    ctx->pc = 0x1a22c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a22c8: 0x3e00008
    ctx->pc = 0x1A22C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A22CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A2278u: goto label_1a2278;
            case 0x1A2280u: goto label_1a2280;
            case 0x1A2284u: goto label_1a2284;
            case 0x1A2288u: goto label_1a2288;
            case 0x1A22A8u: goto label_1a22a8;
            case 0x1A22B8u: goto label_1a22b8;
            case 0x1A22BCu: goto label_1a22bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A22D0u;
}
