#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D6F10
// Address: 0x1d6f10 - 0x1d7000
void sub_001D6F10_0x1d6f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d6f10u;

    // 0x1d6f10: 0x27bdffe0
    ctx->pc = 0x1d6f10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d6f14: 0x24020001
    ctx->pc = 0x1d6f14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6f18: 0xffbf0010
    ctx->pc = 0x1d6f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d6f1c: 0x8c8a0000
    ctx->pc = 0x1d6f1cu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d6f20: 0x8d460004
    ctx->pc = 0x1d6f20u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x1d6f24: 0x84c30000
    ctx->pc = 0x1d6f24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d6f28: 0x10620003
    ctx->pc = 0x1D6F28u;
    {
        const bool branch_taken_0x1d6f28 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1d6f28) {
            ctx->pc = 0x1D6F38u;
            goto label_1d6f38;
        }
    }
    ctx->pc = 0x1D6F30u;
    // 0x1d6f30: 0x10000003
    ctx->pc = 0x1D6F30u;
    {
        const bool branch_taken_0x1d6f30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D6F34u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d6f30) {
            ctx->pc = 0x1D6F40u;
            goto label_1d6f40;
        }
    }
    ctx->pc = 0x1D6F38u;
label_1d6f38:
    // 0x1d6f38: 0x22c3c
    ctx->pc = 0x1d6f38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d6f3c: 0x52c3f
    ctx->pc = 0x1d6f3cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_1d6f40:
    // 0x1d6f40: 0x8d430008
    ctx->pc = 0x1d6f40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x1d6f44: 0x24020003
    ctx->pc = 0x1d6f44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d6f48: 0x84630000
    ctx->pc = 0x1d6f48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d6f4c: 0x10620016
    ctx->pc = 0x1D6F4Cu;
    {
        const bool branch_taken_0x1d6f4c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1d6f4c) {
            ctx->pc = 0x1D6FA8u;
            goto label_1d6fa8;
        }
    }
    ctx->pc = 0x1D6F54u;
    // 0x1d6f54: 0x24020002
    ctx->pc = 0x1d6f54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d6f58: 0x1062000f
    ctx->pc = 0x1D6F58u;
    {
        const bool branch_taken_0x1d6f58 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1d6f58) {
            ctx->pc = 0x1D6F98u;
            goto label_1d6f98;
        }
    }
    ctx->pc = 0x1D6F60u;
    // 0x1d6f60: 0x24020001
    ctx->pc = 0x1d6f60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6f64: 0x10620008
    ctx->pc = 0x1D6F64u;
    {
        const bool branch_taken_0x1d6f64 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1d6f64) {
            ctx->pc = 0x1D6F88u;
            goto label_1d6f88;
        }
    }
    ctx->pc = 0x1D6F6Cu;
    // 0x1d6f6c: 0x10600004
    ctx->pc = 0x1D6F6Cu;
    {
        const bool branch_taken_0x1d6f6c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d6f6c) {
            ctx->pc = 0x1D6F80u;
            goto label_1d6f80;
        }
    }
    ctx->pc = 0x1D6F74u;
    // 0x1d6f74: 0x1000000e
    ctx->pc = 0x1D6F74u;
    {
        const bool branch_taken_0x1d6f74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d6f74) {
            ctx->pc = 0x1D6FB0u;
            goto label_1d6fb0;
        }
    }
    ctx->pc = 0x1D6F7Cu;
    // 0x1d6f7c: 0x0
    ctx->pc = 0x1d6f7cu;
    // NOP
label_1d6f80:
    // 0x1d6f80: 0x1000000b
    ctx->pc = 0x1D6F80u;
    {
        const bool branch_taken_0x1d6f80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D6F84u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d6f80) {
            ctx->pc = 0x1D6FB0u;
            goto label_1d6fb0;
        }
    }
    ctx->pc = 0x1D6F88u;
label_1d6f88:
    // 0x1d6f88: 0x23c3c
    ctx->pc = 0x1d6f88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d6f8c: 0x10000008
    ctx->pc = 0x1D6F8Cu;
    {
        const bool branch_taken_0x1d6f8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D6F90u;
        SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
        if (branch_taken_0x1d6f8c) {
            ctx->pc = 0x1D6FB0u;
            goto label_1d6fb0;
        }
    }
    ctx->pc = 0x1D6F94u;
    // 0x1d6f94: 0x0
    ctx->pc = 0x1d6f94u;
    // NOP
label_1d6f98:
    // 0x1d6f98: 0x23c3c
    ctx->pc = 0x1d6f98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d6f9c: 0x10000004
    ctx->pc = 0x1D6F9Cu;
    {
        const bool branch_taken_0x1d6f9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D6FA0u;
        SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
        if (branch_taken_0x1d6f9c) {
            ctx->pc = 0x1D6FB0u;
            goto label_1d6fb0;
        }
    }
    ctx->pc = 0x1D6FA4u;
    // 0x1d6fa4: 0x0
    ctx->pc = 0x1d6fa4u;
    // NOP
label_1d6fa8:
    // 0x1d6fa8: 0x24070004
    ctx->pc = 0x1d6fa8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d6fac: 0x0
    ctx->pc = 0x1d6facu;
    // NOP
label_1d6fb0:
    // 0x1d6fb0: 0x80820007
    ctx->pc = 0x1d6fb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x1d6fb4: 0xffa20000
    ctx->pc = 0x1d6fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1d6fb8: 0xffa70008
    ctx->pc = 0x1d6fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 7));
    // 0x1d6fbc: 0x8cc90004
    ctx->pc = 0x1d6fbcu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1d6fc0: 0x808b0006
    ctx->pc = 0x1d6fc0u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1d6fc4: 0x8d470018
    ctx->pc = 0x1d6fc4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x1d6fc8: 0x8d48001c
    ctx->pc = 0x1d6fc8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x1d6fcc: 0x8d460014
    ctx->pc = 0x1d6fccu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x1d6fd0: 0x8d4a000c
    ctx->pc = 0x1d6fd0u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x1d6fd4: 0xc076208
    ctx->pc = 0x1D6FD4u;
    SET_GPR_U32(ctx, 31, 0x1D6FDCu);
    ctx->pc = 0x1D6FD8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1D8820u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8820_0x1d8820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6FDCu; }
    }
    if (ctx->pc != 0x1D6FDCu) { return; }
    ctx->pc = 0x1D6FDCu;
    // 0x1d6fdc: 0x24030002
    ctx->pc = 0x1d6fdcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d6fe0: 0x3c010034
    ctx->pc = 0x1d6fe0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d6fe4: 0xac2345e8
    ctx->pc = 0x1d6fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17896), GPR_U32(ctx, 3));
    // 0x1d6fe8: 0x2143c
    ctx->pc = 0x1d6fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d6fec: 0xdfbf0010
    ctx->pc = 0x1d6fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6ff0: 0x2143f
    ctx->pc = 0x1d6ff0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d6ff4: 0x3e00008
    ctx->pc = 0x1D6FF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6FF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D6F38u: goto label_1d6f38;
            case 0x1D6F40u: goto label_1d6f40;
            case 0x1D6F80u: goto label_1d6f80;
            case 0x1D6F88u: goto label_1d6f88;
            case 0x1D6F98u: goto label_1d6f98;
            case 0x1D6FA8u: goto label_1d6fa8;
            case 0x1D6FB0u: goto label_1d6fb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D6FFCu;
    // 0x1d6ffc: 0x0
    ctx->pc = 0x1d6ffcu;
    // NOP
}
