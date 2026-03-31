#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BE280
// Address: 0x1be280 - 0x1be380
void sub_001BE280_0x1be280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1be280u;

    // 0x1be280: 0x27bdffe0
    ctx->pc = 0x1be280u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1be284: 0x3c010023
    ctx->pc = 0x1be284u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1be288: 0xffbf0010
    ctx->pc = 0x1be288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1be28c: 0x7fb00000
    ctx->pc = 0x1be28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1be290: 0x8c235008
    ctx->pc = 0x1be290u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 20488)));
    // 0x1be294: 0x14600031
    ctx->pc = 0x1BE294u;
    {
        const bool branch_taken_0x1be294 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1BE298u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1be294) {
            ctx->pc = 0x1BE35Cu;
            goto label_1be35c;
        }
    }
    ctx->pc = 0x1BE29Cu;
    // 0x1be29c: 0x3c010032
    ctx->pc = 0x1be29cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1be2a0: 0x24040001
    ctx->pc = 0x1be2a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be2a4: 0x8c2344e0
    ctx->pc = 0x1be2a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 17632)));
    // 0x1be2a8: 0x14640028
    ctx->pc = 0x1BE2A8u;
    {
        const bool branch_taken_0x1be2a8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x1BE2ACu;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x1be2a8) {
            ctx->pc = 0x1BE34Cu;
            goto label_1be34c;
        }
    }
    ctx->pc = 0x1BE2B0u;
    // 0x1be2b0: 0x3c010032
    ctx->pc = 0x1be2b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1be2b4: 0x8c2344e8
    ctx->pc = 0x1be2b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 17640)));
    // 0x1be2b8: 0x1070002c
    ctx->pc = 0x1BE2B8u;
    {
        const bool branch_taken_0x1be2b8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 16));
        if (branch_taken_0x1be2b8) {
            ctx->pc = 0x1BE36Cu;
            goto label_1be36c;
        }
    }
    ctx->pc = 0x1BE2C0u;
    // 0x1be2c0: 0x1600000a
    ctx->pc = 0x1BE2C0u;
    {
        const bool branch_taken_0x1be2c0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x1be2c0) {
            ctx->pc = 0x1BE2ECu;
            goto label_1be2ec;
        }
    }
    ctx->pc = 0x1BE2C8u;
    // 0x1be2c8: 0xc06f900
    ctx->pc = 0x1BE2C8u;
    SET_GPR_U32(ctx, 31, 0x1BE2D0u);
    ctx->pc = 0x1BE400u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE400_0x1be400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE2D0u; }
    }
    if (ctx->pc != 0x1BE2D0u) { return; }
    ctx->pc = 0x1BE2D0u;
    // 0x1be2d0: 0x4400026
    ctx->pc = 0x1BE2D0u;
    {
        const bool branch_taken_0x1be2d0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BE2D4u;
        SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
        if (branch_taken_0x1be2d0) {
            ctx->pc = 0x1BE36Cu;
            goto label_1be36c;
        }
    }
    ctx->pc = 0x1BE2D8u;
    // 0x1be2d8: 0x202d
    ctx->pc = 0x1be2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be2dc: 0xc06a2c8
    ctx->pc = 0x1BE2DCu;
    SET_GPR_U32(ctx, 31, 0x1BE2E4u);
    ctx->pc = 0x1BE2E0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1144));
    ctx->pc = 0x1A8B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8B20_0x1a8b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE2E4u; }
    }
    if (ctx->pc != 0x1BE2E4u) { return; }
    ctx->pc = 0x1BE2E4u;
    // 0x1be2e4: 0x10000009
    ctx->pc = 0x1BE2E4u;
    {
        const bool branch_taken_0x1be2e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1be2e4) {
            ctx->pc = 0x1BE30Cu;
            goto label_1be30c;
        }
    }
    ctx->pc = 0x1BE2ECu;
label_1be2ec:
    // 0x1be2ec: 0xc06f8ec
    ctx->pc = 0x1BE2ECu;
    SET_GPR_U32(ctx, 31, 0x1BE2F4u);
    ctx->pc = 0x1BE3B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE3B0_0x1be3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE2F4u; }
    }
    if (ctx->pc != 0x1BE2F4u) { return; }
    ctx->pc = 0x1BE2F4u;
    // 0x1be2f4: 0x440001d
    ctx->pc = 0x1BE2F4u;
    {
        const bool branch_taken_0x1be2f4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BE2F8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)37 << 16));
        if (branch_taken_0x1be2f4) {
            ctx->pc = 0x1BE36Cu;
            goto label_1be36c;
        }
    }
    ctx->pc = 0x1BE2FCu;
    // 0x1be2fc: 0x3c050025
    ctx->pc = 0x1be2fcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1be300: 0x24840480
    ctx->pc = 0x1be300u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1152));
    // 0x1be304: 0xc06a2c8
    ctx->pc = 0x1BE304u;
    SET_GPR_U32(ctx, 31, 0x1BE30Cu);
    ctx->pc = 0x1BE308u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1160));
    ctx->pc = 0x1A8B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8B20_0x1a8b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE30Cu; }
    }
    if (ctx->pc != 0x1BE30Cu) { return; }
    ctx->pc = 0x1BE30Cu;
label_1be30c:
    // 0x1be30c: 0xc06a61c
    ctx->pc = 0x1BE30Cu;
    SET_GPR_U32(ctx, 31, 0x1BE314u);
    ctx->pc = 0x1A9870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9870_0x1a9870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE314u; }
    }
    if (ctx->pc != 0x1BE314u) { return; }
    ctx->pc = 0x1BE314u;
    // 0x1be314: 0x3c010032
    ctx->pc = 0x1be314u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1be318: 0xac3044e8
    ctx->pc = 0x1be318u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17640), GPR_U32(ctx, 16));
    // 0x1be31c: 0x3c010032
    ctx->pc = 0x1be31cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1be320: 0x16000005
    ctx->pc = 0x1BE320u;
    {
        const bool branch_taken_0x1be320 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1BE324u;
        WRITE8(ADD32(GPR_U32(ctx, 1), 17527), (uint8_t)GPR_U32(ctx, 16));
        if (branch_taken_0x1be320) {
            ctx->pc = 0x1BE338u;
            goto label_1be338;
        }
    }
    ctx->pc = 0x1BE328u;
    // 0x1be328: 0x24030003
    ctx->pc = 0x1be328u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1be32c: 0x3c010032
    ctx->pc = 0x1be32cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1be330: 0x10000004
    ctx->pc = 0x1BE330u;
    {
        const bool branch_taken_0x1be330 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BE334u;
        WRITE8(ADD32(GPR_U32(ctx, 1), 17361), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1be330) {
            ctx->pc = 0x1BE344u;
            goto label_1be344;
        }
    }
    ctx->pc = 0x1BE338u;
label_1be338:
    // 0x1be338: 0x24030002
    ctx->pc = 0x1be338u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1be33c: 0x3c010032
    ctx->pc = 0x1be33cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1be340: 0xa02343d1
    ctx->pc = 0x1be340u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17361), (uint8_t)GPR_U32(ctx, 3));
label_1be344:
    // 0x1be344: 0x1000000a
    ctx->pc = 0x1BE344u;
    {
        const bool branch_taken_0x1be344 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BE348u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1be344) {
            ctx->pc = 0x1BE370u;
            goto label_1be370;
        }
    }
    ctx->pc = 0x1BE34Cu;
label_1be34c:
    // 0x1be34c: 0xa02443d1
    ctx->pc = 0x1be34cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17361), (uint8_t)GPR_U32(ctx, 4));
    // 0x1be350: 0x3c010032
    ctx->pc = 0x1be350u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1be354: 0x10000005
    ctx->pc = 0x1BE354u;
    {
        const bool branch_taken_0x1be354 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BE358u;
        WRITE8(ADD32(GPR_U32(ctx, 1), 17527), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1be354) {
            ctx->pc = 0x1BE36Cu;
            goto label_1be36c;
        }
    }
    ctx->pc = 0x1BE35Cu;
label_1be35c:
    // 0x1be35c: 0x3c010032
    ctx->pc = 0x1be35cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1be360: 0xa02043d1
    ctx->pc = 0x1be360u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17361), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be364: 0x3c010032
    ctx->pc = 0x1be364u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1be368: 0xa0204477
    ctx->pc = 0x1be368u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17527), (uint8_t)GPR_U32(ctx, 0));
label_1be36c:
    // 0x1be36c: 0xdfbf0010
    ctx->pc = 0x1be36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1be370:
    // 0x1be370: 0x7bb00000
    ctx->pc = 0x1be370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be374: 0x3e00008
    ctx->pc = 0x1BE374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE378u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BE2ECu: goto label_1be2ec;
            case 0x1BE30Cu: goto label_1be30c;
            case 0x1BE338u: goto label_1be338;
            case 0x1BE344u: goto label_1be344;
            case 0x1BE34Cu: goto label_1be34c;
            case 0x1BE35Cu: goto label_1be35c;
            case 0x1BE36Cu: goto label_1be36c;
            case 0x1BE370u: goto label_1be370;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BE37Cu;
    // 0x1be37c: 0x0
    ctx->pc = 0x1be37cu;
    // NOP
}
