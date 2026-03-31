#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001620C0
// Address: 0x1620c0 - 0x162510
void sub_001620C0_0x1620c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1620c0u;

    // 0x1620c0: 0x27bdfff0
    ctx->pc = 0x1620c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1620c4: 0xffbf0000
    ctx->pc = 0x1620c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1620c8: 0x8c8400a8
    ctx->pc = 0x1620c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x1620cc: 0xdfbf0000
    ctx->pc = 0x1620ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1620d0: 0x805f5a2
    ctx->pc = 0x1620D0u;
    ctx->pc = 0x1620D4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17D688u;
    entry_17d688_0x17d6a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1620D8u;
    // 0x1620d8: 0x27bdfff0
    ctx->pc = 0x1620d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1620dc: 0xffbf0000
    ctx->pc = 0x1620dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1620e0: 0xdfbf0000
    ctx->pc = 0x1620e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1620e4: 0x805882a
    ctx->pc = 0x1620E4u;
    ctx->pc = 0x1620E8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1620A8u;
    sub_001620A8_0x1620a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1620ECu;
    // 0x1620ec: 0x0
    ctx->pc = 0x1620ecu;
    // NOP
    // 0x1620f0: 0x27bdfff0
    ctx->pc = 0x1620f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1620f4: 0xffbf0000
    ctx->pc = 0x1620f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1620f8: 0x8c8400a8
    ctx->pc = 0x1620f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x1620fc: 0xdfbf0000
    ctx->pc = 0x1620fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162100: 0x805f5b2
    ctx->pc = 0x162100u;
    ctx->pc = 0x162104u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17D6C8u;
    entry_17d6c8_0x17d6e8(rdram, ctx, runtime); return;
    ctx->pc = 0x162108u;
    // 0x162108: 0x27bdfff0
    ctx->pc = 0x162108u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16210c: 0xffbf0000
    ctx->pc = 0x16210cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162110: 0x8c8400a8
    ctx->pc = 0x162110u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x162114: 0xdfbf0000
    ctx->pc = 0x162114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162118: 0x805f51c
    ctx->pc = 0x162118u;
    ctx->pc = 0x16211Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17D470u;
    entry_17d470_0x17d478(rdram, ctx, runtime); return;
    ctx->pc = 0x162120u;
    // 0x162120: 0x27bdfff0
    ctx->pc = 0x162120u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x162124: 0xffbf0000
    ctx->pc = 0x162124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162128: 0x8c8400a8
    ctx->pc = 0x162128u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x16212c: 0xdfbf0000
    ctx->pc = 0x16212cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162130: 0x805f51e
    ctx->pc = 0x162130u;
    ctx->pc = 0x162134u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17D478u;
    entry_17d478_0x17d480(rdram, ctx, runtime); return;
    ctx->pc = 0x162138u;
    // 0x162138: 0x27bdfff0
    ctx->pc = 0x162138u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16213c: 0xffbf0000
    ctx->pc = 0x16213cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162140: 0x8c8400a8
    ctx->pc = 0x162140u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x162144: 0xdfbf0000
    ctx->pc = 0x162144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162148: 0x805f520
    ctx->pc = 0x162148u;
    ctx->pc = 0x16214Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17D480u;
    entry_17d480_0x17d488(rdram, ctx, runtime); return;
    ctx->pc = 0x162150u;
    // 0x162150: 0x27bdfff0
    ctx->pc = 0x162150u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x162154: 0xffbf0000
    ctx->pc = 0x162154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162158: 0x8c8400a8
    ctx->pc = 0x162158u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x16215c: 0xdfbf0000
    ctx->pc = 0x16215cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162160: 0x805f522
    ctx->pc = 0x162160u;
    ctx->pc = 0x162164u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17D488u;
    entry_17d488_0x17d490(rdram, ctx, runtime); return;
    ctx->pc = 0x162168u;
    // 0x162168: 0x27bdfff0
    ctx->pc = 0x162168u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16216c: 0xffbf0000
    ctx->pc = 0x16216cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162170: 0xdfbf0000
    ctx->pc = 0x162170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162174: 0x805f482
    ctx->pc = 0x162174u;
    ctx->pc = 0x162178u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17D208u;
    sub_0017D208_0x17d208(rdram, ctx, runtime); return;
    ctx->pc = 0x16217Cu;
    // 0x16217c: 0x0
    ctx->pc = 0x16217cu;
    // NOP
    // 0x162180: 0x27bdfff0
    ctx->pc = 0x162180u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x162184: 0xffbf0000
    ctx->pc = 0x162184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162188: 0xdfbf0000
    ctx->pc = 0x162188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16218c: 0x805f486
    ctx->pc = 0x16218Cu;
    ctx->pc = 0x162190u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17D218u;
    sub_0017D218_0x17d218(rdram, ctx, runtime); return;
    ctx->pc = 0x162194u;
    // 0x162194: 0x0
    ctx->pc = 0x162194u;
    // NOP
    // 0x162198: 0x27bdfff0
    ctx->pc = 0x162198u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16219c: 0xa0102d
    ctx->pc = 0x16219cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1621a0: 0xffbf0000
    ctx->pc = 0x1621a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1621a4: 0x382d
    ctx->pc = 0x1621a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1621a8: 0x402d
    ctx->pc = 0x1621a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1621ac: 0x8c4a000c
    ctx->pc = 0x1621acu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1621b0: 0x8c490008
    ctx->pc = 0x1621b0u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1621b4: 0xa1fc2
    ctx->pc = 0x1621b4u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 10), 31));
    // 0x1621b8: 0xdfbf0000
    ctx->pc = 0x1621b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1621bc: 0x1435021
    ctx->pc = 0x1621bcu;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1621c0: 0xa5043
    ctx->pc = 0x1621c0u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 1));
    // 0x1621c4: 0x8058882
    ctx->pc = 0x1621C4u;
    ctx->pc = 0x1621C8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x162208u;
    goto label_162208;
    ctx->pc = 0x1621CCu;
    // 0x1621cc: 0x0
    ctx->pc = 0x1621ccu;
    // NOP
    // 0x1621d0: 0x27bdfff0
    ctx->pc = 0x1621d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1621d4: 0xa0102d
    ctx->pc = 0x1621d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1621d8: 0xffbf0000
    ctx->pc = 0x1621d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1621dc: 0x382d
    ctx->pc = 0x1621dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1621e0: 0x8c48000c
    ctx->pc = 0x1621e0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1621e4: 0x8c490008
    ctx->pc = 0x1621e4u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1621e8: 0x81fc2
    ctx->pc = 0x1621e8u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 8), 31));
    // 0x1621ec: 0xdfbf0000
    ctx->pc = 0x1621ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1621f0: 0x1034021
    ctx->pc = 0x1621f0u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1621f4: 0x84043
    ctx->pc = 0x1621f4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
    // 0x1621f8: 0x100502d
    ctx->pc = 0x1621f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1621fc: 0x8058882
    ctx->pc = 0x1621FCu;
    ctx->pc = 0x162200u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x162208u;
    goto label_162208;
    ctx->pc = 0x162204u;
    // 0x162204: 0x0
    ctx->pc = 0x162204u;
    // NOP
label_162208:
    // 0x162208: 0x27bdff20
    ctx->pc = 0x162208u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x16220c: 0xffb10098
    ctx->pc = 0x16220cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x162210: 0x80882d
    ctx->pc = 0x162210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162214: 0xffb200a0
    ctx->pc = 0x162214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x162218: 0xa0902d
    ctx->pc = 0x162218u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16221c: 0xffb300a8
    ctx->pc = 0x16221cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x162220: 0xc0982d
    ctx->pc = 0x162220u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162224: 0xffb400b0
    ctx->pc = 0x162224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x162228: 0xe0a02d
    ctx->pc = 0x162228u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16222c: 0xffb500b8
    ctx->pc = 0x16222cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
    // 0x162230: 0x100a82d
    ctx->pc = 0x162230u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162234: 0xffb600c0
    ctx->pc = 0x162234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x162238: 0x120b02d
    ctx->pc = 0x162238u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16223c: 0xffb700c8
    ctx->pc = 0x16223cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 23));
    // 0x162240: 0xffb00090
    ctx->pc = 0x162240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x162244: 0xffbf00d0
    ctx->pc = 0x162244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x162248: 0xc057ff0
    ctx->pc = 0x162248u;
    SET_GPR_U32(ctx, 31, 0x162250u);
    ctx->pc = 0x16224Cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162250u; }
    }
    if (ctx->pc != 0x162250u) { return; }
    ctx->pc = 0x162250u;
    // 0x162250: 0x54400007
    ctx->pc = 0x162250u;
    {
        const bool branch_taken_0x162250 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x162250) {
            ctx->pc = 0x162254u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x162270u;
            goto label_162270;
        }
    }
    ctx->pc = 0x162258u;
    // 0x162258: 0x3c040024
    ctx->pc = 0x162258u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x16225c: 0xc058dd4
    ctx->pc = 0x16225Cu;
    SET_GPR_U32(ctx, 31, 0x162264u);
    ctx->pc = 0x162260u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967240));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162264u; }
    }
    if (ctx->pc != 0x162264u) { return; }
    ctx->pc = 0x162264u;
    // 0x162264: 0x10000018
    ctx->pc = 0x162264u;
    {
        const bool branch_taken_0x162264 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x162268u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x162264) {
            ctx->pc = 0x1622C8u;
            goto label_1622c8;
        }
    }
    ctx->pc = 0x16226Cu;
    // 0x16226c: 0x0
    ctx->pc = 0x16226cu;
    // NOP
label_162270:
    // 0x162270: 0x14400005
    ctx->pc = 0x162270u;
    {
        const bool branch_taken_0x162270 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x162274u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x162270) {
            ctx->pc = 0x162288u;
            goto label_162288;
        }
    }
    ctx->pc = 0x162278u;
    // 0x162278: 0xc058dd4
    ctx->pc = 0x162278u;
    SET_GPR_U32(ctx, 31, 0x162280u);
    ctx->pc = 0x16227Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 0));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162280u; }
    }
    if (ctx->pc != 0x162280u) { return; }
    ctx->pc = 0x162280u;
    // 0x162280: 0x10000011
    ctx->pc = 0x162280u;
    {
        const bool branch_taken_0x162280 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x162284u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x162280) {
            ctx->pc = 0x1622C8u;
            goto label_1622c8;
        }
    }
    ctx->pc = 0x162288u;
label_162288:
    // 0x162288: 0xc0582e4
    ctx->pc = 0x162288u;
    SET_GPR_U32(ctx, 31, 0x162290u);
    ctx->pc = 0x16228Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B90_0x160b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162290u; }
    }
    if (ctx->pc != 0x162290u) { return; }
    ctx->pc = 0x162290u;
    // 0x162290: 0x220202d
    ctx->pc = 0x162290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162294: 0x240282d
    ctx->pc = 0x162294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162298: 0x3a0302d
    ctx->pc = 0x162298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16229c: 0xc0582ee
    ctx->pc = 0x16229Cu;
    SET_GPR_U32(ctx, 31, 0x1622A4u);
    ctx->pc = 0x1622A0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160BB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160BB8_0x160bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1622A4u; }
    }
    if (ctx->pc != 0x1622A4u) { return; }
    ctx->pc = 0x1622A4u;
    // 0x1622a4: 0x3a0282d
    ctx->pc = 0x1622a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1622a8: 0x200202d
    ctx->pc = 0x1622a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1622ac: 0x260302d
    ctx->pc = 0x1622acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1622b0: 0x280382d
    ctx->pc = 0x1622b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1622b4: 0x2a0402d
    ctx->pc = 0x1622b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1622b8: 0x2c0482d
    ctx->pc = 0x1622b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1622bc: 0xc05ec04
    ctx->pc = 0x1622BCu;
    SET_GPR_U32(ctx, 31, 0x1622C4u);
    ctx->pc = 0x1622C0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17B010u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B010_0x17b010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1622C4u; }
    }
    if (ctx->pc != 0x1622C4u) { return; }
    ctx->pc = 0x1622C4u;
    // 0x1622c4: 0xdfb00090
    ctx->pc = 0x1622c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1622c8:
    // 0x1622c8: 0xdfb10098
    ctx->pc = 0x1622c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1622cc: 0xdfb200a0
    ctx->pc = 0x1622ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1622d0: 0xdfb300a8
    ctx->pc = 0x1622d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1622d4: 0xdfb400b0
    ctx->pc = 0x1622d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1622d8: 0xdfb500b8
    ctx->pc = 0x1622d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1622dc: 0xdfb600c0
    ctx->pc = 0x1622dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1622e0: 0xdfb700c8
    ctx->pc = 0x1622e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1622e4: 0xdfbf00d0
    ctx->pc = 0x1622e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1622e8: 0x3e00008
    ctx->pc = 0x1622E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1622ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162208u: goto label_162208;
            case 0x162270u: goto label_162270;
            case 0x162288u: goto label_162288;
            case 0x1622C8u: goto label_1622c8;
            case 0x162360u: goto label_162360;
            case 0x1623C8u: goto label_1623c8;
            case 0x1623E0u: goto label_1623e0;
            case 0x162420u: goto label_162420;
            case 0x162488u: goto label_162488;
            case 0x1624F0u: goto label_1624f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1622F0u;
    // 0x1622f0: 0x27bdfff0
    ctx->pc = 0x1622f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1622f4: 0xa0102d
    ctx->pc = 0x1622f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1622f8: 0xffbf0000
    ctx->pc = 0x1622f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1622fc: 0x382d
    ctx->pc = 0x1622fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162300: 0x402d
    ctx->pc = 0x162300u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162304: 0x8c4a000c
    ctx->pc = 0x162304u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x162308: 0x8c490008
    ctx->pc = 0x162308u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16230c: 0xa1fc2
    ctx->pc = 0x16230cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 10), 31));
    // 0x162310: 0xdfbf0000
    ctx->pc = 0x162310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162314: 0x1435021
    ctx->pc = 0x162314u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x162318: 0xa5043
    ctx->pc = 0x162318u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 1));
    // 0x16231c: 0x80588d8
    ctx->pc = 0x16231Cu;
    ctx->pc = 0x162320u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x162360u;
    goto label_162360;
    ctx->pc = 0x162324u;
    // 0x162324: 0x0
    ctx->pc = 0x162324u;
    // NOP
    // 0x162328: 0x27bdfff0
    ctx->pc = 0x162328u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16232c: 0xa0102d
    ctx->pc = 0x16232cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162330: 0xffbf0000
    ctx->pc = 0x162330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162334: 0x382d
    ctx->pc = 0x162334u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162338: 0x8c48000c
    ctx->pc = 0x162338u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x16233c: 0x8c490008
    ctx->pc = 0x16233cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x162340: 0x81fc2
    ctx->pc = 0x162340u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 8), 31));
    // 0x162344: 0xdfbf0000
    ctx->pc = 0x162344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162348: 0x1034021
    ctx->pc = 0x162348u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x16234c: 0x84043
    ctx->pc = 0x16234cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
    // 0x162350: 0x100502d
    ctx->pc = 0x162350u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162354: 0x80588d8
    ctx->pc = 0x162354u;
    ctx->pc = 0x162358u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x162360u;
    goto label_162360;
    ctx->pc = 0x16235Cu;
    // 0x16235c: 0x0
    ctx->pc = 0x16235cu;
    // NOP
label_162360:
    // 0x162360: 0x27bdff20
    ctx->pc = 0x162360u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x162364: 0xffb10098
    ctx->pc = 0x162364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x162368: 0x80882d
    ctx->pc = 0x162368u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16236c: 0xffb200a0
    ctx->pc = 0x16236cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x162370: 0xa0902d
    ctx->pc = 0x162370u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162374: 0xffb300a8
    ctx->pc = 0x162374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x162378: 0xc0982d
    ctx->pc = 0x162378u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16237c: 0xffb400b0
    ctx->pc = 0x16237cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x162380: 0xe0a02d
    ctx->pc = 0x162380u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162384: 0xffb500b8
    ctx->pc = 0x162384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
    // 0x162388: 0x100a82d
    ctx->pc = 0x162388u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16238c: 0xffb600c0
    ctx->pc = 0x16238cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x162390: 0x120b02d
    ctx->pc = 0x162390u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162394: 0xffb700c8
    ctx->pc = 0x162394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 23));
    // 0x162398: 0xffb00090
    ctx->pc = 0x162398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x16239c: 0xffbf00d0
    ctx->pc = 0x16239cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1623a0: 0xc057ff0
    ctx->pc = 0x1623A0u;
    SET_GPR_U32(ctx, 31, 0x1623A8u);
    ctx->pc = 0x1623A4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1623A8u; }
    }
    if (ctx->pc != 0x1623A8u) { return; }
    ctx->pc = 0x1623A8u;
    // 0x1623a8: 0x54400007
    ctx->pc = 0x1623A8u;
    {
        const bool branch_taken_0x1623a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1623a8) {
            ctx->pc = 0x1623ACu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x1623C8u;
            goto label_1623c8;
        }
    }
    ctx->pc = 0x1623B0u;
    // 0x1623b0: 0x3c040024
    ctx->pc = 0x1623b0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1623b4: 0xc058dd4
    ctx->pc = 0x1623B4u;
    SET_GPR_U32(ctx, 31, 0x1623BCu);
    ctx->pc = 0x1623B8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 56));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1623BCu; }
    }
    if (ctx->pc != 0x1623BCu) { return; }
    ctx->pc = 0x1623BCu;
    // 0x1623bc: 0x10000018
    ctx->pc = 0x1623BCu;
    {
        const bool branch_taken_0x1623bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1623C0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x1623bc) {
            ctx->pc = 0x162420u;
            goto label_162420;
        }
    }
    ctx->pc = 0x1623C4u;
    // 0x1623c4: 0x0
    ctx->pc = 0x1623c4u;
    // NOP
label_1623c8:
    // 0x1623c8: 0x14400005
    ctx->pc = 0x1623C8u;
    {
        const bool branch_taken_0x1623c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1623CCu;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x1623c8) {
            ctx->pc = 0x1623E0u;
            goto label_1623e0;
        }
    }
    ctx->pc = 0x1623D0u;
    // 0x1623d0: 0xc058dd4
    ctx->pc = 0x1623D0u;
    SET_GPR_U32(ctx, 31, 0x1623D8u);
    ctx->pc = 0x1623D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 112));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1623D8u; }
    }
    if (ctx->pc != 0x1623D8u) { return; }
    ctx->pc = 0x1623D8u;
    // 0x1623d8: 0x10000011
    ctx->pc = 0x1623D8u;
    {
        const bool branch_taken_0x1623d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1623DCu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x1623d8) {
            ctx->pc = 0x162420u;
            goto label_162420;
        }
    }
    ctx->pc = 0x1623E0u;
label_1623e0:
    // 0x1623e0: 0xc0582e4
    ctx->pc = 0x1623E0u;
    SET_GPR_U32(ctx, 31, 0x1623E8u);
    ctx->pc = 0x1623E4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B90_0x160b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1623E8u; }
    }
    if (ctx->pc != 0x1623E8u) { return; }
    ctx->pc = 0x1623E8u;
    // 0x1623e8: 0x220202d
    ctx->pc = 0x1623e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1623ec: 0x240282d
    ctx->pc = 0x1623ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1623f0: 0x3a0302d
    ctx->pc = 0x1623f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1623f4: 0xc0582ee
    ctx->pc = 0x1623F4u;
    SET_GPR_U32(ctx, 31, 0x1623FCu);
    ctx->pc = 0x1623F8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160BB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160BB8_0x160bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1623FCu; }
    }
    if (ctx->pc != 0x1623FCu) { return; }
    ctx->pc = 0x1623FCu;
    // 0x1623fc: 0x3a0282d
    ctx->pc = 0x1623fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162400: 0x200202d
    ctx->pc = 0x162400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162404: 0x260302d
    ctx->pc = 0x162404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162408: 0x280382d
    ctx->pc = 0x162408u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16240c: 0x2a0402d
    ctx->pc = 0x16240cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162410: 0x2c0482d
    ctx->pc = 0x162410u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162414: 0xc05eeba
    ctx->pc = 0x162414u;
    SET_GPR_U32(ctx, 31, 0x16241Cu);
    ctx->pc = 0x162418u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017BAE8_0x17bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16241Cu; }
    }
    if (ctx->pc != 0x16241Cu) { return; }
    ctx->pc = 0x16241Cu;
    // 0x16241c: 0xdfb00090
    ctx->pc = 0x16241cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_162420:
    // 0x162420: 0xdfb10098
    ctx->pc = 0x162420u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x162424: 0xdfb200a0
    ctx->pc = 0x162424u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x162428: 0xdfb300a8
    ctx->pc = 0x162428u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16242c: 0xdfb400b0
    ctx->pc = 0x16242cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x162430: 0xdfb500b8
    ctx->pc = 0x162430u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x162434: 0xdfb600c0
    ctx->pc = 0x162434u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x162438: 0xdfb700c8
    ctx->pc = 0x162438u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16243c: 0xdfbf00d0
    ctx->pc = 0x16243cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x162440: 0x3e00008
    ctx->pc = 0x162440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162444u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162208u: goto label_162208;
            case 0x162270u: goto label_162270;
            case 0x162288u: goto label_162288;
            case 0x1622C8u: goto label_1622c8;
            case 0x162360u: goto label_162360;
            case 0x1623C8u: goto label_1623c8;
            case 0x1623E0u: goto label_1623e0;
            case 0x162420u: goto label_162420;
            case 0x162488u: goto label_162488;
            case 0x1624F0u: goto label_1624f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x162448u;
    // 0x162448: 0x27bdffe0
    ctx->pc = 0x162448u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16244c: 0xffb00000
    ctx->pc = 0x16244cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x162450: 0x80802d
    ctx->pc = 0x162450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162454: 0xffb10008
    ctx->pc = 0x162454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x162458: 0xffbf0010
    ctx->pc = 0x162458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16245c: 0xc057ff0
    ctx->pc = 0x16245Cu;
    SET_GPR_U32(ctx, 31, 0x162464u);
    ctx->pc = 0x162460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162464u; }
    }
    if (ctx->pc != 0x162464u) { return; }
    ctx->pc = 0x162464u;
    // 0x162464: 0x14400008
    ctx->pc = 0x162464u;
    {
        const bool branch_taken_0x162464 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x162468u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x162464) {
            ctx->pc = 0x162488u;
            goto label_162488;
        }
    }
    ctx->pc = 0x16246Cu;
    // 0x16246c: 0x3c040024
    ctx->pc = 0x16246cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x162470: 0xdfb00000
    ctx->pc = 0x162470u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162474: 0xdfb10008
    ctx->pc = 0x162474u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x162478: 0x248400a8
    ctx->pc = 0x162478u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 168));
    // 0x16247c: 0xdfbf0010
    ctx->pc = 0x16247cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162480: 0x8058dd4
    ctx->pc = 0x162480u;
    ctx->pc = 0x162484u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x162488u;
label_162488:
    // 0x162488: 0xc0582e4
    ctx->pc = 0x162488u;
    SET_GPR_U32(ctx, 31, 0x162490u);
    ctx->pc = 0x160B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B90_0x160b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162490u; }
    }
    if (ctx->pc != 0x162490u) { return; }
    ctx->pc = 0x162490u;
    // 0x162490: 0x220282d
    ctx->pc = 0x162490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162494: 0xdfb00000
    ctx->pc = 0x162494u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162498: 0x40202d
    ctx->pc = 0x162498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16249c: 0xdfb10008
    ctx->pc = 0x16249cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1624a0: 0xdfbf0010
    ctx->pc = 0x1624a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1624a4: 0x805f57c
    ctx->pc = 0x1624A4u;
    ctx->pc = 0x1624A8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17D5F0u;
    entry_17d5f0_0x17d620(rdram, ctx, runtime); return;
    ctx->pc = 0x1624ACu;
    // 0x1624ac: 0x0
    ctx->pc = 0x1624acu;
    // NOP
    // 0x1624b0: 0x27bdfff0
    ctx->pc = 0x1624b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1624b4: 0xffb00000
    ctx->pc = 0x1624b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1624b8: 0xffbf0008
    ctx->pc = 0x1624b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1624bc: 0xc057ff0
    ctx->pc = 0x1624BCu;
    SET_GPR_U32(ctx, 31, 0x1624C4u);
    ctx->pc = 0x1624C0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1624C4u; }
    }
    if (ctx->pc != 0x1624C4u) { return; }
    ctx->pc = 0x1624C4u;
    // 0x1624c4: 0x1440000a
    ctx->pc = 0x1624C4u;
    {
        const bool branch_taken_0x1624c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1624C8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1624c4) {
            ctx->pc = 0x1624F0u;
            goto label_1624f0;
        }
    }
    ctx->pc = 0x1624CCu;
    // 0x1624cc: 0x3c040024
    ctx->pc = 0x1624ccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1624d0: 0xc058dd4
    ctx->pc = 0x1624D0u;
    SET_GPR_U32(ctx, 31, 0x1624D8u);
    ctx->pc = 0x1624D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 216));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1624D8u; }
    }
    if (ctx->pc != 0x1624D8u) { return; }
    ctx->pc = 0x1624D8u;
    // 0x1624d8: 0x102d
    ctx->pc = 0x1624d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1624dc: 0xdfb00000
    ctx->pc = 0x1624dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1624e0: 0xdfbf0008
    ctx->pc = 0x1624e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1624e4: 0x3e00008
    ctx->pc = 0x1624E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1624E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162208u: goto label_162208;
            case 0x162270u: goto label_162270;
            case 0x162288u: goto label_162288;
            case 0x1622C8u: goto label_1622c8;
            case 0x162360u: goto label_162360;
            case 0x1623C8u: goto label_1623c8;
            case 0x1623E0u: goto label_1623e0;
            case 0x162420u: goto label_162420;
            case 0x162488u: goto label_162488;
            case 0x1624F0u: goto label_1624f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1624ECu;
    // 0x1624ec: 0x0
    ctx->pc = 0x1624ecu;
    // NOP
label_1624f0:
    // 0x1624f0: 0xc0582e4
    ctx->pc = 0x1624F0u;
    SET_GPR_U32(ctx, 31, 0x1624F8u);
    ctx->pc = 0x160B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B90_0x160b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1624F8u; }
    }
    if (ctx->pc != 0x1624F8u) { return; }
    ctx->pc = 0x1624F8u;
    // 0x1624f8: 0xdfb00000
    ctx->pc = 0x1624f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1624fc: 0x40202d
    ctx->pc = 0x1624fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162500: 0xdfbf0008
    ctx->pc = 0x162500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x162504: 0x805f588
    ctx->pc = 0x162504u;
    ctx->pc = 0x162508u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17D620u;
    entry_17d620_0x17d638(rdram, ctx, runtime); return;
    ctx->pc = 0x16250Cu;
    // 0x16250c: 0x0
    ctx->pc = 0x16250cu;
    // NOP
}
