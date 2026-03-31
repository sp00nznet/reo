#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015D5A0
// Address: 0x15d5a0 - 0x15d640
void sub_0015D5A0_0x15d5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15d5a0u;

    // 0x15d5a0: 0x27bdffe0
    ctx->pc = 0x15d5a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15d5a4: 0xffb10008
    ctx->pc = 0x15d5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15d5a8: 0x80882d
    ctx->pc = 0x15d5a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d5ac: 0xffb00000
    ctx->pc = 0x15d5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15d5b0: 0xffbf0010
    ctx->pc = 0x15d5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15d5b4: 0x8e220168
    ctx->pc = 0x15d5b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 360)));
    // 0x15d5b8: 0x28420020
    ctx->pc = 0x15d5b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 32));
    // 0x15d5bc: 0x14400006
    ctx->pc = 0x15D5BCu;
    {
        const bool branch_taken_0x15d5bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15D5C0u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15d5bc) {
            ctx->pc = 0x15D5D8u;
            goto label_15d5d8;
        }
    }
    ctx->pc = 0x15D5C4u;
    // 0x15d5c4: 0x3c040024
    ctx->pc = 0x15d5c4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15d5c8: 0xc058dd4
    ctx->pc = 0x15D5C8u;
    SET_GPR_U32(ctx, 31, 0x15D5D0u);
    ctx->pc = 0x15D5CCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962120));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D5D0u; }
    }
    if (ctx->pc != 0x15D5D0u) { return; }
    ctx->pc = 0x15D5D0u;
    // 0x15d5d0: 0x10000016
    ctx->pc = 0x15D5D0u;
    {
        const bool branch_taken_0x15d5d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15D5D4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15d5d0) {
            ctx->pc = 0x15D62Cu;
            goto label_15d62c;
        }
    }
    ctx->pc = 0x15D5D8u;
label_15d5d8:
    // 0x15d5d8: 0x4600014
    ctx->pc = 0x15D5D8u;
    {
        const bool branch_taken_0x15d5d8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x15D5DCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15d5d8) {
            ctx->pc = 0x15D62Cu;
            goto label_15d62c;
        }
    }
    ctx->pc = 0x15D5E0u;
    // 0x15d5e0: 0x8e220158
    ctx->pc = 0x15d5e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x15d5e4: 0x10400006
    ctx->pc = 0x15D5E4u;
    {
        const bool branch_taken_0x15d5e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x15d5e4) {
            ctx->pc = 0x15D600u;
            goto label_15d600;
        }
    }
    ctx->pc = 0x15D5ECu;
    // 0x15d5ec: 0xc057590
    ctx->pc = 0x15D5ECu;
    SET_GPR_U32(ctx, 31, 0x15D5F4u);
    ctx->pc = 0x15D640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D640_0x15d640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D5F4u; }
    }
    if (ctx->pc != 0x15D5F4u) { return; }
    ctx->pc = 0x15D5F4u;
    // 0x15d5f4: 0x10000005
    ctx->pc = 0x15D5F4u;
    {
        const bool branch_taken_0x15d5f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15D5F8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15d5f4) {
            ctx->pc = 0x15D60Cu;
            goto label_15d60c;
        }
    }
    ctx->pc = 0x15D5FCu;
    // 0x15d5fc: 0x0
    ctx->pc = 0x15d5fcu;
    // NOP
label_15d600:
    // 0x15d600: 0xc05759e
    ctx->pc = 0x15D600u;
    SET_GPR_U32(ctx, 31, 0x15D608u);
    ctx->pc = 0x15D604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15D678u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D678_0x15d678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D608u; }
    }
    if (ctx->pc != 0x15D608u) { return; }
    ctx->pc = 0x15D608u;
    // 0x15d608: 0x40802d
    ctx->pc = 0x15d608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15d60c:
    // 0x15d60c: 0x12000006
    ctx->pc = 0x15D60Cu;
    {
        const bool branch_taken_0x15d60c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x15D610u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15d60c) {
            ctx->pc = 0x15D628u;
            goto label_15d628;
        }
    }
    ctx->pc = 0x15D614u;
    // 0x15d614: 0x8e220168
    ctx->pc = 0x15d614u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 360)));
    // 0x15d618: 0x21080
    ctx->pc = 0x15d618u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x15d61c: 0x511021
    ctx->pc = 0x15d61cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x15d620: 0xc0575e8
    ctx->pc = 0x15D620u;
    SET_GPR_U32(ctx, 31, 0x15D628u);
    ctx->pc = 0x15D624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 364), GPR_U32(ctx, 16));
    ctx->pc = 0x15D7A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D7A0_0x15d7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D628u; }
    }
    if (ctx->pc != 0x15D628u) { return; }
    ctx->pc = 0x15D628u;
label_15d628:
    // 0x15d628: 0x200102d
    ctx->pc = 0x15d628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15d62c:
    // 0x15d62c: 0xdfb00000
    ctx->pc = 0x15d62cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d630: 0xdfb10008
    ctx->pc = 0x15d630u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15d634: 0xdfbf0010
    ctx->pc = 0x15d634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d638: 0x3e00008
    ctx->pc = 0x15D638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D63Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D5D8u: goto label_15d5d8;
            case 0x15D600u: goto label_15d600;
            case 0x15D60Cu: goto label_15d60c;
            case 0x15D628u: goto label_15d628;
            case 0x15D62Cu: goto label_15d62c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D640u;
}
