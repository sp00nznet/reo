#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A71E0
// Address: 0x1a71e0 - 0x1a7310
void sub_001A71E0_0x1a71e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a71e0u;

    // 0x1a71e0: 0x27bdffd0
    ctx->pc = 0x1a71e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a71e4: 0x3c01002b
    ctx->pc = 0x1a71e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a71e8: 0xffbf0000
    ctx->pc = 0x1a71e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a71ec: 0x8c220a58
    ctx->pc = 0x1a71ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2648)));
    // 0x1a71f0: 0x10400003
    ctx->pc = 0x1A71F0u;
    {
        const bool branch_taken_0x1a71f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A71F4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a71f0) {
            ctx->pc = 0x1A7200u;
            goto label_1a7200;
        }
    }
    ctx->pc = 0x1A71F8u;
    // 0x1a71f8: 0x10000040
    ctx->pc = 0x1A71F8u;
    {
        const bool branch_taken_0x1a71f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A71FCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1a71f8) {
            ctx->pc = 0x1A72FCu;
            goto label_1a72fc;
        }
    }
    ctx->pc = 0x1A7200u;
label_1a7200:
    // 0x1a7200: 0xc069c48
    ctx->pc = 0x1A7200u;
    SET_GPR_U32(ctx, 31, 0x1A7208u);
    ctx->pc = 0x1A7120u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7120_0x1a7120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7208u; }
    }
    if (ctx->pc != 0x1A7208u) { return; }
    ctx->pc = 0x1A7208u;
    // 0x1a7208: 0x3c04002b
    ctx->pc = 0x1a7208u;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a720c: 0x282d
    ctx->pc = 0x1a720cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7210: 0xc069c5c
    ctx->pc = 0x1A7210u;
    SET_GPR_U32(ctx, 31, 0x1A7218u);
    ctx->pc = 0x1A7214u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 3120));
    ctx->pc = 0x1A7170u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7170_0x1a7170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7218u; }
    }
    if (ctx->pc != 0x1A7218u) { return; }
    ctx->pc = 0x1A7218u;
    // 0x1a7218: 0x4410006
    ctx->pc = 0x1A7218u;
    {
        const bool branch_taken_0x1a7218 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A721Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
        if (branch_taken_0x1a7218) {
            ctx->pc = 0x1A7234u;
            goto label_1a7234;
        }
    }
    ctx->pc = 0x1A7220u;
    // 0x1a7220: 0x3c040024
    ctx->pc = 0x1a7220u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1a7224: 0xc0423b4
    ctx->pc = 0x1A7224u;
    SET_GPR_U32(ctx, 31, 0x1A722Cu);
    ctx->pc = 0x1A7228u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8096));
    ctx->pc = 0x108ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108ED0_0x108ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A722Cu; }
    }
    if (ctx->pc != 0x1A722Cu) { return; }
    ctx->pc = 0x1A722Cu;
    // 0x1a722c: 0x10000032
    ctx->pc = 0x1A722Cu;
    {
        const bool branch_taken_0x1a722c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7230u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a722c) {
            ctx->pc = 0x1A72F8u;
            goto label_1a72f8;
        }
    }
    ctx->pc = 0x1A7234u;
label_1a7234:
    // 0x1a7234: 0x24050001
    ctx->pc = 0x1a7234u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7238: 0xc069c5c
    ctx->pc = 0x1A7238u;
    SET_GPR_U32(ctx, 31, 0x1A7240u);
    ctx->pc = 0x1A723Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 3072));
    ctx->pc = 0x1A7170u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7170_0x1a7170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7240u; }
    }
    if (ctx->pc != 0x1A7240u) { return; }
    ctx->pc = 0x1A7240u;
    // 0x1a7240: 0x4410005
    ctx->pc = 0x1A7240u;
    {
        const bool branch_taken_0x1a7240 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A7244u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x1a7240) {
            ctx->pc = 0x1A7258u;
            goto label_1a7258;
        }
    }
    ctx->pc = 0x1A7248u;
    // 0x1a7248: 0xc0423b4
    ctx->pc = 0x1A7248u;
    SET_GPR_U32(ctx, 31, 0x1A7250u);
    ctx->pc = 0x1A724Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8160));
    ctx->pc = 0x108ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108ED0_0x108ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7250u; }
    }
    if (ctx->pc != 0x1A7250u) { return; }
    ctx->pc = 0x1A7250u;
    // 0x1a7250: 0x10000029
    ctx->pc = 0x1A7250u;
    {
        const bool branch_taken_0x1a7250 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7254u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a7250) {
            ctx->pc = 0x1A72F8u;
            goto label_1a72f8;
        }
    }
    ctx->pc = 0x1A7258u;
label_1a7258:
    // 0x1a7258: 0x24020001
    ctx->pc = 0x1a7258u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a725c: 0x3c010023
    ctx->pc = 0x1a725cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1a7260: 0xafa20018
    ctx->pc = 0x1a7260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1a7264: 0xafa20014
    ctx->pc = 0x1a7264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1a7268: 0x8c221180
    ctx->pc = 0x1a7268u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4480)));
    // 0x1a726c: 0x441000b
    ctx->pc = 0x1A726Cu;
    {
        const bool branch_taken_0x1a726c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A7270u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        if (branch_taken_0x1a726c) {
            ctx->pc = 0x1A729Cu;
            goto label_1a729c;
        }
    }
    ctx->pc = 0x1A7274u;
    // 0x1a7274: 0xc045188
    ctx->pc = 0x1A7274u;
    SET_GPR_U32(ctx, 31, 0x1A727Cu);
    ctx->pc = 0x1A7278u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x114620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114620_0x114620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A727Cu; }
    }
    if (ctx->pc != 0x1A727Cu) { return; }
    ctx->pc = 0x1A727Cu;
    // 0x1a727c: 0x1c400006
    ctx->pc = 0x1A727Cu;
    {
        const bool branch_taken_0x1a727c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1A7280u;
        SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
        if (branch_taken_0x1a727c) {
            ctx->pc = 0x1A7298u;
            goto label_1a7298;
        }
    }
    ctx->pc = 0x1A7284u;
    // 0x1a7284: 0x3c040024
    ctx->pc = 0x1a7284u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1a7288: 0xc0423b4
    ctx->pc = 0x1A7288u;
    SET_GPR_U32(ctx, 31, 0x1A7290u);
    ctx->pc = 0x1A728Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8224));
    ctx->pc = 0x108ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108ED0_0x108ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7290u; }
    }
    if (ctx->pc != 0x1A7290u) { return; }
    ctx->pc = 0x1A7290u;
    // 0x1a7290: 0x10000019
    ctx->pc = 0x1A7290u;
    {
        const bool branch_taken_0x1a7290 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7294u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a7290) {
            ctx->pc = 0x1A72F8u;
            goto label_1a72f8;
        }
    }
    ctx->pc = 0x1A7298u;
label_1a7298:
    // 0x1a7298: 0xac221180
    ctx->pc = 0x1a7298u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4480), GPR_U32(ctx, 2));
label_1a729c:
    // 0x1a729c: 0x3c010023
    ctx->pc = 0x1a729cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1a72a0: 0x8c221188
    ctx->pc = 0x1a72a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4488)));
    // 0x1a72a4: 0x441000b
    ctx->pc = 0x1A72A4u;
    {
        const bool branch_taken_0x1a72a4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1a72a4) {
            ctx->pc = 0x1A72D4u;
            goto label_1a72d4;
        }
    }
    ctx->pc = 0x1A72ACu;
    // 0x1a72ac: 0xc045188
    ctx->pc = 0x1A72ACu;
    SET_GPR_U32(ctx, 31, 0x1A72B4u);
    ctx->pc = 0x1A72B0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x114620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114620_0x114620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A72B4u; }
    }
    if (ctx->pc != 0x1A72B4u) { return; }
    ctx->pc = 0x1A72B4u;
    // 0x1a72b4: 0x1c400006
    ctx->pc = 0x1A72B4u;
    {
        const bool branch_taken_0x1a72b4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1A72B8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
        if (branch_taken_0x1a72b4) {
            ctx->pc = 0x1A72D0u;
            goto label_1a72d0;
        }
    }
    ctx->pc = 0x1A72BCu;
    // 0x1a72bc: 0x3c040024
    ctx->pc = 0x1a72bcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1a72c0: 0xc0423b4
    ctx->pc = 0x1A72C0u;
    SET_GPR_U32(ctx, 31, 0x1A72C8u);
    ctx->pc = 0x1A72C4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8272));
    ctx->pc = 0x108ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108ED0_0x108ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A72C8u; }
    }
    if (ctx->pc != 0x1A72C8u) { return; }
    ctx->pc = 0x1A72C8u;
    // 0x1a72c8: 0x1000000b
    ctx->pc = 0x1A72C8u;
    {
        const bool branch_taken_0x1a72c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A72CCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a72c8) {
            ctx->pc = 0x1A72F8u;
            goto label_1a72f8;
        }
    }
    ctx->pc = 0x1A72D0u;
label_1a72d0:
    // 0x1a72d0: 0xac221188
    ctx->pc = 0x1a72d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4488), GPR_U32(ctx, 2));
label_1a72d4:
    // 0x1a72d4: 0x3c040024
    ctx->pc = 0x1a72d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1a72d8: 0x24020001
    ctx->pc = 0x1a72d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a72dc: 0x3c01002b
    ctx->pc = 0x1a72dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a72e0: 0x24842080
    ctx->pc = 0x1a72e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8320));
    // 0x1a72e4: 0xac220a58
    ctx->pc = 0x1a72e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2648), GPR_U32(ctx, 2));
    // 0x1a72e8: 0x24050002
    ctx->pc = 0x1a72e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a72ec: 0xc0423b4
    ctx->pc = 0x1A72ECu;
    SET_GPR_U32(ctx, 31, 0x1A72F4u);
    ctx->pc = 0x1A72F0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x108ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108ED0_0x108ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A72F4u; }
    }
    if (ctx->pc != 0x1A72F4u) { return; }
    ctx->pc = 0x1A72F4u;
    // 0x1a72f4: 0x102d
    ctx->pc = 0x1a72f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a72f8:
    // 0x1a72f8: 0xdfbf0000
    ctx->pc = 0x1a72f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a72fc:
    // 0x1a72fc: 0x3e00008
    ctx->pc = 0x1A72FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7300u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7200u: goto label_1a7200;
            case 0x1A7234u: goto label_1a7234;
            case 0x1A7258u: goto label_1a7258;
            case 0x1A7298u: goto label_1a7298;
            case 0x1A729Cu: goto label_1a729c;
            case 0x1A72D0u: goto label_1a72d0;
            case 0x1A72D4u: goto label_1a72d4;
            case 0x1A72F8u: goto label_1a72f8;
            case 0x1A72FCu: goto label_1a72fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A7304u;
    // 0x1a7304: 0x0
    ctx->pc = 0x1a7304u;
    // NOP
    // 0x1a7308: 0x0
    ctx->pc = 0x1a7308u;
    // NOP
    // 0x1a730c: 0x0
    ctx->pc = 0x1a730cu;
    // NOP
}
