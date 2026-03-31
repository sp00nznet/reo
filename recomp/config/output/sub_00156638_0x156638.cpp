#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00156638
// Address: 0x156638 - 0x156a98
void sub_00156638_0x156638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x156638u;

    // 0x156638: 0x24a20004
    ctx->pc = 0x156638u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4));
    // 0x15663c: 0x2403fffc
    ctx->pc = 0x15663cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x156640: 0x434824
    ctx->pc = 0x156640u;
    SET_GPR_U32(ctx, 9, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156644: 0xc0782d
    ctx->pc = 0x156644u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156648: 0xa92823
    ctx->pc = 0x156648u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x15664c: 0x812a0000
    ctx->pc = 0x15664cu;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x156650: 0x25290001
    ctx->pc = 0x156650u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x156654: 0x80702d
    ctx->pc = 0x156654u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156658: 0x91230000
    ctx->pc = 0x156658u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x15665c: 0x25290001
    ctx->pc = 0x15665cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x156660: 0x91260000
    ctx->pc = 0x156660u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x156664: 0x25290001
    ctx->pc = 0x156664u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x156668: 0x91270000
    ctx->pc = 0x156668u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x15666c: 0x25290001
    ctx->pc = 0x15666cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x156670: 0x81280000
    ctx->pc = 0x156670u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x156674: 0x25290001
    ctx->pc = 0x156674u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x156678: 0x91220000
    ctx->pc = 0x156678u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x15667c: 0x25290001
    ctx->pc = 0x15667cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x156680: 0xa5200
    ctx->pc = 0x156680u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 8));
    // 0x156684: 0x84200
    ctx->pc = 0x156684u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x156688: 0x1435025
    ctx->pc = 0x156688u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x15668c: 0x1024025
    ctx->pc = 0x15668cu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x156690: 0x91240000
    ctx->pc = 0x156690u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x156694: 0x25290001
    ctx->pc = 0x156694u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x156698: 0xa5200
    ctx->pc = 0x156698u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 8));
    // 0x15669c: 0x24a50004
    ctx->pc = 0x15669cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x1566a0: 0x84200
    ctx->pc = 0x1566a0u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x1566a4: 0x1465025
    ctx->pc = 0x1566a4u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x1566a8: 0x528c0
    ctx->pc = 0x1566a8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 3));
    // 0x1566ac: 0x91230000
    ctx->pc = 0x1566acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1566b0: 0x1044025
    ctx->pc = 0x1566b0u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1566b4: 0xa5200
    ctx->pc = 0x1566b4u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 8));
    // 0x1566b8: 0x84200
    ctx->pc = 0x1566b8u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x1566bc: 0x1475025
    ctx->pc = 0x1566bcu;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x1566c0: 0x28a2001e
    ctx->pc = 0x1566c0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 30));
    // 0x1566c4: 0x1034025
    ctx->pc = 0x1566c4u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1566c8: 0xaa5004
    ctx->pc = 0x1566c8u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 5) & 0x1F));
    // 0x1566cc: 0x1440001a
    ctx->pc = 0x1566CCu;
    {
        const bool branch_taken_0x1566cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1566D0u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
        if (branch_taken_0x1566cc) {
            ctx->pc = 0x156738u;
            goto label_156738;
        }
    }
    ctx->pc = 0x1566D4u;
    // 0x1566d4: 0x24a5ffe2
    ctx->pc = 0x1566d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967266));
    // 0x1566d8: 0x10a00005
    ctx->pc = 0x1566D8u;
    {
        const bool branch_taken_0x1566d8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x1566DCu;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 1));
        if (branch_taken_0x1566d8) {
            ctx->pc = 0x1566F0u;
            goto label_1566f0;
        }
    }
    ctx->pc = 0x1566E0u;
    // 0x1566e0: 0x1425025
    ctx->pc = 0x1566e0u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1566e4: 0xa6f82
    ctx->pc = 0x1566e4u;
    SET_GPR_U32(ctx, 13, SRL32(GPR_U32(ctx, 10), 30));
    // 0x1566e8: 0x10000003
    ctx->pc = 0x1566E8u;
    {
        const bool branch_taken_0x1566e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1566ECu;
        SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 8), 1));
        if (branch_taken_0x1566e8) {
            ctx->pc = 0x1566F8u;
            goto label_1566f8;
        }
    }
    ctx->pc = 0x1566F0u;
label_1566f0:
    // 0x1566f0: 0xa6f82
    ctx->pc = 0x1566f0u;
    SET_GPR_U32(ctx, 13, SRL32(GPR_U32(ctx, 10), 30));
    // 0x1566f4: 0x100502d
    ctx->pc = 0x1566f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1566f8:
    // 0x1566f8: 0x81280000
    ctx->pc = 0x1566f8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1566fc: 0x25290001
    ctx->pc = 0x1566fcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x156700: 0x91220000
    ctx->pc = 0x156700u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x156704: 0x25290001
    ctx->pc = 0x156704u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x156708: 0x84200
    ctx->pc = 0x156708u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x15670c: 0x91230000
    ctx->pc = 0x15670cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x156710: 0x1024025
    ctx->pc = 0x156710u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x156714: 0x25290001
    ctx->pc = 0x156714u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x156718: 0x84200
    ctx->pc = 0x156718u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x15671c: 0x91220000
    ctx->pc = 0x15671cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x156720: 0x1034025
    ctx->pc = 0x156720u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x156724: 0x25290001
    ctx->pc = 0x156724u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x156728: 0x84200
    ctx->pc = 0x156728u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x15672c: 0x10000005
    ctx->pc = 0x15672Cu;
    {
        const bool branch_taken_0x15672c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x156730u;
        SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        if (branch_taken_0x15672c) {
            ctx->pc = 0x156744u;
            goto label_156744;
        }
    }
    ctx->pc = 0x156734u;
    // 0x156734: 0x0
    ctx->pc = 0x156734u;
    // NOP
label_156738:
    // 0x156738: 0xa6f82
    ctx->pc = 0x156738u;
    SET_GPR_U32(ctx, 13, SRL32(GPR_U32(ctx, 10), 30));
    // 0x15673c: 0xa5080
    ctx->pc = 0x15673cu;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 2));
    // 0x156740: 0x24a50002
    ctx->pc = 0x156740u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
label_156744:
    // 0x156744: 0x24a50002
    ctx->pc = 0x156744u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
    // 0x156748: 0x28a20020
    ctx->pc = 0x156748u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 32));
    // 0x15674c: 0x54400011
    ctx->pc = 0x15674Cu;
    {
        const bool branch_taken_0x15674c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x15674c) {
            ctx->pc = 0x156750u;
            SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 2));
            ctx->pc = 0x156794u;
            goto label_156794;
        }
    }
    ctx->pc = 0x156754u;
    // 0x156754: 0x24a5ffe0
    ctx->pc = 0x156754u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x156758: 0xa85004
    ctx->pc = 0x156758u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x15675c: 0x81280000
    ctx->pc = 0x15675cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x156760: 0x25290001
    ctx->pc = 0x156760u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x156764: 0x91220000
    ctx->pc = 0x156764u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x156768: 0x25290001
    ctx->pc = 0x156768u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x15676c: 0x84200
    ctx->pc = 0x15676cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x156770: 0x91230000
    ctx->pc = 0x156770u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x156774: 0x1024025
    ctx->pc = 0x156774u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x156778: 0x25290001
    ctx->pc = 0x156778u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x15677c: 0x84200
    ctx->pc = 0x15677cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x156780: 0x91220000
    ctx->pc = 0x156780u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x156784: 0x1034025
    ctx->pc = 0x156784u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x156788: 0x25290001
    ctx->pc = 0x156788u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x15678c: 0x84200
    ctx->pc = 0x15678cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x156790: 0x1024025
    ctx->pc = 0x156790u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_156794:
    // 0x156794: 0x28a2001d
    ctx->pc = 0x156794u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 29));
    // 0x156798: 0x1440001b
    ctx->pc = 0x156798u;
    {
        const bool branch_taken_0x156798 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15679Cu;
        SET_GPR_U32(ctx, 12, SRL32(GPR_U32(ctx, 10), 29));
        if (branch_taken_0x156798) {
            ctx->pc = 0x156808u;
            goto label_156808;
        }
    }
    ctx->pc = 0x1567A0u;
    // 0x1567a0: 0x24a5ffe3
    ctx->pc = 0x1567a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967267));
    // 0x1567a4: 0x10a00008
    ctx->pc = 0x1567A4u;
    {
        const bool branch_taken_0x1567a4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x1567A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1567a4) {
            ctx->pc = 0x1567C8u;
            goto label_1567c8;
        }
    }
    ctx->pc = 0x1567ACu;
    // 0x1567ac: 0x451023
    ctx->pc = 0x1567acu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1567b0: 0x481006
    ctx->pc = 0x1567b0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1567b4: 0x1425025
    ctx->pc = 0x1567b4u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1567b8: 0xa6742
    ctx->pc = 0x1567b8u;
    SET_GPR_U32(ctx, 12, SRL32(GPR_U32(ctx, 10), 29));
    // 0x1567bc: 0x10000003
    ctx->pc = 0x1567BCu;
    {
        const bool branch_taken_0x1567bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1567C0u;
        SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
        if (branch_taken_0x1567bc) {
            ctx->pc = 0x1567CCu;
            goto label_1567cc;
        }
    }
    ctx->pc = 0x1567C4u;
    // 0x1567c4: 0x0
    ctx->pc = 0x1567c4u;
    // NOP
label_1567c8:
    // 0x1567c8: 0x100502d
    ctx->pc = 0x1567c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1567cc:
    // 0x1567cc: 0x81280000
    ctx->pc = 0x1567ccu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1567d0: 0x25290001
    ctx->pc = 0x1567d0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1567d4: 0x91220000
    ctx->pc = 0x1567d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1567d8: 0x25290001
    ctx->pc = 0x1567d8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1567dc: 0x84200
    ctx->pc = 0x1567dcu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x1567e0: 0x91230000
    ctx->pc = 0x1567e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1567e4: 0x1024025
    ctx->pc = 0x1567e4u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1567e8: 0x25290001
    ctx->pc = 0x1567e8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1567ec: 0x84200
    ctx->pc = 0x1567ecu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x1567f0: 0x91220000
    ctx->pc = 0x1567f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1567f4: 0x1034025
    ctx->pc = 0x1567f4u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1567f8: 0x25290001
    ctx->pc = 0x1567f8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1567fc: 0x84200
    ctx->pc = 0x1567fcu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x156800: 0x10000003
    ctx->pc = 0x156800u;
    {
        const bool branch_taken_0x156800 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x156804u;
        SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        if (branch_taken_0x156800) {
            ctx->pc = 0x156810u;
            goto label_156810;
        }
    }
    ctx->pc = 0x156808u;
label_156808:
    // 0x156808: 0xa50c0
    ctx->pc = 0x156808u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 3));
    // 0x15680c: 0x24a50003
    ctx->pc = 0x15680cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 3));
label_156810:
    // 0x156810: 0x24a50001
    ctx->pc = 0x156810u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x156814: 0x28a20020
    ctx->pc = 0x156814u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 32));
    // 0x156818: 0x54400011
    ctx->pc = 0x156818u;
    {
        const bool branch_taken_0x156818 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x156818) {
            ctx->pc = 0x15681Cu;
            SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 1));
            ctx->pc = 0x156860u;
            goto label_156860;
        }
    }
    ctx->pc = 0x156820u;
    // 0x156820: 0x24a5ffe0
    ctx->pc = 0x156820u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x156824: 0xa85004
    ctx->pc = 0x156824u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x156828: 0x81280000
    ctx->pc = 0x156828u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x15682c: 0x25290001
    ctx->pc = 0x15682cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x156830: 0x91220000
    ctx->pc = 0x156830u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x156834: 0x25290001
    ctx->pc = 0x156834u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x156838: 0x84200
    ctx->pc = 0x156838u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x15683c: 0x91230000
    ctx->pc = 0x15683cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x156840: 0x1024025
    ctx->pc = 0x156840u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x156844: 0x25290001
    ctx->pc = 0x156844u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x156848: 0x84200
    ctx->pc = 0x156848u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x15684c: 0x91220000
    ctx->pc = 0x15684cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x156850: 0x1034025
    ctx->pc = 0x156850u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x156854: 0x25290001
    ctx->pc = 0x156854u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x156858: 0x84200
    ctx->pc = 0x156858u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x15685c: 0x1024025
    ctx->pc = 0x15685cu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_156860:
    // 0x156860: 0x28a20011
    ctx->pc = 0x156860u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 17));
    // 0x156864: 0x1440001a
    ctx->pc = 0x156864u;
    {
        const bool branch_taken_0x156864 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x156868u;
        SET_GPR_U32(ctx, 11, SRL32(GPR_U32(ctx, 10), 17));
        if (branch_taken_0x156864) {
            ctx->pc = 0x1568D0u;
            goto label_1568d0;
        }
    }
    ctx->pc = 0x15686Cu;
    // 0x15686c: 0x24a5ffef
    ctx->pc = 0x15686cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967279));
    // 0x156870: 0x10a00007
    ctx->pc = 0x156870u;
    {
        const bool branch_taken_0x156870 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x156874u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x156870) {
            ctx->pc = 0x156890u;
            goto label_156890;
        }
    }
    ctx->pc = 0x156878u;
    // 0x156878: 0x451023
    ctx->pc = 0x156878u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15687c: 0x481006
    ctx->pc = 0x15687cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x156880: 0x1425025
    ctx->pc = 0x156880u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x156884: 0xa5c42
    ctx->pc = 0x156884u;
    SET_GPR_U32(ctx, 11, SRL32(GPR_U32(ctx, 10), 17));
    // 0x156888: 0x10000002
    ctx->pc = 0x156888u;
    {
        const bool branch_taken_0x156888 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15688Cu;
        SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
        if (branch_taken_0x156888) {
            ctx->pc = 0x156894u;
            goto label_156894;
        }
    }
    ctx->pc = 0x156890u;
label_156890:
    // 0x156890: 0x100502d
    ctx->pc = 0x156890u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_156894:
    // 0x156894: 0x81280000
    ctx->pc = 0x156894u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x156898: 0x25290001
    ctx->pc = 0x156898u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x15689c: 0x91220000
    ctx->pc = 0x15689cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1568a0: 0x25290001
    ctx->pc = 0x1568a0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1568a4: 0x84200
    ctx->pc = 0x1568a4u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x1568a8: 0x91230000
    ctx->pc = 0x1568a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1568ac: 0x1024025
    ctx->pc = 0x1568acu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1568b0: 0x25290001
    ctx->pc = 0x1568b0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1568b4: 0x84200
    ctx->pc = 0x1568b4u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x1568b8: 0x91220000
    ctx->pc = 0x1568b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1568bc: 0x1034025
    ctx->pc = 0x1568bcu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1568c0: 0x25290001
    ctx->pc = 0x1568c0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1568c4: 0x84200
    ctx->pc = 0x1568c4u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x1568c8: 0x10000003
    ctx->pc = 0x1568C8u;
    {
        const bool branch_taken_0x1568c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1568CCu;
        SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        if (branch_taken_0x1568c8) {
            ctx->pc = 0x1568D8u;
            goto label_1568d8;
        }
    }
    ctx->pc = 0x1568D0u;
label_1568d0:
    // 0x1568d0: 0xa53c0
    ctx->pc = 0x1568d0u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 15));
    // 0x1568d4: 0x24a5000f
    ctx->pc = 0x1568d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 15));
label_1568d8:
    // 0x1568d8: 0x24a50001
    ctx->pc = 0x1568d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1568dc: 0x28a20020
    ctx->pc = 0x1568dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 32));
    // 0x1568e0: 0x54400011
    ctx->pc = 0x1568E0u;
    {
        const bool branch_taken_0x1568e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1568e0) {
            ctx->pc = 0x1568E4u;
            SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 1));
            ctx->pc = 0x156928u;
            goto label_156928;
        }
    }
    ctx->pc = 0x1568E8u;
    // 0x1568e8: 0x24a5ffe0
    ctx->pc = 0x1568e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x1568ec: 0xa85004
    ctx->pc = 0x1568ecu;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x1568f0: 0x81280000
    ctx->pc = 0x1568f0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1568f4: 0x25290001
    ctx->pc = 0x1568f4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1568f8: 0x91220000
    ctx->pc = 0x1568f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1568fc: 0x25290001
    ctx->pc = 0x1568fcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x156900: 0x84200
    ctx->pc = 0x156900u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x156904: 0x91230000
    ctx->pc = 0x156904u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x156908: 0x1024025
    ctx->pc = 0x156908u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x15690c: 0x25290001
    ctx->pc = 0x15690cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x156910: 0x84200
    ctx->pc = 0x156910u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x156914: 0x91220000
    ctx->pc = 0x156914u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x156918: 0x1034025
    ctx->pc = 0x156918u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x15691c: 0x25290001
    ctx->pc = 0x15691cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x156920: 0x84200
    ctx->pc = 0x156920u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x156924: 0x1024025
    ctx->pc = 0x156924u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_156928:
    // 0x156928: 0x28a20011
    ctx->pc = 0x156928u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 17));
    // 0x15692c: 0x1440001a
    ctx->pc = 0x15692Cu;
    {
        const bool branch_taken_0x15692c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x156930u;
        SET_GPR_U32(ctx, 7, SRL32(GPR_U32(ctx, 10), 17));
        if (branch_taken_0x15692c) {
            ctx->pc = 0x156998u;
            goto label_156998;
        }
    }
    ctx->pc = 0x156934u;
    // 0x156934: 0x24a5ffef
    ctx->pc = 0x156934u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967279));
    // 0x156938: 0x10a00007
    ctx->pc = 0x156938u;
    {
        const bool branch_taken_0x156938 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x15693Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x156938) {
            ctx->pc = 0x156958u;
            goto label_156958;
        }
    }
    ctx->pc = 0x156940u;
    // 0x156940: 0x451023
    ctx->pc = 0x156940u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x156944: 0x481006
    ctx->pc = 0x156944u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x156948: 0x1425025
    ctx->pc = 0x156948u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x15694c: 0xa3c42
    ctx->pc = 0x15694cu;
    SET_GPR_U32(ctx, 7, SRL32(GPR_U32(ctx, 10), 17));
    // 0x156950: 0x10000002
    ctx->pc = 0x156950u;
    {
        const bool branch_taken_0x156950 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x156954u;
        SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
        if (branch_taken_0x156950) {
            ctx->pc = 0x15695Cu;
            goto label_15695c;
        }
    }
    ctx->pc = 0x156958u;
label_156958:
    // 0x156958: 0x100502d
    ctx->pc = 0x156958u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_15695c:
    // 0x15695c: 0x81280000
    ctx->pc = 0x15695cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x156960: 0x25290001
    ctx->pc = 0x156960u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x156964: 0x91220000
    ctx->pc = 0x156964u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x156968: 0x25290001
    ctx->pc = 0x156968u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x15696c: 0x84200
    ctx->pc = 0x15696cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x156970: 0x91230000
    ctx->pc = 0x156970u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x156974: 0x1024025
    ctx->pc = 0x156974u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x156978: 0x25290001
    ctx->pc = 0x156978u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x15697c: 0x84200
    ctx->pc = 0x15697cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x156980: 0x91220000
    ctx->pc = 0x156980u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x156984: 0x1034025
    ctx->pc = 0x156984u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x156988: 0x25290001
    ctx->pc = 0x156988u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x15698c: 0x84200
    ctx->pc = 0x15698cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x156990: 0x10000003
    ctx->pc = 0x156990u;
    {
        const bool branch_taken_0x156990 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x156994u;
        SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        if (branch_taken_0x156990) {
            ctx->pc = 0x1569A0u;
            goto label_1569a0;
        }
    }
    ctx->pc = 0x156998u;
label_156998:
    // 0x156998: 0xa53c0
    ctx->pc = 0x156998u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 15));
    // 0x15699c: 0x24a5000f
    ctx->pc = 0x15699cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 15));
label_1569a0:
    // 0x1569a0: 0x24a50001
    ctx->pc = 0x1569a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1569a4: 0x28a20020
    ctx->pc = 0x1569a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 32));
    // 0x1569a8: 0x54400011
    ctx->pc = 0x1569A8u;
    {
        const bool branch_taken_0x1569a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1569a8) {
            ctx->pc = 0x1569ACu;
            SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 1));
            ctx->pc = 0x1569F0u;
            goto label_1569f0;
        }
    }
    ctx->pc = 0x1569B0u;
    // 0x1569b0: 0x24a5ffe0
    ctx->pc = 0x1569b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x1569b4: 0xa85004
    ctx->pc = 0x1569b4u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x1569b8: 0x81280000
    ctx->pc = 0x1569b8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1569bc: 0x25290001
    ctx->pc = 0x1569bcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1569c0: 0x91220000
    ctx->pc = 0x1569c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1569c4: 0x25290001
    ctx->pc = 0x1569c4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1569c8: 0x84200
    ctx->pc = 0x1569c8u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x1569cc: 0x91230000
    ctx->pc = 0x1569ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1569d0: 0x1024025
    ctx->pc = 0x1569d0u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1569d4: 0x25290001
    ctx->pc = 0x1569d4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1569d8: 0x84200
    ctx->pc = 0x1569d8u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x1569dc: 0x91220000
    ctx->pc = 0x1569dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1569e0: 0x1034025
    ctx->pc = 0x1569e0u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1569e4: 0x25290001
    ctx->pc = 0x1569e4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1569e8: 0x84200
    ctx->pc = 0x1569e8u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x1569ec: 0x1024025
    ctx->pc = 0x1569ecu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_1569f0:
    // 0x1569f0: 0x24a50001
    ctx->pc = 0x1569f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1569f4: 0x28a20020
    ctx->pc = 0x1569f4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 32));
    // 0x1569f8: 0x5440000f
    ctx->pc = 0x1569F8u;
    {
        const bool branch_taken_0x1569f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1569f8) {
            ctx->pc = 0x1569FCu;
            SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 1));
            ctx->pc = 0x156A38u;
            goto label_156a38;
        }
    }
    ctx->pc = 0x156A00u;
    // 0x156a00: 0x24a5ffe0
    ctx->pc = 0x156a00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x156a04: 0xa85004
    ctx->pc = 0x156a04u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x156a08: 0x81280000
    ctx->pc = 0x156a08u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x156a0c: 0x25290001
    ctx->pc = 0x156a0cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x156a10: 0x91220000
    ctx->pc = 0x156a10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x156a14: 0x25290001
    ctx->pc = 0x156a14u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x156a18: 0x84200
    ctx->pc = 0x156a18u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x156a1c: 0x91230000
    ctx->pc = 0x156a1cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x156a20: 0x1024025
    ctx->pc = 0x156a20u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x156a24: 0x91240001
    ctx->pc = 0x156a24u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x156a28: 0x84200
    ctx->pc = 0x156a28u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x156a2c: 0x1034025
    ctx->pc = 0x156a2cu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x156a30: 0x84200
    ctx->pc = 0x156a30u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x156a34: 0x1044025
    ctx->pc = 0x156a34u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_156a38:
    // 0x156a38: 0x28a2000a
    ctx->pc = 0x156a38u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 10));
    // 0x156a3c: 0x14400009
    ctx->pc = 0x156A3Cu;
    {
        const bool branch_taken_0x156a3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x156A40u;
        SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 10), 10));
        if (branch_taken_0x156a3c) {
            ctx->pc = 0x156A64u;
            goto label_156a64;
        }
    }
    ctx->pc = 0x156A44u;
    // 0x156a44: 0x24a5fff6
    ctx->pc = 0x156a44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967286));
    // 0x156a48: 0x50a00007
    ctx->pc = 0x156A48u;
    {
        const bool branch_taken_0x156a48 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x156a48) {
            ctx->pc = 0x156A4Cu;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 11), 13));
            ctx->pc = 0x156A68u;
            goto label_156a68;
        }
    }
    ctx->pc = 0x156A50u;
    // 0x156a50: 0x24020016
    ctx->pc = 0x156a50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 22));
    // 0x156a54: 0x451023
    ctx->pc = 0x156a54u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x156a58: 0x481006
    ctx->pc = 0x156a58u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x156a5c: 0x1425025
    ctx->pc = 0x156a5cu;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x156a60: 0xa3282
    ctx->pc = 0x156a60u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 10), 10));
label_156a64:
    // 0x156a64: 0xb1340
    ctx->pc = 0x156a64u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 11), 13));
label_156a68:
    // 0x156a68: 0xc2700
    ctx->pc = 0x156a68u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 12), 28));
    // 0x156a6c: 0x822025
    ctx->pc = 0x156a6cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x156a70: 0x2da20001
    ctx->pc = 0x156a70u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 13), 1));
    // 0x156a74: 0x71882
    ctx->pc = 0x156a74u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 7), 2));
    // 0x156a78: 0xadc60008
    ctx->pc = 0x156a78u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 6));
    // 0x156a7c: 0x832025
    ctx->pc = 0x156a7cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x156a80: 0x2403000c
    ctx->pc = 0x156a80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
    // 0x156a84: 0xadc20000
    ctx->pc = 0x156a84u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x156a88: 0xadc40004
    ctx->pc = 0x156a88u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 4));
    // 0x156a8c: 0x3e00008
    ctx->pc = 0x156A8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156A90u;
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1566F0u: goto label_1566f0;
            case 0x1566F8u: goto label_1566f8;
            case 0x156738u: goto label_156738;
            case 0x156744u: goto label_156744;
            case 0x156794u: goto label_156794;
            case 0x1567C8u: goto label_1567c8;
            case 0x1567CCu: goto label_1567cc;
            case 0x156808u: goto label_156808;
            case 0x156810u: goto label_156810;
            case 0x156860u: goto label_156860;
            case 0x156890u: goto label_156890;
            case 0x156894u: goto label_156894;
            case 0x1568D0u: goto label_1568d0;
            case 0x1568D8u: goto label_1568d8;
            case 0x156928u: goto label_156928;
            case 0x156958u: goto label_156958;
            case 0x15695Cu: goto label_15695c;
            case 0x156998u: goto label_156998;
            case 0x1569A0u: goto label_1569a0;
            case 0x1569F0u: goto label_1569f0;
            case 0x156A38u: goto label_156a38;
            case 0x156A64u: goto label_156a64;
            case 0x156A68u: goto label_156a68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x156A94u;
    // 0x156a94: 0x0
    ctx->pc = 0x156a94u;
    // NOP
}
