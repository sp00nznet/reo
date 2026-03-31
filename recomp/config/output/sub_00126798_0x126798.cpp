#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00126798
// Address: 0x126798 - 0x126898
void sub_00126798_0x126798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x126798u;

    // 0x126798: 0x28a50010
    ctx->pc = 0x126798u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 5), 16));
    // 0x12679c: 0x80602d
    ctx->pc = 0x12679cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1267a0: 0x8fad0008
    ctx->pc = 0x1267a0u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1267a4: 0x14a0003a
    ctx->pc = 0x1267A4u;
    {
        const bool branch_taken_0x1267a4 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1267A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1267a4) {
            ctx->pc = 0x126890u;
            goto label_126890;
        }
    }
    ctx->pc = 0x1267ACu;
    // 0x1267ac: 0x91830000
    ctx->pc = 0x1267acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1267b0: 0x34058000
    ctx->pc = 0x1267b0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32768));
    // 0x1267b4: 0x91840001
    ctx->pc = 0x1267b4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x1267b8: 0x31a00
    ctx->pc = 0x1267b8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x1267bc: 0x832025
    ctx->pc = 0x1267bcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1267c0: 0x14850033
    ctx->pc = 0x1267C0u;
    {
        const bool branch_taken_0x1267c0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 5));
        ctx->pc = 0x1267C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x1267c0) {
            ctx->pc = 0x126890u;
            goto label_126890;
        }
    }
    ctx->pc = 0x1267C8u;
    // 0x1267c8: 0x91830002
    ctx->pc = 0x1267c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x1267cc: 0x91820003
    ctx->pc = 0x1267ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 3)));
    // 0x1267d0: 0x31a00
    ctx->pc = 0x1267d0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x1267d4: 0x431025
    ctx->pc = 0x1267d4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1267d8: 0x24420004
    ctx->pc = 0x1267d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x1267dc: 0xa4c20000
    ctx->pc = 0x1267dcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1267e0: 0x91830004
    ctx->pc = 0x1267e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x1267e4: 0xa0e30000
    ctx->pc = 0x1267e4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1267e8: 0x91820005
    ctx->pc = 0x1267e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 5)));
    // 0x1267ec: 0xa1220000
    ctx->pc = 0x1267ecu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1267f0: 0x91830006
    ctx->pc = 0x1267f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 6)));
    // 0x1267f4: 0xa1030000
    ctx->pc = 0x1267f4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1267f8: 0x91840007
    ctx->pc = 0x1267f8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 7)));
    // 0x1267fc: 0xa1440000
    ctx->pc = 0x1267fcu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x126800: 0x91820008
    ctx->pc = 0x126800u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x126804: 0x9183000a
    ctx->pc = 0x126804u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 10)));
    // 0x126808: 0x91840009
    ctx->pc = 0x126808u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 9)));
    // 0x12680c: 0x21600
    ctx->pc = 0x12680cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
    // 0x126810: 0x9185000b
    ctx->pc = 0x126810u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 11)));
    // 0x126814: 0x31a00
    ctx->pc = 0x126814u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x126818: 0x42400
    ctx->pc = 0x126818u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x12681c: 0x641825
    ctx->pc = 0x12681cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x126820: 0x451025
    ctx->pc = 0x126820u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x126824: 0x431025
    ctx->pc = 0x126824u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x126828: 0xad620000
    ctx->pc = 0x126828u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x12682c: 0x9183000d
    ctx->pc = 0x12682cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 13)));
    // 0x126830: 0x9182000c
    ctx->pc = 0x126830u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x126834: 0x9184000e
    ctx->pc = 0x126834u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 14)));
    // 0x126838: 0x31c00
    ctx->pc = 0x126838u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x12683c: 0x9185000f
    ctx->pc = 0x12683cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 15)));
    // 0x126840: 0x21600
    ctx->pc = 0x126840u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
    // 0x126844: 0x42200
    ctx->pc = 0x126844u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
    // 0x126848: 0x832025
    ctx->pc = 0x126848u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x12684c: 0x8fa30000
    ctx->pc = 0x12684cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126850: 0x451025
    ctx->pc = 0x126850u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x126854: 0x441025
    ctx->pc = 0x126854u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x126858: 0xac620000
    ctx->pc = 0x126858u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x12685c: 0x81080000
    ctx->pc = 0x12685cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x126860: 0x55000003
    ctx->pc = 0x126860u;
    {
        const bool branch_taken_0x126860 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        if (branch_taken_0x126860) {
            ctx->pc = 0x126864u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->pc = 0x126870u;
            goto label_126870;
        }
    }
    ctx->pc = 0x126868u;
    // 0x126868: 0x10000008
    ctx->pc = 0x126868u;
    {
        const bool branch_taken_0x126868 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12686Cu;
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x126868) {
            ctx->pc = 0x12688Cu;
            goto label_12688c;
        }
    }
    ctx->pc = 0x126870u;
label_126870:
    // 0x126870: 0x51000001
    ctx->pc = 0x126870u;
    {
        const bool branch_taken_0x126870 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        if (branch_taken_0x126870) {
            ctx->pc = 0x126874u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x126878u;
            goto label_126878;
        }
    }
    ctx->pc = 0x126878u;
label_126878:
    // 0x126878: 0x210c0
    ctx->pc = 0x126878u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x12687c: 0x2442fff0
    ctx->pc = 0x12687cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x126880: 0x48001a
    ctx->pc = 0x126880u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x126884: 0x1012
    ctx->pc = 0x126884u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x126888: 0xada20000
    ctx->pc = 0x126888u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
label_12688c:
    // 0x12688c: 0x102d
    ctx->pc = 0x12688cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126890:
    // 0x126890: 0x3e00008
    ctx->pc = 0x126890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x126870u: goto label_126870;
            case 0x126878u: goto label_126878;
            case 0x12688Cu: goto label_12688c;
            case 0x126890u: goto label_126890;
            default: break;
        }
        return;
    }
    ctx->pc = 0x126898u;
}
