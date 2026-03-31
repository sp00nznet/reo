#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00166350
// Address: 0x166350 - 0x166428
void sub_00166350_0x166350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x166350u;

label_166350:
    // 0x166350: 0x27bdffe0
    ctx->pc = 0x166350u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_166354:
    // 0x166354: 0xffb10008
    ctx->pc = 0x166354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_166358:
    // 0x166358: 0xa0882d
    ctx->pc = 0x166358u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16635c:
    // 0x16635c: 0x24050006
    ctx->pc = 0x16635cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
label_166360:
    // 0x166360: 0xffb00000
    ctx->pc = 0x166360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_166364:
    // 0x166364: 0xffbf0010
    ctx->pc = 0x166364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_166368:
    // 0x166368: 0xc05d58a
label_16636c:
    if (ctx->pc == 0x16636Cu) {
        ctx->pc = 0x16636Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166370u;
        goto label_166370;
    }
    ctx->pc = 0x166368u;
    SET_GPR_U32(ctx, 31, 0x166370u);
    ctx->pc = 0x16636Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166370u; }
    }
    if (ctx->pc != 0x166370u) { return; }
    ctx->pc = 0x166370u;
label_166370:
    // 0x166370: 0x50400008
label_166374:
    if (ctx->pc == 0x166374u) {
        ctx->pc = 0x166374u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x166378u;
        goto label_166378;
    }
    ctx->pc = 0x166370u;
    {
        const bool branch_taken_0x166370 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x166370) {
            ctx->pc = 0x166374u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x166394u;
            goto label_166394;
        }
    }
    ctx->pc = 0x166378u;
label_166378:
    // 0x166378: 0x8e021c84
    ctx->pc = 0x166378u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7300)));
label_16637c:
    // 0x16637c: 0x8c420014
    ctx->pc = 0x16637cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_166380:
    // 0x166380: 0x10400003
label_166384:
    if (ctx->pc == 0x166384u) {
        ctx->pc = 0x166384u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166388u;
        goto label_166388;
    }
    ctx->pc = 0x166380u;
    {
        const bool branch_taken_0x166380 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x166384u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x166380) {
            ctx->pc = 0x166390u;
            goto label_166390;
        }
    }
    ctx->pc = 0x166388u;
label_166388:
    // 0x166388: 0x40f809
label_16638c:
    if (ctx->pc == 0x16638Cu) {
        ctx->pc = 0x16638Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166390u;
        goto label_166390;
    }
    ctx->pc = 0x166388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x166390u);
        ctx->pc = 0x16638Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166350u: goto label_166350;
            case 0x166354u: goto label_166354;
            case 0x166358u: goto label_166358;
            case 0x16635Cu: goto label_16635c;
            case 0x166360u: goto label_166360;
            case 0x166364u: goto label_166364;
            case 0x166368u: goto label_166368;
            case 0x16636Cu: goto label_16636c;
            case 0x166370u: goto label_166370;
            case 0x166374u: goto label_166374;
            case 0x166378u: goto label_166378;
            case 0x16637Cu: goto label_16637c;
            case 0x166380u: goto label_166380;
            case 0x166384u: goto label_166384;
            case 0x166388u: goto label_166388;
            case 0x16638Cu: goto label_16638c;
            case 0x166390u: goto label_166390;
            case 0x166394u: goto label_166394;
            case 0x166398u: goto label_166398;
            case 0x16639Cu: goto label_16639c;
            case 0x1663A0u: goto label_1663a0;
            case 0x1663A4u: goto label_1663a4;
            case 0x1663A8u: goto label_1663a8;
            case 0x1663ACu: goto label_1663ac;
            case 0x1663B0u: goto label_1663b0;
            case 0x1663B4u: goto label_1663b4;
            case 0x1663B8u: goto label_1663b8;
            case 0x1663BCu: goto label_1663bc;
            case 0x1663C0u: goto label_1663c0;
            case 0x1663C4u: goto label_1663c4;
            case 0x1663C8u: goto label_1663c8;
            case 0x1663CCu: goto label_1663cc;
            case 0x1663D0u: goto label_1663d0;
            case 0x1663D4u: goto label_1663d4;
            case 0x1663D8u: goto label_1663d8;
            case 0x1663DCu: goto label_1663dc;
            case 0x1663E0u: goto label_1663e0;
            case 0x1663E4u: goto label_1663e4;
            case 0x1663E8u: goto label_1663e8;
            case 0x1663ECu: goto label_1663ec;
            case 0x1663F0u: goto label_1663f0;
            case 0x1663F4u: goto label_1663f4;
            case 0x1663F8u: goto label_1663f8;
            case 0x1663FCu: goto label_1663fc;
            case 0x166400u: goto label_166400;
            case 0x166404u: goto label_166404;
            case 0x166408u: goto label_166408;
            case 0x16640Cu: goto label_16640c;
            case 0x166410u: goto label_166410;
            case 0x166414u: goto label_166414;
            case 0x166418u: goto label_166418;
            case 0x16641Cu: goto label_16641c;
            case 0x166420u: goto label_166420;
            case 0x166424u: goto label_166424;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x166390u; }
            if (ctx->pc != 0x166390u) { return; }
        }
    }
    ctx->pc = 0x166390u;
label_166390:
    // 0x166390: 0xdfb00000
    ctx->pc = 0x166390u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_166394:
    // 0x166394: 0xdfb10008
    ctx->pc = 0x166394u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_166398:
    // 0x166398: 0xdfbf0010
    ctx->pc = 0x166398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16639c:
    // 0x16639c: 0x3e00008
label_1663a0:
    if (ctx->pc == 0x1663A0u) {
        ctx->pc = 0x1663A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1663A4u;
        goto label_1663a4;
    }
    ctx->pc = 0x16639Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1663A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166350u: goto label_166350;
            case 0x166354u: goto label_166354;
            case 0x166358u: goto label_166358;
            case 0x16635Cu: goto label_16635c;
            case 0x166360u: goto label_166360;
            case 0x166364u: goto label_166364;
            case 0x166368u: goto label_166368;
            case 0x16636Cu: goto label_16636c;
            case 0x166370u: goto label_166370;
            case 0x166374u: goto label_166374;
            case 0x166378u: goto label_166378;
            case 0x16637Cu: goto label_16637c;
            case 0x166380u: goto label_166380;
            case 0x166384u: goto label_166384;
            case 0x166388u: goto label_166388;
            case 0x16638Cu: goto label_16638c;
            case 0x166390u: goto label_166390;
            case 0x166394u: goto label_166394;
            case 0x166398u: goto label_166398;
            case 0x16639Cu: goto label_16639c;
            case 0x1663A0u: goto label_1663a0;
            case 0x1663A4u: goto label_1663a4;
            case 0x1663A8u: goto label_1663a8;
            case 0x1663ACu: goto label_1663ac;
            case 0x1663B0u: goto label_1663b0;
            case 0x1663B4u: goto label_1663b4;
            case 0x1663B8u: goto label_1663b8;
            case 0x1663BCu: goto label_1663bc;
            case 0x1663C0u: goto label_1663c0;
            case 0x1663C4u: goto label_1663c4;
            case 0x1663C8u: goto label_1663c8;
            case 0x1663CCu: goto label_1663cc;
            case 0x1663D0u: goto label_1663d0;
            case 0x1663D4u: goto label_1663d4;
            case 0x1663D8u: goto label_1663d8;
            case 0x1663DCu: goto label_1663dc;
            case 0x1663E0u: goto label_1663e0;
            case 0x1663E4u: goto label_1663e4;
            case 0x1663E8u: goto label_1663e8;
            case 0x1663ECu: goto label_1663ec;
            case 0x1663F0u: goto label_1663f0;
            case 0x1663F4u: goto label_1663f4;
            case 0x1663F8u: goto label_1663f8;
            case 0x1663FCu: goto label_1663fc;
            case 0x166400u: goto label_166400;
            case 0x166404u: goto label_166404;
            case 0x166408u: goto label_166408;
            case 0x16640Cu: goto label_16640c;
            case 0x166410u: goto label_166410;
            case 0x166414u: goto label_166414;
            case 0x166418u: goto label_166418;
            case 0x16641Cu: goto label_16641c;
            case 0x166420u: goto label_166420;
            case 0x166424u: goto label_166424;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1663A4u;
label_1663a4:
    // 0x1663a4: 0x0
    ctx->pc = 0x1663a4u;
    // NOP
label_1663a8:
    // 0x1663a8: 0x3e00008
label_1663ac:
    if (ctx->pc == 0x1663ACu) {
        ctx->pc = 0x1663ACu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1663B0u;
        goto label_1663b0;
    }
    ctx->pc = 0x1663A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1663ACu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166350u: goto label_166350;
            case 0x166354u: goto label_166354;
            case 0x166358u: goto label_166358;
            case 0x16635Cu: goto label_16635c;
            case 0x166360u: goto label_166360;
            case 0x166364u: goto label_166364;
            case 0x166368u: goto label_166368;
            case 0x16636Cu: goto label_16636c;
            case 0x166370u: goto label_166370;
            case 0x166374u: goto label_166374;
            case 0x166378u: goto label_166378;
            case 0x16637Cu: goto label_16637c;
            case 0x166380u: goto label_166380;
            case 0x166384u: goto label_166384;
            case 0x166388u: goto label_166388;
            case 0x16638Cu: goto label_16638c;
            case 0x166390u: goto label_166390;
            case 0x166394u: goto label_166394;
            case 0x166398u: goto label_166398;
            case 0x16639Cu: goto label_16639c;
            case 0x1663A0u: goto label_1663a0;
            case 0x1663A4u: goto label_1663a4;
            case 0x1663A8u: goto label_1663a8;
            case 0x1663ACu: goto label_1663ac;
            case 0x1663B0u: goto label_1663b0;
            case 0x1663B4u: goto label_1663b4;
            case 0x1663B8u: goto label_1663b8;
            case 0x1663BCu: goto label_1663bc;
            case 0x1663C0u: goto label_1663c0;
            case 0x1663C4u: goto label_1663c4;
            case 0x1663C8u: goto label_1663c8;
            case 0x1663CCu: goto label_1663cc;
            case 0x1663D0u: goto label_1663d0;
            case 0x1663D4u: goto label_1663d4;
            case 0x1663D8u: goto label_1663d8;
            case 0x1663DCu: goto label_1663dc;
            case 0x1663E0u: goto label_1663e0;
            case 0x1663E4u: goto label_1663e4;
            case 0x1663E8u: goto label_1663e8;
            case 0x1663ECu: goto label_1663ec;
            case 0x1663F0u: goto label_1663f0;
            case 0x1663F4u: goto label_1663f4;
            case 0x1663F8u: goto label_1663f8;
            case 0x1663FCu: goto label_1663fc;
            case 0x166400u: goto label_166400;
            case 0x166404u: goto label_166404;
            case 0x166408u: goto label_166408;
            case 0x16640Cu: goto label_16640c;
            case 0x166410u: goto label_166410;
            case 0x166414u: goto label_166414;
            case 0x166418u: goto label_166418;
            case 0x16641Cu: goto label_16641c;
            case 0x166420u: goto label_166420;
            case 0x166424u: goto label_166424;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1663B0u;
label_1663b0:
    // 0x1663b0: 0x3e00008
label_1663b4:
    if (ctx->pc == 0x1663B4u) {
        ctx->pc = 0x1663B4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1663B8u;
        goto label_1663b8;
    }
    ctx->pc = 0x1663B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1663B4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166350u: goto label_166350;
            case 0x166354u: goto label_166354;
            case 0x166358u: goto label_166358;
            case 0x16635Cu: goto label_16635c;
            case 0x166360u: goto label_166360;
            case 0x166364u: goto label_166364;
            case 0x166368u: goto label_166368;
            case 0x16636Cu: goto label_16636c;
            case 0x166370u: goto label_166370;
            case 0x166374u: goto label_166374;
            case 0x166378u: goto label_166378;
            case 0x16637Cu: goto label_16637c;
            case 0x166380u: goto label_166380;
            case 0x166384u: goto label_166384;
            case 0x166388u: goto label_166388;
            case 0x16638Cu: goto label_16638c;
            case 0x166390u: goto label_166390;
            case 0x166394u: goto label_166394;
            case 0x166398u: goto label_166398;
            case 0x16639Cu: goto label_16639c;
            case 0x1663A0u: goto label_1663a0;
            case 0x1663A4u: goto label_1663a4;
            case 0x1663A8u: goto label_1663a8;
            case 0x1663ACu: goto label_1663ac;
            case 0x1663B0u: goto label_1663b0;
            case 0x1663B4u: goto label_1663b4;
            case 0x1663B8u: goto label_1663b8;
            case 0x1663BCu: goto label_1663bc;
            case 0x1663C0u: goto label_1663c0;
            case 0x1663C4u: goto label_1663c4;
            case 0x1663C8u: goto label_1663c8;
            case 0x1663CCu: goto label_1663cc;
            case 0x1663D0u: goto label_1663d0;
            case 0x1663D4u: goto label_1663d4;
            case 0x1663D8u: goto label_1663d8;
            case 0x1663DCu: goto label_1663dc;
            case 0x1663E0u: goto label_1663e0;
            case 0x1663E4u: goto label_1663e4;
            case 0x1663E8u: goto label_1663e8;
            case 0x1663ECu: goto label_1663ec;
            case 0x1663F0u: goto label_1663f0;
            case 0x1663F4u: goto label_1663f4;
            case 0x1663F8u: goto label_1663f8;
            case 0x1663FCu: goto label_1663fc;
            case 0x166400u: goto label_166400;
            case 0x166404u: goto label_166404;
            case 0x166408u: goto label_166408;
            case 0x16640Cu: goto label_16640c;
            case 0x166410u: goto label_166410;
            case 0x166414u: goto label_166414;
            case 0x166418u: goto label_166418;
            case 0x16641Cu: goto label_16641c;
            case 0x166420u: goto label_166420;
            case 0x166424u: goto label_166424;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1663B8u;
label_1663b8:
    // 0x1663b8: 0x27bdfff0
    ctx->pc = 0x1663b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1663bc:
    // 0x1663bc: 0x24050006
    ctx->pc = 0x1663bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
label_1663c0:
    // 0x1663c0: 0xffb00000
    ctx->pc = 0x1663c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1663c4:
    // 0x1663c4: 0xffbf0008
    ctx->pc = 0x1663c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1663c8:
    // 0x1663c8: 0xc05d58a
label_1663cc:
    if (ctx->pc == 0x1663CCu) {
        ctx->pc = 0x1663CCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1663D0u;
        goto label_1663d0;
    }
    ctx->pc = 0x1663C8u;
    SET_GPR_U32(ctx, 31, 0x1663D0u);
    ctx->pc = 0x1663CCu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1663D0u; }
    }
    if (ctx->pc != 0x1663D0u) { return; }
    ctx->pc = 0x1663D0u;
label_1663d0:
    // 0x1663d0: 0x10400005
label_1663d4:
    if (ctx->pc == 0x1663D4u) {
        ctx->pc = 0x1663D4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1663D8u;
        goto label_1663d8;
    }
    ctx->pc = 0x1663D0u;
    {
        const bool branch_taken_0x1663d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1663D4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1663d0) {
            ctx->pc = 0x1663E8u;
            goto label_1663e8;
        }
    }
    ctx->pc = 0x1663D8u;
label_1663d8:
    // 0x1663d8: 0xdfb00000
    ctx->pc = 0x1663d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1663dc:
    // 0x1663dc: 0xdfbf0008
    ctx->pc = 0x1663dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1663e0:
    // 0x1663e0: 0x80598fe
label_1663e4:
    if (ctx->pc == 0x1663E4u) {
        ctx->pc = 0x1663E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1663E8u;
        goto label_1663e8;
    }
    ctx->pc = 0x1663E0u;
    ctx->pc = 0x1663E4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1663F8u;
    goto label_1663f8;
    ctx->pc = 0x1663E8u;
label_1663e8:
    // 0x1663e8: 0xdfb00000
    ctx->pc = 0x1663e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1663ec:
    // 0x1663ec: 0xdfbf0008
    ctx->pc = 0x1663ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1663f0:
    // 0x1663f0: 0x3e00008
label_1663f4:
    if (ctx->pc == 0x1663F4u) {
        ctx->pc = 0x1663F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1663F8u;
        goto label_1663f8;
    }
    ctx->pc = 0x1663F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1663F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166350u: goto label_166350;
            case 0x166354u: goto label_166354;
            case 0x166358u: goto label_166358;
            case 0x16635Cu: goto label_16635c;
            case 0x166360u: goto label_166360;
            case 0x166364u: goto label_166364;
            case 0x166368u: goto label_166368;
            case 0x16636Cu: goto label_16636c;
            case 0x166370u: goto label_166370;
            case 0x166374u: goto label_166374;
            case 0x166378u: goto label_166378;
            case 0x16637Cu: goto label_16637c;
            case 0x166380u: goto label_166380;
            case 0x166384u: goto label_166384;
            case 0x166388u: goto label_166388;
            case 0x16638Cu: goto label_16638c;
            case 0x166390u: goto label_166390;
            case 0x166394u: goto label_166394;
            case 0x166398u: goto label_166398;
            case 0x16639Cu: goto label_16639c;
            case 0x1663A0u: goto label_1663a0;
            case 0x1663A4u: goto label_1663a4;
            case 0x1663A8u: goto label_1663a8;
            case 0x1663ACu: goto label_1663ac;
            case 0x1663B0u: goto label_1663b0;
            case 0x1663B4u: goto label_1663b4;
            case 0x1663B8u: goto label_1663b8;
            case 0x1663BCu: goto label_1663bc;
            case 0x1663C0u: goto label_1663c0;
            case 0x1663C4u: goto label_1663c4;
            case 0x1663C8u: goto label_1663c8;
            case 0x1663CCu: goto label_1663cc;
            case 0x1663D0u: goto label_1663d0;
            case 0x1663D4u: goto label_1663d4;
            case 0x1663D8u: goto label_1663d8;
            case 0x1663DCu: goto label_1663dc;
            case 0x1663E0u: goto label_1663e0;
            case 0x1663E4u: goto label_1663e4;
            case 0x1663E8u: goto label_1663e8;
            case 0x1663ECu: goto label_1663ec;
            case 0x1663F0u: goto label_1663f0;
            case 0x1663F4u: goto label_1663f4;
            case 0x1663F8u: goto label_1663f8;
            case 0x1663FCu: goto label_1663fc;
            case 0x166400u: goto label_166400;
            case 0x166404u: goto label_166404;
            case 0x166408u: goto label_166408;
            case 0x16640Cu: goto label_16640c;
            case 0x166410u: goto label_166410;
            case 0x166414u: goto label_166414;
            case 0x166418u: goto label_166418;
            case 0x16641Cu: goto label_16641c;
            case 0x166420u: goto label_166420;
            case 0x166424u: goto label_166424;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1663F8u;
label_1663f8:
    // 0x1663f8: 0x27bdfff0
    ctx->pc = 0x1663f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1663fc:
    // 0x1663fc: 0xffb00000
    ctx->pc = 0x1663fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_166400:
    // 0x166400: 0xffbf0008
    ctx->pc = 0x166400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_166404:
    // 0x166404: 0xc05990a
label_166408:
    if (ctx->pc == 0x166408u) {
        ctx->pc = 0x166408u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16640Cu;
        goto label_16640c;
    }
    ctx->pc = 0x166404u;
    SET_GPR_U32(ctx, 31, 0x16640Cu);
    ctx->pc = 0x166408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x166428u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00166428_0x166428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16640Cu; }
    }
    if (ctx->pc != 0x16640Cu) { return; }
    ctx->pc = 0x16640Cu;
label_16640c:
    // 0x16640c: 0xc059926
label_166410:
    if (ctx->pc == 0x166410u) {
        ctx->pc = 0x166410u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166414u;
        goto label_166414;
    }
    ctx->pc = 0x16640Cu;
    SET_GPR_U32(ctx, 31, 0x166414u);
    ctx->pc = 0x166410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x166498u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00166498_0x166498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166414u; }
    }
    if (ctx->pc != 0x166414u) { return; }
    ctx->pc = 0x166414u;
label_166414:
    // 0x166414: 0x102d
    ctx->pc = 0x166414u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166418:
    // 0x166418: 0xdfb00000
    ctx->pc = 0x166418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16641c:
    // 0x16641c: 0xdfbf0008
    ctx->pc = 0x16641cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_166420:
    // 0x166420: 0x3e00008
label_166424:
    if (ctx->pc == 0x166424u) {
        ctx->pc = 0x166424u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x166428u;
        goto label_fallthrough_0x166420;
    }
    ctx->pc = 0x166420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166424u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166350u: goto label_166350;
            case 0x166354u: goto label_166354;
            case 0x166358u: goto label_166358;
            case 0x16635Cu: goto label_16635c;
            case 0x166360u: goto label_166360;
            case 0x166364u: goto label_166364;
            case 0x166368u: goto label_166368;
            case 0x16636Cu: goto label_16636c;
            case 0x166370u: goto label_166370;
            case 0x166374u: goto label_166374;
            case 0x166378u: goto label_166378;
            case 0x16637Cu: goto label_16637c;
            case 0x166380u: goto label_166380;
            case 0x166384u: goto label_166384;
            case 0x166388u: goto label_166388;
            case 0x16638Cu: goto label_16638c;
            case 0x166390u: goto label_166390;
            case 0x166394u: goto label_166394;
            case 0x166398u: goto label_166398;
            case 0x16639Cu: goto label_16639c;
            case 0x1663A0u: goto label_1663a0;
            case 0x1663A4u: goto label_1663a4;
            case 0x1663A8u: goto label_1663a8;
            case 0x1663ACu: goto label_1663ac;
            case 0x1663B0u: goto label_1663b0;
            case 0x1663B4u: goto label_1663b4;
            case 0x1663B8u: goto label_1663b8;
            case 0x1663BCu: goto label_1663bc;
            case 0x1663C0u: goto label_1663c0;
            case 0x1663C4u: goto label_1663c4;
            case 0x1663C8u: goto label_1663c8;
            case 0x1663CCu: goto label_1663cc;
            case 0x1663D0u: goto label_1663d0;
            case 0x1663D4u: goto label_1663d4;
            case 0x1663D8u: goto label_1663d8;
            case 0x1663DCu: goto label_1663dc;
            case 0x1663E0u: goto label_1663e0;
            case 0x1663E4u: goto label_1663e4;
            case 0x1663E8u: goto label_1663e8;
            case 0x1663ECu: goto label_1663ec;
            case 0x1663F0u: goto label_1663f0;
            case 0x1663F4u: goto label_1663f4;
            case 0x1663F8u: goto label_1663f8;
            case 0x1663FCu: goto label_1663fc;
            case 0x166400u: goto label_166400;
            case 0x166404u: goto label_166404;
            case 0x166408u: goto label_166408;
            case 0x16640Cu: goto label_16640c;
            case 0x166410u: goto label_166410;
            case 0x166414u: goto label_166414;
            case 0x166418u: goto label_166418;
            case 0x16641Cu: goto label_16641c;
            case 0x166420u: goto label_166420;
            case 0x166424u: goto label_166424;
            default: break;
        }
        return;
    }
label_fallthrough_0x166420:
    ctx->pc = 0x166428u;
}
