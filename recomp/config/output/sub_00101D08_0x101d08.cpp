#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00101D08
// Address: 0x101d08 - 0x101e00
void sub_00101D08_0x101d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x101d08u;

    // 0x101d08: 0x27bdffa0
    ctx->pc = 0x101d08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x101d0c: 0xffb20030
    ctx->pc = 0x101d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x101d10: 0x80902d
    ctx->pc = 0x101d10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d14: 0xffbf0050
    ctx->pc = 0x101d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x101d18: 0xffb30040
    ctx->pc = 0x101d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x101d1c: 0x2404000f
    ctx->pc = 0x101d1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 15));
    // 0x101d20: 0xffb10020
    ctx->pc = 0x101d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x101d24: 0xc0403a2
    ctx->pc = 0x101D24u;
    SET_GPR_U32(ctx, 31, 0x101D2Cu);
    ctx->pc = 0x101D28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->pc = 0x100E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00100E88_0x100e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101D2Cu; }
    }
    if (ctx->pc != 0x101D2Cu) { return; }
    ctx->pc = 0x101D2Cu;
    // 0x101d2c: 0x14400003
    ctx->pc = 0x101D2Cu;
    {
        const bool branch_taken_0x101d2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x101D30u;
        SET_GPR_U32(ctx, 19, ((uint32_t)32 << 16));
        if (branch_taken_0x101d2c) {
            ctx->pc = 0x101D3Cu;
            goto label_101d3c;
        }
    }
    ctx->pc = 0x101D34u;
    // 0x101d34: 0x1000002b
    ctx->pc = 0x101D34u;
    {
        const bool branch_taken_0x101d34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x101D38u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x101d34) {
            ctx->pc = 0x101DE4u;
            goto label_101de4;
        }
    }
    ctx->pc = 0x101D3Cu;
label_101d3c:
    // 0x101d3c: 0x8e627910
    ctx->pc = 0x101d3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 30992)));
    // 0x101d40: 0x18400003
    ctx->pc = 0x101D40u;
    {
        const bool branch_taken_0x101d40 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x101D44u;
        SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
        if (branch_taken_0x101d40) {
            ctx->pc = 0x101D50u;
            goto label_101d50;
        }
    }
    ctx->pc = 0x101D48u;
    // 0x101d48: 0xc045a12
    ctx->pc = 0x101D48u;
    SET_GPR_U32(ctx, 31, 0x101D50u);
    ctx->pc = 0x101D4Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 30328));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101D50u; }
    }
    if (ctx->pc != 0x101D50u) { return; }
    ctx->pc = 0x101D50u;
label_101d50:
    // 0x101d50: 0x3c020021
    ctx->pc = 0x101d50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x101d54: 0x3c040021
    ctx->pc = 0x101d54u;
    SET_GPR_U32(ctx, 4, ((uint32_t)33 << 16));
    // 0x101d58: 0x24508b00
    ctx->pc = 0x101d58u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294937344));
    // 0x101d5c: 0x24849480
    ctx->pc = 0x101d5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939776));
    // 0x101d60: 0xafa00000
    ctx->pc = 0x101d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x101d64: 0x24050001
    ctx->pc = 0x101d64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x101d68: 0x302d
    ctx->pc = 0x101d68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d6c: 0x382d
    ctx->pc = 0x101d6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d70: 0x402d
    ctx->pc = 0x101d70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d74: 0x200482d
    ctx->pc = 0x101d74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d78: 0x240a0010
    ctx->pc = 0x101d78u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 16));
    // 0x101d7c: 0xc045e7a
    ctx->pc = 0x101D7Cu;
    SET_GPR_U32(ctx, 31, 0x101D84u);
    ctx->pc = 0x101D80u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101D84u; }
    }
    if (ctx->pc != 0x101D84u) { return; }
    ctx->pc = 0x101D84u;
    // 0x101d84: 0x4430006
    ctx->pc = 0x101D84u;
    {
        const bool branch_taken_0x101d84 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x101d84) {
            ctx->pc = 0x101D88u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4));
            ctx->pc = 0x101DA0u;
            goto label_101da0;
        }
    }
    ctx->pc = 0x101D8Cu;
    // 0x101d8c: 0x3c020020
    ctx->pc = 0x101d8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32 << 16));
    // 0x101d90: 0xc045190
    ctx->pc = 0x101D90u;
    SET_GPR_U32(ctx, 31, 0x101D98u);
    ctx->pc = 0x101D94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 31020)));
    ctx->pc = 0x114640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114640_0x114640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101D98u; }
    }
    if (ctx->pc != 0x101D98u) { return; }
    ctx->pc = 0x101D98u;
    // 0x101d98: 0x10000012
    ctx->pc = 0x101D98u;
    {
        const bool branch_taken_0x101d98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x101D9Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x101d98) {
            ctx->pc = 0x101DE4u;
            goto label_101de4;
        }
    }
    ctx->pc = 0x101DA0u;
label_101da0:
    // 0x101da0: 0x3c112000
    ctx->pc = 0x101da0u;
    SET_GPR_U32(ctx, 17, ((uint32_t)8192 << 16));
    // 0x101da4: 0x511025
    ctx->pc = 0x101da4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x101da8: 0x68430007
    ctx->pc = 0x101da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x101dac: 0x6c430000
    ctx->pc = 0x101dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x101db0: 0xb2430007
    ctx->pc = 0x101db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101db4: 0xb6430000
    ctx->pc = 0x101db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101db8: 0x8e637910
    ctx->pc = 0x101db8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 30992)));
    // 0x101dbc: 0x18600003
    ctx->pc = 0x101DBCu;
    {
        const bool branch_taken_0x101dbc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x101DC0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
        if (branch_taken_0x101dbc) {
            ctx->pc = 0x101DCCu;
            goto label_101dcc;
        }
    }
    ctx->pc = 0x101DC4u;
    // 0x101dc4: 0xc045a12
    ctx->pc = 0x101DC4u;
    SET_GPR_U32(ctx, 31, 0x101DCCu);
    ctx->pc = 0x101DC8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 30360));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101DCCu; }
    }
    if (ctx->pc != 0x101DCCu) { return; }
    ctx->pc = 0x101DCCu;
label_101dcc:
    // 0x101dcc: 0x3c020020
    ctx->pc = 0x101dccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32 << 16));
    // 0x101dd0: 0x2111825
    ctx->pc = 0x101dd0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x101dd4: 0x8c44792c
    ctx->pc = 0x101dd4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 31020)));
    // 0x101dd8: 0xc045190
    ctx->pc = 0x101DD8u;
    SET_GPR_U32(ctx, 31, 0x101DE0u);
    ctx->pc = 0x101DDCu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x114640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114640_0x114640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101DE0u; }
    }
    if (ctx->pc != 0x101DE0u) { return; }
    ctx->pc = 0x101DE0u;
    // 0x101de0: 0x200102d
    ctx->pc = 0x101de0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_101de4:
    // 0x101de4: 0xdfbf0050
    ctx->pc = 0x101de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x101de8: 0xdfb30040
    ctx->pc = 0x101de8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x101dec: 0xdfb20030
    ctx->pc = 0x101decu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101df0: 0xdfb10020
    ctx->pc = 0x101df0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101df4: 0xdfb00010
    ctx->pc = 0x101df4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101df8: 0x3e00008
    ctx->pc = 0x101DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101DFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101D3Cu: goto label_101d3c;
            case 0x101D50u: goto label_101d50;
            case 0x101DA0u: goto label_101da0;
            case 0x101DCCu: goto label_101dcc;
            case 0x101DE4u: goto label_101de4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x101E00u;
}
