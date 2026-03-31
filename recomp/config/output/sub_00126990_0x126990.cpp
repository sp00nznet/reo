#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00126990
// Address: 0x126990 - 0x126ac8
void sub_00126990_0x126990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x126990u;

    // 0x126990: 0x27bdffc0
    ctx->pc = 0x126990u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x126994: 0xffb20020
    ctx->pc = 0x126994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x126998: 0xc0902d
    ctx->pc = 0x126998u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12699c: 0xffb30028
    ctx->pc = 0x12699cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1269a0: 0xe0982d
    ctx->pc = 0x1269a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1269a4: 0x3a0302d
    ctx->pc = 0x1269a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1269a8: 0x27a70001
    ctx->pc = 0x1269a8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 1));
    // 0x1269ac: 0xffb00010
    ctx->pc = 0x1269acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1269b0: 0x80802d
    ctx->pc = 0x1269b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1269b4: 0xffb10018
    ctx->pc = 0x1269b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1269b8: 0xffbf0030
    ctx->pc = 0x1269b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1269bc: 0xc049a46
    ctx->pc = 0x1269BCu;
    SET_GPR_U32(ctx, 31, 0x1269C4u);
    ctx->pc = 0x1269C0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x126918u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00126918_0x126918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1269C4u; }
    }
    if (ctx->pc != 0x1269C4u) { return; }
    ctx->pc = 0x1269C4u;
    // 0x1269c4: 0x14400038
    ctx->pc = 0x1269C4u;
    {
        const bool branch_taken_0x1269c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1269C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1269c4) {
            ctx->pc = 0x126AA8u;
            goto label_126aa8;
        }
    }
    ctx->pc = 0x1269CCu;
    // 0x1269cc: 0x93a20000
    ctx->pc = 0x1269ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1269d0: 0x2c420004
    ctx->pc = 0x1269d0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 4));
    // 0x1269d4: 0x54400030
    ctx->pc = 0x1269D4u;
    {
        const bool branch_taken_0x1269d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1269d4) {
            ctx->pc = 0x1269D8u;
            WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x126A98u;
            goto label_126a98;
        }
    }
    ctx->pc = 0x1269DCu;
    // 0x1269dc: 0x2a230020
    ctx->pc = 0x1269dcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 32));
    // 0x1269e0: 0x14600031
    ctx->pc = 0x1269E0u;
    {
        const bool branch_taken_0x1269e0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1269E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1269e0) {
            ctx->pc = 0x126AA8u;
            goto label_126aa8;
        }
    }
    ctx->pc = 0x1269E8u;
    // 0x1269e8: 0x96030000
    ctx->pc = 0x1269e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1269ec: 0x34058000
    ctx->pc = 0x1269ecu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32768));
    // 0x1269f0: 0x2406ff00
    ctx->pc = 0x1269f0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1269f4: 0x32200
    ctx->pc = 0x1269f4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 8));
    // 0x1269f8: 0x31a02
    ctx->pc = 0x1269f8u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 8));
    // 0x1269fc: 0x641825
    ctx->pc = 0x1269fcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x126a00: 0x3063ffff
    ctx->pc = 0x126a00u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 65535));
    // 0x126a04: 0x14650028
    ctx->pc = 0x126A04u;
    {
        const bool branch_taken_0x126a04 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 5));
        ctx->pc = 0x126A08u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x126a04) {
            ctx->pc = 0x126AA8u;
            goto label_126aa8;
        }
    }
    ctx->pc = 0x126A0Cu;
    // 0x126a0c: 0x96040002
    ctx->pc = 0x126a0cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x126a10: 0x92030003
    ctx->pc = 0x126a10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x126a14: 0x42200
    ctx->pc = 0x126a14u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
    // 0x126a18: 0x862024
    ctx->pc = 0x126a18u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x126a1c: 0x641825
    ctx->pc = 0x126a1cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x126a20: 0x31c00
    ctx->pc = 0x126a20u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x126a24: 0x31c03
    ctx->pc = 0x126a24u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x126a28: 0x2863001c
    ctx->pc = 0x126a28u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 28));
    // 0x126a2c: 0x1460001e
    ctx->pc = 0x126A2Cu;
    {
        const bool branch_taken_0x126a2c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x126A30u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x126a2c) {
            ctx->pc = 0x126AA8u;
            goto label_126aa8;
        }
    }
    ctx->pc = 0x126A34u;
    // 0x126a34: 0x96020018
    ctx->pc = 0x126a34u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x126a38: 0x21a00
    ctx->pc = 0x126a38u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
    // 0x126a3c: 0x21202
    ctx->pc = 0x126a3cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
    // 0x126a40: 0x661824
    ctx->pc = 0x126a40u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x126a44: 0x431025
    ctx->pc = 0x126a44u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x126a48: 0xa6420000
    ctx->pc = 0x126a48u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x126a4c: 0x9603001a
    ctx->pc = 0x126a4cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x126a50: 0x31200
    ctx->pc = 0x126a50u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 8));
    // 0x126a54: 0x31a02
    ctx->pc = 0x126a54u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 8));
    // 0x126a58: 0x461024
    ctx->pc = 0x126a58u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x126a5c: 0x621825
    ctx->pc = 0x126a5cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x126a60: 0xa6630000
    ctx->pc = 0x126a60u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x126a64: 0x9602001c
    ctx->pc = 0x126a64u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x126a68: 0x21a00
    ctx->pc = 0x126a68u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
    // 0x126a6c: 0x21202
    ctx->pc = 0x126a6cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
    // 0x126a70: 0x661824
    ctx->pc = 0x126a70u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x126a74: 0x431025
    ctx->pc = 0x126a74u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x126a78: 0xa6420002
    ctx->pc = 0x126a78u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x126a7c: 0x9603001e
    ctx->pc = 0x126a7cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x126a80: 0x31200
    ctx->pc = 0x126a80u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 8));
    // 0x126a84: 0x31a02
    ctx->pc = 0x126a84u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 8));
    // 0x126a88: 0x461024
    ctx->pc = 0x126a88u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x126a8c: 0x621825
    ctx->pc = 0x126a8cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x126a90: 0x10000004
    ctx->pc = 0x126A90u;
    {
        const bool branch_taken_0x126a90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x126A94u;
        WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x126a90) {
            ctx->pc = 0x126AA4u;
            goto label_126aa4;
        }
    }
    ctx->pc = 0x126A98u;
label_126a98:
    // 0x126a98: 0xa6400002
    ctx->pc = 0x126a98u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x126a9c: 0xa6600000
    ctx->pc = 0x126a9cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x126aa0: 0xa6400000
    ctx->pc = 0x126aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
label_126aa4:
    // 0x126aa4: 0x102d
    ctx->pc = 0x126aa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126aa8:
    // 0x126aa8: 0xdfb00010
    ctx->pc = 0x126aa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126aac: 0xdfb10018
    ctx->pc = 0x126aacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x126ab0: 0xdfb20020
    ctx->pc = 0x126ab0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126ab4: 0xdfb30028
    ctx->pc = 0x126ab4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x126ab8: 0xdfbf0030
    ctx->pc = 0x126ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x126abc: 0x3e00008
    ctx->pc = 0x126ABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126AC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x126A98u: goto label_126a98;
            case 0x126AA4u: goto label_126aa4;
            case 0x126AA8u: goto label_126aa8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x126AC4u;
    // 0x126ac4: 0x0
    ctx->pc = 0x126ac4u;
    // NOP
}
