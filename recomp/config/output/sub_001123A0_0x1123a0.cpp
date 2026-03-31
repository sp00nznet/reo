#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001123A0
// Address: 0x1123a0 - 0x112440
void sub_001123A0_0x1123a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1123a0u;

    // 0x1123a0: 0x27bdffc0
    ctx->pc = 0x1123a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1123a4: 0xffa40020
    ctx->pc = 0x1123a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x1123a8: 0x27a40020
    ctx->pc = 0x1123a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1123ac: 0xffbf0030
    ctx->pc = 0x1123acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1123b0: 0xc044674
    ctx->pc = 0x1123B0u;
    SET_GPR_U32(ctx, 31, 0x1123B8u);
    ctx->pc = 0x1123B4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1119D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001119D0_0x1119d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1123B8u; }
    }
    if (ctx->pc != 0x1123B8u) { return; }
    ctx->pc = 0x1123B8u;
    // 0x1123b8: 0x102d
    ctx->pc = 0x1123b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1123bc: 0x8fa40000
    ctx->pc = 0x1123bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1123c0: 0x38830002
    ctx->pc = 0x1123c0u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 4), 2));
    // 0x1123c4: 0x1060001a
    ctx->pc = 0x1123C4u;
    {
        const bool branch_taken_0x1123c4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1123C8u;
        SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x1123c4) {
            ctx->pc = 0x112430u;
            goto label_112430;
        }
    }
    ctx->pc = 0x1123CCu;
    // 0x1123cc: 0x14a00019
    ctx->pc = 0x1123CCu;
    {
        const bool branch_taken_0x1123cc = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1123D0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x1123cc) {
            ctx->pc = 0x112434u;
            goto label_112434;
        }
    }
    ctx->pc = 0x1123D4u;
    // 0x1123d4: 0x38820004
    ctx->pc = 0x1123d4u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 4));
    // 0x1123d8: 0x10400008
    ctx->pc = 0x1123D8u;
    {
        const bool branch_taken_0x1123d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1123DCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x1123d8) {
            ctx->pc = 0x1123FCu;
            goto label_1123fc;
        }
    }
    ctx->pc = 0x1123E0u;
    // 0x1123e0: 0x8fa50008
    ctx->pc = 0x1123e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1123e4: 0x102d
    ctx->pc = 0x1123e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1123e8: 0x4a00012
    ctx->pc = 0x1123E8u;
    {
        const bool branch_taken_0x1123e8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1123ECu;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 31));
        if (branch_taken_0x1123e8) {
            ctx->pc = 0x112434u;
            goto label_112434;
        }
    }
    ctx->pc = 0x1123F0u;
    // 0x1123f0: 0x14600007
    ctx->pc = 0x1123F0u;
    {
        const bool branch_taken_0x1123f0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1123F4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 60));
        if (branch_taken_0x1123f0) {
            ctx->pc = 0x112410u;
            goto label_112410;
        }
    }
    ctx->pc = 0x1123F8u;
    // 0x1123f8: 0x8fa30004
    ctx->pc = 0x1123f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1123fc:
    // 0x1123fc: 0x3c027fff
    ctx->pc = 0x1123fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x112400: 0x3c048000
    ctx->pc = 0x112400u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x112404: 0x3442ffff
    ctx->pc = 0x112404u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x112408: 0x10000009
    ctx->pc = 0x112408u;
    {
        const bool branch_taken_0x112408 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11240Cu;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
        if (branch_taken_0x112408) {
            ctx->pc = 0x112430u;
            goto label_112430;
        }
    }
    ctx->pc = 0x112410u;
label_112410:
    // 0x112410: 0xdfa20010
    ctx->pc = 0x112410u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112414: 0x651823
    ctx->pc = 0x112414u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x112418: 0x8fa40004
    ctx->pc = 0x112418u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11241c: 0x621016
    ctx->pc = 0x11241cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x112420: 0x2103c
    ctx->pc = 0x112420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x112424: 0x2103f
    ctx->pc = 0x112424u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x112428: 0x21823
    ctx->pc = 0x112428u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x11242c: 0x64100b
    ctx->pc = 0x11242cu;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
label_112430:
    // 0x112430: 0xdfbf0030
    ctx->pc = 0x112430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_112434:
    // 0x112434: 0x3e00008
    ctx->pc = 0x112434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112438u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1123FCu: goto label_1123fc;
            case 0x112410u: goto label_112410;
            case 0x112430u: goto label_112430;
            case 0x112434u: goto label_112434;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11243Cu;
    // 0x11243c: 0x0
    ctx->pc = 0x11243cu;
    // NOP
}
