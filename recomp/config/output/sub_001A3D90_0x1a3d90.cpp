#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A3D90
// Address: 0x1a3d90 - 0x1a3e90
void sub_001A3D90_0x1a3d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a3d90u;

    // 0x1a3d90: 0x27bdffb0
    ctx->pc = 0x1a3d90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a3d94: 0xffbf0040
    ctx->pc = 0x1a3d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a3d98: 0x7fb30030
    ctx->pc = 0x1a3d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a3d9c: 0x7fb20020
    ctx->pc = 0x1a3d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a3da0: 0x80982d
    ctx->pc = 0x1a3da0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3da4: 0xa0902d
    ctx->pc = 0x1a3da4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3da8: 0x7fb10010
    ctx->pc = 0x1a3da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a3dac: 0x240202d
    ctx->pc = 0x1a3dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3db0: 0x7fb00000
    ctx->pc = 0x1a3db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a3db4: 0xc068d64
    ctx->pc = 0x1A3DB4u;
    SET_GPR_U32(ctx, 31, 0x1A3DBCu);
    ctx->pc = 0x1A3DB8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A3590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3590_0x1a3590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3DBCu; }
    }
    if (ctx->pc != 0x1A3DBCu) { return; }
    ctx->pc = 0x1A3DBCu;
    // 0x1a3dbc: 0x24050002
    ctx->pc = 0x1a3dbcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a3dc0: 0xc068d7c
    ctx->pc = 0x1A3DC0u;
    SET_GPR_U32(ctx, 31, 0x1A3DC8u);
    ctx->pc = 0x1A3DC4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A35F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A35F0_0x1a35f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3DC8u; }
    }
    if (ctx->pc != 0x1A3DC8u) { return; }
    ctx->pc = 0x1A3DC8u;
    // 0x1a3dc8: 0x14400003
    ctx->pc = 0x1A3DC8u;
    {
        const bool branch_taken_0x1a3dc8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a3dc8) {
            ctx->pc = 0x1A3DD8u;
            goto label_1a3dd8;
        }
    }
    ctx->pc = 0x1A3DD0u;
    // 0x1a3dd0: 0x10000027
    ctx->pc = 0x1A3DD0u;
    {
        const bool branch_taken_0x1a3dd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3DD4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3dd0) {
            ctx->pc = 0x1A3E70u;
            goto label_1a3e70;
        }
    }
    ctx->pc = 0x1A3DD8u;
label_1a3dd8:
    // 0x1a3dd8: 0x8c420004
    ctx->pc = 0x1a3dd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a3ddc: 0x222082b
    ctx->pc = 0x1a3ddcu;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a3de0: 0x14200003
    ctx->pc = 0x1A3DE0u;
    {
        const bool branch_taken_0x1a3de0 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A3DE4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3de0) {
            ctx->pc = 0x1A3DF0u;
            goto label_1a3df0;
        }
    }
    ctx->pc = 0x1A3DE8u;
    // 0x1a3de8: 0x10000021
    ctx->pc = 0x1A3DE8u;
    {
        const bool branch_taken_0x1a3de8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3DECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3de8) {
            ctx->pc = 0x1A3E70u;
            goto label_1a3e70;
        }
    }
    ctx->pc = 0x1A3DF0u;
label_1a3df0:
    // 0x1a3df0: 0xc068c84
    ctx->pc = 0x1A3DF0u;
    SET_GPR_U32(ctx, 31, 0x1A3DF8u);
    ctx->pc = 0x1A3DF4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A3210u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3210_0x1a3210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3DF8u; }
    }
    if (ctx->pc != 0x1A3DF8u) { return; }
    ctx->pc = 0x1A3DF8u;
    // 0x1a3df8: 0x14400003
    ctx->pc = 0x1A3DF8u;
    {
        const bool branch_taken_0x1a3df8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A3DFCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3df8) {
            ctx->pc = 0x1A3E08u;
            goto label_1a3e08;
        }
    }
    ctx->pc = 0x1A3E00u;
    // 0x1a3e00: 0x1000001b
    ctx->pc = 0x1A3E00u;
    {
        const bool branch_taken_0x1a3e00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3E04u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3e00) {
            ctx->pc = 0x1A3E70u;
            goto label_1a3e70;
        }
    }
    ctx->pc = 0x1A3E08u;
label_1a3e08:
    // 0x1a3e08: 0x8e030000
    ctx->pc = 0x1a3e08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a3e0c: 0x24020004
    ctx->pc = 0x1a3e0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a3e10: 0x10620011
    ctx->pc = 0x1A3E10u;
    {
        const bool branch_taken_0x1a3e10 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1A3E14u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3e10) {
            ctx->pc = 0x1A3E58u;
            goto label_1a3e58;
        }
    }
    ctx->pc = 0x1A3E18u;
    // 0x1a3e18: 0x24020008
    ctx->pc = 0x1a3e18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a3e1c: 0x1062000c
    ctx->pc = 0x1A3E1Cu;
    {
        const bool branch_taken_0x1a3e1c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1A3E20u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3e1c) {
            ctx->pc = 0x1A3E50u;
            goto label_1a3e50;
        }
    }
    ctx->pc = 0x1A3E24u;
    // 0x1a3e24: 0x24020007
    ctx->pc = 0x1a3e24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a3e28: 0x10620008
    ctx->pc = 0x1A3E28u;
    {
        const bool branch_taken_0x1a3e28 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1A3E2Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x1a3e28) {
            ctx->pc = 0x1A3E4Cu;
            goto label_1a3e4c;
        }
    }
    ctx->pc = 0x1A3E30u;
    // 0x1a3e30: 0x10620006
    ctx->pc = 0x1A3E30u;
    {
        const bool branch_taken_0x1a3e30 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1a3e30) {
            ctx->pc = 0x1A3E4Cu;
            goto label_1a3e4c;
        }
    }
    ctx->pc = 0x1A3E38u;
    // 0x1a3e38: 0x24020003
    ctx->pc = 0x1a3e38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a3e3c: 0x10620003
    ctx->pc = 0x1A3E3Cu;
    {
        const bool branch_taken_0x1a3e3c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1a3e3c) {
            ctx->pc = 0x1A3E4Cu;
            goto label_1a3e4c;
        }
    }
    ctx->pc = 0x1A3E44u;
    // 0x1a3e44: 0x1000000a
    ctx->pc = 0x1A3E44u;
    {
        const bool branch_taken_0x1a3e44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3E48u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3e44) {
            ctx->pc = 0x1A3E70u;
            goto label_1a3e70;
        }
    }
    ctx->pc = 0x1A3E4Cu;
label_1a3e4c:
    // 0x1a3e4c: 0x102d
    ctx->pc = 0x1a3e4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3e50:
    // 0x1a3e50: 0x10000008
    ctx->pc = 0x1A3E50u;
    {
        const bool branch_taken_0x1a3e50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3E54u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x1a3e50) {
            ctx->pc = 0x1A3E74u;
            goto label_1a3e74;
        }
    }
    ctx->pc = 0x1A3E58u;
label_1a3e58:
    // 0x1a3e58: 0xc068d2c
    ctx->pc = 0x1A3E58u;
    SET_GPR_U32(ctx, 31, 0x1A3E60u);
    ctx->pc = 0x1A3E5Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A34B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A34B0_0x1a34b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3E60u; }
    }
    if (ctx->pc != 0x1A3E60u) { return; }
    ctx->pc = 0x1A3E60u;
    // 0x1a3e60: 0x200282d
    ctx->pc = 0x1a3e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3e64: 0xa6620020
    ctx->pc = 0x1a3e64u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a3e68: 0xc068fa4
    ctx->pc = 0x1A3E68u;
    SET_GPR_U32(ctx, 31, 0x1A3E70u);
    ctx->pc = 0x1A3E6Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A3E90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3E90_0x1a3e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3E70u; }
    }
    if (ctx->pc != 0x1A3E70u) { return; }
    ctx->pc = 0x1A3E70u;
label_1a3e70:
    // 0x1a3e70: 0xdfbf0040
    ctx->pc = 0x1a3e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a3e74:
    // 0x1a3e74: 0x7bb30030
    ctx->pc = 0x1a3e74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a3e78: 0x7bb20020
    ctx->pc = 0x1a3e78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3e7c: 0x7bb10010
    ctx->pc = 0x1a3e7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3e80: 0x7bb00000
    ctx->pc = 0x1a3e80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3e84: 0x3e00008
    ctx->pc = 0x1A3E84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3E88u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A3DD8u: goto label_1a3dd8;
            case 0x1A3DF0u: goto label_1a3df0;
            case 0x1A3E08u: goto label_1a3e08;
            case 0x1A3E4Cu: goto label_1a3e4c;
            case 0x1A3E50u: goto label_1a3e50;
            case 0x1A3E58u: goto label_1a3e58;
            case 0x1A3E70u: goto label_1a3e70;
            case 0x1A3E74u: goto label_1a3e74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A3E8Cu;
    // 0x1a3e8c: 0x0
    ctx->pc = 0x1a3e8cu;
    // NOP
}
