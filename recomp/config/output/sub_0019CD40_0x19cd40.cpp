#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0019CD40
// Address: 0x19cd40 - 0x19ce40
void sub_0019CD40_0x19cd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x19cd40u;

    // 0x19cd40: 0x27bdffd0
    ctx->pc = 0x19cd40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19cd44: 0x3c02002a
    ctx->pc = 0x19cd44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)42 << 16));
    // 0x19cd48: 0xffbf0010
    ctx->pc = 0x19cd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19cd4c: 0x24428680
    ctx->pc = 0x19cd4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294936192));
    // 0x19cd50: 0x7fb00000
    ctx->pc = 0x19cd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19cd54: 0xafa4002c
    ctx->pc = 0x19cd54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
    // 0x19cd58: 0x97a3002c
    ctx->pc = 0x19cd58u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x19cd5c: 0x2464ffff
    ctx->pc = 0x19cd5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19cd60: 0x418c0
    ctx->pc = 0x19cd60u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x19cd64: 0x641823
    ctx->pc = 0x19cd64u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19cd68: 0x318c0
    ctx->pc = 0x19cd68u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x19cd6c: 0x438021
    ctx->pc = 0x19cd6cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19cd70:
    // 0x19cd70: 0x24020003
    ctx->pc = 0x19cd70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x19cd74: 0x10a2000e
    ctx->pc = 0x19CD74u;
    {
        const bool branch_taken_0x19cd74 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x19CD78u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 44));
        if (branch_taken_0x19cd74) {
            ctx->pc = 0x19CDB0u;
            goto label_19cdb0;
        }
    }
    ctx->pc = 0x19CD7Cu;
    // 0x19cd7c: 0x24020002
    ctx->pc = 0x19cd7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x19cd80: 0x10a2000a
    ctx->pc = 0x19CD80u;
    {
        const bool branch_taken_0x19cd80 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x19cd80) {
            ctx->pc = 0x19CDACu;
            goto label_19cdac;
        }
    }
    ctx->pc = 0x19CD88u;
    // 0x19cd88: 0x24020005
    ctx->pc = 0x19cd88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x19cd8c: 0x10a20007
    ctx->pc = 0x19CD8Cu;
    {
        const bool branch_taken_0x19cd8c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x19cd8c) {
            ctx->pc = 0x19CDACu;
            goto label_19cdac;
        }
    }
    ctx->pc = 0x19CD94u;
    // 0x19cd94: 0x24020004
    ctx->pc = 0x19cd94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x19cd98: 0x10a2001f
    ctx->pc = 0x19CD98u;
    {
        const bool branch_taken_0x19cd98 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x19cd98) {
            ctx->pc = 0x19CE18u;
            goto label_19ce18;
        }
    }
    ctx->pc = 0x19CDA0u;
    // 0x19cda0: 0x24020001
    ctx->pc = 0x19cda0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cda4: 0x10a2001c
    ctx->pc = 0x19CDA4u;
    {
        const bool branch_taken_0x19cda4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x19cda4) {
            ctx->pc = 0x19CE18u;
            goto label_19ce18;
        }
    }
    ctx->pc = 0x19CDACu;
label_19cdac:
    // 0x19cdac: 0x27a4002c
    ctx->pc = 0x19cdacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 44));
label_19cdb0:
    // 0x19cdb0: 0xc067bc0
    ctx->pc = 0x19CDB0u;
    SET_GPR_U32(ctx, 31, 0x19CDB8u);
    ctx->pc = 0x19CDB4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19EF00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019EF00_0x19ef00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CDB8u; }
    }
    if (ctx->pc != 0x19CDB8u) { return; }
    ctx->pc = 0x19CDB8u;
    // 0x19cdb8: 0x14400005
    ctx->pc = 0x19CDB8u;
    {
        const bool branch_taken_0x19cdb8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19CDBCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19cdb8) {
            ctx->pc = 0x19CDD0u;
            goto label_19cdd0;
        }
    }
    ctx->pc = 0x19CDC0u;
    // 0x19cdc0: 0x24050004
    ctx->pc = 0x19cdc0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x19cdc4: 0x1000ffea
    ctx->pc = 0x19CDC4u;
    {
        const bool branch_taken_0x19cdc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19CDC8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        if (branch_taken_0x19cdc4) {
            ctx->pc = 0x19CD70u;
            goto label_19cd70;
        }
    }
    ctx->pc = 0x19CDCCu;
    // 0x19cdcc: 0x200202d
    ctx->pc = 0x19cdccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19cdd0:
    // 0x19cdd0: 0xc067390
    ctx->pc = 0x19CDD0u;
    SET_GPR_U32(ctx, 31, 0x19CDD8u);
    ctx->pc = 0x19CE40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CE40_0x19ce40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CDD8u; }
    }
    if (ctx->pc != 0x19CDD8u) { return; }
    ctx->pc = 0x19CDD8u;
    // 0x19cdd8: 0xc06322c
    ctx->pc = 0x19CDD8u;
    SET_GPR_U32(ctx, 31, 0x19CDE0u);
    ctx->pc = 0x19CDDCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x18C8B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018C8B0_0x18c8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CDE0u; }
    }
    if (ctx->pc != 0x19CDE0u) { return; }
    ctx->pc = 0x19CDE0u;
    // 0x19cde0: 0x40202d
    ctx->pc = 0x19cde0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cde4: 0xc063774
    ctx->pc = 0x19CDE4u;
    SET_GPR_U32(ctx, 31, 0x19CDECu);
    ctx->pc = 0x19CDE8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x18DDD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DDD0_0x18ddd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CDECu; }
    }
    if (ctx->pc != 0x19CDECu) { return; }
    ctx->pc = 0x19CDECu;
    // 0x19cdec: 0x40802d
    ctx->pc = 0x19cdecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cdf0: 0x24050001
    ctx->pc = 0x19cdf0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cdf4: 0xc063340
    ctx->pc = 0x19CDF4u;
    SET_GPR_U32(ctx, 31, 0x19CDFCu);
    ctx->pc = 0x19CDF8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18CD00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018CD00_0x18cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CDFCu; }
    }
    if (ctx->pc != 0x19CDFCu) { return; }
    ctx->pc = 0x19CDFCu;
    // 0x19cdfc: 0x10293c
    ctx->pc = 0x19cdfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 4));
    // 0x19ce00: 0x3c07002a
    ctx->pc = 0x19ce00u;
    SET_GPR_U32(ctx, 7, ((uint32_t)42 << 16));
    // 0x19ce04: 0x5293e
    ctx->pc = 0x19ce04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 4));
    // 0x19ce08: 0x200302d
    ctx->pc = 0x19ce08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ce0c: 0x202d
    ctx->pc = 0x19ce0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ce10: 0xc0633ec
    ctx->pc = 0x19CE10u;
    SET_GPR_U32(ctx, 31, 0x19CE18u);
    ctx->pc = 0x19CE14u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294964976));
    ctx->pc = 0x18CFB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018CFB0_0x18cfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CE18u; }
    }
    if (ctx->pc != 0x19CE18u) { return; }
    ctx->pc = 0x19CE18u;
label_19ce18:
    // 0x19ce18: 0x3c01002a
    ctx->pc = 0x19ce18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19ce1c: 0x24020001
    ctx->pc = 0x19ce1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ce20: 0x8c23fee0
    ctx->pc = 0x19ce20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294967008)));
    // 0x19ce24: 0x24630001
    ctx->pc = 0x19ce24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x19ce28: 0x3c01002a
    ctx->pc = 0x19ce28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19ce2c: 0xac23fee0
    ctx->pc = 0x19ce2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294967008), GPR_U32(ctx, 3));
    // 0x19ce30: 0xdfbf0010
    ctx->pc = 0x19ce30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ce34: 0x7bb00000
    ctx->pc = 0x19ce34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ce38: 0x3e00008
    ctx->pc = 0x19CE38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CE3Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19CD70u: goto label_19cd70;
            case 0x19CDACu: goto label_19cdac;
            case 0x19CDB0u: goto label_19cdb0;
            case 0x19CDD0u: goto label_19cdd0;
            case 0x19CE18u: goto label_19ce18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19CE40u;
}
