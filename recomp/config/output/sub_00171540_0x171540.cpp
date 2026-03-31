#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00171540
// Address: 0x171540 - 0x1715f0
void sub_00171540_0x171540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x171540u;

    // 0x171540: 0x3c020023
    ctx->pc = 0x171540u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x171544: 0x27bdfff0
    ctx->pc = 0x171544u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171548: 0x8c43f1c0
    ctx->pc = 0x171548u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294963648)));
    // 0x17154c: 0x1060000a
    ctx->pc = 0x17154Cu;
    {
        const bool branch_taken_0x17154c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x171550u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x17154c) {
            ctx->pc = 0x171578u;
            goto label_171578;
        }
    }
    ctx->pc = 0x171554u;
    // 0x171554: 0xc051e8a
    ctx->pc = 0x171554u;
    SET_GPR_U32(ctx, 31, 0x17155Cu);
    ctx->pc = 0x147A28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00147A28_0x147a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17155Cu; }
    }
    if (ctx->pc != 0x17155Cu) { return; }
    ctx->pc = 0x17155Cu;
    // 0x17155c: 0x3c040027
    ctx->pc = 0x17155cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)39 << 16));
    // 0x171560: 0xdfbf0000
    ctx->pc = 0x171560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171564: 0x248460d8
    ctx->pc = 0x171564u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24792));
    // 0x171568: 0x282d
    ctx->pc = 0x171568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17156c: 0x24060048
    ctx->pc = 0x17156cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 72));
    // 0x171570: 0x8055880
    ctx->pc = 0x171570u;
    ctx->pc = 0x171574u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x156200u;
    entry_156200_0x1562d0(rdram, ctx, runtime); return;
    ctx->pc = 0x171578u;
label_171578:
    // 0x171578: 0xdfbf0000
    ctx->pc = 0x171578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17157c: 0x3e00008
    ctx->pc = 0x17157Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171580u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171578u: goto label_171578;
            case 0x1715C8u: goto label_1715c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x171584u;
    // 0x171584: 0x0
    ctx->pc = 0x171584u;
    // NOP
    // 0x171588: 0x8c891b30
    ctx->pc = 0x171588u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 6960)));
    // 0x17158c: 0x25290a48
    ctx->pc = 0x17158cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 2632));
    // 0x171590: 0x8d230018
    ctx->pc = 0x171590u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x171594: 0xaca30000
    ctx->pc = 0x171594u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x171598: 0x8d22000c
    ctx->pc = 0x171598u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x17159c: 0x212c0
    ctx->pc = 0x17159cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 11));
    // 0x1715a0: 0xace20000
    ctx->pc = 0x1715a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1715a4: 0x8d240010
    ctx->pc = 0x1715a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x1715a8: 0x8d23000c
    ctx->pc = 0x1715a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x1715ac: 0x8d250014
    ctx->pc = 0x1715acu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x1715b0: 0x641821
    ctx->pc = 0x1715b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1715b4: 0x8d220018
    ctx->pc = 0x1715b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x1715b8: 0x31ac0
    ctx->pc = 0x1715b8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 11));
    // 0x1715bc: 0x651821
    ctx->pc = 0x1715bcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1715c0: 0x50400001
    ctx->pc = 0x1715C0u;
    {
        const bool branch_taken_0x1715c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1715c0) {
            ctx->pc = 0x1715C4u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1715C8u;
            goto label_1715c8;
        }
    }
    ctx->pc = 0x1715C8u;
label_1715c8:
    // 0x1715c8: 0x62001a
    ctx->pc = 0x1715c8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1715cc: 0x2010
    ctx->pc = 0x1715ccu;
    SET_GPR_U32(ctx, 4, ctx->hi);
    // 0x1715d0: 0xacc40000
    ctx->pc = 0x1715d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1715d4: 0x8d220010
    ctx->pc = 0x1715d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x1715d8: 0x8d230014
    ctx->pc = 0x1715d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x1715dc: 0x212c0
    ctx->pc = 0x1715dcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 11));
    // 0x1715e0: 0x431021
    ctx->pc = 0x1715e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1715e4: 0x3e00008
    ctx->pc = 0x1715E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1715E8u;
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171578u: goto label_171578;
            case 0x1715C8u: goto label_1715c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1715ECu;
    // 0x1715ec: 0x0
    ctx->pc = 0x1715ecu;
    // NOP
}
