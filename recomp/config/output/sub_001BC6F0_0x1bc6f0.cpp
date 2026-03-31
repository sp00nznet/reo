#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BC6F0
// Address: 0x1bc6f0 - 0x1bc780
void sub_001BC6F0_0x1bc6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1bc6f0u;

    // 0x1bc6f0: 0x27bdfff0
    ctx->pc = 0x1bc6f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bc6f4: 0xffbf0000
    ctx->pc = 0x1bc6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bc6f8: 0x90820008
    ctx->pc = 0x1bc6f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bc6fc: 0x24420001
    ctx->pc = 0x1bc6fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bc700: 0xa0820008
    ctx->pc = 0x1bc700u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bc704: 0xa0800009
    ctx->pc = 0x1bc704u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bc708: 0xc06a568
    ctx->pc = 0x1BC708u;
    SET_GPR_U32(ctx, 31, 0x1BC710u);
    ctx->pc = 0x1BC70Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A95A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A95A0_0x1a95a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC710u; }
    }
    if (ctx->pc != 0x1BC710u) { return; }
    ctx->pc = 0x1BC710u;
    // 0x1bc710: 0x3c05001c
    ctx->pc = 0x1bc710u;
    SET_GPR_U32(ctx, 5, ((uint32_t)28 << 16));
    // 0x1bc714: 0x202d
    ctx->pc = 0x1bc714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc718: 0xc06e02c
    ctx->pc = 0x1BC718u;
    SET_GPR_U32(ctx, 31, 0x1BC720u);
    ctx->pc = 0x1BC71Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294954272));
    ctx->pc = 0x1B80B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B80B0_0x1b80b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC720u; }
    }
    if (ctx->pc != 0x1BC720u) { return; }
    ctx->pc = 0x1BC720u;
    // 0x1bc720: 0xc06fd60
    ctx->pc = 0x1BC720u;
    SET_GPR_U32(ctx, 31, 0x1BC728u);
    ctx->pc = 0x1BF580u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BF580_0x1bf580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC728u; }
    }
    if (ctx->pc != 0x1BC728u) { return; }
    ctx->pc = 0x1BC728u;
    // 0x1bc728: 0x3c04001c
    ctx->pc = 0x1bc728u;
    SET_GPR_U32(ctx, 4, ((uint32_t)28 << 16));
    // 0x1bc72c: 0x2405000e
    ctx->pc = 0x1bc72cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1bc730: 0xc06dfb8
    ctx->pc = 0x1BC730u;
    SET_GPR_U32(ctx, 31, 0x1BC738u);
    ctx->pc = 0x1BC734u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944384));
    ctx->pc = 0x1B7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7EE0_0x1b7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC738u; }
    }
    if (ctx->pc != 0x1BC738u) { return; }
    ctx->pc = 0x1BC738u;
    // 0x1bc738: 0x24020001
    ctx->pc = 0x1bc738u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc73c: 0x3c010032
    ctx->pc = 0x1bc73cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bc740: 0xc06cf64
    ctx->pc = 0x1BC740u;
    SET_GPR_U32(ctx, 31, 0x1BC748u);
    ctx->pc = 0x1BC744u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 16880), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1B3D90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3D90_0x1b3d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC748u; }
    }
    if (ctx->pc != 0x1BC748u) { return; }
    ctx->pc = 0x1BC748u;
    // 0x1bc748: 0xc074ee4
    ctx->pc = 0x1BC748u;
    SET_GPR_U32(ctx, 31, 0x1BC750u);
    ctx->pc = 0x1D3B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3B90_0x1d3b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC750u; }
    }
    if (ctx->pc != 0x1BC750u) { return; }
    ctx->pc = 0x1BC750u;
    // 0x1bc750: 0x3c010032
    ctx->pc = 0x1bc750u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bc754: 0x24030002
    ctx->pc = 0x1bc754u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bc758: 0x902443c3
    ctx->pc = 0x1bc758u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17347)));
    // 0x1bc75c: 0x14830003
    ctx->pc = 0x1BC75Cu;
    {
        const bool branch_taken_0x1bc75c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1BC760u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1bc75c) {
            ctx->pc = 0x1BC76Cu;
            goto label_1bc76c;
        }
    }
    ctx->pc = 0x1BC764u;
    // 0x1bc764: 0x3c010032
    ctx->pc = 0x1bc764u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bc768: 0xa023448e
    ctx->pc = 0x1bc768u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17550), (uint8_t)GPR_U32(ctx, 3));
label_1bc76c:
    // 0x1bc76c: 0xdfbf0000
    ctx->pc = 0x1bc76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc770: 0x3e00008
    ctx->pc = 0x1BC770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC774u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC76Cu: goto label_1bc76c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BC778u;
    // 0x1bc778: 0x0
    ctx->pc = 0x1bc778u;
    // NOP
    // 0x1bc77c: 0x0
    ctx->pc = 0x1bc77cu;
    // NOP
}
