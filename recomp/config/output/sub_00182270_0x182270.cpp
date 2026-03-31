#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00182270
// Address: 0x182270 - 0x182398
void sub_00182270_0x182270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x182270u;

    // 0x182270: 0x80820000
    ctx->pc = 0x182270u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x182274: 0x10400011
    ctx->pc = 0x182274u;
    {
        const bool branch_taken_0x182274 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x182278u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x182274) {
            ctx->pc = 0x1822BCu;
            goto label_1822bc;
        }
    }
    ctx->pc = 0x18227Cu;
    // 0x18227c: 0x2406003f
    ctx->pc = 0x18227cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 63));
    // 0x182280: 0x2405002a
    ctx->pc = 0x182280u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 42));
    // 0x182284: 0x0
    ctx->pc = 0x182284u;
    // NOP
label_182288:
    // 0x182288: 0x31600
    ctx->pc = 0x182288u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 24));
    // 0x18228c: 0x21603
    ctx->pc = 0x18228cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x182290: 0x10460005
    ctx->pc = 0x182290u;
    {
        const bool branch_taken_0x182290 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 6));
        ctx->pc = 0x182294u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 32));
        if (branch_taken_0x182290) {
            ctx->pc = 0x1822A8u;
            goto label_1822a8;
        }
    }
    ctx->pc = 0x182298u;
    // 0x182298: 0x10450003
    ctx->pc = 0x182298u;
    {
        const bool branch_taken_0x182298 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        if (branch_taken_0x182298) {
            ctx->pc = 0x1822A8u;
            goto label_1822a8;
        }
    }
    ctx->pc = 0x1822A0u;
    // 0x1822a0: 0x50600003
    ctx->pc = 0x1822A0u;
    {
        const bool branch_taken_0x1822a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1822a0) {
            ctx->pc = 0x1822A4u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x1822B0u;
            goto label_1822b0;
        }
    }
    ctx->pc = 0x1822A8u;
label_1822a8:
    // 0x1822a8: 0x3e00008
    ctx->pc = 0x1822A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1822ACu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182288u: goto label_182288;
            case 0x1822A8u: goto label_1822a8;
            case 0x1822B0u: goto label_1822b0;
            case 0x1822BCu: goto label_1822bc;
            case 0x182330u: goto label_182330;
            case 0x182358u: goto label_182358;
            case 0x182384u: goto label_182384;
            case 0x182388u: goto label_182388;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1822B0u;
label_1822b0:
    // 0x1822b0: 0x80820000
    ctx->pc = 0x1822b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1822b4: 0x1440fff4
    ctx->pc = 0x1822B4u;
    {
        const bool branch_taken_0x1822b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1822B8u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x1822b4) {
            ctx->pc = 0x182288u;
            goto label_182288;
        }
    }
    ctx->pc = 0x1822BCu;
label_1822bc:
    // 0x1822bc: 0x3e00008
    ctx->pc = 0x1822BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1822C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182288u: goto label_182288;
            case 0x1822A8u: goto label_1822a8;
            case 0x1822B0u: goto label_1822b0;
            case 0x1822BCu: goto label_1822bc;
            case 0x182330u: goto label_182330;
            case 0x182358u: goto label_182358;
            case 0x182384u: goto label_182384;
            case 0x182388u: goto label_182388;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1822C4u;
    // 0x1822c4: 0x0
    ctx->pc = 0x1822c4u;
    // NOP
    // 0x1822c8: 0x27bdffd0
    ctx->pc = 0x1822c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1822cc: 0x2405002f
    ctx->pc = 0x1822ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 47));
    // 0x1822d0: 0xffb00020
    ctx->pc = 0x1822d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1822d4: 0xffbf0028
    ctx->pc = 0x1822d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1822d8: 0xc042b3a
    ctx->pc = 0x1822D8u;
    SET_GPR_U32(ctx, 31, 0x1822E0u);
    ctx->pc = 0x1822DCu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10ACE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ACE8_0x10ace8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1822E0u; }
    }
    if (ctx->pc != 0x1822E0u) { return; }
    ctx->pc = 0x1822E0u;
    // 0x1822e0: 0x200202d
    ctx->pc = 0x1822e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1822e4: 0x10400012
    ctx->pc = 0x1822E4u;
    {
        const bool branch_taken_0x1822e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1822E8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 47));
        if (branch_taken_0x1822e4) {
            ctx->pc = 0x182330u;
            goto label_182330;
        }
    }
    ctx->pc = 0x1822ECu;
    // 0x1822ec: 0xc042dee
    ctx->pc = 0x1822ECu;
    SET_GPR_U32(ctx, 31, 0x1822F4u);
    ctx->pc = 0x10B7B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B7B8_0x10b7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1822F4u; }
    }
    if (ctx->pc != 0x1822F4u) { return; }
    ctx->pc = 0x1822F4u;
    // 0x1822f4: 0xc042c56
    ctx->pc = 0x1822F4u;
    SET_GPR_U32(ctx, 31, 0x1822FCu);
    ctx->pc = 0x1822F8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1822FCu; }
    }
    if (ctx->pc != 0x1822FCu) { return; }
    ctx->pc = 0x1822FCu;
    // 0x1822fc: 0x200202d
    ctx->pc = 0x1822fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182300: 0x2c430020
    ctx->pc = 0x182300u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), 32));
    // 0x182304: 0x102d
    ctx->pc = 0x182304u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182308: 0x1060001f
    ctx->pc = 0x182308u;
    {
        const bool branch_taken_0x182308 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x18230Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 47));
        if (branch_taken_0x182308) {
            ctx->pc = 0x182388u;
            goto label_182388;
        }
    }
    ctx->pc = 0x182310u;
    // 0x182310: 0xc042dee
    ctx->pc = 0x182310u;
    SET_GPR_U32(ctx, 31, 0x182318u);
    ctx->pc = 0x10B7B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B7B8_0x10b7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182318u; }
    }
    if (ctx->pc != 0x182318u) { return; }
    ctx->pc = 0x182318u;
    // 0x182318: 0x3a0202d
    ctx->pc = 0x182318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18231c: 0xc042bf0
    ctx->pc = 0x18231Cu;
    SET_GPR_U32(ctx, 31, 0x182324u);
    ctx->pc = 0x182320u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182324u; }
    }
    if (ctx->pc != 0x182324u) { return; }
    ctx->pc = 0x182324u;
    // 0x182324: 0x1000000c
    ctx->pc = 0x182324u;
    {
        const bool branch_taken_0x182324 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x182328u;
        SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
        if (branch_taken_0x182324) {
            ctx->pc = 0x182358u;
            goto label_182358;
        }
    }
    ctx->pc = 0x18232Cu;
    // 0x18232c: 0x0
    ctx->pc = 0x18232cu;
    // NOP
label_182330:
    // 0x182330: 0xc042c56
    ctx->pc = 0x182330u;
    SET_GPR_U32(ctx, 31, 0x182338u);
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182338u; }
    }
    if (ctx->pc != 0x182338u) { return; }
    ctx->pc = 0x182338u;
    // 0x182338: 0x200282d
    ctx->pc = 0x182338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18233c: 0x2c430020
    ctx->pc = 0x18233cu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), 32));
    // 0x182340: 0x102d
    ctx->pc = 0x182340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182344: 0x10600010
    ctx->pc = 0x182344u;
    {
        const bool branch_taken_0x182344 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x182348u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x182344) {
            ctx->pc = 0x182388u;
            goto label_182388;
        }
    }
    ctx->pc = 0x18234Cu;
    // 0x18234c: 0xc042bf0
    ctx->pc = 0x18234Cu;
    SET_GPR_U32(ctx, 31, 0x182354u);
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182354u; }
    }
    if (ctx->pc != 0x182354u) { return; }
    ctx->pc = 0x182354u;
    // 0x182354: 0x3c050024
    ctx->pc = 0x182354u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
label_182358:
    // 0x182358: 0x3a0202d
    ctx->pc = 0x182358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18235c: 0xc042b9e
    ctx->pc = 0x18235Cu;
    SET_GPR_U32(ctx, 31, 0x182364u);
    ctx->pc = 0x182360u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 6064));
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182364u; }
    }
    if (ctx->pc != 0x182364u) { return; }
    ctx->pc = 0x182364u;
    // 0x182364: 0x3c050024
    ctx->pc = 0x182364u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x182368: 0x24a517b8
    ctx->pc = 0x182368u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 6072));
    // 0x18236c: 0x10400005
    ctx->pc = 0x18236Cu;
    {
        const bool branch_taken_0x18236c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x182370u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18236c) {
            ctx->pc = 0x182384u;
            goto label_182384;
        }
    }
    ctx->pc = 0x182374u;
    // 0x182374: 0xc042b9e
    ctx->pc = 0x182374u;
    SET_GPR_U32(ctx, 31, 0x18237Cu);
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18237Cu; }
    }
    if (ctx->pc != 0x18237Cu) { return; }
    ctx->pc = 0x18237Cu;
    // 0x18237c: 0x54400002
    ctx->pc = 0x18237Cu;
    {
        const bool branch_taken_0x18237c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x18237c) {
            ctx->pc = 0x182380u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x182388u;
            goto label_182388;
        }
    }
    ctx->pc = 0x182384u;
label_182384:
    // 0x182384: 0x102d
    ctx->pc = 0x182384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_182388:
    // 0x182388: 0xdfb00020
    ctx->pc = 0x182388u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18238c: 0xdfbf0028
    ctx->pc = 0x18238cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x182390: 0x3e00008
    ctx->pc = 0x182390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182394u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182288u: goto label_182288;
            case 0x1822A8u: goto label_1822a8;
            case 0x1822B0u: goto label_1822b0;
            case 0x1822BCu: goto label_1822bc;
            case 0x182330u: goto label_182330;
            case 0x182358u: goto label_182358;
            case 0x182384u: goto label_182384;
            case 0x182388u: goto label_182388;
            default: break;
        }
        return;
    }
    ctx->pc = 0x182398u;
}
