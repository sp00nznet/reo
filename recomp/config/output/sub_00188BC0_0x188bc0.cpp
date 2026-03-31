#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00188BC0
// Address: 0x188bc0 - 0x188c30
void sub_00188BC0_0x188bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x188bc0u;

    // 0x188bc0: 0x27bdffd0
    ctx->pc = 0x188bc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x188bc4: 0x3c020029
    ctx->pc = 0x188bc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x188bc8: 0xffb00010
    ctx->pc = 0x188bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x188bcc: 0x3c058000
    ctx->pc = 0x188bccu;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x188bd0: 0x3c100029
    ctx->pc = 0x188bd0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)41 << 16));
    // 0x188bd4: 0xffbf0020
    ctx->pc = 0x188bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x188bd8: 0x26070c00
    ctx->pc = 0x188bd8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 3072));
    // 0x188bdc: 0x34a51304
    ctx->pc = 0x188bdcu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 4868));
    // 0x188be0: 0xace40004
    ctx->pc = 0x188be0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x188be4: 0x302d
    ctx->pc = 0x188be4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188be8: 0x24440b88
    ctx->pc = 0x188be8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 2952));
    // 0x188bec: 0xafa00000
    ctx->pc = 0x188becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x188bf0: 0x24080280
    ctx->pc = 0x188bf0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 640));
    // 0x188bf4: 0xe0482d
    ctx->pc = 0x188bf4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188bf8: 0x240a0280
    ctx->pc = 0x188bf8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 640));
    // 0x188bfc: 0xc045e7a
    ctx->pc = 0x188BFCu;
    SET_GPR_U32(ctx, 31, 0x188C04u);
    ctx->pc = 0x188C00u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C04u; }
    }
    if (ctx->pc != 0x188C04u) { return; }
    ctx->pc = 0x188C04u;
    // 0x188c04: 0x4410005
    ctx->pc = 0x188C04u;
    {
        const bool branch_taken_0x188c04 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x188C08u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 3072)));
        if (branch_taken_0x188c04) {
            ctx->pc = 0x188C1Cu;
            goto label_188c1c;
        }
    }
    ctx->pc = 0x188C0Cu;
    // 0x188c0c: 0x3c040024
    ctx->pc = 0x188c0cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x188c10: 0xc0625f6
    ctx->pc = 0x188C10u;
    SET_GPR_U32(ctx, 31, 0x188C18u);
    ctx->pc = 0x188C14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6400));
    ctx->pc = 0x1897D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001897D8_0x1897d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C18u; }
    }
    if (ctx->pc != 0x188C18u) { return; }
    ctx->pc = 0x188C18u;
    // 0x188c18: 0x102d
    ctx->pc = 0x188c18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_188c1c:
    // 0x188c1c: 0xdfbf0020
    ctx->pc = 0x188c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188c20: 0xdfb00010
    ctx->pc = 0x188c20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188c24: 0x3e00008
    ctx->pc = 0x188C24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188C28u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188C1Cu: goto label_188c1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x188C2Cu;
    // 0x188c2c: 0x0
    ctx->pc = 0x188c2cu;
    // NOP
}
