#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_15ff18
// Address: 0x15ff18 - 0x15ffc0
void entry_15ff18_0x15ffc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15ff18u;

    // 0x15ff18: 0x27bdffe0
    ctx->pc = 0x15ff18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15ff1c: 0xffb00000
    ctx->pc = 0x15ff1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15ff20: 0x80802d
    ctx->pc = 0x15ff20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ff24: 0xffb10008
    ctx->pc = 0x15ff24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15ff28: 0xa0882d
    ctx->pc = 0x15ff28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ff2c: 0xffbf0010
    ctx->pc = 0x15ff2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15ff30: 0xc059150
    ctx->pc = 0x15FF30u;
    SET_GPR_U32(ctx, 31, 0x15FF38u);
    ctx->pc = 0x15FF34u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->pc = 0x164540u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00164540_0x164540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FF38u; }
    }
    if (ctx->pc != 0x15FF38u) { return; }
    ctx->pc = 0x15FF38u;
    // 0x15ff38: 0x200202d
    ctx->pc = 0x15ff38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ff3c: 0x220282d
    ctx->pc = 0x15ff3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ff40: 0xdfb10008
    ctx->pc = 0x15ff40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15ff44: 0xdfb00000
    ctx->pc = 0x15ff44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ff48: 0xdfbf0010
    ctx->pc = 0x15ff48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ff4c: 0x8058aa6
    ctx->pc = 0x15FF4Cu;
    ctx->pc = 0x15FF50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x162A98u;
    entry_162a98_0x162af8(rdram, ctx, runtime); return;
    ctx->pc = 0x15FF54u;
    // 0x15ff54: 0x0
    ctx->pc = 0x15ff54u;
    // NOP
    // 0x15ff58: 0x27bdfff0
    ctx->pc = 0x15ff58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15ff5c: 0xffbf0000
    ctx->pc = 0x15ff5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15ff60: 0x8c840044
    ctx->pc = 0x15ff60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x15ff64: 0xdfbf0000
    ctx->pc = 0x15ff64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ff68: 0x805915a
    ctx->pc = 0x15FF68u;
    ctx->pc = 0x15FF6Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x164568u;
    entry_164568_0x164580(rdram, ctx, runtime); return;
    ctx->pc = 0x15FF70u;
    // 0x15ff70: 0x27bdfff0
    ctx->pc = 0x15ff70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15ff74: 0xffbf0000
    ctx->pc = 0x15ff74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15ff78: 0x8c840044
    ctx->pc = 0x15ff78u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x15ff7c: 0xdfbf0000
    ctx->pc = 0x15ff7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ff80: 0x8059108
    ctx->pc = 0x15FF80u;
    ctx->pc = 0x15FF84u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x164420u;
    entry_164420_0x164448(rdram, ctx, runtime); return;
    ctx->pc = 0x15FF88u;
    // 0x15ff88: 0x27bdfff0
    ctx->pc = 0x15ff88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15ff8c: 0xffbf0000
    ctx->pc = 0x15ff8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15ff90: 0x8c840044
    ctx->pc = 0x15ff90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x15ff94: 0xdfbf0000
    ctx->pc = 0x15ff94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ff98: 0x8059112
    ctx->pc = 0x15FF98u;
    ctx->pc = 0x15FF9Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x164448u;
    entry_164448_0x164510(rdram, ctx, runtime); return;
    ctx->pc = 0x15FFA0u;
    // 0x15ffa0: 0x27bdfff0
    ctx->pc = 0x15ffa0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15ffa4: 0xa0302d
    ctx->pc = 0x15ffa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ffa8: 0xffbf0000
    ctx->pc = 0x15ffa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15ffac: 0x2405002c
    ctx->pc = 0x15ffacu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 44));
    // 0x15ffb0: 0x8c840040
    ctx->pc = 0x15ffb0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x15ffb4: 0xdfbf0000
    ctx->pc = 0x15ffb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ffb8: 0x805d4ce
    ctx->pc = 0x15FFB8u;
    ctx->pc = 0x15FFBCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x175338u;
    sub_00175338_0x175338(rdram, ctx, runtime); return;
    ctx->pc = 0x15FFC0u;
}
