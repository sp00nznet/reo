#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C3C90
// Address: 0x1c3c90 - 0x1c4390
void sub_001C3C90_0x1c3c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c3c90u;

    // 0x1c3c90: 0x27bdffe0
    ctx->pc = 0x1c3c90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c3c94: 0x24050063
    ctx->pc = 0x1c3c94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 99));
    // 0x1c3c98: 0xffbf0010
    ctx->pc = 0x1c3c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c3c9c: 0x7fb00000
    ctx->pc = 0x1c3c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c3ca0: 0x80860002
    ctx->pc = 0x1c3ca0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1c3ca4: 0x10c501a8
    ctx->pc = 0x1C3CA4u;
    {
        const bool branch_taken_0x1c3ca4 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 5));
        ctx->pc = 0x1C3CA8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c3ca4) {
            ctx->pc = 0x1C4348u;
            goto label_1c4348;
        }
    }
    ctx->pc = 0x1C3CACu;
    // 0x1c3cac: 0x24020006
    ctx->pc = 0x1c3cacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c3cb0: 0x10c2019d
    ctx->pc = 0x1C3CB0u;
    {
        const bool branch_taken_0x1c3cb0 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C3CB4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x1c3cb0) {
            ctx->pc = 0x1C4328u;
            goto label_1c4328;
        }
    }
    ctx->pc = 0x1C3CB8u;
    // 0x1c3cb8: 0x10c4016e
    ctx->pc = 0x1C3CB8u;
    {
        const bool branch_taken_0x1c3cb8 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 4));
        ctx->pc = 0x1C3CBCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1c3cb8) {
            ctx->pc = 0x1C4274u;
            goto label_1c4274;
        }
    }
    ctx->pc = 0x1C3CC0u;
    // 0x1c3cc0: 0x10c20146
    ctx->pc = 0x1C3CC0u;
    {
        const bool branch_taken_0x1c3cc0 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        if (branch_taken_0x1c3cc0) {
            ctx->pc = 0x1C41DCu;
            goto label_1c41dc;
        }
    }
    ctx->pc = 0x1C3CC8u;
    // 0x1c3cc8: 0x24020003
    ctx->pc = 0x1c3cc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3ccc: 0x10c200d8
    ctx->pc = 0x1C3CCCu;
    {
        const bool branch_taken_0x1c3ccc = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C3CD0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1c3ccc) {
            ctx->pc = 0x1C4030u;
            goto label_1c4030;
        }
    }
    ctx->pc = 0x1C3CD4u;
    // 0x1c3cd4: 0x10c20065
    ctx->pc = 0x1C3CD4u;
    {
        const bool branch_taken_0x1c3cd4 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C3CD8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1c3cd4) {
            ctx->pc = 0x1C3E6Cu;
            goto label_1c3e6c;
        }
    }
    ctx->pc = 0x1C3CDCu;
    // 0x1c3cdc: 0x10c30012
    ctx->pc = 0x1C3CDCu;
    {
        const bool branch_taken_0x1c3cdc = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c3cdc) {
            ctx->pc = 0x1C3D28u;
            goto label_1c3d28;
        }
    }
    ctx->pc = 0x1C3CE4u;
    // 0x1c3ce4: 0x10c00003
    ctx->pc = 0x1C3CE4u;
    {
        const bool branch_taken_0x1c3ce4 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c3ce4) {
            ctx->pc = 0x1C3CF4u;
            goto label_1c3cf4;
        }
    }
    ctx->pc = 0x1C3CECu;
    // 0x1c3cec: 0x1000019f
    ctx->pc = 0x1C3CECu;
    {
        const bool branch_taken_0x1c3cec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3CF0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c3cec) {
            ctx->pc = 0x1C436Cu;
            goto label_1c436c;
        }
    }
    ctx->pc = 0x1C3CF4u;
label_1c3cf4:
    // 0x1c3cf4: 0x8e020040
    ctx->pc = 0x1c3cf4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1c3cf8: 0x14400004
    ctx->pc = 0x1C3CF8u;
    {
        const bool branch_taken_0x1c3cf8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c3cf8) {
            ctx->pc = 0x1C3D0Cu;
            goto label_1c3d0c;
        }
    }
    ctx->pc = 0x1C3D00u;
    // 0x1c3d00: 0xa2050002
    ctx->pc = 0x1c3d00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x1c3d04: 0x10000198
    ctx->pc = 0x1C3D04u;
    {
        const bool branch_taken_0x1c3d04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3D08u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
        if (branch_taken_0x1c3d04) {
            ctx->pc = 0x1C4368u;
            goto label_1c4368;
        }
    }
    ctx->pc = 0x1C3D0Cu;
label_1c3d0c:
    // 0x1c3d0c: 0xa2030002
    ctx->pc = 0x1c3d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c3d10: 0x24020008
    ctx->pc = 0x1c3d10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c3d14: 0xae02002c
    ctx->pc = 0x1c3d14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1c3d18: 0x8e040024
    ctx->pc = 0x1c3d18u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c3d1c: 0x8e0500e8
    ctx->pc = 0x1c3d1cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1c3d20: 0xc0701c4
    ctx->pc = 0x1C3D20u;
    SET_GPR_U32(ctx, 31, 0x1C3D28u);
    ctx->pc = 0x1C3D24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C0710u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0710_0x1c0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D28u; }
    }
    if (ctx->pc != 0x1C3D28u) { return; }
    ctx->pc = 0x1C3D28u;
label_1c3d28:
    // 0x1c3d28: 0xc070498
    ctx->pc = 0x1C3D28u;
    SET_GPR_U32(ctx, 31, 0x1C3D30u);
    ctx->pc = 0x1C1260u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1260_0x1c1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D30u; }
    }
    if (ctx->pc != 0x1C3D30u) { return; }
    ctx->pc = 0x1C3D30u;
    // 0x1c3d30: 0x2403ffff
    ctx->pc = 0x1c3d30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c3d34: 0x1043018c
    ctx->pc = 0x1C3D34u;
    {
        const bool branch_taken_0x1c3d34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c3d34) {
            ctx->pc = 0x1C4368u;
            goto label_1c4368;
        }
    }
    ctx->pc = 0x1C3D3Cu;
    // 0x1c3d3c: 0x1040002f
    ctx->pc = 0x1C3D3Cu;
    {
        const bool branch_taken_0x1c3d3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3D40u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967045));
        if (branch_taken_0x1c3d3c) {
            ctx->pc = 0x1C3DFCu;
            goto label_1c3dfc;
        }
    }
    ctx->pc = 0x1C3D44u;
    // 0x1c3d44: 0x1043002d
    ctx->pc = 0x1C3D44u;
    {
        const bool branch_taken_0x1c3d44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c3d44) {
            ctx->pc = 0x1C3DFCu;
            goto label_1c3dfc;
        }
    }
    ctx->pc = 0x1C3D4Cu;
    // 0x1c3d4c: 0x2403ff02
    ctx->pc = 0x1c3d4cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967042));
    // 0x1c3d50: 0x1043001d
    ctx->pc = 0x1C3D50u;
    {
        const bool branch_taken_0x1c3d50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C3D54u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 14));
        if (branch_taken_0x1c3d50) {
            ctx->pc = 0x1C3DC8u;
            goto label_1c3dc8;
        }
    }
    ctx->pc = 0x1C3D58u;
    // 0x1c3d58: 0x2403ff00
    ctx->pc = 0x1c3d58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1c3d5c: 0x10430013
    ctx->pc = 0x1C3D5Cu;
    {
        const bool branch_taken_0x1c3d5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C3D60u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967043));
        if (branch_taken_0x1c3d5c) {
            ctx->pc = 0x1C3DACu;
            goto label_1c3dac;
        }
    }
    ctx->pc = 0x1C3D64u;
    // 0x1c3d64: 0x10430003
    ctx->pc = 0x1C3D64u;
    {
        const bool branch_taken_0x1c3d64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c3d64) {
            ctx->pc = 0x1C3D74u;
            goto label_1c3d74;
        }
    }
    ctx->pc = 0x1C3D6Cu;
    // 0x1c3d6c: 0x100000fd
    ctx->pc = 0x1C3D6Cu;
    {
        const bool branch_taken_0x1c3d6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3D70u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
        if (branch_taken_0x1c3d6c) {
            ctx->pc = 0x1C4164u;
            goto label_1c4164;
        }
    }
    ctx->pc = 0x1C3D74u;
label_1c3d74:
    // 0x1c3d74: 0x2403000a
    ctx->pc = 0x1c3d74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c3d78: 0x24020002
    ctx->pc = 0x1c3d78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c3d7c: 0xae03002c
    ctx->pc = 0x1c3d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x1c3d80: 0xa2020002
    ctx->pc = 0x1c3d80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c3d84: 0x24030001
    ctx->pc = 0x1c3d84u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3d88: 0xa2030003
    ctx->pc = 0x1c3d88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c3d8c: 0x24020005
    ctx->pc = 0x1c3d8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c3d90: 0xae00003c
    ctx->pc = 0x1c3d90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1c3d94: 0xae030030
    ctx->pc = 0x1c3d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x1c3d98: 0xae030038
    ctx->pc = 0x1c3d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x1c3d9c: 0xc070114
    ctx->pc = 0x1C3D9Cu;
    SET_GPR_U32(ctx, 31, 0x1C3DA4u);
    ctx->pc = 0x1C3DA0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x1C0450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0450_0x1c0450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DA4u; }
    }
    if (ctx->pc != 0x1C3DA4u) { return; }
    ctx->pc = 0x1C3DA4u;
    // 0x1c3da4: 0x10000170
    ctx->pc = 0x1C3DA4u;
    {
        const bool branch_taken_0x1c3da4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3DA8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
        if (branch_taken_0x1c3da4) {
            ctx->pc = 0x1C4368u;
            goto label_1c4368;
        }
    }
    ctx->pc = 0x1C3DACu;
label_1c3dac:
    // 0x1c3dac: 0x24020009
    ctx->pc = 0x1c3dacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c3db0: 0x24030006
    ctx->pc = 0x1c3db0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c3db4: 0xae02002c
    ctx->pc = 0x1c3db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1c3db8: 0x24020001
    ctx->pc = 0x1c3db8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3dbc: 0xa2030002
    ctx->pc = 0x1c3dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c3dc0: 0x10000169
    ctx->pc = 0x1C3DC0u;
    {
        const bool branch_taken_0x1c3dc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3DC4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        if (branch_taken_0x1c3dc0) {
            ctx->pc = 0x1C4368u;
            goto label_1c4368;
        }
    }
    ctx->pc = 0x1C3DC8u;
label_1c3dc8:
    // 0x1c3dc8: 0x24020002
    ctx->pc = 0x1c3dc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c3dcc: 0xae03002c
    ctx->pc = 0x1c3dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x1c3dd0: 0xa2020002
    ctx->pc = 0x1c3dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c3dd4: 0x24030001
    ctx->pc = 0x1c3dd4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3dd8: 0xa2030003
    ctx->pc = 0x1c3dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c3ddc: 0x24020005
    ctx->pc = 0x1c3ddcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c3de0: 0xae03003c
    ctx->pc = 0x1c3de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x1c3de4: 0xae030030
    ctx->pc = 0x1c3de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x1c3de8: 0xae030038
    ctx->pc = 0x1c3de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x1c3dec: 0xc070114
    ctx->pc = 0x1C3DECu;
    SET_GPR_U32(ctx, 31, 0x1C3DF4u);
    ctx->pc = 0x1C3DF0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x1C0450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0450_0x1c0450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DF4u; }
    }
    if (ctx->pc != 0x1C3DF4u) { return; }
    ctx->pc = 0x1C3DF4u;
    // 0x1c3df4: 0x1000015c
    ctx->pc = 0x1C3DF4u;
    {
        const bool branch_taken_0x1c3df4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3DF8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
        if (branch_taken_0x1c3df4) {
            ctx->pc = 0x1C4368u;
            goto label_1c4368;
        }
    }
    ctx->pc = 0x1C3DFCu;
label_1c3dfc:
    // 0x1c3dfc: 0x8e030020
    ctx->pc = 0x1c3dfcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c3e00: 0x24020003
    ctx->pc = 0x1c3e00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3e04: 0x1462000c
    ctx->pc = 0x1C3E04u;
    {
        const bool branch_taken_0x1c3e04 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1C3E08u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 19));
        if (branch_taken_0x1c3e04) {
            ctx->pc = 0x1C3E38u;
            goto label_1c3e38;
        }
    }
    ctx->pc = 0x1C3E0Cu;
    // 0x1c3e0c: 0x24030005
    ctx->pc = 0x1c3e0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c3e10: 0x24020014
    ctx->pc = 0x1c3e10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c3e14: 0xa2030002
    ctx->pc = 0x1c3e14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c3e18: 0x200202d
    ctx->pc = 0x1c3e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e1c: 0xc071504
    ctx->pc = 0x1C3E1Cu;
    SET_GPR_U32(ctx, 31, 0x1C3E24u);
    ctx->pc = 0x1C3E20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    ctx->pc = 0x1C5410u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5410_0x1c5410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3E24u; }
    }
    if (ctx->pc != 0x1C3E24u) { return; }
    ctx->pc = 0x1C3E24u;
    // 0x1c3e24: 0x8e0500e8
    ctx->pc = 0x1c3e24u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1c3e28: 0xc070274
    ctx->pc = 0x1C3E28u;
    SET_GPR_U32(ctx, 31, 0x1C3E30u);
    ctx->pc = 0x1C3E2Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1C09D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C09D0_0x1c09d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3E30u; }
    }
    if (ctx->pc != 0x1C3E30u) { return; }
    ctx->pc = 0x1C3E30u;
    // 0x1c3e30: 0x1000014d
    ctx->pc = 0x1C3E30u;
    {
        const bool branch_taken_0x1c3e30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c3e30) {
            ctx->pc = 0x1C4368u;
            goto label_1c4368;
        }
    }
    ctx->pc = 0x1C3E38u;
label_1c3e38:
    // 0x1c3e38: 0x24040002
    ctx->pc = 0x1c3e38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c3e3c: 0xae02002c
    ctx->pc = 0x1c3e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1c3e40: 0x24030001
    ctx->pc = 0x1c3e40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3e44: 0xa2040002
    ctx->pc = 0x1c3e44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c3e48: 0x24020005
    ctx->pc = 0x1c3e48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c3e4c: 0xa2030003
    ctx->pc = 0x1c3e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c3e50: 0xae04003c
    ctx->pc = 0x1c3e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 4));
    // 0x1c3e54: 0xae030030
    ctx->pc = 0x1c3e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x1c3e58: 0xae030038
    ctx->pc = 0x1c3e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x1c3e5c: 0xc070114
    ctx->pc = 0x1C3E5Cu;
    SET_GPR_U32(ctx, 31, 0x1C3E64u);
    ctx->pc = 0x1C3E60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x1C0450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0450_0x1c0450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3E64u; }
    }
    if (ctx->pc != 0x1C3E64u) { return; }
    ctx->pc = 0x1C3E64u;
    // 0x1c3e64: 0x10000140
    ctx->pc = 0x1C3E64u;
    {
        const bool branch_taken_0x1c3e64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3E68u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
        if (branch_taken_0x1c3e64) {
            ctx->pc = 0x1C4368u;
            goto label_1c4368;
        }
    }
    ctx->pc = 0x1C3E6Cu;
label_1c3e6c:
    // 0x1c3e6c: 0x82030003
    ctx->pc = 0x1c3e6cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1c3e70: 0x24020001
    ctx->pc = 0x1c3e70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3e74: 0x1062000c
    ctx->pc = 0x1C3E74u;
    {
        const bool branch_taken_0x1c3e74 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C3E78u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c3e74) {
            ctx->pc = 0x1C3EA8u;
            goto label_1c3ea8;
        }
    }
    ctx->pc = 0x1C3E7Cu;
    // 0x1c3e7c: 0x10600003
    ctx->pc = 0x1C3E7Cu;
    {
        const bool branch_taken_0x1c3e7c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c3e7c) {
            ctx->pc = 0x1C3E8Cu;
            goto label_1c3e8c;
        }
    }
    ctx->pc = 0x1C3E84u;
    // 0x1c3e84: 0x10000138
    ctx->pc = 0x1C3E84u;
    {
        const bool branch_taken_0x1c3e84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c3e84) {
            ctx->pc = 0x1C4368u;
            goto label_1c4368;
        }
    }
    ctx->pc = 0x1C3E8Cu;
label_1c3e8c:
    // 0x1c3e8c: 0xc070114
    ctx->pc = 0x1C3E8Cu;
    SET_GPR_U32(ctx, 31, 0x1C3E94u);
    ctx->pc = 0x1C0450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0450_0x1c0450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3E94u; }
    }
    if (ctx->pc != 0x1C3E94u) { return; }
    ctx->pc = 0x1C3E94u;
    // 0x1c3e94: 0xae0000e0
    ctx->pc = 0x1c3e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1c3e98: 0x82020003
    ctx->pc = 0x1c3e98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1c3e9c: 0x24420001
    ctx->pc = 0x1c3e9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c3ea0: 0x10000131
    ctx->pc = 0x1C3EA0u;
    {
        const bool branch_taken_0x1c3ea0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3EA4u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1c3ea0) {
            ctx->pc = 0x1C4368u;
            goto label_1c4368;
        }
    }
    ctx->pc = 0x1C3EA8u;
label_1c3ea8:
    // 0x1c3ea8: 0xc07049c
    ctx->pc = 0x1C3EA8u;
    SET_GPR_U32(ctx, 31, 0x1C3EB0u);
    ctx->pc = 0x1C1270u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1270_0x1c1270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3EB0u; }
    }
    if (ctx->pc != 0x1C3EB0u) { return; }
    ctx->pc = 0x1C3EB0u;
    // 0x1c3eb0: 0x1440000a
    ctx->pc = 0x1C3EB0u;
    {
        const bool branch_taken_0x1c3eb0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C3EB4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c3eb0) {
            ctx->pc = 0x1C3EDCu;
            goto label_1c3edc;
        }
    }
    ctx->pc = 0x1C3EB8u;
    // 0x1c3eb8: 0x24040001
    ctx->pc = 0x1c3eb8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3ebc: 0x24030005
    ctx->pc = 0x1c3ebcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c3ec0: 0xae0400e0
    ctx->pc = 0x1c3ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 4));
    // 0x1c3ec4: 0x24020006
    ctx->pc = 0x1c3ec4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c3ec8: 0xae03002c
    ctx->pc = 0x1c3ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x1c3ecc: 0xa2020002
    ctx->pc = 0x1c3eccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c3ed0: 0xae040034
    ctx->pc = 0x1c3ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
    // 0x1c3ed4: 0x10000124
    ctx->pc = 0x1C3ED4u;
    {
        const bool branch_taken_0x1c3ed4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3ED8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        if (branch_taken_0x1c3ed4) {
            ctx->pc = 0x1C4368u;
            goto label_1c4368;
        }
    }
    ctx->pc = 0x1C3EDCu;
label_1c3edc:
    // 0x1c3edc: 0xc070f10
    ctx->pc = 0x1C3EDCu;
    SET_GPR_U32(ctx, 31, 0x1C3EE4u);
    ctx->pc = 0x1C3C40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C3C40_0x1c3c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3EE4u; }
    }
    if (ctx->pc != 0x1C3EE4u) { return; }
    ctx->pc = 0x1C3EE4u;
    // 0x1c3ee4: 0x10400036
    ctx->pc = 0x1C3EE4u;
    {
        const bool branch_taken_0x1c3ee4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c3ee4) {
            ctx->pc = 0x1C3FC0u;
            goto label_1c3fc0;
        }
    }
    ctx->pc = 0x1C3EECu;
    // 0x1c3eec: 0xc07165c
    ctx->pc = 0x1C3EECu;
    SET_GPR_U32(ctx, 31, 0x1C3EF4u);
    ctx->pc = 0x1C5970u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5970_0x1c5970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3EF4u; }
    }
    if (ctx->pc != 0x1C3EF4u) { return; }
    ctx->pc = 0x1C3EF4u;
    // 0x1c3ef4: 0xae000030
    ctx->pc = 0x1c3ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1c3ef8: 0x8e020038
    ctx->pc = 0x1c3ef8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1c3efc: 0x1440002e
    ctx->pc = 0x1C3EFCu;
    {
        const bool branch_taken_0x1c3efc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C3F00u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c3efc) {
            ctx->pc = 0x1C3FB8u;
            goto label_1c3fb8;
        }
    }
    ctx->pc = 0x1C3F04u;
    // 0x1c3f04: 0x8e03003c
    ctx->pc = 0x1c3f04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1c3f08: 0x24020002
    ctx->pc = 0x1c3f08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c3f0c: 0x1062001c
    ctx->pc = 0x1C3F0Cu;
    {
        const bool branch_taken_0x1c3f0c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C3F10u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1c3f0c) {
            ctx->pc = 0x1C3F80u;
            goto label_1c3f80;
        }
    }
    ctx->pc = 0x1C3F14u;
    // 0x1c3f14: 0x10620012
    ctx->pc = 0x1C3F14u;
    {
        const bool branch_taken_0x1c3f14 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1c3f14) {
            ctx->pc = 0x1C3F60u;
            goto label_1c3f60;
        }
    }
    ctx->pc = 0x1C3F1Cu;
    // 0x1c3f1c: 0x10600003
    ctx->pc = 0x1C3F1Cu;
    {
        const bool branch_taken_0x1c3f1c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c3f1c) {
            ctx->pc = 0x1C3F2Cu;
            goto label_1c3f2c;
        }
    }
    ctx->pc = 0x1C3F24u;
    // 0x1c3f24: 0x1000001f
    ctx->pc = 0x1C3F24u;
    {
        const bool branch_taken_0x1c3f24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c3f24) {
            ctx->pc = 0x1C3FA4u;
            goto label_1c3fa4;
        }
    }
    ctx->pc = 0x1C3F2Cu;
label_1c3f2c:
    // 0x1c3f2c: 0x24030005
    ctx->pc = 0x1c3f2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c3f30: 0x24020014
    ctx->pc = 0x1c3f30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c3f34: 0xa2030002
    ctx->pc = 0x1c3f34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c3f38: 0x200202d
    ctx->pc = 0x1c3f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f3c: 0xc07158c
    ctx->pc = 0x1C3F3Cu;
    SET_GPR_U32(ctx, 31, 0x1C3F44u);
    ctx->pc = 0x1C3F40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    ctx->pc = 0x1C5630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5630_0x1c5630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3F44u; }
    }
    if (ctx->pc != 0x1C3F44u) { return; }
    ctx->pc = 0x1C3F44u;
    // 0x1c3f44: 0xc071504
    ctx->pc = 0x1C3F44u;
    SET_GPR_U32(ctx, 31, 0x1C3F4Cu);
    ctx->pc = 0x1C3F48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C5410u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5410_0x1c5410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3F4Cu; }
    }
    if (ctx->pc != 0x1C3F4Cu) { return; }
    ctx->pc = 0x1C3F4Cu;
    // 0x1c3f4c: 0x8e0500e8
    ctx->pc = 0x1c3f4cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1c3f50: 0xc070274
    ctx->pc = 0x1C3F50u;
    SET_GPR_U32(ctx, 31, 0x1C3F58u);
    ctx->pc = 0x1C3F54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1C09D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C09D0_0x1c09d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3F58u; }
    }
    if (ctx->pc != 0x1C3F58u) { return; }
    ctx->pc = 0x1C3F58u;
    // 0x1c3f58: 0x10000012
    ctx->pc = 0x1C3F58u;
    {
        const bool branch_taken_0x1c3f58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c3f58) {
            ctx->pc = 0x1C3FA4u;
            goto label_1c3fa4;
        }
    }
    ctx->pc = 0x1C3F60u;
label_1c3f60:
    // 0x1c3f60: 0x24030004
    ctx->pc = 0x1c3f60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c3f64: 0x2402000f
    ctx->pc = 0x1c3f64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c3f68: 0xa2030002
    ctx->pc = 0x1c3f68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c3f6c: 0xae02002c
    ctx->pc = 0x1c3f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1c3f70: 0xc070370
    ctx->pc = 0x1C3F70u;
    SET_GPR_U32(ctx, 31, 0x1C3F78u);
    ctx->pc = 0x1C3F74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1C0DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0DC0_0x1c0dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3F78u; }
    }
    if (ctx->pc != 0x1C3F78u) { return; }
    ctx->pc = 0x1C3F78u;
    // 0x1c3f78: 0x1000000a
    ctx->pc = 0x1C3F78u;
    {
        const bool branch_taken_0x1c3f78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c3f78) {
            ctx->pc = 0x1C3FA4u;
            goto label_1c3fa4;
        }
    }
    ctx->pc = 0x1C3F80u;
label_1c3f80:
    // 0x1c3f80: 0x24030005
    ctx->pc = 0x1c3f80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c3f84: 0x24020014
    ctx->pc = 0x1c3f84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c3f88: 0xa2030002
    ctx->pc = 0x1c3f88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c3f8c: 0x200202d
    ctx->pc = 0x1c3f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f90: 0xc071504
    ctx->pc = 0x1C3F90u;
    SET_GPR_U32(ctx, 31, 0x1C3F98u);
    ctx->pc = 0x1C3F94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    ctx->pc = 0x1C5410u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5410_0x1c5410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3F98u; }
    }
    if (ctx->pc != 0x1C3F98u) { return; }
    ctx->pc = 0x1C3F98u;
    // 0x1c3f98: 0x8e0500e8
    ctx->pc = 0x1c3f98u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1c3f9c: 0xc070274
    ctx->pc = 0x1C3F9Cu;
    SET_GPR_U32(ctx, 31, 0x1C3FA4u);
    ctx->pc = 0x1C3FA0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1C09D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C09D0_0x1c09d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3FA4u; }
    }
    if (ctx->pc != 0x1C3FA4u) { return; }
    ctx->pc = 0x1C3FA4u;
label_1c3fa4:
    // 0x1c3fa4: 0x3c010029
    ctx->pc = 0x1c3fa4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x1c3fa8: 0x8c224170
    ctx->pc = 0x1c3fa8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 16752)));
    // 0x1c3fac: 0xae020014
    ctx->pc = 0x1c3facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1c3fb0: 0x100000ed
    ctx->pc = 0x1C3FB0u;
    {
        const bool branch_taken_0x1c3fb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3FB4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x1c3fb0) {
            ctx->pc = 0x1C4368u;
            goto label_1c4368;
        }
    }
    ctx->pc = 0x1C3FB8u;
label_1c3fb8:
    // 0x1c3fb8: 0x100000f2
    ctx->pc = 0x1C3FB8u;
    {
        const bool branch_taken_0x1c3fb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3FBCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1c3fb8) {
            ctx->pc = 0x1C4384u;
            goto label_1c4384;
        }
    }
    ctx->pc = 0x1C3FC0u;
label_1c3fc0:
    // 0x1c3fc0: 0x8e020010
    ctx->pc = 0x1c3fc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c3fc4: 0x10400004
    ctx->pc = 0x1C3FC4u;
    {
        const bool branch_taken_0x1c3fc4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c3fc4) {
            ctx->pc = 0x1C3FD8u;
            goto label_1c3fd8;
        }
    }
    ctx->pc = 0x1C3FCCu;
    // 0x1c3fcc: 0x2442ffff
    ctx->pc = 0x1c3fccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c3fd0: 0x100000e5
    ctx->pc = 0x1C3FD0u;
    {
        const bool branch_taken_0x1c3fd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3FD4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x1c3fd0) {
            ctx->pc = 0x1C4368u;
            goto label_1c4368;
        }
    }
    ctx->pc = 0x1C3FD8u;
label_1c3fd8:
    // 0x1c3fd8: 0x9603000a
    ctx->pc = 0x1c3fd8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1c3fdc: 0x30620008
    ctx->pc = 0x1c3fdcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 8));
    // 0x1c3fe0: 0x10400005
    ctx->pc = 0x1C3FE0u;
    {
        const bool branch_taken_0x1c3fe0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3FE4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x1c3fe0) {
            ctx->pc = 0x1C3FF8u;
            goto label_1c3ff8;
        }
    }
    ctx->pc = 0x1C3FE8u;
    // 0x1c3fe8: 0x8e020038
    ctx->pc = 0x1c3fe8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1c3fec: 0x10400008
    ctx->pc = 0x1C3FECu;
    {
        const bool branch_taken_0x1c3fec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c3fec) {
            ctx->pc = 0x1C4010u;
            goto label_1c4010;
        }
    }
    ctx->pc = 0x1C3FF4u;
    // 0x1c3ff4: 0x30620004
    ctx->pc = 0x1c3ff4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 4));
label_1c3ff8:
    // 0x1c3ff8: 0x104000db
    ctx->pc = 0x1C3FF8u;
    {
        const bool branch_taken_0x1c3ff8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c3ff8) {
            ctx->pc = 0x1C4368u;
            goto label_1c4368;
        }
    }
    ctx->pc = 0x1C4000u;
    // 0x1c4000: 0x8e030038
    ctx->pc = 0x1c4000u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1c4004: 0x24020001
    ctx->pc = 0x1c4004u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4008: 0x146200d7
    ctx->pc = 0x1C4008u;
    {
        const bool branch_taken_0x1c4008 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1c4008) {
            ctx->pc = 0x1C4368u;
            goto label_1c4368;
        }
    }
    ctx->pc = 0x1C4010u;
label_1c4010:
    // 0x1c4010: 0xc071660
    ctx->pc = 0x1C4010u;
    SET_GPR_U32(ctx, 31, 0x1C4018u);
    ctx->pc = 0x1C5980u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5980_0x1c5980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4018u; }
    }
    if (ctx->pc != 0x1C4018u) { return; }
    ctx->pc = 0x1C4018u;
    // 0x1c4018: 0x8e030038
    ctx->pc = 0x1c4018u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1c401c: 0x24020005
    ctx->pc = 0x1c401cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c4020: 0x38630001
    ctx->pc = 0x1c4020u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 1));
    // 0x1c4024: 0xae030038
    ctx->pc = 0x1c4024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x1c4028: 0x100000cf
    ctx->pc = 0x1C4028u;
    {
        const bool branch_taken_0x1c4028 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C402Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x1c4028) {
            ctx->pc = 0x1C4368u;
            goto label_1c4368;
        }
    }
    ctx->pc = 0x1C4030u;
label_1c4030:
    // 0x1c4030: 0xc070498
    ctx->pc = 0x1C4030u;
    SET_GPR_U32(ctx, 31, 0x1C4038u);
    ctx->pc = 0x1C1260u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1260_0x1c1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4038u; }
    }
    if (ctx->pc != 0x1C4038u) { return; }
    ctx->pc = 0x1C4038u;
    // 0x1c4038: 0x2403ffff
    ctx->pc = 0x1c4038u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c403c: 0x10430063
    ctx->pc = 0x1C403Cu;
    {
        const bool branch_taken_0x1c403c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c403c) {
            ctx->pc = 0x1C41CCu;
            goto label_1c41cc;
        }
    }
    ctx->pc = 0x1C4044u;
    // 0x1c4044: 0x1040002a
    ctx->pc = 0x1C4044u;
    {
        const bool branch_taken_0x1c4044 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C4048u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967042));
        if (branch_taken_0x1c4044) {
            ctx->pc = 0x1C40F0u;
            goto label_1c40f0;
        }
    }
    ctx->pc = 0x1C404Cu;
    // 0x1c404c: 0x1043001a
    ctx->pc = 0x1C404Cu;
    {
        const bool branch_taken_0x1c404c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c404c) {
            ctx->pc = 0x1C40B8u;
            goto label_1c40b8;
        }
    }
    ctx->pc = 0x1C4054u;
    // 0x1c4054: 0x2403ff00
    ctx->pc = 0x1c4054u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1c4058: 0x10430010
    ctx->pc = 0x1C4058u;
    {
        const bool branch_taken_0x1c4058 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C405Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967043));
        if (branch_taken_0x1c4058) {
            ctx->pc = 0x1C409Cu;
            goto label_1c409c;
        }
    }
    ctx->pc = 0x1C4060u;
    // 0x1c4060: 0x10430003
    ctx->pc = 0x1C4060u;
    {
        const bool branch_taken_0x1c4060 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c4060) {
            ctx->pc = 0x1C4070u;
            goto label_1c4070;
        }
    }
    ctx->pc = 0x1C4068u;
    // 0x1c4068: 0x1000003d
    ctx->pc = 0x1C4068u;
    {
        const bool branch_taken_0x1c4068 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c4068) {
            ctx->pc = 0x1C4160u;
            goto label_1c4160;
        }
    }
    ctx->pc = 0x1C4070u;
label_1c4070:
    // 0x1c4070: 0x24030005
    ctx->pc = 0x1c4070u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c4074: 0x24020014
    ctx->pc = 0x1c4074u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c4078: 0xa2030002
    ctx->pc = 0x1c4078u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c407c: 0x200202d
    ctx->pc = 0x1c407cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4080: 0xc071504
    ctx->pc = 0x1C4080u;
    SET_GPR_U32(ctx, 31, 0x1C4088u);
    ctx->pc = 0x1C4084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    ctx->pc = 0x1C5410u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5410_0x1c5410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4088u; }
    }
    if (ctx->pc != 0x1C4088u) { return; }
    ctx->pc = 0x1C4088u;
    // 0x1c4088: 0x8e0500e8
    ctx->pc = 0x1c4088u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1c408c: 0xc070274
    ctx->pc = 0x1C408Cu;
    SET_GPR_U32(ctx, 31, 0x1C4094u);
    ctx->pc = 0x1C4090u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1C09D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C09D0_0x1c09d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4094u; }
    }
    if (ctx->pc != 0x1C4094u) { return; }
    ctx->pc = 0x1C4094u;
    // 0x1c4094: 0x1000004d
    ctx->pc = 0x1C4094u;
    {
        const bool branch_taken_0x1c4094 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c4094) {
            ctx->pc = 0x1C41CCu;
            goto label_1c41cc;
        }
    }
    ctx->pc = 0x1C409Cu;
label_1c409c:
    // 0x1c409c: 0x24020016
    ctx->pc = 0x1c409cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 22));
    // 0x1c40a0: 0x24030006
    ctx->pc = 0x1c40a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c40a4: 0xae02002c
    ctx->pc = 0x1c40a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1c40a8: 0x24020001
    ctx->pc = 0x1c40a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c40ac: 0xa2030002
    ctx->pc = 0x1c40acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c40b0: 0x10000046
    ctx->pc = 0x1C40B0u;
    {
        const bool branch_taken_0x1c40b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C40B4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        if (branch_taken_0x1c40b0) {
            ctx->pc = 0x1C41CCu;
            goto label_1c41cc;
        }
    }
    ctx->pc = 0x1C40B8u;
label_1c40b8:
    // 0x1c40b8: 0x2403000e
    ctx->pc = 0x1c40b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c40bc: 0x24020002
    ctx->pc = 0x1c40bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c40c0: 0xae03002c
    ctx->pc = 0x1c40c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x1c40c4: 0xa2020002
    ctx->pc = 0x1c40c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c40c8: 0x24030001
    ctx->pc = 0x1c40c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c40cc: 0xa2030003
    ctx->pc = 0x1c40ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c40d0: 0x24020005
    ctx->pc = 0x1c40d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c40d4: 0xae03003c
    ctx->pc = 0x1c40d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x1c40d8: 0xae030030
    ctx->pc = 0x1c40d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x1c40dc: 0xae030038
    ctx->pc = 0x1c40dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x1c40e0: 0xc070114
    ctx->pc = 0x1C40E0u;
    SET_GPR_U32(ctx, 31, 0x1C40E8u);
    ctx->pc = 0x1C40E4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x1C0450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0450_0x1c0450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C40E8u; }
    }
    if (ctx->pc != 0x1C40E8u) { return; }
    ctx->pc = 0x1C40E8u;
    // 0x1c40e8: 0x10000038
    ctx->pc = 0x1C40E8u;
    {
        const bool branch_taken_0x1c40e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C40ECu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
        if (branch_taken_0x1c40e8) {
            ctx->pc = 0x1C41CCu;
            goto label_1c41cc;
        }
    }
    ctx->pc = 0x1C40F0u;
label_1c40f0:
    // 0x1c40f0: 0x8e030020
    ctx->pc = 0x1c40f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c40f4: 0x24020003
    ctx->pc = 0x1c40f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c40f8: 0x1462000c
    ctx->pc = 0x1C40F8u;
    {
        const bool branch_taken_0x1c40f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1C40FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 19));
        if (branch_taken_0x1c40f8) {
            ctx->pc = 0x1C412Cu;
            goto label_1c412c;
        }
    }
    ctx->pc = 0x1C4100u;
    // 0x1c4100: 0x24030005
    ctx->pc = 0x1c4100u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c4104: 0x24020014
    ctx->pc = 0x1c4104u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c4108: 0xa2030002
    ctx->pc = 0x1c4108u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c410c: 0x200202d
    ctx->pc = 0x1c410cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4110: 0xc071504
    ctx->pc = 0x1C4110u;
    SET_GPR_U32(ctx, 31, 0x1C4118u);
    ctx->pc = 0x1C4114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    ctx->pc = 0x1C5410u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5410_0x1c5410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4118u; }
    }
    if (ctx->pc != 0x1C4118u) { return; }
    ctx->pc = 0x1C4118u;
    // 0x1c4118: 0x8e0500e8
    ctx->pc = 0x1c4118u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1c411c: 0xc070274
    ctx->pc = 0x1C411Cu;
    SET_GPR_U32(ctx, 31, 0x1C4124u);
    ctx->pc = 0x1C4120u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1C09D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C09D0_0x1c09d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4124u; }
    }
    if (ctx->pc != 0x1C4124u) { return; }
    ctx->pc = 0x1C4124u;
    // 0x1c4124: 0x10000029
    ctx->pc = 0x1C4124u;
    {
        const bool branch_taken_0x1c4124 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c4124) {
            ctx->pc = 0x1C41CCu;
            goto label_1c41cc;
        }
    }
    ctx->pc = 0x1C412Cu;
label_1c412c:
    // 0x1c412c: 0x24040002
    ctx->pc = 0x1c412cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c4130: 0xae02002c
    ctx->pc = 0x1c4130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1c4134: 0x24030001
    ctx->pc = 0x1c4134u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4138: 0xa2040002
    ctx->pc = 0x1c4138u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c413c: 0x24020005
    ctx->pc = 0x1c413cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c4140: 0xa2030003
    ctx->pc = 0x1c4140u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c4144: 0xae04003c
    ctx->pc = 0x1c4144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 4));
    // 0x1c4148: 0xae030030
    ctx->pc = 0x1c4148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x1c414c: 0xae030038
    ctx->pc = 0x1c414cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x1c4150: 0xc070114
    ctx->pc = 0x1C4150u;
    SET_GPR_U32(ctx, 31, 0x1C4158u);
    ctx->pc = 0x1C4154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x1C0450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0450_0x1c0450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4158u; }
    }
    if (ctx->pc != 0x1C4158u) { return; }
    ctx->pc = 0x1C4158u;
    // 0x1c4158: 0x1000001c
    ctx->pc = 0x1C4158u;
    {
        const bool branch_taken_0x1c4158 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C415Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
        if (branch_taken_0x1c4158) {
            ctx->pc = 0x1C41CCu;
            goto label_1c41cc;
        }
    }
    ctx->pc = 0x1C4160u;
label_1c4160:
    // 0x1c4160: 0x304300ff
    ctx->pc = 0x1c4160u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
label_1c4164:
    // 0x1c4164: 0x24020063
    ctx->pc = 0x1c4164u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 99));
    // 0x1c4168: 0xa2020002
    ctx->pc = 0x1c4168u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c416c: 0xae030034
    ctx->pc = 0x1c416cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x1c4170: 0x24020004
    ctx->pc = 0x1c4170u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c4174: 0x8e030034
    ctx->pc = 0x1c4174u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1c4178: 0x10620012
    ctx->pc = 0x1C4178u;
    {
        const bool branch_taken_0x1c4178 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1c4178) {
            ctx->pc = 0x1C41C4u;
            goto label_1c41c4;
        }
    }
    ctx->pc = 0x1C4180u;
    // 0x1c4180: 0x24020003
    ctx->pc = 0x1c4180u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c4184: 0x1062000d
    ctx->pc = 0x1C4184u;
    {
        const bool branch_taken_0x1c4184 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C4188u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x1c4184) {
            ctx->pc = 0x1C41BCu;
            goto label_1c41bc;
        }
    }
    ctx->pc = 0x1C418Cu;
    // 0x1c418c: 0x24020002
    ctx->pc = 0x1c418cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c4190: 0x10620008
    ctx->pc = 0x1C4190u;
    {
        const bool branch_taken_0x1c4190 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C4194u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x1c4190) {
            ctx->pc = 0x1C41B4u;
            goto label_1c41b4;
        }
    }
    ctx->pc = 0x1C4198u;
    // 0x1c4198: 0x24020001
    ctx->pc = 0x1c4198u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c419c: 0x10620003
    ctx->pc = 0x1C419Cu;
    {
        const bool branch_taken_0x1c419c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C41A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x1c419c) {
            ctx->pc = 0x1C41ACu;
            goto label_1c41ac;
        }
    }
    ctx->pc = 0x1C41A4u;
    // 0x1c41a4: 0x10000009
    ctx->pc = 0x1C41A4u;
    {
        const bool branch_taken_0x1c41a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c41a4) {
            ctx->pc = 0x1C41CCu;
            goto label_1c41cc;
        }
    }
    ctx->pc = 0x1C41ACu;
label_1c41ac:
    // 0x1c41ac: 0x10000007
    ctx->pc = 0x1C41ACu;
    {
        const bool branch_taken_0x1c41ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C41B0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x1c41ac) {
            ctx->pc = 0x1C41CCu;
            goto label_1c41cc;
        }
    }
    ctx->pc = 0x1C41B4u;
label_1c41b4:
    // 0x1c41b4: 0x10000005
    ctx->pc = 0x1C41B4u;
    {
        const bool branch_taken_0x1c41b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C41B8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x1c41b4) {
            ctx->pc = 0x1C41CCu;
            goto label_1c41cc;
        }
    }
    ctx->pc = 0x1C41BCu;
label_1c41bc:
    // 0x1c41bc: 0x10000003
    ctx->pc = 0x1C41BCu;
    {
        const bool branch_taken_0x1c41bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C41C0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x1c41bc) {
            ctx->pc = 0x1C41CCu;
            goto label_1c41cc;
        }
    }
    ctx->pc = 0x1C41C4u;
label_1c41c4:
    // 0x1c41c4: 0x24020017
    ctx->pc = 0x1c41c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 23));
    // 0x1c41c8: 0xae02002c
    ctx->pc = 0x1c41c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_1c41cc:
    // 0x1c41cc: 0x3c010029
    ctx->pc = 0x1c41ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x1c41d0: 0x8c224170
    ctx->pc = 0x1c41d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 16752)));
    // 0x1c41d4: 0x10000064
    ctx->pc = 0x1C41D4u;
    {
        const bool branch_taken_0x1c41d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C41D8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x1c41d4) {
            ctx->pc = 0x1C4368u;
            goto label_1c4368;
        }
    }
    ctx->pc = 0x1C41DCu;
label_1c41dc:
    // 0x1c41dc: 0xc070498
    ctx->pc = 0x1C41DCu;
    SET_GPR_U32(ctx, 31, 0x1C41E4u);
    ctx->pc = 0x1C1260u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1260_0x1c1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C41E4u; }
    }
    if (ctx->pc != 0x1C41E4u) { return; }
    ctx->pc = 0x1C41E4u;
    // 0x1c41e4: 0x2403ffff
    ctx->pc = 0x1c41e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c41e8: 0x1043001e
    ctx->pc = 0x1C41E8u;
    {
        const bool branch_taken_0x1c41e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c41e8) {
            ctx->pc = 0x1C4264u;
            goto label_1c4264;
        }
    }
    ctx->pc = 0x1C41F0u;
    // 0x1c41f0: 0x2403ff00
    ctx->pc = 0x1c41f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1c41f4: 0x10430011
    ctx->pc = 0x1C41F4u;
    {
        const bool branch_taken_0x1c41f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c41f4) {
            ctx->pc = 0x1C423Cu;
            goto label_1c423c;
        }
    }
    ctx->pc = 0x1C41FCu;
    // 0x1c41fc: 0x10400003
    ctx->pc = 0x1C41FCu;
    {
        const bool branch_taken_0x1c41fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C4200u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x1c41fc) {
            ctx->pc = 0x1C420Cu;
            goto label_1c420c;
        }
    }
    ctx->pc = 0x1C4204u;
    // 0x1c4204: 0x10000014
    ctx->pc = 0x1C4204u;
    {
        const bool branch_taken_0x1c4204 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C4208u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 99));
        if (branch_taken_0x1c4204) {
            ctx->pc = 0x1C4258u;
            goto label_1c4258;
        }
    }
    ctx->pc = 0x1C420Cu;
label_1c420c:
    // 0x1c420c: 0x24020014
    ctx->pc = 0x1c420cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c4210: 0xa2030002
    ctx->pc = 0x1c4210u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c4214: 0x200202d
    ctx->pc = 0x1c4214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4218: 0xc07158c
    ctx->pc = 0x1C4218u;
    SET_GPR_U32(ctx, 31, 0x1C4220u);
    ctx->pc = 0x1C421Cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    ctx->pc = 0x1C5630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5630_0x1c5630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4220u; }
    }
    if (ctx->pc != 0x1C4220u) { return; }
    ctx->pc = 0x1C4220u;
    // 0x1c4220: 0xc071504
    ctx->pc = 0x1C4220u;
    SET_GPR_U32(ctx, 31, 0x1C4228u);
    ctx->pc = 0x1C4224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C5410u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5410_0x1c5410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4228u; }
    }
    if (ctx->pc != 0x1C4228u) { return; }
    ctx->pc = 0x1C4228u;
    // 0x1c4228: 0x8e0500e8
    ctx->pc = 0x1c4228u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1c422c: 0xc070274
    ctx->pc = 0x1C422Cu;
    SET_GPR_U32(ctx, 31, 0x1C4234u);
    ctx->pc = 0x1C4230u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1C09D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C09D0_0x1c09d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4234u; }
    }
    if (ctx->pc != 0x1C4234u) { return; }
    ctx->pc = 0x1C4234u;
    // 0x1c4234: 0x1000000b
    ctx->pc = 0x1C4234u;
    {
        const bool branch_taken_0x1c4234 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c4234) {
            ctx->pc = 0x1C4264u;
            goto label_1c4264;
        }
    }
    ctx->pc = 0x1C423Cu;
label_1c423c:
    // 0x1c423c: 0x24020010
    ctx->pc = 0x1c423cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c4240: 0x24030006
    ctx->pc = 0x1c4240u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c4244: 0xae02002c
    ctx->pc = 0x1c4244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1c4248: 0x24020001
    ctx->pc = 0x1c4248u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c424c: 0xa2030002
    ctx->pc = 0x1c424cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c4250: 0x10000004
    ctx->pc = 0x1C4250u;
    {
        const bool branch_taken_0x1c4250 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C4254u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        if (branch_taken_0x1c4250) {
            ctx->pc = 0x1C4264u;
            goto label_1c4264;
        }
    }
    ctx->pc = 0x1C4258u;
label_1c4258:
    // 0x1c4258: 0x304200ff
    ctx->pc = 0x1c4258u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1c425c: 0xa2030002
    ctx->pc = 0x1c425cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c4260: 0xae020034
    ctx->pc = 0x1c4260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_1c4264:
    // 0x1c4264: 0x3c010029
    ctx->pc = 0x1c4264u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x1c4268: 0x8c224170
    ctx->pc = 0x1c4268u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 16752)));
    // 0x1c426c: 0x1000003e
    ctx->pc = 0x1C426Cu;
    {
        const bool branch_taken_0x1c426c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C4270u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x1c426c) {
            ctx->pc = 0x1C4368u;
            goto label_1c4368;
        }
    }
    ctx->pc = 0x1C4274u;
label_1c4274:
    // 0x1c4274: 0xc070498
    ctx->pc = 0x1C4274u;
    SET_GPR_U32(ctx, 31, 0x1C427Cu);
    ctx->pc = 0x1C1260u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1260_0x1c1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C427Cu; }
    }
    if (ctx->pc != 0x1C427Cu) { return; }
    ctx->pc = 0x1C427Cu;
    // 0x1c427c: 0x2403ffff
    ctx->pc = 0x1c427cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c4280: 0x10430025
    ctx->pc = 0x1C4280u;
    {
        const bool branch_taken_0x1c4280 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c4280) {
            ctx->pc = 0x1C4318u;
            goto label_1c4318;
        }
    }
    ctx->pc = 0x1C4288u;
    // 0x1c4288: 0x2403ff02
    ctx->pc = 0x1c4288u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967042));
    // 0x1c428c: 0x10430019
    ctx->pc = 0x1C428Cu;
    {
        const bool branch_taken_0x1c428c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C4290u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 14));
        if (branch_taken_0x1c428c) {
            ctx->pc = 0x1C42F4u;
            goto label_1c42f4;
        }
    }
    ctx->pc = 0x1C4294u;
    // 0x1c4294: 0x2403ff00
    ctx->pc = 0x1c4294u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1c4298: 0x1043000f
    ctx->pc = 0x1C4298u;
    {
        const bool branch_taken_0x1c4298 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C429Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 22));
        if (branch_taken_0x1c4298) {
            ctx->pc = 0x1C42D8u;
            goto label_1c42d8;
        }
    }
    ctx->pc = 0x1C42A0u;
    // 0x1c42a0: 0x10400003
    ctx->pc = 0x1C42A0u;
    {
        const bool branch_taken_0x1c42a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c42a0) {
            ctx->pc = 0x1C42B0u;
            goto label_1c42b0;
        }
    }
    ctx->pc = 0x1C42A8u;
    // 0x1c42a8: 0x1000ffad
    ctx->pc = 0x1C42A8u;
    {
        const bool branch_taken_0x1c42a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c42a8) {
            ctx->pc = 0x1C4160u;
            goto label_1c4160;
        }
    }
    ctx->pc = 0x1C42B0u;
label_1c42b0:
    // 0x1c42b0: 0x24020015
    ctx->pc = 0x1c42b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 21));
    // 0x1c42b4: 0xae02002c
    ctx->pc = 0x1c42b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1c42b8: 0x82020002
    ctx->pc = 0x1c42b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1c42bc: 0x24420001
    ctx->pc = 0x1c42bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c42c0: 0xa2020002
    ctx->pc = 0x1c42c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c42c4: 0xc0704a4
    ctx->pc = 0x1C42C4u;
    SET_GPR_U32(ctx, 31, 0x1C42CCu);
    ctx->pc = 0x1C42C8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    ctx->pc = 0x1C1290u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1290_0x1c1290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C42CCu; }
    }
    if (ctx->pc != 0x1C42CCu) { return; }
    ctx->pc = 0x1C42CCu;
    // 0x1c42cc: 0x3c010032
    ctx->pc = 0x1c42ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c42d0: 0x10000011
    ctx->pc = 0x1C42D0u;
    {
        const bool branch_taken_0x1c42d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C42D4u;
        WRITE8(ADD32(GPR_U32(ctx, 1), 17548), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1c42d0) {
            ctx->pc = 0x1C4318u;
            goto label_1c4318;
        }
    }
    ctx->pc = 0x1C42D8u;
label_1c42d8:
    // 0x1c42d8: 0x24020001
    ctx->pc = 0x1c42d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c42dc: 0xae03002c
    ctx->pc = 0x1c42dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x1c42e0: 0x82030002
    ctx->pc = 0x1c42e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1c42e4: 0x24630001
    ctx->pc = 0x1c42e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c42e8: 0xa2030002
    ctx->pc = 0x1c42e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c42ec: 0x1000000a
    ctx->pc = 0x1C42ECu;
    {
        const bool branch_taken_0x1c42ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C42F0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        if (branch_taken_0x1c42ec) {
            ctx->pc = 0x1C4318u;
            goto label_1c4318;
        }
    }
    ctx->pc = 0x1C42F4u;
label_1c42f4:
    // 0x1c42f4: 0x24020002
    ctx->pc = 0x1c42f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c42f8: 0xae03002c
    ctx->pc = 0x1c42f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x1c42fc: 0xa2020002
    ctx->pc = 0x1c42fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c4300: 0x24030001
    ctx->pc = 0x1c4300u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4304: 0xae03003c
    ctx->pc = 0x1c4304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x1c4308: 0x24020005
    ctx->pc = 0x1c4308u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c430c: 0xae030030
    ctx->pc = 0x1c430cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x1c4310: 0xae030038
    ctx->pc = 0x1c4310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x1c4314: 0xae020010
    ctx->pc = 0x1c4314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1c4318:
    // 0x1c4318: 0x3c010029
    ctx->pc = 0x1c4318u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x1c431c: 0x8c224170
    ctx->pc = 0x1c431cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 16752)));
    // 0x1c4320: 0x10000011
    ctx->pc = 0x1C4320u;
    {
        const bool branch_taken_0x1c4320 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C4324u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x1c4320) {
            ctx->pc = 0x1C4368u;
            goto label_1c4368;
        }
    }
    ctx->pc = 0x1C4328u;
label_1c4328:
    // 0x1c4328: 0x9602000a
    ctx->pc = 0x1c4328u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1c432c: 0x3042fff0
    ctx->pc = 0x1c432cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65520));
    // 0x1c4330: 0x1040000d
    ctx->pc = 0x1C4330u;
    {
        const bool branch_taken_0x1c4330 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c4330) {
            ctx->pc = 0x1C4368u;
            goto label_1c4368;
        }
    }
    ctx->pc = 0x1C4338u;
    // 0x1c4338: 0xc07165c
    ctx->pc = 0x1C4338u;
    SET_GPR_U32(ctx, 31, 0x1C4340u);
    ctx->pc = 0x1C5970u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5970_0x1c5970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4340u; }
    }
    if (ctx->pc != 0x1C4340u) { return; }
    ctx->pc = 0x1C4340u;
    // 0x1c4340: 0x1000000f
    ctx->pc = 0x1C4340u;
    {
        const bool branch_taken_0x1c4340 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C4344u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c4340) {
            ctx->pc = 0x1C4380u;
            goto label_1c4380;
        }
    }
    ctx->pc = 0x1C4348u;
label_1c4348:
    // 0x1c4348: 0x9602000a
    ctx->pc = 0x1c4348u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1c434c: 0x3042fff0
    ctx->pc = 0x1c434cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65520));
    // 0x1c4350: 0x10400005
    ctx->pc = 0x1C4350u;
    {
        const bool branch_taken_0x1c4350 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c4350) {
            ctx->pc = 0x1C4368u;
            goto label_1c4368;
        }
    }
    ctx->pc = 0x1C4358u;
    // 0x1c4358: 0xc07165c
    ctx->pc = 0x1C4358u;
    SET_GPR_U32(ctx, 31, 0x1C4360u);
    ctx->pc = 0x1C5970u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5970_0x1c5970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4360u; }
    }
    if (ctx->pc != 0x1C4360u) { return; }
    ctx->pc = 0x1C4360u;
    // 0x1c4360: 0x10000007
    ctx->pc = 0x1C4360u;
    {
        const bool branch_taken_0x1c4360 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C4364u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c4360) {
            ctx->pc = 0x1C4380u;
            goto label_1c4380;
        }
    }
    ctx->pc = 0x1C4368u;
label_1c4368:
    // 0x1c4368: 0x200202d
    ctx->pc = 0x1c4368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c436c:
    // 0x1c436c: 0xc0713c4
    ctx->pc = 0x1C436Cu;
    SET_GPR_U32(ctx, 31, 0x1C4374u);
    ctx->pc = 0x1C4F10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4F10_0x1c4f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4374u; }
    }
    if (ctx->pc != 0x1C4374u) { return; }
    ctx->pc = 0x1C4374u;
    // 0x1c4374: 0xc07146c
    ctx->pc = 0x1C4374u;
    SET_GPR_U32(ctx, 31, 0x1C437Cu);
    ctx->pc = 0x1C4378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C51B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C51B0_0x1c51b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C437Cu; }
    }
    if (ctx->pc != 0x1C437Cu) { return; }
    ctx->pc = 0x1C437Cu;
    // 0x1c437c: 0x24020001
    ctx->pc = 0x1c437cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1c4380:
    // 0x1c4380: 0xdfbf0010
    ctx->pc = 0x1c4380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c4384:
    // 0x1c4384: 0x7bb00000
    ctx->pc = 0x1c4384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4388: 0x3e00008
    ctx->pc = 0x1C4388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C438Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C3CF4u: goto label_1c3cf4;
            case 0x1C3D0Cu: goto label_1c3d0c;
            case 0x1C3D28u: goto label_1c3d28;
            case 0x1C3D74u: goto label_1c3d74;
            case 0x1C3DACu: goto label_1c3dac;
            case 0x1C3DC8u: goto label_1c3dc8;
            case 0x1C3DFCu: goto label_1c3dfc;
            case 0x1C3E38u: goto label_1c3e38;
            case 0x1C3E6Cu: goto label_1c3e6c;
            case 0x1C3E8Cu: goto label_1c3e8c;
            case 0x1C3EA8u: goto label_1c3ea8;
            case 0x1C3EDCu: goto label_1c3edc;
            case 0x1C3F2Cu: goto label_1c3f2c;
            case 0x1C3F60u: goto label_1c3f60;
            case 0x1C3F80u: goto label_1c3f80;
            case 0x1C3FA4u: goto label_1c3fa4;
            case 0x1C3FB8u: goto label_1c3fb8;
            case 0x1C3FC0u: goto label_1c3fc0;
            case 0x1C3FD8u: goto label_1c3fd8;
            case 0x1C3FF8u: goto label_1c3ff8;
            case 0x1C4010u: goto label_1c4010;
            case 0x1C4030u: goto label_1c4030;
            case 0x1C4070u: goto label_1c4070;
            case 0x1C409Cu: goto label_1c409c;
            case 0x1C40B8u: goto label_1c40b8;
            case 0x1C40F0u: goto label_1c40f0;
            case 0x1C412Cu: goto label_1c412c;
            case 0x1C4160u: goto label_1c4160;
            case 0x1C4164u: goto label_1c4164;
            case 0x1C41ACu: goto label_1c41ac;
            case 0x1C41B4u: goto label_1c41b4;
            case 0x1C41BCu: goto label_1c41bc;
            case 0x1C41C4u: goto label_1c41c4;
            case 0x1C41CCu: goto label_1c41cc;
            case 0x1C41DCu: goto label_1c41dc;
            case 0x1C420Cu: goto label_1c420c;
            case 0x1C423Cu: goto label_1c423c;
            case 0x1C4258u: goto label_1c4258;
            case 0x1C4264u: goto label_1c4264;
            case 0x1C4274u: goto label_1c4274;
            case 0x1C42B0u: goto label_1c42b0;
            case 0x1C42D8u: goto label_1c42d8;
            case 0x1C42F4u: goto label_1c42f4;
            case 0x1C4318u: goto label_1c4318;
            case 0x1C4328u: goto label_1c4328;
            case 0x1C4348u: goto label_1c4348;
            case 0x1C4368u: goto label_1c4368;
            case 0x1C436Cu: goto label_1c436c;
            case 0x1C4380u: goto label_1c4380;
            case 0x1C4384u: goto label_1c4384;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C4390u;
}
