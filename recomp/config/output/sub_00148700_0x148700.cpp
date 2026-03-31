#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00148700
// Address: 0x148700 - 0x148760
void sub_00148700_0x148700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x148700u;

    // 0x148700: 0x27bdffd0
    ctx->pc = 0x148700u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x148704: 0xffb00000
    ctx->pc = 0x148704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x148708: 0x80802d
    ctx->pc = 0x148708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14870c: 0xffb10010
    ctx->pc = 0x14870cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x148710: 0xffbf0020
    ctx->pc = 0x148710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x148714: 0xc050fe2
    ctx->pc = 0x148714u;
    SET_GPR_U32(ctx, 31, 0x14871Cu);
    ctx->pc = 0x148718u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x143F88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00143F88_0x143f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14871Cu; }
    }
    if (ctx->pc != 0x14871Cu) { return; }
    ctx->pc = 0x14871Cu;
    // 0x14871c: 0x3c117000
    ctx->pc = 0x14871cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)28672 << 16));
    // 0x148720: 0x3c027000
    ctx->pc = 0x148720u;
    SET_GPR_U32(ctx, 2, ((uint32_t)28672 << 16));
    // 0x148724: 0x3c037000
    ctx->pc = 0x148724u;
    SET_GPR_U32(ctx, 3, ((uint32_t)28672 << 16));
    // 0x148728: 0x3c047000
    ctx->pc = 0x148728u;
    SET_GPR_U32(ctx, 4, ((uint32_t)28672 << 16));
    // 0x14872c: 0x34421800
    ctx->pc = 0x14872cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 6144));
    // 0x148730: 0x34631b00
    ctx->pc = 0x148730u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 6912));
    // 0x148734: 0x34843300
    ctx->pc = 0x148734u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 13056));
    // 0x148738: 0xae1105a8
    ctx->pc = 0x148738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1448), GPR_U32(ctx, 17));
    // 0x14873c: 0xae0205ac
    ctx->pc = 0x14873cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1452), GPR_U32(ctx, 2));
    // 0x148740: 0xae0306e8
    ctx->pc = 0x148740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1768), GPR_U32(ctx, 3));
    // 0x148744: 0xae0406ec
    ctx->pc = 0x148744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1772), GPR_U32(ctx, 4));
    // 0x148748: 0xae000828
    ctx->pc = 0x148748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
    // 0x14874c: 0xdfbf0020
    ctx->pc = 0x14874cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148750: 0xdfb10010
    ctx->pc = 0x148750u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148754: 0xdfb00000
    ctx->pc = 0x148754u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148758: 0x3e00008
    ctx->pc = 0x148758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14875Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x148760u;
}
