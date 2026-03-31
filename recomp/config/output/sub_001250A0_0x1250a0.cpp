#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001250A0
// Address: 0x1250a0 - 0x1251a0
void sub_001250A0_0x1250a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1250a0u;

    // 0x1250a0: 0x30a500ff
    ctx->pc = 0x1250a0u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 255));
    // 0x1250a4: 0x27bdffd0
    ctx->pc = 0x1250a4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1250a8: 0x2ca50004
    ctx->pc = 0x1250a8u;
    SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 5), 4));
    // 0x1250ac: 0xffb00010
    ctx->pc = 0x1250acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1250b0: 0xffb10018
    ctx->pc = 0x1250b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1250b4: 0x120882d
    ctx->pc = 0x1250b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1250b8: 0xffb20020
    ctx->pc = 0x1250b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1250bc: 0x140902d
    ctx->pc = 0x1250bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1250c0: 0xffbf0028
    ctx->pc = 0x1250c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1250c4: 0x80582d
    ctx->pc = 0x1250c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1250c8: 0x100802d
    ctx->pc = 0x1250c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1250cc: 0x14a0002a
    ctx->pc = 0x1250CCu;
    {
        const bool branch_taken_0x1250cc = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1250D0u;
        SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), 255));
        if (branch_taken_0x1250cc) {
            ctx->pc = 0x125178u;
            goto label_125178;
        }
    }
    ctx->pc = 0x1250D4u;
    // 0x1250d4: 0x2cc20010
    ctx->pc = 0x1250d4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 16));
    // 0x1250d8: 0x5440000f
    ctx->pc = 0x1250D8u;
    {
        const bool branch_taken_0x1250d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1250d8) {
            ctx->pc = 0x1250DCu;
            SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 8));
            ctx->pc = 0x125118u;
            goto label_125118;
        }
    }
    ctx->pc = 0x1250E0u;
    // 0x1250e0: 0x3c050024
    ctx->pc = 0x1250e0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x1250e4: 0xe0302d
    ctx->pc = 0x1250e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1250e8: 0x24a59bb0
    ctx->pc = 0x1250e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941616));
    // 0x1250ec: 0xc042a0c
    ctx->pc = 0x1250ECu;
    SET_GPR_U32(ctx, 31, 0x1250F4u);
    ctx->pc = 0x1250F0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1250F4u; }
    }
    if (ctx->pc != 0x1250F4u) { return; }
    ctx->pc = 0x1250F4u;
    // 0x1250f4: 0x24050008
    ctx->pc = 0x1250f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1250f8: 0x3a0202d
    ctx->pc = 0x1250f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1250fc: 0x200302d
    ctx->pc = 0x1250fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125100: 0x220382d
    ctx->pc = 0x125100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125104: 0xc049156
    ctx->pc = 0x125104u;
    SET_GPR_U32(ctx, 31, 0x12510Cu);
    ctx->pc = 0x125108u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x124558u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00124558_0x124558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12510Cu; }
    }
    if (ctx->pc != 0x12510Cu) { return; }
    ctx->pc = 0x12510Cu;
    // 0x12510c: 0x1000001e
    ctx->pc = 0x12510Cu;
    {
        const bool branch_taken_0x12510c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x125110u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x12510c) {
            ctx->pc = 0x125188u;
            goto label_125188;
        }
    }
    ctx->pc = 0x125114u;
    // 0x125114: 0x0
    ctx->pc = 0x125114u;
    // NOP
label_125118:
    // 0x125118: 0x54400018
    ctx->pc = 0x125118u;
    {
        const bool branch_taken_0x125118 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x125118) {
            ctx->pc = 0x12511Cu;
            WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x12517Cu;
            goto label_12517c;
        }
    }
    ctx->pc = 0x125120u;
    // 0x125120: 0x8d62009c
    ctx->pc = 0x125120u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 11), 156)));
    // 0x125124: 0x5440000e
    ctx->pc = 0x125124u;
    {
        const bool branch_taken_0x125124 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x125124) {
            ctx->pc = 0x125128u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 156)));
            ctx->pc = 0x125160u;
            goto label_125160;
        }
    }
    ctx->pc = 0x12512Cu;
    // 0x12512c: 0x856200a0
    ctx->pc = 0x12512cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 160)));
    // 0x125130: 0x5440000b
    ctx->pc = 0x125130u;
    {
        const bool branch_taken_0x125130 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x125130) {
            ctx->pc = 0x125134u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 156)));
            ctx->pc = 0x125160u;
            goto label_125160;
        }
    }
    ctx->pc = 0x125138u;
    // 0x125138: 0x3c020021
    ctx->pc = 0x125138u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x12513c: 0x3c040021
    ctx->pc = 0x12513cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)33 << 16));
    // 0x125140: 0x9443b94c
    ctx->pc = 0x125140u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294949196)));
    // 0x125144: 0x3c050021
    ctx->pc = 0x125144u;
    SET_GPR_U32(ctx, 5, ((uint32_t)33 << 16));
    // 0x125148: 0xa563009c
    ctx->pc = 0x125148u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 156), (uint16_t)GPR_U32(ctx, 3));
    // 0x12514c: 0x9482b94e
    ctx->pc = 0x12514cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294949198)));
    // 0x125150: 0xa562009e
    ctx->pc = 0x125150u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 158), (uint16_t)GPR_U32(ctx, 2));
    // 0x125154: 0x94a3b950
    ctx->pc = 0x125154u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294949200)));
    // 0x125158: 0xa56300a0
    ctx->pc = 0x125158u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 160), (uint16_t)GPR_U32(ctx, 3));
    // 0x12515c: 0x9562009c
    ctx->pc = 0x12515cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 156)));
label_125160:
    // 0x125160: 0xa6020000
    ctx->pc = 0x125160u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x125164: 0x9563009e
    ctx->pc = 0x125164u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 158)));
    // 0x125168: 0xa6230000
    ctx->pc = 0x125168u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x12516c: 0x956200a0
    ctx->pc = 0x12516cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 160)));
    // 0x125170: 0x10000004
    ctx->pc = 0x125170u;
    {
        const bool branch_taken_0x125170 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x125174u;
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x125170) {
            ctx->pc = 0x125184u;
            goto label_125184;
        }
    }
    ctx->pc = 0x125178u;
label_125178:
    // 0x125178: 0xa6000000
    ctx->pc = 0x125178u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
label_12517c:
    // 0x12517c: 0xa6200000
    ctx->pc = 0x12517cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x125180: 0xa6400000
    ctx->pc = 0x125180u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
label_125184:
    // 0x125184: 0xdfb00010
    ctx->pc = 0x125184u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_125188:
    // 0x125188: 0x102d
    ctx->pc = 0x125188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12518c: 0xdfb10018
    ctx->pc = 0x12518cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x125190: 0xdfb20020
    ctx->pc = 0x125190u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125194: 0xdfbf0028
    ctx->pc = 0x125194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125198: 0x3e00008
    ctx->pc = 0x125198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12519Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125118u: goto label_125118;
            case 0x125160u: goto label_125160;
            case 0x125178u: goto label_125178;
            case 0x12517Cu: goto label_12517c;
            case 0x125184u: goto label_125184;
            case 0x125188u: goto label_125188;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1251A0u;
}
