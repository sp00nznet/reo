#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00119948
// Address: 0x119948 - 0x119b28
void sub_00119948_0x119948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x119948u;

    // 0x119948: 0x27bdff30
    ctx->pc = 0x119948u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x11994c: 0xffb700b0
    ctx->pc = 0x11994cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x119950: 0xffb50090
    ctx->pc = 0x119950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x119954: 0x100b82d
    ctx->pc = 0x119954u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119958: 0xffb40080
    ctx->pc = 0x119958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x11995c: 0xa0a82d
    ctx->pc = 0x11995cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119960: 0xffb30070
    ctx->pc = 0x119960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x119964: 0x120a02d
    ctx->pc = 0x119964u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119968: 0xffb00040
    ctx->pc = 0x119968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x11996c: 0xe0982d
    ctx->pc = 0x11996cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119970: 0xffb600a0
    ctx->pc = 0x119970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x119974: 0xc0802d
    ctx->pc = 0x119974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119978: 0xffb20060
    ctx->pc = 0x119978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x11997c: 0x3c160026
    ctx->pc = 0x11997cu;
    SET_GPR_U32(ctx, 22, ((uint32_t)38 << 16));
    // 0x119980: 0xffb10050
    ctx->pc = 0x119980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x119984: 0xffbf00c0
    ctx->pc = 0x119984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x119988: 0xc04607e
    ctx->pc = 0x119988u;
    SET_GPR_U32(ctx, 31, 0x119990u);
    ctx->pc = 0x11998Cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 22), 4294953536));
    ctx->pc = 0x1181F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001181F8_0x1181f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119990u; }
    }
    if (ctx->pc != 0x119990u) { return; }
    ctx->pc = 0x119990u;
    // 0x119990: 0x40902d
    ctx->pc = 0x119990u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119994: 0xc04619c
    ctx->pc = 0x119994u;
    SET_GPR_U32(ctx, 31, 0x11999Cu);
    ctx->pc = 0x119998u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 26));
    ctx->pc = 0x118670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118670_0x118670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11999Cu; }
    }
    if (ctx->pc != 0x11999Cu) { return; }
    ctx->pc = 0x11999Cu;
    // 0x11999c: 0x3c020021
    ctx->pc = 0x11999cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x1199a0: 0x8c439ddc
    ctx->pc = 0x1199a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294942172)));
    // 0x1199a4: 0x14600003
    ctx->pc = 0x1199A4u;
    {
        const bool branch_taken_0x1199a4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1199a4) {
            ctx->pc = 0x1199B4u;
            goto label_1199b4;
        }
    }
    ctx->pc = 0x1199ACu;
    // 0x1199ac: 0xc0461e8
    ctx->pc = 0x1199ACu;
    SET_GPR_U32(ctx, 31, 0x1199B4u);
    ctx->pc = 0x1187A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001187A0_0x1187a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1199B4u; }
    }
    if (ctx->pc != 0x1199B4u) { return; }
    ctx->pc = 0x1199B4u;
label_1199b4:
    // 0x1199b4: 0x12400004
    ctx->pc = 0x1199B4u;
    {
        const bool branch_taken_0x1199b4 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x1199b4) {
            ctx->pc = 0x1199C8u;
            goto label_1199c8;
        }
    }
    ctx->pc = 0x1199BCu;
    // 0x1199bc: 0x8e420004
    ctx->pc = 0x1199bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1199c0: 0x14400005
    ctx->pc = 0x1199C0u;
    {
        const bool branch_taken_0x1199c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1199C4u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), 1025));
        if (branch_taken_0x1199c0) {
            ctx->pc = 0x1199D8u;
            goto label_1199d8;
        }
    }
    ctx->pc = 0x1199C8u;
label_1199c8:
    // 0x1199c8: 0xc0461a8
    ctx->pc = 0x1199C8u;
    SET_GPR_U32(ctx, 31, 0x1199D0u);
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1199D0u; }
    }
    if (ctx->pc != 0x1199D0u) { return; }
    ctx->pc = 0x1199D0u;
    // 0x1199d0: 0x10000049
    ctx->pc = 0x1199D0u;
    {
        const bool branch_taken_0x1199d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1199D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967287));
        if (branch_taken_0x1199d0) {
            ctx->pc = 0x119AF8u;
            goto label_119af8;
        }
    }
    ctx->pc = 0x1199D8u;
label_1199d8:
    // 0x1199d8: 0x10400003
    ctx->pc = 0x1199D8u;
    {
        const bool branch_taken_0x1199d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1199DCu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 20), 1025));
        if (branch_taken_0x1199d8) {
            ctx->pc = 0x1199E8u;
            goto label_1199e8;
        }
    }
    ctx->pc = 0x1199E0u;
    // 0x1199e0: 0x14400005
    ctx->pc = 0x1199E0u;
    {
        const bool branch_taken_0x1199e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1199e0) {
            ctx->pc = 0x1199F8u;
            goto label_1199f8;
        }
    }
    ctx->pc = 0x1199E8u;
label_1199e8:
    // 0x1199e8: 0xc0461a8
    ctx->pc = 0x1199E8u;
    SET_GPR_U32(ctx, 31, 0x1199F0u);
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1199F0u; }
    }
    if (ctx->pc != 0x1199F0u) { return; }
    ctx->pc = 0x1199F0u;
    // 0x1199f0: 0x10000041
    ctx->pc = 0x1199F0u;
    {
        const bool branch_taken_0x1199f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1199F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967274));
        if (branch_taken_0x1199f0) {
            ctx->pc = 0x119AF8u;
            goto label_119af8;
        }
    }
    ctx->pc = 0x1199F8u;
label_1199f8:
    // 0x1199f8: 0x16000003
    ctx->pc = 0x1199F8u;
    {
        const bool branch_taken_0x1199f8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1199FCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1199f8) {
            ctx->pc = 0x119A08u;
            goto label_119a08;
        }
    }
    ctx->pc = 0x119A00u;
    // 0x119a00: 0x10000004
    ctx->pc = 0x119A00u;
    {
        const bool branch_taken_0x119a00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x119A04u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 0));
        if (branch_taken_0x119a00) {
            ctx->pc = 0x119A14u;
            goto label_119a14;
        }
    }
    ctx->pc = 0x119A08u;
label_119a08:
    // 0x119a08: 0x26240014
    ctx->pc = 0x119a08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 20));
    // 0x119a0c: 0xc041eac
    ctx->pc = 0x119A0Cu;
    SET_GPR_U32(ctx, 31, 0x119A14u);
    ctx->pc = 0x119A10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119A14u; }
    }
    if (ctx->pc != 0x119A14u) { return; }
    ctx->pc = 0x119A14u;
label_119a14:
    // 0x119a14: 0x8e420000
    ctx->pc = 0x119a14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x119a18: 0x24030001
    ctx->pc = 0x119a18u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x119a1c: 0xae350010
    ctx->pc = 0x119a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 21));
    // 0x119a20: 0x27a40010
    ctx->pc = 0x119a20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x119a24: 0xae22000c
    ctx->pc = 0x119a24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x119a28: 0x26d0ca40
    ctx->pc = 0x119a28u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 22), 4294953536));
    // 0x119a2c: 0xae33041c
    ctx->pc = 0x119a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 19));
    // 0x119a30: 0xafa30014
    ctx->pc = 0x119a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x119a34: 0xafa00018
    ctx->pc = 0x119a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x119a38: 0xc045188
    ctx->pc = 0x119A38u;
    SET_GPR_U32(ctx, 31, 0x119A40u);
    ctx->pc = 0x119A3Cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->pc = 0x114620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114620_0x114620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119A40u; }
    }
    if (ctx->pc != 0x119A40u) { return; }
    ctx->pc = 0x119A40u;
    // 0x119a40: 0x40902d
    ctx->pc = 0x119a40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a44: 0x24030004
    ctx->pc = 0x119a44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x119a48: 0x27a20030
    ctx->pc = 0x119a48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 48));
    // 0x119a4c: 0xae340418
    ctx->pc = 0x119a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1048), GPR_U32(ctx, 20));
    // 0x119a50: 0xae220004
    ctx->pc = 0x119a50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x119a54: 0x200202d
    ctx->pc = 0x119a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a58: 0xae230008
    ctx->pc = 0x119a58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x119a5c: 0x24050420
    ctx->pc = 0x119a5cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1056));
    // 0x119a60: 0xae370414
    ctx->pc = 0x119a60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1044), GPR_U32(ctx, 23));
    // 0x119a64: 0xc045bf4
    ctx->pc = 0x119A64u;
    SET_GPR_U32(ctx, 31, 0x119A6Cu);
    ctx->pc = 0x119A68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    ctx->pc = 0x116FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116FD0_0x116fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119A6Cu; }
    }
    if (ctx->pc != 0x119A6Cu) { return; }
    ctx->pc = 0x119A6Cu;
    // 0x119a6c: 0x3c020026
    ctx->pc = 0x119a6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x119a70: 0x3c040026
    ctx->pc = 0x119a70u;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x119a74: 0x2451d680
    ctx->pc = 0x119a74u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x119a78: 0x2484e140
    ctx->pc = 0x119a78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959424));
    // 0x119a7c: 0x200382d
    ctx->pc = 0x119a7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a80: 0xafa00000
    ctx->pc = 0x119a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x119a84: 0x2405001a
    ctx->pc = 0x119a84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 26));
    // 0x119a88: 0x302d
    ctx->pc = 0x119a88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a8c: 0x24080420
    ctx->pc = 0x119a8cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1056));
    // 0x119a90: 0x220482d
    ctx->pc = 0x119a90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a94: 0x240a0004
    ctx->pc = 0x119a94u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4));
    // 0x119a98: 0xc045e7a
    ctx->pc = 0x119A98u;
    SET_GPR_U32(ctx, 31, 0x119AA0u);
    ctx->pc = 0x119A9Cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119AA0u; }
    }
    if (ctx->pc != 0x119AA0u) { return; }
    ctx->pc = 0x119AA0u;
    // 0x119aa0: 0x4410007
    ctx->pc = 0x119AA0u;
    {
        const bool branch_taken_0x119aa0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x119AA4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
        if (branch_taken_0x119aa0) {
            ctx->pc = 0x119AC0u;
            goto label_119ac0;
        }
    }
    ctx->pc = 0x119AA8u;
    // 0x119aa8: 0xc04518c
    ctx->pc = 0x119AA8u;
    SET_GPR_U32(ctx, 31, 0x119AB0u);
    ctx->pc = 0x119AACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119AB0u; }
    }
    if (ctx->pc != 0x119AB0u) { return; }
    ctx->pc = 0x119AB0u;
    // 0x119ab0: 0xc0461a8
    ctx->pc = 0x119AB0u;
    SET_GPR_U32(ctx, 31, 0x119AB8u);
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119AB8u; }
    }
    if (ctx->pc != 0x119AB8u) { return; }
    ctx->pc = 0x119AB8u;
    // 0x119ab8: 0x1000000f
    ctx->pc = 0x119AB8u;
    {
        const bool branch_taken_0x119ab8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x119ABCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967285));
        if (branch_taken_0x119ab8) {
            ctx->pc = 0x119AF8u;
            goto label_119af8;
        }
    }
    ctx->pc = 0x119AC0u;
label_119ac0:
    // 0x119ac0: 0x2221025
    ctx->pc = 0x119ac0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x119ac4: 0xc0461a8
    ctx->pc = 0x119AC4u;
    SET_GPR_U32(ctx, 31, 0x119ACCu);
    ctx->pc = 0x119AC8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119ACCu; }
    }
    if (ctx->pc != 0x119ACCu) { return; }
    ctx->pc = 0x119ACCu;
    // 0x119acc: 0x16000005
    ctx->pc = 0x119ACCu;
    {
        const bool branch_taken_0x119acc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x119acc) {
            ctx->pc = 0x119AE4u;
            goto label_119ae4;
        }
    }
    ctx->pc = 0x119AD4u;
    // 0x119ad4: 0xc04518c
    ctx->pc = 0x119AD4u;
    SET_GPR_U32(ctx, 31, 0x119ADCu);
    ctx->pc = 0x119AD8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119ADCu; }
    }
    if (ctx->pc != 0x119ADCu) { return; }
    ctx->pc = 0x119ADCu;
    // 0x119adc: 0x10000006
    ctx->pc = 0x119ADCu;
    {
        const bool branch_taken_0x119adc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x119AE0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967285));
        if (branch_taken_0x119adc) {
            ctx->pc = 0x119AF8u;
            goto label_119af8;
        }
    }
    ctx->pc = 0x119AE4u;
label_119ae4:
    // 0x119ae4: 0xc045198
    ctx->pc = 0x119AE4u;
    SET_GPR_U32(ctx, 31, 0x119AECu);
    ctx->pc = 0x119AE8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119AECu; }
    }
    if (ctx->pc != 0x119AECu) { return; }
    ctx->pc = 0x119AECu;
    // 0x119aec: 0xc04518c
    ctx->pc = 0x119AECu;
    SET_GPR_U32(ctx, 31, 0x119AF4u);
    ctx->pc = 0x119AF0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119AF4u; }
    }
    if (ctx->pc != 0x119AF4u) { return; }
    ctx->pc = 0x119AF4u;
    // 0x119af4: 0x8fa20030
    ctx->pc = 0x119af4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_119af8:
    // 0x119af8: 0xdfbf00c0
    ctx->pc = 0x119af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x119afc: 0xdfb700b0
    ctx->pc = 0x119afcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x119b00: 0xdfb600a0
    ctx->pc = 0x119b00u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x119b04: 0xdfb50090
    ctx->pc = 0x119b04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x119b08: 0xdfb40080
    ctx->pc = 0x119b08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x119b0c: 0xdfb30070
    ctx->pc = 0x119b0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x119b10: 0xdfb20060
    ctx->pc = 0x119b10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x119b14: 0xdfb10050
    ctx->pc = 0x119b14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x119b18: 0xdfb00040
    ctx->pc = 0x119b18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x119b1c: 0x3e00008
    ctx->pc = 0x119B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119B20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1199B4u: goto label_1199b4;
            case 0x1199C8u: goto label_1199c8;
            case 0x1199D8u: goto label_1199d8;
            case 0x1199E8u: goto label_1199e8;
            case 0x1199F8u: goto label_1199f8;
            case 0x119A08u: goto label_119a08;
            case 0x119A14u: goto label_119a14;
            case 0x119AC0u: goto label_119ac0;
            case 0x119AE4u: goto label_119ae4;
            case 0x119AF8u: goto label_119af8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x119B24u;
    // 0x119b24: 0x0
    ctx->pc = 0x119b24u;
    // NOP
}
