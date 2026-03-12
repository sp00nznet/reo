#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0037C170
// Address: 0x37c170 - 0x37c200
void sub_0037C170_0x37c170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x37c170u;

    // 0x37c170: 0x27bdfff0
    ctx->pc = 0x37c170u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37c174: 0x3c040057
    ctx->pc = 0x37c174u;
    SET_GPR_U32(ctx, 4, ((uint32_t)87 << 16));
    // 0x37c178: 0xffbf0000
    ctx->pc = 0x37c178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37c17c: 0x2484bc10
    ctx->pc = 0x37c17cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949904));
    // 0x37c180: 0x282d
    ctx->pc = 0x37c180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c184: 0xc041f1a
    ctx->pc = 0x37C184u;
    SET_GPR_U32(ctx, 31, 0x37C18Cu);
    ctx->pc = 0x37C188u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3072));
    ctx->pc = 0x107C68u;
    {
        auto targetFn = runtime->lookupFunction(0x107C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C18Cu; }
        if (ctx->pc != 0x37C18Cu) { return; }
    }
    ctx->pc = 0x37C18Cu;
    // 0x37c18c: 0x3c010057
    ctx->pc = 0x37c18cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37c190: 0x24030080
    ctx->pc = 0x37c190u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 128));
    // 0x37c194: 0xac20c818
    ctx->pc = 0x37c194u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952984), GPR_U32(ctx, 0));
    // 0x37c198: 0x402d
    ctx->pc = 0x37c198u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c19c: 0x3c010057
    ctx->pc = 0x37c19cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37c1a0: 0xa423c810
    ctx->pc = 0x37c1a0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294952976), (uint16_t)GPR_U32(ctx, 3));
    // 0x37c1a4: 0x3c010057
    ctx->pc = 0x37c1a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37c1a8: 0xac20c820
    ctx->pc = 0x37c1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952992), GPR_U32(ctx, 0));
    // 0x37c1ac: 0x3c010057
    ctx->pc = 0x37c1acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37c1b0: 0xa020bb88
    ctx->pc = 0x37c1b0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294949768), (uint8_t)GPR_U32(ctx, 0));
    // 0x37c1b4: 0x3c070057
    ctx->pc = 0x37c1b4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)87 << 16));
    // 0x37c1b8: 0x3c050057
    ctx->pc = 0x37c1b8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)87 << 16));
    // 0x37c1bc: 0x24e7bc10
    ctx->pc = 0x37c1bcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294949904));
    // 0x37c1c0: 0x24a5c830
    ctx->pc = 0x37c1c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294953008));
label_37c1c4:
    // 0x37c1c4: 0x310600ff
    ctx->pc = 0x37c1c4u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 8), 255));
    // 0x37c1c8: 0x25030001
    ctx->pc = 0x37c1c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 8), 1));
    // 0x37c1cc: 0x306800ff
    ctx->pc = 0x37c1ccu;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 3), 255));
    // 0x37c1d0: 0x61840
    ctx->pc = 0x37c1d0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 1));
    // 0x37c1d4: 0x662021
    ctx->pc = 0x37c1d4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x37c1d8: 0x61880
    ctx->pc = 0x37c1d8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
    // 0x37c1dc: 0x430c0
    ctx->pc = 0x37c1dcu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 4), 3));
    // 0x37c1e0: 0xa32021
    ctx->pc = 0x37c1e0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x37c1e4: 0xe63021
    ctx->pc = 0x37c1e4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x37c1e8: 0x29030080
    ctx->pc = 0x37c1e8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 8), 128));
    // 0x37c1ec: 0x1460fff5
    ctx->pc = 0x37C1ECu;
    {
        const bool branch_taken_0x37c1ec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x37C1F0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
        if (branch_taken_0x37c1ec) {
            ctx->pc = 0x37C1C4u;
            goto label_37c1c4;
        }
    }
    ctx->pc = 0x37C1F4u;
    // 0x37c1f4: 0xdfbf0000
    ctx->pc = 0x37c1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37c1f8: 0x3e00008
    ctx->pc = 0x37C1F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C1FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37C1C4u: goto label_37c1c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37C200u;
}
