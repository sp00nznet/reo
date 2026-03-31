#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011F228
// Address: 0x11f228 - 0x11f2d8
void sub_0011F228_0x11f228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11f228u;

label_11f228:
    // 0x11f228: 0x3c050026
    ctx->pc = 0x11f228u;
    SET_GPR_U32(ctx, 5, ((uint32_t)38 << 16));
label_11f22c:
    // 0x11f22c: 0x3c030026
    ctx->pc = 0x11f22cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
label_11f230:
    // 0x11f230: 0x24a21900
    ctx->pc = 0x11f230u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 6400));
label_11f234:
    // 0x11f234: 0x2404003f
    ctx->pc = 0x11f234u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 63));
label_11f238:
    // 0x11f238: 0xac621d00
    ctx->pc = 0x11f238u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7424), GPR_U32(ctx, 2));
label_11f23c:
    // 0x11f23c: 0x24430400
    ctx->pc = 0x11f23cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1024));
label_11f240:
    // 0x11f240: 0x244203f0
    ctx->pc = 0x11f240u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1008));
label_11f244:
    // 0x11f244: 0x0
    ctx->pc = 0x11f244u;
    // NOP
label_11f248:
    // 0x11f248: 0xac430000
    ctx->pc = 0x11f248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_11f24c:
    // 0x11f24c: 0x2484ffff
    ctx->pc = 0x11f24cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
label_11f250:
    // 0x11f250: 0x2442fff0
    ctx->pc = 0x11f250u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967280));
label_11f254:
    // 0x11f254: 0x2463fff0
    ctx->pc = 0x11f254u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967280));
label_11f258:
    // 0x11f258: 0x0
    ctx->pc = 0x11f258u;
    // NOP
label_11f25c:
    // 0x11f25c: 0x481fffa
label_11f260:
    if (ctx->pc == 0x11F260u) {
        ctx->pc = 0x11F264u;
        goto label_11f264;
    }
    ctx->pc = 0x11F25Cu;
    {
        const bool branch_taken_0x11f25c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x11f25c) {
            ctx->pc = 0x11F248u;
            goto label_11f248;
        }
    }
    ctx->pc = 0x11F264u;
label_11f264:
    // 0x11f264: 0x24a31900
    ctx->pc = 0x11f264u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 6400));
label_11f268:
    // 0x11f268: 0x102d
    ctx->pc = 0x11f268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f26c:
    // 0x11f26c: 0x3e00008
label_11f270:
    if (ctx->pc == 0x11F270u) {
        ctx->pc = 0x11F270u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 1008), GPR_U32(ctx, 0));
        ctx->pc = 0x11F274u;
        goto label_11f274;
    }
    ctx->pc = 0x11F26Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F270u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 1008), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F228u: goto label_11f228;
            case 0x11F22Cu: goto label_11f22c;
            case 0x11F230u: goto label_11f230;
            case 0x11F234u: goto label_11f234;
            case 0x11F238u: goto label_11f238;
            case 0x11F23Cu: goto label_11f23c;
            case 0x11F240u: goto label_11f240;
            case 0x11F244u: goto label_11f244;
            case 0x11F248u: goto label_11f248;
            case 0x11F24Cu: goto label_11f24c;
            case 0x11F250u: goto label_11f250;
            case 0x11F254u: goto label_11f254;
            case 0x11F258u: goto label_11f258;
            case 0x11F25Cu: goto label_11f25c;
            case 0x11F260u: goto label_11f260;
            case 0x11F264u: goto label_11f264;
            case 0x11F268u: goto label_11f268;
            case 0x11F26Cu: goto label_11f26c;
            case 0x11F270u: goto label_11f270;
            case 0x11F274u: goto label_11f274;
            case 0x11F278u: goto label_11f278;
            case 0x11F27Cu: goto label_11f27c;
            case 0x11F280u: goto label_11f280;
            case 0x11F284u: goto label_11f284;
            case 0x11F288u: goto label_11f288;
            case 0x11F28Cu: goto label_11f28c;
            case 0x11F290u: goto label_11f290;
            case 0x11F294u: goto label_11f294;
            case 0x11F298u: goto label_11f298;
            case 0x11F29Cu: goto label_11f29c;
            case 0x11F2A0u: goto label_11f2a0;
            case 0x11F2A4u: goto label_11f2a4;
            case 0x11F2A8u: goto label_11f2a8;
            case 0x11F2ACu: goto label_11f2ac;
            case 0x11F2B0u: goto label_11f2b0;
            case 0x11F2B4u: goto label_11f2b4;
            case 0x11F2B8u: goto label_11f2b8;
            case 0x11F2BCu: goto label_11f2bc;
            case 0x11F2C0u: goto label_11f2c0;
            case 0x11F2C4u: goto label_11f2c4;
            case 0x11F2C8u: goto label_11f2c8;
            case 0x11F2CCu: goto label_11f2cc;
            case 0x11F2D0u: goto label_11f2d0;
            case 0x11F2D4u: goto label_11f2d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11F274u;
label_11f274:
    // 0x11f274: 0x0
    ctx->pc = 0x11f274u;
    // NOP
label_11f278:
    // 0x11f278: 0x27bdffe0
    ctx->pc = 0x11f278u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_11f27c:
    // 0x11f27c: 0x308400fe
    ctx->pc = 0x11f27cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 254));
label_11f280:
    // 0x11f280: 0xffb00000
    ctx->pc = 0x11f280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_11f284:
    // 0x11f284: 0xe0802d
    ctx->pc = 0x11f284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_11f288:
    // 0x11f288: 0xffbf0010
    ctx->pc = 0x11f288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_11f28c:
    // 0x11f28c: 0x101900
    ctx->pc = 0x11f28cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 4));
label_11f290:
    // 0x11f290: 0x641825
    ctx->pc = 0x11f290u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_11f294:
    // 0x11f294: 0x8e020008
    ctx->pc = 0x11f294u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_11f298:
    // 0x11f298: 0x8e07000c
    ctx->pc = 0x11f298u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11f29c:
    // 0x11f29c: 0x40f809
label_11f2a0:
    if (ctx->pc == 0x11F2A0u) {
        ctx->pc = 0x11F2A0u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x11F2A4u;
        goto label_11f2a4;
    }
    ctx->pc = 0x11F29Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11F2A4u);
        ctx->pc = 0x11F2A0u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F228u: goto label_11f228;
            case 0x11F22Cu: goto label_11f22c;
            case 0x11F230u: goto label_11f230;
            case 0x11F234u: goto label_11f234;
            case 0x11F238u: goto label_11f238;
            case 0x11F23Cu: goto label_11f23c;
            case 0x11F240u: goto label_11f240;
            case 0x11F244u: goto label_11f244;
            case 0x11F248u: goto label_11f248;
            case 0x11F24Cu: goto label_11f24c;
            case 0x11F250u: goto label_11f250;
            case 0x11F254u: goto label_11f254;
            case 0x11F258u: goto label_11f258;
            case 0x11F25Cu: goto label_11f25c;
            case 0x11F260u: goto label_11f260;
            case 0x11F264u: goto label_11f264;
            case 0x11F268u: goto label_11f268;
            case 0x11F26Cu: goto label_11f26c;
            case 0x11F270u: goto label_11f270;
            case 0x11F274u: goto label_11f274;
            case 0x11F278u: goto label_11f278;
            case 0x11F27Cu: goto label_11f27c;
            case 0x11F280u: goto label_11f280;
            case 0x11F284u: goto label_11f284;
            case 0x11F288u: goto label_11f288;
            case 0x11F28Cu: goto label_11f28c;
            case 0x11F290u: goto label_11f290;
            case 0x11F294u: goto label_11f294;
            case 0x11F298u: goto label_11f298;
            case 0x11F29Cu: goto label_11f29c;
            case 0x11F2A0u: goto label_11f2a0;
            case 0x11F2A4u: goto label_11f2a4;
            case 0x11F2A8u: goto label_11f2a8;
            case 0x11F2ACu: goto label_11f2ac;
            case 0x11F2B0u: goto label_11f2b0;
            case 0x11F2B4u: goto label_11f2b4;
            case 0x11F2B8u: goto label_11f2b8;
            case 0x11F2BCu: goto label_11f2bc;
            case 0x11F2C0u: goto label_11f2c0;
            case 0x11F2C4u: goto label_11f2c4;
            case 0x11F2C8u: goto label_11f2c8;
            case 0x11F2CCu: goto label_11f2cc;
            case 0x11F2D0u: goto label_11f2d0;
            case 0x11F2D4u: goto label_11f2d4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11F2A4u; }
            if (ctx->pc != 0x11F2A4u) { return; }
        }
    }
    ctx->pc = 0x11F2A4u;
label_11f2a4:
    // 0x11f2a4: 0x14400008
label_11f2a8:
    if (ctx->pc == 0x11F2A8u) {
        ctx->pc = 0x11F2A8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x11F2ACu;
        goto label_11f2ac;
    }
    ctx->pc = 0x11F2A4u;
    {
        const bool branch_taken_0x11f2a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11F2A8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x11f2a4) {
            ctx->pc = 0x11F2C8u;
            goto label_11f2c8;
        }
    }
    ctx->pc = 0x11F2ACu;
label_11f2ac:
    // 0x11f2ac: 0x3c030026
    ctx->pc = 0x11f2acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
label_11f2b0:
    // 0x11f2b0: 0x2402ffff
    ctx->pc = 0x11f2b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_11f2b4:
    // 0x11f2b4: 0x8c641d00
    ctx->pc = 0x11f2b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 7424)));
label_11f2b8:
    // 0x11f2b8: 0xac701d00
    ctx->pc = 0x11f2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7424), GPR_U32(ctx, 16));
label_11f2bc:
    // 0x11f2bc: 0xae040000
    ctx->pc = 0x11f2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_11f2c0:
    // 0x11f2c0: 0xae000004
    ctx->pc = 0x11f2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_11f2c4:
    // 0x11f2c4: 0xdfbf0010
    ctx->pc = 0x11f2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11f2c8:
    // 0x11f2c8: 0xdfb00000
    ctx->pc = 0x11f2c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11f2cc:
    // 0x11f2cc: 0x3e00008
label_11f2d0:
    if (ctx->pc == 0x11F2D0u) {
        ctx->pc = 0x11F2D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x11F2D4u;
        goto label_11f2d4;
    }
    ctx->pc = 0x11F2CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F2D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F228u: goto label_11f228;
            case 0x11F22Cu: goto label_11f22c;
            case 0x11F230u: goto label_11f230;
            case 0x11F234u: goto label_11f234;
            case 0x11F238u: goto label_11f238;
            case 0x11F23Cu: goto label_11f23c;
            case 0x11F240u: goto label_11f240;
            case 0x11F244u: goto label_11f244;
            case 0x11F248u: goto label_11f248;
            case 0x11F24Cu: goto label_11f24c;
            case 0x11F250u: goto label_11f250;
            case 0x11F254u: goto label_11f254;
            case 0x11F258u: goto label_11f258;
            case 0x11F25Cu: goto label_11f25c;
            case 0x11F260u: goto label_11f260;
            case 0x11F264u: goto label_11f264;
            case 0x11F268u: goto label_11f268;
            case 0x11F26Cu: goto label_11f26c;
            case 0x11F270u: goto label_11f270;
            case 0x11F274u: goto label_11f274;
            case 0x11F278u: goto label_11f278;
            case 0x11F27Cu: goto label_11f27c;
            case 0x11F280u: goto label_11f280;
            case 0x11F284u: goto label_11f284;
            case 0x11F288u: goto label_11f288;
            case 0x11F28Cu: goto label_11f28c;
            case 0x11F290u: goto label_11f290;
            case 0x11F294u: goto label_11f294;
            case 0x11F298u: goto label_11f298;
            case 0x11F29Cu: goto label_11f29c;
            case 0x11F2A0u: goto label_11f2a0;
            case 0x11F2A4u: goto label_11f2a4;
            case 0x11F2A8u: goto label_11f2a8;
            case 0x11F2ACu: goto label_11f2ac;
            case 0x11F2B0u: goto label_11f2b0;
            case 0x11F2B4u: goto label_11f2b4;
            case 0x11F2B8u: goto label_11f2b8;
            case 0x11F2BCu: goto label_11f2bc;
            case 0x11F2C0u: goto label_11f2c0;
            case 0x11F2C4u: goto label_11f2c4;
            case 0x11F2C8u: goto label_11f2c8;
            case 0x11F2CCu: goto label_11f2cc;
            case 0x11F2D0u: goto label_11f2d0;
            case 0x11F2D4u: goto label_11f2d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11F2D4u;
label_11f2d4:
    // 0x11f2d4: 0x0
    ctx->pc = 0x11f2d4u;
    // NOP
}
