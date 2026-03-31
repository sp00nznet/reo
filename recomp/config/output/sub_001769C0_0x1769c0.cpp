#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001769C0
// Address: 0x1769c0 - 0x176a60
void sub_001769C0_0x1769c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1769c0u;

label_1769c0:
    // 0x1769c0: 0x27bdffe0
    ctx->pc = 0x1769c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1769c4:
    // 0x1769c4: 0x80402d
    ctx->pc = 0x1769c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1769c8:
    // 0x1769c8: 0xffb00000
    ctx->pc = 0x1769c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1769cc:
    // 0x1769cc: 0xc0802d
    ctx->pc = 0x1769ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1769d0:
    // 0x1769d0: 0xffb10008
    ctx->pc = 0x1769d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1769d4:
    // 0x1769d4: 0xa0882d
    ctx->pc = 0x1769d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1769d8:
    // 0x1769d8: 0xffbf0010
    ctx->pc = 0x1769d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1769dc:
    // 0x1769dc: 0x3c05ff00
    ctx->pc = 0x1769dcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
label_1769e0:
    // 0x1769e0: 0x202d
    ctx->pc = 0x1769e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1769e4:
    // 0x1769e4: 0x34a50221
    ctx->pc = 0x1769e4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 545));
label_1769e8:
    // 0x1769e8: 0x8d020000
    ctx->pc = 0x1769e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1769ec:
    // 0x1769ec: 0x220302d
    ctx->pc = 0x1769ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1769f0:
    // 0x1769f0: 0x8d070004
    ctx->pc = 0x1769f0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_1769f4:
    // 0x1769f4: 0x21840
    ctx->pc = 0x1769f4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
label_1769f8:
    // 0x1769f8: 0x21080
    ctx->pc = 0x1769f8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_1769fc:
    // 0x1769fc: 0x671821
    ctx->pc = 0x1769fcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_176a00:
    // 0x176a00: 0x31880
    ctx->pc = 0x176a00u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_176a04:
    // 0x176a04: 0x3c010024
    ctx->pc = 0x176a04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
label_176a08:
    // 0x176a08: 0x220821
    ctx->pc = 0x176a08u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_176a0c:
    // 0x176a0c: 0x8c220af0
    ctx->pc = 0x176a0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2800)));
label_176a10:
    // 0x176a10: 0x3c010024
    ctx->pc = 0x176a10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
label_176a14:
    // 0x176a14: 0x230821
    ctx->pc = 0x176a14u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
label_176a18:
    // 0x176a18: 0x8c230b18
    ctx->pc = 0x176a18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 2840)));
label_176a1c:
    // 0x176a1c: 0x14600008
label_176a20:
    if (ctx->pc == 0x176A20u) {
        ctx->pc = 0x176A20u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176A24u;
        goto label_176a24;
    }
    ctx->pc = 0x176A1Cu;
    {
        const bool branch_taken_0x176a1c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x176A20u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x176a1c) {
            ctx->pc = 0x176A40u;
            goto label_176a40;
        }
    }
    ctx->pc = 0x176A24u;
label_176a24:
    // 0x176a24: 0xc05a704
label_176a28:
    if (ctx->pc == 0x176A28u) {
        ctx->pc = 0x176A2Cu;
        goto label_176a2c;
    }
    ctx->pc = 0x176A24u;
    SET_GPR_U32(ctx, 31, 0x176A2Cu);
    ctx->pc = 0x169C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169C10_0x169c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176A2Cu; }
    }
    if (ctx->pc != 0x176A2Cu) { return; }
    ctx->pc = 0x176A2Cu;
label_176a2c:
    // 0x176a2c: 0x24030001
    ctx->pc = 0x176a2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_176a30:
    // 0x176a30: 0xae200000
    ctx->pc = 0x176a30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_176a34:
    // 0x176a34: 0x10000005
label_176a38:
    if (ctx->pc == 0x176A38u) {
        ctx->pc = 0x176A38u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x176A3Cu;
        goto label_176a3c;
    }
    ctx->pc = 0x176A34u;
    {
        const bool branch_taken_0x176a34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x176A38u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x176a34) {
            ctx->pc = 0x176A4Cu;
            goto label_176a4c;
        }
    }
    ctx->pc = 0x176A3Cu;
label_176a3c:
    // 0x176a3c: 0x0
    ctx->pc = 0x176a3cu;
    // NOP
label_176a40:
    // 0x176a40: 0x40202d
    ctx->pc = 0x176a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_176a44:
    // 0x176a44: 0x60f809
label_176a48:
    if (ctx->pc == 0x176A48u) {
        ctx->pc = 0x176A48u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176A4Cu;
        goto label_176a4c;
    }
    ctx->pc = 0x176A44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x176A4Cu);
        ctx->pc = 0x176A48u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1769C0u: goto label_1769c0;
            case 0x1769C4u: goto label_1769c4;
            case 0x1769C8u: goto label_1769c8;
            case 0x1769CCu: goto label_1769cc;
            case 0x1769D0u: goto label_1769d0;
            case 0x1769D4u: goto label_1769d4;
            case 0x1769D8u: goto label_1769d8;
            case 0x1769DCu: goto label_1769dc;
            case 0x1769E0u: goto label_1769e0;
            case 0x1769E4u: goto label_1769e4;
            case 0x1769E8u: goto label_1769e8;
            case 0x1769ECu: goto label_1769ec;
            case 0x1769F0u: goto label_1769f0;
            case 0x1769F4u: goto label_1769f4;
            case 0x1769F8u: goto label_1769f8;
            case 0x1769FCu: goto label_1769fc;
            case 0x176A00u: goto label_176a00;
            case 0x176A04u: goto label_176a04;
            case 0x176A08u: goto label_176a08;
            case 0x176A0Cu: goto label_176a0c;
            case 0x176A10u: goto label_176a10;
            case 0x176A14u: goto label_176a14;
            case 0x176A18u: goto label_176a18;
            case 0x176A1Cu: goto label_176a1c;
            case 0x176A20u: goto label_176a20;
            case 0x176A24u: goto label_176a24;
            case 0x176A28u: goto label_176a28;
            case 0x176A2Cu: goto label_176a2c;
            case 0x176A30u: goto label_176a30;
            case 0x176A34u: goto label_176a34;
            case 0x176A38u: goto label_176a38;
            case 0x176A3Cu: goto label_176a3c;
            case 0x176A40u: goto label_176a40;
            case 0x176A44u: goto label_176a44;
            case 0x176A48u: goto label_176a48;
            case 0x176A4Cu: goto label_176a4c;
            case 0x176A50u: goto label_176a50;
            case 0x176A54u: goto label_176a54;
            case 0x176A58u: goto label_176a58;
            case 0x176A5Cu: goto label_176a5c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x176A4Cu; }
            if (ctx->pc != 0x176A4Cu) { return; }
        }
    }
    ctx->pc = 0x176A4Cu;
label_176a4c:
    // 0x176a4c: 0xdfb00000
    ctx->pc = 0x176a4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_176a50:
    // 0x176a50: 0xdfb10008
    ctx->pc = 0x176a50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_176a54:
    // 0x176a54: 0xdfbf0010
    ctx->pc = 0x176a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_176a58:
    // 0x176a58: 0x3e00008
label_176a5c:
    if (ctx->pc == 0x176A5Cu) {
        ctx->pc = 0x176A5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x176A60u;
        goto label_fallthrough_0x176a58;
    }
    ctx->pc = 0x176A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176A5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1769C0u: goto label_1769c0;
            case 0x1769C4u: goto label_1769c4;
            case 0x1769C8u: goto label_1769c8;
            case 0x1769CCu: goto label_1769cc;
            case 0x1769D0u: goto label_1769d0;
            case 0x1769D4u: goto label_1769d4;
            case 0x1769D8u: goto label_1769d8;
            case 0x1769DCu: goto label_1769dc;
            case 0x1769E0u: goto label_1769e0;
            case 0x1769E4u: goto label_1769e4;
            case 0x1769E8u: goto label_1769e8;
            case 0x1769ECu: goto label_1769ec;
            case 0x1769F0u: goto label_1769f0;
            case 0x1769F4u: goto label_1769f4;
            case 0x1769F8u: goto label_1769f8;
            case 0x1769FCu: goto label_1769fc;
            case 0x176A00u: goto label_176a00;
            case 0x176A04u: goto label_176a04;
            case 0x176A08u: goto label_176a08;
            case 0x176A0Cu: goto label_176a0c;
            case 0x176A10u: goto label_176a10;
            case 0x176A14u: goto label_176a14;
            case 0x176A18u: goto label_176a18;
            case 0x176A1Cu: goto label_176a1c;
            case 0x176A20u: goto label_176a20;
            case 0x176A24u: goto label_176a24;
            case 0x176A28u: goto label_176a28;
            case 0x176A2Cu: goto label_176a2c;
            case 0x176A30u: goto label_176a30;
            case 0x176A34u: goto label_176a34;
            case 0x176A38u: goto label_176a38;
            case 0x176A3Cu: goto label_176a3c;
            case 0x176A40u: goto label_176a40;
            case 0x176A44u: goto label_176a44;
            case 0x176A48u: goto label_176a48;
            case 0x176A4Cu: goto label_176a4c;
            case 0x176A50u: goto label_176a50;
            case 0x176A54u: goto label_176a54;
            case 0x176A58u: goto label_176a58;
            case 0x176A5Cu: goto label_176a5c;
            default: break;
        }
        return;
    }
label_fallthrough_0x176a58:
    ctx->pc = 0x176A60u;
}
