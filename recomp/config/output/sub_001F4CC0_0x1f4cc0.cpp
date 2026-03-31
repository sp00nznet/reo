#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F4CC0
// Address: 0x1f4cc0 - 0x1f4fb0
void sub_001F4CC0_0x1f4cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f4cc0u;

label_1f4cc0:
    // 0x1f4cc0: 0x27bdffa0
    ctx->pc = 0x1f4cc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f4cc4: 0xffbf0040
    ctx->pc = 0x1f4cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f4cc8: 0x7fb30030
    ctx->pc = 0x1f4cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f4ccc: 0x7fb20020
    ctx->pc = 0x1f4cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f4cd0: 0x80982d
    ctx->pc = 0x1f4cd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4cd4: 0x7fb10010
    ctx->pc = 0x1f4cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f4cd8: 0xc0902d
    ctx->pc = 0x1f4cd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4cdc: 0x7fb00000
    ctx->pc = 0x1f4cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f4ce0: 0x8c87002c
    ctx->pc = 0x1f4ce0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1f4ce4: 0xa0802d
    ctx->pc = 0x1f4ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4ce8: 0x8c820014
    ctx->pc = 0x1f4ce8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1f4cec: 0x8c850020
    ctx->pc = 0x1f4cecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1f4cf0: 0xe61821
    ctx->pc = 0x1f4cf0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1f4cf4: 0x43082b
    ctx->pc = 0x1f4cf4u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f4cf8: 0x14200020
    ctx->pc = 0x1F4CF8u;
    {
        const bool branch_taken_0x1f4cf8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F4CFCu;
        SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        if (branch_taken_0x1f4cf8) {
            ctx->pc = 0x1F4D7Cu;
            goto label_1f4d7c;
        }
    }
    ctx->pc = 0x1F4D00u;
    // 0x1f4d00: 0x26420002
    ctx->pc = 0x1f4d00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 2));
    // 0x1f4d04: 0xc07d2e4
    ctx->pc = 0x1F4D04u;
    SET_GPR_U32(ctx, 31, 0x1F4D0Cu);
    ctx->pc = 0x1F4D08u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 2), 65535));
    ctx->pc = 0x1F4B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4B90_0x1f4b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4D0Cu; }
    }
    if (ctx->pc != 0x1F4D0Cu) { return; }
    ctx->pc = 0x1F4D0Cu;
    // 0x1f4d0c: 0x260202d
    ctx->pc = 0x1f4d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4d10: 0xc07d2e4
    ctx->pc = 0x1F4D10u;
    SET_GPR_U32(ctx, 31, 0x1F4D18u);
    ctx->pc = 0x1F4D14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4B90_0x1f4b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4D18u; }
    }
    if (ctx->pc != 0x1F4D18u) { return; }
    ctx->pc = 0x1F4D18u;
    // 0x1f4d18: 0x200282d
    ctx->pc = 0x1f4d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4d1c: 0x8e640020
    ctx->pc = 0x1f4d1cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1f4d20: 0x40802d
    ctx->pc = 0x1f4d20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4d24: 0x8e63002c
    ctx->pc = 0x1f4d24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x1f4d28: 0x8e62001c
    ctx->pc = 0x1f4d28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1f4d2c: 0x240382d
    ctx->pc = 0x1f4d2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4d30: 0x96680040
    ctx->pc = 0x1f4d30u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x1f4d34: 0x90460005
    ctx->pc = 0x1f4d34u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x1f4d38: 0xc07d0f0
    ctx->pc = 0x1F4D38u;
    SET_GPR_U32(ctx, 31, 0x1F4D40u);
    ctx->pc = 0x1F4D3Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->pc = 0x1F43C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F43C0_0x1f43c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4D40u; }
    }
    if (ctx->pc != 0x1F4D40u) { return; }
    ctx->pc = 0x1F4D40u;
    // 0x1f4d40: 0xa7a2005e
    ctx->pc = 0x1f4d40u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 94), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f4d44: 0x200202d
    ctx->pc = 0x1f4d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4d48: 0x8e62002c
    ctx->pc = 0x1f4d48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x1f4d4c: 0x27a5005e
    ctx->pc = 0x1f4d4cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 94));
    // 0x1f4d50: 0x24060002
    ctx->pc = 0x1f4d50u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f4d54: 0x521021
    ctx->pc = 0x1f4d54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1f4d58: 0xae62002c
    ctx->pc = 0x1f4d58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
    // 0x1f4d5c: 0x97a2005e
    ctx->pc = 0x1f4d5cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 94)));
    // 0x1f4d60: 0x21a00
    ctx->pc = 0x1f4d60u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
    // 0x1f4d64: 0x21203
    ctx->pc = 0x1f4d64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1f4d68: 0x3063ff00
    ctx->pc = 0x1f4d68u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 65280));
    // 0x1f4d6c: 0x304200ff
    ctx->pc = 0x1f4d6cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1f4d70: 0x621025
    ctx->pc = 0x1f4d70u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f4d74: 0xc041eac
    ctx->pc = 0x1F4D74u;
    SET_GPR_U32(ctx, 31, 0x1F4D7Cu);
    ctx->pc = 0x1F4D78u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 94), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4D7Cu; }
    }
    if (ctx->pc != 0x1F4D7Cu) { return; }
    ctx->pc = 0x1F4D7Cu;
label_1f4d7c:
    // 0x1f4d7c: 0x220102d
    ctx->pc = 0x1f4d7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4d80: 0xdfbf0040
    ctx->pc = 0x1f4d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f4d84: 0x7bb30030
    ctx->pc = 0x1f4d84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f4d88: 0x7bb20020
    ctx->pc = 0x1f4d88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f4d8c: 0x7bb10010
    ctx->pc = 0x1f4d8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4d90: 0x7bb00000
    ctx->pc = 0x1f4d90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4d94: 0x3e00008
    ctx->pc = 0x1F4D94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4D98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F4CC0u: goto label_1f4cc0;
            case 0x1F4D7Cu: goto label_1f4d7c;
            case 0x1F4E7Cu: goto label_1f4e7c;
            case 0x1F4EBCu: goto label_1f4ebc;
            case 0x1F4F54u: goto label_1f4f54;
            case 0x1F4F80u: goto label_1f4f80;
            case 0x1F4F88u: goto label_1f4f88;
            case 0x1F4F8Cu: goto label_1f4f8c;
            case 0x1F4F90u: goto label_1f4f90;
            case 0x1F4F94u: goto label_1f4f94;
            case 0x1F4F98u: goto label_1f4f98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F4D9Cu;
    // 0x1f4d9c: 0x0
    ctx->pc = 0x1f4d9cu;
    // NOP
    // 0x1f4da0: 0x27bdffe0
    ctx->pc = 0x1f4da0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f4da4: 0x2402000e
    ctx->pc = 0x1f4da4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1f4da8: 0xffbf0010
    ctx->pc = 0x1f4da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f4dac: 0x282d
    ctx->pc = 0x1f4dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4db0: 0x7fb00000
    ctx->pc = 0x1f4db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f4db4: 0x24060002
    ctx->pc = 0x1f4db4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f4db8: 0x80802d
    ctx->pc = 0x1f4db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4dbc: 0xac820090
    ctx->pc = 0x1f4dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 2));
    // 0x1f4dc0: 0xc07d284
    ctx->pc = 0x1F4DC0u;
    SET_GPR_U32(ctx, 31, 0x1F4DC8u);
    ctx->pc = 0x1F4DC4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4A10_0x1f4a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4DC8u; }
    }
    if (ctx->pc != 0x1F4DC8u) { return; }
    ctx->pc = 0x1F4DC8u;
    // 0x1f4dc8: 0x9603002c
    ctx->pc = 0x1f4dc8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1f4dcc: 0x8e02001c
    ctx->pc = 0x1f4dccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1f4dd0: 0x32200
    ctx->pc = 0x1f4dd0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 8));
    // 0x1f4dd4: 0x31a03
    ctx->pc = 0x1f4dd4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x1f4dd8: 0x3084ff00
    ctx->pc = 0x1f4dd8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65280));
    // 0x1f4ddc: 0x306300ff
    ctx->pc = 0x1f4ddcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x1f4de0: 0x831825
    ctx->pc = 0x1f4de0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f4de4: 0xa4430000
    ctx->pc = 0x1f4de4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f4de8: 0x8e02002c
    ctx->pc = 0x1f4de8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1f4dec: 0x8e040010
    ctx->pc = 0x1f4decu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1f4df0: 0x8e05001c
    ctx->pc = 0x1f4df0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1f4df4: 0x24420008
    ctx->pc = 0x1f4df4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1f4df8: 0x2343c
    ctx->pc = 0x1f4df8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f4dfc: 0xc075aa4
    ctx->pc = 0x1F4DFCu;
    SET_GPR_U32(ctx, 31, 0x1F4E04u);
    ctx->pc = 0x1F4E00u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    ctx->pc = 0x1D6A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6A90_0x1d6a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4E04u; }
    }
    if (ctx->pc != 0x1F4E04u) { return; }
    ctx->pc = 0x1F4E04u;
    // 0x1f4e04: 0xc07d16c
    ctx->pc = 0x1F4E04u;
    SET_GPR_U32(ctx, 31, 0x1F4E0Cu);
    ctx->pc = 0x1F4E08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F45B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F45B0_0x1f45b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4E0Cu; }
    }
    if (ctx->pc != 0x1F4E0Cu) { return; }
    ctx->pc = 0x1F4E0Cu;
    // 0x1f4e0c: 0x2841ffff
    ctx->pc = 0x1f4e0cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 4294967295));
    // 0x1f4e10: 0x1100a
    ctx->pc = 0x1f4e10u;
    if (GPR_U32(ctx, 1) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x1f4e14: 0xdfbf0010
    ctx->pc = 0x1f4e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4e18: 0x7bb00000
    ctx->pc = 0x1f4e18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4e1c: 0x3e00008
    ctx->pc = 0x1F4E1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4E20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F4CC0u: goto label_1f4cc0;
            case 0x1F4D7Cu: goto label_1f4d7c;
            case 0x1F4E7Cu: goto label_1f4e7c;
            case 0x1F4EBCu: goto label_1f4ebc;
            case 0x1F4F54u: goto label_1f4f54;
            case 0x1F4F80u: goto label_1f4f80;
            case 0x1F4F88u: goto label_1f4f88;
            case 0x1F4F8Cu: goto label_1f4f8c;
            case 0x1F4F90u: goto label_1f4f90;
            case 0x1F4F94u: goto label_1f4f94;
            case 0x1F4F98u: goto label_1f4f98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F4E24u;
    // 0x1f4e24: 0x0
    ctx->pc = 0x1f4e24u;
    // NOP
    // 0x1f4e28: 0x0
    ctx->pc = 0x1f4e28u;
    // NOP
    // 0x1f4e2c: 0x0
    ctx->pc = 0x1f4e2cu;
    // NOP
    // 0x1f4e30: 0x27bdffe0
    ctx->pc = 0x1f4e30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f4e34: 0xffbf0010
    ctx->pc = 0x1f4e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f4e38: 0x7fb00000
    ctx->pc = 0x1f4e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f4e3c: 0xc07d20c
    ctx->pc = 0x1F4E3Cu;
    SET_GPR_U32(ctx, 31, 0x1F4E44u);
    ctx->pc = 0x1F4E40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4830_0x1f4830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4E44u; }
    }
    if (ctx->pc != 0x1F4E44u) { return; }
    ctx->pc = 0x1F4E44u;
    // 0x1f4e44: 0xa6020040
    ctx->pc = 0x1f4e44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 64), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f4e48: 0x200202d
    ctx->pc = 0x1f4e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4e4c: 0x282d
    ctx->pc = 0x1f4e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4e50: 0x24060002
    ctx->pc = 0x1f4e50u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f4e54: 0xc07d284
    ctx->pc = 0x1F4E54u;
    SET_GPR_U32(ctx, 31, 0x1F4E5Cu);
    ctx->pc = 0x1F4E58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4A10_0x1f4a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4E5Cu; }
    }
    if (ctx->pc != 0x1F4E5Cu) { return; }
    ctx->pc = 0x1F4E5Cu;
    // 0x1f4e5c: 0x3c010036
    ctx->pc = 0x1f4e5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f4e60: 0xc042c56
    ctx->pc = 0x1F4E60u;
    SET_GPR_U32(ctx, 31, 0x1F4E68u);
    ctx->pc = 0x1F4E64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294962080)));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4E68u; }
    }
    if (ctx->pc != 0x1F4E68u) { return; }
    ctx->pc = 0x1F4E68u;
    // 0x1f4e68: 0x3c010036
    ctx->pc = 0x1f4e68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f4e6c: 0x40302d
    ctx->pc = 0x1f4e6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4e70: 0x8c25eba0
    ctx->pc = 0x1f4e70u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294962080)));
    // 0x1f4e74: 0xc07d330
    ctx->pc = 0x1F4E74u;
    SET_GPR_U32(ctx, 31, 0x1F4E7Cu);
    ctx->pc = 0x1F4E78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4CC0u;
    goto label_1f4cc0;
    ctx->pc = 0x1F4E7Cu;
label_1f4e7c:
    // 0x1f4e7c: 0x3c010036
    ctx->pc = 0x1f4e7cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f4e80: 0x9025eba4
    ctx->pc = 0x1f4e80u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294962084)));
    // 0x1f4e84: 0xc07d2c8
    ctx->pc = 0x1F4E84u;
    SET_GPR_U32(ctx, 31, 0x1F4E8Cu);
    ctx->pc = 0x1F4E88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4B20_0x1f4b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4E8Cu; }
    }
    if (ctx->pc != 0x1F4E8Cu) { return; }
    ctx->pc = 0x1F4E8Cu;
    // 0x1f4e8c: 0x3c010036
    ctx->pc = 0x1f4e8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f4e90: 0x9025eba5
    ctx->pc = 0x1f4e90u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294962085)));
    // 0x1f4e94: 0xc07d2c8
    ctx->pc = 0x1F4E94u;
    SET_GPR_U32(ctx, 31, 0x1F4E9Cu);
    ctx->pc = 0x1F4E98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4B20_0x1f4b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4E9Cu; }
    }
    if (ctx->pc != 0x1F4E9Cu) { return; }
    ctx->pc = 0x1F4E9Cu;
    // 0x1f4e9c: 0x3c010036
    ctx->pc = 0x1f4e9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f4ea0: 0xc042c56
    ctx->pc = 0x1F4EA0u;
    SET_GPR_U32(ctx, 31, 0x1F4EA8u);
    ctx->pc = 0x1F4EA4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294962088)));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4EA8u; }
    }
    if (ctx->pc != 0x1F4EA8u) { return; }
    ctx->pc = 0x1F4EA8u;
    // 0x1f4ea8: 0x3c010036
    ctx->pc = 0x1f4ea8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f4eac: 0x40302d
    ctx->pc = 0x1f4eacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4eb0: 0x8c25eba8
    ctx->pc = 0x1f4eb0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294962088)));
    // 0x1f4eb4: 0xc07d330
    ctx->pc = 0x1F4EB4u;
    SET_GPR_U32(ctx, 31, 0x1F4EBCu);
    ctx->pc = 0x1F4EB8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4CC0u;
    goto label_1f4cc0;
    ctx->pc = 0x1F4EBCu;
label_1f4ebc:
    // 0x1f4ebc: 0x3c010036
    ctx->pc = 0x1f4ebcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f4ec0: 0x9025ebac
    ctx->pc = 0x1f4ec0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294962092)));
    // 0x1f4ec4: 0xc07d2c8
    ctx->pc = 0x1F4EC4u;
    SET_GPR_U32(ctx, 31, 0x1F4ECCu);
    ctx->pc = 0x1F4EC8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4B20_0x1f4b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4ECCu; }
    }
    if (ctx->pc != 0x1F4ECCu) { return; }
    ctx->pc = 0x1F4ECCu;
    // 0x1f4ecc: 0x3c010036
    ctx->pc = 0x1f4eccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f4ed0: 0x9025ebad
    ctx->pc = 0x1f4ed0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294962093)));
    // 0x1f4ed4: 0xc07d2c8
    ctx->pc = 0x1F4ED4u;
    SET_GPR_U32(ctx, 31, 0x1F4EDCu);
    ctx->pc = 0x1F4ED8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4B20_0x1f4b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4EDCu; }
    }
    if (ctx->pc != 0x1F4EDCu) { return; }
    ctx->pc = 0x1F4EDCu;
    // 0x1f4edc: 0x3c010036
    ctx->pc = 0x1f4edcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f4ee0: 0x9025ebae
    ctx->pc = 0x1f4ee0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294962094)));
    // 0x1f4ee4: 0xc07d2c8
    ctx->pc = 0x1F4EE4u;
    SET_GPR_U32(ctx, 31, 0x1F4EECu);
    ctx->pc = 0x1F4EE8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4B20_0x1f4b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4EECu; }
    }
    if (ctx->pc != 0x1F4EECu) { return; }
    ctx->pc = 0x1F4EECu;
    // 0x1f4eec: 0x3c010036
    ctx->pc = 0x1f4eecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f4ef0: 0x9025ebaf
    ctx->pc = 0x1f4ef0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294962095)));
    // 0x1f4ef4: 0xc07d2c8
    ctx->pc = 0x1F4EF4u;
    SET_GPR_U32(ctx, 31, 0x1F4EFCu);
    ctx->pc = 0x1F4EF8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4B20_0x1f4b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4EFCu; }
    }
    if (ctx->pc != 0x1F4EFCu) { return; }
    ctx->pc = 0x1F4EFCu;
    // 0x1f4efc: 0x9603002c
    ctx->pc = 0x1f4efcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1f4f00: 0x8e02001c
    ctx->pc = 0x1f4f00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1f4f04: 0x32200
    ctx->pc = 0x1f4f04u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 8));
    // 0x1f4f08: 0x31a03
    ctx->pc = 0x1f4f08u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x1f4f0c: 0x3084ff00
    ctx->pc = 0x1f4f0cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65280));
    // 0x1f4f10: 0x306300ff
    ctx->pc = 0x1f4f10u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x1f4f14: 0x831825
    ctx->pc = 0x1f4f14u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f4f18: 0xa4430000
    ctx->pc = 0x1f4f18u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f4f1c: 0x8e02002c
    ctx->pc = 0x1f4f1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1f4f20: 0x8e040010
    ctx->pc = 0x1f4f20u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1f4f24: 0x8e05001c
    ctx->pc = 0x1f4f24u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1f4f28: 0x24420008
    ctx->pc = 0x1f4f28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1f4f2c: 0x2343c
    ctx->pc = 0x1f4f2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f4f30: 0xc075aa4
    ctx->pc = 0x1F4F30u;
    SET_GPR_U32(ctx, 31, 0x1F4F38u);
    ctx->pc = 0x1F4F34u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    ctx->pc = 0x1D6A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6A90_0x1d6a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4F38u; }
    }
    if (ctx->pc != 0x1F4F38u) { return; }
    ctx->pc = 0x1F4F38u;
    // 0x1f4f38: 0xc07d16c
    ctx->pc = 0x1F4F38u;
    SET_GPR_U32(ctx, 31, 0x1F4F40u);
    ctx->pc = 0x1F4F3Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F45B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F45B0_0x1f45b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4F40u; }
    }
    if (ctx->pc != 0x1F4F40u) { return; }
    ctx->pc = 0x1F4F40u;
    // 0x1f4f40: 0x2841ffff
    ctx->pc = 0x1f4f40u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 4294967295));
    // 0x1f4f44: 0x10200003
    ctx->pc = 0x1F4F44u;
    {
        const bool branch_taken_0x1f4f44 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4F48u;
        SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
        if (branch_taken_0x1f4f44) {
            ctx->pc = 0x1F4F54u;
            goto label_1f4f54;
        }
    }
    ctx->pc = 0x1F4F4Cu;
    // 0x1f4f4c: 0x10000012
    ctx->pc = 0x1F4F4Cu;
    {
        const bool branch_taken_0x1f4f4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4F50u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1f4f4c) {
            ctx->pc = 0x1F4F98u;
            goto label_1f4f98;
        }
    }
    ctx->pc = 0x1F4F54u;
label_1f4f54:
    // 0x1f4f54: 0x24020002
    ctx->pc = 0x1f4f54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f4f58: 0x8c23eaf0
    ctx->pc = 0x1f4f58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294961904)));
    // 0x1f4f5c: 0x1062000b
    ctx->pc = 0x1F4F5Cu;
    {
        const bool branch_taken_0x1f4f5c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1F4F60u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1f4f5c) {
            ctx->pc = 0x1F4F8Cu;
            goto label_1f4f8c;
        }
    }
    ctx->pc = 0x1F4F64u;
    // 0x1f4f64: 0x24020001
    ctx->pc = 0x1f4f64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4f68: 0x10620007
    ctx->pc = 0x1F4F68u;
    {
        const bool branch_taken_0x1f4f68 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1f4f68) {
            ctx->pc = 0x1F4F88u;
            goto label_1f4f88;
        }
    }
    ctx->pc = 0x1F4F70u;
    // 0x1f4f70: 0x10600003
    ctx->pc = 0x1F4F70u;
    {
        const bool branch_taken_0x1f4f70 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4F74u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x1f4f70) {
            ctx->pc = 0x1F4F80u;
            goto label_1f4f80;
        }
    }
    ctx->pc = 0x1F4F78u;
    // 0x1f4f78: 0x10000006
    ctx->pc = 0x1F4F78u;
    {
        const bool branch_taken_0x1f4f78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4F7Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f4f78) {
            ctx->pc = 0x1F4F94u;
            goto label_1f4f94;
        }
    }
    ctx->pc = 0x1F4F80u;
label_1f4f80:
    // 0x1f4f80: 0x10000003
    ctx->pc = 0x1F4F80u;
    {
        const bool branch_taken_0x1f4f80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4F84u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1f4f80) {
            ctx->pc = 0x1F4F90u;
            goto label_1f4f90;
        }
    }
    ctx->pc = 0x1F4F88u;
label_1f4f88:
    // 0x1f4f88: 0x24020001
    ctx->pc = 0x1f4f88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1f4f8c:
    // 0x1f4f8c: 0xa2020001
    ctx->pc = 0x1f4f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_1f4f90:
    // 0x1f4f90: 0x102d
    ctx->pc = 0x1f4f90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4f94:
    // 0x1f4f94: 0xdfbf0010
    ctx->pc = 0x1f4f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f4f98:
    // 0x1f4f98: 0x7bb00000
    ctx->pc = 0x1f4f98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4f9c: 0x3e00008
    ctx->pc = 0x1F4F9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4FA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F4CC0u: goto label_1f4cc0;
            case 0x1F4D7Cu: goto label_1f4d7c;
            case 0x1F4E7Cu: goto label_1f4e7c;
            case 0x1F4EBCu: goto label_1f4ebc;
            case 0x1F4F54u: goto label_1f4f54;
            case 0x1F4F80u: goto label_1f4f80;
            case 0x1F4F88u: goto label_1f4f88;
            case 0x1F4F8Cu: goto label_1f4f8c;
            case 0x1F4F90u: goto label_1f4f90;
            case 0x1F4F94u: goto label_1f4f94;
            case 0x1F4F98u: goto label_1f4f98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F4FA4u;
    // 0x1f4fa4: 0x0
    ctx->pc = 0x1f4fa4u;
    // NOP
    // 0x1f4fa8: 0x0
    ctx->pc = 0x1f4fa8u;
    // NOP
    // 0x1f4fac: 0x0
    ctx->pc = 0x1f4facu;
    // NOP
}
