#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001124C8
// Address: 0x1124c8 - 0x112568
void sub_001124C8_0x1124c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1124c8u;

    // 0x1124c8: 0x27bdffc0
    ctx->pc = 0x1124c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1124cc: 0xffa40020
    ctx->pc = 0x1124ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x1124d0: 0x27a40020
    ctx->pc = 0x1124d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1124d4: 0xffbf0030
    ctx->pc = 0x1124d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1124d8: 0xc044674
    ctx->pc = 0x1124D8u;
    SET_GPR_U32(ctx, 31, 0x1124E0u);
    ctx->pc = 0x1124DCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1119D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001119D0_0x1119d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1124E0u; }
    }
    if (ctx->pc != 0x1124E0u) { return; }
    ctx->pc = 0x1124E0u;
    // 0x1124e0: 0x102d
    ctx->pc = 0x1124e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1124e4: 0x8fa40000
    ctx->pc = 0x1124e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1124e8: 0x38830002
    ctx->pc = 0x1124e8u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 4), 2));
    // 0x1124ec: 0x1060001b
    ctx->pc = 0x1124ECu;
    {
        const bool branch_taken_0x1124ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1124F0u;
        SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x1124ec) {
            ctx->pc = 0x11255Cu;
            goto label_11255c;
        }
    }
    ctx->pc = 0x1124F4u;
    // 0x1124f4: 0x14a0001a
    ctx->pc = 0x1124F4u;
    {
        const bool branch_taken_0x1124f4 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1124F8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x1124f4) {
            ctx->pc = 0x112560u;
            goto label_112560;
        }
    }
    ctx->pc = 0x1124FCu;
    // 0x1124fc: 0x8fa30004
    ctx->pc = 0x1124fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x112500: 0x14600017
    ctx->pc = 0x112500u;
    {
        const bool branch_taken_0x112500 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x112504u;
        SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x112500) {
            ctx->pc = 0x112560u;
            goto label_112560;
        }
    }
    ctx->pc = 0x112508u;
    // 0x112508: 0x10600015
    ctx->pc = 0x112508u;
    {
        const bool branch_taken_0x112508 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x11250Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x112508) {
            ctx->pc = 0x112560u;
            goto label_112560;
        }
    }
    ctx->pc = 0x112510u;
    // 0x112510: 0x8fa40008
    ctx->pc = 0x112510u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x112514: 0x102d
    ctx->pc = 0x112514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112518: 0x4800011
    ctx->pc = 0x112518u;
    {
        const bool branch_taken_0x112518 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x11251Cu;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 32));
        if (branch_taken_0x112518) {
            ctx->pc = 0x112560u;
            goto label_112560;
        }
    }
    ctx->pc = 0x112520u;
    // 0x112520: 0x1060000f
    ctx->pc = 0x112520u;
    {
        const bool branch_taken_0x112520 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x112524u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x112520) {
            ctx->pc = 0x112560u;
            goto label_112560;
        }
    }
    ctx->pc = 0x112528u;
    // 0x112528: 0x2882003d
    ctx->pc = 0x112528u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 61));
    // 0x11252c: 0x14400006
    ctx->pc = 0x11252Cu;
    {
        const bool branch_taken_0x11252c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x112530u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 60));
        if (branch_taken_0x11252c) {
            ctx->pc = 0x112548u;
            goto label_112548;
        }
    }
    ctx->pc = 0x112534u;
    // 0x112534: 0xdfa20010
    ctx->pc = 0x112534u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112538: 0x2483ffc4
    ctx->pc = 0x112538u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967236));
    // 0x11253c: 0x10000005
    ctx->pc = 0x11253Cu;
    {
        const bool branch_taken_0x11253c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x112540u;
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
        if (branch_taken_0x11253c) {
            ctx->pc = 0x112554u;
            goto label_112554;
        }
    }
    ctx->pc = 0x112544u;
    // 0x112544: 0x0
    ctx->pc = 0x112544u;
    // NOP
label_112548:
    // 0x112548: 0xdfa20010
    ctx->pc = 0x112548u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11254c: 0x641823
    ctx->pc = 0x11254cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x112550: 0x621016
    ctx->pc = 0x112550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
label_112554:
    // 0x112554: 0x2103c
    ctx->pc = 0x112554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x112558: 0x2103f
    ctx->pc = 0x112558u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_11255c:
    // 0x11255c: 0xdfbf0030
    ctx->pc = 0x11255cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_112560:
    // 0x112560: 0x3e00008
    ctx->pc = 0x112560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112564u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x112548u: goto label_112548;
            case 0x112554u: goto label_112554;
            case 0x11255Cu: goto label_11255c;
            case 0x112560u: goto label_112560;
            default: break;
        }
        return;
    }
    ctx->pc = 0x112568u;
}
