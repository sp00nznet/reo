#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A3EE0
// Address: 0x1a3ee0 - 0x1a3f70
void sub_001A3EE0_0x1a3ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a3ee0u;

    // 0x1a3ee0: 0x27bdfff0
    ctx->pc = 0x1a3ee0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a3ee4: 0x80c82d
    ctx->pc = 0x1a3ee4u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3ee8: 0xffbf0000
    ctx->pc = 0x1a3ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a3eec: 0x282d
    ctx->pc = 0x1a3eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3ef0: 0xc068e20
    ctx->pc = 0x1A3EF0u;
    SET_GPR_U32(ctx, 31, 0x1A3EF8u);
    ctx->pc = 0x1A3EF4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A3880u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3880_0x1a3880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3EF8u; }
    }
    if (ctx->pc != 0x1A3EF8u) { return; }
    ctx->pc = 0x1A3EF8u;
    // 0x1a3ef8: 0x40602d
    ctx->pc = 0x1a3ef8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3efc: 0xc068da8
    ctx->pc = 0x1A3EFCu;
    SET_GPR_U32(ctx, 31, 0x1A3F04u);
    ctx->pc = 0x1A3F00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A36A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A36A0_0x1a36a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3F04u; }
    }
    if (ctx->pc != 0x1A3F04u) { return; }
    ctx->pc = 0x1A3F04u;
    // 0x1a3f04: 0x40702d
    ctx->pc = 0x1a3f04u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3f08: 0x10000012
    ctx->pc = 0x1A3F08u;
    {
        const bool branch_taken_0x1a3f08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3F0Cu;
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3f08) {
            ctx->pc = 0x1A3F54u;
            goto label_1a3f54;
        }
    }
    ctx->pc = 0x1A3F10u;
label_1a3f10:
    // 0x1a3f10: 0xc068dd8
    ctx->pc = 0x1A3F10u;
    SET_GPR_U32(ctx, 31, 0x1A3F18u);
    ctx->pc = 0x1A3F14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A3760u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3760_0x1a3760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3F18u; }
    }
    if (ctx->pc != 0x1A3F18u) { return; }
    ctx->pc = 0x1A3F18u;
    // 0x1a3f18: 0x40682d
    ctx->pc = 0x1a3f18u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3f1c: 0x10000009
    ctx->pc = 0x1A3F1Cu;
    {
        const bool branch_taken_0x1a3f1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3F20u;
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3f1c) {
            ctx->pc = 0x1A3F44u;
            goto label_1a3f44;
        }
    }
    ctx->pc = 0x1A3F24u;
label_1a3f24:
    // 0x1a3f24: 0x300282d
    ctx->pc = 0x1a3f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3f28: 0xc068e20
    ctx->pc = 0x1A3F28u;
    SET_GPR_U32(ctx, 31, 0x1A3F30u);
    ctx->pc = 0x1A3F2Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A3880u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3880_0x1a3880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3F30u; }
    }
    if (ctx->pc != 0x1A3F30u) { return; }
    ctx->pc = 0x1A3F30u;
    // 0x1a3f30: 0x11820003
    ctx->pc = 0x1A3F30u;
    {
        const bool branch_taken_0x1a3f30 = (GPR_U32(ctx, 12) == GPR_U32(ctx, 2));
        if (branch_taken_0x1a3f30) {
            ctx->pc = 0x1A3F40u;
            goto label_1a3f40;
        }
    }
    ctx->pc = 0x1A3F38u;
    // 0x1a3f38: 0x1000000a
    ctx->pc = 0x1A3F38u;
    {
        const bool branch_taken_0x1a3f38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3F3Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1a3f38) {
            ctx->pc = 0x1A3F64u;
            goto label_1a3f64;
        }
    }
    ctx->pc = 0x1A3F40u;
label_1a3f40:
    // 0x1a3f40: 0x25ef0001
    ctx->pc = 0x1a3f40u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 15), 1));
label_1a3f44:
    // 0x1a3f44: 0x1ed102a
    ctx->pc = 0x1a3f44u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 15), GPR_S32(ctx, 13)));
    // 0x1a3f48: 0x1440fff6
    ctx->pc = 0x1A3F48u;
    {
        const bool branch_taken_0x1a3f48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A3F4Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3f48) {
            ctx->pc = 0x1A3F24u;
            goto label_1a3f24;
        }
    }
    ctx->pc = 0x1A3F50u;
    // 0x1a3f50: 0x27180001
    ctx->pc = 0x1a3f50u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 1));
label_1a3f54:
    // 0x1a3f54: 0x30e102a
    ctx->pc = 0x1a3f54u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 24), GPR_S32(ctx, 14)));
    // 0x1a3f58: 0x1440ffed
    ctx->pc = 0x1A3F58u;
    {
        const bool branch_taken_0x1a3f58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A3F5Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3f58) {
            ctx->pc = 0x1A3F10u;
            goto label_1a3f10;
        }
    }
    ctx->pc = 0x1A3F60u;
    // 0x1a3f60: 0x102d
    ctx->pc = 0x1a3f60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3f64:
    // 0x1a3f64: 0xdfbf0000
    ctx->pc = 0x1a3f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3f68: 0x3e00008
    ctx->pc = 0x1A3F68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3F6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A3F10u: goto label_1a3f10;
            case 0x1A3F24u: goto label_1a3f24;
            case 0x1A3F40u: goto label_1a3f40;
            case 0x1A3F44u: goto label_1a3f44;
            case 0x1A3F54u: goto label_1a3f54;
            case 0x1A3F64u: goto label_1a3f64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A3F70u;
}
