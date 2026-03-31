#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A3D00
// Address: 0x1a3d00 - 0x1a3d90
void sub_001A3D00_0x1a3d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a3d00u;

    // 0x1a3d00: 0x27bdfff0
    ctx->pc = 0x1a3d00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a3d04: 0xa0482d
    ctx->pc = 0x1a3d04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3d08: 0xc0402d
    ctx->pc = 0x1a3d08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3d0c: 0xffbf0000
    ctx->pc = 0x1a3d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a3d10: 0x3c05000c
    ctx->pc = 0x1a3d10u;
    SET_GPR_U32(ctx, 5, ((uint32_t)12 << 16));
    // 0x1a3d14: 0xc068d7c
    ctx->pc = 0x1A3D14u;
    SET_GPR_U32(ctx, 31, 0x1A3D1Cu);
    ctx->pc = 0x1A3D18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A35F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A35F0_0x1a35f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3D1Cu; }
    }
    if (ctx->pc != 0x1A3D1Cu) { return; }
    ctx->pc = 0x1A3D1Cu;
    // 0x1a3d1c: 0x14400003
    ctx->pc = 0x1A3D1Cu;
    {
        const bool branch_taken_0x1a3d1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a3d1c) {
            ctx->pc = 0x1A3D2Cu;
            goto label_1a3d2c;
        }
    }
    ctx->pc = 0x1A3D24u;
    // 0x1a3d24: 0x10000014
    ctx->pc = 0x1A3D24u;
    {
        const bool branch_taken_0x1a3d24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3D28u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3d24) {
            ctx->pc = 0x1A3D78u;
            goto label_1a3d78;
        }
    }
    ctx->pc = 0x1A3D2Cu;
label_1a3d2c:
    // 0x1a3d2c: 0x2442000c
    ctx->pc = 0x1a3d2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12));
    // 0x1a3d30: 0x10000006
    ctx->pc = 0x1A3D30u;
    {
        const bool branch_taken_0x1a3d30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3D34u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3d30) {
            ctx->pc = 0x1A3D4Cu;
            goto label_1a3d4c;
        }
    }
    ctx->pc = 0x1A3D38u;
label_1a3d38:
    // 0x1a3d38: 0x8c430000
    ctx->pc = 0x1a3d38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a3d3c: 0x24840001
    ctx->pc = 0x1a3d3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a3d40: 0x318c0
    ctx->pc = 0x1a3d40u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a3d44: 0x24420004
    ctx->pc = 0x1a3d44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a3d48: 0x431021
    ctx->pc = 0x1a3d48u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a3d4c:
    // 0x1a3d4c: 0x89182a
    ctx->pc = 0x1a3d4cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 9)));
    // 0x1a3d50: 0x1460fff9
    ctx->pc = 0x1A3D50u;
    {
        const bool branch_taken_0x1a3d50 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a3d50) {
            ctx->pc = 0x1A3D38u;
            goto label_1a3d38;
        }
    }
    ctx->pc = 0x1A3D58u;
    // 0x1a3d58: 0x8c430000
    ctx->pc = 0x1a3d58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a3d5c: 0x103182a
    ctx->pc = 0x1a3d5cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 3)));
    // 0x1a3d60: 0x14600003
    ctx->pc = 0x1A3D60u;
    {
        const bool branch_taken_0x1a3d60 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A3D64u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 3));
        if (branch_taken_0x1a3d60) {
            ctx->pc = 0x1A3D70u;
            goto label_1a3d70;
        }
    }
    ctx->pc = 0x1A3D68u;
    // 0x1a3d68: 0x10000003
    ctx->pc = 0x1A3D68u;
    {
        const bool branch_taken_0x1a3d68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3D6Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3d68) {
            ctx->pc = 0x1A3D78u;
            goto label_1a3d78;
        }
    }
    ctx->pc = 0x1A3D70u;
label_1a3d70:
    // 0x1a3d70: 0x24420004
    ctx->pc = 0x1a3d70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a3d74: 0x431021
    ctx->pc = 0x1a3d74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a3d78:
    // 0x1a3d78: 0xdfbf0000
    ctx->pc = 0x1a3d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3d7c: 0x3e00008
    ctx->pc = 0x1A3D7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3D80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A3D2Cu: goto label_1a3d2c;
            case 0x1A3D38u: goto label_1a3d38;
            case 0x1A3D4Cu: goto label_1a3d4c;
            case 0x1A3D70u: goto label_1a3d70;
            case 0x1A3D78u: goto label_1a3d78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A3D84u;
    // 0x1a3d84: 0x0
    ctx->pc = 0x1a3d84u;
    // NOP
    // 0x1a3d88: 0x0
    ctx->pc = 0x1a3d88u;
    // NOP
    // 0x1a3d8c: 0x0
    ctx->pc = 0x1a3d8cu;
    // NOP
}
