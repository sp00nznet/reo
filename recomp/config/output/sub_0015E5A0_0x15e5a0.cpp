#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015E5A0
// Address: 0x15e5a0 - 0x15e678
void sub_0015E5A0_0x15e5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15e5a0u;

    // 0x15e5a0: 0x27bdffc0
    ctx->pc = 0x15e5a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15e5a4: 0x2402ffff
    ctx->pc = 0x15e5a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15e5a8: 0xffb30028
    ctx->pc = 0x15e5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x15e5ac: 0xa0982d
    ctx->pc = 0x15e5acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e5b0: 0xffb40030
    ctx->pc = 0x15e5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x15e5b4: 0xc0a02d
    ctx->pc = 0x15e5b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e5b8: 0x2e630800
    ctx->pc = 0x15e5b8u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 19), 2048));
    // 0x15e5bc: 0xffb20020
    ctx->pc = 0x15e5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x15e5c0: 0xffb00010
    ctx->pc = 0x15e5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x15e5c4: 0x80902d
    ctx->pc = 0x15e5c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e5c8: 0xffb10018
    ctx->pc = 0x15e5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x15e5cc: 0xffbf0038
    ctx->pc = 0x15e5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x15e5d0: 0x14600020
    ctx->pc = 0x15E5D0u;
    {
        const bool branch_taken_0x15e5d0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x15E5D4u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 2));
        if (branch_taken_0x15e5d0) {
            ctx->pc = 0x15E654u;
            goto label_15e654;
        }
    }
    ctx->pc = 0x15E5D8u;
    // 0x15e5d8: 0x1240001e
    ctx->pc = 0x15E5D8u;
    {
        const bool branch_taken_0x15e5d8 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x15E5DCu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x15e5d8) {
            ctx->pc = 0x15E654u;
            goto label_15e654;
        }
    }
    ctx->pc = 0x15E5E0u;
label_15e5e0:
    // 0x15e5e0: 0x2a220004
    ctx->pc = 0x15e5e0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
label_15e5e4:
    // 0x15e5e4: 0x1040001c
    ctx->pc = 0x15E5E4u;
    {
        const bool branch_taken_0x15e5e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15E5E8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x15e5e4) {
            ctx->pc = 0x15E658u;
            goto label_15e658;
        }
    }
    ctx->pc = 0x15E5ECu;
    // 0x15e5ec: 0x1122c0
    ctx->pc = 0x15e5ecu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 17), 11));
    // 0x15e5f0: 0x26310001
    ctx->pc = 0x15e5f0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x15e5f4: 0x2484f800
    ctx->pc = 0x15e5f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294965248));
    // 0x15e5f8: 0x2642823
    ctx->pc = 0x15e5f8u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x15e5fc: 0xc05e43c
    ctx->pc = 0x15E5FCu;
    SET_GPR_U32(ctx, 31, 0x15E604u);
    ctx->pc = 0x15E600u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->pc = 0x1790F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001790F0_0x1790f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E604u; }
    }
    if (ctx->pc != 0x15E604u) { return; }
    ctx->pc = 0x15E604u;
    // 0x15e604: 0x40802d
    ctx->pc = 0x15e604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e608: 0x3a0282d
    ctx->pc = 0x15e608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e60c: 0x1200fff4
    ctx->pc = 0x15E60Cu;
    {
        const bool branch_taken_0x15e60c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x15E610u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15e60c) {
            ctx->pc = 0x15E5E0u;
            goto label_15e5e0;
        }
    }
    ctx->pc = 0x15E614u;
    // 0x15e614: 0xc05e4c2
    ctx->pc = 0x15E614u;
    SET_GPR_U32(ctx, 31, 0x15E61Cu);
    ctx->pc = 0x179308u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00179308_0x179308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E61Cu; }
    }
    if (ctx->pc != 0x15E61Cu) { return; }
    ctx->pc = 0x15E61Cu;
    // 0x15e61c: 0x10400003
    ctx->pc = 0x15E61Cu;
    {
        const bool branch_taken_0x15e61c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15E620u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x15e61c) {
            ctx->pc = 0x15E62Cu;
            goto label_15e62c;
        }
    }
    ctx->pc = 0x15E624u;
    // 0x15e624: 0x14400006
    ctx->pc = 0x15E624u;
    {
        const bool branch_taken_0x15e624 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x15e624) {
            ctx->pc = 0x15E640u;
            goto label_15e640;
        }
    }
    ctx->pc = 0x15E62Cu;
label_15e62c:
    // 0x15e62c: 0xc05e46e
    ctx->pc = 0x15E62Cu;
    SET_GPR_U32(ctx, 31, 0x15E634u);
    ctx->pc = 0x15E630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1791B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001791B8_0x1791b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E634u; }
    }
    if (ctx->pc != 0x15E634u) { return; }
    ctx->pc = 0x15E634u;
    // 0x15e634: 0x1000ffeb
    ctx->pc = 0x15E634u;
    {
        const bool branch_taken_0x15e634 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15E638u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
        if (branch_taken_0x15e634) {
            ctx->pc = 0x15E5E4u;
            goto label_15e5e4;
        }
    }
    ctx->pc = 0x15E63Cu;
    // 0x15e63c: 0x0
    ctx->pc = 0x15e63cu;
    // NOP
label_15e640:
    // 0x15e640: 0xc05795c
    ctx->pc = 0x15E640u;
    SET_GPR_U32(ctx, 31, 0x15E648u);
    ctx->pc = 0x15E644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15E570u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E570_0x15e570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E648u; }
    }
    if (ctx->pc != 0x15E648u) { return; }
    ctx->pc = 0x15E648u;
    // 0x15e648: 0x200202d
    ctx->pc = 0x15e648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e64c: 0xc05e46e
    ctx->pc = 0x15E64Cu;
    SET_GPR_U32(ctx, 31, 0x15E654u);
    ctx->pc = 0x15E650u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x1791B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001791B8_0x1791b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E654u; }
    }
    if (ctx->pc != 0x15E654u) { return; }
    ctx->pc = 0x15E654u;
label_15e654:
    // 0x15e654: 0xdfb00010
    ctx->pc = 0x15e654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15e658:
    // 0x15e658: 0xdfb10018
    ctx->pc = 0x15e658u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15e65c: 0xdfb20020
    ctx->pc = 0x15e65cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e660: 0xdfb30028
    ctx->pc = 0x15e660u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15e664: 0xdfb40030
    ctx->pc = 0x15e664u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e668: 0xdfbf0038
    ctx->pc = 0x15e668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e66c: 0x3e00008
    ctx->pc = 0x15E66Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E670u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15E5E0u: goto label_15e5e0;
            case 0x15E5E4u: goto label_15e5e4;
            case 0x15E62Cu: goto label_15e62c;
            case 0x15E640u: goto label_15e640;
            case 0x15E654u: goto label_15e654;
            case 0x15E658u: goto label_15e658;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15E674u;
    // 0x15e674: 0x0
    ctx->pc = 0x15e674u;
    // NOP
}
