#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00115E30
// Address: 0x115e30 - 0x115ef0
void sub_00115E30_0x115e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x115e30u;

    // 0x115e30: 0x27bdffd0
    ctx->pc = 0x115e30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x115e34: 0x202d
    ctx->pc = 0x115e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115e38: 0xffb10010
    ctx->pc = 0x115e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x115e3c: 0xffb00000
    ctx->pc = 0x115e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115e40: 0xffbf0020
    ctx->pc = 0x115e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x115e44: 0xc045228
    ctx->pc = 0x115E44u;
    SET_GPR_U32(ctx, 31, 0x115E4Cu);
    ctx->pc = 0x115E48u;
    SET_GPR_U32(ctx, 16, ((uint32_t)38 << 16));
    ctx->pc = 0x1148A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001148A0_0x1148a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115E4Cu; }
    }
    if (ctx->pc != 0x115E4Cu) { return; }
    ctx->pc = 0x115E4Cu;
    // 0x115e4c: 0x2611ab90
    ctx->pc = 0x115e4cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 4294945680));
    // 0x115e50: 0x3c060011
    ctx->pc = 0x115e50u;
    SET_GPR_U32(ctx, 6, ((uint32_t)17 << 16));
    // 0x115e54: 0x24040210
    ctx->pc = 0x115e54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 528));
    // 0x115e58: 0x24c65a50
    ctx->pc = 0x115e58u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 23120));
    // 0x115e5c: 0xc0455dc
    ctx->pc = 0x115E5Cu;
    SET_GPR_U32(ctx, 31, 0x115E64u);
    ctx->pc = 0x115E60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x115770u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00115770_0x115770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115E64u; }
    }
    if (ctx->pc != 0x115E64u) { return; }
    ctx->pc = 0x115E64u;
    // 0x115e64: 0xae02ab90
    ctx->pc = 0x115e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294945680), GPR_U32(ctx, 2));
    // 0x115e68: 0x8e02ab90
    ctx->pc = 0x115e68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294945680)));
    // 0x115e6c: 0x4410003
    ctx->pc = 0x115E6Cu;
    {
        const bool branch_taken_0x115e6c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x115E70u;
        SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
        if (branch_taken_0x115e6c) {
            ctx->pc = 0x115E7Cu;
            goto label_115e7c;
        }
    }
    ctx->pc = 0x115E74u;
    // 0x115e74: 0x10000018
    ctx->pc = 0x115E74u;
    {
        const bool branch_taken_0x115e74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x115E78u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x115e74) {
            ctx->pc = 0x115ED8u;
            goto label_115ed8;
        }
    }
    ctx->pc = 0x115E7Cu;
label_115e7c:
    // 0x115e7c: 0x3c020026
    ctx->pc = 0x115e7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x115e80: 0xae20000c
    ctx->pc = 0x115e80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x115e84: 0x3c032000
    ctx->pc = 0x115e84u;
    SET_GPR_U32(ctx, 3, ((uint32_t)8192 << 16));
    // 0x115e88: 0x2484ad00
    ctx->pc = 0x115e88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946048));
    // 0x115e8c: 0x2442abc0
    ctx->pc = 0x115e8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294945728));
    // 0x115e90: 0x431025
    ctx->pc = 0x115e90u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x115e94: 0xae200004
    ctx->pc = 0x115e94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x115e98: 0x832025
    ctx->pc = 0x115e98u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x115e9c: 0xae200008
    ctx->pc = 0x115e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x115ea0: 0xae240014
    ctx->pc = 0x115ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
    // 0x115ea4: 0x24060210
    ctx->pc = 0x115ea4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 528));
    // 0x115ea8: 0xae220010
    ctx->pc = 0x115ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x115eac: 0x24050045
    ctx->pc = 0x115eacu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 69));
    // 0x115eb0: 0x24030048
    ctx->pc = 0x115eb0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 72));
    // 0x115eb4: 0x24040100
    ctx->pc = 0x115eb4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 256));
    // 0x115eb8: 0xa4460004
    ctx->pc = 0x115eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x115ebc: 0xa0450006
    ctx->pc = 0x115ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 6), (uint8_t)GPR_U32(ctx, 5));
    // 0x115ec0: 0xa0430007
    ctx->pc = 0x115ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x115ec4: 0xac400008
    ctx->pc = 0x115ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x115ec8: 0xc04566a
    ctx->pc = 0x115EC8u;
    SET_GPR_U32(ctx, 31, 0x115ED0u);
    ctx->pc = 0x115ECCu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1159A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001159A8_0x1159a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115ED0u; }
    }
    if (ctx->pc != 0x115ED0u) { return; }
    ctx->pc = 0x115ED0u;
    // 0x115ed0: 0xae220018
    ctx->pc = 0x115ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x115ed4: 0x24020001
    ctx->pc = 0x115ed4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_115ed8:
    // 0x115ed8: 0xdfbf0020
    ctx->pc = 0x115ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115edc: 0xdfb10010
    ctx->pc = 0x115edcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115ee0: 0xdfb00000
    ctx->pc = 0x115ee0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115ee4: 0x3e00008
    ctx->pc = 0x115EE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115EE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x115E7Cu: goto label_115e7c;
            case 0x115ED8u: goto label_115ed8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x115EECu;
    // 0x115eec: 0x0
    ctx->pc = 0x115eecu;
    // NOP
}
