#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00186A88
// Address: 0x186a88 - 0x186ba8
void sub_00186A88_0x186a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x186a88u;

    // 0x186a88: 0x27bdfd50
    ctx->pc = 0x186a88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966608));
    // 0x186a8c: 0xffb10298
    ctx->pc = 0x186a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 664), GPR_U64(ctx, 17));
    // 0x186a90: 0x80882d
    ctx->pc = 0x186a90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186a94: 0xffb202a0
    ctx->pc = 0x186a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 18));
    // 0x186a98: 0xffb00290
    ctx->pc = 0x186a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 16));
    // 0x186a9c: 0xffbf02a8
    ctx->pc = 0x186a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 680), GPR_U64(ctx, 31));
    // 0x186aa0: 0xc062210
    ctx->pc = 0x186AA0u;
    SET_GPR_U32(ctx, 31, 0x186AA8u);
    ctx->pc = 0x186AA4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x188840u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00188840_0x188840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186AA8u; }
    }
    if (ctx->pc != 0x186AA8u) { return; }
    ctx->pc = 0x186AA8u;
    // 0x186aa8: 0x14400005
    ctx->pc = 0x186AA8u;
    {
        const bool branch_taken_0x186aa8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x186AACu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2200));
        if (branch_taken_0x186aa8) {
            ctx->pc = 0x186AC0u;
            goto label_186ac0;
        }
    }
    ctx->pc = 0x186AB0u;
    // 0x186ab0: 0x3c028101
    ctx->pc = 0x186ab0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x186ab4: 0x10000035
    ctx->pc = 0x186AB4u;
    {
        const bool branch_taken_0x186ab4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x186AB8u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 19));
        if (branch_taken_0x186ab4) {
            ctx->pc = 0x186B8Cu;
            goto label_186b8c;
        }
    }
    ctx->pc = 0x186ABCu;
    // 0x186abc: 0x0
    ctx->pc = 0x186abcu;
    // NOP
label_186ac0:
    // 0x186ac0: 0x3c028101
    ctx->pc = 0x186ac0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x186ac4: 0x2231818
    ctx->pc = 0x186ac4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x186ac8: 0x3c040028
    ctx->pc = 0x186ac8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)40 << 16));
    // 0x186acc: 0x832021
    ctx->pc = 0x186accu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x186ad0: 0x8c8463d4
    ctx->pc = 0x186ad0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 25556)));
    // 0x186ad4: 0x1080002d
    ctx->pc = 0x186AD4u;
    {
        const bool branch_taken_0x186ad4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x186AD8u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 111));
        if (branch_taken_0x186ad4) {
            ctx->pc = 0x186B8Cu;
            goto label_186b8c;
        }
    }
    ctx->pc = 0x186ADCu;
    // 0x186adc: 0x27b00200
    ctx->pc = 0x186adcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 512));
    // 0x186ae0: 0x220202d
    ctx->pc = 0x186ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186ae4: 0x240282d
    ctx->pc = 0x186ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186ae8: 0xc0609a2
    ctx->pc = 0x186AE8u;
    SET_GPR_U32(ctx, 31, 0x186AF0u);
    ctx->pc = 0x186AECu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182688u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182688_0x182688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186AF0u; }
    }
    if (ctx->pc != 0x186AF0u) { return; }
    ctx->pc = 0x186AF0u;
    // 0x186af0: 0x10400005
    ctx->pc = 0x186AF0u;
    {
        const bool branch_taken_0x186af0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x186af0) {
            ctx->pc = 0x186B08u;
            goto label_186b08;
        }
    }
    ctx->pc = 0x186AF8u;
    // 0x186af8: 0xc06089c
    ctx->pc = 0x186AF8u;
    SET_GPR_U32(ctx, 31, 0x186B00u);
    ctx->pc = 0x186AFCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182270u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182270_0x182270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186B00u; }
    }
    if (ctx->pc != 0x186B00u) { return; }
    ctx->pc = 0x186B00u;
    // 0x186b00: 0x14400005
    ctx->pc = 0x186B00u;
    {
        const bool branch_taken_0x186b00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x186b00) {
            ctx->pc = 0x186B18u;
            goto label_186b18;
        }
    }
    ctx->pc = 0x186B08u;
label_186b08:
    // 0x186b08: 0x3c028101
    ctx->pc = 0x186b08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x186b0c: 0x1000001f
    ctx->pc = 0x186B0Cu;
    {
        const bool branch_taken_0x186b0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x186B10u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 22));
        if (branch_taken_0x186b0c) {
            ctx->pc = 0x186B8Cu;
            goto label_186b8c;
        }
    }
    ctx->pc = 0x186B14u;
    // 0x186b14: 0x0
    ctx->pc = 0x186b14u;
    // NOP
label_186b18:
    // 0x186b18: 0xc060880
    ctx->pc = 0x186B18u;
    SET_GPR_U32(ctx, 31, 0x186B20u);
    ctx->pc = 0x186B1Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182200_0x182200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186B20u; }
    }
    if (ctx->pc != 0x186B20u) { return; }
    ctx->pc = 0x186B20u;
    // 0x186b20: 0x14400005
    ctx->pc = 0x186B20u;
    {
        const bool branch_taken_0x186b20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x186B24u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x186b20) {
            ctx->pc = 0x186B38u;
            goto label_186b38;
        }
    }
    ctx->pc = 0x186B28u;
    // 0x186b28: 0x3c028101
    ctx->pc = 0x186b28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x186b2c: 0x10000017
    ctx->pc = 0x186B2Cu;
    {
        const bool branch_taken_0x186b2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x186B30u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 91));
        if (branch_taken_0x186b2c) {
            ctx->pc = 0x186B8Cu;
            goto label_186b8c;
        }
    }
    ctx->pc = 0x186B34u;
    // 0x186b34: 0x0
    ctx->pc = 0x186b34u;
    // NOP
label_186b38:
    // 0x186b38: 0x220202d
    ctx->pc = 0x186b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186b3c: 0x3a0302d
    ctx->pc = 0x186b3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186b40: 0x382d
    ctx->pc = 0x186b40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186b44: 0xc0610d8
    ctx->pc = 0x186B44u;
    SET_GPR_U32(ctx, 31, 0x186B4Cu);
    ctx->pc = 0x186B48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x184360u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00184360_0x184360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186B4Cu; }
    }
    if (ctx->pc != 0x186B4Cu) { return; }
    ctx->pc = 0x186B4Cu;
    // 0x186b4c: 0x3c038101
    ctx->pc = 0x186b4cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)33025 << 16));
    // 0x186b50: 0x34630011
    ctx->pc = 0x186b50u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 17));
    // 0x186b54: 0x1443000d
    ctx->pc = 0x186B54u;
    {
        const bool branch_taken_0x186b54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x186B58u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 2));
        if (branch_taken_0x186b54) {
            ctx->pc = 0x186B8Cu;
            goto label_186b8c;
        }
    }
    ctx->pc = 0x186B5Cu;
    // 0x186b5c: 0x97a30000
    ctx->pc = 0x186b5cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186b60: 0x3c028101
    ctx->pc = 0x186b60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x186b64: 0x30630020
    ctx->pc = 0x186b64u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 32));
    // 0x186b68: 0x10600008
    ctx->pc = 0x186B68u;
    {
        const bool branch_taken_0x186b68 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x186B6Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 20));
        if (branch_taken_0x186b68) {
            ctx->pc = 0x186B8Cu;
            goto label_186b8c;
        }
    }
    ctx->pc = 0x186B70u;
    // 0x186b70: 0x8fa50010
    ctx->pc = 0x186b70u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186b74: 0x220202d
    ctx->pc = 0x186b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186b78: 0x8fa60004
    ctx->pc = 0x186b78u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x186b7c: 0xc061318
    ctx->pc = 0x186B7Cu;
    SET_GPR_U32(ctx, 31, 0x186B84u);
    ctx->pc = 0x186B80u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 640));
    ctx->pc = 0x184C60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00184C60_0x184c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186B84u; }
    }
    if (ctx->pc != 0x186B84u) { return; }
    ctx->pc = 0x186B84u;
    // 0x186b84: 0x8fa30280
    ctx->pc = 0x186b84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x186b88: 0x63100b
    ctx->pc = 0x186b88u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
label_186b8c:
    // 0x186b8c: 0xdfb00290
    ctx->pc = 0x186b8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x186b90: 0xdfb10298
    ctx->pc = 0x186b90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x186b94: 0xdfb202a0
    ctx->pc = 0x186b94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x186b98: 0xdfbf02a8
    ctx->pc = 0x186b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x186b9c: 0x3e00008
    ctx->pc = 0x186B9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186BA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 688));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186AC0u: goto label_186ac0;
            case 0x186B08u: goto label_186b08;
            case 0x186B18u: goto label_186b18;
            case 0x186B38u: goto label_186b38;
            case 0x186B8Cu: goto label_186b8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x186BA4u;
    // 0x186ba4: 0x0
    ctx->pc = 0x186ba4u;
    // NOP
}
