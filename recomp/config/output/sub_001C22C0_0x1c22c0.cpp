#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C22C0
// Address: 0x1c22c0 - 0x1c2360
void sub_001C22C0_0x1c22c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c22c0u;

    // 0x1c22c0: 0x27bdffc0
    ctx->pc = 0x1c22c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c22c4: 0xffbf0030
    ctx->pc = 0x1c22c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c22c8: 0x7fb20020
    ctx->pc = 0x1c22c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c22cc: 0x7fb10010
    ctx->pc = 0x1c22ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c22d0: 0x7fb00000
    ctx->pc = 0x1c22d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c22d4: 0x80882d
    ctx->pc = 0x1c22d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c22d8: 0x10000016
    ctx->pc = 0x1C22D8u;
    {
        const bool branch_taken_0x1c22d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C22DCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c22d8) {
            ctx->pc = 0x1C2334u;
            goto label_1c2334;
        }
    }
    ctx->pc = 0x1C22E0u;
label_1c22e0:
    // 0x1c22e0: 0xc06db50
    ctx->pc = 0x1C22E0u;
    SET_GPR_U32(ctx, 31, 0x1C22E8u);
    ctx->pc = 0x1C22E4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B6D40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6D40_0x1b6d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C22E8u; }
    }
    if (ctx->pc != 0x1C22E8u) { return; }
    ctx->pc = 0x1C22E8u;
    // 0x1c22e8: 0x30440003
    ctx->pc = 0x1c22e8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 3));
    // 0x1c22ec: 0x24020001
    ctx->pc = 0x1c22ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c22f0: 0x14820006
    ctx->pc = 0x1C22F0u;
    {
        const bool branch_taken_0x1c22f0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x1C22F4u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c22f0) {
            ctx->pc = 0x1C230Cu;
            goto label_1c230c;
        }
    }
    ctx->pc = 0x1C22F8u;
    // 0x1c22f8: 0x324300ff
    ctx->pc = 0x1c22f8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 18), 255));
    // 0x1c22fc: 0x2402003c
    ctx->pc = 0x1c22fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x1c2300: 0x1062000f
    ctx->pc = 0x1C2300u;
    {
        const bool branch_taken_0x1c2300 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1c2300) {
            ctx->pc = 0x1C2340u;
            goto label_1c2340;
        }
    }
    ctx->pc = 0x1C2308u;
    // 0x1c2308: 0x182d
    ctx->pc = 0x1c2308u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c230c:
    // 0x1c230c: 0x10000007
    ctx->pc = 0x1C230Cu;
    {
        const bool branch_taken_0x1c230c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2310u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
        if (branch_taken_0x1c230c) {
            ctx->pc = 0x1C232Cu;
            goto label_1c232c;
        }
    }
    ctx->pc = 0x1C2314u;
label_1c2314:
    // 0x1c2314: 0x82220000
    ctx->pc = 0x1c2314u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c2318: 0x24630001
    ctx->pc = 0x1c2318u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c231c: 0xa2020000
    ctx->pc = 0x1c231cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c2320: 0x26310001
    ctx->pc = 0x1c2320u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1c2324: 0x26100001
    ctx->pc = 0x1c2324u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c2328: 0x64102a
    ctx->pc = 0x1c2328u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
label_1c232c:
    // 0x1c232c: 0x1440fff9
    ctx->pc = 0x1C232Cu;
    {
        const bool branch_taken_0x1c232c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c232c) {
            ctx->pc = 0x1C2314u;
            goto label_1c2314;
        }
    }
    ctx->pc = 0x1C2334u;
label_1c2334:
    // 0x1c2334: 0x82220000
    ctx->pc = 0x1c2334u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c2338: 0x1440ffe9
    ctx->pc = 0x1C2338u;
    {
        const bool branch_taken_0x1c2338 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C233Cu;
        SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 2), 255));
        if (branch_taken_0x1c2338) {
            ctx->pc = 0x1C22E0u;
            goto label_1c22e0;
        }
    }
    ctx->pc = 0x1C2340u;
label_1c2340:
    // 0x1c2340: 0xa2000000
    ctx->pc = 0x1c2340u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c2344: 0x220102d
    ctx->pc = 0x1c2344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2348: 0xdfbf0030
    ctx->pc = 0x1c2348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c234c: 0x7bb20020
    ctx->pc = 0x1c234cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2350: 0x7bb10010
    ctx->pc = 0x1c2350u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2354: 0x7bb00000
    ctx->pc = 0x1c2354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2358: 0x3e00008
    ctx->pc = 0x1C2358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C235Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C22E0u: goto label_1c22e0;
            case 0x1C230Cu: goto label_1c230c;
            case 0x1C2314u: goto label_1c2314;
            case 0x1C232Cu: goto label_1c232c;
            case 0x1C2334u: goto label_1c2334;
            case 0x1C2340u: goto label_1c2340;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C2360u;
}
