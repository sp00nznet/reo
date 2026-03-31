#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A8450
// Address: 0x1a8450 - 0x1a8500
void sub_001A8450_0x1a8450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a8450u;

    // 0x1a8450: 0x27bdfff0
    ctx->pc = 0x1a8450u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a8454: 0x28a10005
    ctx->pc = 0x1a8454u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 5), 5));
    // 0x1a8458: 0x14200006
    ctx->pc = 0x1A8458u;
    {
        const bool branch_taken_0x1a8458 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A845Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x1a8458) {
            ctx->pc = 0x1A8474u;
            goto label_1a8474;
        }
    }
    ctx->pc = 0x1A8460u;
    // 0x1a8460: 0x3c040024
    ctx->pc = 0x1a8460u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1a8464: 0xc0423b4
    ctx->pc = 0x1A8464u;
    SET_GPR_U32(ctx, 31, 0x1A846Cu);
    ctx->pc = 0x1A8468u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9440));
    ctx->pc = 0x108ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108ED0_0x108ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A846Cu; }
    }
    if (ctx->pc != 0x1A846Cu) { return; }
    ctx->pc = 0x1A846Cu;
    // 0x1a846c: 0x10000021
    ctx->pc = 0x1A846Cu;
    {
        const bool branch_taken_0x1a846c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8470u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a846c) {
            ctx->pc = 0x1A84F4u;
            goto label_1a84f4;
        }
    }
    ctx->pc = 0x1A8474u;
label_1a8474:
    // 0x1a8474: 0x3c01002b
    ctx->pc = 0x1a8474u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a8478: 0x8c220a60
    ctx->pc = 0x1a8478u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2656)));
    // 0x1a847c: 0x451021
    ctx->pc = 0x1a847cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a8480: 0x28420200
    ctx->pc = 0x1a8480u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 512));
    // 0x1a8484: 0x14400003
    ctx->pc = 0x1A8484u;
    {
        const bool branch_taken_0x1a8484 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A8488u;
        SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
        if (branch_taken_0x1a8484) {
            ctx->pc = 0x1A8494u;
            goto label_1a8494;
        }
    }
    ctx->pc = 0x1A848Cu;
    // 0x1a848c: 0x10000019
    ctx->pc = 0x1A848Cu;
    {
        const bool branch_taken_0x1a848c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8490u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a848c) {
            ctx->pc = 0x1A84F4u;
            goto label_1a84f4;
        }
    }
    ctx->pc = 0x1A8494u;
label_1a8494:
    // 0x1a8494: 0x24070018
    ctx->pc = 0x1a8494u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 24));
    // 0x1a8498: 0x1000000c
    ctx->pc = 0x1A8498u;
    {
        const bool branch_taken_0x1a8498 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A849Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3264));
        if (branch_taken_0x1a8498) {
            ctx->pc = 0x1A84CCu;
            goto label_1a84cc;
        }
    }
    ctx->pc = 0x1A84A0u;
label_1a84a0:
    // 0x1a84a0: 0xe43006
    ctx->pc = 0x1a84a0u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x1a84a4: 0x8c220a60
    ctx->pc = 0x1a84a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2656)));
    // 0x1a84a8: 0x24e7fff8
    ctx->pc = 0x1a84a8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967288));
    // 0x1a84ac: 0x24a5ffff
    ctx->pc = 0x1a84acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1a84b0: 0x621021
    ctx->pc = 0x1a84b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a84b4: 0x3c01002b
    ctx->pc = 0x1a84b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a84b8: 0xa0460000
    ctx->pc = 0x1a84b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x1a84bc: 0x8c220a60
    ctx->pc = 0x1a84bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2656)));
    // 0x1a84c0: 0x24420001
    ctx->pc = 0x1a84c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a84c4: 0x3c01002b
    ctx->pc = 0x1a84c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a84c8: 0xac220a60
    ctx->pc = 0x1a84c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2656), GPR_U32(ctx, 2));
label_1a84cc:
    // 0x1a84cc: 0x1ca0fff4
    ctx->pc = 0x1A84CCu;
    {
        const bool branch_taken_0x1a84cc = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1A84D0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
        if (branch_taken_0x1a84cc) {
            ctx->pc = 0x1A84A0u;
            goto label_1a84a0;
        }
    }
    ctx->pc = 0x1A84D4u;
    // 0x1a84d4: 0x3c01002b
    ctx->pc = 0x1a84d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a84d8: 0x3c03002b
    ctx->pc = 0x1a84d8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
    // 0x1a84dc: 0x8c240a60
    ctx->pc = 0x1a84dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 2656)));
    // 0x1a84e0: 0x24630cc0
    ctx->pc = 0x1a84e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3264));
    // 0x1a84e4: 0x240500ff
    ctx->pc = 0x1a84e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a84e8: 0x102d
    ctx->pc = 0x1a84e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a84ec: 0x641821
    ctx->pc = 0x1a84ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a84f0: 0xa0650000
    ctx->pc = 0x1a84f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_1a84f4:
    // 0x1a84f4: 0xdfbf0000
    ctx->pc = 0x1a84f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a84f8: 0x3e00008
    ctx->pc = 0x1A84F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A84FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A8474u: goto label_1a8474;
            case 0x1A8494u: goto label_1a8494;
            case 0x1A84A0u: goto label_1a84a0;
            case 0x1A84CCu: goto label_1a84cc;
            case 0x1A84F4u: goto label_1a84f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A8500u;
}
