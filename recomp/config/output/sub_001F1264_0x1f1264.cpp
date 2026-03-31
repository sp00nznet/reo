#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F1264
// Address: 0x1f1264 - 0x1f130c
void sub_001F1264_0x1f1264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f1264u;

    // 0x1f1264: 0x27bdffd0
    ctx->pc = 0x1f1264u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f1268: 0xffbe0020
    ctx->pc = 0x1f1268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x1f126c: 0x3a0f02d
    ctx->pc = 0x1f126cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1270: 0xafc40000
    ctx->pc = 0x1f1270u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1f1274: 0xafc50004
    ctx->pc = 0x1f1274u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x1f1278: 0xafc0000c
    ctx->pc = 0x1f1278u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 0));
    // 0x1f127c: 0x8fc20000
    ctx->pc = 0x1f127cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f1280: 0x8c420000
    ctx->pc = 0x1f1280u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f1284: 0xafc20008
    ctx->pc = 0x1f1284u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x1f1288: 0x8fc30008
    ctx->pc = 0x1f1288u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1f128c: 0x8fc20000
    ctx->pc = 0x1f128cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f1290: 0x14620007
    ctx->pc = 0x1F1290u;
    {
        const bool branch_taken_0x1f1290 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1f1290) {
            ctx->pc = 0x1F12B0u;
            goto label_1f12b0;
        }
    }
    ctx->pc = 0x1F1298u;
    // 0x1f1298: 0x8fc20004
    ctx->pc = 0x1f1298u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f129c: 0xac400000
    ctx->pc = 0x1f129cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1f12a0: 0x2402e4aa
    ctx->pc = 0x1f12a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294960298));
    // 0x1f12a4: 0xafc2000c
    ctx->pc = 0x1f12a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1f12a8: 0x10000012
    ctx->pc = 0x1F12A8u;
    {
        const bool branch_taken_0x1f12a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f12a8) {
            ctx->pc = 0x1F12F4u;
            goto label_1f12f4;
        }
    }
    ctx->pc = 0x1F12B0u;
label_1f12b0:
    // 0x1f12b0: 0x8fc30000
    ctx->pc = 0x1f12b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f12b4: 0x8fc20008
    ctx->pc = 0x1f12b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1f12b8: 0x8c420000
    ctx->pc = 0x1f12b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f12bc: 0xac620000
    ctx->pc = 0x1f12bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1f12c0: 0x8fc20000
    ctx->pc = 0x1f12c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f12c4: 0x8c430000
    ctx->pc = 0x1f12c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f12c8: 0x8fc20000
    ctx->pc = 0x1f12c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f12cc: 0xac620004
    ctx->pc = 0x1f12ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1f12d0: 0x8fc30004
    ctx->pc = 0x1f12d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f12d4: 0x8fc20008
    ctx->pc = 0x1f12d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1f12d8: 0xac620000
    ctx->pc = 0x1f12d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1f12dc: 0x8fc40000
    ctx->pc = 0x1f12dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f12e0: 0x8fc20000
    ctx->pc = 0x1f12e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f12e4: 0x9443000c
    ctx->pc = 0x1f12e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1f12e8: 0x3402ffff
    ctx->pc = 0x1f12e8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1f12ec: 0x621021
    ctx->pc = 0x1f12ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f12f0: 0xa482000c
    ctx->pc = 0x1f12f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 2));
label_1f12f4:
    // 0x1f12f4: 0x8fc2000c
    ctx->pc = 0x1f12f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f12f8: 0x3c0e82d
    ctx->pc = 0x1f12f8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f12fc: 0xdfbe0020
    ctx->pc = 0x1f12fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f1300: 0x27bd0030
    ctx->pc = 0x1f1300u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f1304: 0x3e00008
    ctx->pc = 0x1F1304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F12B0u: goto label_1f12b0;
            case 0x1F12F4u: goto label_1f12f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F130Cu;
}
