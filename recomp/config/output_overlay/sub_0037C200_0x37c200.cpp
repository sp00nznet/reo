#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0037C200
// Address: 0x37c200 - 0x37c2c0
void sub_0037C200_0x37c200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x37c200u;

    // 0x37c200: 0x27bdffe0
    ctx->pc = 0x37c200u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37c204: 0x3c010057
    ctx->pc = 0x37c204u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37c208: 0xffbf0010
    ctx->pc = 0x37c208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37c20c: 0x7fb00000
    ctx->pc = 0x37c20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37c210: 0x8422c810
    ctx->pc = 0x37c210u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294952976)));
    // 0x37c214: 0x14400003
    ctx->pc = 0x37C214u;
    {
        const bool branch_taken_0x37c214 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37C218u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x37c214) {
            ctx->pc = 0x37C224u;
            goto label_37c224;
        }
    }
    ctx->pc = 0x37C21Cu;
    // 0x37c21c: 0x10000022
    ctx->pc = 0x37C21Cu;
    {
        const bool branch_taken_0x37c21c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37C220u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37c21c) {
            ctx->pc = 0x37C2A8u;
            goto label_37c2a8;
        }
    }
    ctx->pc = 0x37C224u;
label_37c224:
    // 0x37c224: 0x3c010057
    ctx->pc = 0x37c224u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37c228: 0xa423c810
    ctx->pc = 0x37c228u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294952976), (uint16_t)GPR_U32(ctx, 3));
    // 0x37c22c: 0x3c020057
    ctx->pc = 0x37c22cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)87 << 16));
    // 0x37c230: 0x3c010057
    ctx->pc = 0x37c230u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37c234: 0x2442c830
    ctx->pc = 0x37c234u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953008));
    // 0x37c238: 0x8423c810
    ctx->pc = 0x37c238u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294952976)));
    // 0x37c23c: 0x282d
    ctx->pc = 0x37c23cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c240: 0x24060018
    ctx->pc = 0x37c240u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 24));
    // 0x37c244: 0x31880
    ctx->pc = 0x37c244u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x37c248: 0x431021
    ctx->pc = 0x37c248u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37c24c: 0x8c500000
    ctx->pc = 0x37c24cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37c250: 0xc041f1a
    ctx->pc = 0x37C250u;
    SET_GPR_U32(ctx, 31, 0x37C258u);
    ctx->pc = 0x37C254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        auto targetFn = runtime->lookupFunction(0x107C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C258u; }
        if (ctx->pc != 0x37C258u) { return; }
    }
    ctx->pc = 0x37C258u;
    // 0x37c258: 0x3c010057
    ctx->pc = 0x37c258u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37c25c: 0x8c22c820
    ctx->pc = 0x37c25cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294952992)));
    // 0x37c260: 0x14400007
    ctx->pc = 0x37C260u;
    {
        const bool branch_taken_0x37c260 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37C264u;
        SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
        if (branch_taken_0x37c260) {
            ctx->pc = 0x37C280u;
            goto label_37c280;
        }
    }
    ctx->pc = 0x37C268u;
    // 0x37c268: 0xac30c818
    ctx->pc = 0x37c268u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952984), GPR_U32(ctx, 16));
    // 0x37c26c: 0x3c010057
    ctx->pc = 0x37c26cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37c270: 0xac30c820
    ctx->pc = 0x37c270u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952992), GPR_U32(ctx, 16));
    // 0x37c274: 0xae000004
    ctx->pc = 0x37c274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x37c278: 0x1000000a
    ctx->pc = 0x37C278u;
    {
        const bool branch_taken_0x37c278 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37C27Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x37c278) {
            ctx->pc = 0x37C2A4u;
            goto label_37c2a4;
        }
    }
    ctx->pc = 0x37C280u;
label_37c280:
    // 0x37c280: 0xae000000
    ctx->pc = 0x37c280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x37c284: 0x3c010057
    ctx->pc = 0x37c284u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37c288: 0x8c22c818
    ctx->pc = 0x37c288u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294952984)));
    // 0x37c28c: 0xae020004
    ctx->pc = 0x37c28cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x37c290: 0x3c010057
    ctx->pc = 0x37c290u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37c294: 0x8c22c818
    ctx->pc = 0x37c294u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294952984)));
    // 0x37c298: 0xac500000
    ctx->pc = 0x37c298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x37c29c: 0x3c010057
    ctx->pc = 0x37c29cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37c2a0: 0xac30c818
    ctx->pc = 0x37c2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952984), GPR_U32(ctx, 16));
label_37c2a4:
    // 0x37c2a4: 0x200102d
    ctx->pc = 0x37c2a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37c2a8:
    // 0x37c2a8: 0xdfbf0010
    ctx->pc = 0x37c2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37c2ac: 0x7bb00000
    ctx->pc = 0x37c2acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37c2b0: 0x3e00008
    ctx->pc = 0x37C2B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C2B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37C224u: goto label_37c224;
            case 0x37C280u: goto label_37c280;
            case 0x37C2A4u: goto label_37c2a4;
            case 0x37C2A8u: goto label_37c2a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37C2B8u;
    // 0x37c2b8: 0x0
    ctx->pc = 0x37c2b8u;
    // NOP
    // 0x37c2bc: 0x0
    ctx->pc = 0x37c2bcu;
    // NOP
}
