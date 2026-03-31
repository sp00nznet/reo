#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1646d8
// Address: 0x1646d8 - 0x164728
void entry_1646d8_0x164728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1646d8u;

    // 0x1646d8: 0x27bdfff0
    ctx->pc = 0x1646d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1646dc: 0xffb00000
    ctx->pc = 0x1646dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1646e0: 0xffbf0008
    ctx->pc = 0x1646e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1646e4: 0xc04c1b8
    ctx->pc = 0x1646E4u;
    SET_GPR_U32(ctx, 31, 0x1646ECu);
    ctx->pc = 0x1646E8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1306E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001306E0_0x1306e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1646ECu; }
    }
    if (ctx->pc != 0x1646ECu) { return; }
    ctx->pc = 0x1646ECu;
    // 0x1646ec: 0xdfbf0008
    ctx->pc = 0x1646ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1646f0: 0x200202d
    ctx->pc = 0x1646f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1646f4: 0xdfb00000
    ctx->pc = 0x1646f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1646f8: 0x804c148
    ctx->pc = 0x1646F8u;
    ctx->pc = 0x1646FCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x130520u;
    sub_00130520_0x130520(rdram, ctx, runtime); return;
    ctx->pc = 0x164700u;
    // 0x164700: 0x27bdfff0
    ctx->pc = 0x164700u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x164704: 0xffb00000
    ctx->pc = 0x164704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x164708: 0xffbf0008
    ctx->pc = 0x164708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16470c: 0xc04c1d2
    ctx->pc = 0x16470Cu;
    SET_GPR_U32(ctx, 31, 0x164714u);
    ctx->pc = 0x164710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130748u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130748_0x130748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164714u; }
    }
    if (ctx->pc != 0x164714u) { return; }
    ctx->pc = 0x164714u;
    // 0x164714: 0xdfbf0008
    ctx->pc = 0x164714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x164718: 0x200202d
    ctx->pc = 0x164718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16471c: 0xdfb00000
    ctx->pc = 0x16471cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164720: 0x804c158
    ctx->pc = 0x164720u;
    ctx->pc = 0x164724u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x130560u;
    sub_00130560_0x130560(rdram, ctx, runtime); return;
    ctx->pc = 0x164728u;
}
