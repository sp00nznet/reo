#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00140BF0
// Address: 0x140bf0 - 0x140dd0
void sub_00140BF0_0x140bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x140bf0u;

    // 0x140bf0: 0x27bdfff0
    ctx->pc = 0x140bf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x140bf4: 0x3c050026
    ctx->pc = 0x140bf4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)38 << 16));
    // 0x140bf8: 0xffbf0000
    ctx->pc = 0x140bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x140bfc: 0x24a54600
    ctx->pc = 0x140bfcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 17920));
    // 0x140c00: 0xaca40000
    ctx->pc = 0x140c00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x140c04: 0x24040023
    ctx->pc = 0x140c04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 35));
    // 0x140c08: 0xdfbf0000
    ctx->pc = 0x140c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140c0c: 0x24060001
    ctx->pc = 0x140c0cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x140c10: 0x382d
    ctx->pc = 0x140c10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140c14: 0x402d
    ctx->pc = 0x140c14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140c18: 0x804e518
    ctx->pc = 0x140C18u;
    ctx->pc = 0x140C1Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x139460u;
    sub_00139460_0x139460(rdram, ctx, runtime); return;
    ctx->pc = 0x140C20u;
    // 0x140c20: 0x27bdfff0
    ctx->pc = 0x140c20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x140c24: 0x3c050026
    ctx->pc = 0x140c24u;
    SET_GPR_U32(ctx, 5, ((uint32_t)38 << 16));
    // 0x140c28: 0xffb00000
    ctx->pc = 0x140c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x140c2c: 0x3c100026
    ctx->pc = 0x140c2cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)38 << 16));
    // 0x140c30: 0x24a54600
    ctx->pc = 0x140c30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 17920));
    // 0x140c34: 0x26104700
    ctx->pc = 0x140c34u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 18176));
    // 0x140c38: 0xffbf0008
    ctx->pc = 0x140c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x140c3c: 0x200382d
    ctx->pc = 0x140c3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140c40: 0xaca40000
    ctx->pc = 0x140c40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x140c44: 0x24040024
    ctx->pc = 0x140c44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 36));
    // 0x140c48: 0x24060001
    ctx->pc = 0x140c48u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x140c4c: 0xc04e518
    ctx->pc = 0x140C4Cu;
    SET_GPR_U32(ctx, 31, 0x140C54u);
    ctx->pc = 0x140C50u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x139460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00139460_0x139460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140C54u; }
    }
    if (ctx->pc != 0x140C54u) { return; }
    ctx->pc = 0x140C54u;
    // 0x140c54: 0x3c030026
    ctx->pc = 0x140c54u;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x140c58: 0x8e07000c
    ctx->pc = 0x140c58u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x140c5c: 0x246345c0
    ctx->pc = 0x140c5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 17856));
    // 0x140c60: 0x8e060000
    ctx->pc = 0x140c60u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x140c64: 0x60102d
    ctx->pc = 0x140c64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140c68: 0x8e040004
    ctx->pc = 0x140c68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x140c6c: 0x8e050008
    ctx->pc = 0x140c6cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x140c70: 0xdfbf0008
    ctx->pc = 0x140c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x140c74: 0xdfb00000
    ctx->pc = 0x140c74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140c78: 0xac660000
    ctx->pc = 0x140c78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x140c7c: 0xac640004
    ctx->pc = 0x140c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x140c80: 0xac650008
    ctx->pc = 0x140c80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x140c84: 0xac67000c
    ctx->pc = 0x140c84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
    // 0x140c88: 0x3e00008
    ctx->pc = 0x140C88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140C8Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x140C90u;
    // 0x140c90: 0x27bdfff0
    ctx->pc = 0x140c90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x140c94: 0x3c050026
    ctx->pc = 0x140c94u;
    SET_GPR_U32(ctx, 5, ((uint32_t)38 << 16));
    // 0x140c98: 0xffbf0000
    ctx->pc = 0x140c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x140c9c: 0x24a54600
    ctx->pc = 0x140c9cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 17920));
    // 0x140ca0: 0xaca40000
    ctx->pc = 0x140ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x140ca4: 0x24040025
    ctx->pc = 0x140ca4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 37));
    // 0x140ca8: 0xdfbf0000
    ctx->pc = 0x140ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140cac: 0x24060001
    ctx->pc = 0x140cacu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x140cb0: 0x382d
    ctx->pc = 0x140cb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140cb4: 0x402d
    ctx->pc = 0x140cb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140cb8: 0x804e518
    ctx->pc = 0x140CB8u;
    ctx->pc = 0x140CBCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x139460u;
    sub_00139460_0x139460(rdram, ctx, runtime); return;
    ctx->pc = 0x140CC0u;
    // 0x140cc0: 0x27bdffe0
    ctx->pc = 0x140cc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x140cc4: 0x3c020026
    ctx->pc = 0x140cc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x140cc8: 0xffb00000
    ctx->pc = 0x140cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x140ccc: 0x3c100026
    ctx->pc = 0x140cccu;
    SET_GPR_U32(ctx, 16, ((uint32_t)38 << 16));
    // 0x140cd0: 0x24424600
    ctx->pc = 0x140cd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 17920));
    // 0x140cd4: 0xffb10008
    ctx->pc = 0x140cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x140cd8: 0xffbf0010
    ctx->pc = 0x140cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x140cdc: 0x26104700
    ctx->pc = 0x140cdcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 18176));
    // 0x140ce0: 0xac440000
    ctx->pc = 0x140ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x140ce4: 0x24040026
    ctx->pc = 0x140ce4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 38));
    // 0x140ce8: 0xac450004
    ctx->pc = 0x140ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x140cec: 0x40282d
    ctx->pc = 0x140cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140cf0: 0xac460008
    ctx->pc = 0x140cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x140cf4: 0x24060003
    ctx->pc = 0x140cf4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    // 0x140cf8: 0xe0882d
    ctx->pc = 0x140cf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140cfc: 0x200382d
    ctx->pc = 0x140cfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140d00: 0xc04e518
    ctx->pc = 0x140D00u;
    SET_GPR_U32(ctx, 31, 0x140D08u);
    ctx->pc = 0x140D04u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x139460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00139460_0x139460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140D08u; }
    }
    if (ctx->pc != 0x140D08u) { return; }
    ctx->pc = 0x140D08u;
    // 0x140d08: 0x8e030000
    ctx->pc = 0x140d08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x140d0c: 0x8e020004
    ctx->pc = 0x140d0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x140d10: 0xae230000
    ctx->pc = 0x140d10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x140d14: 0xae220004
    ctx->pc = 0x140d14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x140d18: 0xdfb00000
    ctx->pc = 0x140d18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140d1c: 0xdfb10008
    ctx->pc = 0x140d1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x140d20: 0xdfbf0010
    ctx->pc = 0x140d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140d24: 0x3e00008
    ctx->pc = 0x140D24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140D28u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x140D2Cu;
    // 0x140d2c: 0x0
    ctx->pc = 0x140d2cu;
    // NOP
    // 0x140d30: 0x27bdfff0
    ctx->pc = 0x140d30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x140d34: 0xc0482d
    ctx->pc = 0x140d34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140d38: 0xffbf0000
    ctx->pc = 0x140d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x140d3c: 0x3c020026
    ctx->pc = 0x140d3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x140d40: 0x24424600
    ctx->pc = 0x140d40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 17920));
    // 0x140d44: 0x24060004
    ctx->pc = 0x140d44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x140d48: 0x8d230000
    ctx->pc = 0x140d48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x140d4c: 0x382d
    ctx->pc = 0x140d4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140d50: 0xac440000
    ctx->pc = 0x140d50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x140d54: 0x24040027
    ctx->pc = 0x140d54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 39));
    // 0x140d58: 0xac450004
    ctx->pc = 0x140d58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x140d5c: 0x40282d
    ctx->pc = 0x140d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140d60: 0xac430008
    ctx->pc = 0x140d60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x140d64: 0x402d
    ctx->pc = 0x140d64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140d68: 0xdfbf0000
    ctx->pc = 0x140d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140d6c: 0x8d230004
    ctx->pc = 0x140d6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x140d70: 0xac43000c
    ctx->pc = 0x140d70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x140d74: 0x804e518
    ctx->pc = 0x140D74u;
    ctx->pc = 0x140D78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x139460u;
    sub_00139460_0x139460(rdram, ctx, runtime); return;
    ctx->pc = 0x140D7Cu;
    // 0x140d7c: 0x0
    ctx->pc = 0x140d7cu;
    // NOP
    // 0x140d80: 0x27bdfff0
    ctx->pc = 0x140d80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x140d84: 0xc0482d
    ctx->pc = 0x140d84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140d88: 0xffbf0000
    ctx->pc = 0x140d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x140d8c: 0x3c020026
    ctx->pc = 0x140d8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x140d90: 0x24424600
    ctx->pc = 0x140d90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 17920));
    // 0x140d94: 0x24060004
    ctx->pc = 0x140d94u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x140d98: 0x8d230000
    ctx->pc = 0x140d98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x140d9c: 0x382d
    ctx->pc = 0x140d9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140da0: 0xac440000
    ctx->pc = 0x140da0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x140da4: 0x24040028
    ctx->pc = 0x140da4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 40));
    // 0x140da8: 0xac450004
    ctx->pc = 0x140da8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x140dac: 0x40282d
    ctx->pc = 0x140dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140db0: 0xac430008
    ctx->pc = 0x140db0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x140db4: 0x402d
    ctx->pc = 0x140db4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140db8: 0xdfbf0000
    ctx->pc = 0x140db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140dbc: 0x8d230004
    ctx->pc = 0x140dbcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x140dc0: 0xac43000c
    ctx->pc = 0x140dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x140dc4: 0x804e518
    ctx->pc = 0x140DC4u;
    ctx->pc = 0x140DC8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x139460u;
    sub_00139460_0x139460(rdram, ctx, runtime); return;
    ctx->pc = 0x140DCCu;
    // 0x140dcc: 0x0
    ctx->pc = 0x140dccu;
    // NOP
}
