#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00103530
// Address: 0x103530 - 0x103630
void sub_00103530_0x103530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x103530u;

    // 0x103530: 0x27bdffc0
    ctx->pc = 0x103530u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x103534: 0xffb00000
    ctx->pc = 0x103534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103538: 0x80802d
    ctx->pc = 0x103538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10353c: 0xffb20020
    ctx->pc = 0x10353cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x103540: 0xffb10010
    ctx->pc = 0x103540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x103544: 0xc0902d
    ctx->pc = 0x103544u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103548: 0xffbf0030
    ctx->pc = 0x103548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10354c: 0xc040c00
    ctx->pc = 0x10354Cu;
    SET_GPR_U32(ctx, 31, 0x103554u);
    ctx->pc = 0x103550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x103000u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00103000_0x103000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103554u; }
    }
    if (ctx->pc != 0x103554u) { return; }
    ctx->pc = 0x103554u;
    // 0x103554: 0x40882d
    ctx->pc = 0x103554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103558: 0xc040bc2
    ctx->pc = 0x103558u;
    SET_GPR_U32(ctx, 31, 0x103560u);
    ctx->pc = 0x10355Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x102F08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00102F08_0x102f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103560u; }
    }
    if (ctx->pc != 0x103560u) { return; }
    ctx->pc = 0x103560u;
    // 0x103560: 0x3c02ffff
    ctx->pc = 0x103560u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x103564: 0x8e030010
    ctx->pc = 0x103564u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x103568: 0x3442ffff
    ctx->pc = 0x103568u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x10356c: 0x54620001
    ctx->pc = 0x10356Cu;
    {
        const bool branch_taken_0x10356c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x10356c) {
            ctx->pc = 0x103570u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
            ctx->pc = 0x103574u;
            goto label_103574;
        }
    }
    ctx->pc = 0x103574u;
label_103574:
    // 0x103574: 0x8e020000
    ctx->pc = 0x103574u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x103578: 0x2403fff3
    ctx->pc = 0x103578u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x10357c: 0x2404fffe
    ctx->pc = 0x10357cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x103580: 0xae120020
    ctx->pc = 0x103580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
    // 0x103584: 0x431024
    ctx->pc = 0x103584u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x103588: 0xdfbf0030
    ctx->pc = 0x103588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10358c: 0x441024
    ctx->pc = 0x10358cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x103590: 0xdfb20020
    ctx->pc = 0x103590u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103594: 0x34420100
    ctx->pc = 0x103594u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 256));
    // 0x103598: 0xdfb10010
    ctx->pc = 0x103598u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10359c: 0xae020000
    ctx->pc = 0x10359cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1035a0: 0xdfb00000
    ctx->pc = 0x1035a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1035a4: 0x3e00008
    ctx->pc = 0x1035A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1035A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x103574u: goto label_103574;
            case 0x1035F4u: goto label_1035f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1035ACu;
    // 0x1035ac: 0x0
    ctx->pc = 0x1035acu;
    // NOP
    // 0x1035b0: 0x27bdffc0
    ctx->pc = 0x1035b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1035b4: 0xffb00000
    ctx->pc = 0x1035b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1035b8: 0x80802d
    ctx->pc = 0x1035b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1035bc: 0xffb20020
    ctx->pc = 0x1035bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1035c0: 0xffb10010
    ctx->pc = 0x1035c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1035c4: 0xc0902d
    ctx->pc = 0x1035c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1035c8: 0xffbf0030
    ctx->pc = 0x1035c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1035cc: 0xc040c00
    ctx->pc = 0x1035CCu;
    SET_GPR_U32(ctx, 31, 0x1035D4u);
    ctx->pc = 0x1035D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x103000u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00103000_0x103000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1035D4u; }
    }
    if (ctx->pc != 0x1035D4u) { return; }
    ctx->pc = 0x1035D4u;
    // 0x1035d4: 0x40882d
    ctx->pc = 0x1035d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1035d8: 0xc040bc2
    ctx->pc = 0x1035D8u;
    SET_GPR_U32(ctx, 31, 0x1035E0u);
    ctx->pc = 0x1035DCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x102F08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00102F08_0x102f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1035E0u; }
    }
    if (ctx->pc != 0x1035E0u) { return; }
    ctx->pc = 0x1035E0u;
    // 0x1035e0: 0x3c02ffff
    ctx->pc = 0x1035e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x1035e4: 0x8e030010
    ctx->pc = 0x1035e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1035e8: 0x3442ffff
    ctx->pc = 0x1035e8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1035ec: 0x54620001
    ctx->pc = 0x1035ECu;
    {
        const bool branch_taken_0x1035ec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1035ec) {
            ctx->pc = 0x1035F0u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
            ctx->pc = 0x1035F4u;
            goto label_1035f4;
        }
    }
    ctx->pc = 0x1035F4u;
label_1035f4:
    // 0x1035f4: 0x8e020000
    ctx->pc = 0x1035f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1035f8: 0x2403fff3
    ctx->pc = 0x1035f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1035fc: 0x2404fffe
    ctx->pc = 0x1035fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x103600: 0xae120020
    ctx->pc = 0x103600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
    // 0x103604: 0x431024
    ctx->pc = 0x103604u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x103608: 0xdfbf0030
    ctx->pc = 0x103608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10360c: 0x34420008
    ctx->pc = 0x10360cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8));
    // 0x103610: 0xdfb20020
    ctx->pc = 0x103610u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103614: 0x441024
    ctx->pc = 0x103614u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x103618: 0xdfb10010
    ctx->pc = 0x103618u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10361c: 0x34420100
    ctx->pc = 0x10361cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 256));
    // 0x103620: 0xae020000
    ctx->pc = 0x103620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x103624: 0xdfb00000
    ctx->pc = 0x103624u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103628: 0x3e00008
    ctx->pc = 0x103628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10362Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x103574u: goto label_103574;
            case 0x1035F4u: goto label_1035f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x103630u;
}
