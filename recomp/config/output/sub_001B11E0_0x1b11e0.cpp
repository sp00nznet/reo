#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B11E0
// Address: 0x1b11e0 - 0x1b1260
void sub_001B11E0_0x1b11e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b11e0u;

    // 0x1b11e0: 0x27bdffd0
    ctx->pc = 0x1b11e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b11e4: 0xffbf0020
    ctx->pc = 0x1b11e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b11e8: 0x7fb10010
    ctx->pc = 0x1b11e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b11ec: 0x7fb00000
    ctx->pc = 0x1b11ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b11f0: 0x882d
    ctx->pc = 0x1b11f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b11f4:
    // 0x1b11f4: 0x11843c
    ctx->pc = 0x1b11f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1b11f8: 0x3c02004f
    ctx->pc = 0x1b11f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)79 << 16));
    // 0x1b11fc: 0x10843f
    ctx->pc = 0x1b11fcu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x1b1200: 0x2442dd90
    ctx->pc = 0x1b1200u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958480));
    // 0x1b1204: 0x1018c0
    ctx->pc = 0x1b1204u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 3));
    // 0x1b1208: 0x282d
    ctx->pc = 0x1b1208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b120c: 0x701821
    ctx->pc = 0x1b120cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1b1210: 0x2406004c
    ctx->pc = 0x1b1210u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 76));
    // 0x1b1214: 0x31840
    ctx->pc = 0x1b1214u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1b1218: 0x701821
    ctx->pc = 0x1b1218u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1b121c: 0x31880
    ctx->pc = 0x1b121cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b1220: 0xc041f1a
    ctx->pc = 0x1B1220u;
    SET_GPR_U32(ctx, 31, 0x1B1228u);
    ctx->pc = 0x1B1224u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1228u; }
    }
    if (ctx->pc != 0x1B1228u) { return; }
    ctx->pc = 0x1B1228u;
    // 0x1b1228: 0x26230001
    ctx->pc = 0x1b1228u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b122c: 0x3c04004f
    ctx->pc = 0x1b122cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)79 << 16));
    // 0x1b1230: 0x38c3c
    ctx->pc = 0x1b1230u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1b1234: 0x2484c910
    ctx->pc = 0x1b1234u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953232));
    // 0x1b1238: 0x118c3f
    ctx->pc = 0x1b1238u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x1b123c: 0x902021
    ctx->pc = 0x1b123cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1b1240: 0x2a230258
    ctx->pc = 0x1b1240u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 600));
    // 0x1b1244: 0x1460ffeb
    ctx->pc = 0x1B1244u;
    {
        const bool branch_taken_0x1b1244 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B1248u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1b1244) {
            ctx->pc = 0x1B11F4u;
            goto label_1b11f4;
        }
    }
    ctx->pc = 0x1B124Cu;
    // 0x1b124c: 0xdfbf0020
    ctx->pc = 0x1b124cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1250: 0x7bb10010
    ctx->pc = 0x1b1250u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1254: 0x7bb00000
    ctx->pc = 0x1b1254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1258: 0x3e00008
    ctx->pc = 0x1B1258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B125Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B11F4u: goto label_1b11f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B1260u;
}
