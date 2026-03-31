#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00173210
// Address: 0x173210 - 0x1732d8
void sub_00173210_0x173210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x173210u;

    // 0x173210: 0x27bdffe0
    ctx->pc = 0x173210u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x173214: 0xffb00000
    ctx->pc = 0x173214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173218: 0x80802d
    ctx->pc = 0x173218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17321c: 0xffb10008
    ctx->pc = 0x17321cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x173220: 0x260309a0
    ctx->pc = 0x173220u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 2464));
    // 0x173224: 0xffb20010
    ctx->pc = 0x173224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x173228: 0xffbf0018
    ctx->pc = 0x173228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17322c: 0x8c620018
    ctx->pc = 0x17322cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x173230: 0x14400005
    ctx->pc = 0x173230u;
    {
        const bool branch_taken_0x173230 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x173234u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x173230) {
            ctx->pc = 0x173248u;
            goto label_173248;
        }
    }
    ctx->pc = 0x173238u;
    // 0x173238: 0x8c630014
    ctx->pc = 0x173238u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x17323c: 0x10600020
    ctx->pc = 0x17323Cu;
    {
        const bool branch_taken_0x17323c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x173240u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x17323c) {
            ctx->pc = 0x1732C0u;
            goto label_1732c0;
        }
    }
    ctx->pc = 0x173244u;
    // 0x173244: 0x24050006
    ctx->pc = 0x173244u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
label_173248:
    // 0x173248: 0xc05df1e
    ctx->pc = 0x173248u;
    SET_GPR_U32(ctx, 31, 0x173250u);
    ctx->pc = 0x17324Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177C78_0x177c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173250u; }
    }
    if (ctx->pc != 0x173250u) { return; }
    ctx->pc = 0x173250u;
    // 0x173250: 0x200202d
    ctx->pc = 0x173250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173254: 0x24050007
    ctx->pc = 0x173254u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    // 0x173258: 0xc05df1e
    ctx->pc = 0x173258u;
    SET_GPR_U32(ctx, 31, 0x173260u);
    ctx->pc = 0x17325Cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177C78_0x177c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173260u; }
    }
    if (ctx->pc != 0x173260u) { return; }
    ctx->pc = 0x173260u;
    // 0x173260: 0x200202d
    ctx->pc = 0x173260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173264: 0x24050019
    ctx->pc = 0x173264u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 25));
    // 0x173268: 0xc05d58a
    ctx->pc = 0x173268u;
    SET_GPR_U32(ctx, 31, 0x173270u);
    ctx->pc = 0x17326Cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173270u; }
    }
    if (ctx->pc != 0x173270u) { return; }
    ctx->pc = 0x173270u;
    // 0x173270: 0x40182d
    ctx->pc = 0x173270u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173274: 0x24020001
    ctx->pc = 0x173274u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x173278: 0x1062000b
    ctx->pc = 0x173278u;
    {
        const bool branch_taken_0x173278 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x17327Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x173278) {
            ctx->pc = 0x1732A8u;
            goto label_1732a8;
        }
    }
    ctx->pc = 0x173280u;
    // 0x173280: 0x5060000e
    ctx->pc = 0x173280u;
    {
        const bool branch_taken_0x173280 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x173280) {
            ctx->pc = 0x173284u;
            SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
            ctx->pc = 0x1732BCu;
            goto label_1732bc;
        }
    }
    ctx->pc = 0x173288u;
    // 0x173288: 0x24020002
    ctx->pc = 0x173288u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x17328c: 0x10620008
    ctx->pc = 0x17328Cu;
    {
        const bool branch_taken_0x17328c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x173290u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x17328c) {
            ctx->pc = 0x1732B0u;
            goto label_1732b0;
        }
    }
    ctx->pc = 0x173294u;
    // 0x173294: 0x10620008
    ctx->pc = 0x173294u;
    {
        const bool branch_taken_0x173294 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x173298u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x173294) {
            ctx->pc = 0x1732B8u;
            goto label_1732b8;
        }
    }
    ctx->pc = 0x17329Cu;
    // 0x17329c: 0x10000009
    ctx->pc = 0x17329Cu;
    {
        const bool branch_taken_0x17329c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1732A0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x17329c) {
            ctx->pc = 0x1732C4u;
            goto label_1732c4;
        }
    }
    ctx->pc = 0x1732A4u;
    // 0x1732a4: 0x0
    ctx->pc = 0x1732a4u;
    // NOP
label_1732a8:
    // 0x1732a8: 0x10000004
    ctx->pc = 0x1732A8u;
    {
        const bool branch_taken_0x1732a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1732ACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1732a8) {
            ctx->pc = 0x1732BCu;
            goto label_1732bc;
        }
    }
    ctx->pc = 0x1732B0u;
label_1732b0:
    // 0x1732b0: 0x10000002
    ctx->pc = 0x1732B0u;
    {
        const bool branch_taken_0x1732b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1732B4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1732b0) {
            ctx->pc = 0x1732BCu;
            goto label_1732bc;
        }
    }
    ctx->pc = 0x1732B8u;
label_1732b8:
    // 0x1732b8: 0x2322025
    ctx->pc = 0x1732b8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_1732bc:
    // 0x1732bc: 0x80102d
    ctx->pc = 0x1732bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1732c0:
    // 0x1732c0: 0xdfb00000
    ctx->pc = 0x1732c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1732c4:
    // 0x1732c4: 0xdfb10008
    ctx->pc = 0x1732c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1732c8: 0xdfb20010
    ctx->pc = 0x1732c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1732cc: 0xdfbf0018
    ctx->pc = 0x1732ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1732d0: 0x3e00008
    ctx->pc = 0x1732D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1732D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173248u: goto label_173248;
            case 0x1732A8u: goto label_1732a8;
            case 0x1732B0u: goto label_1732b0;
            case 0x1732B8u: goto label_1732b8;
            case 0x1732BCu: goto label_1732bc;
            case 0x1732C0u: goto label_1732c0;
            case 0x1732C4u: goto label_1732c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1732D8u;
}
