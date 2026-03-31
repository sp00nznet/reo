#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001DAEAC
// Address: 0x1daeac - 0x1daf68
void sub_001DAEAC_0x1daeac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1daeacu;

    // 0x1daeac: 0x27bdffe0
    ctx->pc = 0x1daeacu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1daeb0: 0xffbe0010
    ctx->pc = 0x1daeb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x1daeb4: 0xffbf0018
    ctx->pc = 0x1daeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1daeb8: 0x3a0f02d
    ctx->pc = 0x1daeb8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daebc: 0xafc40000
    ctx->pc = 0x1daebcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1daec0: 0xafc50004
    ctx->pc = 0x1daec0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x1daec4: 0xc0102d
    ctx->pc = 0x1daec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daec8: 0xa7c20008
    ctx->pc = 0x1daec8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x1daecc: 0x8fc20004
    ctx->pc = 0x1daeccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1daed0: 0x10400011
    ctx->pc = 0x1DAED0u;
    {
        const bool branch_taken_0x1daed0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1daed0) {
            ctx->pc = 0x1DAF18u;
            goto label_1daf18;
        }
    }
    ctx->pc = 0x1DAED8u;
    // 0x1daed8: 0x8fc20000
    ctx->pc = 0x1daed8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1daedc: 0x2442004c
    ctx->pc = 0x1daedcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 76));
    // 0x1daee0: 0x27c30004
    ctx->pc = 0x1daee0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 4));
    // 0x1daee4: 0x40202d
    ctx->pc = 0x1daee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daee8: 0x60282d
    ctx->pc = 0x1daee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daeec: 0x24060004
    ctx->pc = 0x1daeecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1daef0: 0xc041eac
    ctx->pc = 0x1DAEF0u;
    SET_GPR_U32(ctx, 31, 0x1DAEF8u);
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAEF8u; }
    }
    if (ctx->pc != 0x1DAEF8u) { return; }
    ctx->pc = 0x1DAEF8u;
    // 0x1daef8: 0x8fc20000
    ctx->pc = 0x1daef8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1daefc: 0xac40000c
    ctx->pc = 0x1daefcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1daf00: 0x8fc20000
    ctx->pc = 0x1daf00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1daf04: 0x8c420058
    ctx->pc = 0x1daf04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1daf08: 0xac400000
    ctx->pc = 0x1daf08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1daf0c: 0x8fc20000
    ctx->pc = 0x1daf0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1daf10: 0x8c42005c
    ctx->pc = 0x1daf10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1daf14: 0xac400000
    ctx->pc = 0x1daf14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1daf18:
    // 0x1daf18: 0x97c20008
    ctx->pc = 0x1daf18u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1daf1c: 0x10400008
    ctx->pc = 0x1DAF1Cu;
    {
        const bool branch_taken_0x1daf1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1daf1c) {
            ctx->pc = 0x1DAF40u;
            goto label_1daf40;
        }
    }
    ctx->pc = 0x1DAF24u;
    // 0x1daf24: 0x97c20008
    ctx->pc = 0x1daf24u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1daf28: 0x40202d
    ctx->pc = 0x1daf28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daf2c: 0xc07a05f
    ctx->pc = 0x1DAF2Cu;
    SET_GPR_U32(ctx, 31, 0x1DAF34u);
    ctx->pc = 0x1E817Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E817C_0x1e817c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF34u; }
    }
    if (ctx->pc != 0x1DAF34u) { return; }
    ctx->pc = 0x1DAF34u;
    // 0x1daf34: 0x40182d
    ctx->pc = 0x1daf34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daf38: 0x8fc20000
    ctx->pc = 0x1daf38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1daf3c: 0xa443004a
    ctx->pc = 0x1daf3cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 74), (uint16_t)GPR_U32(ctx, 3));
label_1daf40:
    // 0x1daf40: 0x8fc30000
    ctx->pc = 0x1daf40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1daf44: 0x24020002
    ctx->pc = 0x1daf44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1daf48: 0xa4620048
    ctx->pc = 0x1daf48u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 72), (uint16_t)GPR_U32(ctx, 2));
    // 0x1daf4c: 0x3c0e82d
    ctx->pc = 0x1daf4cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daf50: 0xdfbe0010
    ctx->pc = 0x1daf50u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1daf54: 0xdfbf0018
    ctx->pc = 0x1daf54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1daf58: 0x27bd0020
    ctx->pc = 0x1daf58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1daf5c: 0x3e00008
    ctx->pc = 0x1DAF5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DAF18u: goto label_1daf18;
            case 0x1DAF40u: goto label_1daf40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DAF64u;
    // 0x1daf64: 0x0
    ctx->pc = 0x1daf64u;
    // NOP
}
