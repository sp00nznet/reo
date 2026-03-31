#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011EF08
// Address: 0x11ef08 - 0x11f000
void sub_0011EF08_0x11ef08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11ef08u;

    // 0x11ef08: 0x27bdffb0
    ctx->pc = 0x11ef08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11ef0c: 0x41282
    ctx->pc = 0x11ef0cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 10));
    // 0x11ef10: 0xffb30030
    ctx->pc = 0x11ef10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11ef14: 0xffb20020
    ctx->pc = 0x11ef14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11ef18: 0xe0982d
    ctx->pc = 0x11ef18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ef1c: 0xffb10010
    ctx->pc = 0x11ef1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11ef20: 0xa0902d
    ctx->pc = 0x11ef20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ef24: 0xffb00000
    ctx->pc = 0x11ef24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11ef28: 0xc0882d
    ctx->pc = 0x11ef28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ef2c: 0xffbf0040
    ctx->pc = 0x11ef2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11ef30: 0x4800005
    ctx->pc = 0x11EF30u;
    {
        const bool branch_taken_0x11ef30 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x11EF34u;
        SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 2), 6));
        if (branch_taken_0x11ef30) {
            ctx->pc = 0x11EF48u;
            goto label_11ef48;
        }
    }
    ctx->pc = 0x11EF38u;
    // 0x11ef38: 0x8e030008
    ctx->pc = 0x11ef38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11ef3c: 0x308203ff
    ctx->pc = 0x11ef3cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 1023));
    // 0x11ef40: 0x50430004
    ctx->pc = 0x11EF40u;
    {
        const bool branch_taken_0x11ef40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x11ef40) {
            ctx->pc = 0x11EF44u;
            SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
            ctx->pc = 0x11EF54u;
            goto label_11ef54;
        }
    }
    ctx->pc = 0x11EF48u;
label_11ef48:
    // 0x11ef48: 0x3c028000
    ctx->pc = 0x11ef48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x11ef4c: 0x10000024
    ctx->pc = 0x11EF4Cu;
    {
        const bool branch_taken_0x11ef4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11EF50u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32770));
        if (branch_taken_0x11ef4c) {
            ctx->pc = 0x11EFE0u;
            goto label_11efe0;
        }
    }
    ctx->pc = 0x11EF54u;
label_11ef54:
    // 0x11ef54: 0x2442b3e8
    ctx->pc = 0x11ef54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947816));
    // 0x11ef58: 0x8c43001c
    ctx->pc = 0x11ef58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x11ef5c: 0x54640004
    ctx->pc = 0x11EF5Cu;
    {
        const bool branch_taken_0x11ef5c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x11ef5c) {
            ctx->pc = 0x11EF60u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x11EF70u;
            goto label_11ef70;
        }
    }
    ctx->pc = 0x11EF64u;
    // 0x11ef64: 0x3c028000
    ctx->pc = 0x11ef64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x11ef68: 0x1000001d
    ctx->pc = 0x11EF68u;
    {
        const bool branch_taken_0x11ef68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11EF6Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16));
        if (branch_taken_0x11ef68) {
            ctx->pc = 0x11EFE0u;
            goto label_11efe0;
        }
    }
    ctx->pc = 0x11EF70u;
label_11ef70:
    // 0x11ef70: 0x30620002
    ctx->pc = 0x11ef70u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
    // 0x11ef74: 0x10400004
    ctx->pc = 0x11EF74u;
    {
        const bool branch_taken_0x11ef74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x11ef74) {
            ctx->pc = 0x11EF88u;
            goto label_11ef88;
        }
    }
    ctx->pc = 0x11EF7Cu;
    // 0x11ef7c: 0xc047932
    ctx->pc = 0x11EF7Cu;
    SET_GPR_U32(ctx, 31, 0x11EF84u);
    ctx->pc = 0x11EF80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11E4C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E4C8_0x11e4c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EF84u; }
    }
    if (ctx->pc != 0x11EF84u) { return; }
    ctx->pc = 0x11EF84u;
    // 0x11ef84: 0x8e03000c
    ctx->pc = 0x11ef84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11ef88:
    // 0x11ef88: 0x16200006
    ctx->pc = 0x11EF88u;
    {
        const bool branch_taken_0x11ef88 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x11EF8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
        if (branch_taken_0x11ef88) {
            ctx->pc = 0x11EFA4u;
            goto label_11efa4;
        }
    }
    ctx->pc = 0x11EF90u;
    // 0x11ef90: 0x3c02ffff
    ctx->pc = 0x11ef90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x11ef94: 0x3442fffd
    ctx->pc = 0x11ef94u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65533));
    // 0x11ef98: 0x621024
    ctx->pc = 0x11ef98u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11ef9c: 0x1000000b
    ctx->pc = 0x11EF9Cu;
    {
        const bool branch_taken_0x11ef9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11EFA0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x11ef9c) {
            ctx->pc = 0x11EFCCu;
            goto label_11efcc;
        }
    }
    ctx->pc = 0x11EFA4u;
label_11efa4:
    // 0x11efa4: 0x34620002
    ctx->pc = 0x11efa4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 2));
    // 0x11efa8: 0xfe120020
    ctx->pc = 0x11efa8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 18));
    // 0x11efac: 0xae02000c
    ctx->pc = 0x11efacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x11efb0: 0xae1c002c
    ctx->pc = 0x11efb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 28));
    // 0x11efb4: 0x8e02000c
    ctx->pc = 0x11efb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11efb8: 0x30420001
    ctx->pc = 0x11efb8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x11efbc: 0x10400003
    ctx->pc = 0x11EFBCu;
    {
        const bool branch_taken_0x11efbc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11EFC0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
        if (branch_taken_0x11efbc) {
            ctx->pc = 0x11EFCCu;
            goto label_11efcc;
        }
    }
    ctx->pc = 0x11EFC4u;
    // 0x11efc4: 0xc047910
    ctx->pc = 0x11EFC4u;
    SET_GPR_U32(ctx, 31, 0x11EFCCu);
    ctx->pc = 0x11EFC8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11E440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E440_0x11e440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EFCCu; }
    }
    if (ctx->pc != 0x11EFCCu) { return; }
    ctx->pc = 0x11EFCCu;
label_11efcc:
    // 0x11efcc: 0xc0479e8
    ctx->pc = 0x11EFCCu;
    SET_GPR_U32(ctx, 31, 0x11EFD4u);
    ctx->pc = 0x11E7A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E7A0_0x11e7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EFD4u; }
    }
    if (ctx->pc != 0x11EFD4u) { return; }
    ctx->pc = 0x11EFD4u;
    // 0x11efd4: 0xc0478ac
    ctx->pc = 0x11EFD4u;
    SET_GPR_U32(ctx, 31, 0x11EFDCu);
    ctx->pc = 0x11EFD8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11E2B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E2B0_0x11e2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EFDCu; }
    }
    if (ctx->pc != 0x11EFDCu) { return; }
    ctx->pc = 0x11EFDCu;
    // 0x11efdc: 0x102d
    ctx->pc = 0x11efdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11efe0:
    // 0x11efe0: 0xdfbf0040
    ctx->pc = 0x11efe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11efe4: 0xdfb30030
    ctx->pc = 0x11efe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11efe8: 0xdfb20020
    ctx->pc = 0x11efe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11efec: 0xdfb10010
    ctx->pc = 0x11efecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11eff0: 0xdfb00000
    ctx->pc = 0x11eff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11eff4: 0x3e00008
    ctx->pc = 0x11EFF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EFF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11EF48u: goto label_11ef48;
            case 0x11EF54u: goto label_11ef54;
            case 0x11EF70u: goto label_11ef70;
            case 0x11EF88u: goto label_11ef88;
            case 0x11EFA4u: goto label_11efa4;
            case 0x11EFCCu: goto label_11efcc;
            case 0x11EFE0u: goto label_11efe0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11EFFCu;
    // 0x11effc: 0x0
    ctx->pc = 0x11effcu;
    // NOP
}
