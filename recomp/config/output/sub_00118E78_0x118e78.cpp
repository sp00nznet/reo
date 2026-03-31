#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00118E78
// Address: 0x118e78 - 0x1190b0
void sub_00118E78_0x118e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x118e78u;

    // 0x118e78: 0x27bdff40
    ctx->pc = 0x118e78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x118e7c: 0xffb40080
    ctx->pc = 0x118e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x118e80: 0xffb20060
    ctx->pc = 0x118e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x118e84: 0xc0a02d
    ctx->pc = 0x118e84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118e88: 0xffb50090
    ctx->pc = 0x118e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x118e8c: 0xa0902d
    ctx->pc = 0x118e8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118e90: 0xffb10050
    ctx->pc = 0x118e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x118e94: 0x3c150026
    ctx->pc = 0x118e94u;
    SET_GPR_U32(ctx, 21, ((uint32_t)38 << 16));
    // 0x118e98: 0xffb00040
    ctx->pc = 0x118e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x118e9c: 0x26b1ca40
    ctx->pc = 0x118e9cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 21), 4294953536));
    // 0x118ea0: 0xffbf00b0
    ctx->pc = 0x118ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x118ea4: 0xffb600a0
    ctx->pc = 0x118ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x118ea8: 0xc04607e
    ctx->pc = 0x118EA8u;
    SET_GPR_U32(ctx, 31, 0x118EB0u);
    ctx->pc = 0x118EACu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->pc = 0x1181F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001181F8_0x1181f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118EB0u; }
    }
    if (ctx->pc != 0x118EB0u) { return; }
    ctx->pc = 0x118EB0u;
    // 0x118eb0: 0x40802d
    ctx->pc = 0x118eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118eb4: 0xc04619c
    ctx->pc = 0x118EB4u;
    SET_GPR_U32(ctx, 31, 0x118EBCu);
    ctx->pc = 0x118EB8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x118670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118670_0x118670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118EBCu; }
    }
    if (ctx->pc != 0x118EBCu) { return; }
    ctx->pc = 0x118EBCu;
    // 0x118ebc: 0x3c030021
    ctx->pc = 0x118ebcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x118ec0: 0x8c629ddc
    ctx->pc = 0x118ec0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294942172)));
    // 0x118ec4: 0x14400005
    ctx->pc = 0x118EC4u;
    {
        const bool branch_taken_0x118ec4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x118ec4) {
            ctx->pc = 0x118EDCu;
            goto label_118edc;
        }
    }
    ctx->pc = 0x118ECCu;
    // 0x118ecc: 0xc0461a8
    ctx->pc = 0x118ECCu;
    SET_GPR_U32(ctx, 31, 0x118ED4u);
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118ED4u; }
    }
    if (ctx->pc != 0x118ED4u) { return; }
    ctx->pc = 0x118ED4u;
    // 0x118ed4: 0x1000006c
    ctx->pc = 0x118ED4u;
    {
        const bool branch_taken_0x118ed4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x118ED8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x118ed4) {
            ctx->pc = 0x119088u;
            goto label_119088;
        }
    }
    ctx->pc = 0x118EDCu;
label_118edc:
    // 0x118edc: 0x12000004
    ctx->pc = 0x118EDCu;
    {
        const bool branch_taken_0x118edc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x118edc) {
            ctx->pc = 0x118EF0u;
            goto label_118ef0;
        }
    }
    ctx->pc = 0x118EE4u;
    // 0x118ee4: 0x8e130004
    ctx->pc = 0x118ee4u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x118ee8: 0x16600005
    ctx->pc = 0x118EE8u;
    {
        const bool branch_taken_0x118ee8 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x118EECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
        if (branch_taken_0x118ee8) {
            ctx->pc = 0x118F00u;
            goto label_118f00;
        }
    }
    ctx->pc = 0x118EF0u;
label_118ef0:
    // 0x118ef0: 0xc0461a8
    ctx->pc = 0x118EF0u;
    SET_GPR_U32(ctx, 31, 0x118EF8u);
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118EF8u; }
    }
    if (ctx->pc != 0x118EF8u) { return; }
    ctx->pc = 0x118EF8u;
    // 0x118ef8: 0x10000063
    ctx->pc = 0x118EF8u;
    {
        const bool branch_taken_0x118ef8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x118EFCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967287));
        if (branch_taken_0x118ef8) {
            ctx->pc = 0x119088u;
            goto label_119088;
        }
    }
    ctx->pc = 0x118F00u;
label_118f00:
    // 0x118f00: 0x8e030000
    ctx->pc = 0x118f00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x118f04: 0x2442df40
    ctx->pc = 0x118f04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958912));
    // 0x118f08: 0xae320010
    ctx->pc = 0x118f08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
    // 0x118f0c: 0x2021023
    ctx->pc = 0x118f0cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x118f10: 0xae23000c
    ctx->pc = 0x118f10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x118f14: 0x21103
    ctx->pc = 0x118f14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x118f18: 0xae340014
    ctx->pc = 0x118f18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 20));
    // 0x118f1c: 0xae220018
    ctx->pc = 0x118f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x118f20: 0x24050001
    ctx->pc = 0x118f20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x118f24: 0x27a40010
    ctx->pc = 0x118f24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x118f28: 0xafa50014
    ctx->pc = 0x118f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x118f2c: 0xafa00018
    ctx->pc = 0x118f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x118f30: 0xc045188
    ctx->pc = 0x118F30u;
    SET_GPR_U32(ctx, 31, 0x118F38u);
    ctx->pc = 0x118F34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->pc = 0x114620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114620_0x114620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118F38u; }
    }
    if (ctx->pc != 0x118F38u) { return; }
    ctx->pc = 0x118F38u;
    // 0x118f38: 0x40902d
    ctx->pc = 0x118f38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f3c: 0x24030004
    ctx->pc = 0x118f3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x118f40: 0x27a20030
    ctx->pc = 0x118f40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 48));
    // 0x118f44: 0xae230008
    ctx->pc = 0x118f44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x118f48: 0xae220004
    ctx->pc = 0x118f48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x118f4c: 0x32628000
    ctx->pc = 0x118f4cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 32768));
    // 0x118f50: 0x10400024
    ctx->pc = 0x118F50u;
    {
        const bool branch_taken_0x118f50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x118F54u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294953536), GPR_U32(ctx, 18));
        if (branch_taken_0x118f50) {
            ctx->pc = 0x118FE4u;
            goto label_118fe4;
        }
    }
    ctx->pc = 0x118F58u;
    // 0x118f58: 0x3c140021
    ctx->pc = 0x118f58u;
    SET_GPR_U32(ctx, 20, ((uint32_t)33 << 16));
    // 0x118f5c: 0xc045198
    ctx->pc = 0x118F5Cu;
    SET_GPR_U32(ctx, 31, 0x118F64u);
    ctx->pc = 0x118F60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 4294942188)));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118F64u; }
    }
    if (ctx->pc != 0x118F64u) { return; }
    ctx->pc = 0x118F64u;
    // 0x118f64: 0x3c070021
    ctx->pc = 0x118f64u;
    SET_GPR_U32(ctx, 7, ((uint32_t)33 << 16));
    // 0x118f68: 0x302d
    ctx->pc = 0x118f68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f6c: 0x8ce39d58
    ctx->pc = 0x118f6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 4294942040)));
    // 0x118f70: 0x2402ffff
    ctx->pc = 0x118f70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x118f74: 0x14620008
    ctx->pc = 0x118F74u;
    {
        const bool branch_taken_0x118f74 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x118F78u;
        SET_GPR_U32(ctx, 22, ((uint32_t)38 << 16));
        if (branch_taken_0x118f74) {
            ctx->pc = 0x118F98u;
            goto label_118f98;
        }
    }
    ctx->pc = 0x118F7Cu;
    // 0x118f7c: 0x8ea3ca40
    ctx->pc = 0x118f7cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 4294953536)));
    // 0x118f80: 0x3c100026
    ctx->pc = 0x118f80u;
    SET_GPR_U32(ctx, 16, ((uint32_t)38 << 16));
    // 0x118f84: 0x31023
    ctx->pc = 0x118f84u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x118f88: 0xace39d58
    ctx->pc = 0x118f88u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294942040), GPR_U32(ctx, 3));
    // 0x118f8c: 0x10000011
    ctx->pc = 0x118F8Cu;
    {
        const bool branch_taken_0x118f8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x118F90u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294953536), GPR_U32(ctx, 2));
        if (branch_taken_0x118f8c) {
            ctx->pc = 0x118FD4u;
            goto label_118fd4;
        }
    }
    ctx->pc = 0x118F94u;
    // 0x118f94: 0x0
    ctx->pc = 0x118f94u;
    // NOP
label_118f98:
    // 0x118f98: 0x3c100026
    ctx->pc = 0x118f98u;
    SET_GPR_U32(ctx, 16, ((uint32_t)38 << 16));
    // 0x118f9c: 0x24c60001
    ctx->pc = 0x118f9cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_118fa0:
    // 0x118fa0: 0x28c20020
    ctx->pc = 0x118fa0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 32));
    // 0x118fa4: 0x1040000b
    ctx->pc = 0x118FA4u;
    {
        const bool branch_taken_0x118fa4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x118FA8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x118fa4) {
            ctx->pc = 0x118FD4u;
            goto label_118fd4;
        }
    }
    ctx->pc = 0x118FACu;
    // 0x118fac: 0x24e39d58
    ctx->pc = 0x118facu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 7), 4294942040));
    // 0x118fb0: 0x432821
    ctx->pc = 0x118fb0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x118fb4: 0x2404ffff
    ctx->pc = 0x118fb4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x118fb8: 0x8ca20000
    ctx->pc = 0x118fb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x118fbc: 0x1444fff8
    ctx->pc = 0x118FBCu;
    {
        const bool branch_taken_0x118fbc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x118FC0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x118fbc) {
            ctx->pc = 0x118FA0u;
            goto label_118fa0;
        }
    }
    ctx->pc = 0x118FC4u;
    // 0x118fc4: 0x8e220000
    ctx->pc = 0x118fc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x118fc8: 0x21823
    ctx->pc = 0x118fc8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x118fcc: 0xaca20000
    ctx->pc = 0x118fccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x118fd0: 0xae230000
    ctx->pc = 0x118fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_118fd4:
    // 0x118fd4: 0xc045190
    ctx->pc = 0x118FD4u;
    SET_GPR_U32(ctx, 31, 0x118FDCu);
    ctx->pc = 0x118FD8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 4294942188)));
    ctx->pc = 0x114640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114640_0x114640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118FDCu; }
    }
    if (ctx->pc != 0x118FDCu) { return; }
    ctx->pc = 0x118FDCu;
    // 0x118fdc: 0x10000004
    ctx->pc = 0x118FDCu;
    {
        const bool branch_taken_0x118fdc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x118FE0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294956672));
        if (branch_taken_0x118fdc) {
            ctx->pc = 0x118FF0u;
            goto label_118ff0;
        }
    }
    ctx->pc = 0x118FE4u;
label_118fe4:
    // 0x118fe4: 0x3c160026
    ctx->pc = 0x118fe4u;
    SET_GPR_U32(ctx, 22, ((uint32_t)38 << 16));
    // 0x118fe8: 0x3c100026
    ctx->pc = 0x118fe8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)38 << 16));
    // 0x118fec: 0x2610d680
    ctx->pc = 0x118fecu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294956672));
label_118ff0:
    // 0x118ff0: 0x26c4e140
    ctx->pc = 0x118ff0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 4294959424));
    // 0x118ff4: 0x26a7ca40
    ctx->pc = 0x118ff4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 21), 4294953536));
    // 0x118ff8: 0xafa00000
    ctx->pc = 0x118ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x118ffc: 0x24050004
    ctx->pc = 0x118ffcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x119000: 0x302d
    ctx->pc = 0x119000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119004: 0x2408001c
    ctx->pc = 0x119004u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 28));
    // 0x119008: 0x200482d
    ctx->pc = 0x119008u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11900c: 0x240a0004
    ctx->pc = 0x11900cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4));
    // 0x119010: 0xc045e7a
    ctx->pc = 0x119010u;
    SET_GPR_U32(ctx, 31, 0x119018u);
    ctx->pc = 0x119014u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119018u; }
    }
    if (ctx->pc != 0x119018u) { return; }
    ctx->pc = 0x119018u;
    // 0x119018: 0x4410007
    ctx->pc = 0x119018u;
    {
        const bool branch_taken_0x119018 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11901Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
        if (branch_taken_0x119018) {
            ctx->pc = 0x119038u;
            goto label_119038;
        }
    }
    ctx->pc = 0x119020u;
    // 0x119020: 0xc04518c
    ctx->pc = 0x119020u;
    SET_GPR_U32(ctx, 31, 0x119028u);
    ctx->pc = 0x119024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119028u; }
    }
    if (ctx->pc != 0x119028u) { return; }
    ctx->pc = 0x119028u;
    // 0x119028: 0xc0461a8
    ctx->pc = 0x119028u;
    SET_GPR_U32(ctx, 31, 0x119030u);
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119030u; }
    }
    if (ctx->pc != 0x119030u) { return; }
    ctx->pc = 0x119030u;
    // 0x119030: 0x10000015
    ctx->pc = 0x119030u;
    {
        const bool branch_taken_0x119030 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x119034u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967285));
        if (branch_taken_0x119030) {
            ctx->pc = 0x119088u;
            goto label_119088;
        }
    }
    ctx->pc = 0x119038u;
label_119038:
    // 0x119038: 0x2021025
    ctx->pc = 0x119038u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x11903c: 0xc0461a8
    ctx->pc = 0x11903Cu;
    SET_GPR_U32(ctx, 31, 0x119044u);
    ctx->pc = 0x119040u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119044u; }
    }
    if (ctx->pc != 0x119044u) { return; }
    ctx->pc = 0x119044u;
    // 0x119044: 0x16000005
    ctx->pc = 0x119044u;
    {
        const bool branch_taken_0x119044 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x119048u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 32768));
        if (branch_taken_0x119044) {
            ctx->pc = 0x11905Cu;
            goto label_11905c;
        }
    }
    ctx->pc = 0x11904Cu;
    // 0x11904c: 0xc04518c
    ctx->pc = 0x11904Cu;
    SET_GPR_U32(ctx, 31, 0x119054u);
    ctx->pc = 0x119050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119054u; }
    }
    if (ctx->pc != 0x119054u) { return; }
    ctx->pc = 0x119054u;
    // 0x119054: 0x1000000c
    ctx->pc = 0x119054u;
    {
        const bool branch_taken_0x119054 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x119058u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967285));
        if (branch_taken_0x119054) {
            ctx->pc = 0x119088u;
            goto label_119088;
        }
    }
    ctx->pc = 0x11905Cu;
label_11905c:
    // 0x11905c: 0x10400005
    ctx->pc = 0x11905Cu;
    {
        const bool branch_taken_0x11905c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x11905c) {
            ctx->pc = 0x119074u;
            goto label_119074;
        }
    }
    ctx->pc = 0x119064u;
    // 0x119064: 0xc04518c
    ctx->pc = 0x119064u;
    SET_GPR_U32(ctx, 31, 0x11906Cu);
    ctx->pc = 0x119068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11906Cu; }
    }
    if (ctx->pc != 0x11906Cu) { return; }
    ctx->pc = 0x11906Cu;
    // 0x11906c: 0x10000006
    ctx->pc = 0x11906Cu;
    {
        const bool branch_taken_0x11906c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x119070u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11906c) {
            ctx->pc = 0x119088u;
            goto label_119088;
        }
    }
    ctx->pc = 0x119074u;
label_119074:
    // 0x119074: 0xc045198
    ctx->pc = 0x119074u;
    SET_GPR_U32(ctx, 31, 0x11907Cu);
    ctx->pc = 0x119078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11907Cu; }
    }
    if (ctx->pc != 0x11907Cu) { return; }
    ctx->pc = 0x11907Cu;
    // 0x11907c: 0xc04518c
    ctx->pc = 0x11907Cu;
    SET_GPR_U32(ctx, 31, 0x119084u);
    ctx->pc = 0x119080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119084u; }
    }
    if (ctx->pc != 0x119084u) { return; }
    ctx->pc = 0x119084u;
    // 0x119084: 0x8fa20030
    ctx->pc = 0x119084u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_119088:
    // 0x119088: 0xdfbf00b0
    ctx->pc = 0x119088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11908c: 0xdfb600a0
    ctx->pc = 0x11908cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x119090: 0xdfb50090
    ctx->pc = 0x119090u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x119094: 0xdfb40080
    ctx->pc = 0x119094u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x119098: 0xdfb30070
    ctx->pc = 0x119098u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11909c: 0xdfb20060
    ctx->pc = 0x11909cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1190a0: 0xdfb10050
    ctx->pc = 0x1190a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1190a4: 0xdfb00040
    ctx->pc = 0x1190a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1190a8: 0x3e00008
    ctx->pc = 0x1190A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1190ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x118EDCu: goto label_118edc;
            case 0x118EF0u: goto label_118ef0;
            case 0x118F00u: goto label_118f00;
            case 0x118F98u: goto label_118f98;
            case 0x118FA0u: goto label_118fa0;
            case 0x118FD4u: goto label_118fd4;
            case 0x118FE4u: goto label_118fe4;
            case 0x118FF0u: goto label_118ff0;
            case 0x119038u: goto label_119038;
            case 0x11905Cu: goto label_11905c;
            case 0x119074u: goto label_119074;
            case 0x119088u: goto label_119088;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1190B0u;
}
