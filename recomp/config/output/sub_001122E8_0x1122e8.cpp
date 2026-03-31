#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001122E8
// Address: 0x1122e8 - 0x1123a0
void sub_001122E8_0x1122e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1122e8u;

    // 0x1122e8: 0x27bdffd0
    ctx->pc = 0x1122e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1122ec: 0x24020003
    ctx->pc = 0x1122ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1122f0: 0x41fc2
    ctx->pc = 0x1122f0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 4), 31));
    // 0x1122f4: 0xffbf0020
    ctx->pc = 0x1122f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1122f8: 0xafa20000
    ctx->pc = 0x1122f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1122fc: 0x14800004
    ctx->pc = 0x1122FCu;
    {
        const bool branch_taken_0x1122fc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x112300u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1122fc) {
            ctx->pc = 0x112310u;
            goto label_112310;
        }
    }
    ctx->pc = 0x112304u;
    // 0x112304: 0x24020002
    ctx->pc = 0x112304u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x112308: 0x10000020
    ctx->pc = 0x112308u;
    {
        const bool branch_taken_0x112308 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11230Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x112308) {
            ctx->pc = 0x11238Cu;
            goto label_11238c;
        }
    }
    ctx->pc = 0x112310u;
label_112310:
    // 0x112310: 0x2402003c
    ctx->pc = 0x112310u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x112314: 0x1060000a
    ctx->pc = 0x112314u;
    {
        const bool branch_taken_0x112314 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x112318u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x112314) {
            ctx->pc = 0x112340u;
            goto label_112340;
        }
    }
    ctx->pc = 0x11231Cu;
    // 0x11231c: 0x3c038000
    ctx->pc = 0x11231cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x112320: 0x3402c1e0
    ctx->pc = 0x112320u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 49632));
    // 0x112324: 0x2143c
    ctx->pc = 0x112324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x112328: 0x1083001b
    ctx->pc = 0x112328u;
    {
        const bool branch_taken_0x112328 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x11232Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x112328) {
            ctx->pc = 0x112398u;
            goto label_112398;
        }
    }
    ctx->pc = 0x112330u;
    // 0x112330: 0x41023
    ctx->pc = 0x112330u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x112334: 0x10000003
    ctx->pc = 0x112334u;
    {
        const bool branch_taken_0x112334 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x112338u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        if (branch_taken_0x112334) {
            ctx->pc = 0x112344u;
            goto label_112344;
        }
    }
    ctx->pc = 0x11233Cu;
    // 0x11233c: 0x0
    ctx->pc = 0x11233cu;
    // NOP
label_112340:
    // 0x112340: 0xffa40010
    ctx->pc = 0x112340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
label_112344:
    // 0x112344: 0xdfa40010
    ctx->pc = 0x112344u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112348: 0x2402ffff
    ctx->pc = 0x112348u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11234c: 0x2113a
    ctx->pc = 0x11234cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x112350: 0x44102b
    ctx->pc = 0x112350u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x112354: 0x1440000d
    ctx->pc = 0x112354u;
    {
        const bool branch_taken_0x112354 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x112358u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x112354) {
            ctx->pc = 0x11238Cu;
            goto label_11238c;
        }
    }
    ctx->pc = 0x11235Cu;
    // 0x11235c: 0x2406ffff
    ctx->pc = 0x11235cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x112360: 0x6313a
    ctx->pc = 0x112360u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
    // 0x112364: 0x0
    ctx->pc = 0x112364u;
    // NOP
label_112368:
    // 0x112368: 0x41878
    ctx->pc = 0x112368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 1);
    // 0x11236c: 0x24a5ffff
    ctx->pc = 0x11236cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x112370: 0xc3102b
    ctx->pc = 0x112370u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x112374: 0x0
    ctx->pc = 0x112374u;
    // NOP
    // 0x112378: 0x0
    ctx->pc = 0x112378u;
    // NOP
    // 0x11237c: 0x1040fffa
    ctx->pc = 0x11237Cu;
    {
        const bool branch_taken_0x11237c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x112380u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11237c) {
            ctx->pc = 0x112368u;
            goto label_112368;
        }
    }
    ctx->pc = 0x112384u;
    // 0x112384: 0xafa50008
    ctx->pc = 0x112384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x112388: 0xffa30010
    ctx->pc = 0x112388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_11238c:
    // 0x11238c: 0xc04463e
    ctx->pc = 0x11238Cu;
    SET_GPR_U32(ctx, 31, 0x112394u);
    ctx->pc = 0x112390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1118F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001118F8_0x1118f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112394u; }
    }
    if (ctx->pc != 0x112394u) { return; }
    ctx->pc = 0x112394u;
    // 0x112394: 0xdfbf0020
    ctx->pc = 0x112394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_112398:
    // 0x112398: 0x3e00008
    ctx->pc = 0x112398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11239Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x112310u: goto label_112310;
            case 0x112340u: goto label_112340;
            case 0x112344u: goto label_112344;
            case 0x112368u: goto label_112368;
            case 0x11238Cu: goto label_11238c;
            case 0x112398u: goto label_112398;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1123A0u;
}
