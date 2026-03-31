#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00121F28
// Address: 0x121f28 - 0x122140
void sub_00121F28_0x121f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x121f28u;

    // 0x121f28: 0x27bdffd0
    ctx->pc = 0x121f28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x121f2c: 0x80302d
    ctx->pc = 0x121f2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121f30: 0xffb00000
    ctx->pc = 0x121f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x121f34: 0xffb10008
    ctx->pc = 0x121f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x121f38: 0xffb20010
    ctx->pc = 0x121f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x121f3c: 0xffb30018
    ctx->pc = 0x121f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x121f40: 0xffb40020
    ctx->pc = 0x121f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x121f44: 0xc0102d
    ctx->pc = 0x121f44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121f48: 0x2903c
    ctx->pc = 0x121f48u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x121f4c: 0x12903f
    ctx->pc = 0x121f4cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x121f50: 0x2803f
    ctx->pc = 0x121f50u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x121f54: 0x101d03
    ctx->pc = 0x121f54u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 20));
    // 0x121f58: 0x306307ff
    ctx->pc = 0x121f58u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 2047));
    // 0x121f5c: 0x2471fc01
    ctx->pc = 0x121f5cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 4294966273));
    // 0x121f60: 0x2a220014
    ctx->pc = 0x121f60u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 20));
    // 0x121f64: 0x10400034
    ctx->pc = 0x121F64u;
    {
        const bool branch_taken_0x121f64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x121F68u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        if (branch_taken_0x121f64) {
            ctx->pc = 0x122038u;
            goto label_122038;
        }
    }
    ctx->pc = 0x121F6Cu;
    // 0x121f6c: 0x6210018
    ctx->pc = 0x121F6Cu;
    {
        const bool branch_taken_0x121f6c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x121F70u;
        SET_GPR_U32(ctx, 5, ((uint32_t)15 << 16));
        if (branch_taken_0x121f6c) {
            ctx->pc = 0x121FD0u;
            goto label_121fd0;
        }
    }
    ctx->pc = 0x121F74u;
    // 0x121f74: 0x3c020024
    ctx->pc = 0x121f74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x121f78: 0xdc4592b0
    ctx->pc = 0x121f78u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294939312)));
    // 0x121f7c: 0xc04473c
    ctx->pc = 0x121F7Cu;
    SET_GPR_U32(ctx, 31, 0x121F84u);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121F84u; }
    }
    if (ctx->pc != 0x121F84u) { return; }
    ctx->pc = 0x121F84u;
    // 0x121f84: 0x282d
    ctx->pc = 0x121f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121f88: 0x40202d
    ctx->pc = 0x121f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121f8c: 0xc0448a6
    ctx->pc = 0x121F8Cu;
    SET_GPR_U32(ctx, 31, 0x121F94u);
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121F94u; }
    }
    if (ctx->pc != 0x121F94u) { return; }
    ctx->pc = 0x121F94u;
    // 0x121f94: 0x18400055
    ctx->pc = 0x121F94u;
    {
        const bool branch_taken_0x121f94 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x121f94) {
            ctx->pc = 0x1220ECu;
            goto label_1220ec;
        }
    }
    ctx->pc = 0x121F9Cu;
    // 0x121f9c: 0x6000004
    ctx->pc = 0x121F9Cu;
    {
        const bool branch_taken_0x121f9c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x121FA0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
        if (branch_taken_0x121f9c) {
            ctx->pc = 0x121FB0u;
            goto label_121fb0;
        }
    }
    ctx->pc = 0x121FA4u;
    // 0x121fa4: 0x902d
    ctx->pc = 0x121fa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121fa8: 0x10000050
    ctx->pc = 0x121FA8u;
    {
        const bool branch_taken_0x121fa8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x121FACu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x121fa8) {
            ctx->pc = 0x1220ECu;
            goto label_1220ec;
        }
    }
    ctx->pc = 0x121FB0u;
label_121fb0:
    // 0x121fb0: 0x3442ffff
    ctx->pc = 0x121fb0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x121fb4: 0x2021024
    ctx->pc = 0x121fb4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x121fb8: 0x521025
    ctx->pc = 0x121fb8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x121fbc: 0x1040004b
    ctx->pc = 0x121FBCu;
    {
        const bool branch_taken_0x121fbc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x121fbc) {
            ctx->pc = 0x1220ECu;
            goto label_1220ec;
        }
    }
    ctx->pc = 0x121FC4u;
    // 0x121fc4: 0x3c10bff0
    ctx->pc = 0x121fc4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)49136 << 16));
    // 0x121fc8: 0x10000048
    ctx->pc = 0x121FC8u;
    {
        const bool branch_taken_0x121fc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x121FCCu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x121fc8) {
            ctx->pc = 0x1220ECu;
            goto label_1220ec;
        }
    }
    ctx->pc = 0x121FD0u;
label_121fd0:
    // 0x121fd0: 0xc0102d
    ctx->pc = 0x121fd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121fd4: 0x34a5ffff
    ctx->pc = 0x121fd4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x121fd8: 0x2259807
    ctx->pc = 0x121fd8u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 17) & 0x1F));
    // 0x121fdc: 0x2131824
    ctx->pc = 0x121fdcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x121fe0: 0x721825
    ctx->pc = 0x121fe0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x121fe4: 0x5060004e
    ctx->pc = 0x121FE4u;
    {
        const bool branch_taken_0x121fe4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x121fe4) {
            ctx->pc = 0x121FE8u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x122120u;
            goto label_122120;
        }
    }
    ctx->pc = 0x121FECu;
    // 0x121fec: 0x3c020024
    ctx->pc = 0x121fecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x121ff0: 0xdc4592b0
    ctx->pc = 0x121ff0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294939312)));
    // 0x121ff4: 0xc04473c
    ctx->pc = 0x121FF4u;
    SET_GPR_U32(ctx, 31, 0x121FFCu);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121FFCu; }
    }
    if (ctx->pc != 0x121FFCu) { return; }
    ctx->pc = 0x121FFCu;
    // 0x121ffc: 0x282d
    ctx->pc = 0x121ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122000: 0x40202d
    ctx->pc = 0x122000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122004: 0xc0448a6
    ctx->pc = 0x122004u;
    SET_GPR_U32(ctx, 31, 0x12200Cu);
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12200Cu; }
    }
    if (ctx->pc != 0x12200Cu) { return; }
    ctx->pc = 0x12200Cu;
    // 0x12200c: 0x18400037
    ctx->pc = 0x12200Cu;
    {
        const bool branch_taken_0x12200c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x12200c) {
            ctx->pc = 0x1220ECu;
            goto label_1220ec;
        }
    }
    ctx->pc = 0x122014u;
    // 0x122014: 0x6010005
    ctx->pc = 0x122014u;
    {
        const bool branch_taken_0x122014 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x122018u;
        SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
        if (branch_taken_0x122014) {
            ctx->pc = 0x12202Cu;
            goto label_12202c;
        }
    }
    ctx->pc = 0x12201Cu;
    // 0x12201c: 0x3c020010
    ctx->pc = 0x12201cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
    // 0x122020: 0x2221007
    ctx->pc = 0x122020u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x122024: 0x2028021
    ctx->pc = 0x122024u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x122028: 0x131027
    ctx->pc = 0x122028u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
label_12202c:
    // 0x12202c: 0x902d
    ctx->pc = 0x12202cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122030: 0x1000002e
    ctx->pc = 0x122030u;
    {
        const bool branch_taken_0x122030 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x122034u;
        SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        if (branch_taken_0x122030) {
            ctx->pc = 0x1220ECu;
            goto label_1220ec;
        }
    }
    ctx->pc = 0x122038u;
label_122038:
    // 0x122038: 0x2a220034
    ctx->pc = 0x122038u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 52));
    // 0x12203c: 0x1440000a
    ctx->pc = 0x12203Cu;
    {
        const bool branch_taken_0x12203c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x122040u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294966253));
        if (branch_taken_0x12203c) {
            ctx->pc = 0x122068u;
            goto label_122068;
        }
    }
    ctx->pc = 0x122044u;
    // 0x122044: 0x24020400
    ctx->pc = 0x122044u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1024));
    // 0x122048: 0x16220033
    ctx->pc = 0x122048u;
    {
        const bool branch_taken_0x122048 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x122048) {
            ctx->pc = 0x122118u;
            goto label_122118;
        }
    }
    ctx->pc = 0x122050u;
    // 0x122050: 0xc0282d
    ctx->pc = 0x122050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122054: 0xc04473c
    ctx->pc = 0x122054u;
    SET_GPR_U32(ctx, 31, 0x12205Cu);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12205Cu; }
    }
    if (ctx->pc != 0x12205Cu) { return; }
    ctx->pc = 0x12205Cu;
    // 0x12205c: 0x10000030
    ctx->pc = 0x12205Cu;
    {
        const bool branch_taken_0x12205c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x122060u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x12205c) {
            ctx->pc = 0x122120u;
            goto label_122120;
        }
    }
    ctx->pc = 0x122064u;
    // 0x122064: 0x0
    ctx->pc = 0x122064u;
    // NOP
label_122068:
    // 0x122068: 0x2403ffff
    ctx->pc = 0x122068u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12206c: 0x439806
    ctx->pc = 0x12206cu;
    SET_GPR_U32(ctx, 19, SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x122070: 0xc0102d
    ctx->pc = 0x122070u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122074: 0x2531824
    ctx->pc = 0x122074u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x122078: 0x50600029
    ctx->pc = 0x122078u;
    {
        const bool branch_taken_0x122078 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x122078) {
            ctx->pc = 0x12207Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x122120u;
            goto label_122120;
        }
    }
    ctx->pc = 0x122080u;
    // 0x122080: 0x3c020024
    ctx->pc = 0x122080u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x122084: 0xdc4592b0
    ctx->pc = 0x122084u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294939312)));
    // 0x122088: 0xc04473c
    ctx->pc = 0x122088u;
    SET_GPR_U32(ctx, 31, 0x122090u);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122090u; }
    }
    if (ctx->pc != 0x122090u) { return; }
    ctx->pc = 0x122090u;
    // 0x122090: 0x282d
    ctx->pc = 0x122090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122094: 0x40202d
    ctx->pc = 0x122094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122098: 0xc0448a6
    ctx->pc = 0x122098u;
    SET_GPR_U32(ctx, 31, 0x1220A0u);
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1220A0u; }
    }
    if (ctx->pc != 0x1220A0u) { return; }
    ctx->pc = 0x1220A0u;
    // 0x1220a0: 0x18400012
    ctx->pc = 0x1220A0u;
    {
        const bool branch_taken_0x1220a0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1220a0) {
            ctx->pc = 0x1220ECu;
            goto label_1220ec;
        }
    }
    ctx->pc = 0x1220A8u;
    // 0x1220a8: 0x601000f
    ctx->pc = 0x1220A8u;
    {
        const bool branch_taken_0x1220a8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1220ACu;
        SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
        if (branch_taken_0x1220a8) {
            ctx->pc = 0x1220E8u;
            goto label_1220e8;
        }
    }
    ctx->pc = 0x1220B0u;
    // 0x1220b0: 0x24020014
    ctx->pc = 0x1220b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x1220b4: 0x16220004
    ctx->pc = 0x1220B4u;
    {
        const bool branch_taken_0x1220b4 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x1220B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 52));
        if (branch_taken_0x1220b4) {
            ctx->pc = 0x1220C8u;
            goto label_1220c8;
        }
    }
    ctx->pc = 0x1220BCu;
    // 0x1220bc: 0x10000009
    ctx->pc = 0x1220BCu;
    {
        const bool branch_taken_0x1220bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1220C0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x1220bc) {
            ctx->pc = 0x1220E4u;
            goto label_1220e4;
        }
    }
    ctx->pc = 0x1220C4u;
    // 0x1220c4: 0x0
    ctx->pc = 0x1220c4u;
    // NOP
label_1220c8:
    // 0x1220c8: 0x24030001
    ctx->pc = 0x1220c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1220cc: 0x511023
    ctx->pc = 0x1220ccu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1220d0: 0x431804
    ctx->pc = 0x1220d0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1220d4: 0x2431821
    ctx->pc = 0x1220d4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1220d8: 0x72102b
    ctx->pc = 0x1220d8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1220dc: 0x60902d
    ctx->pc = 0x1220dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1220e0: 0x2028021
    ctx->pc = 0x1220e0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1220e4:
    // 0x1220e4: 0x131027
    ctx->pc = 0x1220e4u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
label_1220e8:
    // 0x1220e8: 0x2429024
    ctx->pc = 0x1220e8u;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1220ec:
    // 0x1220ec: 0x3c03ffff
    ctx->pc = 0x1220ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x1220f0: 0x3183e
    ctx->pc = 0x1220f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1220f4: 0x10203c
    ctx->pc = 0x1220f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1220f8: 0x283a024
    ctx->pc = 0x1220f8u;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1220fc: 0x2403ffff
    ctx->pc = 0x1220fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x122100: 0x3183c
    ctx->pc = 0x122100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x122104: 0x12103c
    ctx->pc = 0x122104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x122108: 0x284a025
    ctx->pc = 0x122108u;
    SET_GPR_U32(ctx, 20, OR32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x12210c: 0x2103e
    ctx->pc = 0x12210cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x122110: 0x283a024
    ctx->pc = 0x122110u;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x122114: 0x2823025
    ctx->pc = 0x122114u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_122118:
    // 0x122118: 0xc0102d
    ctx->pc = 0x122118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12211c: 0xdfb00000
    ctx->pc = 0x12211cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_122120:
    // 0x122120: 0xdfb10008
    ctx->pc = 0x122120u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x122124: 0xdfb20010
    ctx->pc = 0x122124u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122128: 0xdfb30018
    ctx->pc = 0x122128u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12212c: 0xdfb40020
    ctx->pc = 0x12212cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122130: 0xdfbf0028
    ctx->pc = 0x122130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x122134: 0x3e00008
    ctx->pc = 0x122134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122138u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x121FB0u: goto label_121fb0;
            case 0x121FD0u: goto label_121fd0;
            case 0x12202Cu: goto label_12202c;
            case 0x122038u: goto label_122038;
            case 0x122068u: goto label_122068;
            case 0x1220C8u: goto label_1220c8;
            case 0x1220E4u: goto label_1220e4;
            case 0x1220E8u: goto label_1220e8;
            case 0x1220ECu: goto label_1220ec;
            case 0x122118u: goto label_122118;
            case 0x122120u: goto label_122120;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12213Cu;
    // 0x12213c: 0x0
    ctx->pc = 0x12213cu;
    // NOP
}
