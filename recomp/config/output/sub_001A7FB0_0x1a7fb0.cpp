#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A7FB0
// Address: 0x1a7fb0 - 0x1a8060
void sub_001A7FB0_0x1a7fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a7fb0u;

    // 0x1a7fb0: 0x27bdffc0
    ctx->pc = 0x1a7fb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a7fb4: 0x3c010023
    ctx->pc = 0x1a7fb4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1a7fb8: 0xffbf0030
    ctx->pc = 0x1a7fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a7fbc: 0x7fb10020
    ctx->pc = 0x1a7fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a7fc0: 0x7fb00010
    ctx->pc = 0x1a7fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a7fc4: 0x80882d
    ctx->pc = 0x1a7fc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7fc8: 0x8c241188
    ctx->pc = 0x1a7fc8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4488)));
    // 0x1a7fcc: 0xc045198
    ctx->pc = 0x1A7FCCu;
    SET_GPR_U32(ctx, 31, 0x1A7FD4u);
    ctx->pc = 0x1A7FD0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7FD4u; }
    }
    if (ctx->pc != 0x1A7FD4u) { return; }
    ctx->pc = 0x1A7FD4u;
    // 0x1a7fd4: 0x3c01002b
    ctx->pc = 0x1a7fd4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a7fd8: 0x3c07002b
    ctx->pc = 0x1a7fd8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)43 << 16));
    // 0x1a7fdc: 0xac300c80
    ctx->pc = 0x1a7fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3200), GPR_U32(ctx, 16));
    // 0x1a7fe0: 0x3c04002b
    ctx->pc = 0x1a7fe0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a7fe4: 0x3c010023
    ctx->pc = 0x1a7fe4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1a7fe8: 0x24e70c80
    ctx->pc = 0x1a7fe8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 3200));
    // 0x1a7fec: 0x8c221188
    ctx->pc = 0x1a7fecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4488)));
    // 0x1a7ff0: 0x24080010
    ctx->pc = 0x1a7ff0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a7ff4: 0x3c0b001a
    ctx->pc = 0x1a7ff4u;
    SET_GPR_U32(ctx, 11, ((uint32_t)26 << 16));
    // 0x1a7ff8: 0x220282d
    ctx->pc = 0x1a7ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ffc: 0x24840c00
    ctx->pc = 0x1a7ffcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 3072));
    // 0x1a8000: 0x24060001
    ctx->pc = 0x1a8000u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8004: 0xe0482d
    ctx->pc = 0x1a8004u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8008: 0x100502d
    ctx->pc = 0x1a8008u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a800c: 0x256b7fa0
    ctx->pc = 0x1a800cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 32672));
    // 0x1a8010: 0xc045e7a
    ctx->pc = 0x1A8010u;
    SET_GPR_U32(ctx, 31, 0x1A8018u);
    ctx->pc = 0x1A8014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8018u; }
    }
    if (ctx->pc != 0x1A8018u) { return; }
    ctx->pc = 0x1A8018u;
    // 0x1a8018: 0x4410008
    ctx->pc = 0x1A8018u;
    {
        const bool branch_taken_0x1a8018 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A801Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x1a8018) {
            ctx->pc = 0x1A803Cu;
            goto label_1a803c;
        }
    }
    ctx->pc = 0x1A8020u;
    // 0x1a8020: 0xc0423b4
    ctx->pc = 0x1A8020u;
    SET_GPR_U32(ctx, 31, 0x1A8028u);
    ctx->pc = 0x1A8024u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9344));
    ctx->pc = 0x108ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108ED0_0x108ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8028u; }
    }
    if (ctx->pc != 0x1A8028u) { return; }
    ctx->pc = 0x1A8028u;
    // 0x1a8028: 0x3c010023
    ctx->pc = 0x1a8028u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1a802c: 0xc045190
    ctx->pc = 0x1A802Cu;
    SET_GPR_U32(ctx, 31, 0x1A8034u);
    ctx->pc = 0x1A8030u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4488)));
    ctx->pc = 0x114640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114640_0x114640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8034u; }
    }
    if (ctx->pc != 0x1A8034u) { return; }
    ctx->pc = 0x1A8034u;
    // 0x1a8034: 0x10000002
    ctx->pc = 0x1A8034u;
    {
        const bool branch_taken_0x1a8034 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8038u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967287));
        if (branch_taken_0x1a8034) {
            ctx->pc = 0x1A8040u;
            goto label_1a8040;
        }
    }
    ctx->pc = 0x1A803Cu;
label_1a803c:
    // 0x1a803c: 0x102d
    ctx->pc = 0x1a803cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8040:
    // 0x1a8040: 0xdfbf0030
    ctx->pc = 0x1a8040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a8044: 0x7bb10020
    ctx->pc = 0x1a8044u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8048: 0x7bb00010
    ctx->pc = 0x1a8048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a804c: 0x3e00008
    ctx->pc = 0x1A804Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8050u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A803Cu: goto label_1a803c;
            case 0x1A8040u: goto label_1a8040;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A8054u;
    // 0x1a8054: 0x0
    ctx->pc = 0x1a8054u;
    // NOP
    // 0x1a8058: 0x0
    ctx->pc = 0x1a8058u;
    // NOP
    // 0x1a805c: 0x0
    ctx->pc = 0x1a805cu;
    // NOP
}
