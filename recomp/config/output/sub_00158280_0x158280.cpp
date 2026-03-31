#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00158280
// Address: 0x158280 - 0x158318
void sub_00158280_0x158280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x158280u;

    // 0x158280: 0x27bdffe0
    ctx->pc = 0x158280u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x158284: 0xffb00000
    ctx->pc = 0x158284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x158288: 0x80802d
    ctx->pc = 0x158288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15828c: 0xffb10008
    ctx->pc = 0x15828cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x158290: 0xa0882d
    ctx->pc = 0x158290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158294: 0xffb20010
    ctx->pc = 0x158294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x158298: 0xc0902d
    ctx->pc = 0x158298u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15829c: 0x16000006
    ctx->pc = 0x15829Cu;
    {
        const bool branch_taken_0x15829c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1582A0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        if (branch_taken_0x15829c) {
            ctx->pc = 0x1582B8u;
            goto label_1582b8;
        }
    }
    ctx->pc = 0x1582A4u;
    // 0x1582a4: 0x3c020023
    ctx->pc = 0x1582a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1582a8: 0xc0560c6
    ctx->pc = 0x1582A8u;
    SET_GPR_U32(ctx, 31, 0x1582B0u);
    ctx->pc = 0x1582ACu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294957168)));
    ctx->pc = 0x158318u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00158318_0x158318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1582B0u; }
    }
    if (ctx->pc != 0x1582B0u) { return; }
    ctx->pc = 0x1582B0u;
    // 0x1582b0: 0x10000012
    ctx->pc = 0x1582B0u;
    {
        const bool branch_taken_0x1582b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1582B4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1582b0) {
            ctx->pc = 0x1582FCu;
            goto label_1582fc;
        }
    }
    ctx->pc = 0x1582B8u;
label_1582b8:
    // 0x1582b8: 0xc0560f2
    ctx->pc = 0x1582B8u;
    SET_GPR_U32(ctx, 31, 0x1582C0u);
    ctx->pc = 0x1583C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001583C8_0x1583c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1582C0u; }
    }
    if (ctx->pc != 0x1582C0u) { return; }
    ctx->pc = 0x1582C0u;
    // 0x1582c0: 0x3c05ff02
    ctx->pc = 0x1582c0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65282 << 16));
    // 0x1582c4: 0x10400008
    ctx->pc = 0x1582C4u;
    {
        const bool branch_taken_0x1582c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1582C8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1582c4) {
            ctx->pc = 0x1582E8u;
            goto label_1582e8;
        }
    }
    ctx->pc = 0x1582CCu;
    // 0x1582cc: 0xdfb00000
    ctx->pc = 0x1582ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1582d0: 0x34a50101
    ctx->pc = 0x1582d0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 257));
    // 0x1582d4: 0xdfb10008
    ctx->pc = 0x1582d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1582d8: 0xdfb20010
    ctx->pc = 0x1582d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1582dc: 0xdfbf0018
    ctx->pc = 0x1582dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1582e0: 0x805607e
    ctx->pc = 0x1582E0u;
    ctx->pc = 0x1582E4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1581F8u;
    sub_001581F8_0x1581f8(rdram, ctx, runtime); return;
    ctx->pc = 0x1582E8u;
label_1582e8:
    // 0x1582e8: 0x26040004
    ctx->pc = 0x1582e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4));
    // 0x1582ec: 0x220282d
    ctx->pc = 0x1582ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1582f0: 0xc0560c6
    ctx->pc = 0x1582F0u;
    SET_GPR_U32(ctx, 31, 0x1582F8u);
    ctx->pc = 0x1582F4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x158318u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00158318_0x158318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1582F8u; }
    }
    if (ctx->pc != 0x1582F8u) { return; }
    ctx->pc = 0x1582F8u;
    // 0x1582f8: 0xdfb00000
    ctx->pc = 0x1582f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1582fc:
    // 0x1582fc: 0x102d
    ctx->pc = 0x1582fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158300: 0xdfb10008
    ctx->pc = 0x158300u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x158304: 0xdfb20010
    ctx->pc = 0x158304u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158308: 0xdfbf0018
    ctx->pc = 0x158308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15830c: 0x3e00008
    ctx->pc = 0x15830Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158310u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1582B8u: goto label_1582b8;
            case 0x1582E8u: goto label_1582e8;
            case 0x1582FCu: goto label_1582fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x158314u;
    // 0x158314: 0x0
    ctx->pc = 0x158314u;
    // NOP
}
