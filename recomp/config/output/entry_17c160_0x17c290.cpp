#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17c160
// Address: 0x17c160 - 0x17c290
void entry_17c160_0x17c290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17c160u;

    // 0x17c160: 0x27bdffd0
    ctx->pc = 0x17c160u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17c164: 0xffb00000
    ctx->pc = 0x17c164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17c168: 0x80802d
    ctx->pc = 0x17c168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c16c: 0xffb10008
    ctx->pc = 0x17c16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17c170: 0xa0882d
    ctx->pc = 0x17c170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c174: 0xffb20010
    ctx->pc = 0x17c174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17c178: 0xc0902d
    ctx->pc = 0x17c178u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c17c: 0xffb30018
    ctx->pc = 0x17c17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17c180: 0xe0982d
    ctx->pc = 0x17c180u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c184: 0xffbf0020
    ctx->pc = 0x17c184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17c188: 0x8e020004
    ctx->pc = 0x17c188u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17c18c: 0x14400005
    ctx->pc = 0x17C18Cu;
    {
        const bool branch_taken_0x17c18c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17C190u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17c18c) {
            ctx->pc = 0x17C1A4u;
            goto label_17c1a4;
        }
    }
    ctx->pc = 0x17C194u;
    // 0x17c194: 0x3c050024
    ctx->pc = 0x17c194u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x17c198: 0xc05f386
    ctx->pc = 0x17C198u;
    SET_GPR_U32(ctx, 31, 0x17C1A0u);
    ctx->pc = 0x17C19Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 3632));
    ctx->pc = 0x17CE18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CE18_0x17ce18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C1A0u; }
    }
    if (ctx->pc != 0x17C1A0u) { return; }
    ctx->pc = 0x17C1A0u;
    // 0x17c1a0: 0xae020004
    ctx->pc = 0x17c1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_17c1a4:
    // 0x17c1a4: 0xc05f8da
    ctx->pc = 0x17C1A4u;
    SET_GPR_U32(ctx, 31, 0x17C1ACu);
    ctx->pc = 0x17C1A8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x17E368u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E368_0x17e368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C1ACu; }
    }
    if (ctx->pc != 0x17C1ACu) { return; }
    ctx->pc = 0x17C1ACu;
    // 0x17c1ac: 0x24070002
    ctx->pc = 0x17c1acu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    // 0x17c1b0: 0x3c060024
    ctx->pc = 0x17c1b0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
    // 0x17c1b4: 0x24030001
    ctx->pc = 0x17c1b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c1b8: 0x200202d
    ctx->pc = 0x17c1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c1bc: 0x220282d
    ctx->pc = 0x17c1bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c1c0: 0x10430009
    ctx->pc = 0x17C1C0u;
    {
        const bool branch_taken_0x17c1c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x17C1C4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4184));
        if (branch_taken_0x17c1c0) {
            ctx->pc = 0x17C1E8u;
            goto label_17c1e8;
        }
    }
    ctx->pc = 0x17C1C8u;
    // 0x17c1c8: 0xdfb00000
    ctx->pc = 0x17c1c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c1cc: 0xdfb10008
    ctx->pc = 0x17c1ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17c1d0: 0xdfb20010
    ctx->pc = 0x17c1d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c1d4: 0xdfb30018
    ctx->pc = 0x17c1d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17c1d8: 0xdfbf0020
    ctx->pc = 0x17c1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c1dc: 0x805f472
    ctx->pc = 0x17C1DCu;
    ctx->pc = 0x17C1E0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x17D1C8u;
    sub_0017D1C8_0x17d1c8(rdram, ctx, runtime); return;
    ctx->pc = 0x17C1E4u;
    // 0x17c1e4: 0x0
    ctx->pc = 0x17c1e4u;
    // NOP
label_17c1e8:
    // 0x17c1e8: 0x8e230000
    ctx->pc = 0x17c1e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17c1ec: 0x10670012
    ctx->pc = 0x17C1ECu;
    {
        const bool branch_taken_0x17c1ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 7));
        ctx->pc = 0x17C1F0u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 3));
        if (branch_taken_0x17c1ec) {
            ctx->pc = 0x17C238u;
            goto label_17c238;
        }
    }
    ctx->pc = 0x17C1F4u;
    // 0x17c1f4: 0x1440001c
    ctx->pc = 0x17C1F4u;
    {
        const bool branch_taken_0x17c1f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17C1F8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17c1f4) {
            ctx->pc = 0x17C268u;
            goto label_17c268;
        }
    }
    ctx->pc = 0x17C1FCu;
    // 0x17c1fc: 0x24020003
    ctx->pc = 0x17c1fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x17c200: 0x5462001a
    ctx->pc = 0x17C200u;
    {
        const bool branch_taken_0x17c200 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x17c200) {
            ctx->pc = 0x17C204u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x17C26Cu;
            goto label_17c26c;
        }
    }
    ctx->pc = 0x17C208u;
    // 0x17c208: 0x200202d
    ctx->pc = 0x17c208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c20c: 0xdfb00000
    ctx->pc = 0x17c20cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c210: 0x220282d
    ctx->pc = 0x17c210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c214: 0xdfb10008
    ctx->pc = 0x17c214u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17c218: 0x240302d
    ctx->pc = 0x17c218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c21c: 0xdfb20010
    ctx->pc = 0x17c21cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c220: 0x260382d
    ctx->pc = 0x17c220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c224: 0xdfb30018
    ctx->pc = 0x17c224u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17c228: 0xdfbf0020
    ctx->pc = 0x17c228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c22c: 0x805f0a4
    ctx->pc = 0x17C22Cu;
    ctx->pc = 0x17C230u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x17C290u;
    entry_17c290_0x17c420(rdram, ctx, runtime); return;
    ctx->pc = 0x17C234u;
    // 0x17c234: 0x0
    ctx->pc = 0x17c234u;
    // NOP
label_17c238:
    // 0x17c238: 0x200202d
    ctx->pc = 0x17c238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c23c: 0xdfb00000
    ctx->pc = 0x17c23cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c240: 0x220282d
    ctx->pc = 0x17c240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c244: 0xdfb10008
    ctx->pc = 0x17c244u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17c248: 0x240302d
    ctx->pc = 0x17c248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c24c: 0xdfb20010
    ctx->pc = 0x17c24cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c250: 0x260382d
    ctx->pc = 0x17c250u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c254: 0xdfb30018
    ctx->pc = 0x17c254u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17c258: 0xdfbf0020
    ctx->pc = 0x17c258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c25c: 0x805f108
    ctx->pc = 0x17C25Cu;
    ctx->pc = 0x17C260u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x17C420u;
    entry_17c420_0x17c530(rdram, ctx, runtime); return;
    ctx->pc = 0x17C264u;
    // 0x17c264: 0x0
    ctx->pc = 0x17c264u;
    // NOP
label_17c268:
    // 0x17c268: 0xdfb00000
    ctx->pc = 0x17c268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c26c:
    // 0x17c26c: 0x220282d
    ctx->pc = 0x17c26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c270: 0xdfb10008
    ctx->pc = 0x17c270u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17c274: 0x3c060024
    ctx->pc = 0x17c274u;
    SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
    // 0x17c278: 0xdfb20010
    ctx->pc = 0x17c278u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c27c: 0xdfb30018
    ctx->pc = 0x17c27cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17c280: 0x24c61088
    ctx->pc = 0x17c280u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4232));
    // 0x17c284: 0xdfbf0020
    ctx->pc = 0x17c284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c288: 0x805f472
    ctx->pc = 0x17C288u;
    ctx->pc = 0x17C28Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x17D1C8u;
    sub_0017D1C8_0x17d1c8(rdram, ctx, runtime); return;
    ctx->pc = 0x17C290u;
}
