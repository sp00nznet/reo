#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013A248
// Address: 0x13a248 - 0x13a2f0
void sub_0013A248_0x13a248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13a248u;

    // 0x13a248: 0x27bdffe0
    ctx->pc = 0x13a248u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13a24c: 0xffb10008
    ctx->pc = 0x13a24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13a250: 0xa0882d
    ctx->pc = 0x13a250u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a254: 0x3c050022
    ctx->pc = 0x13a254u;
    SET_GPR_U32(ctx, 5, ((uint32_t)34 << 16));
    // 0x13a258: 0xffb00000
    ctx->pc = 0x13a258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13a25c: 0x24a5d8f0
    ctx->pc = 0x13a25cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294957296));
    // 0x13a260: 0x80802d
    ctx->pc = 0x13a260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a264: 0xffbf0010
    ctx->pc = 0x13a264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13a268: 0xc042bf0
    ctx->pc = 0x13A268u;
    SET_GPR_U32(ctx, 31, 0x13A270u);
    ctx->pc = 0x13A26Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A270u; }
    }
    if (ctx->pc != 0x13A270u) { return; }
    ctx->pc = 0x13A270u;
    // 0x13a270: 0x82030000
    ctx->pc = 0x13a270u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a274: 0x2402002f
    ctx->pc = 0x13a274u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 47));
    // 0x13a278: 0x10620006
    ctx->pc = 0x13A278u;
    {
        const bool branch_taken_0x13a278 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x13A27Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 92));
        if (branch_taken_0x13a278) {
            ctx->pc = 0x13A294u;
            goto label_13a294;
        }
    }
    ctx->pc = 0x13A280u;
    // 0x13a280: 0x10640004
    ctx->pc = 0x13A280u;
    {
        const bool branch_taken_0x13a280 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x13A284u;
        SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
        if (branch_taken_0x13a280) {
            ctx->pc = 0x13A294u;
            goto label_13a294;
        }
    }
    ctx->pc = 0x13A288u;
    // 0x13a288: 0x220202d
    ctx->pc = 0x13a288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a28c: 0xc042aee
    ctx->pc = 0x13A28Cu;
    SET_GPR_U32(ctx, 31, 0x13A294u);
    ctx->pc = 0x13A290u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294954096));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A294u; }
    }
    if (ctx->pc != 0x13A294u) { return; }
    ctx->pc = 0x13A294u;
label_13a294:
    // 0x13a294: 0x200282d
    ctx->pc = 0x13a294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a298: 0x3c100024
    ctx->pc = 0x13a298u;
    SET_GPR_U32(ctx, 16, ((uint32_t)36 << 16));
    // 0x13a29c: 0x220202d
    ctx->pc = 0x13a29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a2a0: 0xc042aee
    ctx->pc = 0x13A2A0u;
    SET_GPR_U32(ctx, 31, 0x13A2A8u);
    ctx->pc = 0x13A2A4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294954104));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A2A8u; }
    }
    if (ctx->pc != 0x13A2A8u) { return; }
    ctx->pc = 0x13A2A8u;
    // 0x13a2a8: 0xc042c56
    ctx->pc = 0x13A2A8u;
    SET_GPR_U32(ctx, 31, 0x13A2B0u);
    ctx->pc = 0x13A2ACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A2B0u; }
    }
    if (ctx->pc != 0x13A2B0u) { return; }
    ctx->pc = 0x13A2B0u;
    // 0x13a2b0: 0x200282d
    ctx->pc = 0x13a2b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a2b4: 0x2221021
    ctx->pc = 0x13a2b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x13a2b8: 0xc042b9e
    ctx->pc = 0x13A2B8u;
    SET_GPR_U32(ctx, 31, 0x13A2C0u);
    ctx->pc = 0x13A2BCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294967294));
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A2C0u; }
    }
    if (ctx->pc != 0x13A2C0u) { return; }
    ctx->pc = 0x13A2C0u;
    // 0x13a2c0: 0x220202d
    ctx->pc = 0x13a2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a2c4: 0x10400004
    ctx->pc = 0x13A2C4u;
    {
        const bool branch_taken_0x13a2c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13A2C8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13a2c4) {
            ctx->pc = 0x13A2D8u;
            goto label_13a2d8;
        }
    }
    ctx->pc = 0x13A2CCu;
    // 0x13a2cc: 0xc042aee
    ctx->pc = 0x13A2CCu;
    SET_GPR_U32(ctx, 31, 0x13A2D4u);
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A2D4u; }
    }
    if (ctx->pc != 0x13A2D4u) { return; }
    ctx->pc = 0x13A2D4u;
    // 0x13a2d4: 0x220202d
    ctx->pc = 0x13a2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13a2d8:
    // 0x13a2d8: 0xdfb10008
    ctx->pc = 0x13a2d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13a2dc: 0xdfb00000
    ctx->pc = 0x13a2dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a2e0: 0xdfbf0010
    ctx->pc = 0x13a2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a2e4: 0x804e60a
    ctx->pc = 0x13A2E4u;
    ctx->pc = 0x13A2E8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x139828u;
    sub_00139828_0x139828(rdram, ctx, runtime); return;
    ctx->pc = 0x13A2ECu;
    // 0x13a2ec: 0x0
    ctx->pc = 0x13a2ecu;
    // NOP
}
