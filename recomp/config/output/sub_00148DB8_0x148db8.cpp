#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00148DB8
// Address: 0x148db8 - 0x148e98
void sub_00148DB8_0x148db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x148db8u;

    // 0x148db8: 0x27bdffb0
    ctx->pc = 0x148db8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x148dbc: 0x3c0e0fff
    ctx->pc = 0x148dbcu;
    SET_GPR_U32(ctx, 14, ((uint32_t)4095 << 16));
    // 0x148dc0: 0x8fa20078
    ctx->pc = 0x148dc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x148dc4: 0x35ceffff
    ctx->pc = 0x148dc4u;
    SET_GPR_U32(ctx, 14, OR32(GPR_U32(ctx, 14), 65535));
    // 0x148dc8: 0x8fa30070
    ctx->pc = 0x148dc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x148dcc: 0xffb00000
    ctx->pc = 0x148dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x148dd0: 0x621818
    ctx->pc = 0x148dd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x148dd4: 0x2410ffff
    ctx->pc = 0x148dd4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x148dd8: 0xffb20020
    ctx->pc = 0x148dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x148ddc: 0x24120180
    ctx->pc = 0x148ddcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 384));
    // 0x148de0: 0x8fac0058
    ctx->pc = 0x148de0u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x148de4: 0xffb10010
    ctx->pc = 0x148de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x148de8: 0x203802a
    ctx->pc = 0x148de8u;
    SET_GPR_U32(ctx, 16, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x148dec: 0x246201ff
    ctx->pc = 0x148decu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 511));
    // 0x148df0: 0x70100b
    ctx->pc = 0x148df0u;
    if (GPR_U32(ctx, 16) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x148df4: 0x18e8824
    ctx->pc = 0x148df4u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x148df8: 0x21243
    ctx->pc = 0x148df8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 9));
    // 0x148dfc: 0xffb30030
    ctx->pc = 0x148dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x148e00: 0x521818
    ctx->pc = 0x148e00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x148e04: 0x8fad0060
    ctx->pc = 0x148e04u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x148e08: 0x3c132000
    ctx->pc = 0x148e08u;
    SET_GPR_U32(ctx, 19, ((uint32_t)8192 << 16));
    // 0x148e0c: 0xffb40040
    ctx->pc = 0x148e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x148e10: 0x8fb40068
    ctx->pc = 0x148e10u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x148e14: 0x2338825
    ctx->pc = 0x148e14u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x148e18: 0x1ae7824
    ctx->pc = 0x148e18u;
    SET_GPR_U32(ctx, 15, AND32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x148e1c: 0xac910000
    ctx->pc = 0x148e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x148e20: 0x6c6021
    ctx->pc = 0x148e20u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x148e24: 0x1f37825
    ctx->pc = 0x148e24u;
    SET_GPR_U32(ctx, 15, OR32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
    // 0x148e28: 0x521818
    ctx->pc = 0x148e28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x148e2c: 0x522018
    ctx->pc = 0x148e2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x148e30: 0xacaf0000
    ctx->pc = 0x148e30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
    // 0x148e34: 0x18e6024
    ctx->pc = 0x148e34u;
    SET_GPR_U32(ctx, 12, AND32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x148e38: 0x1936025
    ctx->pc = 0x148e38u;
    SET_GPR_U32(ctx, 12, OR32(GPR_U32(ctx, 12), GPR_U32(ctx, 19)));
    // 0x148e3c: 0xdfb20020
    ctx->pc = 0x148e3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148e40: 0xdfb00000
    ctx->pc = 0x148e40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148e44: 0x6d6821
    ctx->pc = 0x148e44u;
    SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x148e48: 0x941021
    ctx->pc = 0x148e48u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x148e4c: 0x28e1824
    ctx->pc = 0x148e4cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 14)));
    // 0x148e50: 0x1ae6824
    ctx->pc = 0x148e50u;
    SET_GPR_U32(ctx, 13, AND32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x148e54: 0x731825
    ctx->pc = 0x148e54u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x148e58: 0x4e1024
    ctx->pc = 0x148e58u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x148e5c: 0xacc30000
    ctx->pc = 0x148e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x148e60: 0x1b36825
    ctx->pc = 0x148e60u;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 19)));
    // 0x148e64: 0xacf10000
    ctx->pc = 0x148e64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 17));
    // 0x148e68: 0x531025
    ctx->pc = 0x148e68u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x148e6c: 0xad0f0000
    ctx->pc = 0x148e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 15));
    // 0x148e70: 0xad230000
    ctx->pc = 0x148e70u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x148e74: 0xad4c0000
    ctx->pc = 0x148e74u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 12));
    // 0x148e78: 0x8fa30050
    ctx->pc = 0x148e78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x148e7c: 0xad6d0000
    ctx->pc = 0x148e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 13));
    // 0x148e80: 0xdfb40040
    ctx->pc = 0x148e80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x148e84: 0xdfb30030
    ctx->pc = 0x148e84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x148e88: 0xdfb10010
    ctx->pc = 0x148e88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148e8c: 0xac620000
    ctx->pc = 0x148e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x148e90: 0x3e00008
    ctx->pc = 0x148E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148E94u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x148E98u;
}
