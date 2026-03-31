#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001331A8
// Address: 0x1331a8 - 0x133240
void sub_001331A8_0x1331a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1331a8u;

    // 0x1331a8: 0x27bdffc0
    ctx->pc = 0x1331a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1331ac: 0x28a30002
    ctx->pc = 0x1331acu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 2));
    // 0x1331b0: 0xffb00030
    ctx->pc = 0x1331b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1331b4: 0xc0802d
    ctx->pc = 0x1331b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1331b8: 0xffbf0038
    ctx->pc = 0x1331b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1331bc: 0x102d
    ctx->pc = 0x1331bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1331c0: 0x1460001b
    ctx->pc = 0x1331C0u;
    {
        const bool branch_taken_0x1331c0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1331C4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1331c0) {
            ctx->pc = 0x133230u;
            goto label_133230;
        }
    }
    ctx->pc = 0x1331C8u;
    // 0x1331c8: 0x94c30000
    ctx->pc = 0x1331c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1331cc: 0x34078000
    ctx->pc = 0x1331ccu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 0), 32768));
    // 0x1331d0: 0x33200
    ctx->pc = 0x1331d0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 8));
    // 0x1331d4: 0x31a02
    ctx->pc = 0x1331d4u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 8));
    // 0x1331d8: 0x661825
    ctx->pc = 0x1331d8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1331dc: 0x3063ffff
    ctx->pc = 0x1331dcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 65535));
    // 0x1331e0: 0x54670014
    ctx->pc = 0x1331E0u;
    {
        const bool branch_taken_0x1331e0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 7));
        if (branch_taken_0x1331e0) {
            ctx->pc = 0x1331E4u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->pc = 0x133234u;
            goto label_133234;
        }
    }
    ctx->pc = 0x1331E8u;
    // 0x1331e8: 0x27a20018
    ctx->pc = 0x1331e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 24));
    // 0x1331ec: 0x27a3001c
    ctx->pc = 0x1331ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 28));
    // 0x1331f0: 0x27a60010
    ctx->pc = 0x1331f0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1331f4: 0x27a70012
    ctx->pc = 0x1331f4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 18));
    // 0x1331f8: 0x27a80013
    ctx->pc = 0x1331f8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 19));
    // 0x1331fc: 0x27a90014
    ctx->pc = 0x1331fcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 20));
    // 0x133200: 0x27aa0015
    ctx->pc = 0x133200u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 29), 21));
    // 0x133204: 0x27ab0020
    ctx->pc = 0x133204u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 29), 32));
    // 0x133208: 0xafa20000
    ctx->pc = 0x133208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x13320c: 0xc0499e6
    ctx->pc = 0x13320Cu;
    SET_GPR_U32(ctx, 31, 0x133214u);
    ctx->pc = 0x133210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x126798u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00126798_0x126798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133214u; }
    }
    if (ctx->pc != 0x133214u) { return; }
    ctx->pc = 0x133214u;
    // 0x133214: 0x4410004
    ctx->pc = 0x133214u;
    {
        const bool branch_taken_0x133214 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x133218u;
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x133214) {
            ctx->pc = 0x133228u;
            goto label_133228;
        }
    }
    ctx->pc = 0x13321Cu;
    // 0x13321c: 0x10000004
    ctx->pc = 0x13321Cu;
    {
        const bool branch_taken_0x13321c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x133220u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13321c) {
            ctx->pc = 0x133230u;
            goto label_133230;
        }
    }
    ctx->pc = 0x133224u;
    // 0x133224: 0x0
    ctx->pc = 0x133224u;
    // NOP
label_133228:
    // 0x133228: 0x24020001
    ctx->pc = 0x133228u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x13322c: 0xae030000
    ctx->pc = 0x13322cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_133230:
    // 0x133230: 0xdfb00030
    ctx->pc = 0x133230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_133234:
    // 0x133234: 0xdfbf0038
    ctx->pc = 0x133234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x133238: 0x3e00008
    ctx->pc = 0x133238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13323Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133228u: goto label_133228;
            case 0x133230u: goto label_133230;
            case 0x133234u: goto label_133234;
            default: break;
        }
        return;
    }
    ctx->pc = 0x133240u;
}
