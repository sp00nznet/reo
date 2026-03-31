#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00102F78
// Address: 0x102f78 - 0x103000
void sub_00102F78_0x102f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x102f78u;

    // 0x102f78: 0x27bdffb0
    ctx->pc = 0x102f78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x102f7c: 0xffb20020
    ctx->pc = 0x102f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x102f80: 0xffb10010
    ctx->pc = 0x102f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x102f84: 0xa0902d
    ctx->pc = 0x102f84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102f88: 0xffb00000
    ctx->pc = 0x102f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x102f8c: 0x80882d
    ctx->pc = 0x102f8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102f90: 0xffbf0040
    ctx->pc = 0x102f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x102f94: 0x3c100100
    ctx->pc = 0x102f94u;
    SET_GPR_U32(ctx, 16, ((uint32_t)256 << 16));
    // 0x102f98: 0xffb30030
    ctx->pc = 0x102f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x102f9c: 0xc6800b
    ctx->pc = 0x102f9cu;
    if (GPR_U32(ctx, 6) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 6));
    // 0x102fa0: 0x8e220010
    ctx->pc = 0x102fa0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x102fa4: 0x52102b
    ctx->pc = 0x102fa4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x102fa8: 0x1040000d
    ctx->pc = 0x102FA8u;
    {
        const bool branch_taken_0x102fa8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x102FACu;
        SET_GPR_U32(ctx, 19, ((uint32_t)35 << 16));
        if (branch_taken_0x102fa8) {
            ctx->pc = 0x102FE0u;
            goto label_102fe0;
        }
    }
    ctx->pc = 0x102FB0u;
    // 0x102fb0: 0x2610ffff
    ctx->pc = 0x102fb0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x102fb4: 0x0
    ctx->pc = 0x102fb4u;
    // NOP
label_102fb8:
    // 0x102fb8: 0x6010005
    ctx->pc = 0x102FB8u;
    {
        const bool branch_taken_0x102fb8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x102fb8) {
            ctx->pc = 0x102FD0u;
            goto label_102fd0;
        }
    }
    ctx->pc = 0x102FC0u;
    // 0x102fc0: 0xc045a12
    ctx->pc = 0x102FC0u;
    SET_GPR_U32(ctx, 31, 0x102FC8u);
    ctx->pc = 0x102FC4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 30456));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102FC8u; }
    }
    if (ctx->pc != 0x102FC8u) { return; }
    ctx->pc = 0x102FC8u;
    // 0x102fc8: 0xc040da8
    ctx->pc = 0x102FC8u;
    SET_GPR_U32(ctx, 31, 0x102FD0u);
    ctx->pc = 0x102FCCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1036A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001036A0_0x1036a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102FD0u; }
    }
    if (ctx->pc != 0x102FD0u) { return; }
    ctx->pc = 0x102FD0u;
label_102fd0:
    // 0x102fd0: 0x8e220010
    ctx->pc = 0x102fd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x102fd4: 0x52102b
    ctx->pc = 0x102fd4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x102fd8: 0x1440fff7
    ctx->pc = 0x102FD8u;
    {
        const bool branch_taken_0x102fd8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x102FDCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
        if (branch_taken_0x102fd8) {
            ctx->pc = 0x102FB8u;
            goto label_102fb8;
        }
    }
    ctx->pc = 0x102FE0u;
label_102fe0:
    // 0x102fe0: 0xdfbf0040
    ctx->pc = 0x102fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x102fe4: 0xdfb30030
    ctx->pc = 0x102fe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102fe8: 0xdfb20020
    ctx->pc = 0x102fe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102fec: 0xdfb10010
    ctx->pc = 0x102fecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102ff0: 0xdfb00000
    ctx->pc = 0x102ff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102ff4: 0x3e00008
    ctx->pc = 0x102FF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102FF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102FB8u: goto label_102fb8;
            case 0x102FD0u: goto label_102fd0;
            case 0x102FE0u: goto label_102fe0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x102FFCu;
    // 0x102ffc: 0x0
    ctx->pc = 0x102ffcu;
    // NOP
}
