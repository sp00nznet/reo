#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00379930
// Address: 0x379930 - 0x379af0
void sub_00379930_0x379930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x379930u;

    // 0x379930: 0x27bdfbe0
    ctx->pc = 0x379930u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966240));
    // 0x379934: 0x3c010032
    ctx->pc = 0x379934u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x379938: 0xffbf0010
    ctx->pc = 0x379938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37993c: 0x27a40020
    ctx->pc = 0x37993cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x379940: 0x7fb00000
    ctx->pc = 0x379940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x379944: 0x282d
    ctx->pc = 0x379944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379948: 0x94234416
    ctx->pc = 0x379948u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17430)));
    // 0x37994c: 0x24060400
    ctx->pc = 0x37994cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1024));
    // 0x379950: 0x3c010057
    ctx->pc = 0x379950u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379954: 0x8c22bae8
    ctx->pc = 0x379954u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294949608)));
    // 0x379958: 0xc041f1a
    ctx->pc = 0x379958u;
    SET_GPR_U32(ctx, 31, 0x379960u);
    ctx->pc = 0x37995Cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    ctx->pc = 0x107C68u;
    {
        auto targetFn = runtime->lookupFunction(0x107C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379960u; }
        if (ctx->pc != 0x379960u) { return; }
    }
    ctx->pc = 0x379960u;
    // 0x379960: 0x3c010057
    ctx->pc = 0x379960u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379964: 0x8c24bae8
    ctx->pc = 0x379964u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294949608)));
    // 0x379968: 0x8c83000c
    ctx->pc = 0x379968u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x37996c: 0x3c010057
    ctx->pc = 0x37996cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379970: 0x8c820024
    ctx->pc = 0x379970u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x379974: 0x621021
    ctx->pc = 0x379974u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x379978: 0xac820010
    ctx->pc = 0x379978u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x37997c: 0x8c24bae8
    ctx->pc = 0x37997cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294949608)));
    // 0x379980: 0x8c83000c
    ctx->pc = 0x379980u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x379984: 0x3c010057
    ctx->pc = 0x379984u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379988: 0x8c820024
    ctx->pc = 0x379988u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x37998c: 0x621021
    ctx->pc = 0x37998cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x379990: 0x244200c0
    ctx->pc = 0x379990u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 192));
    // 0x379994: 0xac820014
    ctx->pc = 0x379994u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x379998: 0x8c30bad0
    ctx->pc = 0x379998u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 1), 4294949584)));
    // 0x37999c: 0x2a0101c1
    ctx->pc = 0x37999cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 449));
    // 0x3799a0: 0x14200002
    ctx->pc = 0x3799A0u;
    {
        const bool branch_taken_0x3799a0 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x3799a0) {
            ctx->pc = 0x3799ACu;
            goto label_3799ac;
        }
    }
    ctx->pc = 0x3799A8u;
    // 0x3799a8: 0x241001c0
    ctx->pc = 0x3799a8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 448));
label_3799ac:
    // 0x3799ac: 0x3c010057
    ctx->pc = 0x3799acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3799b0: 0x27a50020
    ctx->pc = 0x3799b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x3799b4: 0x8c22bae8
    ctx->pc = 0x3799b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294949608)));
    // 0x3799b8: 0x382d
    ctx->pc = 0x3799b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3799bc: 0x3c010057
    ctx->pc = 0x3799bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3799c0: 0x8c460018
    ctx->pc = 0x3799c0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x3799c4: 0x8c28bac8
    ctx->pc = 0x3799c4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 1), 4294949576)));
    // 0x3799c8: 0x8c44000c
    ctx->pc = 0x3799c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3799cc: 0xc0de508
    ctx->pc = 0x3799CCu;
    SET_GPR_U32(ctx, 31, 0x3799D4u);
    ctx->pc = 0x3799D0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x379420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00379420_0x379420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3799D4u; }
    }
    if (ctx->pc != 0x3799D4u) { return; }
    ctx->pc = 0x3799D4u;
    // 0x3799d4: 0x3c010032
    ctx->pc = 0x3799d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x3799d8: 0x24020003
    ctx->pc = 0x3799d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x3799dc: 0x902343fc
    ctx->pc = 0x3799dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17404)));
    // 0x3799e0: 0x1462001d
    ctx->pc = 0x3799E0u;
    {
        const bool branch_taken_0x3799e0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x3799E4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
        if (branch_taken_0x3799e0) {
            ctx->pc = 0x379A58u;
            goto label_379a58;
        }
    }
    ctx->pc = 0x3799E8u;
    // 0x3799e8: 0x3c010057
    ctx->pc = 0x3799e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3799ec: 0x282d
    ctx->pc = 0x3799ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3799f0: 0x8c24bae8
    ctx->pc = 0x3799f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294949608)));
    // 0x3799f4: 0x302d
    ctx->pc = 0x3799f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3799f8: 0x24070001
    ctx->pc = 0x3799f8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x3799fc: 0x3c010057
    ctx->pc = 0x3799fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379a00: 0x8c840010
    ctx->pc = 0x379a00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x379a04: 0x8c23bac8
    ctx->pc = 0x379a04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294949576)));
    // 0x379a08: 0x3c010057
    ctx->pc = 0x379a08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379a0c: 0x34040
    ctx->pc = 0x379a0cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 3), 1));
    // 0x379a10: 0x8c22bad0
    ctx->pc = 0x379a10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294949584)));
    // 0x379a14: 0xc0de598
    ctx->pc = 0x379A14u;
    SET_GPR_U32(ctx, 31, 0x379A1Cu);
    ctx->pc = 0x379A18u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x379660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00379660_0x379660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379A1Cu; }
    }
    if (ctx->pc != 0x379A1Cu) { return; }
    ctx->pc = 0x379A1Cu;
    // 0x379a1c: 0x3c010057
    ctx->pc = 0x379a1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379a20: 0x282d
    ctx->pc = 0x379a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379a24: 0x8c24bae8
    ctx->pc = 0x379a24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294949608)));
    // 0x379a28: 0x302d
    ctx->pc = 0x379a28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379a2c: 0x24070001
    ctx->pc = 0x379a2cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x379a30: 0x3c010057
    ctx->pc = 0x379a30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379a34: 0x8c840014
    ctx->pc = 0x379a34u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x379a38: 0x8c23bac8
    ctx->pc = 0x379a38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294949576)));
    // 0x379a3c: 0x3c010057
    ctx->pc = 0x379a3cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379a40: 0x34040
    ctx->pc = 0x379a40u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 3), 1));
    // 0x379a44: 0x8c22bad0
    ctx->pc = 0x379a44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294949584)));
    // 0x379a48: 0xc0de598
    ctx->pc = 0x379A48u;
    SET_GPR_U32(ctx, 31, 0x379A50u);
    ctx->pc = 0x379A4Cu;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x379660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00379660_0x379660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379A50u; }
    }
    if (ctx->pc != 0x379A50u) { return; }
    ctx->pc = 0x379A50u;
    // 0x379a50: 0x10000021
    ctx->pc = 0x379A50u;
    {
        const bool branch_taken_0x379a50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x379A54u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x379a50) {
            ctx->pc = 0x379AD8u;
            goto label_379ad8;
        }
    }
    ctx->pc = 0x379A58u;
label_379a58:
    // 0x379a58: 0x8c23bae8
    ctx->pc = 0x379a58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294949608)));
    // 0x379a5c: 0x3c01002a
    ctx->pc = 0x379a5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x379a60: 0x8c22f9c0
    ctx->pc = 0x379a60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294965696)));
    // 0x379a64: 0x501023
    ctx->pc = 0x379a64u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x379a68: 0x4410003
    ctx->pc = 0x379A68u;
    {
        const bool branch_taken_0x379a68 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x379A6Cu;
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
        if (branch_taken_0x379a68) {
            ctx->pc = 0x379A78u;
            goto label_379a78;
        }
    }
    ctx->pc = 0x379A70u;
    // 0x379a70: 0x24420001
    ctx->pc = 0x379a70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x379a74: 0x23043
    ctx->pc = 0x379a74u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
label_379a78:
    // 0x379a78: 0x3c01002a
    ctx->pc = 0x379a78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x379a7c: 0x8c640010
    ctx->pc = 0x379a7cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x379a80: 0x8c28f9bc
    ctx->pc = 0x379a80u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 1), 4294965692)));
    // 0x379a84: 0x282d
    ctx->pc = 0x379a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379a88: 0x24070001
    ctx->pc = 0x379a88u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x379a8c: 0xc0de598
    ctx->pc = 0x379A8Cu;
    SET_GPR_U32(ctx, 31, 0x379A94u);
    ctx->pc = 0x379A90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x379660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00379660_0x379660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379A94u; }
    }
    if (ctx->pc != 0x379A94u) { return; }
    ctx->pc = 0x379A94u;
    // 0x379a94: 0x3c010057
    ctx->pc = 0x379a94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379a98: 0x8c23bae8
    ctx->pc = 0x379a98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294949608)));
    // 0x379a9c: 0x3c01002a
    ctx->pc = 0x379a9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x379aa0: 0x8c22f9c0
    ctx->pc = 0x379aa0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294965696)));
    // 0x379aa4: 0x501023
    ctx->pc = 0x379aa4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x379aa8: 0x4410003
    ctx->pc = 0x379AA8u;
    {
        const bool branch_taken_0x379aa8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x379AACu;
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
        if (branch_taken_0x379aa8) {
            ctx->pc = 0x379AB8u;
            goto label_379ab8;
        }
    }
    ctx->pc = 0x379AB0u;
    // 0x379ab0: 0x24420001
    ctx->pc = 0x379ab0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x379ab4: 0x23043
    ctx->pc = 0x379ab4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
label_379ab8:
    // 0x379ab8: 0x3c01002a
    ctx->pc = 0x379ab8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x379abc: 0x8c640014
    ctx->pc = 0x379abcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x379ac0: 0x8c28f9bc
    ctx->pc = 0x379ac0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 1), 4294965692)));
    // 0x379ac4: 0x200482d
    ctx->pc = 0x379ac4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379ac8: 0x282d
    ctx->pc = 0x379ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379acc: 0xc0de598
    ctx->pc = 0x379ACCu;
    SET_GPR_U32(ctx, 31, 0x379AD4u);
    ctx->pc = 0x379AD0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x379660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00379660_0x379660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379AD4u; }
    }
    if (ctx->pc != 0x379AD4u) { return; }
    ctx->pc = 0x379AD4u;
    // 0x379ad4: 0xdfbf0010
    ctx->pc = 0x379ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_379ad8:
    // 0x379ad8: 0x7bb00000
    ctx->pc = 0x379ad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379adc: 0x3e00008
    ctx->pc = 0x379ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379AE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 1056));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3799ACu: goto label_3799ac;
            case 0x379A58u: goto label_379a58;
            case 0x379A78u: goto label_379a78;
            case 0x379AB8u: goto label_379ab8;
            case 0x379AD8u: goto label_379ad8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x379AE4u;
    // 0x379ae4: 0x0
    ctx->pc = 0x379ae4u;
    // NOP
    // 0x379ae8: 0x0
    ctx->pc = 0x379ae8u;
    // NOP
    // 0x379aec: 0x0
    ctx->pc = 0x379aecu;
    // NOP
}
