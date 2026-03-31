#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00161D20
// Address: 0x161d20 - 0x162090
void sub_00161D20_0x161d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x161d20u;

    // 0x161d20: 0x27bdfff0
    ctx->pc = 0x161d20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x161d24: 0xffb00000
    ctx->pc = 0x161d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x161d28: 0xffbf0008
    ctx->pc = 0x161d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x161d2c: 0xc05862c
    ctx->pc = 0x161D2Cu;
    SET_GPR_U32(ctx, 31, 0x161D34u);
    ctx->pc = 0x161D30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1618B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001618B0_0x1618b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161D34u; }
    }
    if (ctx->pc != 0x161D34u) { return; }
    ctx->pc = 0x161D34u;
    // 0x161d34: 0x24030001
    ctx->pc = 0x161d34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x161d38: 0x54430003
    ctx->pc = 0x161D38u;
    {
        const bool branch_taken_0x161d38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x161d38) {
            ctx->pc = 0x161D3Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 232)));
            ctx->pc = 0x161D48u;
            goto label_161d48;
        }
    }
    ctx->pc = 0x161D40u;
    // 0x161d40: 0x1000000b
    ctx->pc = 0x161D40u;
    {
        const bool branch_taken_0x161d40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x161D44u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x161d40) {
            ctx->pc = 0x161D70u;
            goto label_161d70;
        }
    }
    ctx->pc = 0x161D48u;
label_161d48:
    // 0x161d48: 0x10600009
    ctx->pc = 0x161D48u;
    {
        const bool branch_taken_0x161d48 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x161D4Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x161d48) {
            ctx->pc = 0x161D70u;
            goto label_161d70;
        }
    }
    ctx->pc = 0x161D50u;
    // 0x161d50: 0x8e040040
    ctx->pc = 0x161d50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x161d54: 0x24050002
    ctx->pc = 0x161d54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x161d58: 0x302d
    ctx->pc = 0x161d58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161d5c: 0xc05e244
    ctx->pc = 0x161D5Cu;
    SET_GPR_U32(ctx, 31, 0x161D64u);
    ctx->pc = 0x161D60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x178910u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00178910_0x178910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161D64u; }
    }
    if (ctx->pc != 0x161D64u) { return; }
    ctx->pc = 0x161D64u;
    // 0x161d64: 0x2403ffff
    ctx->pc = 0x161d64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x161d68: 0x2180a
    ctx->pc = 0x161d68u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 0));
    // 0x161d6c: 0x60102d
    ctx->pc = 0x161d6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_161d70:
    // 0x161d70: 0xdfb00000
    ctx->pc = 0x161d70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161d74: 0xdfbf0008
    ctx->pc = 0x161d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x161d78: 0x3e00008
    ctx->pc = 0x161D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161D7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161D48u: goto label_161d48;
            case 0x161D70u: goto label_161d70;
            case 0x161F90u: goto label_161f90;
            case 0x161FB0u: goto label_161fb0;
            case 0x161FDCu: goto label_161fdc;
            case 0x162030u: goto label_162030;
            case 0x162050u: goto label_162050;
            case 0x16207Cu: goto label_16207c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x161D80u;
    // 0x161d80: 0x27bdfff0
    ctx->pc = 0x161d80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x161d84: 0xffbf0000
    ctx->pc = 0x161d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x161d88: 0x8c8400a8
    ctx->pc = 0x161d88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x161d8c: 0xdfbf0000
    ctx->pc = 0x161d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161d90: 0x805f4f8
    ctx->pc = 0x161D90u;
    ctx->pc = 0x161D94u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17D3E0u;
    entry_17d3e0_0x17d3f8(rdram, ctx, runtime); return;
    ctx->pc = 0x161D98u;
    // 0x161d98: 0x27bdfff0
    ctx->pc = 0x161d98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x161d9c: 0xffbf0000
    ctx->pc = 0x161d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x161da0: 0x8c8400a8
    ctx->pc = 0x161da0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x161da4: 0xdfbf0000
    ctx->pc = 0x161da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161da8: 0x805f4fe
    ctx->pc = 0x161DA8u;
    ctx->pc = 0x161DACu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17D3F8u;
    entry_17d3f8_0x17d410(rdram, ctx, runtime); return;
    ctx->pc = 0x161DB0u;
    // 0x161db0: 0x24840100
    ctx->pc = 0x161db0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 256));
    // 0x161db4: 0x8c820008
    ctx->pc = 0x161db4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x161db8: 0x8c830004
    ctx->pc = 0x161db8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x161dbc: 0xacc20000
    ctx->pc = 0x161dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x161dc0: 0x3e00008
    ctx->pc = 0x161DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161DC4u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161D48u: goto label_161d48;
            case 0x161D70u: goto label_161d70;
            case 0x161F90u: goto label_161f90;
            case 0x161FB0u: goto label_161fb0;
            case 0x161FDCu: goto label_161fdc;
            case 0x162030u: goto label_162030;
            case 0x162050u: goto label_162050;
            case 0x16207Cu: goto label_16207c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x161DC8u;
    // 0x161dc8: 0x27bdffd0
    ctx->pc = 0x161dc8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x161dcc: 0xffb00010
    ctx->pc = 0x161dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x161dd0: 0xa0802d
    ctx->pc = 0x161dd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161dd4: 0xffb10018
    ctx->pc = 0x161dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x161dd8: 0xc0882d
    ctx->pc = 0x161dd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ddc: 0xffbf0020
    ctx->pc = 0x161ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x161de0: 0x3a0282d
    ctx->pc = 0x161de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161de4: 0x27a60004
    ctx->pc = 0x161de4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
    // 0x161de8: 0xc05f4e4
    ctx->pc = 0x161DE8u;
    SET_GPR_U32(ctx, 31, 0x161DF0u);
    ctx->pc = 0x161DECu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 168)));
    ctx->pc = 0x17D390u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D390_0x17d390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161DF0u; }
    }
    if (ctx->pc != 0x161DF0u) { return; }
    ctx->pc = 0x161DF0u;
    // 0x161df0: 0x8fa20000
    ctx->pc = 0x161df0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161df4: 0x8fa30004
    ctx->pc = 0x161df4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x161df8: 0xae020000
    ctx->pc = 0x161df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x161dfc: 0xae230000
    ctx->pc = 0x161dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x161e00: 0xdfb00010
    ctx->pc = 0x161e00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161e04: 0xdfb10018
    ctx->pc = 0x161e04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x161e08: 0xdfbf0020
    ctx->pc = 0x161e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161e0c: 0x3e00008
    ctx->pc = 0x161E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161E10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161D48u: goto label_161d48;
            case 0x161D70u: goto label_161d70;
            case 0x161F90u: goto label_161f90;
            case 0x161FB0u: goto label_161fb0;
            case 0x161FDCu: goto label_161fdc;
            case 0x162030u: goto label_162030;
            case 0x162050u: goto label_162050;
            case 0x16207Cu: goto label_16207c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x161E14u;
    // 0x161e14: 0x0
    ctx->pc = 0x161e14u;
    // NOP
    // 0x161e18: 0x27bdff40
    ctx->pc = 0x161e18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x161e1c: 0xffb00090
    ctx->pc = 0x161e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x161e20: 0x80802d
    ctx->pc = 0x161e20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161e24: 0xffb10098
    ctx->pc = 0x161e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x161e28: 0xffb200a0
    ctx->pc = 0x161e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x161e2c: 0xa0902d
    ctx->pc = 0x161e2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161e30: 0xffb300a8
    ctx->pc = 0x161e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x161e34: 0xc0982d
    ctx->pc = 0x161e34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161e38: 0xffb400b0
    ctx->pc = 0x161e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x161e3c: 0xffbf00b8
    ctx->pc = 0x161e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x161e40: 0xc0582e4
    ctx->pc = 0x161E40u;
    SET_GPR_U32(ctx, 31, 0x161E48u);
    ctx->pc = 0x161E44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B90_0x160b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E48u; }
    }
    if (ctx->pc != 0x161E48u) { return; }
    ctx->pc = 0x161E48u;
    // 0x161e48: 0x3a0302d
    ctx->pc = 0x161e48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161e4c: 0x200202d
    ctx->pc = 0x161e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161e50: 0x240282d
    ctx->pc = 0x161e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161e54: 0xc0582ee
    ctx->pc = 0x161E54u;
    SET_GPR_U32(ctx, 31, 0x161E5Cu);
    ctx->pc = 0x161E58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160BB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160BB8_0x160bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E5Cu; }
    }
    if (ctx->pc != 0x161E5Cu) { return; }
    ctx->pc = 0x161E5Cu;
    // 0x161e5c: 0x220202d
    ctx->pc = 0x161e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161e60: 0x260302d
    ctx->pc = 0x161e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161e64: 0x280382d
    ctx->pc = 0x161e64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161e68: 0xc05f504
    ctx->pc = 0x161E68u;
    SET_GPR_U32(ctx, 31, 0x161E70u);
    ctx->pc = 0x161E6Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17D410u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D410_0x17d410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E70u; }
    }
    if (ctx->pc != 0x161E70u) { return; }
    ctx->pc = 0x161E70u;
    // 0x161e70: 0xdfb00090
    ctx->pc = 0x161e70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x161e74: 0xdfb10098
    ctx->pc = 0x161e74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x161e78: 0xdfb200a0
    ctx->pc = 0x161e78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x161e7c: 0xdfb300a8
    ctx->pc = 0x161e7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x161e80: 0xdfb400b0
    ctx->pc = 0x161e80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x161e84: 0xdfbf00b8
    ctx->pc = 0x161e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x161e88: 0x3e00008
    ctx->pc = 0x161E88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161E8Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161D48u: goto label_161d48;
            case 0x161D70u: goto label_161d70;
            case 0x161F90u: goto label_161f90;
            case 0x161FB0u: goto label_161fb0;
            case 0x161FDCu: goto label_161fdc;
            case 0x162030u: goto label_162030;
            case 0x162050u: goto label_162050;
            case 0x16207Cu: goto label_16207c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x161E90u;
    // 0x161e90: 0x27bdffe0
    ctx->pc = 0x161e90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x161e94: 0xffb00000
    ctx->pc = 0x161e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x161e98: 0xe0802d
    ctx->pc = 0x161e98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161e9c: 0xffb10008
    ctx->pc = 0x161e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x161ea0: 0xa0882d
    ctx->pc = 0x161ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ea4: 0xffb20010
    ctx->pc = 0x161ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x161ea8: 0xffbf0018
    ctx->pc = 0x161ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x161eac: 0xc0582e4
    ctx->pc = 0x161EACu;
    SET_GPR_U32(ctx, 31, 0x161EB4u);
    ctx->pc = 0x161EB0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B90_0x160b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161EB4u; }
    }
    if (ctx->pc != 0x161EB4u) { return; }
    ctx->pc = 0x161EB4u;
    // 0x161eb4: 0x3a100001
    ctx->pc = 0x161eb4u;
    SET_GPR_U32(ctx, 16, XOR32(GPR_U32(ctx, 16), 1));
    // 0x161eb8: 0xdfbf0018
    ctx->pc = 0x161eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x161ebc: 0x220282d
    ctx->pc = 0x161ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ec0: 0xdfb10008
    ctx->pc = 0x161ec0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x161ec4: 0x240302d
    ctx->pc = 0x161ec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ec8: 0xdfb20010
    ctx->pc = 0x161ec8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161ecc: 0x2e070001
    ctx->pc = 0x161eccu;
    SET_GPR_U32(ctx, 7, SLTU32(GPR_U32(ctx, 16), 1));
    // 0x161ed0: 0xdfb00000
    ctx->pc = 0x161ed0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161ed4: 0x40202d
    ctx->pc = 0x161ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ed8: 0x805f50c
    ctx->pc = 0x161ED8u;
    ctx->pc = 0x161EDCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17D430u;
    entry_17d430_0x17d448(rdram, ctx, runtime); return;
    ctx->pc = 0x161EE0u;
    // 0x161ee0: 0x27bdffd0
    ctx->pc = 0x161ee0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x161ee4: 0xffb00010
    ctx->pc = 0x161ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x161ee8: 0xa0802d
    ctx->pc = 0x161ee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161eec: 0xffb10018
    ctx->pc = 0x161eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x161ef0: 0xe0882d
    ctx->pc = 0x161ef0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ef4: 0xffb20020
    ctx->pc = 0x161ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x161ef8: 0xffbf0028
    ctx->pc = 0x161ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x161efc: 0xc0582e4
    ctx->pc = 0x161EFCu;
    SET_GPR_U32(ctx, 31, 0x161F04u);
    ctx->pc = 0x161F00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B90_0x160b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F04u; }
    }
    if (ctx->pc != 0x161F04u) { return; }
    ctx->pc = 0x161F04u;
    // 0x161f04: 0x40202d
    ctx->pc = 0x161f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161f08: 0x3a0282d
    ctx->pc = 0x161f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161f0c: 0x27a60004
    ctx->pc = 0x161f0cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
    // 0x161f10: 0xc05f512
    ctx->pc = 0x161F10u;
    SET_GPR_U32(ctx, 31, 0x161F18u);
    ctx->pc = 0x161F14u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 8));
    ctx->pc = 0x17D448u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D448_0x17d448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F18u; }
    }
    if (ctx->pc != 0x161F18u) { return; }
    ctx->pc = 0x161F18u;
    // 0x161f18: 0x8fa20008
    ctx->pc = 0x161f18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x161f1c: 0x8fa40000
    ctx->pc = 0x161f1cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161f20: 0x38430001
    ctx->pc = 0x161f20u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 2), 1));
    // 0x161f24: 0x8fa50004
    ctx->pc = 0x161f24u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x161f28: 0x3100b
    ctx->pc = 0x161f28u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x161f2c: 0xae040000
    ctx->pc = 0x161f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x161f30: 0xae220000
    ctx->pc = 0x161f30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x161f34: 0xae450000
    ctx->pc = 0x161f34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x161f38: 0xdfb00010
    ctx->pc = 0x161f38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161f3c: 0xdfb10018
    ctx->pc = 0x161f3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x161f40: 0xdfb20020
    ctx->pc = 0x161f40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161f44: 0xdfbf0028
    ctx->pc = 0x161f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x161f48: 0x3e00008
    ctx->pc = 0x161F48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161F4Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161D48u: goto label_161d48;
            case 0x161D70u: goto label_161d70;
            case 0x161F90u: goto label_161f90;
            case 0x161FB0u: goto label_161fb0;
            case 0x161FDCu: goto label_161fdc;
            case 0x162030u: goto label_162030;
            case 0x162050u: goto label_162050;
            case 0x16207Cu: goto label_16207c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x161F50u;
    // 0x161f50: 0x27bdff50
    ctx->pc = 0x161f50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x161f54: 0xffb10098
    ctx->pc = 0x161f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x161f58: 0x80882d
    ctx->pc = 0x161f58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161f5c: 0xffb200a0
    ctx->pc = 0x161f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x161f60: 0xffb00090
    ctx->pc = 0x161f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x161f64: 0xffbf00a8
    ctx->pc = 0x161f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x161f68: 0xc057ff0
    ctx->pc = 0x161F68u;
    SET_GPR_U32(ctx, 31, 0x161F70u);
    ctx->pc = 0x161F6Cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F70u; }
    }
    if (ctx->pc != 0x161F70u) { return; }
    ctx->pc = 0x161F70u;
    // 0x161f70: 0x3c040024
    ctx->pc = 0x161f70u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x161f74: 0x14400006
    ctx->pc = 0x161F74u;
    {
        const bool branch_taken_0x161f74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x161F78u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967048));
        if (branch_taken_0x161f74) {
            ctx->pc = 0x161F90u;
            goto label_161f90;
        }
    }
    ctx->pc = 0x161F7Cu;
    // 0x161f7c: 0xc058dd4
    ctx->pc = 0x161F7Cu;
    SET_GPR_U32(ctx, 31, 0x161F84u);
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F84u; }
    }
    if (ctx->pc != 0x161F84u) { return; }
    ctx->pc = 0x161F84u;
    // 0x161f84: 0x10000015
    ctx->pc = 0x161F84u;
    {
        const bool branch_taken_0x161f84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x161F88u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x161f84) {
            ctx->pc = 0x161FDCu;
            goto label_161fdc;
        }
    }
    ctx->pc = 0x161F8Cu;
    // 0x161f8c: 0x0
    ctx->pc = 0x161f8cu;
    // NOP
label_161f90:
    // 0x161f90: 0x8e420000
    ctx->pc = 0x161f90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x161f94: 0x14400006
    ctx->pc = 0x161F94u;
    {
        const bool branch_taken_0x161f94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x161f94) {
            ctx->pc = 0x161FB0u;
            goto label_161fb0;
        }
    }
    ctx->pc = 0x161F9Cu;
    // 0x161f9c: 0x3c040024
    ctx->pc = 0x161f9cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x161fa0: 0xc058dd4
    ctx->pc = 0x161FA0u;
    SET_GPR_U32(ctx, 31, 0x161FA8u);
    ctx->pc = 0x161FA4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967096));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161FA8u; }
    }
    if (ctx->pc != 0x161FA8u) { return; }
    ctx->pc = 0x161FA8u;
    // 0x161fa8: 0x1000000c
    ctx->pc = 0x161FA8u;
    {
        const bool branch_taken_0x161fa8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x161FACu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x161fa8) {
            ctx->pc = 0x161FDCu;
            goto label_161fdc;
        }
    }
    ctx->pc = 0x161FB0u;
label_161fb0:
    // 0x161fb0: 0xc0582e4
    ctx->pc = 0x161FB0u;
    SET_GPR_U32(ctx, 31, 0x161FB8u);
    ctx->pc = 0x161FB4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B90_0x160b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161FB8u; }
    }
    if (ctx->pc != 0x161FB8u) { return; }
    ctx->pc = 0x161FB8u;
    // 0x161fb8: 0x220202d
    ctx->pc = 0x161fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161fbc: 0x240282d
    ctx->pc = 0x161fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161fc0: 0x3a0302d
    ctx->pc = 0x161fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161fc4: 0xc0582ee
    ctx->pc = 0x161FC4u;
    SET_GPR_U32(ctx, 31, 0x161FCCu);
    ctx->pc = 0x161FC8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160BB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160BB8_0x160bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161FCCu; }
    }
    if (ctx->pc != 0x161FCCu) { return; }
    ctx->pc = 0x161FCCu;
    // 0x161fcc: 0x3a0282d
    ctx->pc = 0x161fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161fd0: 0xc05f250
    ctx->pc = 0x161FD0u;
    SET_GPR_U32(ctx, 31, 0x161FD8u);
    ctx->pc = 0x161FD4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17C940u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C940_0x17c940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161FD8u; }
    }
    if (ctx->pc != 0x161FD8u) { return; }
    ctx->pc = 0x161FD8u;
    // 0x161fd8: 0xdfb00090
    ctx->pc = 0x161fd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_161fdc:
    // 0x161fdc: 0xdfb10098
    ctx->pc = 0x161fdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x161fe0: 0xdfb200a0
    ctx->pc = 0x161fe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x161fe4: 0xdfbf00a8
    ctx->pc = 0x161fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x161fe8: 0x3e00008
    ctx->pc = 0x161FE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161FECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161D48u: goto label_161d48;
            case 0x161D70u: goto label_161d70;
            case 0x161F90u: goto label_161f90;
            case 0x161FB0u: goto label_161fb0;
            case 0x161FDCu: goto label_161fdc;
            case 0x162030u: goto label_162030;
            case 0x162050u: goto label_162050;
            case 0x16207Cu: goto label_16207c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x161FF0u;
    // 0x161ff0: 0x27bdff50
    ctx->pc = 0x161ff0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x161ff4: 0xffb10098
    ctx->pc = 0x161ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x161ff8: 0x80882d
    ctx->pc = 0x161ff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ffc: 0xffb200a0
    ctx->pc = 0x161ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x162000: 0xffb00090
    ctx->pc = 0x162000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x162004: 0xffbf00a8
    ctx->pc = 0x162004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x162008: 0xc057ff0
    ctx->pc = 0x162008u;
    SET_GPR_U32(ctx, 31, 0x162010u);
    ctx->pc = 0x16200Cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162010u; }
    }
    if (ctx->pc != 0x162010u) { return; }
    ctx->pc = 0x162010u;
    // 0x162010: 0x3c040024
    ctx->pc = 0x162010u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x162014: 0x14400006
    ctx->pc = 0x162014u;
    {
        const bool branch_taken_0x162014 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x162018u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967144));
        if (branch_taken_0x162014) {
            ctx->pc = 0x162030u;
            goto label_162030;
        }
    }
    ctx->pc = 0x16201Cu;
    // 0x16201c: 0xc058dd4
    ctx->pc = 0x16201Cu;
    SET_GPR_U32(ctx, 31, 0x162024u);
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162024u; }
    }
    if (ctx->pc != 0x162024u) { return; }
    ctx->pc = 0x162024u;
    // 0x162024: 0x10000015
    ctx->pc = 0x162024u;
    {
        const bool branch_taken_0x162024 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x162028u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x162024) {
            ctx->pc = 0x16207Cu;
            goto label_16207c;
        }
    }
    ctx->pc = 0x16202Cu;
    // 0x16202c: 0x0
    ctx->pc = 0x16202cu;
    // NOP
label_162030:
    // 0x162030: 0x8e420000
    ctx->pc = 0x162030u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x162034: 0x14400006
    ctx->pc = 0x162034u;
    {
        const bool branch_taken_0x162034 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x162034) {
            ctx->pc = 0x162050u;
            goto label_162050;
        }
    }
    ctx->pc = 0x16203Cu;
    // 0x16203c: 0x3c040024
    ctx->pc = 0x16203cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x162040: 0xc058dd4
    ctx->pc = 0x162040u;
    SET_GPR_U32(ctx, 31, 0x162048u);
    ctx->pc = 0x162044u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967192));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162048u; }
    }
    if (ctx->pc != 0x162048u) { return; }
    ctx->pc = 0x162048u;
    // 0x162048: 0x1000000c
    ctx->pc = 0x162048u;
    {
        const bool branch_taken_0x162048 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16204Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x162048) {
            ctx->pc = 0x16207Cu;
            goto label_16207c;
        }
    }
    ctx->pc = 0x162050u;
label_162050:
    // 0x162050: 0xc0582e4
    ctx->pc = 0x162050u;
    SET_GPR_U32(ctx, 31, 0x162058u);
    ctx->pc = 0x162054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B90_0x160b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162058u; }
    }
    if (ctx->pc != 0x162058u) { return; }
    ctx->pc = 0x162058u;
    // 0x162058: 0x220202d
    ctx->pc = 0x162058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16205c: 0x240282d
    ctx->pc = 0x16205cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162060: 0x3a0302d
    ctx->pc = 0x162060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162064: 0xc0582ee
    ctx->pc = 0x162064u;
    SET_GPR_U32(ctx, 31, 0x16206Cu);
    ctx->pc = 0x162068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160BB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160BB8_0x160bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16206Cu; }
    }
    if (ctx->pc != 0x16206Cu) { return; }
    ctx->pc = 0x16206Cu;
    // 0x16206c: 0x3a0282d
    ctx->pc = 0x16206cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162070: 0xc05f26a
    ctx->pc = 0x162070u;
    SET_GPR_U32(ctx, 31, 0x162078u);
    ctx->pc = 0x162074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17C9A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C9A8_0x17c9a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162078u; }
    }
    if (ctx->pc != 0x162078u) { return; }
    ctx->pc = 0x162078u;
    // 0x162078: 0xdfb00090
    ctx->pc = 0x162078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_16207c:
    // 0x16207c: 0xdfb10098
    ctx->pc = 0x16207cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x162080: 0xdfb200a0
    ctx->pc = 0x162080u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x162084: 0xdfbf00a8
    ctx->pc = 0x162084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x162088: 0x3e00008
    ctx->pc = 0x162088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16208Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161D48u: goto label_161d48;
            case 0x161D70u: goto label_161d70;
            case 0x161F90u: goto label_161f90;
            case 0x161FB0u: goto label_161fb0;
            case 0x161FDCu: goto label_161fdc;
            case 0x162030u: goto label_162030;
            case 0x162050u: goto label_162050;
            case 0x16207Cu: goto label_16207c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x162090u;
}
