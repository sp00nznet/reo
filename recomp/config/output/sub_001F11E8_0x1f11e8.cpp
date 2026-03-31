#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F11E8
// Address: 0x1f11e8 - 0x1f1264
void sub_001F11E8_0x1f11e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f11e8u;

    // 0x1f11e8: 0x27bdffe0
    ctx->pc = 0x1f11e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f11ec: 0xffbe0010
    ctx->pc = 0x1f11ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x1f11f0: 0x3a0f02d
    ctx->pc = 0x1f11f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f11f4: 0xafc40000
    ctx->pc = 0x1f11f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1f11f8: 0xafc50004
    ctx->pc = 0x1f11f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x1f11fc: 0xafc00008
    ctx->pc = 0x1f11fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
    // 0x1f1200: 0x8fc30004
    ctx->pc = 0x1f1200u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f1204: 0x8fc20000
    ctx->pc = 0x1f1204u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f1208: 0xac620000
    ctx->pc = 0x1f1208u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1f120c: 0x8fc30004
    ctx->pc = 0x1f120cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f1210: 0x8fc20000
    ctx->pc = 0x1f1210u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f1214: 0x8c420004
    ctx->pc = 0x1f1214u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f1218: 0xac620004
    ctx->pc = 0x1f1218u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1f121c: 0x8fc20004
    ctx->pc = 0x1f121cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f1220: 0x8c430004
    ctx->pc = 0x1f1220u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f1224: 0x8fc20004
    ctx->pc = 0x1f1224u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f1228: 0xac620000
    ctx->pc = 0x1f1228u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1f122c: 0x8fc30000
    ctx->pc = 0x1f122cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f1230: 0x8fc20004
    ctx->pc = 0x1f1230u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f1234: 0xac620004
    ctx->pc = 0x1f1234u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1f1238: 0x8fc30000
    ctx->pc = 0x1f1238u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f123c: 0x8fc20000
    ctx->pc = 0x1f123cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f1240: 0x9442000c
    ctx->pc = 0x1f1240u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1f1244: 0x24420001
    ctx->pc = 0x1f1244u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f1248: 0xa462000c
    ctx->pc = 0x1f1248u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f124c: 0x8fc20008
    ctx->pc = 0x1f124cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1f1250: 0x3c0e82d
    ctx->pc = 0x1f1250u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1254: 0xdfbe0010
    ctx->pc = 0x1f1254u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f1258: 0x27bd0020
    ctx->pc = 0x1f1258u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f125c: 0x3e00008
    ctx->pc = 0x1F125Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F1264u;
}
