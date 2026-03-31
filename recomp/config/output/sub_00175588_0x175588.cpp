#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00175588
// Address: 0x175588 - 0x175628
void sub_00175588_0x175588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x175588u;

    // 0x175588: 0x27bdffe0
    ctx->pc = 0x175588u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17558c: 0xffb00000
    ctx->pc = 0x17558cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175590: 0x80802d
    ctx->pc = 0x175590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175594: 0xffb10008
    ctx->pc = 0x175594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x175598: 0xa0882d
    ctx->pc = 0x175598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17559c: 0xffb20010
    ctx->pc = 0x17559cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1755a0: 0xc0902d
    ctx->pc = 0x1755a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1755a4: 0xffbf0018
    ctx->pc = 0x1755a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1755a8: 0x16000007
    ctx->pc = 0x1755A8u;
    {
        const bool branch_taken_0x1755a8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1755ACu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x1755a8) {
            ctx->pc = 0x1755C8u;
            goto label_1755c8;
        }
    }
    ctx->pc = 0x1755B0u;
    // 0x1755b0: 0x3c010023
    ctx->pc = 0x1755b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1755b4: 0x220821
    ctx->pc = 0x1755b4u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1755b8: 0x8c22ef88
    ctx->pc = 0x1755b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294963080)));
    // 0x1755bc: 0x10000012
    ctx->pc = 0x1755BCu;
    {
        const bool branch_taken_0x1755bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1755C0u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1755bc) {
            ctx->pc = 0x175608u;
            goto label_175608;
        }
    }
    ctx->pc = 0x1755C4u;
    // 0x1755c4: 0x0
    ctx->pc = 0x1755c4u;
    // NOP
label_1755c8:
    // 0x1755c8: 0xc05a78c
    ctx->pc = 0x1755C8u;
    SET_GPR_U32(ctx, 31, 0x1755D0u);
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1755D0u; }
    }
    if (ctx->pc != 0x1755D0u) { return; }
    ctx->pc = 0x1755D0u;
    // 0x1755d0: 0x3c05ff00
    ctx->pc = 0x1755d0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1755d4: 0x10400008
    ctx->pc = 0x1755D4u;
    {
        const bool branch_taken_0x1755d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1755D8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1755d4) {
            ctx->pc = 0x1755F8u;
            goto label_1755f8;
        }
    }
    ctx->pc = 0x1755DCu;
    // 0x1755dc: 0xdfb00000
    ctx->pc = 0x1755dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1755e0: 0x34a50113
    ctx->pc = 0x1755e0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 275));
    // 0x1755e4: 0xdfb10008
    ctx->pc = 0x1755e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1755e8: 0xdfb20010
    ctx->pc = 0x1755e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1755ec: 0xdfbf0018
    ctx->pc = 0x1755ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1755f0: 0x805a704
    ctx->pc = 0x1755F0u;
    ctx->pc = 0x1755F4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x1755F8u;
label_1755f8:
    // 0x1755f8: 0x200202d
    ctx->pc = 0x1755f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1755fc: 0xc05d58a
    ctx->pc = 0x1755FCu;
    SET_GPR_U32(ctx, 31, 0x175604u);
    ctx->pc = 0x175600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175604u; }
    }
    if (ctx->pc != 0x175604u) { return; }
    ctx->pc = 0x175604u;
    // 0x175604: 0xae420000
    ctx->pc = 0x175604u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_175608:
    // 0x175608: 0xdfb00000
    ctx->pc = 0x175608u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17560c: 0x102d
    ctx->pc = 0x17560cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175610: 0xdfb10008
    ctx->pc = 0x175610u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175614: 0xdfb20010
    ctx->pc = 0x175614u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175618: 0xdfbf0018
    ctx->pc = 0x175618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17561c: 0x3e00008
    ctx->pc = 0x17561Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175620u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1755C8u: goto label_1755c8;
            case 0x1755F8u: goto label_1755f8;
            case 0x175608u: goto label_175608;
            default: break;
        }
        return;
    }
    ctx->pc = 0x175624u;
    // 0x175624: 0x0
    ctx->pc = 0x175624u;
    // NOP
}
