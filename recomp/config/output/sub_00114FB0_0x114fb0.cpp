#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00114FB0
// Address: 0x114fb0 - 0x115058
void sub_00114FB0_0x114fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x114fb0u;

    // 0x114fb0: 0x3c07ffff
    ctx->pc = 0x114fb0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)65535 << 16));
    // 0x114fb4: 0x302d
    ctx->pc = 0x114fb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114fb8: 0x34e7f000
    ctx->pc = 0x114fb8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 61440));
    // 0x114fbc: 0x0
    ctx->pc = 0x114fbcu;
    // NOP
label_114fc0:
    // 0x114fc0: 0xf
    ctx->pc = 0x114fc0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x114fc4: 0xbcd00000
    ctx->pc = 0x114fc4u;
    // CACHE instruction (ignored)
    // 0x114fc8: 0xf
    ctx->pc = 0x114fc8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x114fcc: 0x4002e000
    ctx->pc = 0x114fccu;
    SET_GPR_U32(ctx, 2, ctx->cop0_taglo);
    // 0x114fd0: 0x471024
    ctx->pc = 0x114fd0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x114fd4: 0x461021
    ctx->pc = 0x114fd4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x114fd8: 0xa2182b
    ctx->pc = 0x114fd8u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x114fdc: 0x44102b
    ctx->pc = 0x114fdcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x114fe0: 0x14400006
    ctx->pc = 0x114FE0u;
    {
        const bool branch_taken_0x114fe0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x114fe0) {
            ctx->pc = 0x114FFCu;
            goto label_114ffc;
        }
    }
    ctx->pc = 0x114FE8u;
    // 0x114fe8: 0x14600004
    ctx->pc = 0x114FE8u;
    {
        const bool branch_taken_0x114fe8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x114fe8) {
            ctx->pc = 0x114FFCu;
            goto label_114ffc;
        }
    }
    ctx->pc = 0x114FF0u;
    // 0x114ff0: 0xf
    ctx->pc = 0x114ff0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x114ff4: 0xbcd60000
    ctx->pc = 0x114ff4u;
    // CACHE instruction (ignored)
    // 0x114ff8: 0xf
    ctx->pc = 0x114ff8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_114ffc:
    // 0x114ffc: 0xf
    ctx->pc = 0x114ffcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x115000: 0xbcd00001
    ctx->pc = 0x115000u;
    // CACHE instruction (ignored)
    // 0x115004: 0xf
    ctx->pc = 0x115004u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x115008: 0x4002e000
    ctx->pc = 0x115008u;
    SET_GPR_U32(ctx, 2, ctx->cop0_taglo);
    // 0x11500c: 0x471024
    ctx->pc = 0x11500cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x115010: 0x461021
    ctx->pc = 0x115010u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x115014: 0xa2182b
    ctx->pc = 0x115014u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x115018: 0x44102b
    ctx->pc = 0x115018u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11501c: 0x14400006
    ctx->pc = 0x11501Cu;
    {
        const bool branch_taken_0x11501c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11501c) {
            ctx->pc = 0x115038u;
            goto label_115038;
        }
    }
    ctx->pc = 0x115024u;
    // 0x115024: 0x14600004
    ctx->pc = 0x115024u;
    {
        const bool branch_taken_0x115024 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x115024) {
            ctx->pc = 0x115038u;
            goto label_115038;
        }
    }
    ctx->pc = 0x11502Cu;
    // 0x11502c: 0xf
    ctx->pc = 0x11502cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x115030: 0xbcd60001
    ctx->pc = 0x115030u;
    // CACHE instruction (ignored)
    // 0x115034: 0xf
    ctx->pc = 0x115034u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_115038:
    // 0x115038: 0xf
    ctx->pc = 0x115038u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x11503c: 0x24c60040
    ctx->pc = 0x11503cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 64));
    // 0x115040: 0x28c21000
    ctx->pc = 0x115040u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 4096));
    // 0x115044: 0x1440ffde
    ctx->pc = 0x115044u;
    {
        const bool branch_taken_0x115044 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x115044) {
            ctx->pc = 0x114FC0u;
            goto label_114fc0;
        }
    }
    ctx->pc = 0x11504Cu;
    // 0x11504c: 0x3e00008
    ctx->pc = 0x11504Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x114FC0u: goto label_114fc0;
            case 0x114FFCu: goto label_114ffc;
            case 0x115038u: goto label_115038;
            default: break;
        }
        return;
    }
    ctx->pc = 0x115054u;
    // 0x115054: 0x0
    ctx->pc = 0x115054u;
    // NOP
}
