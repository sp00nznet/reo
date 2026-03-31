#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013C008
// Address: 0x13c008 - 0x13c0a0
void sub_0013C008_0x13c008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13c008u;

    // 0x13c008: 0x27bdffd0
    ctx->pc = 0x13c008u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13c00c: 0xffb20010
    ctx->pc = 0x13c00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13c010: 0xa0902d
    ctx->pc = 0x13c010u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c014: 0xffb10008
    ctx->pc = 0x13c014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13c018: 0xffb30018
    ctx->pc = 0x13c018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13c01c: 0xffb00000
    ctx->pc = 0x13c01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13c020: 0xffbf0020
    ctx->pc = 0x13c020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13c024: 0xc042c56
    ctx->pc = 0x13C024u;
    SET_GPR_U32(ctx, 31, 0x13C02Cu);
    ctx->pc = 0x13C028u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C02Cu; }
    }
    if (ctx->pc != 0x13C02Cu) { return; }
    ctx->pc = 0x13C02Cu;
    // 0x13c02c: 0x240202d
    ctx->pc = 0x13c02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c030: 0xc042c56
    ctx->pc = 0x13C030u;
    SET_GPR_U32(ctx, 31, 0x13C038u);
    ctx->pc = 0x13C034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C038u; }
    }
    if (ctx->pc != 0x13C038u) { return; }
    ctx->pc = 0x13C038u;
    // 0x13c038: 0x12220003
    ctx->pc = 0x13C038u;
    {
        const bool branch_taken_0x13c038 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        if (branch_taken_0x13c038) {
            ctx->pc = 0x13C048u;
            goto label_13c048;
        }
    }
    ctx->pc = 0x13C040u;
label_13c040:
    // 0x13c040: 0x1000000f
    ctx->pc = 0x13C040u;
    {
        const bool branch_taken_0x13c040 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13C044u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x13c040) {
            ctx->pc = 0x13C080u;
            goto label_13c080;
        }
    }
    ctx->pc = 0x13C048u;
label_13c048:
    // 0x13c048: 0x1a20000c
    ctx->pc = 0x13C048u;
    {
        const bool branch_taken_0x13c048 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x13C04Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13c048) {
            ctx->pc = 0x13C07Cu;
            goto label_13c07c;
        }
    }
    ctx->pc = 0x13C050u;
    // 0x13c050: 0x2501821
    ctx->pc = 0x13c050u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x13c054: 0x0
    ctx->pc = 0x13c054u;
    // NOP
label_13c058:
    // 0x13c058: 0x2701021
    ctx->pc = 0x13c058u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x13c05c: 0x80650000
    ctx->pc = 0x13c05cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13c060: 0x26100001
    ctx->pc = 0x13c060u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x13c064: 0xc04efec
    ctx->pc = 0x13C064u;
    SET_GPR_U32(ctx, 31, 0x13C06Cu);
    ctx->pc = 0x13C068u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x13BFB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013BFB0_0x13bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C06Cu; }
    }
    if (ctx->pc != 0x13C06Cu) { return; }
    ctx->pc = 0x13C06Cu;
    // 0x13c06c: 0x1440fff4
    ctx->pc = 0x13C06Cu;
    {
        const bool branch_taken_0x13c06c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13C070u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
        if (branch_taken_0x13c06c) {
            ctx->pc = 0x13C040u;
            goto label_13c040;
        }
    }
    ctx->pc = 0x13C074u;
    // 0x13c074: 0x1460fff8
    ctx->pc = 0x13C074u;
    {
        const bool branch_taken_0x13c074 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x13C078u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        if (branch_taken_0x13c074) {
            ctx->pc = 0x13C058u;
            goto label_13c058;
        }
    }
    ctx->pc = 0x13C07Cu;
label_13c07c:
    // 0x13c07c: 0x102d
    ctx->pc = 0x13c07cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13c080:
    // 0x13c080: 0xdfb00000
    ctx->pc = 0x13c080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c084: 0xdfb10008
    ctx->pc = 0x13c084u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13c088: 0xdfb20010
    ctx->pc = 0x13c088u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c08c: 0xdfb30018
    ctx->pc = 0x13c08cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13c090: 0xdfbf0020
    ctx->pc = 0x13c090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c094: 0x3e00008
    ctx->pc = 0x13C094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C098u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13C040u: goto label_13c040;
            case 0x13C048u: goto label_13c048;
            case 0x13C058u: goto label_13c058;
            case 0x13C07Cu: goto label_13c07c;
            case 0x13C080u: goto label_13c080;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13C09Cu;
    // 0x13c09c: 0x0
    ctx->pc = 0x13c09cu;
    // NOP
}
