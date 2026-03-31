#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00148170
// Address: 0x148170 - 0x148328
void sub_00148170_0x148170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x148170u;

label_148170:
    // 0x148170: 0x27bdffb0
    ctx->pc = 0x148170u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_148174:
    // 0x148174: 0xffb30030
    ctx->pc = 0x148174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_148178:
    // 0x148178: 0xffb20020
    ctx->pc = 0x148178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_14817c:
    // 0x14817c: 0x982d
    ctx->pc = 0x14817cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_148180:
    // 0x148180: 0xffb10010
    ctx->pc = 0x148180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_148184:
    // 0x148184: 0x24120001
    ctx->pc = 0x148184u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
label_148188:
    // 0x148188: 0xffbf0040
    ctx->pc = 0x148188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_14818c:
    // 0x14818c: 0x80882d
    ctx->pc = 0x14818cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_148190:
    // 0x148190: 0xffb00000
    ctx->pc = 0x148190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_148194:
    // 0x148194: 0x8e300040
    ctx->pc = 0x148194u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_148198:
    // 0x148198: 0x8e0600f0
    ctx->pc = 0x148198u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_14819c:
    // 0x14819c: 0x30c2003f
    ctx->pc = 0x14819cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 63));
label_1481a0:
    // 0x1481a0: 0x10400007
label_1481a4:
    if (ctx->pc == 0x1481A4u) {
        ctx->pc = 0x1481A4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x1481A8u;
        goto label_1481a8;
    }
    ctx->pc = 0x1481A0u;
    {
        const bool branch_taken_0x1481a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1481A4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x1481a0) {
            ctx->pc = 0x1481C0u;
            goto label_1481c0;
        }
    }
    ctx->pc = 0x1481A8u;
label_1481a8:
    // 0x1481a8: 0x3c050024
    ctx->pc = 0x1481a8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
label_1481ac:
    // 0x1481ac: 0x200202d
    ctx->pc = 0x1481acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1481b0:
    // 0x1481b0: 0xc05220e
label_1481b4:
    if (ctx->pc == 0x1481B4u) {
        ctx->pc = 0x1481B4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294959192));
        ctx->pc = 0x1481B8u;
        goto label_1481b8;
    }
    ctx->pc = 0x1481B0u;
    SET_GPR_U32(ctx, 31, 0x1481B8u);
    ctx->pc = 0x1481B4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294959192));
    ctx->pc = 0x148838u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00148838_0x148838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1481B8u; }
    }
    if (ctx->pc != 0x1481B8u) { return; }
    ctx->pc = 0x1481B8u;
label_1481b8:
    // 0x1481b8: 0x10000053
label_1481bc:
    if (ctx->pc == 0x1481BCu) {
        ctx->pc = 0x1481BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1481C0u;
        goto label_1481c0;
    }
    ctx->pc = 0x1481B8u;
    {
        const bool branch_taken_0x1481b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1481BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1481b8) {
            ctx->pc = 0x148308u;
            goto label_148308;
        }
    }
    ctx->pc = 0x1481C0u;
label_1481c0:
    // 0x1481c0: 0x8e0210a0
    ctx->pc = 0x1481c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4256)));
label_1481c4:
    // 0x1481c4: 0x10400009
label_1481c8:
    if (ctx->pc == 0x1481C8u) {
        ctx->pc = 0x1481C8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        ctx->pc = 0x1481CCu;
        goto label_1481cc;
    }
    ctx->pc = 0x1481C4u;
    {
        const bool branch_taken_0x1481c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1481C8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x1481c4) {
            ctx->pc = 0x1481ECu;
            goto label_1481ec;
        }
    }
    ctx->pc = 0x1481CCu;
label_1481cc:
    // 0x1481cc: 0xc045a12
label_1481d0:
    if (ctx->pc == 0x1481D0u) {
        ctx->pc = 0x1481D0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959256));
        ctx->pc = 0x1481D4u;
        goto label_1481d4;
    }
    ctx->pc = 0x1481CCu;
    SET_GPR_U32(ctx, 31, 0x1481D4u);
    ctx->pc = 0x1481D0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959256));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1481D4u; }
    }
    if (ctx->pc != 0x1481D4u) { return; }
    ctx->pc = 0x1481D4u;
label_1481d4:
    // 0x1481d4: 0x1000004c
label_1481d8:
    if (ctx->pc == 0x1481D8u) {
        ctx->pc = 0x1481D8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1481DCu;
        goto label_1481dc;
    }
    ctx->pc = 0x1481D4u;
    {
        const bool branch_taken_0x1481d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1481D8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1481d4) {
            ctx->pc = 0x148308u;
            goto label_148308;
        }
    }
    ctx->pc = 0x1481DCu;
label_1481dc:
    // 0x1481dc: 0xc045a12
label_1481e0:
    if (ctx->pc == 0x1481E0u) {
        ctx->pc = 0x1481E0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959320));
        ctx->pc = 0x1481E4u;
        goto label_1481e4;
    }
    ctx->pc = 0x1481DCu;
    SET_GPR_U32(ctx, 31, 0x1481E4u);
    ctx->pc = 0x1481E0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959320));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1481E4u; }
    }
    if (ctx->pc != 0x1481E4u) { return; }
    ctx->pc = 0x1481E4u;
label_1481e4:
    // 0x1481e4: 0x10000048
label_1481e8:
    if (ctx->pc == 0x1481E8u) {
        ctx->pc = 0x1481E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1481ECu;
        goto label_1481ec;
    }
    ctx->pc = 0x1481E4u;
    {
        const bool branch_taken_0x1481e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1481E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1481e4) {
            ctx->pc = 0x148308u;
            goto label_148308;
        }
    }
    ctx->pc = 0x1481ECu;
label_1481ec:
    // 0x1481ec: 0xae000838
    ctx->pc = 0x1481ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2104), GPR_U32(ctx, 0));
label_1481f0:
    // 0x1481f0: 0x2402ffff
    ctx->pc = 0x1481f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1481f4:
    // 0x1481f4: 0x0
    ctx->pc = 0x1481f4u;
    // NOP
label_1481f8:
    // 0x1481f8: 0x1262000f
label_1481fc:
    if (ctx->pc == 0x1481FCu) {
        ctx->pc = 0x1481FCu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), 5));
        ctx->pc = 0x148200u;
        goto label_148200;
    }
    ctx->pc = 0x1481F8u;
    {
        const bool branch_taken_0x1481f8 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x1481FCu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), 5));
        if (branch_taken_0x1481f8) {
            ctx->pc = 0x148238u;
            goto label_148238;
        }
    }
    ctx->pc = 0x148200u;
label_148200:
    // 0x148200: 0xc051710
label_148204:
    if (ctx->pc == 0x148204u) {
        ctx->pc = 0x148204u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x148208u;
        goto label_148208;
    }
    ctx->pc = 0x148200u;
    SET_GPR_U32(ctx, 31, 0x148208u);
    ctx->pc = 0x148204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145C40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00145C40_0x145c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148208u; }
    }
    if (ctx->pc != 0x148208u) { return; }
    ctx->pc = 0x148208u;
label_148208:
    // 0x148208: 0x40902d
    ctx->pc = 0x148208u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14820c:
    // 0x14820c: 0x640003e
label_148210:
    if (ctx->pc == 0x148210u) {
        ctx->pc = 0x148210u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x148214u;
        goto label_148214;
    }
    ctx->pc = 0x14820Cu;
    {
        const bool branch_taken_0x14820c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x148210u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x14820c) {
            ctx->pc = 0x148308u;
            goto label_148308;
        }
    }
    ctx->pc = 0x148214u;
label_148214:
    // 0x148214: 0x12400008
label_148218:
    if (ctx->pc == 0x148218u) {
        ctx->pc = 0x148218u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), 5));
        ctx->pc = 0x14821Cu;
        goto label_14821c;
    }
    ctx->pc = 0x148214u;
    {
        const bool branch_taken_0x148214 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x148218u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), 5));
        if (branch_taken_0x148214) {
            ctx->pc = 0x148238u;
            goto label_148238;
        }
    }
    ctx->pc = 0x14821Cu;
label_14821c:
    // 0x14821c: 0x8e03018c
    ctx->pc = 0x14821cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 396)));
label_148220:
    // 0x148220: 0x8e0200ec
    ctx->pc = 0x148220u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_148224:
    // 0x148224: 0x10620004
label_148228:
    if (ctx->pc == 0x148228u) {
        ctx->pc = 0x148228u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), 5));
        ctx->pc = 0x14822Cu;
        goto label_14822c;
    }
    ctx->pc = 0x148224u;
    {
        const bool branch_taken_0x148224 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x148228u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), 5));
        if (branch_taken_0x148224) {
            ctx->pc = 0x148238u;
            goto label_148238;
        }
    }
    ctx->pc = 0x14822Cu;
label_14822c:
    // 0x14822c: 0x8e020860
    ctx->pc = 0x14822cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2144)));
label_148230:
    // 0x148230: 0x1440fff3
label_148234:
    if (ctx->pc == 0x148234u) {
        ctx->pc = 0x148234u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), 5));
        ctx->pc = 0x148238u;
        goto label_148238;
    }
    ctx->pc = 0x148230u;
    {
        const bool branch_taken_0x148230 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x148234u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), 5));
        if (branch_taken_0x148230) {
            ctx->pc = 0x148200u;
            goto label_148200;
        }
    }
    ctx->pc = 0x148238u;
label_148238:
    // 0x148238: 0x10400029
label_14823c:
    if (ctx->pc == 0x14823Cu) {
        ctx->pc = 0x14823Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
        ctx->pc = 0x148240u;
        goto label_148240;
    }
    ctx->pc = 0x148238u;
    {
        const bool branch_taken_0x148238 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14823Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
        if (branch_taken_0x148238) {
            ctx->pc = 0x1482E0u;
            goto label_1482e0;
        }
    }
    ctx->pc = 0x148240u;
label_148240:
    // 0x148240: 0x121880
    ctx->pc = 0x148240u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 2));
label_148244:
    // 0x148244: 0x2442e100
    ctx->pc = 0x148244u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959360));
label_148248:
    // 0x148248: 0x621821
    ctx->pc = 0x148248u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_14824c:
    // 0x14824c: 0x8c640000
    ctx->pc = 0x14824cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_148250:
    // 0x148250: 0x800008
label_148254:
    if (ctx->pc == 0x148254u) {
        ctx->pc = 0x148258u;
        goto label_148258;
    }
    ctx->pc = 0x148250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x148170u: goto label_148170;
            case 0x148174u: goto label_148174;
            case 0x148178u: goto label_148178;
            case 0x14817Cu: goto label_14817c;
            case 0x148180u: goto label_148180;
            case 0x148184u: goto label_148184;
            case 0x148188u: goto label_148188;
            case 0x14818Cu: goto label_14818c;
            case 0x148190u: goto label_148190;
            case 0x148194u: goto label_148194;
            case 0x148198u: goto label_148198;
            case 0x14819Cu: goto label_14819c;
            case 0x1481A0u: goto label_1481a0;
            case 0x1481A4u: goto label_1481a4;
            case 0x1481A8u: goto label_1481a8;
            case 0x1481ACu: goto label_1481ac;
            case 0x1481B0u: goto label_1481b0;
            case 0x1481B4u: goto label_1481b4;
            case 0x1481B8u: goto label_1481b8;
            case 0x1481BCu: goto label_1481bc;
            case 0x1481C0u: goto label_1481c0;
            case 0x1481C4u: goto label_1481c4;
            case 0x1481C8u: goto label_1481c8;
            case 0x1481CCu: goto label_1481cc;
            case 0x1481D0u: goto label_1481d0;
            case 0x1481D4u: goto label_1481d4;
            case 0x1481D8u: goto label_1481d8;
            case 0x1481DCu: goto label_1481dc;
            case 0x1481E0u: goto label_1481e0;
            case 0x1481E4u: goto label_1481e4;
            case 0x1481E8u: goto label_1481e8;
            case 0x1481ECu: goto label_1481ec;
            case 0x1481F0u: goto label_1481f0;
            case 0x1481F4u: goto label_1481f4;
            case 0x1481F8u: goto label_1481f8;
            case 0x1481FCu: goto label_1481fc;
            case 0x148200u: goto label_148200;
            case 0x148204u: goto label_148204;
            case 0x148208u: goto label_148208;
            case 0x14820Cu: goto label_14820c;
            case 0x148210u: goto label_148210;
            case 0x148214u: goto label_148214;
            case 0x148218u: goto label_148218;
            case 0x14821Cu: goto label_14821c;
            case 0x148220u: goto label_148220;
            case 0x148224u: goto label_148224;
            case 0x148228u: goto label_148228;
            case 0x14822Cu: goto label_14822c;
            case 0x148230u: goto label_148230;
            case 0x148234u: goto label_148234;
            case 0x148238u: goto label_148238;
            case 0x14823Cu: goto label_14823c;
            case 0x148240u: goto label_148240;
            case 0x148244u: goto label_148244;
            case 0x148248u: goto label_148248;
            case 0x14824Cu: goto label_14824c;
            case 0x148250u: goto label_148250;
            case 0x148254u: goto label_148254;
            case 0x148258u: goto label_148258;
            case 0x14825Cu: goto label_14825c;
            case 0x148260u: goto label_148260;
            case 0x148264u: goto label_148264;
            case 0x148268u: goto label_148268;
            case 0x14826Cu: goto label_14826c;
            case 0x148270u: goto label_148270;
            case 0x148274u: goto label_148274;
            case 0x148278u: goto label_148278;
            case 0x14827Cu: goto label_14827c;
            case 0x148280u: goto label_148280;
            case 0x148284u: goto label_148284;
            case 0x148288u: goto label_148288;
            case 0x14828Cu: goto label_14828c;
            case 0x148290u: goto label_148290;
            case 0x148294u: goto label_148294;
            case 0x148298u: goto label_148298;
            case 0x14829Cu: goto label_14829c;
            case 0x1482A0u: goto label_1482a0;
            case 0x1482A4u: goto label_1482a4;
            case 0x1482A8u: goto label_1482a8;
            case 0x1482ACu: goto label_1482ac;
            case 0x1482B0u: goto label_1482b0;
            case 0x1482B4u: goto label_1482b4;
            case 0x1482B8u: goto label_1482b8;
            case 0x1482BCu: goto label_1482bc;
            case 0x1482C0u: goto label_1482c0;
            case 0x1482C4u: goto label_1482c4;
            case 0x1482C8u: goto label_1482c8;
            case 0x1482CCu: goto label_1482cc;
            case 0x1482D0u: goto label_1482d0;
            case 0x1482D4u: goto label_1482d4;
            case 0x1482D8u: goto label_1482d8;
            case 0x1482DCu: goto label_1482dc;
            case 0x1482E0u: goto label_1482e0;
            case 0x1482E4u: goto label_1482e4;
            case 0x1482E8u: goto label_1482e8;
            case 0x1482ECu: goto label_1482ec;
            case 0x1482F0u: goto label_1482f0;
            case 0x1482F4u: goto label_1482f4;
            case 0x1482F8u: goto label_1482f8;
            case 0x1482FCu: goto label_1482fc;
            case 0x148300u: goto label_148300;
            case 0x148304u: goto label_148304;
            case 0x148308u: goto label_148308;
            case 0x14830Cu: goto label_14830c;
            case 0x148310u: goto label_148310;
            case 0x148314u: goto label_148314;
            case 0x148318u: goto label_148318;
            case 0x14831Cu: goto label_14831c;
            case 0x148320u: goto label_148320;
            case 0x148324u: goto label_148324;
            default: break;
        }
        return;
    }
    ctx->pc = 0x148258u;
label_148258:
    // 0x148258: 0xc052182
label_14825c:
    if (ctx->pc == 0x14825Cu) {
        ctx->pc = 0x14825Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x148260u;
        goto label_148260;
    }
    ctx->pc = 0x148258u;
    SET_GPR_U32(ctx, 31, 0x148260u);
    ctx->pc = 0x14825Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x148608u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00148608_0x148608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148260u; }
    }
    if (ctx->pc != 0x148260u) { return; }
    ctx->pc = 0x148260u;
label_148260:
    // 0x148260: 0x24030001
    ctx->pc = 0x148260u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_148264:
    // 0x148264: 0x1000001e
label_148268:
    if (ctx->pc == 0x148268u) {
        ctx->pc = 0x148268u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x14826Cu;
        goto label_14826c;
    }
    ctx->pc = 0x148264u;
    {
        const bool branch_taken_0x148264 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x148268u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x148264) {
            ctx->pc = 0x1482E0u;
            goto label_1482e0;
        }
    }
    ctx->pc = 0x14826Cu;
label_14826c:
    // 0x14826c: 0xae0000c0
    ctx->pc = 0x14826cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_148270:
    // 0x148270: 0x220202d
    ctx->pc = 0x148270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_148274:
    // 0x148274: 0xae0000bc
    ctx->pc = 0x148274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_148278:
    // 0x148278: 0x282d
    ctx->pc = 0x148278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14827c:
    // 0x14827c: 0xae0000b8
    ctx->pc = 0x14827cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_148280:
    // 0x148280: 0xc052112
label_148284:
    if (ctx->pc == 0x148284u) {
        ctx->pc = 0x148284u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 172)));
        ctx->pc = 0x148288u;
        goto label_148288;
    }
    ctx->pc = 0x148280u;
    SET_GPR_U32(ctx, 31, 0x148288u);
    ctx->pc = 0x148284u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 172)));
    ctx->pc = 0x148448u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00148448_0x148448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148288u; }
    }
    if (ctx->pc != 0x148288u) { return; }
    ctx->pc = 0x148288u;
label_148288:
    // 0x148288: 0x8e0300b8
    ctx->pc = 0x148288u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_14828c:
    // 0x14828c: 0x40982d
    ctx->pc = 0x14828cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_148290:
    // 0x148290: 0x24630001
    ctx->pc = 0x148290u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_148294:
    // 0x148294: 0x10000012
label_148298:
    if (ctx->pc == 0x148298u) {
        ctx->pc = 0x148298u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
        ctx->pc = 0x14829Cu;
        goto label_14829c;
    }
    ctx->pc = 0x148294u;
    {
        const bool branch_taken_0x148294 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x148298u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
        if (branch_taken_0x148294) {
            ctx->pc = 0x1482E0u;
            goto label_1482e0;
        }
    }
    ctx->pc = 0x14829Cu;
label_14829c:
    // 0x14829c: 0x8e0500bc
    ctx->pc = 0x14829cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_1482a0:
    // 0x1482a0: 0x220202d
    ctx->pc = 0x1482a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1482a4:
    // 0x1482a4: 0xc052112
label_1482a8:
    if (ctx->pc == 0x1482A8u) {
        ctx->pc = 0x1482A8u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->pc = 0x1482ACu;
        goto label_1482ac;
    }
    ctx->pc = 0x1482A4u;
    SET_GPR_U32(ctx, 31, 0x1482ACu);
    ctx->pc = 0x1482A8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 176)));
    ctx->pc = 0x148448u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00148448_0x148448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1482ACu; }
    }
    if (ctx->pc != 0x1482ACu) { return; }
    ctx->pc = 0x1482ACu;
label_1482ac:
    // 0x1482ac: 0x8e0300bc
    ctx->pc = 0x1482acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_1482b0:
    // 0x1482b0: 0x40982d
    ctx->pc = 0x1482b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1482b4:
    // 0x1482b4: 0x24630001
    ctx->pc = 0x1482b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1482b8:
    // 0x1482b8: 0x10000009
label_1482bc:
    if (ctx->pc == 0x1482BCu) {
        ctx->pc = 0x1482BCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
        ctx->pc = 0x1482C0u;
        goto label_1482c0;
    }
    ctx->pc = 0x1482B8u;
    {
        const bool branch_taken_0x1482b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1482BCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
        if (branch_taken_0x1482b8) {
            ctx->pc = 0x1482E0u;
            goto label_1482e0;
        }
    }
    ctx->pc = 0x1482C0u;
label_1482c0:
    // 0x1482c0: 0x8e0500c0
    ctx->pc = 0x1482c0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_1482c4:
    // 0x1482c4: 0x220202d
    ctx->pc = 0x1482c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1482c8:
    // 0x1482c8: 0xc052112
label_1482cc:
    if (ctx->pc == 0x1482CCu) {
        ctx->pc = 0x1482CCu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 180)));
        ctx->pc = 0x1482D0u;
        goto label_1482d0;
    }
    ctx->pc = 0x1482C8u;
    SET_GPR_U32(ctx, 31, 0x1482D0u);
    ctx->pc = 0x1482CCu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 180)));
    ctx->pc = 0x148448u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00148448_0x148448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1482D0u; }
    }
    if (ctx->pc != 0x1482D0u) { return; }
    ctx->pc = 0x1482D0u;
label_1482d0:
    // 0x1482d0: 0x8e0300c0
    ctx->pc = 0x1482d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_1482d4:
    // 0x1482d4: 0x40982d
    ctx->pc = 0x1482d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1482d8:
    // 0x1482d8: 0x24630001
    ctx->pc = 0x1482d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1482dc:
    // 0x1482dc: 0xae0300c0
    ctx->pc = 0x1482dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
label_1482e0:
    // 0x1482e0: 0x8e0210a0
    ctx->pc = 0x1482e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4256)));
label_1482e4:
    // 0x1482e4: 0x1440ffbd
label_1482e8:
    if (ctx->pc == 0x1482E8u) {
        ctx->pc = 0x1482E8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        ctx->pc = 0x1482ECu;
        goto label_1482ec;
    }
    ctx->pc = 0x1482E4u;
    {
        const bool branch_taken_0x1482e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1482E8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x1482e4) {
            ctx->pc = 0x1481DCu;
            goto label_1481dc;
        }
    }
    ctx->pc = 0x1482ECu;
label_1482ec:
    // 0x1482ec: 0x8e020838
    ctx->pc = 0x1482ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2104)));
label_1482f0:
    // 0x1482f0: 0x14400005
label_1482f4:
    if (ctx->pc == 0x1482F4u) {
        ctx->pc = 0x1482F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1482F8u;
        goto label_1482f8;
    }
    ctx->pc = 0x1482F0u;
    {
        const bool branch_taken_0x1482f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1482F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1482f0) {
            ctx->pc = 0x148308u;
            goto label_148308;
        }
    }
    ctx->pc = 0x1482F8u;
label_1482f8:
    // 0x1482f8: 0x8e020000
    ctx->pc = 0x1482f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1482fc:
    // 0x1482fc: 0x1040ffbe
label_148300:
    if (ctx->pc == 0x148300u) {
        ctx->pc = 0x148300u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x148304u;
        goto label_148304;
    }
    ctx->pc = 0x1482FCu;
    {
        const bool branch_taken_0x1482fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x148300u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1482fc) {
            ctx->pc = 0x1481F8u;
            goto label_1481f8;
        }
    }
    ctx->pc = 0x148304u;
label_148304:
    // 0x148304: 0x24020001
    ctx->pc = 0x148304u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_148308:
    // 0x148308: 0xdfbf0040
    ctx->pc = 0x148308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_14830c:
    // 0x14830c: 0xdfb30030
    ctx->pc = 0x14830cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_148310:
    // 0x148310: 0xdfb20020
    ctx->pc = 0x148310u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_148314:
    // 0x148314: 0xdfb10010
    ctx->pc = 0x148314u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_148318:
    // 0x148318: 0xdfb00000
    ctx->pc = 0x148318u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14831c:
    // 0x14831c: 0x3e00008
label_148320:
    if (ctx->pc == 0x148320u) {
        ctx->pc = 0x148320u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x148324u;
        goto label_148324;
    }
    ctx->pc = 0x14831Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148320u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x148170u: goto label_148170;
            case 0x148174u: goto label_148174;
            case 0x148178u: goto label_148178;
            case 0x14817Cu: goto label_14817c;
            case 0x148180u: goto label_148180;
            case 0x148184u: goto label_148184;
            case 0x148188u: goto label_148188;
            case 0x14818Cu: goto label_14818c;
            case 0x148190u: goto label_148190;
            case 0x148194u: goto label_148194;
            case 0x148198u: goto label_148198;
            case 0x14819Cu: goto label_14819c;
            case 0x1481A0u: goto label_1481a0;
            case 0x1481A4u: goto label_1481a4;
            case 0x1481A8u: goto label_1481a8;
            case 0x1481ACu: goto label_1481ac;
            case 0x1481B0u: goto label_1481b0;
            case 0x1481B4u: goto label_1481b4;
            case 0x1481B8u: goto label_1481b8;
            case 0x1481BCu: goto label_1481bc;
            case 0x1481C0u: goto label_1481c0;
            case 0x1481C4u: goto label_1481c4;
            case 0x1481C8u: goto label_1481c8;
            case 0x1481CCu: goto label_1481cc;
            case 0x1481D0u: goto label_1481d0;
            case 0x1481D4u: goto label_1481d4;
            case 0x1481D8u: goto label_1481d8;
            case 0x1481DCu: goto label_1481dc;
            case 0x1481E0u: goto label_1481e0;
            case 0x1481E4u: goto label_1481e4;
            case 0x1481E8u: goto label_1481e8;
            case 0x1481ECu: goto label_1481ec;
            case 0x1481F0u: goto label_1481f0;
            case 0x1481F4u: goto label_1481f4;
            case 0x1481F8u: goto label_1481f8;
            case 0x1481FCu: goto label_1481fc;
            case 0x148200u: goto label_148200;
            case 0x148204u: goto label_148204;
            case 0x148208u: goto label_148208;
            case 0x14820Cu: goto label_14820c;
            case 0x148210u: goto label_148210;
            case 0x148214u: goto label_148214;
            case 0x148218u: goto label_148218;
            case 0x14821Cu: goto label_14821c;
            case 0x148220u: goto label_148220;
            case 0x148224u: goto label_148224;
            case 0x148228u: goto label_148228;
            case 0x14822Cu: goto label_14822c;
            case 0x148230u: goto label_148230;
            case 0x148234u: goto label_148234;
            case 0x148238u: goto label_148238;
            case 0x14823Cu: goto label_14823c;
            case 0x148240u: goto label_148240;
            case 0x148244u: goto label_148244;
            case 0x148248u: goto label_148248;
            case 0x14824Cu: goto label_14824c;
            case 0x148250u: goto label_148250;
            case 0x148254u: goto label_148254;
            case 0x148258u: goto label_148258;
            case 0x14825Cu: goto label_14825c;
            case 0x148260u: goto label_148260;
            case 0x148264u: goto label_148264;
            case 0x148268u: goto label_148268;
            case 0x14826Cu: goto label_14826c;
            case 0x148270u: goto label_148270;
            case 0x148274u: goto label_148274;
            case 0x148278u: goto label_148278;
            case 0x14827Cu: goto label_14827c;
            case 0x148280u: goto label_148280;
            case 0x148284u: goto label_148284;
            case 0x148288u: goto label_148288;
            case 0x14828Cu: goto label_14828c;
            case 0x148290u: goto label_148290;
            case 0x148294u: goto label_148294;
            case 0x148298u: goto label_148298;
            case 0x14829Cu: goto label_14829c;
            case 0x1482A0u: goto label_1482a0;
            case 0x1482A4u: goto label_1482a4;
            case 0x1482A8u: goto label_1482a8;
            case 0x1482ACu: goto label_1482ac;
            case 0x1482B0u: goto label_1482b0;
            case 0x1482B4u: goto label_1482b4;
            case 0x1482B8u: goto label_1482b8;
            case 0x1482BCu: goto label_1482bc;
            case 0x1482C0u: goto label_1482c0;
            case 0x1482C4u: goto label_1482c4;
            case 0x1482C8u: goto label_1482c8;
            case 0x1482CCu: goto label_1482cc;
            case 0x1482D0u: goto label_1482d0;
            case 0x1482D4u: goto label_1482d4;
            case 0x1482D8u: goto label_1482d8;
            case 0x1482DCu: goto label_1482dc;
            case 0x1482E0u: goto label_1482e0;
            case 0x1482E4u: goto label_1482e4;
            case 0x1482E8u: goto label_1482e8;
            case 0x1482ECu: goto label_1482ec;
            case 0x1482F0u: goto label_1482f0;
            case 0x1482F4u: goto label_1482f4;
            case 0x1482F8u: goto label_1482f8;
            case 0x1482FCu: goto label_1482fc;
            case 0x148300u: goto label_148300;
            case 0x148304u: goto label_148304;
            case 0x148308u: goto label_148308;
            case 0x14830Cu: goto label_14830c;
            case 0x148310u: goto label_148310;
            case 0x148314u: goto label_148314;
            case 0x148318u: goto label_148318;
            case 0x14831Cu: goto label_14831c;
            case 0x148320u: goto label_148320;
            case 0x148324u: goto label_148324;
            default: break;
        }
        return;
    }
    ctx->pc = 0x148324u;
label_148324:
    // 0x148324: 0x0
    ctx->pc = 0x148324u;
    // NOP
}
