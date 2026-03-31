#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017C140
// Address: 0x17c140 - 0x17c530
void sub_0017C140_0x17c140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17c140u;

    // 0x17c140: 0x27bdfff0
    ctx->pc = 0x17c140u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17c144: 0xc0382d
    ctx->pc = 0x17c144u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c148: 0xffbf0000
    ctx->pc = 0x17c148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c14c: 0x24060020
    ctx->pc = 0x17c14cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    // 0x17c150: 0xdfbf0000
    ctx->pc = 0x17c150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c154: 0x805f058
    ctx->pc = 0x17C154u;
    ctx->pc = 0x17C158u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17C160u;
    goto label_17c160;
    ctx->pc = 0x17C15Cu;
    // 0x17c15c: 0x0
    ctx->pc = 0x17c15cu;
    // NOP
label_17c160:
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
    goto label_17c290;
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
    goto label_17c420;
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
label_17c290:
    // 0x17c290: 0x27bdff80
    ctx->pc = 0x17c290u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x17c294: 0xffb00040
    ctx->pc = 0x17c294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x17c298: 0xffb10048
    ctx->pc = 0x17c298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x17c29c: 0x80882d
    ctx->pc = 0x17c29cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c2a0: 0xffb20050
    ctx->pc = 0x17c2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x17c2a4: 0xa0902d
    ctx->pc = 0x17c2a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c2a8: 0xffb30058
    ctx->pc = 0x17c2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x17c2ac: 0xc0982d
    ctx->pc = 0x17c2acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c2b0: 0xffb40060
    ctx->pc = 0x17c2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x17c2b4: 0x26500004
    ctx->pc = 0x17c2b4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 4));
    // 0x17c2b8: 0xffb50068
    ctx->pc = 0x17c2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x17c2bc: 0x264a0014
    ctx->pc = 0x17c2bcu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 18), 20));
    // 0x17c2c0: 0xffb60070
    ctx->pc = 0x17c2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x17c2c4: 0xe0b02d
    ctx->pc = 0x17c2c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c2c8: 0xffbf0078
    ctx->pc = 0x17c2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x17c2cc: 0x264b0024
    ctx->pc = 0x17c2ccu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 18), 36));
    // 0x17c2d0: 0x260202d
    ctx->pc = 0x17c2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c2d4: 0xafa00018
    ctx->pc = 0x17c2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x17c2d8: 0x8e050008
    ctx->pc = 0x17c2d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17c2dc: 0x8e0c0004
    ctx->pc = 0x17c2dcu;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17c2e0: 0x517c2
    ctx->pc = 0x17c2e0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 5), 31));
    // 0x17c2e4: 0x8d480000
    ctx->pc = 0x17c2e4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x17c2e8: 0x1851818
    ctx->pc = 0x17c2e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x17c2ec: 0xa22821
    ctx->pc = 0x17c2ecu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17c2f0: 0x8d690000
    ctx->pc = 0x17c2f0u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x17c2f4: 0x180a82d
    ctx->pc = 0x17c2f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c2f8: 0x8e060000
    ctx->pc = 0x17c2f8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17c2fc: 0x5a043
    ctx->pc = 0x17c2fcu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 5), 1));
    // 0x17c300: 0x8d4d0004
    ctx->pc = 0x17c300u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x17c304: 0x317c2
    ctx->pc = 0x17c304u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 31));
    // 0x17c308: 0x8e270008
    ctx->pc = 0x17c308u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17c30c: 0x621821
    ctx->pc = 0x17c30cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17c310: 0x8d6a0004
    ctx->pc = 0x17c310u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x17c314: 0x317c2
    ctx->pc = 0x17c314u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 31));
    // 0x17c318: 0x31843
    ctx->pc = 0x17c318u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x17c31c: 0x621021
    ctx->pc = 0x17c31cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17c320: 0x8e2b000c
    ctx->pc = 0x17c320u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x17c324: 0x21043
    ctx->pc = 0x17c324u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x17c328: 0xc33021
    ctx->pc = 0x17c328u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x17c32c: 0x1224821
    ctx->pc = 0x17c32cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x17c330: 0x1024021
    ctx->pc = 0x17c330u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x17c334: 0xe7a80b
    ctx->pc = 0x17c334u;
    if (GPR_U32(ctx, 7) != 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 7));
    // 0x17c338: 0xafa60000
    ctx->pc = 0x17c338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x17c33c: 0xafa80004
    ctx->pc = 0x17c33cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x17c340: 0xafa90008
    ctx->pc = 0x17c340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x17c344: 0xafad0010
    ctx->pc = 0x17c344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 13));
    // 0x17c348: 0xafaa0014
    ctx->pc = 0x17c348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
    // 0x17c34c: 0x11600002
    ctx->pc = 0x17C34Cu;
    {
        const bool branch_taken_0x17c34c = (GPR_U32(ctx, 11) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C350u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 12));
        if (branch_taken_0x17c34c) {
            ctx->pc = 0x17C358u;
            goto label_17c358;
        }
    }
    ctx->pc = 0x17C354u;
    // 0x17c354: 0x160a02d
    ctx->pc = 0x17c354u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_17c358:
    // 0x17c358: 0xc05f14c
    ctx->pc = 0x17C358u;
    SET_GPR_U32(ctx, 31, 0x17C360u);
    ctx->pc = 0x17C530u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C530_0x17c530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C360u; }
    }
    if (ctx->pc != 0x17C360u) { return; }
    ctx->pc = 0x17C360u;
    // 0x17c360: 0x240a0020
    ctx->pc = 0x17c360u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 32));
    // 0x17c364: 0x8e030008
    ctx->pc = 0x17c364u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17c368: 0x24090010
    ctx->pc = 0x17c368u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 16));
    // 0x17c36c: 0x8e080004
    ctx->pc = 0x17c36cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17c370: 0x240282d
    ctx->pc = 0x17c370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c374: 0x33fc2
    ctx->pc = 0x17c374u;
    SET_GPR_U32(ctx, 7, SRL32(GPR_U32(ctx, 3), 31));
    // 0x17c378: 0x2406000b
    ctx->pc = 0x17c378u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 11));
    // 0x17c37c: 0x671821
    ctx->pc = 0x17c37cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x17c380: 0x220202d
    ctx->pc = 0x17c380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c384: 0x31843
    ctx->pc = 0x17c384u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x17c388: 0xafa20020
    ctx->pc = 0x17c388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x17c38c: 0xafa80030
    ctx->pc = 0x17c38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
    // 0x17c390: 0xafa30034
    ctx->pc = 0x17c390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x17c394: 0xafb60024
    ctx->pc = 0x17c394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 22));
    // 0x17c398: 0xafb50028
    ctx->pc = 0x17c398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 21));
    // 0x17c39c: 0x12690006
    ctx->pc = 0x17C39Cu;
    {
        const bool branch_taken_0x17c39c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 9));
        ctx->pc = 0x17C3A0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 20));
        if (branch_taken_0x17c39c) {
            ctx->pc = 0x17C3B8u;
            goto label_17c3b8;
        }
    }
    ctx->pc = 0x17C3A4u;
    // 0x17c3a4: 0x126a000c
    ctx->pc = 0x17C3A4u;
    {
        const bool branch_taken_0x17c3a4 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 10));
        ctx->pc = 0x17C3A8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x17c3a4) {
            ctx->pc = 0x17C3D8u;
            goto label_17c3d8;
        }
    }
    ctx->pc = 0x17C3ACu;
    // 0x17c3ac: 0x10000013
    ctx->pc = 0x17C3ACu;
    {
        const bool branch_taken_0x17c3ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C3B0u;
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
        if (branch_taken_0x17c3ac) {
            ctx->pc = 0x17C3FCu;
            goto label_17c3fc;
        }
    }
    ctx->pc = 0x17C3B4u;
    // 0x17c3b4: 0x0
    ctx->pc = 0x17c3b4u;
    // NOP
label_17c3b8:
    // 0x17c3b8: 0xc05f164
    ctx->pc = 0x17C3B8u;
    SET_GPR_U32(ctx, 31, 0x17C3C0u);
    ctx->pc = 0x17C590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C590_0x17c590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C3C0u; }
    }
    if (ctx->pc != 0x17C3C0u) { return; }
    ctx->pc = 0x17C3C0u;
    // 0x17c3c0: 0x8e26003c
    ctx->pc = 0x17c3c0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x17c3c4: 0x3a0202d
    ctx->pc = 0x17c3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c3c8: 0xc0524b0
    ctx->pc = 0x17C3C8u;
    SET_GPR_U32(ctx, 31, 0x17C3D0u);
    ctx->pc = 0x17C3CCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1492C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001492C0_0x1492c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C3D0u; }
    }
    if (ctx->pc != 0x17C3D0u) { return; }
    ctx->pc = 0x17C3D0u;
    // 0x17c3d0: 0x10000009
    ctx->pc = 0x17C3D0u;
    {
        const bool branch_taken_0x17c3d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C3D4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x17c3d0) {
            ctx->pc = 0x17C3F8u;
            goto label_17c3f8;
        }
    }
    ctx->pc = 0x17C3D8u;
label_17c3d8:
    // 0x17c3d8: 0x2406000d
    ctx->pc = 0x17c3d8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 13));
    // 0x17c3dc: 0xc05f164
    ctx->pc = 0x17C3DCu;
    SET_GPR_U32(ctx, 31, 0x17C3E4u);
    ctx->pc = 0x17C3E0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17C590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C590_0x17c590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C3E4u; }
    }
    if (ctx->pc != 0x17C3E4u) { return; }
    ctx->pc = 0x17C3E4u;
    // 0x17c3e4: 0x8e26003c
    ctx->pc = 0x17c3e4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x17c3e8: 0x3a0202d
    ctx->pc = 0x17c3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c3ec: 0xc0524b2
    ctx->pc = 0x17C3ECu;
    SET_GPR_U32(ctx, 31, 0x17C3F4u);
    ctx->pc = 0x17C3F0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1492C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001492C8_0x1492c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C3F4u; }
    }
    if (ctx->pc != 0x17C3F4u) { return; }
    ctx->pc = 0x17C3F4u;
    // 0x17c3f4: 0xdfb00040
    ctx->pc = 0x17c3f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_17c3f8:
    // 0x17c3f8: 0xdfb10048
    ctx->pc = 0x17c3f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_17c3fc:
    // 0x17c3fc: 0xdfb20050
    ctx->pc = 0x17c3fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17c400: 0xdfb30058
    ctx->pc = 0x17c400u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17c404: 0xdfb40060
    ctx->pc = 0x17c404u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17c408: 0xdfb50068
    ctx->pc = 0x17c408u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17c40c: 0xdfb60070
    ctx->pc = 0x17c40cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17c410: 0xdfbf0078
    ctx->pc = 0x17c410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17c414: 0x3e00008
    ctx->pc = 0x17C414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C418u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C160u: goto label_17c160;
            case 0x17C1A4u: goto label_17c1a4;
            case 0x17C1E8u: goto label_17c1e8;
            case 0x17C238u: goto label_17c238;
            case 0x17C268u: goto label_17c268;
            case 0x17C26Cu: goto label_17c26c;
            case 0x17C290u: goto label_17c290;
            case 0x17C358u: goto label_17c358;
            case 0x17C3B8u: goto label_17c3b8;
            case 0x17C3D8u: goto label_17c3d8;
            case 0x17C3F8u: goto label_17c3f8;
            case 0x17C3FCu: goto label_17c3fc;
            case 0x17C420u: goto label_17c420;
            case 0x17C4A0u: goto label_17c4a0;
            case 0x17C508u: goto label_17c508;
            case 0x17C50Cu: goto label_17c50c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17C41Cu;
    // 0x17c41c: 0x0
    ctx->pc = 0x17c41cu;
    // NOP
label_17c420:
    // 0x17c420: 0x27bdff80
    ctx->pc = 0x17c420u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x17c424: 0x240a0040
    ctx->pc = 0x17c424u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 64));
    // 0x17c428: 0xffb00040
    ctx->pc = 0x17c428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x17c42c: 0xffb10048
    ctx->pc = 0x17c42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x17c430: 0xc0882d
    ctx->pc = 0x17c430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c434: 0xffb20050
    ctx->pc = 0x17c434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x17c438: 0x80902d
    ctx->pc = 0x17c438u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c43c: 0xffb30058
    ctx->pc = 0x17c43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x17c440: 0x220202d
    ctx->pc = 0x17c440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c444: 0xffb40060
    ctx->pc = 0x17c444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x17c448: 0xe0a02d
    ctx->pc = 0x17c448u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c44c: 0xffb50068
    ctx->pc = 0x17c44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x17c450: 0xffb60070
    ctx->pc = 0x17c450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x17c454: 0xa0b02d
    ctx->pc = 0x17c454u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c458: 0xffbf0078
    ctx->pc = 0x17c458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x17c45c: 0x26d00004
    ctx->pc = 0x17c45cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 22), 4));
    // 0x17c460: 0x8e030008
    ctx->pc = 0x17c460u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17c464: 0x8e090004
    ctx->pc = 0x17c464u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17c468: 0x8e480008
    ctx->pc = 0x17c468u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x17c46c: 0x317c2
    ctx->pc = 0x17c46cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 31));
    // 0x17c470: 0x8e46000c
    ctx->pc = 0x17c470u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x17c474: 0x621021
    ctx->pc = 0x17c474u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17c478: 0x8e050000
    ctx->pc = 0x17c478u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17c47c: 0x120a82d
    ctx->pc = 0x17c47cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c480: 0x108a80b
    ctx->pc = 0x17c480u;
    if (GPR_U32(ctx, 8) != 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 8));
    // 0x17c484: 0xafaa000c
    ctx->pc = 0x17c484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 10));
    // 0x17c488: 0xafa50000
    ctx->pc = 0x17c488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x17c48c: 0x29843
    ctx->pc = 0x17c48cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 1));
    // 0x17c490: 0xafa90004
    ctx->pc = 0x17c490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x17c494: 0x10c00002
    ctx->pc = 0x17C494u;
    {
        const bool branch_taken_0x17c494 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C498u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        if (branch_taken_0x17c494) {
            ctx->pc = 0x17C4A0u;
            goto label_17c4a0;
        }
    }
    ctx->pc = 0x17C49Cu;
    // 0x17c49c: 0xc0982d
    ctx->pc = 0x17c49cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17c4a0:
    // 0x17c4a0: 0xc05f14c
    ctx->pc = 0x17C4A0u;
    SET_GPR_U32(ctx, 31, 0x17C4A8u);
    ctx->pc = 0x17C530u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C530_0x17c530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C4A8u; }
    }
    if (ctx->pc != 0x17C4A8u) { return; }
    ctx->pc = 0x17C4A8u;
    // 0x17c4a8: 0x24060020
    ctx->pc = 0x17c4a8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    // 0x17c4ac: 0x8e030008
    ctx->pc = 0x17c4acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17c4b0: 0x24050010
    ctx->pc = 0x17c4b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    // 0x17c4b4: 0xafa20020
    ctx->pc = 0x17c4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x17c4b8: 0x317c2
    ctx->pc = 0x17c4b8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 31));
    // 0x17c4bc: 0x8e040004
    ctx->pc = 0x17c4bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17c4c0: 0x621821
    ctx->pc = 0x17c4c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17c4c4: 0xafb40024
    ctx->pc = 0x17c4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 20));
    // 0x17c4c8: 0x31843
    ctx->pc = 0x17c4c8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x17c4cc: 0xafa40030
    ctx->pc = 0x17c4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x17c4d0: 0xafb50028
    ctx->pc = 0x17c4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 21));
    // 0x17c4d4: 0xafb3002c
    ctx->pc = 0x17c4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 19));
    // 0x17c4d8: 0x1225000b
    ctx->pc = 0x17C4D8u;
    {
        const bool branch_taken_0x17c4d8 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 5));
        ctx->pc = 0x17C4DCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
        if (branch_taken_0x17c4d8) {
            ctx->pc = 0x17C508u;
            goto label_17c508;
        }
    }
    ctx->pc = 0x17C4E0u;
    // 0x17c4e0: 0x5626000a
    ctx->pc = 0x17C4E0u;
    {
        const bool branch_taken_0x17c4e0 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 6));
        if (branch_taken_0x17c4e0) {
            ctx->pc = 0x17C4E4u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->pc = 0x17C50Cu;
            goto label_17c50c;
        }
    }
    ctx->pc = 0x17C4E8u;
    // 0x17c4e8: 0x2c0282d
    ctx->pc = 0x17c4e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c4ec: 0x2406000d
    ctx->pc = 0x17c4ecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 13));
    // 0x17c4f0: 0xc05f164
    ctx->pc = 0x17C4F0u;
    SET_GPR_U32(ctx, 31, 0x17C4F8u);
    ctx->pc = 0x17C4F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17C590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C590_0x17c590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C4F8u; }
    }
    if (ctx->pc != 0x17C4F8u) { return; }
    ctx->pc = 0x17C4F8u;
    // 0x17c4f8: 0x8e46003c
    ctx->pc = 0x17c4f8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x17c4fc: 0x3a0202d
    ctx->pc = 0x17c4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c500: 0xc0524b6
    ctx->pc = 0x17C500u;
    SET_GPR_U32(ctx, 31, 0x17C508u);
    ctx->pc = 0x17C504u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1492D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001492D8_0x1492d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C508u; }
    }
    if (ctx->pc != 0x17C508u) { return; }
    ctx->pc = 0x17C508u;
label_17c508:
    // 0x17c508: 0xdfb00040
    ctx->pc = 0x17c508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_17c50c:
    // 0x17c50c: 0xdfb10048
    ctx->pc = 0x17c50cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17c510: 0xdfb20050
    ctx->pc = 0x17c510u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17c514: 0xdfb30058
    ctx->pc = 0x17c514u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17c518: 0xdfb40060
    ctx->pc = 0x17c518u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17c51c: 0xdfb50068
    ctx->pc = 0x17c51cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17c520: 0xdfb60070
    ctx->pc = 0x17c520u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17c524: 0xdfbf0078
    ctx->pc = 0x17c524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17c528: 0x3e00008
    ctx->pc = 0x17C528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C52Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C160u: goto label_17c160;
            case 0x17C1A4u: goto label_17c1a4;
            case 0x17C1E8u: goto label_17c1e8;
            case 0x17C238u: goto label_17c238;
            case 0x17C268u: goto label_17c268;
            case 0x17C26Cu: goto label_17c26c;
            case 0x17C290u: goto label_17c290;
            case 0x17C358u: goto label_17c358;
            case 0x17C3B8u: goto label_17c3b8;
            case 0x17C3D8u: goto label_17c3d8;
            case 0x17C3F8u: goto label_17c3f8;
            case 0x17C3FCu: goto label_17c3fc;
            case 0x17C420u: goto label_17c420;
            case 0x17C4A0u: goto label_17c4a0;
            case 0x17C508u: goto label_17c508;
            case 0x17C50Cu: goto label_17c50c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17C530u;
}
