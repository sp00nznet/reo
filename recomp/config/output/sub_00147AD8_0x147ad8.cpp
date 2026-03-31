#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00147AD8
// Address: 0x147ad8 - 0x147d30
void sub_00147AD8_0x147ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x147ad8u;

    // 0x147ad8: 0x27bdffb0
    ctx->pc = 0x147ad8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x147adc: 0xffb30030
    ctx->pc = 0x147adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x147ae0: 0xffb10010
    ctx->pc = 0x147ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x147ae4: 0x80982d
    ctx->pc = 0x147ae4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147ae8: 0xffb00000
    ctx->pc = 0x147ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x147aec: 0xc0882d
    ctx->pc = 0x147aecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147af0: 0xa0802d
    ctx->pc = 0x147af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147af4: 0xffb20020
    ctx->pc = 0x147af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x147af8: 0x200202d
    ctx->pc = 0x147af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147afc: 0xffbf0040
    ctx->pc = 0x147afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x147b00: 0xc041f1a
    ctx->pc = 0x147B00u;
    SET_GPR_U32(ctx, 31, 0x147B08u);
    ctx->pc = 0x147B04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147B08u; }
    }
    if (ctx->pc != 0x147B08u) { return; }
    ctx->pc = 0x147B08u;
    // 0x147b08: 0x26030003
    ctx->pc = 0x147b08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 3));
    // 0x147b0c: 0x31882
    ctx->pc = 0x147b0cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 2));
    // 0x147b10: 0x39080
    ctx->pc = 0x147b10u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 3), 2));
    // 0x147b14: 0x2508023
    ctx->pc = 0x147b14u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x147b18: 0x2303023
    ctx->pc = 0x147b18u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x147b1c: 0x2cc210c0
    ctx->pc = 0x147b1cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 4288));
    // 0x147b20: 0x10400006
    ctx->pc = 0x147B20u;
    {
        const bool branch_taken_0x147b20 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x147B24u;
        SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
        if (branch_taken_0x147b20) {
            ctx->pc = 0x147B3Cu;
            goto label_147b3c;
        }
    }
    ctx->pc = 0x147B28u;
    // 0x147b28: 0x240202d
    ctx->pc = 0x147b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147b2c: 0xc05221c
    ctx->pc = 0x147B2Cu;
    SET_GPR_U32(ctx, 31, 0x147B34u);
    ctx->pc = 0x147B30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294959120));
    ctx->pc = 0x148870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00148870_0x148870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147B34u; }
    }
    if (ctx->pc != 0x147B34u) { return; }
    ctx->pc = 0x147B34u;
    // 0x147b34: 0x10000064
    ctx->pc = 0x147B34u;
    {
        const bool branch_taken_0x147b34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x147B38u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x147b34) {
            ctx->pc = 0x147CC8u;
            goto label_147cc8;
        }
    }
    ctx->pc = 0x147B3Cu;
label_147b3c:
    // 0x147b3c: 0x26510120
    ctx->pc = 0x147b3cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 288));
    // 0x147b40: 0xae720040
    ctx->pc = 0x147b40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 18));
    // 0x147b44: 0x24c6ef40
    ctx->pc = 0x147b44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294963008));
    // 0x147b48: 0x220202d
    ctx->pc = 0x147b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147b4c: 0x264510c0
    ctx->pc = 0x147b4cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 4288));
    // 0x147b50: 0xc05202c
    ctx->pc = 0x147B50u;
    SET_GPR_U32(ctx, 31, 0x147B58u);
    ctx->pc = 0x147B54u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1480B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001480B0_0x1480b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147B58u; }
    }
    if (ctx->pc != 0x147B58u) { return; }
    ctx->pc = 0x147B58u;
    // 0x147b58: 0xae600000
    ctx->pc = 0x147b58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x147b5c: 0x2402ffff
    ctx->pc = 0x147b5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x147b60: 0xae600004
    ctx->pc = 0x147b60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x147b64: 0x3c030015
    ctx->pc = 0x147b64u;
    SET_GPR_U32(ctx, 3, ((uint32_t)21 << 16));
    // 0x147b68: 0xae600008
    ctx->pc = 0x147b68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x147b6c: 0x3c080015
    ctx->pc = 0x147b6cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)21 << 16));
    // 0x147b70: 0x24639178
    ctx->pc = 0x147b70u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294939000));
    // 0x147b74: 0x250891a0
    ctx->pc = 0x147b74u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294939040));
    // 0x147b78: 0xfe620010
    ctx->pc = 0x147b78u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 2));
    // 0x147b7c: 0x24070008
    ctx->pc = 0x147b7cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 8));
    // 0x147b80: 0xfe620018
    ctx->pc = 0x147b80u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
    // 0x147b84: 0x240202d
    ctx->pc = 0x147b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147b88: 0xfe600020
    ctx->pc = 0x147b88u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 0));
    // 0x147b8c: 0x220282d
    ctx->pc = 0x147b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147b90: 0xfe620028
    ctx->pc = 0x147b90u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 40), GPR_U64(ctx, 2));
    // 0x147b94: 0x24060800
    ctx->pc = 0x147b94u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x147b98: 0xfe620030
    ctx->pc = 0x147b98u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 48), GPR_U64(ctx, 2));
    // 0x147b9c: 0xfe600038
    ctx->pc = 0x147b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 56), GPR_U64(ctx, 0));
    // 0x147ba0: 0xae4000cc
    ctx->pc = 0x147ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 0));
    // 0x147ba4: 0xae4000d0
    ctx->pc = 0x147ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 0));
    // 0x147ba8: 0xae4000d4
    ctx->pc = 0x147ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x147bac: 0xae4000d8
    ctx->pc = 0x147bacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
    // 0x147bb0: 0xae4000dc
    ctx->pc = 0x147bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 0));
    // 0x147bb4: 0xae4000e0
    ctx->pc = 0x147bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 0));
    // 0x147bb8: 0xae4000e4
    ctx->pc = 0x147bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 0));
    // 0x147bbc: 0xae4000e8
    ctx->pc = 0x147bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 0));
    // 0x147bc0: 0xae4000ec
    ctx->pc = 0x147bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 236), GPR_U32(ctx, 0));
    // 0x147bc4: 0xae4000f0
    ctx->pc = 0x147bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 0));
    // 0x147bc8: 0xae4000f4
    ctx->pc = 0x147bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 0));
    // 0x147bcc: 0xae4000f8
    ctx->pc = 0x147bccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 0));
    // 0x147bd0: 0xae4000fc
    ctx->pc = 0x147bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 252), GPR_U32(ctx, 0));
    // 0x147bd4: 0xae400100
    ctx->pc = 0x147bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 256), GPR_U32(ctx, 0));
    // 0x147bd8: 0xae400110
    ctx->pc = 0x147bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 0));
    // 0x147bdc: 0xae40000c
    ctx->pc = 0x147bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x147be0: 0xae400018
    ctx->pc = 0x147be0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x147be4: 0xae40003c
    ctx->pc = 0x147be4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x147be8: 0xae400048
    ctx->pc = 0x147be8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    // 0x147bec: 0xae400054
    ctx->pc = 0x147becu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
    // 0x147bf0: 0xfe420108
    ctx->pc = 0x147bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 264), GPR_U64(ctx, 2));
    // 0x147bf4: 0xae430024
    ctx->pc = 0x147bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
    // 0x147bf8: 0xc05203a
    ctx->pc = 0x147BF8u;
    SET_GPR_U32(ctx, 31, 0x147C00u);
    ctx->pc = 0x147BFCu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 8));
    ctx->pc = 0x1480E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001480E8_0x1480e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147C00u; }
    }
    if (ctx->pc != 0x147C00u) { return; }
    ctx->pc = 0x147C00u;
    // 0x147c00: 0x24030001
    ctx->pc = 0x147c00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x147c04: 0xae400064
    ctx->pc = 0x147c04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
    // 0x147c08: 0xae400114
    ctx->pc = 0x147c08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 0));
    // 0x147c0c: 0x240202d
    ctx->pc = 0x147c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147c10: 0xae400118
    ctx->pc = 0x147c10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 280), GPR_U32(ctx, 0));
    // 0x147c14: 0xae40011c
    ctx->pc = 0x147c14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 284), GPR_U32(ctx, 0));
    // 0x147c18: 0xae40008c
    ctx->pc = 0x147c18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
    // 0x147c1c: 0xfe400090
    ctx->pc = 0x147c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 144), GPR_U64(ctx, 0));
    // 0x147c20: 0xae500098
    ctx->pc = 0x147c20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 16));
    // 0x147c24: 0xfe4000a0
    ctx->pc = 0x147c24u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 0));
    // 0x147c28: 0xae4000a8
    ctx->pc = 0x147c28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 0));
    // 0x147c2c: 0xae4000c4
    ctx->pc = 0x147c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 0));
    // 0x147c30: 0xae5000ac
    ctx->pc = 0x147c30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 16));
    // 0x147c34: 0xae5000b0
    ctx->pc = 0x147c34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 16));
    // 0x147c38: 0xae5000b4
    ctx->pc = 0x147c38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 16));
    // 0x147c3c: 0xae530870
    ctx->pc = 0x147c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2160), GPR_U32(ctx, 19));
    // 0x147c40: 0xae420060
    ctx->pc = 0x147c40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
    // 0x147c44: 0xc0521c0
    ctx->pc = 0x147C44u;
    SET_GPR_U32(ctx, 31, 0x147C4Cu);
    ctx->pc = 0x147C48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 3));
    ctx->pc = 0x148700u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00148700_0x148700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147C4Cu; }
    }
    if (ctx->pc != 0x147C4Cu) { return; }
    ctx->pc = 0x147C4Cu;
    // 0x147c4c: 0xc051f9e
    ctx->pc = 0x147C4Cu;
    SET_GPR_U32(ctx, 31, 0x147C54u);
    ctx->pc = 0x147C50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x147E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00147E78_0x147e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147C54u; }
    }
    if (ctx->pc != 0x147C54u) { return; }
    ctx->pc = 0x147C54u;
    // 0x147c54: 0xc051fb6
    ctx->pc = 0x147C54u;
    SET_GPR_U32(ctx, 31, 0x147C5Cu);
    ctx->pc = 0x147C58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x147ED8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00147ED8_0x147ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147C5Cu; }
    }
    if (ctx->pc != 0x147C5Cu) { return; }
    ctx->pc = 0x147C5Cu;
    // 0x147c5c: 0x26430200
    ctx->pc = 0x147c5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 512));
    // 0x147c60: 0x26420268
    ctx->pc = 0x147c60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 616));
    // 0x147c64: 0x264502d0
    ctx->pc = 0x147c64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 720));
    // 0x147c68: 0x26460338
    ctx->pc = 0x147c68u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 824));
    // 0x147c6c: 0x264703a0
    ctx->pc = 0x147c6cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 18), 928));
    // 0x147c70: 0x26480408
    ctx->pc = 0x147c70u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 18), 1032));
    // 0x147c74: 0x26490470
    ctx->pc = 0x147c74u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 18), 1136));
    // 0x147c78: 0x264a04d8
    ctx->pc = 0x147c78u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 18), 1240));
    // 0x147c7c: 0x264b0540
    ctx->pc = 0x147c7cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 18), 1344));
    // 0x147c80: 0xae4301d0
    ctx->pc = 0x147c80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 464), GPR_U32(ctx, 3));
    // 0x147c84: 0xae4201d4
    ctx->pc = 0x147c84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 468), GPR_U32(ctx, 2));
    // 0x147c88: 0x220202d
    ctx->pc = 0x147c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147c8c: 0xae4501dc
    ctx->pc = 0x147c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 476), GPR_U32(ctx, 5));
    // 0x147c90: 0xae4601e0
    ctx->pc = 0x147c90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 480), GPR_U32(ctx, 6));
    // 0x147c94: 0xae4701e4
    ctx->pc = 0x147c94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 484), GPR_U32(ctx, 7));
    // 0x147c98: 0xae4801ec
    ctx->pc = 0x147c98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 492), GPR_U32(ctx, 8));
    // 0x147c9c: 0xae4901f0
    ctx->pc = 0x147c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 496), GPR_U32(ctx, 9));
    // 0x147ca0: 0xae4a01f4
    ctx->pc = 0x147ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 500), GPR_U32(ctx, 10));
    // 0x147ca4: 0xc052032
    ctx->pc = 0x147CA4u;
    SET_GPR_U32(ctx, 31, 0x147CACu);
    ctx->pc = 0x147CA8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 508), GPR_U32(ctx, 11));
    ctx->pc = 0x1480C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001480C8_0x1480c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147CACu; }
    }
    if (ctx->pc != 0x147CACu) { return; }
    ctx->pc = 0x147CACu;
    // 0x147cac: 0x3c027000
    ctx->pc = 0x147cacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)28672 << 16));
    // 0x147cb0: 0xae500868
    ctx->pc = 0x147cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2152), GPR_U32(ctx, 16));
    // 0x147cb4: 0x34423600
    ctx->pc = 0x147cb4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 13824));
    // 0x147cb8: 0xae40086c
    ctx->pc = 0x147cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2156), GPR_U32(ctx, 0));
    // 0x147cbc: 0xae420834
    ctx->pc = 0x147cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2100), GPR_U32(ctx, 2));
    // 0x147cc0: 0xae400864
    ctx->pc = 0x147cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2148), GPR_U32(ctx, 0));
    // 0x147cc4: 0x24020001
    ctx->pc = 0x147cc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_147cc8:
    // 0x147cc8: 0xdfbf0040
    ctx->pc = 0x147cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x147ccc: 0xdfb30030
    ctx->pc = 0x147cccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x147cd0: 0xdfb20020
    ctx->pc = 0x147cd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x147cd4: 0xdfb10010
    ctx->pc = 0x147cd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147cd8: 0xdfb00000
    ctx->pc = 0x147cd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147cdc: 0x3e00008
    ctx->pc = 0x147CDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147CE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x147B3Cu: goto label_147b3c;
            case 0x147CC8u: goto label_147cc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x147CE4u;
    // 0x147ce4: 0x0
    ctx->pc = 0x147ce4u;
    // NOP
    // 0x147ce8: 0x3e00008
    ctx->pc = 0x147CE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147CECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x147B3Cu: goto label_147b3c;
            case 0x147CC8u: goto label_147cc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x147CF0u;
    // 0x147cf0: 0x24c30013
    ctx->pc = 0x147cf0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 19));
    // 0x147cf4: 0x27bdfff0
    ctx->pc = 0x147cf4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x147cf8: 0x2402ffff
    ctx->pc = 0x147cf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x147cfc: 0xffbf0000
    ctx->pc = 0x147cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x147d00: 0x24c60022
    ctx->pc = 0x147d00u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 34));
    // 0x147d04: 0x43102a
    ctx->pc = 0x147d04u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x147d08: 0x62300b
    ctx->pc = 0x147d08u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
    // 0x147d0c: 0x8c840040
    ctx->pc = 0x147d0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x147d10: 0x63103
    ctx->pc = 0x147d10u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x147d14: 0xc052232
    ctx->pc = 0x147D14u;
    SET_GPR_U32(ctx, 31, 0x147D1Cu);
    ctx->pc = 0x147D18u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 4));
    ctx->pc = 0x1488C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001488C8_0x1488c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147D1Cu; }
    }
    if (ctx->pc != 0x147D1Cu) { return; }
    ctx->pc = 0x147D1Cu;
    // 0x147d1c: 0xdfbf0000
    ctx->pc = 0x147d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147d20: 0x24020001
    ctx->pc = 0x147d20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x147d24: 0x3e00008
    ctx->pc = 0x147D24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147D28u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x147B3Cu: goto label_147b3c;
            case 0x147CC8u: goto label_147cc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x147D2Cu;
    // 0x147d2c: 0x0
    ctx->pc = 0x147d2cu;
    // NOP
}
