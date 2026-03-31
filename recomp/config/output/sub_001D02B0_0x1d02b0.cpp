#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D02B0
// Address: 0x1d02b0 - 0x1d03a0
void sub_001D02B0_0x1d02b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d02b0u;

    // 0x1d02b0: 0x27bdfff0
    ctx->pc = 0x1d02b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d02b4: 0x80682d
    ctx->pc = 0x1d02b4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d02b8: 0x15a00003
    ctx->pc = 0x1D02B8u;
    {
        const bool branch_taken_0x1d02b8 = (GPR_U32(ctx, 13) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D02BCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x1d02b8) {
            ctx->pc = 0x1D02C8u;
            goto label_1d02c8;
        }
    }
    ctx->pc = 0x1D02C0u;
    // 0x1d02c0: 0x1000001a
    ctx->pc = 0x1D02C0u;
    {
        const bool branch_taken_0x1d02c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D02C4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d02c0) {
            ctx->pc = 0x1D032Cu;
            goto label_1d032c;
        }
    }
    ctx->pc = 0x1D02C8u;
label_1d02c8:
    // 0x1d02c8: 0x3c0c0034
    ctx->pc = 0x1d02c8u;
    SET_GPR_U32(ctx, 12, ((uint32_t)52 << 16));
    // 0x1d02cc: 0x582d
    ctx->pc = 0x1d02ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d02d0: 0x10000013
    ctx->pc = 0x1D02D0u;
    {
        const bool branch_taken_0x1d02d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D02D4u;
        SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 5168));
        if (branch_taken_0x1d02d0) {
            ctx->pc = 0x1D0320u;
            goto label_1d0320;
        }
    }
    ctx->pc = 0x1D02D8u;
label_1d02d8:
    // 0x1d02d8: 0x91820000
    ctx->pc = 0x1d02d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1d02dc: 0x1040000e
    ctx->pc = 0x1D02DCu;
    {
        const bool branch_taken_0x1d02dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d02dc) {
            ctx->pc = 0x1D0318u;
            goto label_1d0318;
        }
    }
    ctx->pc = 0x1D02E4u;
    // 0x1d02e4: 0x91820003
    ctx->pc = 0x1d02e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 3)));
    // 0x1d02e8: 0x30420004
    ctx->pc = 0x1d02e8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x1d02ec: 0x1040000a
    ctx->pc = 0x1D02ECu;
    {
        const bool branch_taken_0x1d02ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d02ec) {
            ctx->pc = 0x1D0318u;
            goto label_1d0318;
        }
    }
    ctx->pc = 0x1D02F4u;
    // 0x1d02f4: 0x8d840004
    ctx->pc = 0x1d02f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x1d02f8: 0x10800007
    ctx->pc = 0x1D02F8u;
    {
        const bool branch_taken_0x1d02f8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D02FCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d02f8) {
            ctx->pc = 0x1D0318u;
            goto label_1d0318;
        }
    }
    ctx->pc = 0x1D0300u;
    // 0x1d0300: 0xc073d7c
    ctx->pc = 0x1D0300u;
    SET_GPR_U32(ctx, 31, 0x1D0308u);
    ctx->pc = 0x1CF5F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CF5F0_0x1cf5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0308u; }
    }
    if (ctx->pc != 0x1D0308u) { return; }
    ctx->pc = 0x1D0308u;
    // 0x1d0308: 0x10400003
    ctx->pc = 0x1D0308u;
    {
        const bool branch_taken_0x1d0308 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d0308) {
            ctx->pc = 0x1D0318u;
            goto label_1d0318;
        }
    }
    ctx->pc = 0x1D0310u;
    // 0x1d0310: 0x10000006
    ctx->pc = 0x1D0310u;
    {
        const bool branch_taken_0x1d0310 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D0314u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1d0310) {
            ctx->pc = 0x1D032Cu;
            goto label_1d032c;
        }
    }
    ctx->pc = 0x1D0318u;
label_1d0318:
    // 0x1d0318: 0x256b0001
    ctx->pc = 0x1d0318u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 1));
    // 0x1d031c: 0x258c000c
    ctx->pc = 0x1d031cu;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 12));
label_1d0320:
    // 0x1d0320: 0x29620010
    ctx->pc = 0x1d0320u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 11), 16));
    // 0x1d0324: 0x1440ffec
    ctx->pc = 0x1D0324u;
    {
        const bool branch_taken_0x1d0324 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D0328u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d0324) {
            ctx->pc = 0x1D02D8u;
            goto label_1d02d8;
        }
    }
    ctx->pc = 0x1D032Cu;
label_1d032c:
    // 0x1d032c: 0xdfbf0000
    ctx->pc = 0x1d032cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0330: 0x3e00008
    ctx->pc = 0x1D0330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0334u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D02C8u: goto label_1d02c8;
            case 0x1D02D8u: goto label_1d02d8;
            case 0x1D0318u: goto label_1d0318;
            case 0x1D0320u: goto label_1d0320;
            case 0x1D032Cu: goto label_1d032c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D0338u;
    // 0x1d0338: 0x0
    ctx->pc = 0x1d0338u;
    // NOP
    // 0x1d033c: 0x0
    ctx->pc = 0x1d033cu;
    // NOP
    // 0x1d0340: 0x80282d
    ctx->pc = 0x1d0340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0344: 0x3c010032
    ctx->pc = 0x1d0344u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1d0348: 0x3c040025
    ctx->pc = 0x1d0348u;
    SET_GPR_U32(ctx, 4, ((uint32_t)37 << 16));
    // 0x1d034c: 0xac254480
    ctx->pc = 0x1d034cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17536), GPR_U32(ctx, 5));
    // 0x1d0350: 0x248461c0
    ctx->pc = 0x1d0350u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 25024));
    // 0x1d0354: 0x24060001
    ctx->pc = 0x1d0354u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0358: 0x807323c
    ctx->pc = 0x1D0358u;
    ctx->pc = 0x1D035Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CC8F0u;
    sub_001CC8F0_0x1cc8f0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0360u;
    // 0x1d0360: 0x80282d
    ctx->pc = 0x1d0360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0364: 0x3c010032
    ctx->pc = 0x1d0364u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1d0368: 0x3c040025
    ctx->pc = 0x1d0368u;
    SET_GPR_U32(ctx, 4, ((uint32_t)37 << 16));
    // 0x1d036c: 0xac254484
    ctx->pc = 0x1d036cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17540), GPR_U32(ctx, 5));
    // 0x1d0370: 0x248461f0
    ctx->pc = 0x1d0370u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 25072));
    // 0x1d0374: 0x24060001
    ctx->pc = 0x1d0374u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0378: 0x807323c
    ctx->pc = 0x1D0378u;
    ctx->pc = 0x1D037Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CC8F0u;
    sub_001CC8F0_0x1cc8f0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0380u;
    // 0x1d0380: 0x80282d
    ctx->pc = 0x1d0380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0384: 0x3c010032
    ctx->pc = 0x1d0384u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1d0388: 0x3c040025
    ctx->pc = 0x1d0388u;
    SET_GPR_U32(ctx, 4, ((uint32_t)37 << 16));
    // 0x1d038c: 0xac25447c
    ctx->pc = 0x1d038cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17532), GPR_U32(ctx, 5));
    // 0x1d0390: 0x24846220
    ctx->pc = 0x1d0390u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 25120));
    // 0x1d0394: 0x24060001
    ctx->pc = 0x1d0394u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0398: 0x807323c
    ctx->pc = 0x1D0398u;
    ctx->pc = 0x1D039Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CC8F0u;
    sub_001CC8F0_0x1cc8f0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D03A0u;
}
