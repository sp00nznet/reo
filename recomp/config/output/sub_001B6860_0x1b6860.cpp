#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B6860
// Address: 0x1b6860 - 0x1b6a00
void sub_001B6860_0x1b6860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b6860u;

    // 0x1b6860: 0x8c8a0028
    ctx->pc = 0x1b6860u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1b6864: 0x482d
    ctx->pc = 0x1b6864u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6868: 0x8c880090
    ctx->pc = 0x1b6868u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x1b686c: 0x8c870020
    ctx->pc = 0x1b686cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1b6870: 0x8c860048
    ctx->pc = 0x1b6870u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1b6874: 0x8c830018
    ctx->pc = 0x1b6874u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1b6878: 0x8c820064
    ctx->pc = 0x1b6878u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1b687c: 0x254a0100
    ctx->pc = 0x1b687cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 256));
    // 0x1b6880: 0x8c8b000c
    ctx->pc = 0x1b6880u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1b6884: 0x84240
    ctx->pc = 0x1b6884u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 9));
    // 0x1b6888: 0x1485021
    ctx->pc = 0x1b6888u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x1b688c: 0xa74018
    ctx->pc = 0x1b688cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)(uint32_t)result); }
    // 0x1b6890: 0x70621818
    ctx->pc = 0x1b6890u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x1b6894: 0x62880
    ctx->pc = 0x1b6894u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1b6898: 0xb38c2
    ctx->pc = 0x1b6898u;
    SET_GPR_U32(ctx, 7, SRL32(GPR_U32(ctx, 11), 3));
    // 0x1b689c: 0xa42821
    ctx->pc = 0x1b689cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1b68a0: 0x31660007
    ctx->pc = 0x1b68a0u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 11), 7));
    // 0x1b68a4: 0x8ca2002c
    ctx->pc = 0x1b68a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1b68a8: 0x431821
    ctx->pc = 0x1b68a8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b68ac: 0x1482821
    ctx->pc = 0x1b68acu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x1b68b0: 0x1000004a
    ctx->pc = 0x1B68B0u;
    {
        const bool branch_taken_0x1b68b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B68B4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b68b0) {
            ctx->pc = 0x1B69DCu;
            goto label_1b69dc;
        }
    }
    ctx->pc = 0x1B68B8u;
label_1b68b8:
    // 0x1b68b8: 0x1000002c
    ctx->pc = 0x1B68B8u;
    {
        const bool branch_taken_0x1b68b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B68BCu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b68b8) {
            ctx->pc = 0x1B696Cu;
            goto label_1b696c;
        }
    }
    ctx->pc = 0x1B68C0u;
label_1b68c0:
    // 0x1b68c0: 0x90ac0000
    ctx->pc = 0x1b68c0u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b68c4: 0x25080001
    ctx->pc = 0x1b68c4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x1b68c8: 0x318a0080
    ctx->pc = 0x1b68c8u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 12), 128));
    // 0x1b68cc: 0x24a50001
    ctx->pc = 0x1b68ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b68d0: 0xa69c2
    ctx->pc = 0x1b68d0u;
    SET_GPR_U32(ctx, 13, SRL32(GPR_U32(ctx, 10), 7));
    // 0x1b68d4: 0x318a0040
    ctx->pc = 0x1b68d4u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 12), 64));
    // 0x1b68d8: 0xa5882
    ctx->pc = 0x1b68d8u;
    SET_GPR_U32(ctx, 11, SRL32(GPR_U32(ctx, 10), 2));
    // 0x1b68dc: 0xd5040
    ctx->pc = 0x1b68dcu;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 13), 1));
    // 0x1b68e0: 0x1aa6825
    ctx->pc = 0x1b68e0u;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
    // 0x1b68e4: 0xb5040
    ctx->pc = 0x1b68e4u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 11), 1));
    // 0x1b68e8: 0x16a5825
    ctx->pc = 0x1b68e8u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1b68ec: 0x318a0020
    ctx->pc = 0x1b68ecu;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 12), 32));
    // 0x1b68f0: 0x1ab5825
    ctx->pc = 0x1b68f0u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x1b68f4: 0xa7142
    ctx->pc = 0x1b68f4u;
    SET_GPR_U32(ctx, 14, SRL32(GPR_U32(ctx, 10), 5));
    // 0x1b68f8: 0xa06b0000
    ctx->pc = 0x1b68f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 11));
    // 0x1b68fc: 0xe5040
    ctx->pc = 0x1b68fcu;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 14), 1));
    // 0x1b6900: 0x318d0010
    ctx->pc = 0x1b6900u;
    SET_GPR_U32(ctx, 13, AND32(GPR_U32(ctx, 12), 16));
    // 0x1b6904: 0x1ca7025
    ctx->pc = 0x1b6904u;
    SET_GPR_U32(ctx, 14, OR32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
    // 0x1b6908: 0xd5840
    ctx->pc = 0x1b6908u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 13), 1));
    // 0x1b690c: 0x318a0008
    ctx->pc = 0x1b690cu;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 12), 8));
    // 0x1b6910: 0x1ab6825
    ctx->pc = 0x1b6910u;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x1b6914: 0xa78c2
    ctx->pc = 0x1b6914u;
    SET_GPR_U32(ctx, 15, SRL32(GPR_U32(ctx, 10), 3));
    // 0x1b6918: 0x1cd5825
    ctx->pc = 0x1b6918u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1b691c: 0xf5040
    ctx->pc = 0x1b691cu;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 15), 1));
    // 0x1b6920: 0xa06b0001
    ctx->pc = 0x1b6920u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 11));
    // 0x1b6924: 0x1ea7825
    ctx->pc = 0x1b6924u;
    SET_GPR_U32(ctx, 15, OR32(GPR_U32(ctx, 15), GPR_U32(ctx, 10)));
    // 0x1b6928: 0x318b0004
    ctx->pc = 0x1b6928u;
    SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 12), 4));
    // 0x1b692c: 0x318a0002
    ctx->pc = 0x1b692cu;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 12), 2));
    // 0x1b6930: 0xa6842
    ctx->pc = 0x1b6930u;
    SET_GPR_U32(ctx, 13, SRL32(GPR_U32(ctx, 10), 1));
    // 0x1b6934: 0x318a0001
    ctx->pc = 0x1b6934u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 12), 1));
    // 0x1b6938: 0xb6080
    ctx->pc = 0x1b6938u;
    SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 11), 2));
    // 0x1b693c: 0xb58c0
    ctx->pc = 0x1b693cu;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 3));
    // 0x1b6940: 0x18b6025
    ctx->pc = 0x1b6940u;
    SET_GPR_U32(ctx, 12, OR32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x1b6944: 0xd5840
    ctx->pc = 0x1b6944u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 13), 1));
    // 0x1b6948: 0x1ec6025
    ctx->pc = 0x1b6948u;
    SET_GPR_U32(ctx, 12, OR32(GPR_U32(ctx, 15), GPR_U32(ctx, 12)));
    // 0x1b694c: 0x1ab6825
    ctx->pc = 0x1b694cu;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x1b6950: 0xa06c0002
    ctx->pc = 0x1b6950u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 12));
    // 0x1b6954: 0xa5900
    ctx->pc = 0x1b6954u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 10), 4));
    // 0x1b6958: 0xa5140
    ctx->pc = 0x1b6958u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 5));
    // 0x1b695c: 0x16a5825
    ctx->pc = 0x1b695cu;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1b6960: 0x1ab5025
    ctx->pc = 0x1b6960u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x1b6964: 0xa06a0003
    ctx->pc = 0x1b6964u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x1b6968: 0x24630004
    ctx->pc = 0x1b6968u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
label_1b696c:
    // 0x1b696c: 0x107502a
    ctx->pc = 0x1b696cu;
    SET_GPR_U32(ctx, 10, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 7)));
    // 0x1b6970: 0x1540ffd3
    ctx->pc = 0x1B6970u;
    {
        const bool branch_taken_0x1b6970 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b6970) {
            ctx->pc = 0x1B68C0u;
            goto label_1b68c0;
        }
    }
    ctx->pc = 0x1B6978u;
    // 0x1b6978: 0x10c00017
    ctx->pc = 0x1B6978u;
    {
        const bool branch_taken_0x1b6978 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b6978) {
            ctx->pc = 0x1B69D8u;
            goto label_1b69d8;
        }
    }
    ctx->pc = 0x1B6980u;
    // 0x1b6980: 0x90ab0000
    ctx->pc = 0x1b6980u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b6984: 0x31680080
    ctx->pc = 0x1b6984u;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 11), 128));
    // 0x1b6988: 0x24a50001
    ctx->pc = 0x1b6988u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b698c: 0x861c2
    ctx->pc = 0x1b698cu;
    SET_GPR_U32(ctx, 12, SRL32(GPR_U32(ctx, 8), 7));
    // 0x1b6990: 0x31680040
    ctx->pc = 0x1b6990u;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 11), 64));
    // 0x1b6994: 0x85082
    ctx->pc = 0x1b6994u;
    SET_GPR_U32(ctx, 10, SRL32(GPR_U32(ctx, 8), 2));
    // 0x1b6998: 0xc4040
    ctx->pc = 0x1b6998u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 12), 1));
    // 0x1b699c: 0x1886025
    ctx->pc = 0x1b699cu;
    SET_GPR_U32(ctx, 12, OR32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x1b69a0: 0xa4040
    ctx->pc = 0x1b69a0u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 10), 1));
    // 0x1b69a4: 0x1485025
    ctx->pc = 0x1b69a4u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x1b69a8: 0x31680020
    ctx->pc = 0x1b69a8u;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 11), 32));
    // 0x1b69ac: 0x18a5025
    ctx->pc = 0x1b69acu;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x1b69b0: 0x86142
    ctx->pc = 0x1b69b0u;
    SET_GPR_U32(ctx, 12, SRL32(GPR_U32(ctx, 8), 5));
    // 0x1b69b4: 0xa06a0000
    ctx->pc = 0x1b69b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x1b69b8: 0x316b0010
    ctx->pc = 0x1b69b8u;
    SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 11), 16));
    // 0x1b69bc: 0xc5040
    ctx->pc = 0x1b69bcu;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 12), 1));
    // 0x1b69c0: 0xb4040
    ctx->pc = 0x1b69c0u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 11), 1));
    // 0x1b69c4: 0x18a6025
    ctx->pc = 0x1b69c4u;
    SET_GPR_U32(ctx, 12, OR32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x1b69c8: 0x1685825
    ctx->pc = 0x1b69c8u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x1b69cc: 0x18b4025
    ctx->pc = 0x1b69ccu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x1b69d0: 0xa0680001
    ctx->pc = 0x1b69d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x1b69d4: 0x24630002
    ctx->pc = 0x1b69d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_1b69d8:
    // 0x1b69d8: 0x25290001
    ctx->pc = 0x1b69d8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
label_1b69dc:
    // 0x1b69dc: 0x8c88000c
    ctx->pc = 0x1b69dcu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1b69e0: 0x128402b
    ctx->pc = 0x1b69e0u;
    SET_GPR_U32(ctx, 8, SLTU32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1b69e4: 0x1500ffb4
    ctx->pc = 0x1B69E4u;
    {
        const bool branch_taken_0x1b69e4 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b69e4) {
            ctx->pc = 0x1B68B8u;
            goto label_1b68b8;
        }
    }
    ctx->pc = 0x1B69ECu;
    // 0x1b69ec: 0x3e00008
    ctx->pc = 0x1B69ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B68B8u: goto label_1b68b8;
            case 0x1B68C0u: goto label_1b68c0;
            case 0x1B696Cu: goto label_1b696c;
            case 0x1B69D8u: goto label_1b69d8;
            case 0x1B69DCu: goto label_1b69dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B69F4u;
    // 0x1b69f4: 0x0
    ctx->pc = 0x1b69f4u;
    // NOP
    // 0x1b69f8: 0x0
    ctx->pc = 0x1b69f8u;
    // NOP
    // 0x1b69fc: 0x0
    ctx->pc = 0x1b69fcu;
    // NOP
}
