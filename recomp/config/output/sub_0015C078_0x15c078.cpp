#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015C078
// Address: 0x15c078 - 0x15c120
void sub_0015C078_0x15c078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15c078u;

    // 0x15c078: 0x27bdffd0
    ctx->pc = 0x15c078u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15c07c: 0x3c020008
    ctx->pc = 0x15c07cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)8 << 16));
    // 0x15c080: 0xffb00010
    ctx->pc = 0x15c080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x15c084: 0xc0802d
    ctx->pc = 0x15c084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c088: 0xffb10018
    ctx->pc = 0x15c088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x15c08c: 0x80882d
    ctx->pc = 0x15c08cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c090: 0xffb20020
    ctx->pc = 0x15c090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x15c094: 0x902d
    ctx->pc = 0x15c094u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c098: 0xffbf0028
    ctx->pc = 0x15c098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x15c09c: 0x344240d0
    ctx->pc = 0x15c09cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16592));
    // 0x15c0a0: 0x8ca3000c
    ctx->pc = 0x15c0a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x15c0a4: 0x8ca70008
    ctx->pc = 0x15c0a4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x15c0a8: 0xafa20004
    ctx->pc = 0x15c0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x15c0ac: 0xe33818
    ctx->pc = 0x15c0acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)(uint32_t)result); }
    // 0x15c0b0: 0x710c0
    ctx->pc = 0x15c0b0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 3));
    // 0x15c0b4: 0x471021
    ctx->pc = 0x15c0b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x15c0b8: 0x21fc2
    ctx->pc = 0x15c0b8u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x15c0bc: 0x431021
    ctx->pc = 0x15c0bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15c0c0: 0x21043
    ctx->pc = 0x15c0c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x15c0c4: 0x24422840
    ctx->pc = 0x15c0c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10304));
    // 0x15c0c8: 0x40282d
    ctx->pc = 0x15c0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c0cc: 0xc057568
    ctx->pc = 0x15C0CCu;
    SET_GPR_U32(ctx, 31, 0x15C0D4u);
    ctx->pc = 0x15C0D0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x15D5A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D5A0_0x15d5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C0D4u; }
    }
    if (ctx->pc != 0x15C0D4u) { return; }
    ctx->pc = 0x15C0D4u;
    // 0x15c0d4: 0x220202d
    ctx->pc = 0x15c0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c0d8: 0xae020000
    ctx->pc = 0x15c0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x15c0dc: 0xc057568
    ctx->pc = 0x15C0DCu;
    SET_GPR_U32(ctx, 31, 0x15C0E4u);
    ctx->pc = 0x15C0E0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->pc = 0x15D5A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D5A0_0x15d5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C0E4u; }
    }
    if (ctx->pc != 0x15C0E4u) { return; }
    ctx->pc = 0x15C0E4u;
    // 0x15c0e4: 0x40182d
    ctx->pc = 0x15c0e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c0e8: 0x8e020000
    ctx->pc = 0x15c0e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15c0ec: 0x10400003
    ctx->pc = 0x15C0ECu;
    {
        const bool branch_taken_0x15c0ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15C0F0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x15c0ec) {
            ctx->pc = 0x15C0FCu;
            goto label_15c0fc;
        }
    }
    ctx->pc = 0x15C0F4u;
    // 0x15c0f4: 0x14600003
    ctx->pc = 0x15C0F4u;
    {
        const bool branch_taken_0x15c0f4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x15C0F8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15c0f4) {
            ctx->pc = 0x15C104u;
            goto label_15c104;
        }
    }
    ctx->pc = 0x15C0FCu;
label_15c0fc:
    // 0x15c0fc: 0x2412ffff
    ctx->pc = 0x15c0fcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15c100: 0x240102d
    ctx->pc = 0x15c100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15c104:
    // 0x15c104: 0xdfb00010
    ctx->pc = 0x15c104u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c108: 0xdfb10018
    ctx->pc = 0x15c108u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15c10c: 0xdfb20020
    ctx->pc = 0x15c10cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c110: 0xdfbf0028
    ctx->pc = 0x15c110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15c114: 0x3e00008
    ctx->pc = 0x15C114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C118u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15C0FCu: goto label_15c0fc;
            case 0x15C104u: goto label_15c104;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15C11Cu;
    // 0x15c11c: 0x0
    ctx->pc = 0x15c11cu;
    // NOP
}
