#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001DA430
// Address: 0x1da430 - 0x1da51c
void sub_001DA430_0x1da430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1da430u;

    // 0x1da430: 0x8076920
    ctx->pc = 0x1DA430u;
    ctx->pc = 0x1DA434u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x1DA480u;
    goto label_1da480;
    ctx->pc = 0x1DA438u;
    // 0x1da438: 0x0
    ctx->pc = 0x1da438u;
    // NOP
    // 0x1da43c: 0x0
    ctx->pc = 0x1da43cu;
    // NOP
    // 0x1da440: 0x8076920
    ctx->pc = 0x1DA440u;
    ctx->pc = 0x1DA444u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x1DA480u;
    goto label_1da480;
    ctx->pc = 0x1DA448u;
    // 0x1da448: 0x0
    ctx->pc = 0x1da448u;
    // NOP
    // 0x1da44c: 0x0
    ctx->pc = 0x1da44cu;
    // NOP
    // 0x1da450: 0x27bdfff0
    ctx->pc = 0x1da450u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1da454: 0xffbf0000
    ctx->pc = 0x1da454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1da458: 0xc045534
    ctx->pc = 0x1DA458u;
    SET_GPR_U32(ctx, 31, 0x1DA460u);
    ctx->pc = 0x1DA45Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->pc = 0x1154D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001154D0_0x1154d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA460u; }
    }
    if (ctx->pc != 0x1DA460u) { return; }
    ctx->pc = 0x1DA460u;
    // 0x1da460: 0xf
    ctx->pc = 0x1da460u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1da464: 0x42000038
    ctx->pc = 0x1da464u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x1da468: 0xdfbf0000
    ctx->pc = 0x1da468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da46c: 0x3e00008
    ctx->pc = 0x1DA46Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA470u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DA480u: goto label_1da480;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DA474u;
    // 0x1da474: 0x0
    ctx->pc = 0x1da474u;
    // NOP
    // 0x1da478: 0x0
    ctx->pc = 0x1da478u;
    // NOP
    // 0x1da47c: 0x0
    ctx->pc = 0x1da47cu;
    // NOP
label_1da480:
    // 0x1da480: 0x27bdffd0
    ctx->pc = 0x1da480u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1da484: 0xffbf0010
    ctx->pc = 0x1da484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1da488: 0x7fb00000
    ctx->pc = 0x1da488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1da48c: 0xc045144
    ctx->pc = 0x1DA48Cu;
    SET_GPR_U32(ctx, 31, 0x1DA494u);
    ctx->pc = 0x1DA490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114510u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114510_0x114510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA494u; }
    }
    if (ctx->pc != 0x1DA494u) { return; }
    ctx->pc = 0x1DA494u;
    // 0x1da494: 0x3c05001e
    ctx->pc = 0x1da494u;
    SET_GPR_U32(ctx, 5, ((uint32_t)30 << 16));
    // 0x1da498: 0xafa2002c
    ctx->pc = 0x1da498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x1da49c: 0x3204ffff
    ctx->pc = 0x1da49cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 16), 65535));
    // 0x1da4a0: 0x24a5a450
    ctx->pc = 0x1da4a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294943824));
    // 0x1da4a4: 0xc0450e8
    ctx->pc = 0x1DA4A4u;
    SET_GPR_U32(ctx, 31, 0x1DA4ACu);
    ctx->pc = 0x1DA4A8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 44));
    ctx->pc = 0x1143A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001143A0_0x1143a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA4ACu; }
    }
    if (ctx->pc != 0x1DA4ACu) { return; }
    ctx->pc = 0x1DA4ACu;
    // 0x1da4ac: 0xc045150
    ctx->pc = 0x1DA4ACu;
    SET_GPR_U32(ctx, 31, 0x1DA4B4u);
    ctx->pc = 0x114540u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114540_0x114540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA4B4u; }
    }
    if (ctx->pc != 0x1DA4B4u) { return; }
    ctx->pc = 0x1DA4B4u;
    // 0x1da4b4: 0xc04515c
    ctx->pc = 0x1DA4B4u;
    SET_GPR_U32(ctx, 31, 0x1DA4BCu);
    ctx->pc = 0x1DA4B8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    ctx->pc = 0x114570u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114570_0x114570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA4BCu; }
    }
    if (ctx->pc != 0x1DA4BCu) { return; }
    ctx->pc = 0x1DA4BCu;
    // 0x1da4bc: 0xdfbf0010
    ctx->pc = 0x1da4bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da4c0: 0x7bb00000
    ctx->pc = 0x1da4c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da4c4: 0x3e00008
    ctx->pc = 0x1DA4C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA4C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DA480u: goto label_1da480;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DA4CCu;
    // 0x1da4cc: 0x0
    ctx->pc = 0x1da4ccu;
    // NOP
    // 0x1da4d0: 0x27bdffe0
    ctx->pc = 0x1da4d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1da4d4: 0xffbe0010
    ctx->pc = 0x1da4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x1da4d8: 0xffbf0018
    ctx->pc = 0x1da4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1da4dc: 0x3a0f02d
    ctx->pc = 0x1da4dcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da4e0: 0xafc40000
    ctx->pc = 0x1da4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1da4e4: 0xa0102d
    ctx->pc = 0x1da4e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da4e8: 0xa7c20004
    ctx->pc = 0x1da4e8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1da4ec: 0x97c20004
    ctx->pc = 0x1da4ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1da4f0: 0x8fc40000
    ctx->pc = 0x1da4f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1da4f4: 0x40282d
    ctx->pc = 0x1da4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da4f8: 0x302d
    ctx->pc = 0x1da4f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da4fc: 0xc076947
    ctx->pc = 0x1DA4FCu;
    SET_GPR_U32(ctx, 31, 0x1DA504u);
    ctx->pc = 0x1DA51Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA51C_0x1da51c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA504u; }
    }
    if (ctx->pc != 0x1DA504u) { return; }
    ctx->pc = 0x1DA504u;
    // 0x1da504: 0x3c0e82d
    ctx->pc = 0x1da504u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da508: 0xdfbe0010
    ctx->pc = 0x1da508u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da50c: 0xdfbf0018
    ctx->pc = 0x1da50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1da510: 0x27bd0020
    ctx->pc = 0x1da510u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1da514: 0x3e00008
    ctx->pc = 0x1DA514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DA480u: goto label_1da480;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DA51Cu;
}
