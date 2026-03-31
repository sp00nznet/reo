#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D2C00
// Address: 0x1d2c00 - 0x1d2cb0
void sub_001D2C00_0x1d2c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d2c00u;

    // 0x1d2c00: 0x27bdffb0
    ctx->pc = 0x1d2c00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d2c04: 0x3c010032
    ctx->pc = 0x1d2c04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1d2c08: 0xffbf0030
    ctx->pc = 0x1d2c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d2c0c: 0xa0302d
    ctx->pc = 0x1d2c0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2c10: 0x7fb20020
    ctx->pc = 0x1d2c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d2c14: 0x3c020020
    ctx->pc = 0x1d2c14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32 << 16));
    // 0x1d2c18: 0x7fb10010
    ctx->pc = 0x1d2c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d2c1c: 0x382d
    ctx->pc = 0x1d2c1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2c20: 0x7fb00000
    ctx->pc = 0x1d2c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d2c24: 0x8c23440c
    ctx->pc = 0x1d2c24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 17420)));
    // 0x1d2c28: 0x80802d
    ctx->pc = 0x1d2c28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2c2c: 0x8c910000
    ctx->pc = 0x1d2c2cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d2c30: 0x622821
    ctx->pc = 0x1d2c30u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d2c34: 0xc074d50
    ctx->pc = 0x1D2C34u;
    SET_GPR_U32(ctx, 31, 0x1D2C3Cu);
    ctx->pc = 0x1D2C38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1D3540u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3540_0x1d3540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2C3Cu; }
    }
    if (ctx->pc != 0x1D2C3Cu) { return; }
    ctx->pc = 0x1D2C3Cu;
    // 0x1d2c3c: 0xc064920
    ctx->pc = 0x1D2C3Cu;
    SET_GPR_U32(ctx, 31, 0x1D2C44u);
    ctx->pc = 0x1D2C40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x192480u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00192480_0x192480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2C44u; }
    }
    if (ctx->pc != 0x1D2C44u) { return; }
    ctx->pc = 0x1D2C44u;
    // 0x1d2c44: 0xae02080c
    ctx->pc = 0x1d2c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2060), GPR_U32(ctx, 2));
    // 0x1d2c48: 0xc06c430
    ctx->pc = 0x1D2C48u;
    SET_GPR_U32(ctx, 31, 0x1D2C50u);
    ctx->pc = 0x1D2C4Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2060)));
    ctx->pc = 0x1B10C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B10C0_0x1b10c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2C50u; }
    }
    if (ctx->pc != 0x1D2C50u) { return; }
    ctx->pc = 0x1D2C50u;
    // 0x1d2c50: 0xc064c00
    ctx->pc = 0x1D2C50u;
    SET_GPR_U32(ctx, 31, 0x1D2C58u);
    ctx->pc = 0x1D2C54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2060)));
    ctx->pc = 0x193000u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00193000_0x193000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2C58u; }
    }
    if (ctx->pc != 0x1D2C58u) { return; }
    ctx->pc = 0x1D2C58u;
    // 0x1d2c58: 0xa6020816
    ctx->pc = 0x1d2c58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2070), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d2c5c: 0x10000006
    ctx->pc = 0x1D2C5Cu;
    {
        const bool branch_taken_0x1d2c5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D2C60u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d2c5c) {
            ctx->pc = 0x1D2C78u;
            goto label_1d2c78;
        }
    }
    ctx->pc = 0x1D2C64u;
label_1d2c64:
    // 0x1d2c64: 0xc06c498
    ctx->pc = 0x1D2C64u;
    SET_GPR_U32(ctx, 31, 0x1D2C6Cu);
    ctx->pc = 0x1B1260u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1260_0x1b1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2C6Cu; }
    }
    if (ctx->pc != 0x1D2C6Cu) { return; }
    ctx->pc = 0x1D2C6Cu;
    // 0x1d2c6c: 0xae220000
    ctx->pc = 0x1d2c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1d2c70: 0x26520001
    ctx->pc = 0x1d2c70u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d2c74: 0x26310004
    ctx->pc = 0x1d2c74u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
label_1d2c78:
    // 0x1d2c78: 0x96020816
    ctx->pc = 0x1d2c78u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2070)));
    // 0x1d2c7c: 0x242102a
    ctx->pc = 0x1d2c7cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x1d2c80: 0x1440fff8
    ctx->pc = 0x1D2C80u;
    {
        const bool branch_taken_0x1d2c80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d2c80) {
            ctx->pc = 0x1D2C64u;
            goto label_1d2c64;
        }
    }
    ctx->pc = 0x1D2C88u;
    // 0x1d2c88: 0x8e05080c
    ctx->pc = 0x1d2c88u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 2060)));
    // 0x1d2c8c: 0xc064d60
    ctx->pc = 0x1D2C8Cu;
    SET_GPR_U32(ctx, 31, 0x1D2C94u);
    ctx->pc = 0x1D2C90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x193580u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00193580_0x193580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2C94u; }
    }
    if (ctx->pc != 0x1D2C94u) { return; }
    ctx->pc = 0x1D2C94u;
    // 0x1d2c94: 0xdfbf0030
    ctx->pc = 0x1d2c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d2c98: 0x7bb20020
    ctx->pc = 0x1d2c98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d2c9c: 0x7bb10010
    ctx->pc = 0x1d2c9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2ca0: 0x7bb00000
    ctx->pc = 0x1d2ca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2ca4: 0x3e00008
    ctx->pc = 0x1D2CA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2CA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D2C64u: goto label_1d2c64;
            case 0x1D2C78u: goto label_1d2c78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D2CACu;
    // 0x1d2cac: 0x0
    ctx->pc = 0x1d2cacu;
    // NOP
}
