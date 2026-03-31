#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D6930
// Address: 0x1d6930 - 0x1d6a60
void sub_001D6930_0x1d6930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d6930u;

label_1d6930:
    // 0x1d6930: 0x27bdffe0
    ctx->pc = 0x1d6930u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d6934:
    // 0x1d6934: 0x4243c
    ctx->pc = 0x1d6934u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_1d6938:
    // 0x1d6938: 0xffbf0010
    ctx->pc = 0x1d6938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d693c:
    // 0x1d693c: 0x4243f
    ctx->pc = 0x1d693cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_1d6940:
    // 0x1d6940: 0x7fb00000
    ctx->pc = 0x1d6940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d6944:
    // 0x1d6944: 0xa0802d
    ctx->pc = 0x1d6944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d6948:
    // 0x1d6948: 0x26060004
    ctx->pc = 0x1d6948u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 4));
label_1d694c:
    // 0x1d694c: 0xc075f48
label_1d6950:
    if (ctx->pc == 0x1D6950u) {
        ctx->pc = 0x1D6950u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 6));
        ctx->pc = 0x1D6954u;
        goto label_1d6954;
    }
    ctx->pc = 0x1D694Cu;
    SET_GPR_U32(ctx, 31, 0x1D6954u);
    ctx->pc = 0x1D6950u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 6));
    ctx->pc = 0x1D7D20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7D20_0x1d7d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6954u; }
    }
    if (ctx->pc != 0x1D6954u) { return; }
    ctx->pc = 0x1D6954u;
label_1d6954:
    // 0x1d6954: 0x2243c
    ctx->pc = 0x1d6954u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_1d6958:
    // 0x1d6958: 0xc0759b4
label_1d695c:
    if (ctx->pc == 0x1D695Cu) {
        ctx->pc = 0x1D695Cu;
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->pc = 0x1D6960u;
        goto label_1d6960;
    }
    ctx->pc = 0x1D6958u;
    SET_GPR_U32(ctx, 31, 0x1D6960u);
    ctx->pc = 0x1D695Cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->pc = 0x1D66D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D66D0_0x1d66d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6960u; }
    }
    if (ctx->pc != 0x1D6960u) { return; }
    ctx->pc = 0x1D6960u;
label_1d6960:
    // 0x1d6960: 0x4410003
label_1d6964:
    if (ctx->pc == 0x1D6964u) {
        ctx->pc = 0x1D6968u;
        goto label_1d6968;
    }
    ctx->pc = 0x1D6960u;
    {
        const bool branch_taken_0x1d6960 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1d6960) {
            ctx->pc = 0x1D6970u;
            goto label_1d6970;
        }
    }
    ctx->pc = 0x1D6968u;
label_1d6968:
    // 0x1d6968: 0x10000039
label_1d696c:
    if (ctx->pc == 0x1D696Cu) {
        ctx->pc = 0x1D6970u;
        goto label_1d6970;
    }
    ctx->pc = 0x1D6968u;
    {
        const bool branch_taken_0x1d6968 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d6968) {
            ctx->pc = 0x1D6A50u;
            goto label_1d6a50;
        }
    }
    ctx->pc = 0x1D6970u;
label_1d6970:
    // 0x1d6970: 0x86030000
    ctx->pc = 0x1d6970u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1d6974:
    // 0x1d6974: 0x24630001
    ctx->pc = 0x1d6974u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1d6978:
    // 0x1d6978: 0x2c61000c
    ctx->pc = 0x1d6978u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 12));
label_1d697c:
    // 0x1d697c: 0x10200022
label_1d6980:
    if (ctx->pc == 0x1D6980u) {
        ctx->pc = 0x1D6980u;
        SET_GPR_U32(ctx, 4, ((uint32_t)37 << 16));
        ctx->pc = 0x1D6984u;
        goto label_1d6984;
    }
    ctx->pc = 0x1D697Cu;
    {
        const bool branch_taken_0x1d697c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D6980u;
        SET_GPR_U32(ctx, 4, ((uint32_t)37 << 16));
        if (branch_taken_0x1d697c) {
            ctx->pc = 0x1D6A08u;
            goto label_1d6a08;
        }
    }
    ctx->pc = 0x1D6984u;
label_1d6984:
    // 0x1d6984: 0x31880
    ctx->pc = 0x1d6984u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_1d6988:
    // 0x1d6988: 0x24847c00
    ctx->pc = 0x1d6988u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 31744));
label_1d698c:
    // 0x1d698c: 0x641821
    ctx->pc = 0x1d698cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d6990:
    // 0x1d6990: 0x8c630000
    ctx->pc = 0x1d6990u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d6994:
    // 0x1d6994: 0x600008
label_1d6998:
    if (ctx->pc == 0x1D6998u) {
        ctx->pc = 0x1D699Cu;
        goto label_1d699c;
    }
    ctx->pc = 0x1D6994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D6930u: goto label_1d6930;
            case 0x1D6934u: goto label_1d6934;
            case 0x1D6938u: goto label_1d6938;
            case 0x1D693Cu: goto label_1d693c;
            case 0x1D6940u: goto label_1d6940;
            case 0x1D6944u: goto label_1d6944;
            case 0x1D6948u: goto label_1d6948;
            case 0x1D694Cu: goto label_1d694c;
            case 0x1D6950u: goto label_1d6950;
            case 0x1D6954u: goto label_1d6954;
            case 0x1D6958u: goto label_1d6958;
            case 0x1D695Cu: goto label_1d695c;
            case 0x1D6960u: goto label_1d6960;
            case 0x1D6964u: goto label_1d6964;
            case 0x1D6968u: goto label_1d6968;
            case 0x1D696Cu: goto label_1d696c;
            case 0x1D6970u: goto label_1d6970;
            case 0x1D6974u: goto label_1d6974;
            case 0x1D6978u: goto label_1d6978;
            case 0x1D697Cu: goto label_1d697c;
            case 0x1D6980u: goto label_1d6980;
            case 0x1D6984u: goto label_1d6984;
            case 0x1D6988u: goto label_1d6988;
            case 0x1D698Cu: goto label_1d698c;
            case 0x1D6990u: goto label_1d6990;
            case 0x1D6994u: goto label_1d6994;
            case 0x1D6998u: goto label_1d6998;
            case 0x1D699Cu: goto label_1d699c;
            case 0x1D69A0u: goto label_1d69a0;
            case 0x1D69A4u: goto label_1d69a4;
            case 0x1D69A8u: goto label_1d69a8;
            case 0x1D69ACu: goto label_1d69ac;
            case 0x1D69B0u: goto label_1d69b0;
            case 0x1D69B4u: goto label_1d69b4;
            case 0x1D69B8u: goto label_1d69b8;
            case 0x1D69BCu: goto label_1d69bc;
            case 0x1D69C0u: goto label_1d69c0;
            case 0x1D69C4u: goto label_1d69c4;
            case 0x1D69C8u: goto label_1d69c8;
            case 0x1D69CCu: goto label_1d69cc;
            case 0x1D69D0u: goto label_1d69d0;
            case 0x1D69D4u: goto label_1d69d4;
            case 0x1D69D8u: goto label_1d69d8;
            case 0x1D69DCu: goto label_1d69dc;
            case 0x1D69E0u: goto label_1d69e0;
            case 0x1D69E4u: goto label_1d69e4;
            case 0x1D69E8u: goto label_1d69e8;
            case 0x1D69ECu: goto label_1d69ec;
            case 0x1D69F0u: goto label_1d69f0;
            case 0x1D69F4u: goto label_1d69f4;
            case 0x1D69F8u: goto label_1d69f8;
            case 0x1D69FCu: goto label_1d69fc;
            case 0x1D6A00u: goto label_1d6a00;
            case 0x1D6A04u: goto label_1d6a04;
            case 0x1D6A08u: goto label_1d6a08;
            case 0x1D6A0Cu: goto label_1d6a0c;
            case 0x1D6A10u: goto label_1d6a10;
            case 0x1D6A14u: goto label_1d6a14;
            case 0x1D6A18u: goto label_1d6a18;
            case 0x1D6A1Cu: goto label_1d6a1c;
            case 0x1D6A20u: goto label_1d6a20;
            case 0x1D6A24u: goto label_1d6a24;
            case 0x1D6A28u: goto label_1d6a28;
            case 0x1D6A2Cu: goto label_1d6a2c;
            case 0x1D6A30u: goto label_1d6a30;
            case 0x1D6A34u: goto label_1d6a34;
            case 0x1D6A38u: goto label_1d6a38;
            case 0x1D6A3Cu: goto label_1d6a3c;
            case 0x1D6A40u: goto label_1d6a40;
            case 0x1D6A44u: goto label_1d6a44;
            case 0x1D6A48u: goto label_1d6a48;
            case 0x1D6A4Cu: goto label_1d6a4c;
            case 0x1D6A50u: goto label_1d6a50;
            case 0x1D6A54u: goto label_1d6a54;
            case 0x1D6A58u: goto label_1d6a58;
            case 0x1D6A5Cu: goto label_1d6a5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D699Cu;
label_1d699c:
    // 0x1d699c: 0x0
    ctx->pc = 0x1d699cu;
    // NOP
label_1d69a0:
    // 0x1d69a0: 0x1000002b
label_1d69a4:
    if (ctx->pc == 0x1D69A4u) {
        ctx->pc = 0x1D69A4u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1D69A8u;
        goto label_1d69a8;
    }
    ctx->pc = 0x1D69A0u;
    {
        const bool branch_taken_0x1d69a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D69A4u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1d69a0) {
            ctx->pc = 0x1D6A50u;
            goto label_1d6a50;
        }
    }
    ctx->pc = 0x1D69A8u;
label_1d69a8:
    // 0x1d69a8: 0x24030001
    ctx->pc = 0x1d69a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1d69ac:
    // 0x1d69ac: 0x10000028
label_1d69b0:
    if (ctx->pc == 0x1D69B0u) {
        ctx->pc = 0x1D69B0u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D69B4u;
        goto label_1d69b4;
    }
    ctx->pc = 0x1D69ACu;
    {
        const bool branch_taken_0x1d69ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D69B0u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d69ac) {
            ctx->pc = 0x1D6A50u;
            goto label_1d6a50;
        }
    }
    ctx->pc = 0x1D69B4u;
label_1d69b4:
    // 0x1d69b4: 0x0
    ctx->pc = 0x1d69b4u;
    // NOP
label_1d69b8:
    // 0x1d69b8: 0x24030002
    ctx->pc = 0x1d69b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1d69bc:
    // 0x1d69bc: 0x10000024
label_1d69c0:
    if (ctx->pc == 0x1D69C0u) {
        ctx->pc = 0x1D69C0u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D69C4u;
        goto label_1d69c4;
    }
    ctx->pc = 0x1D69BCu;
    {
        const bool branch_taken_0x1d69bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D69C0u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d69bc) {
            ctx->pc = 0x1D6A50u;
            goto label_1d6a50;
        }
    }
    ctx->pc = 0x1D69C4u;
label_1d69c4:
    // 0x1d69c4: 0x0
    ctx->pc = 0x1d69c4u;
    // NOP
label_1d69c8:
    // 0x1d69c8: 0x24030003
    ctx->pc = 0x1d69c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_1d69cc:
    // 0x1d69cc: 0x10000020
label_1d69d0:
    if (ctx->pc == 0x1D69D0u) {
        ctx->pc = 0x1D69D0u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D69D4u;
        goto label_1d69d4;
    }
    ctx->pc = 0x1D69CCu;
    {
        const bool branch_taken_0x1d69cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D69D0u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d69cc) {
            ctx->pc = 0x1D6A50u;
            goto label_1d6a50;
        }
    }
    ctx->pc = 0x1D69D4u;
label_1d69d4:
    // 0x1d69d4: 0x0
    ctx->pc = 0x1d69d4u;
    // NOP
label_1d69d8:
    // 0x1d69d8: 0x24030004
    ctx->pc = 0x1d69d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
label_1d69dc:
    // 0x1d69dc: 0x1000001c
label_1d69e0:
    if (ctx->pc == 0x1D69E0u) {
        ctx->pc = 0x1D69E0u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D69E4u;
        goto label_1d69e4;
    }
    ctx->pc = 0x1D69DCu;
    {
        const bool branch_taken_0x1d69dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D69E0u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d69dc) {
            ctx->pc = 0x1D6A50u;
            goto label_1d6a50;
        }
    }
    ctx->pc = 0x1D69E4u;
label_1d69e4:
    // 0x1d69e4: 0x0
    ctx->pc = 0x1d69e4u;
    // NOP
label_1d69e8:
    // 0x1d69e8: 0x24030005
    ctx->pc = 0x1d69e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
label_1d69ec:
    // 0x1d69ec: 0x10000018
label_1d69f0:
    if (ctx->pc == 0x1D69F0u) {
        ctx->pc = 0x1D69F0u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D69F4u;
        goto label_1d69f4;
    }
    ctx->pc = 0x1D69ECu;
    {
        const bool branch_taken_0x1d69ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D69F0u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d69ec) {
            ctx->pc = 0x1D6A50u;
            goto label_1d6a50;
        }
    }
    ctx->pc = 0x1D69F4u;
label_1d69f4:
    // 0x1d69f4: 0x0
    ctx->pc = 0x1d69f4u;
    // NOP
label_1d69f8:
    // 0x1d69f8: 0x24030006
    ctx->pc = 0x1d69f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
label_1d69fc:
    // 0x1d69fc: 0x10000014
label_1d6a00:
    if (ctx->pc == 0x1D6A00u) {
        ctx->pc = 0x1D6A00u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D6A04u;
        goto label_1d6a04;
    }
    ctx->pc = 0x1D69FCu;
    {
        const bool branch_taken_0x1d69fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D6A00u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d69fc) {
            ctx->pc = 0x1D6A50u;
            goto label_1d6a50;
        }
    }
    ctx->pc = 0x1D6A04u;
label_1d6a04:
    // 0x1d6a04: 0x0
    ctx->pc = 0x1d6a04u;
    // NOP
label_1d6a08:
    // 0x1d6a08: 0x24030007
    ctx->pc = 0x1d6a08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
label_1d6a0c:
    // 0x1d6a0c: 0x10000010
label_1d6a10:
    if (ctx->pc == 0x1D6A10u) {
        ctx->pc = 0x1D6A10u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D6A14u;
        goto label_1d6a14;
    }
    ctx->pc = 0x1D6A0Cu;
    {
        const bool branch_taken_0x1d6a0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D6A10u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d6a0c) {
            ctx->pc = 0x1D6A50u;
            goto label_1d6a50;
        }
    }
    ctx->pc = 0x1D6A14u;
label_1d6a14:
    // 0x1d6a14: 0x0
    ctx->pc = 0x1d6a14u;
    // NOP
label_1d6a18:
    // 0x1d6a18: 0x24030008
    ctx->pc = 0x1d6a18u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
label_1d6a1c:
    // 0x1d6a1c: 0x1000000c
label_1d6a20:
    if (ctx->pc == 0x1D6A20u) {
        ctx->pc = 0x1D6A20u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D6A24u;
        goto label_1d6a24;
    }
    ctx->pc = 0x1D6A1Cu;
    {
        const bool branch_taken_0x1d6a1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D6A20u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d6a1c) {
            ctx->pc = 0x1D6A50u;
            goto label_1d6a50;
        }
    }
    ctx->pc = 0x1D6A24u;
label_1d6a24:
    // 0x1d6a24: 0x0
    ctx->pc = 0x1d6a24u;
    // NOP
label_1d6a28:
    // 0x1d6a28: 0x24030009
    ctx->pc = 0x1d6a28u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9));
label_1d6a2c:
    // 0x1d6a2c: 0x10000008
label_1d6a30:
    if (ctx->pc == 0x1D6A30u) {
        ctx->pc = 0x1D6A30u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D6A34u;
        goto label_1d6a34;
    }
    ctx->pc = 0x1D6A2Cu;
    {
        const bool branch_taken_0x1d6a2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D6A30u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d6a2c) {
            ctx->pc = 0x1D6A50u;
            goto label_1d6a50;
        }
    }
    ctx->pc = 0x1D6A34u;
label_1d6a34:
    // 0x1d6a34: 0x0
    ctx->pc = 0x1d6a34u;
    // NOP
label_1d6a38:
    // 0x1d6a38: 0x2403000a
    ctx->pc = 0x1d6a38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
label_1d6a3c:
    // 0x1d6a3c: 0x10000004
label_1d6a40:
    if (ctx->pc == 0x1D6A40u) {
        ctx->pc = 0x1D6A40u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D6A44u;
        goto label_1d6a44;
    }
    ctx->pc = 0x1D6A3Cu;
    {
        const bool branch_taken_0x1d6a3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D6A40u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d6a3c) {
            ctx->pc = 0x1D6A50u;
            goto label_1d6a50;
        }
    }
    ctx->pc = 0x1D6A44u;
label_1d6a44:
    // 0x1d6a44: 0x0
    ctx->pc = 0x1d6a44u;
    // NOP
label_1d6a48:
    // 0x1d6a48: 0x2403000b
    ctx->pc = 0x1d6a48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11));
label_1d6a4c:
    // 0x1d6a4c: 0xa6030000
    ctx->pc = 0x1d6a4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_1d6a50:
    // 0x1d6a50: 0xdfbf0010
    ctx->pc = 0x1d6a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6a54:
    // 0x1d6a54: 0x7bb00000
    ctx->pc = 0x1d6a54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d6a58:
    // 0x1d6a58: 0x3e00008
label_1d6a5c:
    if (ctx->pc == 0x1D6A5Cu) {
        ctx->pc = 0x1D6A5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1D6A60u;
        goto label_fallthrough_0x1d6a58;
    }
    ctx->pc = 0x1D6A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6A5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D6930u: goto label_1d6930;
            case 0x1D6934u: goto label_1d6934;
            case 0x1D6938u: goto label_1d6938;
            case 0x1D693Cu: goto label_1d693c;
            case 0x1D6940u: goto label_1d6940;
            case 0x1D6944u: goto label_1d6944;
            case 0x1D6948u: goto label_1d6948;
            case 0x1D694Cu: goto label_1d694c;
            case 0x1D6950u: goto label_1d6950;
            case 0x1D6954u: goto label_1d6954;
            case 0x1D6958u: goto label_1d6958;
            case 0x1D695Cu: goto label_1d695c;
            case 0x1D6960u: goto label_1d6960;
            case 0x1D6964u: goto label_1d6964;
            case 0x1D6968u: goto label_1d6968;
            case 0x1D696Cu: goto label_1d696c;
            case 0x1D6970u: goto label_1d6970;
            case 0x1D6974u: goto label_1d6974;
            case 0x1D6978u: goto label_1d6978;
            case 0x1D697Cu: goto label_1d697c;
            case 0x1D6980u: goto label_1d6980;
            case 0x1D6984u: goto label_1d6984;
            case 0x1D6988u: goto label_1d6988;
            case 0x1D698Cu: goto label_1d698c;
            case 0x1D6990u: goto label_1d6990;
            case 0x1D6994u: goto label_1d6994;
            case 0x1D6998u: goto label_1d6998;
            case 0x1D699Cu: goto label_1d699c;
            case 0x1D69A0u: goto label_1d69a0;
            case 0x1D69A4u: goto label_1d69a4;
            case 0x1D69A8u: goto label_1d69a8;
            case 0x1D69ACu: goto label_1d69ac;
            case 0x1D69B0u: goto label_1d69b0;
            case 0x1D69B4u: goto label_1d69b4;
            case 0x1D69B8u: goto label_1d69b8;
            case 0x1D69BCu: goto label_1d69bc;
            case 0x1D69C0u: goto label_1d69c0;
            case 0x1D69C4u: goto label_1d69c4;
            case 0x1D69C8u: goto label_1d69c8;
            case 0x1D69CCu: goto label_1d69cc;
            case 0x1D69D0u: goto label_1d69d0;
            case 0x1D69D4u: goto label_1d69d4;
            case 0x1D69D8u: goto label_1d69d8;
            case 0x1D69DCu: goto label_1d69dc;
            case 0x1D69E0u: goto label_1d69e0;
            case 0x1D69E4u: goto label_1d69e4;
            case 0x1D69E8u: goto label_1d69e8;
            case 0x1D69ECu: goto label_1d69ec;
            case 0x1D69F0u: goto label_1d69f0;
            case 0x1D69F4u: goto label_1d69f4;
            case 0x1D69F8u: goto label_1d69f8;
            case 0x1D69FCu: goto label_1d69fc;
            case 0x1D6A00u: goto label_1d6a00;
            case 0x1D6A04u: goto label_1d6a04;
            case 0x1D6A08u: goto label_1d6a08;
            case 0x1D6A0Cu: goto label_1d6a0c;
            case 0x1D6A10u: goto label_1d6a10;
            case 0x1D6A14u: goto label_1d6a14;
            case 0x1D6A18u: goto label_1d6a18;
            case 0x1D6A1Cu: goto label_1d6a1c;
            case 0x1D6A20u: goto label_1d6a20;
            case 0x1D6A24u: goto label_1d6a24;
            case 0x1D6A28u: goto label_1d6a28;
            case 0x1D6A2Cu: goto label_1d6a2c;
            case 0x1D6A30u: goto label_1d6a30;
            case 0x1D6A34u: goto label_1d6a34;
            case 0x1D6A38u: goto label_1d6a38;
            case 0x1D6A3Cu: goto label_1d6a3c;
            case 0x1D6A40u: goto label_1d6a40;
            case 0x1D6A44u: goto label_1d6a44;
            case 0x1D6A48u: goto label_1d6a48;
            case 0x1D6A4Cu: goto label_1d6a4c;
            case 0x1D6A50u: goto label_1d6a50;
            case 0x1D6A54u: goto label_1d6a54;
            case 0x1D6A58u: goto label_1d6a58;
            case 0x1D6A5Cu: goto label_1d6a5c;
            default: break;
        }
        return;
    }
label_fallthrough_0x1d6a58:
    ctx->pc = 0x1D6A60u;
}
