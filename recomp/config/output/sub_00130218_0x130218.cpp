#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00130218
// Address: 0x130218 - 0x1302f8
void sub_00130218_0x130218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x130218u;

    // 0x130218: 0x3c0d0022
    ctx->pc = 0x130218u;
    SET_GPR_U32(ctx, 13, ((uint32_t)34 << 16));
    // 0x13021c: 0x27bdfff0
    ctx->pc = 0x13021cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x130220: 0x8da9a8a4
    ctx->pc = 0x130220u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 13), 4294944932)));
    // 0x130224: 0xa0502d
    ctx->pc = 0x130224u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130228: 0xffb00000
    ctx->pc = 0x130228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13022c: 0x802d
    ctx->pc = 0x13022cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130230: 0xffbf0008
    ctx->pc = 0x130230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x130234: 0x80602d
    ctx->pc = 0x130234u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130238: 0xc0582d
    ctx->pc = 0x130238u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13023c: 0xe0402d
    ctx->pc = 0x13023cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130240: 0x1920001f
    ctx->pc = 0x130240u;
    {
        const bool branch_taken_0x130240 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x130244u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x130240) {
            ctx->pc = 0x1302C0u;
            goto label_1302c0;
        }
    }
    ctx->pc = 0x130248u;
    // 0x130248: 0x3c020022
    ctx->pc = 0x130248u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13024c: 0x3c040022
    ctx->pc = 0x13024cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)34 << 16));
    // 0x130250: 0x2447a8a0
    ctx->pc = 0x130250u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294944928));
    // 0x130254: 0x2484a8c0
    ctx->pc = 0x130254u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944960));
    // 0x130258: 0x8ce30000
    ctx->pc = 0x130258u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13025c: 0x31040
    ctx->pc = 0x13025cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x130260: 0x431021
    ctx->pc = 0x130260u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x130264: 0x210c0
    ctx->pc = 0x130264u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x130268: 0x431023
    ctx->pc = 0x130268u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13026c: 0x21080
    ctx->pc = 0x13026cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x130270: 0x448021
    ctx->pc = 0x130270u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x130274: 0x82030000
    ctx->pc = 0x130274u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x130278: 0x10600012
    ctx->pc = 0x130278u;
    {
        const bool branch_taken_0x130278 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x13027Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 13), 4294944932)));
        if (branch_taken_0x130278) {
            ctx->pc = 0x1302C4u;
            goto label_1302c4;
        }
    }
    ctx->pc = 0x130280u;
    // 0x130280: 0x120302d
    ctx->pc = 0x130280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130284: 0x24a50001
    ctx->pc = 0x130284u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_130288:
    // 0x130288: 0xa6102a
    ctx->pc = 0x130288u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
    // 0x13028c: 0x1040000d
    ctx->pc = 0x13028Cu;
    {
        const bool branch_taken_0x13028c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x130290u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 13), 4294944932)));
        if (branch_taken_0x13028c) {
            ctx->pc = 0x1302C4u;
            goto label_1302c4;
        }
    }
    ctx->pc = 0x130294u;
    // 0x130294: 0x8ce20000
    ctx->pc = 0x130294u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x130298: 0x451021
    ctx->pc = 0x130298u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13029c: 0x21840
    ctx->pc = 0x13029cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1302a0: 0x621821
    ctx->pc = 0x1302a0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1302a4: 0x318c0
    ctx->pc = 0x1302a4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1302a8: 0x621823
    ctx->pc = 0x1302a8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1302ac: 0x31880
    ctx->pc = 0x1302acu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1302b0: 0x648021
    ctx->pc = 0x1302b0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1302b4: 0x82020000
    ctx->pc = 0x1302b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1302b8: 0x5440fff3
    ctx->pc = 0x1302B8u;
    {
        const bool branch_taken_0x1302b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1302b8) {
            ctx->pc = 0x1302BCu;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x130288u;
            goto label_130288;
        }
    }
    ctx->pc = 0x1302C0u;
label_1302c0:
    // 0x1302c0: 0x8da3a8a4
    ctx->pc = 0x1302c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 13), 4294944932)));
label_1302c4:
    // 0x1302c4: 0x10a30007
    ctx->pc = 0x1302C4u;
    {
        const bool branch_taken_0x1302c4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1302C8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1302c4) {
            ctx->pc = 0x1302E4u;
            goto label_1302e4;
        }
    }
    ctx->pc = 0x1302CCu;
    // 0x1302cc: 0x180282d
    ctx->pc = 0x1302ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1302d0: 0x140302d
    ctx->pc = 0x1302d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1302d4: 0x160382d
    ctx->pc = 0x1302d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1302d8: 0xc04c042
    ctx->pc = 0x1302D8u;
    SET_GPR_U32(ctx, 31, 0x1302E0u);
    ctx->pc = 0x1302DCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130108u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130108_0x130108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1302E0u; }
    }
    if (ctx->pc != 0x1302E0u) { return; }
    ctx->pc = 0x1302E0u;
    // 0x1302e0: 0x200102d
    ctx->pc = 0x1302e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1302e4:
    // 0x1302e4: 0xdfb00000
    ctx->pc = 0x1302e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1302e8: 0xdfbf0008
    ctx->pc = 0x1302e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1302ec: 0x3e00008
    ctx->pc = 0x1302ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1302F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130288u: goto label_130288;
            case 0x1302C0u: goto label_1302c0;
            case 0x1302C4u: goto label_1302c4;
            case 0x1302E4u: goto label_1302e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1302F4u;
    // 0x1302f4: 0x0
    ctx->pc = 0x1302f4u;
    // NOP
}
