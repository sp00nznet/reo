#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AF4D0
// Address: 0x1af4d0 - 0x1af5c0
void sub_001AF4D0_0x1af4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1af4d0u;

    // 0x1af4d0: 0x27bdfff0
    ctx->pc = 0x1af4d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af4d4: 0x3c010032
    ctx->pc = 0x1af4d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1af4d8: 0xffbf0000
    ctx->pc = 0x1af4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af4dc: 0xc0dc6d0
    ctx->pc = 0x1AF4DCu;
    SET_GPR_U32(ctx, 31, 0x1AF4E4u);
    ctx->pc = 0x1AF4E0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 16888), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x371B40u;
    {
        auto targetFn = runtime->lookupFunction(0x371B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF4E4u; }
        if (ctx->pc != 0x1AF4E4u) { return; }
    }
    ctx->pc = 0x1AF4E4u;
    // 0x1af4e4: 0xc06b878
    ctx->pc = 0x1AF4E4u;
    SET_GPR_U32(ctx, 31, 0x1AF4ECu);
    ctx->pc = 0x1AE1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE1E0_0x1ae1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF4ECu; }
    }
    if (ctx->pc != 0x1AF4ECu) { return; }
    ctx->pc = 0x1AF4ECu;
    // 0x1af4ec: 0xc06b3dc
    ctx->pc = 0x1AF4ECu;
    SET_GPR_U32(ctx, 31, 0x1AF4F4u);
    ctx->pc = 0x1ACF70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ACF70_0x1acf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF4F4u; }
    }
    if (ctx->pc != 0x1AF4F4u) { return; }
    ctx->pc = 0x1AF4F4u;
    // 0x1af4f4: 0xc06eabc
    ctx->pc = 0x1AF4F4u;
    SET_GPR_U32(ctx, 31, 0x1AF4FCu);
    ctx->pc = 0x1AF4F8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1BAAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BAAF0_0x1baaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF4FCu; }
    }
    if (ctx->pc != 0x1AF4FCu) { return; }
    ctx->pc = 0x1AF4FCu;
    // 0x1af4fc: 0xc06ea24
    ctx->pc = 0x1AF4FCu;
    SET_GPR_U32(ctx, 31, 0x1AF504u);
    ctx->pc = 0x1BA890u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA890_0x1ba890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF504u; }
    }
    if (ctx->pc != 0x1AF504u) { return; }
    ctx->pc = 0x1AF504u;
    // 0x1af504: 0xc06e004
    ctx->pc = 0x1AF504u;
    SET_GPR_U32(ctx, 31, 0x1AF50Cu);
    ctx->pc = 0x1B8010u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8010_0x1b8010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF50Cu; }
    }
    if (ctx->pc != 0x1AF50Cu) { return; }
    ctx->pc = 0x1AF50Cu;
    // 0x1af50c: 0x24040002
    ctx->pc = 0x1af50cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1af510: 0xc06a5d4
    ctx->pc = 0x1AF510u;
    SET_GPR_U32(ctx, 31, 0x1AF518u);
    ctx->pc = 0x1AF514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A9750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9750_0x1a9750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF518u; }
    }
    if (ctx->pc != 0x1AF518u) { return; }
    ctx->pc = 0x1AF518u;
    // 0x1af518: 0x1040000e
    ctx->pc = 0x1AF518u;
    {
        const bool branch_taken_0x1af518 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AF51Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1af518) {
            ctx->pc = 0x1AF554u;
            goto label_1af554;
        }
    }
    ctx->pc = 0x1AF520u;
    // 0x1af520: 0x3c010032
    ctx->pc = 0x1af520u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1af524: 0x902243c0
    ctx->pc = 0x1af524u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17344)));
    // 0x1af528: 0x14400005
    ctx->pc = 0x1AF528u;
    {
        const bool branch_taken_0x1af528 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AF52Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x1af528) {
            ctx->pc = 0x1AF540u;
            goto label_1af540;
        }
    }
    ctx->pc = 0x1AF530u;
    // 0x1af530: 0x24020001
    ctx->pc = 0x1af530u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af534: 0x84234200
    ctx->pc = 0x1af534u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 16896)));
    // 0x1af538: 0x14620005
    ctx->pc = 0x1AF538u;
    {
        const bool branch_taken_0x1af538 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1af538) {
            ctx->pc = 0x1AF550u;
            goto label_1af550;
        }
    }
    ctx->pc = 0x1AF540u;
label_1af540:
    // 0x1af540: 0xc06bd24
    ctx->pc = 0x1AF540u;
    SET_GPR_U32(ctx, 31, 0x1AF548u);
    ctx->pc = 0x1AF490u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF490_0x1af490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF548u; }
    }
    if (ctx->pc != 0x1AF548u) { return; }
    ctx->pc = 0x1AF548u;
    // 0x1af548: 0xc06bca0
    ctx->pc = 0x1AF548u;
    SET_GPR_U32(ctx, 31, 0x1AF550u);
    ctx->pc = 0x1AF280u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF280_0x1af280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF550u; }
    }
    if (ctx->pc != 0x1AF550u) { return; }
    ctx->pc = 0x1AF550u;
label_1af550:
    // 0x1af550: 0x24040003
    ctx->pc = 0x1af550u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
label_1af554:
    // 0x1af554: 0xc06a5d4
    ctx->pc = 0x1AF554u;
    SET_GPR_U32(ctx, 31, 0x1AF55Cu);
    ctx->pc = 0x1AF558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A9750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9750_0x1a9750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF55Cu; }
    }
    if (ctx->pc != 0x1AF55Cu) { return; }
    ctx->pc = 0x1AF55Cu;
    // 0x1af55c: 0x10400003
    ctx->pc = 0x1AF55Cu;
    {
        const bool branch_taken_0x1af55c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1af55c) {
            ctx->pc = 0x1AF56Cu;
            goto label_1af56c;
        }
    }
    ctx->pc = 0x1AF564u;
    // 0x1af564: 0xc06bca0
    ctx->pc = 0x1AF564u;
    SET_GPR_U32(ctx, 31, 0x1AF56Cu);
    ctx->pc = 0x1AF280u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF280_0x1af280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF56Cu; }
    }
    if (ctx->pc != 0x1AF56Cu) { return; }
    ctx->pc = 0x1AF56Cu;
label_1af56c:
    // 0x1af56c: 0xc06bcc8
    ctx->pc = 0x1AF56Cu;
    SET_GPR_U32(ctx, 31, 0x1AF574u);
    ctx->pc = 0x1AF320u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF320_0x1af320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF574u; }
    }
    if (ctx->pc != 0x1AF574u) { return; }
    ctx->pc = 0x1AF574u;
    // 0x1af574: 0x3c010032
    ctx->pc = 0x1af574u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1af578: 0xc06a8f4
    ctx->pc = 0x1AF578u;
    SET_GPR_U32(ctx, 31, 0x1AF580u);
    ctx->pc = 0x1AF57Cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 16896), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1AA3D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AA3D0_0x1aa3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF580u; }
    }
    if (ctx->pc != 0x1AF580u) { return; }
    ctx->pc = 0x1AF580u;
    // 0x1af580: 0xc06f32c
    ctx->pc = 0x1AF580u;
    SET_GPR_U32(ctx, 31, 0x1AF588u);
    ctx->pc = 0x1BCCB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BCCB0_0x1bccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF588u; }
    }
    if (ctx->pc != 0x1AF588u) { return; }
    ctx->pc = 0x1AF588u;
    // 0x1af588: 0xc06e05c
    ctx->pc = 0x1AF588u;
    SET_GPR_U32(ctx, 31, 0x1AF590u);
    ctx->pc = 0x1B8170u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8170_0x1b8170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF590u; }
    }
    if (ctx->pc != 0x1AF590u) { return; }
    ctx->pc = 0x1AF590u;
    // 0x1af590: 0xdfbf0000
    ctx->pc = 0x1af590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af594: 0x3e00008
    ctx->pc = 0x1AF594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF598u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AF540u: goto label_1af540;
            case 0x1AF550u: goto label_1af550;
            case 0x1AF554u: goto label_1af554;
            case 0x1AF56Cu: goto label_1af56c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AF59Cu;
    // 0x1af59c: 0x0
    ctx->pc = 0x1af59cu;
    // NOP
    // 0x1af5a0: 0x3c010032
    ctx->pc = 0x1af5a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1af5a4: 0x3e00008
    ctx->pc = 0x1AF5A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF5A8u;
        WRITE8(ADD32(GPR_U32(ctx, 1), 17357), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AF540u: goto label_1af540;
            case 0x1AF550u: goto label_1af550;
            case 0x1AF554u: goto label_1af554;
            case 0x1AF56Cu: goto label_1af56c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AF5ACu;
    // 0x1af5ac: 0x0
    ctx->pc = 0x1af5acu;
    // NOP
    // 0x1af5b0: 0x24030001
    ctx->pc = 0x1af5b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af5b4: 0x3c010032
    ctx->pc = 0x1af5b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1af5b8: 0x3e00008
    ctx->pc = 0x1AF5B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF5BCu;
        WRITE8(ADD32(GPR_U32(ctx, 1), 17357), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AF540u: goto label_1af540;
            case 0x1AF550u: goto label_1af550;
            case 0x1AF554u: goto label_1af554;
            case 0x1AF56Cu: goto label_1af56c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AF5C0u;
}
