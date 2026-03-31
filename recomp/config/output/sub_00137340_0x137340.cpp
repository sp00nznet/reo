#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00137340
// Address: 0x137340 - 0x1373c8
void sub_00137340_0x137340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x137340u;

    // 0x137340: 0x27bdffe0
    ctx->pc = 0x137340u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x137344: 0xffb00000
    ctx->pc = 0x137344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x137348: 0xffb10008
    ctx->pc = 0x137348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13734c: 0xffbf0010
    ctx->pc = 0x13734cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x137350: 0xc0505c0
    ctx->pc = 0x137350u;
    SET_GPR_U32(ctx, 31, 0x137358u);
    ctx->pc = 0x137354u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x141700u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00141700_0x141700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137358u; }
    }
    if (ctx->pc != 0x137358u) { return; }
    ctx->pc = 0x137358u;
    // 0x137358: 0x3c020022
    ctx->pc = 0x137358u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13735c: 0x2450bb88
    ctx->pc = 0x13735cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294949768));
    // 0x137360: 0x82020000
    ctx->pc = 0x137360u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x137364: 0x1440000f
    ctx->pc = 0x137364u;
    {
        const bool branch_taken_0x137364 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x137364) {
            ctx->pc = 0x1373A4u;
            goto label_1373a4;
        }
    }
    ctx->pc = 0x13736Cu;
    // 0x13736c: 0xc04dcc4
    ctx->pc = 0x13736Cu;
    SET_GPR_U32(ctx, 31, 0x137374u);
    ctx->pc = 0x137310u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00137310_0x137310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137374u; }
    }
    if (ctx->pc != 0x137374u) { return; }
    ctx->pc = 0x137374u;
    // 0x137374: 0x24040001
    ctx->pc = 0x137374u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x137378: 0xa2040000
    ctx->pc = 0x137378u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x13737c: 0x3c030022
    ctx->pc = 0x13737cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x137380: 0x2463bbe8
    ctx->pc = 0x137380u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294949864));
    // 0x137384: 0x2405ffff
    ctx->pc = 0x137384u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x137388: 0x8c620000
    ctx->pc = 0x137388u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13738c: 0x200882d
    ctx->pc = 0x13738cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137390: 0xa2050003
    ctx->pc = 0x137390u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x137394: 0x24420001
    ctx->pc = 0x137394u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x137398: 0xa2000002
    ctx->pc = 0x137398u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x13739c: 0xac620000
    ctx->pc = 0x13739cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1373a0: 0xae000004
    ctx->pc = 0x1373a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1373a4:
    // 0x1373a4: 0xc0505de
    ctx->pc = 0x1373A4u;
    SET_GPR_U32(ctx, 31, 0x1373ACu);
    ctx->pc = 0x141778u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00141778_0x141778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1373ACu; }
    }
    if (ctx->pc != 0x1373ACu) { return; }
    ctx->pc = 0x1373ACu;
    // 0x1373ac: 0x220102d
    ctx->pc = 0x1373acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1373b0: 0xdfb00000
    ctx->pc = 0x1373b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1373b4: 0xdfb10008
    ctx->pc = 0x1373b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1373b8: 0xdfbf0010
    ctx->pc = 0x1373b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1373bc: 0x3e00008
    ctx->pc = 0x1373BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1373C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1373A4u: goto label_1373a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1373C4u;
    // 0x1373c4: 0x0
    ctx->pc = 0x1373c4u;
    // NOP
}
