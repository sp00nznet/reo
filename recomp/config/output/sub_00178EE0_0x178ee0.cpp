#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00178EE0
// Address: 0x178ee0 - 0x178ff8
void sub_00178EE0_0x178ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x178ee0u;

    // 0x178ee0: 0x3e00008
    ctx->pc = 0x178EE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178EE4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178F90u: goto label_178f90;
            case 0x178FB8u: goto label_178fb8;
            case 0x178FBCu: goto label_178fbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178EE8u;
    // 0x178ee8: 0x3e00008
    ctx->pc = 0x178EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178EECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178F90u: goto label_178f90;
            case 0x178FB8u: goto label_178fb8;
            case 0x178FBCu: goto label_178fbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178EF0u;
    // 0x178ef0: 0x3e00008
    ctx->pc = 0x178EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178EF4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178F90u: goto label_178f90;
            case 0x178FB8u: goto label_178fb8;
            case 0x178FBCu: goto label_178fbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178EF8u;
    // 0x178ef8: 0x3e00008
    ctx->pc = 0x178EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178EFCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178F90u: goto label_178f90;
            case 0x178FB8u: goto label_178fb8;
            case 0x178FBCu: goto label_178fbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178F00u;
    // 0x178f00: 0x3e00008
    ctx->pc = 0x178F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178F04u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178F90u: goto label_178f90;
            case 0x178FB8u: goto label_178fb8;
            case 0x178FBCu: goto label_178fbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178F08u;
    // 0x178f08: 0x3e00008
    ctx->pc = 0x178F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178F0Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178F90u: goto label_178f90;
            case 0x178FB8u: goto label_178fb8;
            case 0x178FBCu: goto label_178fbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178F10u;
    // 0x178f10: 0x3e00008
    ctx->pc = 0x178F10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178F14u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178F90u: goto label_178f90;
            case 0x178FB8u: goto label_178fb8;
            case 0x178FBCu: goto label_178fbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178F18u;
    // 0x178f18: 0x27bdfff0
    ctx->pc = 0x178f18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x178f1c: 0x3c05ff00
    ctx->pc = 0x178f1cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x178f20: 0xffbf0000
    ctx->pc = 0x178f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178f24: 0x34a50701
    ctx->pc = 0x178f24u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1793));
    // 0x178f28: 0xdfbf0000
    ctx->pc = 0x178f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178f2c: 0x805a704
    ctx->pc = 0x178F2Cu;
    ctx->pc = 0x178F30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x178F34u;
    // 0x178f34: 0x0
    ctx->pc = 0x178f34u;
    // NOP
    // 0x178f38: 0x27bdfff0
    ctx->pc = 0x178f38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x178f3c: 0x3c05ff00
    ctx->pc = 0x178f3cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x178f40: 0xffbf0000
    ctx->pc = 0x178f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178f44: 0x34a50701
    ctx->pc = 0x178f44u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1793));
    // 0x178f48: 0xdfbf0000
    ctx->pc = 0x178f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178f4c: 0x805a704
    ctx->pc = 0x178F4Cu;
    ctx->pc = 0x178F50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x178F54u;
    // 0x178f54: 0x0
    ctx->pc = 0x178f54u;
    // NOP
    // 0x178f58: 0x27bdffe0
    ctx->pc = 0x178f58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178f5c: 0xffb00000
    ctx->pc = 0x178f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178f60: 0x80802d
    ctx->pc = 0x178f60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178f64: 0xffb10008
    ctx->pc = 0x178f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x178f68: 0xa0882d
    ctx->pc = 0x178f68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178f6c: 0xffbf0010
    ctx->pc = 0x178f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x178f70: 0x8e020048
    ctx->pc = 0x178f70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x178f74: 0x2442fffd
    ctx->pc = 0x178f74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x178f78: 0x2c420002
    ctx->pc = 0x178f78u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x178f7c: 0x14400004
    ctx->pc = 0x178F7Cu;
    {
        const bool branch_taken_0x178f7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x178F80u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x178f7c) {
            ctx->pc = 0x178F90u;
            goto label_178f90;
        }
    }
    ctx->pc = 0x178F84u;
    // 0x178f84: 0x1000000c
    ctx->pc = 0x178F84u;
    {
        const bool branch_taken_0x178f84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x178F88u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x178f84) {
            ctx->pc = 0x178FB8u;
            goto label_178fb8;
        }
    }
    ctx->pc = 0x178F8Cu;
    // 0x178f8c: 0x0
    ctx->pc = 0x178f8cu;
    // NOP
label_178f90:
    // 0x178f90: 0xc059ef6
    ctx->pc = 0x178F90u;
    SET_GPR_U32(ctx, 31, 0x178F98u);
    ctx->pc = 0x178F94u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 7240)));
    ctx->pc = 0x167BD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167BD8_0x167bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178F98u; }
    }
    if (ctx->pc != 0x178F98u) { return; }
    ctx->pc = 0x178F98u;
    // 0x178f98: 0x14400008
    ctx->pc = 0x178F98u;
    {
        const bool branch_taken_0x178f98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x178F9Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x178f98) {
            ctx->pc = 0x178FBCu;
            goto label_178fbc;
        }
    }
    ctx->pc = 0x178FA0u;
    // 0x178fa0: 0xc05dbcc
    ctx->pc = 0x178FA0u;
    SET_GPR_U32(ctx, 31, 0x178FA8u);
    ctx->pc = 0x178FA4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x176F30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00176F30_0x176f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178FA8u; }
    }
    if (ctx->pc != 0x178FA8u) { return; }
    ctx->pc = 0x178FA8u;
    // 0x178fa8: 0x54400004
    ctx->pc = 0x178FA8u;
    {
        const bool branch_taken_0x178fa8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x178fa8) {
            ctx->pc = 0x178FACu;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x178FBCu;
            goto label_178fbc;
        }
    }
    ctx->pc = 0x178FB0u;
    // 0x178fb0: 0x10000002
    ctx->pc = 0x178FB0u;
    {
        const bool branch_taken_0x178fb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x178FB4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x178fb0) {
            ctx->pc = 0x178FBCu;
            goto label_178fbc;
        }
    }
    ctx->pc = 0x178FB8u;
label_178fb8:
    // 0x178fb8: 0x102d
    ctx->pc = 0x178fb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_178fbc:
    // 0x178fbc: 0xdfb00000
    ctx->pc = 0x178fbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178fc0: 0xdfb10008
    ctx->pc = 0x178fc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178fc4: 0xdfbf0010
    ctx->pc = 0x178fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178fc8: 0x3e00008
    ctx->pc = 0x178FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178FCCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178F90u: goto label_178f90;
            case 0x178FB8u: goto label_178fb8;
            case 0x178FBCu: goto label_178fbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178FD0u;
    // 0x178fd0: 0x27bdfff0
    ctx->pc = 0x178fd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x178fd4: 0xa0302d
    ctx->pc = 0x178fd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178fd8: 0xffbf0000
    ctx->pc = 0x178fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178fdc: 0x8c851c48
    ctx->pc = 0x178fdcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 7240)));
    // 0x178fe0: 0xdfbf0000
    ctx->pc = 0x178fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178fe4: 0x8059f0c
    ctx->pc = 0x178FE4u;
    ctx->pc = 0x178FE8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x167C30u;
    entry_167c30_0x167ca0(rdram, ctx, runtime); return;
    ctx->pc = 0x178FECu;
    // 0x178fec: 0x0
    ctx->pc = 0x178fecu;
    // NOP
    // 0x178ff0: 0x3e00008
    ctx->pc = 0x178FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178FF4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178F90u: goto label_178f90;
            case 0x178FB8u: goto label_178fb8;
            case 0x178FBCu: goto label_178fbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178FF8u;
}
