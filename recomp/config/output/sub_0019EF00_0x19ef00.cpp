#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0019EF00
// Address: 0x19ef00 - 0x19f040
void sub_0019EF00_0x19ef00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x19ef00u;

    // 0x19ef00: 0x27bdffa0
    ctx->pc = 0x19ef00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19ef04: 0xffbf0050
    ctx->pc = 0x19ef04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x19ef08: 0x7fb40040
    ctx->pc = 0x19ef08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19ef0c: 0x7fb30030
    ctx->pc = 0x19ef0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19ef10: 0x7fb20020
    ctx->pc = 0x19ef10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19ef14: 0x80982d
    ctx->pc = 0x19ef14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ef18: 0x7fb10010
    ctx->pc = 0x19ef18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19ef1c: 0xa0902d
    ctx->pc = 0x19ef1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ef20: 0x7fb00000
    ctx->pc = 0x19ef20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19ef24: 0x1000003a
    ctx->pc = 0x19EF24u;
    {
        const bool branch_taken_0x19ef24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19EF28u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19ef24) {
            ctx->pc = 0x19F010u;
            goto label_19f010;
        }
    }
    ctx->pc = 0x19EF2Cu;
label_19ef2c:
    // 0x19ef2c: 0x8e710000
    ctx->pc = 0x19ef2cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x19ef30: 0x3222ffff
    ctx->pc = 0x19ef30u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 65535));
    // 0x19ef34: 0x10400019
    ctx->pc = 0x19EF34u;
    {
        const bool branch_taken_0x19ef34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19EF38u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4));
        if (branch_taken_0x19ef34) {
            ctx->pc = 0x19EF9Cu;
            goto label_19ef9c;
        }
    }
    ctx->pc = 0x19EF3Cu;
    // 0x19ef3c: 0x2444ffff
    ctx->pc = 0x19ef3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19ef40: 0x418c0
    ctx->pc = 0x19ef40u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x19ef44: 0x3c02002a
    ctx->pc = 0x19ef44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)42 << 16));
    // 0x19ef48: 0x641823
    ctx->pc = 0x19ef48u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19ef4c: 0x24428680
    ctx->pc = 0x19ef4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294936192));
    // 0x19ef50: 0x318c0
    ctx->pc = 0x19ef50u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x19ef54: 0x43a021
    ctx->pc = 0x19ef54u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19ef58: 0x82820035
    ctx->pc = 0x19ef58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 53)));
    // 0x19ef5c: 0x1440000f
    ctx->pc = 0x19EF5Cu;
    {
        const bool branch_taken_0x19ef5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x19ef5c) {
            ctx->pc = 0x19EF9Cu;
            goto label_19ef9c;
        }
    }
    ctx->pc = 0x19EF64u;
    // 0x19ef64: 0x86850012
    ctx->pc = 0x19ef64u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x19ef68: 0xc067c10
    ctx->pc = 0x19EF68u;
    SET_GPR_U32(ctx, 31, 0x19EF70u);
    ctx->pc = 0x19EF6Cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    ctx->pc = 0x19F040u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F040_0x19f040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EF70u; }
    }
    if (ctx->pc != 0x19EF70u) { return; }
    ctx->pc = 0x19EF70u;
    // 0x19ef70: 0x2403ffff
    ctx->pc = 0x19ef70u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19ef74: 0x14430003
    ctx->pc = 0x19EF74u;
    {
        const bool branch_taken_0x19ef74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x19EF78u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19ef74) {
            ctx->pc = 0x19EF84u;
            goto label_19ef84;
        }
    }
    ctx->pc = 0x19EF7Cu;
    // 0x19ef7c: 0x10000027
    ctx->pc = 0x19EF7Cu;
    {
        const bool branch_taken_0x19ef7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19EF80u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19ef7c) {
            ctx->pc = 0x19F01Cu;
            goto label_19f01c;
        }
    }
    ctx->pc = 0x19EF84u;
label_19ef84:
    // 0x19ef84: 0xc067b24
    ctx->pc = 0x19EF84u;
    SET_GPR_U32(ctx, 31, 0x19EF8Cu);
    ctx->pc = 0x19EF88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19EC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019EC90_0x19ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EF8Cu; }
    }
    if (ctx->pc != 0x19EF8Cu) { return; }
    ctx->pc = 0x19EF8Cu;
    // 0x19ef8c: 0x14400003
    ctx->pc = 0x19EF8Cu;
    {
        const bool branch_taken_0x19ef8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x19ef8c) {
            ctx->pc = 0x19EF9Cu;
            goto label_19ef9c;
        }
    }
    ctx->pc = 0x19EF94u;
    // 0x19ef94: 0x10000021
    ctx->pc = 0x19EF94u;
    {
        const bool branch_taken_0x19ef94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19EF98u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19ef94) {
            ctx->pc = 0x19F01Cu;
            goto label_19f01c;
        }
    }
    ctx->pc = 0x19EF9Cu;
label_19ef9c:
    // 0x19ef9c: 0x3c02ffff
    ctx->pc = 0x19ef9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x19efa0: 0x2221024
    ctx->pc = 0x19efa0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x19efa4: 0x21402
    ctx->pc = 0x19efa4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 16));
    // 0x19efa8: 0x10400018
    ctx->pc = 0x19EFA8u;
    {
        const bool branch_taken_0x19efa8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19EFACu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x19efa8) {
            ctx->pc = 0x19F00Cu;
            goto label_19f00c;
        }
    }
    ctx->pc = 0x19EFB0u;
    // 0x19efb0: 0x418c0
    ctx->pc = 0x19efb0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x19efb4: 0x3c020029
    ctx->pc = 0x19efb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x19efb8: 0x641823
    ctx->pc = 0x19efb8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19efbc: 0x24424e80
    ctx->pc = 0x19efbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20096));
    // 0x19efc0: 0x318c0
    ctx->pc = 0x19efc0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x19efc4: 0x438821
    ctx->pc = 0x19efc4u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19efc8: 0x82220035
    ctx->pc = 0x19efc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
    // 0x19efcc: 0x1440000f
    ctx->pc = 0x19EFCCu;
    {
        const bool branch_taken_0x19efcc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x19efcc) {
            ctx->pc = 0x19F00Cu;
            goto label_19f00c;
        }
    }
    ctx->pc = 0x19EFD4u;
    // 0x19efd4: 0x86250012
    ctx->pc = 0x19efd4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x19efd8: 0xc067c10
    ctx->pc = 0x19EFD8u;
    SET_GPR_U32(ctx, 31, 0x19EFE0u);
    ctx->pc = 0x19EFDCu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->pc = 0x19F040u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F040_0x19f040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EFE0u; }
    }
    if (ctx->pc != 0x19EFE0u) { return; }
    ctx->pc = 0x19EFE0u;
    // 0x19efe0: 0x2403ffff
    ctx->pc = 0x19efe0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19efe4: 0x14430003
    ctx->pc = 0x19EFE4u;
    {
        const bool branch_taken_0x19efe4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x19EFE8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19efe4) {
            ctx->pc = 0x19EFF4u;
            goto label_19eff4;
        }
    }
    ctx->pc = 0x19EFECu;
    // 0x19efec: 0x1000000b
    ctx->pc = 0x19EFECu;
    {
        const bool branch_taken_0x19efec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19EFF0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19efec) {
            ctx->pc = 0x19F01Cu;
            goto label_19f01c;
        }
    }
    ctx->pc = 0x19EFF4u;
label_19eff4:
    // 0x19eff4: 0xc067b24
    ctx->pc = 0x19EFF4u;
    SET_GPR_U32(ctx, 31, 0x19EFFCu);
    ctx->pc = 0x19EFF8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19EC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019EC90_0x19ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EFFCu; }
    }
    if (ctx->pc != 0x19EFFCu) { return; }
    ctx->pc = 0x19EFFCu;
    // 0x19effc: 0x14400003
    ctx->pc = 0x19EFFCu;
    {
        const bool branch_taken_0x19effc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x19effc) {
            ctx->pc = 0x19F00Cu;
            goto label_19f00c;
        }
    }
    ctx->pc = 0x19F004u;
    // 0x19f004: 0x10000005
    ctx->pc = 0x19F004u;
    {
        const bool branch_taken_0x19f004 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19F008u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19f004) {
            ctx->pc = 0x19F01Cu;
            goto label_19f01c;
        }
    }
    ctx->pc = 0x19F00Cu;
label_19f00c:
    // 0x19f00c: 0x26100001
    ctx->pc = 0x19f00cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_19f010:
    // 0x19f010: 0x212102a
    ctx->pc = 0x19f010u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
    // 0x19f014: 0x1440ffc5
    ctx->pc = 0x19F014u;
    {
        const bool branch_taken_0x19f014 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19F018u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19f014) {
            ctx->pc = 0x19EF2Cu;
            goto label_19ef2c;
        }
    }
    ctx->pc = 0x19F01Cu;
label_19f01c:
    // 0x19f01c: 0xdfbf0050
    ctx->pc = 0x19f01cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19f020: 0x7bb40040
    ctx->pc = 0x19f020u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19f024: 0x7bb30030
    ctx->pc = 0x19f024u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f028: 0x7bb20020
    ctx->pc = 0x19f028u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f02c: 0x7bb10010
    ctx->pc = 0x19f02cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f030: 0x7bb00000
    ctx->pc = 0x19f030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f034: 0x3e00008
    ctx->pc = 0x19F034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F038u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19EF2Cu: goto label_19ef2c;
            case 0x19EF84u: goto label_19ef84;
            case 0x19EF9Cu: goto label_19ef9c;
            case 0x19EFF4u: goto label_19eff4;
            case 0x19F00Cu: goto label_19f00c;
            case 0x19F010u: goto label_19f010;
            case 0x19F01Cu: goto label_19f01c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19F03Cu;
    // 0x19f03c: 0x0
    ctx->pc = 0x19f03cu;
    // NOP
}
