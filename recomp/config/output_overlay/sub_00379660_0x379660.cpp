#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00379660
// Address: 0x379660 - 0x379930
void sub_00379660_0x379660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x379660u;

    // 0x379660: 0x3c010057
    ctx->pc = 0x379660u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379664: 0x8c2abac8
    ctx->pc = 0x379664u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 1), 4294949576)));
    // 0x379668: 0x1000000d
    ctx->pc = 0x379668u;
    {
        const bool branch_taken_0x379668 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37966Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x379668) {
            ctx->pc = 0x3796A0u;
            goto label_3796a0;
        }
    }
    ctx->pc = 0x379670u;
label_379670:
    // 0x379670: 0x5410004
    ctx->pc = 0x379670u;
    {
        const bool branch_taken_0x379670 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x379674u;
        SET_GPR_U32(ctx, 12, AND32(GPR_U32(ctx, 10), 1));
        if (branch_taken_0x379670) {
            ctx->pc = 0x379684u;
            goto label_379684;
        }
    }
    ctx->pc = 0x379678u;
    // 0x379678: 0x11800003
    ctx->pc = 0x379678u;
    {
        const bool branch_taken_0x379678 = (GPR_U32(ctx, 12) == GPR_U32(ctx, 0));
        ctx->pc = 0x37967Cu;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 10), 1));
        if (branch_taken_0x379678) {
            ctx->pc = 0x379688u;
            goto label_379688;
        }
    }
    ctx->pc = 0x379680u;
    // 0x379680: 0x258cfffe
    ctx->pc = 0x379680u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 4294967294));
label_379684:
    // 0x379684: 0xa1043
    ctx->pc = 0x379684u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 10), 1));
label_379688:
    // 0x379688: 0x5410003
    ctx->pc = 0x379688u;
    {
        const bool branch_taken_0x379688 = (GPR_S32(ctx, 10) >= 0);
        if (branch_taken_0x379688) {
            ctx->pc = 0x379698u;
            goto label_379698;
        }
    }
    ctx->pc = 0x379690u;
    // 0x379690: 0x25420001
    ctx->pc = 0x379690u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 10), 1));
    // 0x379694: 0x21043
    ctx->pc = 0x379694u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_379698:
    // 0x379698: 0x40502d
    ctx->pc = 0x379698u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37969c: 0x24630001
    ctx->pc = 0x37969cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_3796a0:
    // 0x3796a0: 0x29410002
    ctx->pc = 0x3796a0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 10), 2));
    // 0x3796a4: 0x1020fff2
    ctx->pc = 0x3796A4u;
    {
        const bool branch_taken_0x3796a4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x3796a4) {
            ctx->pc = 0x379670u;
            goto label_379670;
        }
    }
    ctx->pc = 0x3796ACu;
    // 0x3796ac: 0x11800002
    ctx->pc = 0x3796ACu;
    {
        const bool branch_taken_0x3796ac = (GPR_U32(ctx, 12) == GPR_U32(ctx, 0));
        ctx->pc = 0x3796B0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
        if (branch_taken_0x3796ac) {
            ctx->pc = 0x3796B8u;
            goto label_3796b8;
        }
    }
    ctx->pc = 0x3796B4u;
    // 0x3796b4: 0x24630001
    ctx->pc = 0x3796b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_3796b8:
    // 0x3796b8: 0x8c2bbad0
    ctx->pc = 0x3796b8u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 1), 4294949584)));
    // 0x3796bc: 0x29610101
    ctx->pc = 0x3796bcu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 11), 257));
    // 0x3796c0: 0x14200012
    ctx->pc = 0x3796C0u;
    {
        const bool branch_taken_0x3796c0 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x3796C4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x3796c0) {
            ctx->pc = 0x37970Cu;
            goto label_37970c;
        }
    }
    ctx->pc = 0x3796C8u;
    // 0x3796c8: 0x29610200
    ctx->pc = 0x3796c8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 11), 512));
    // 0x3796cc: 0x10200010
    ctx->pc = 0x3796CCu;
    {
        const bool branch_taken_0x3796cc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x3796D0u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 11), 2));
        if (branch_taken_0x3796cc) {
            ctx->pc = 0x379710u;
            goto label_379710;
        }
    }
    ctx->pc = 0x3796D4u;
    // 0x3796d4: 0x1000000d
    ctx->pc = 0x3796D4u;
    {
        const bool branch_taken_0x3796d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3796D8u;
        SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 512));
        if (branch_taken_0x3796d4) {
            ctx->pc = 0x37970Cu;
            goto label_37970c;
        }
    }
    ctx->pc = 0x3796DCu;
label_3796dc:
    // 0x3796dc: 0x5610004
    ctx->pc = 0x3796DCu;
    {
        const bool branch_taken_0x3796dc = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x3796E0u;
        SET_GPR_U32(ctx, 12, AND32(GPR_U32(ctx, 11), 1));
        if (branch_taken_0x3796dc) {
            ctx->pc = 0x3796F0u;
            goto label_3796f0;
        }
    }
    ctx->pc = 0x3796E4u;
    // 0x3796e4: 0x11800003
    ctx->pc = 0x3796E4u;
    {
        const bool branch_taken_0x3796e4 = (GPR_U32(ctx, 12) == GPR_U32(ctx, 0));
        ctx->pc = 0x3796E8u;
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 11), 1));
        if (branch_taken_0x3796e4) {
            ctx->pc = 0x3796F4u;
            goto label_3796f4;
        }
    }
    ctx->pc = 0x3796ECu;
    // 0x3796ec: 0x258cfffe
    ctx->pc = 0x3796ecu;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 4294967294));
label_3796f0:
    // 0x3796f0: 0xb5043
    ctx->pc = 0x3796f0u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 11), 1));
label_3796f4:
    // 0x3796f4: 0x5610003
    ctx->pc = 0x3796F4u;
    {
        const bool branch_taken_0x3796f4 = (GPR_S32(ctx, 11) >= 0);
        if (branch_taken_0x3796f4) {
            ctx->pc = 0x379704u;
            goto label_379704;
        }
    }
    ctx->pc = 0x3796FCu;
    // 0x3796fc: 0x256a0001
    ctx->pc = 0x3796fcu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 11), 1));
    // 0x379700: 0xa5043
    ctx->pc = 0x379700u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 1));
label_379704:
    // 0x379704: 0x140582d
    ctx->pc = 0x379704u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379708: 0x24420001
    ctx->pc = 0x379708u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_37970c:
    // 0x37970c: 0x29610002
    ctx->pc = 0x37970cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 11), 2));
label_379710:
    // 0x379710: 0x1020fff2
    ctx->pc = 0x379710u;
    {
        const bool branch_taken_0x379710 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x379710) {
            ctx->pc = 0x3796DCu;
            goto label_3796dc;
        }
    }
    ctx->pc = 0x379718u;
    // 0x379718: 0x11800002
    ctx->pc = 0x379718u;
    {
        const bool branch_taken_0x379718 = (GPR_U32(ctx, 12) == GPR_U32(ctx, 0));
        ctx->pc = 0x37971Cu;
        SET_GPR_U32(ctx, 11, ((uint32_t)61440 << 16));
        if (branch_taken_0x379718) {
            ctx->pc = 0x379724u;
            goto label_379724;
        }
    }
    ctx->pc = 0x379720u;
    // 0x379720: 0x24420001
    ctx->pc = 0x379720u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_379724:
    // 0x379724: 0x3c0a5100
    ctx->pc = 0x379724u;
    SET_GPR_U32(ctx, 10, ((uint32_t)20736 << 16));
    // 0x379728: 0x356c000a
    ctx->pc = 0x379728u;
    SET_GPR_U32(ctx, 12, OR32(GPR_U32(ctx, 11), 10));
    // 0x37972c: 0x3c010057
    ctx->pc = 0x37972cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379730: 0xac8c0000
    ctx->pc = 0x379730u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 12));
    // 0x379734: 0x354b000a
    ctx->pc = 0x379734u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 10), 10));
    // 0x379738: 0x3c0a1000
    ctx->pc = 0x379738u;
    SET_GPR_U32(ctx, 10, ((uint32_t)4096 << 16));
    // 0x37973c: 0xac800004
    ctx->pc = 0x37973cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x379740: 0xac800008
    ctx->pc = 0x379740u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x379744: 0xa503c
    ctx->pc = 0x379744u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x379748: 0x240c0005
    ctx->pc = 0x379748u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 5));
    // 0x37974c: 0xac8b000c
    ctx->pc = 0x37974cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 11));
    // 0x379750: 0x18a5025
    ctx->pc = 0x379750u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x379754: 0x240b0008
    ctx->pc = 0x379754u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 8));
    // 0x379758: 0xfc8a0010
    ctx->pc = 0x379758u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 10));
    // 0x37975c: 0x240a000e
    ctx->pc = 0x37975cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 14));
    // 0x379760: 0xfc8a0018
    ctx->pc = 0x379760u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 10));
    // 0x379764: 0x240a0044
    ctx->pc = 0x379764u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 68));
    // 0x379768: 0xfc8a0020
    ctx->pc = 0x379768u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 10));
    // 0x37976c: 0x240a0042
    ctx->pc = 0x37976cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 66));
    // 0x379770: 0xfc8a0028
    ctx->pc = 0x379770u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 10));
    // 0x379774: 0xfc8c0030
    ctx->pc = 0x379774u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 12));
    // 0x379778: 0x240a003f
    ctx->pc = 0x379778u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 63));
    // 0x37977c: 0xfc8b0038
    ctx->pc = 0x37977cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 11));
    // 0x379780: 0xfc800040
    ctx->pc = 0x379780u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 0));
    // 0x379784: 0xfc8a0048
    ctx->pc = 0x379784u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 10));
    // 0x379788: 0x8c2abac8
    ctx->pc = 0x379788u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 1), 4294949576)));
    // 0x37978c: 0x3c010057
    ctx->pc = 0x37978cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379790: 0x8c2cbae8
    ctx->pc = 0x379790u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 1), 4294949608)));
    // 0x379794: 0x9d8c0018
    ctx->pc = 0x379794u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 12), 24)));
    // 0x379798: 0x5410003
    ctx->pc = 0x379798u;
    {
        const bool branch_taken_0x379798 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x37979Cu;
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 10), 6));
        if (branch_taken_0x379798) {
            ctx->pc = 0x3797A8u;
            goto label_3797a8;
        }
    }
    ctx->pc = 0x3797A0u;
    // 0x3797a0: 0x254b003f
    ctx->pc = 0x3797a0u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 10), 63));
    // 0x3797a4: 0xb5983
    ctx->pc = 0x3797a4u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 6));
label_3797a8:
    // 0x3797a8: 0xb583c
    ctx->pc = 0x3797a8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x3797ac: 0x3183c
    ctx->pc = 0x3797acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3797b0: 0xb583f
    ctx->pc = 0x3797b0u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x3797b4: 0x3183f
    ctx->pc = 0x3797b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3797b8: 0xb5bb8
    ctx->pc = 0x3797b8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 14);
    // 0x3797bc: 0x2103c
    ctx->pc = 0x3797bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3797c0: 0x18b5825
    ctx->pc = 0x3797c0u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x3797c4: 0x31eb8
    ctx->pc = 0x3797c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x3797c8: 0x2103f
    ctx->pc = 0x3797c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3797cc: 0x6b1825
    ctx->pc = 0x3797ccu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x3797d0: 0x217b8
    ctx->pc = 0x3797d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x3797d4: 0x240b0006
    ctx->pc = 0x3797d4u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 6));
    // 0x3797d8: 0x431825
    ctx->pc = 0x3797d8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3797dc: 0x56100
    ctx->pc = 0x3797dcu;
    SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 5), 4));
    // 0x3797e0: 0xa81021
    ctx->pc = 0x3797e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x3797e4: 0x3c01002a
    ctx->pc = 0x3797e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x3797e8: 0x24100
    ctx->pc = 0x3797e8u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 2), 4));
    // 0x3797ec: 0x24050014
    ctx->pc = 0x3797ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 20));
    // 0x3797f0: 0x24020008
    ctx->pc = 0x3797f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x3797f4: 0x2103c
    ctx->pc = 0x3797f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3797f8: 0x621825
    ctx->pc = 0x3797f8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3797fc: 0xfc830050
    ctx->pc = 0x3797fcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 80), GPR_U64(ctx, 3));
    // 0x379800: 0x3c026400
    ctx->pc = 0x379800u;
    SET_GPR_U32(ctx, 2, ((uint32_t)25600 << 16));
    // 0x379804: 0xfc8b0058
    ctx->pc = 0x379804u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 88), GPR_U64(ctx, 11));
    // 0x379808: 0x2183c
    ctx->pc = 0x379808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x37980c: 0x34028001
    ctx->pc = 0x37980cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32769));
    // 0x379810: 0xfc800060
    ctx->pc = 0x379810u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 96), GPR_U64(ctx, 0));
    // 0x379814: 0x431825
    ctx->pc = 0x379814u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x379818: 0xfc850068
    ctx->pc = 0x379818u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 5));
    // 0x37981c: 0x3c020053
    ctx->pc = 0x37981cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)83 << 16));
    // 0x379820: 0xfc830070
    ctx->pc = 0x379820u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 112), GPR_U64(ctx, 3));
    // 0x379824: 0x34425310
    ctx->pc = 0x379824u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 21264));
    // 0x379828: 0x24031000
    ctx->pc = 0x379828u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x37982c: 0xfc820078
    ctx->pc = 0x37982cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 120), GPR_U64(ctx, 2));
    // 0x379830: 0x65900
    ctx->pc = 0x379830u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 6), 4));
    // 0x379834: 0xc91021
    ctx->pc = 0x379834u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x379838: 0x22900
    ctx->pc = 0x379838u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 2), 4));
    // 0x37983c: 0x8c22f9bc
    ctx->pc = 0x37983cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294965692)));
    // 0x379840: 0x621823
    ctx->pc = 0x379840u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x379844: 0x4610003
    ctx->pc = 0x379844u;
    {
        const bool branch_taken_0x379844 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x379848u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        if (branch_taken_0x379844) {
            ctx->pc = 0x379854u;
            goto label_379854;
        }
    }
    ctx->pc = 0x37984Cu;
    // 0x37984c: 0x24620001
    ctx->pc = 0x37984cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
    // 0x379850: 0x21043
    ctx->pc = 0x379850u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_379854:
    // 0x379854: 0x3c010032
    ctx->pc = 0x379854u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x379858: 0x23100
    ctx->pc = 0x379858u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 4));
    // 0x37985c: 0x902343fc
    ctx->pc = 0x37985cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17404)));
    // 0x379860: 0x24020003
    ctx->pc = 0x379860u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x379864: 0x14620004
    ctx->pc = 0x379864u;
    {
        const bool branch_taken_0x379864 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x379868u;
        SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
        if (branch_taken_0x379864) {
            ctx->pc = 0x379878u;
            goto label_379878;
        }
    }
    ctx->pc = 0x37986Cu;
    // 0x37986c: 0x8c29bad0
    ctx->pc = 0x37986cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 1), 4294949584)));
    // 0x379870: 0x10000002
    ctx->pc = 0x379870u;
    {
        const bool branch_taken_0x379870 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x379874u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x379870) {
            ctx->pc = 0x37987Cu;
            goto label_37987c;
        }
    }
    ctx->pc = 0x379878u;
label_379878:
    // 0x379878: 0x102d
    ctx->pc = 0x379878u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37987c:
    // 0x37987c: 0x21900
    ctx->pc = 0x37987cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 4));
    // 0x379880: 0x24a57200
    ctx->pc = 0x379880u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29184));
    // 0x379884: 0x7103c
    ctx->pc = 0x379884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x379888: 0x5283c
    ctx->pc = 0x379888u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x37988c: 0xcc3821
    ctx->pc = 0x37988cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x379890: 0x2103f
    ctx->pc = 0x379890u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x379894: 0x7603c
    ctx->pc = 0x379894u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) << (32 + 0));
    // 0x379898: 0xc83021
    ctx->pc = 0x379898u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x37989c: 0x25677200
    ctx->pc = 0x37989cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 11), 29184));
    // 0x3798a0: 0x6303c
    ctx->pc = 0x3798a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3798a4: 0x7383c
    ctx->pc = 0x3798a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3798a8: 0x5283f
    ctx->pc = 0x3798a8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x3798ac: 0x7383f
    ctx->pc = 0x3798acu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x3798b0: 0xa4100
    ctx->pc = 0x3798b0u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 10), 4));
    // 0x3798b4: 0x75438
    ctx->pc = 0x3798b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) << 16);
    // 0x3798b8: 0xc603f
    ctx->pc = 0x3798b8u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x3798bc: 0x93900
    ctx->pc = 0x3798bcu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 9), 4));
    // 0x3798c0: 0x2103c
    ctx->pc = 0x3798c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3798c4: 0x73c38
    ctx->pc = 0x3798c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x3798c8: 0x18a4825
    ctx->pc = 0x3798c8u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x3798cc: 0x1073825
    ctx->pc = 0x3798ccu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x3798d0: 0x6303f
    ctx->pc = 0x3798d0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x3798d4: 0x494025
    ctx->pc = 0x3798d4u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3798d8: 0x52c38
    ctx->pc = 0x3798d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3798dc: 0xc52825
    ctx->pc = 0x3798dcu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x3798e0: 0x24090116
    ctx->pc = 0x3798e0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 278));
    // 0x3798e4: 0xfc890080
    ctx->pc = 0x3798e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 128), GPR_U64(ctx, 9));
    // 0x3798e8: 0x3c063f80
    ctx->pc = 0x3798e8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)16256 << 16));
    // 0x3798ec: 0x6483c
    ctx->pc = 0x3798ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3798f0: 0x452825
    ctx->pc = 0x3798f0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3798f4: 0x34068080
    ctx->pc = 0x3798f4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 0), 32896));
    // 0x3798f8: 0x31c38
    ctx->pc = 0x3798f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3798fc: 0x63438
    ctx->pc = 0x3798fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x379900: 0x248200b0
    ctx->pc = 0x379900u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 176));
    // 0x379904: 0x34c68080
    ctx->pc = 0x379904u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 32896));
    // 0x379908: 0xc93025
    ctx->pc = 0x379908u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x37990c: 0xfc860088
    ctx->pc = 0x37990cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 136), GPR_U64(ctx, 6));
    // 0x379910: 0xfc830090
    ctx->pc = 0x379910u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 144), GPR_U64(ctx, 3));
    // 0x379914: 0xfc880098
    ctx->pc = 0x379914u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 152), GPR_U64(ctx, 8));
    // 0x379918: 0xfc8700a0
    ctx->pc = 0x379918u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 160), GPR_U64(ctx, 7));
    // 0x37991c: 0x3e00008
    ctx->pc = 0x37991Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379920u;
        WRITE64(ADD32(GPR_U32(ctx, 4), 168), GPR_U64(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x379670u: goto label_379670;
            case 0x379684u: goto label_379684;
            case 0x379688u: goto label_379688;
            case 0x379698u: goto label_379698;
            case 0x3796A0u: goto label_3796a0;
            case 0x3796B8u: goto label_3796b8;
            case 0x3796DCu: goto label_3796dc;
            case 0x3796F0u: goto label_3796f0;
            case 0x3796F4u: goto label_3796f4;
            case 0x379704u: goto label_379704;
            case 0x37970Cu: goto label_37970c;
            case 0x379710u: goto label_379710;
            case 0x379724u: goto label_379724;
            case 0x3797A8u: goto label_3797a8;
            case 0x379854u: goto label_379854;
            case 0x379878u: goto label_379878;
            case 0x37987Cu: goto label_37987c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x379924u;
    // 0x379924: 0x0
    ctx->pc = 0x379924u;
    // NOP
    // 0x379928: 0x0
    ctx->pc = 0x379928u;
    // NOP
    // 0x37992c: 0x0
    ctx->pc = 0x37992cu;
    // NOP
}
