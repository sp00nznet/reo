#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001302F8
// Address: 0x1302f8 - 0x1303d8
void sub_001302F8_0x1302f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1302f8u;

    // 0x1302f8: 0x3c0d0022
    ctx->pc = 0x1302f8u;
    SET_GPR_U32(ctx, 13, ((uint32_t)34 << 16));
    // 0x1302fc: 0x27bdfff0
    ctx->pc = 0x1302fcu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x130300: 0x8da9a8ac
    ctx->pc = 0x130300u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 13), 4294944940)));
    // 0x130304: 0xa0502d
    ctx->pc = 0x130304u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130308: 0xffb00000
    ctx->pc = 0x130308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13030c: 0x802d
    ctx->pc = 0x13030cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130310: 0xffbf0008
    ctx->pc = 0x130310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x130314: 0x80602d
    ctx->pc = 0x130314u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130318: 0xc0582d
    ctx->pc = 0x130318u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13031c: 0xe0402d
    ctx->pc = 0x13031cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130320: 0x1920001f
    ctx->pc = 0x130320u;
    {
        const bool branch_taken_0x130320 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x130324u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x130320) {
            ctx->pc = 0x1303A0u;
            goto label_1303a0;
        }
    }
    ctx->pc = 0x130328u;
    // 0x130328: 0x3c020022
    ctx->pc = 0x130328u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13032c: 0x3c040022
    ctx->pc = 0x13032cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)34 << 16));
    // 0x130330: 0x2447a8a8
    ctx->pc = 0x130330u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294944936));
    // 0x130334: 0x2484a8c0
    ctx->pc = 0x130334u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944960));
    // 0x130338: 0x8ce30000
    ctx->pc = 0x130338u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13033c: 0x31040
    ctx->pc = 0x13033cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x130340: 0x431021
    ctx->pc = 0x130340u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x130344: 0x210c0
    ctx->pc = 0x130344u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x130348: 0x431023
    ctx->pc = 0x130348u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13034c: 0x21080
    ctx->pc = 0x13034cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x130350: 0x448021
    ctx->pc = 0x130350u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x130354: 0x82030000
    ctx->pc = 0x130354u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x130358: 0x10600012
    ctx->pc = 0x130358u;
    {
        const bool branch_taken_0x130358 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x13035Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 13), 4294944940)));
        if (branch_taken_0x130358) {
            ctx->pc = 0x1303A4u;
            goto label_1303a4;
        }
    }
    ctx->pc = 0x130360u;
    // 0x130360: 0x120302d
    ctx->pc = 0x130360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130364: 0x24a50001
    ctx->pc = 0x130364u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_130368:
    // 0x130368: 0xa6102a
    ctx->pc = 0x130368u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
    // 0x13036c: 0x1040000d
    ctx->pc = 0x13036Cu;
    {
        const bool branch_taken_0x13036c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x130370u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 13), 4294944940)));
        if (branch_taken_0x13036c) {
            ctx->pc = 0x1303A4u;
            goto label_1303a4;
        }
    }
    ctx->pc = 0x130374u;
    // 0x130374: 0x8ce20000
    ctx->pc = 0x130374u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x130378: 0x451021
    ctx->pc = 0x130378u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13037c: 0x21840
    ctx->pc = 0x13037cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x130380: 0x621821
    ctx->pc = 0x130380u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x130384: 0x318c0
    ctx->pc = 0x130384u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x130388: 0x621823
    ctx->pc = 0x130388u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13038c: 0x31880
    ctx->pc = 0x13038cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x130390: 0x648021
    ctx->pc = 0x130390u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x130394: 0x82020000
    ctx->pc = 0x130394u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x130398: 0x5440fff3
    ctx->pc = 0x130398u;
    {
        const bool branch_taken_0x130398 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x130398) {
            ctx->pc = 0x13039Cu;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x130368u;
            goto label_130368;
        }
    }
    ctx->pc = 0x1303A0u;
label_1303a0:
    // 0x1303a0: 0x8da3a8ac
    ctx->pc = 0x1303a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 13), 4294944940)));
label_1303a4:
    // 0x1303a4: 0x10a30007
    ctx->pc = 0x1303A4u;
    {
        const bool branch_taken_0x1303a4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1303A8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1303a4) {
            ctx->pc = 0x1303C4u;
            goto label_1303c4;
        }
    }
    ctx->pc = 0x1303ACu;
    // 0x1303ac: 0x180282d
    ctx->pc = 0x1303acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1303b0: 0x140302d
    ctx->pc = 0x1303b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1303b4: 0x160382d
    ctx->pc = 0x1303b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1303b8: 0xc04c042
    ctx->pc = 0x1303B8u;
    SET_GPR_U32(ctx, 31, 0x1303C0u);
    ctx->pc = 0x1303BCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130108u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130108_0x130108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1303C0u; }
    }
    if (ctx->pc != 0x1303C0u) { return; }
    ctx->pc = 0x1303C0u;
    // 0x1303c0: 0x200102d
    ctx->pc = 0x1303c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1303c4:
    // 0x1303c4: 0xdfb00000
    ctx->pc = 0x1303c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1303c8: 0xdfbf0008
    ctx->pc = 0x1303c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1303cc: 0x3e00008
    ctx->pc = 0x1303CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1303D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130368u: goto label_130368;
            case 0x1303A0u: goto label_1303a0;
            case 0x1303A4u: goto label_1303a4;
            case 0x1303C4u: goto label_1303c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1303D4u;
    // 0x1303d4: 0x0
    ctx->pc = 0x1303d4u;
    // NOP
}
