#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00129998
// Address: 0x129998 - 0x129a60
void sub_00129998_0x129998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x129998u;

    // 0x129998: 0x27bdffe0
    ctx->pc = 0x129998u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12999c: 0x24030002
    ctx->pc = 0x12999cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1299a0: 0xffb00000
    ctx->pc = 0x1299a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1299a4: 0x80802d
    ctx->pc = 0x1299a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1299a8: 0xffb10008
    ctx->pc = 0x1299a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1299ac: 0xffb20010
    ctx->pc = 0x1299acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1299b0: 0xffbf0018
    ctx->pc = 0x1299b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1299b4: 0x82020001
    ctx->pc = 0x1299b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1299b8: 0x54430012
    ctx->pc = 0x1299B8u;
    {
        const bool branch_taken_0x1299b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1299b8) {
            ctx->pc = 0x1299BCu;
            SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
            ctx->pc = 0x129A04u;
            goto label_129a04;
        }
    }
    ctx->pc = 0x1299C0u;
    // 0x1299c0: 0xc04c16e
    ctx->pc = 0x1299C0u;
    SET_GPR_U32(ctx, 31, 0x1299C8u);
    ctx->pc = 0x1299C4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x1305B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001305B8_0x1305b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1299C8u; }
    }
    if (ctx->pc != 0x1299C8u) { return; }
    ctx->pc = 0x1299C8u;
    // 0x1299c8: 0x8e040004
    ctx->pc = 0x1299c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1299cc: 0xc04c182
    ctx->pc = 0x1299CCu;
    SET_GPR_U32(ctx, 31, 0x1299D4u);
    ctx->pc = 0x1299D0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x130608u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130608_0x130608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1299D4u; }
    }
    if (ctx->pc != 0x1299D4u) { return; }
    ctx->pc = 0x1299D4u;
    // 0x1299d4: 0x200202d
    ctx->pc = 0x1299d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1299d8: 0x92030001
    ctx->pc = 0x1299d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1299dc: 0x8e050014
    ctx->pc = 0x1299dcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1299e0: 0x2463fffd
    ctx->pc = 0x1299e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x1299e4: 0x451023
    ctx->pc = 0x1299e4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1299e8: 0x2c630002
    ctx->pc = 0x1299e8u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), 2));
    // 0x1299ec: 0xa22821
    ctx->pc = 0x1299ecu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1299f0: 0x10600003
    ctx->pc = 0x1299F0u;
    {
        const bool branch_taken_0x1299f0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1299F4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        if (branch_taken_0x1299f0) {
            ctx->pc = 0x129A00u;
            goto label_129a00;
        }
    }
    ctx->pc = 0x1299F8u;
    // 0x1299f8: 0xc04a4b8
    ctx->pc = 0x1299F8u;
    SET_GPR_U32(ctx, 31, 0x129A00u);
    ctx->pc = 0x1299FCu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 5));
    ctx->pc = 0x1292E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001292E0_0x1292e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129A00u; }
    }
    if (ctx->pc != 0x129A00u) { return; }
    ctx->pc = 0x129A00u;
label_129a00:
    // 0x129a00: 0x82110003
    ctx->pc = 0x129a00u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_129a04:
    // 0x129a04: 0x24020001
    ctx->pc = 0x129a04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x129a08: 0x56220010
    ctx->pc = 0x129A08u;
    {
        const bool branch_taken_0x129a08 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x129a08) {
            ctx->pc = 0x129A0Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x129A4Cu;
            goto label_129a4c;
        }
    }
    ctx->pc = 0x129A10u;
    // 0x129a10: 0xc04c16e
    ctx->pc = 0x129A10u;
    SET_GPR_U32(ctx, 31, 0x129A18u);
    ctx->pc = 0x129A14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x1305B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001305B8_0x1305b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129A18u; }
    }
    if (ctx->pc != 0x129A18u) { return; }
    ctx->pc = 0x129A18u;
    // 0x129a18: 0x40902d
    ctx->pc = 0x129a18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129a1c: 0x5651000b
    ctx->pc = 0x129A1Cu;
    {
        const bool branch_taken_0x129a1c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 17));
        if (branch_taken_0x129a1c) {
            ctx->pc = 0x129A20u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x129A4Cu;
            goto label_129a4c;
        }
    }
    ctx->pc = 0x129A24u;
    // 0x129a24: 0xc04c182
    ctx->pc = 0x129A24u;
    SET_GPR_U32(ctx, 31, 0x129A2Cu);
    ctx->pc = 0x129A28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x130608u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130608_0x130608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129A2Cu; }
    }
    if (ctx->pc != 0x129A2Cu) { return; }
    ctx->pc = 0x129A2Cu;
    // 0x129a2c: 0x8e030014
    ctx->pc = 0x129a2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x129a30: 0x200202d
    ctx->pc = 0x129a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129a34: 0x431023
    ctx->pc = 0x129a34u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x129a38: 0xc04a4b8
    ctx->pc = 0x129A38u;
    SET_GPR_U32(ctx, 31, 0x129A40u);
    ctx->pc = 0x129A3Cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    ctx->pc = 0x1292E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001292E0_0x1292e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129A40u; }
    }
    if (ctx->pc != 0x129A40u) { return; }
    ctx->pc = 0x129A40u;
    // 0x129a40: 0xa2120001
    ctx->pc = 0x129a40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 18));
    // 0x129a44: 0xa2000003
    ctx->pc = 0x129a44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x129a48: 0xdfb00000
    ctx->pc = 0x129a48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_129a4c:
    // 0x129a4c: 0xdfb10008
    ctx->pc = 0x129a4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x129a50: 0xdfb20010
    ctx->pc = 0x129a50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129a54: 0xdfbf0018
    ctx->pc = 0x129a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x129a58: 0x3e00008
    ctx->pc = 0x129A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129A5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129A00u: goto label_129a00;
            case 0x129A04u: goto label_129a04;
            case 0x129A4Cu: goto label_129a4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x129A60u;
}
