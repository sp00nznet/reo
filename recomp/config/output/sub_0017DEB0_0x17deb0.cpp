#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017DEB0
// Address: 0x17deb0 - 0x17e120
void sub_0017DEB0_0x17deb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17deb0u;

    // 0x17deb0: 0x27bdffe0
    ctx->pc = 0x17deb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17deb4: 0xffb20010
    ctx->pc = 0x17deb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17deb8: 0xe0902d
    ctx->pc = 0x17deb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17debc: 0xffb00000
    ctx->pc = 0x17debcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17dec0: 0x26500200
    ctx->pc = 0x17dec0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 512));
    // 0x17dec4: 0x200382d
    ctx->pc = 0x17dec4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dec8: 0xffb10008
    ctx->pc = 0x17dec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17decc: 0xffbf0018
    ctx->pc = 0x17deccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17ded0: 0xc05f6bc
    ctx->pc = 0x17DED0u;
    SET_GPR_U32(ctx, 31, 0x17DED8u);
    ctx->pc = 0x17DED4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17DAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DAF0_0x17daf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DED8u; }
    }
    if (ctx->pc != 0x17DED8u) { return; }
    ctx->pc = 0x17DED8u;
    // 0x17ded8: 0x220202d
    ctx->pc = 0x17ded8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dedc: 0x200282d
    ctx->pc = 0x17dedcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dee0: 0xdfb00000
    ctx->pc = 0x17dee0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17dee4: 0x240302d
    ctx->pc = 0x17dee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dee8: 0xdfb20010
    ctx->pc = 0x17dee8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17deec: 0xdfb10008
    ctx->pc = 0x17deecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17def0: 0xdfbf0018
    ctx->pc = 0x17def0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17def4: 0x805f7c0
    ctx->pc = 0x17DEF4u;
    ctx->pc = 0x17DEF8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17DF00u;
    goto label_17df00;
    ctx->pc = 0x17DEFCu;
    // 0x17defc: 0x0
    ctx->pc = 0x17defcu;
    // NOP
label_17df00:
    // 0x17df00: 0x27bdffa0
    ctx->pc = 0x17df00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17df04: 0xffb10008
    ctx->pc = 0x17df04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17df08: 0xc0882d
    ctx->pc = 0x17df08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df0c: 0xffb30018
    ctx->pc = 0x17df0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17df10: 0xa0982d
    ctx->pc = 0x17df10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df14: 0xffb00000
    ctx->pc = 0x17df14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17df18: 0xffb20010
    ctx->pc = 0x17df18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17df1c: 0xffb40020
    ctx->pc = 0x17df1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17df20: 0xffb50028
    ctx->pc = 0x17df20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x17df24: 0xffb60030
    ctx->pc = 0x17df24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x17df28: 0xffb70038
    ctx->pc = 0x17df28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x17df2c: 0xffbe0040
    ctx->pc = 0x17df2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x17df30: 0xffbf0048
    ctx->pc = 0x17df30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x17df34: 0xe7b50058
    ctx->pc = 0x17df34u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x17df38: 0xe7b40050
    ctx->pc = 0x17df38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x17df3c: 0xc4950040
    ctx->pc = 0x17df3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17df40: 0xc05f8ea
    ctx->pc = 0x17DF40u;
    SET_GPR_U32(ctx, 31, 0x17DF48u);
    ctx->pc = 0x17DF44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->pc = 0x17E3A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E3A8_0x17e3a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF48u; }
    }
    if (ctx->pc != 0x17DF48u) { return; }
    ctx->pc = 0x17DF48u;
    // 0x17df48: 0x24030001
    ctx->pc = 0x17df48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17df4c: 0x1443000e
    ctx->pc = 0x17DF4Cu;
    {
        const bool branch_taken_0x17df4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x17DF50u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17df4c) {
            ctx->pc = 0x17DF88u;
            goto label_17df88;
        }
    }
    ctx->pc = 0x17DF54u;
    // 0x17df54: 0x260282d
    ctx->pc = 0x17df54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df58: 0xa02d
    ctx->pc = 0x17df58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df5c: 0x0
    ctx->pc = 0x17df5cu;
    // NOP
label_17df60:
    // 0x17df60: 0x8ca20000
    ctx->pc = 0x17df60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17df64: 0x24a50004
    ctx->pc = 0x17df64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x17df68: 0x26940001
    ctx->pc = 0x17df68u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    // 0x17df6c: 0x213c2
    ctx->pc = 0x17df6cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 15));
    // 0x17df70: 0x2a830100
    ctx->pc = 0x17df70u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), 256));
    // 0x17df74: 0xa4c20000
    ctx->pc = 0x17df74u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x17df78: 0x1460fff9
    ctx->pc = 0x17DF78u;
    {
        const bool branch_taken_0x17df78 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x17DF7Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x17df78) {
            ctx->pc = 0x17DF60u;
            goto label_17df60;
        }
    }
    ctx->pc = 0x17DF80u;
    // 0x17df80: 0x10000046
    ctx->pc = 0x17DF80u;
    {
        const bool branch_taken_0x17df80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17DF84u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x17df80) {
            ctx->pc = 0x17E09Cu;
            goto label_17e09c;
        }
    }
    ctx->pc = 0x17DF88u;
label_17df88:
    // 0x17df88: 0x3c010024
    ctx->pc = 0x17df88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x17df8c: 0xdc301488
    ctx->pc = 0x17df8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 1), 5256)));
    // 0x17df90: 0xc04462e
    ctx->pc = 0x17DF90u;
    SET_GPR_U32(ctx, 31, 0x17DF98u);
    ctx->pc = 0x17DF94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1118B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001118B8_0x1118b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF98u; }
    }
    if (ctx->pc != 0x17DF98u) { return; }
    ctx->pc = 0x17DF98u;
    // 0x17df98: 0x40902d
    ctx->pc = 0x17df98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df9c: 0xc04462e
    ctx->pc = 0x17DF9Cu;
    SET_GPR_U32(ctx, 31, 0x17DFA4u);
    ctx->pc = 0x17DFA0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x1118B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001118B8_0x1118b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DFA4u; }
    }
    if (ctx->pc != 0x17DFA4u) { return; }
    ctx->pc = 0x17DFA4u;
    // 0x17dfa4: 0x40b02d
    ctx->pc = 0x17dfa4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dfa8: 0x240282d
    ctx->pc = 0x17dfa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dfac: 0x2c0202d
    ctx->pc = 0x17dfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dfb0: 0xc044752
    ctx->pc = 0x17DFB0u;
    SET_GPR_U32(ctx, 31, 0x17DFB8u);
    ctx->pc = 0x17DFB4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DFB8u; }
    }
    if (ctx->pc != 0x17DFB8u) { return; }
    ctx->pc = 0x17DFB8u;
    // 0x17dfb8: 0x3404ffc0
    ctx->pc = 0x17dfb8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 65472));
    // 0x17dfbc: 0x423bc
    ctx->pc = 0x17dfbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x17dfc0: 0x40282d
    ctx->pc = 0x17dfc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dfc4: 0xc04480e
    ctx->pc = 0x17DFC4u;
    SET_GPR_U32(ctx, 31, 0x17DFCCu);
    ctx->pc = 0x17DFC8u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x112038u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112038_0x112038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DFCCu; }
    }
    if (ctx->pc != 0x17DFCCu) { return; }
    ctx->pc = 0x17DFCCu;
    // 0x17dfcc: 0x2c0202d
    ctx->pc = 0x17dfccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dfd0: 0x200282d
    ctx->pc = 0x17dfd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dfd4: 0x40882d
    ctx->pc = 0x17dfd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dfd8: 0xc04476c
    ctx->pc = 0x17DFD8u;
    SET_GPR_U32(ctx, 31, 0x17DFE0u);
    ctx->pc = 0x17DFDCu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 255));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DFE0u; }
    }
    if (ctx->pc != 0x17DFE0u) { return; }
    ctx->pc = 0x17DFE0u;
    // 0x17dfe0: 0x220282d
    ctx->pc = 0x17dfe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dfe4: 0xc04476c
    ctx->pc = 0x17DFE4u;
    SET_GPR_U32(ctx, 31, 0x17DFECu);
    ctx->pc = 0x17DFE8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DFECu; }
    }
    if (ctx->pc != 0x17DFECu) { return; }
    ctx->pc = 0x17DFECu;
    // 0x17dfec: 0x220202d
    ctx->pc = 0x17dfecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dff0: 0x200282d
    ctx->pc = 0x17dff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dff4: 0xc04476c
    ctx->pc = 0x17DFF4u;
    SET_GPR_U32(ctx, 31, 0x17DFFCu);
    ctx->pc = 0x17DFF8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DFFCu; }
    }
    if (ctx->pc != 0x17DFFCu) { return; }
    ctx->pc = 0x17DFFCu;
    // 0x17dffc: 0x240282d
    ctx->pc = 0x17dffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e000: 0xc04476c
    ctx->pc = 0x17E000u;
    SET_GPR_U32(ctx, 31, 0x17E008u);
    ctx->pc = 0x17E004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E008u; }
    }
    if (ctx->pc != 0x17E008u) { return; }
    ctx->pc = 0x17E008u;
    // 0x17e008: 0x2c0282d
    ctx->pc = 0x17e008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e00c: 0xc04476c
    ctx->pc = 0x17E00Cu;
    SET_GPR_U32(ctx, 31, 0x17E014u);
    ctx->pc = 0x17E010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E014u; }
    }
    if (ctx->pc != 0x17E014u) { return; }
    ctx->pc = 0x17E014u;
    // 0x17e014: 0x40882d
    ctx->pc = 0x17e014u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17e018:
    // 0x17e018: 0x8e700000
    ctx->pc = 0x17e018u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17e01c: 0x16000003
    ctx->pc = 0x17E01Cu;
    {
        const bool branch_taken_0x17e01c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x17e01c) {
            ctx->pc = 0x17E02Cu;
            goto label_17e02c;
        }
    }
    ctx->pc = 0x17E024u;
    // 0x17e024: 0xae770000
    ctx->pc = 0x17e024u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 23));
    // 0x17e028: 0x2e0802d
    ctx->pc = 0x17e028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_17e02c:
    // 0x17e02c: 0xc0448ba
    ctx->pc = 0x17E02Cu;
    SET_GPR_U32(ctx, 31, 0x17E034u);
    ctx->pc = 0x17E030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E034u; }
    }
    if (ctx->pc != 0x17E034u) { return; }
    ctx->pc = 0x17E034u;
    // 0x17e034: 0x340583e0
    ctx->pc = 0x17e034u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 33760));
    // 0x17e038: 0x6010003
    ctx->pc = 0x17E038u;
    {
        const bool branch_taken_0x17e038 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x17E03Cu;
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
        if (branch_taken_0x17e038) {
            ctx->pc = 0x17E048u;
            goto label_17e048;
        }
    }
    ctx->pc = 0x17E040u;
    // 0x17e040: 0xc04473c
    ctx->pc = 0x17E040u;
    SET_GPR_U32(ctx, 31, 0x17E048u);
    ctx->pc = 0x17E044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E048u; }
    }
    if (ctx->pc != 0x17E048u) { return; }
    ctx->pc = 0x17E048u;
label_17e048:
    // 0x17e048: 0x40282d
    ctx->pc = 0x17e048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e04c: 0x2c0202d
    ctx->pc = 0x17e04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e050: 0xc04476c
    ctx->pc = 0x17E050u;
    SET_GPR_U32(ctx, 31, 0x17E058u);
    ctx->pc = 0x17E054u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294967295));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E058u; }
    }
    if (ctx->pc != 0x17E058u) { return; }
    ctx->pc = 0x17E058u;
    // 0x17e058: 0x3c010024
    ctx->pc = 0x17e058u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x17e05c: 0xdc251490
    ctx->pc = 0x17e05cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 5264)));
    // 0x17e060: 0x40202d
    ctx->pc = 0x17e060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e064: 0xc04480e
    ctx->pc = 0x17E064u;
    SET_GPR_U32(ctx, 31, 0x17E06Cu);
    ctx->pc = 0x17E068u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4));
    ctx->pc = 0x112038u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112038_0x112038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E06Cu; }
    }
    if (ctx->pc != 0x17E06Cu) { return; }
    ctx->pc = 0x17E06Cu;
    // 0x17e06c: 0x220202d
    ctx->pc = 0x17e06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e070: 0xc04480e
    ctx->pc = 0x17E070u;
    SET_GPR_U32(ctx, 31, 0x17E078u);
    ctx->pc = 0x17E074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x112038u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112038_0x112038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E078u; }
    }
    if (ctx->pc != 0x17E078u) { return; }
    ctx->pc = 0x17E078u;
    // 0x17e078: 0x3c0202d
    ctx->pc = 0x17e078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e07c: 0xc044752
    ctx->pc = 0x17E07Cu;
    SET_GPR_U32(ctx, 31, 0x17E084u);
    ctx->pc = 0x17E080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E084u; }
    }
    if (ctx->pc != 0x17E084u) { return; }
    ctx->pc = 0x17E084u;
    // 0x17e084: 0xc044932
    ctx->pc = 0x17E084u;
    SET_GPR_U32(ctx, 31, 0x17E08Cu);
    ctx->pc = 0x17E088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1124C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001124C8_0x1124c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E08Cu; }
    }
    if (ctx->pc != 0x17E08Cu) { return; }
    ctx->pc = 0x17E08Cu;
    // 0x17e08c: 0xa6a20000
    ctx->pc = 0x17e08cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x17e090: 0x681ffe1
    ctx->pc = 0x17E090u;
    {
        const bool branch_taken_0x17e090 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x17E094u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 2));
        if (branch_taken_0x17e090) {
            ctx->pc = 0x17E018u;
            goto label_17e018;
        }
    }
    ctx->pc = 0x17E098u;
    // 0x17e098: 0xdfb00000
    ctx->pc = 0x17e098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17e09c:
    // 0x17e09c: 0xdfb10008
    ctx->pc = 0x17e09cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e0a0: 0xdfb20010
    ctx->pc = 0x17e0a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e0a4: 0xdfb30018
    ctx->pc = 0x17e0a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17e0a8: 0xdfb40020
    ctx->pc = 0x17e0a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e0ac: 0xdfb50028
    ctx->pc = 0x17e0acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17e0b0: 0xdfb60030
    ctx->pc = 0x17e0b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e0b4: 0xdfb70038
    ctx->pc = 0x17e0b4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17e0b8: 0xdfbe0040
    ctx->pc = 0x17e0b8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17e0bc: 0xdfbf0048
    ctx->pc = 0x17e0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17e0c0: 0xc7b50058
    ctx->pc = 0x17e0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17e0c4: 0xc7b40050
    ctx->pc = 0x17e0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17e0c8: 0x3e00008
    ctx->pc = 0x17E0C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E0CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17DF00u: goto label_17df00;
            case 0x17DF60u: goto label_17df60;
            case 0x17DF88u: goto label_17df88;
            case 0x17E018u: goto label_17e018;
            case 0x17E02Cu: goto label_17e02c;
            case 0x17E048u: goto label_17e048;
            case 0x17E09Cu: goto label_17e09c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17E0D0u;
    // 0x17e0d0: 0x27bdffd0
    ctx->pc = 0x17e0d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17e0d4: 0xffb10018
    ctx->pc = 0x17e0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17e0d8: 0xc0882d
    ctx->pc = 0x17e0d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e0dc: 0xffb00010
    ctx->pc = 0x17e0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17e0e0: 0x80802d
    ctx->pc = 0x17e0e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e0e4: 0xffbf0020
    ctx->pc = 0x17e0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17e0e8: 0x3a0302d
    ctx->pc = 0x17e0e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e0ec: 0xae200000
    ctx->pc = 0x17e0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x17e0f0: 0xc05f65a
    ctx->pc = 0x17E0F0u;
    SET_GPR_U32(ctx, 31, 0x17E0F8u);
    ctx->pc = 0x17E0F4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x17D968u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D968_0x17d968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E0F8u; }
    }
    if (ctx->pc != 0x17E0F8u) { return; }
    ctx->pc = 0x17E0F8u;
    // 0x17e0f8: 0x200202d
    ctx->pc = 0x17e0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e0fc: 0x8fa50000
    ctx->pc = 0x17e0fcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e100: 0x220382d
    ctx->pc = 0x17e100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e104: 0xc05f848
    ctx->pc = 0x17E104u;
    SET_GPR_U32(ctx, 31, 0x17E10Cu);
    ctx->pc = 0x17E108u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->pc = 0x17E120u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E120_0x17e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E10Cu; }
    }
    if (ctx->pc != 0x17E10Cu) { return; }
    ctx->pc = 0x17E10Cu;
    // 0x17e10c: 0xdfb00010
    ctx->pc = 0x17e10cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e110: 0xdfb10018
    ctx->pc = 0x17e110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17e114: 0xdfbf0020
    ctx->pc = 0x17e114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e118: 0x3e00008
    ctx->pc = 0x17E118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E11Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17DF00u: goto label_17df00;
            case 0x17DF60u: goto label_17df60;
            case 0x17DF88u: goto label_17df88;
            case 0x17E018u: goto label_17e018;
            case 0x17E02Cu: goto label_17e02c;
            case 0x17E048u: goto label_17e048;
            case 0x17E09Cu: goto label_17e09c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17E120u;
}
