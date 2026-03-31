#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C5520
// Address: 0x1c5520 - 0x1c55c0
void sub_001C5520_0x1c5520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c5520u;

    // 0x1c5520: 0x27bdffe0
    ctx->pc = 0x1c5520u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c5524: 0x3c010002
    ctx->pc = 0x1c5524u;
    SET_GPR_U32(ctx, 1, ((uint32_t)2 << 16));
    // 0x1c5528: 0xffbf0010
    ctx->pc = 0x1c5528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c552c: 0x3421fbc0
    ctx->pc = 0x1c552cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 64448));
    // 0x1c5530: 0x7fb00000
    ctx->pc = 0x1c5530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c5534: 0x34068000
    ctx->pc = 0x1c5534u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 0), 32768));
    // 0x1c5538: 0x80802d
    ctx->pc = 0x1c5538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c553c: 0x3c040036
    ctx->pc = 0x1c553cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)54 << 16));
    // 0x1c5540: 0x2012821
    ctx->pc = 0x1c5540u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1c5544: 0xc041eac
    ctx->pc = 0x1C5544u;
    SET_GPR_U32(ctx, 31, 0x1C554Cu);
    ctx->pc = 0x1C5548u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963328));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C554Cu; }
    }
    if (ctx->pc != 0x1C554Cu) { return; }
    ctx->pc = 0x1C554Cu;
    // 0x1c554c: 0x3c010003
    ctx->pc = 0x1c554cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)3 << 16));
    // 0x1c5550: 0x3c040037
    ctx->pc = 0x1c5550u;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
    // 0x1c5554: 0x34217bc0
    ctx->pc = 0x1c5554u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 31680));
    // 0x1c5558: 0x2484f080
    ctx->pc = 0x1c5558u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963328));
    // 0x1c555c: 0x2012821
    ctx->pc = 0x1c555cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1c5560: 0xc041eac
    ctx->pc = 0x1C5560u;
    SET_GPR_U32(ctx, 31, 0x1C5568u);
    ctx->pc = 0x1C5564u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5568u; }
    }
    if (ctx->pc != 0x1C5568u) { return; }
    ctx->pc = 0x1C5568u;
    // 0x1c5568: 0x3c050037
    ctx->pc = 0x1c5568u;
    SET_GPR_U32(ctx, 5, ((uint32_t)55 << 16));
    // 0x1c556c: 0x202d
    ctx->pc = 0x1c556cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5570: 0x10000005
    ctx->pc = 0x1C5570u;
    {
        const bool branch_taken_0x1c5570 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C5574u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294963328));
        if (branch_taken_0x1c5570) {
            ctx->pc = 0x1C5588u;
            goto label_1c5588;
        }
    }
    ctx->pc = 0x1C5578u;
label_1c5578:
    // 0x1c5578: 0x90a30000
    ctx->pc = 0x1c5578u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c557c: 0x14600007
    ctx->pc = 0x1C557Cu;
    {
        const bool branch_taken_0x1c557c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C5580u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x1c557c) {
            ctx->pc = 0x1C559Cu;
            goto label_1c559c;
        }
    }
    ctx->pc = 0x1C5584u;
    // 0x1c5584: 0x24840001
    ctx->pc = 0x1c5584u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_1c5588:
    // 0x1c5588: 0x28830008
    ctx->pc = 0x1c5588u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 8));
    // 0x1c558c: 0x0
    ctx->pc = 0x1c558cu;
    // NOP
    // 0x1c5590: 0x1460fff9
    ctx->pc = 0x1C5590u;
    {
        const bool branch_taken_0x1c5590 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c5590) {
            ctx->pc = 0x1C5578u;
            goto label_1c5578;
        }
    }
    ctx->pc = 0x1C5598u;
    // 0x1c5598: 0x24060008
    ctx->pc = 0x1c5598u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
label_1c559c:
    // 0x1c559c: 0x10860004
    ctx->pc = 0x1C559Cu;
    {
        const bool branch_taken_0x1c559c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 6));
        if (branch_taken_0x1c559c) {
            ctx->pc = 0x1C55B0u;
            goto label_1c55b0;
        }
    }
    ctx->pc = 0x1C55A4u;
    // 0x1c55a4: 0x3c040031
    ctx->pc = 0x1c55a4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x1c55a8: 0xc042d7e
    ctx->pc = 0x1C55A8u;
    SET_GPR_U32(ctx, 31, 0x1C55B0u);
    ctx->pc = 0x1C55ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26024));
    ctx->pc = 0x10B5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B5F8_0x10b5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C55B0u; }
    }
    if (ctx->pc != 0x1C55B0u) { return; }
    ctx->pc = 0x1C55B0u;
label_1c55b0:
    // 0x1c55b0: 0xdfbf0010
    ctx->pc = 0x1c55b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c55b4: 0x7bb00000
    ctx->pc = 0x1c55b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c55b8: 0x3e00008
    ctx->pc = 0x1C55B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C55BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C5578u: goto label_1c5578;
            case 0x1C5588u: goto label_1c5588;
            case 0x1C559Cu: goto label_1c559c;
            case 0x1C55B0u: goto label_1c55b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C55C0u;
}
