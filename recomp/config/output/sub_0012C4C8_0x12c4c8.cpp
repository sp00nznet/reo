#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012C4C8
// Address: 0x12c4c8 - 0x12c630
void sub_0012C4C8_0x12c4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12c4c8u;

label_12c4c8:
    // 0x12c4c8: 0x27bdfff0
    ctx->pc = 0x12c4c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_12c4cc:
    // 0x12c4cc: 0xffbf0000
    ctx->pc = 0x12c4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_12c4d0:
    // 0x12c4d0: 0xdfbf0000
    ctx->pc = 0x12c4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12c4d4:
    // 0x12c4d4: 0x804f6a2
label_12c4d8:
    if (ctx->pc == 0x12C4D8u) {
        ctx->pc = 0x12C4D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12C4DCu;
        goto label_12c4dc;
    }
    ctx->pc = 0x12C4D4u;
    ctx->pc = 0x12C4D8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13DA88u;
    entry_13da88_0x13db48(rdram, ctx, runtime); return;
    ctx->pc = 0x12C4DCu;
label_12c4dc:
    // 0x12c4dc: 0x0
    ctx->pc = 0x12c4dcu;
    // NOP
label_12c4e0:
    // 0x12c4e0: 0x27bdfff0
    ctx->pc = 0x12c4e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_12c4e4:
    // 0x12c4e4: 0xffbf0000
    ctx->pc = 0x12c4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_12c4e8:
    // 0x12c4e8: 0x8c82000c
    ctx->pc = 0x12c4e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_12c4ec:
    // 0x12c4ec: 0x52080
    ctx->pc = 0x12c4ecu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 2));
label_12c4f0:
    // 0x12c4f0: 0x441021
    ctx->pc = 0x12c4f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_12c4f4:
    // 0x12c4f4: 0x8c430008
    ctx->pc = 0x12c4f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_12c4f8:
    // 0x12c4f8: 0x8c640008
    ctx->pc = 0x12c4f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_12c4fc:
    // 0x12c4fc: 0x8c860000
    ctx->pc = 0x12c4fcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12c500:
    // 0x12c500: 0x8cc20024
    ctx->pc = 0x12c500u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_12c504:
    // 0x12c504: 0x40f809
label_12c508:
    if (ctx->pc == 0x12C508u) {
        ctx->pc = 0x12C508u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x12C50Cu;
        goto label_12c50c;
    }
    ctx->pc = 0x12C504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12C50Cu);
        ctx->pc = 0x12C508u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12C4C8u: goto label_12c4c8;
            case 0x12C4CCu: goto label_12c4cc;
            case 0x12C4D0u: goto label_12c4d0;
            case 0x12C4D4u: goto label_12c4d4;
            case 0x12C4D8u: goto label_12c4d8;
            case 0x12C4DCu: goto label_12c4dc;
            case 0x12C4E0u: goto label_12c4e0;
            case 0x12C4E4u: goto label_12c4e4;
            case 0x12C4E8u: goto label_12c4e8;
            case 0x12C4ECu: goto label_12c4ec;
            case 0x12C4F0u: goto label_12c4f0;
            case 0x12C4F4u: goto label_12c4f4;
            case 0x12C4F8u: goto label_12c4f8;
            case 0x12C4FCu: goto label_12c4fc;
            case 0x12C500u: goto label_12c500;
            case 0x12C504u: goto label_12c504;
            case 0x12C508u: goto label_12c508;
            case 0x12C50Cu: goto label_12c50c;
            case 0x12C510u: goto label_12c510;
            case 0x12C514u: goto label_12c514;
            case 0x12C518u: goto label_12c518;
            case 0x12C51Cu: goto label_12c51c;
            case 0x12C520u: goto label_12c520;
            case 0x12C524u: goto label_12c524;
            case 0x12C528u: goto label_12c528;
            case 0x12C52Cu: goto label_12c52c;
            case 0x12C530u: goto label_12c530;
            case 0x12C534u: goto label_12c534;
            case 0x12C538u: goto label_12c538;
            case 0x12C53Cu: goto label_12c53c;
            case 0x12C540u: goto label_12c540;
            case 0x12C544u: goto label_12c544;
            case 0x12C548u: goto label_12c548;
            case 0x12C54Cu: goto label_12c54c;
            case 0x12C550u: goto label_12c550;
            case 0x12C554u: goto label_12c554;
            case 0x12C558u: goto label_12c558;
            case 0x12C55Cu: goto label_12c55c;
            case 0x12C560u: goto label_12c560;
            case 0x12C564u: goto label_12c564;
            case 0x12C568u: goto label_12c568;
            case 0x12C56Cu: goto label_12c56c;
            case 0x12C570u: goto label_12c570;
            case 0x12C574u: goto label_12c574;
            case 0x12C578u: goto label_12c578;
            case 0x12C57Cu: goto label_12c57c;
            case 0x12C580u: goto label_12c580;
            case 0x12C584u: goto label_12c584;
            case 0x12C588u: goto label_12c588;
            case 0x12C58Cu: goto label_12c58c;
            case 0x12C590u: goto label_12c590;
            case 0x12C594u: goto label_12c594;
            case 0x12C598u: goto label_12c598;
            case 0x12C59Cu: goto label_12c59c;
            case 0x12C5A0u: goto label_12c5a0;
            case 0x12C5A4u: goto label_12c5a4;
            case 0x12C5A8u: goto label_12c5a8;
            case 0x12C5ACu: goto label_12c5ac;
            case 0x12C5B0u: goto label_12c5b0;
            case 0x12C5B4u: goto label_12c5b4;
            case 0x12C5B8u: goto label_12c5b8;
            case 0x12C5BCu: goto label_12c5bc;
            case 0x12C5C0u: goto label_12c5c0;
            case 0x12C5C4u: goto label_12c5c4;
            case 0x12C5C8u: goto label_12c5c8;
            case 0x12C5CCu: goto label_12c5cc;
            case 0x12C5D0u: goto label_12c5d0;
            case 0x12C5D4u: goto label_12c5d4;
            case 0x12C5D8u: goto label_12c5d8;
            case 0x12C5DCu: goto label_12c5dc;
            case 0x12C5E0u: goto label_12c5e0;
            case 0x12C5E4u: goto label_12c5e4;
            case 0x12C5E8u: goto label_12c5e8;
            case 0x12C5ECu: goto label_12c5ec;
            case 0x12C5F0u: goto label_12c5f0;
            case 0x12C5F4u: goto label_12c5f4;
            case 0x12C5F8u: goto label_12c5f8;
            case 0x12C5FCu: goto label_12c5fc;
            case 0x12C600u: goto label_12c600;
            case 0x12C604u: goto label_12c604;
            case 0x12C608u: goto label_12c608;
            case 0x12C60Cu: goto label_12c60c;
            case 0x12C610u: goto label_12c610;
            case 0x12C614u: goto label_12c614;
            case 0x12C618u: goto label_12c618;
            case 0x12C61Cu: goto label_12c61c;
            case 0x12C620u: goto label_12c620;
            case 0x12C624u: goto label_12c624;
            case 0x12C628u: goto label_12c628;
            case 0x12C62Cu: goto label_12c62c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12C50Cu; }
            if (ctx->pc != 0x12C50Cu) { return; }
        }
    }
    ctx->pc = 0x12C50Cu;
label_12c50c:
    // 0x12c50c: 0xdfbf0000
    ctx->pc = 0x12c50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12c510:
    // 0x12c510: 0x21042
    ctx->pc = 0x12c510u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
label_12c514:
    // 0x12c514: 0x3e00008
label_12c518:
    if (ctx->pc == 0x12C518u) {
        ctx->pc = 0x12C518u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12C51Cu;
        goto label_12c51c;
    }
    ctx->pc = 0x12C514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C518u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12C4C8u: goto label_12c4c8;
            case 0x12C4CCu: goto label_12c4cc;
            case 0x12C4D0u: goto label_12c4d0;
            case 0x12C4D4u: goto label_12c4d4;
            case 0x12C4D8u: goto label_12c4d8;
            case 0x12C4DCu: goto label_12c4dc;
            case 0x12C4E0u: goto label_12c4e0;
            case 0x12C4E4u: goto label_12c4e4;
            case 0x12C4E8u: goto label_12c4e8;
            case 0x12C4ECu: goto label_12c4ec;
            case 0x12C4F0u: goto label_12c4f0;
            case 0x12C4F4u: goto label_12c4f4;
            case 0x12C4F8u: goto label_12c4f8;
            case 0x12C4FCu: goto label_12c4fc;
            case 0x12C500u: goto label_12c500;
            case 0x12C504u: goto label_12c504;
            case 0x12C508u: goto label_12c508;
            case 0x12C50Cu: goto label_12c50c;
            case 0x12C510u: goto label_12c510;
            case 0x12C514u: goto label_12c514;
            case 0x12C518u: goto label_12c518;
            case 0x12C51Cu: goto label_12c51c;
            case 0x12C520u: goto label_12c520;
            case 0x12C524u: goto label_12c524;
            case 0x12C528u: goto label_12c528;
            case 0x12C52Cu: goto label_12c52c;
            case 0x12C530u: goto label_12c530;
            case 0x12C534u: goto label_12c534;
            case 0x12C538u: goto label_12c538;
            case 0x12C53Cu: goto label_12c53c;
            case 0x12C540u: goto label_12c540;
            case 0x12C544u: goto label_12c544;
            case 0x12C548u: goto label_12c548;
            case 0x12C54Cu: goto label_12c54c;
            case 0x12C550u: goto label_12c550;
            case 0x12C554u: goto label_12c554;
            case 0x12C558u: goto label_12c558;
            case 0x12C55Cu: goto label_12c55c;
            case 0x12C560u: goto label_12c560;
            case 0x12C564u: goto label_12c564;
            case 0x12C568u: goto label_12c568;
            case 0x12C56Cu: goto label_12c56c;
            case 0x12C570u: goto label_12c570;
            case 0x12C574u: goto label_12c574;
            case 0x12C578u: goto label_12c578;
            case 0x12C57Cu: goto label_12c57c;
            case 0x12C580u: goto label_12c580;
            case 0x12C584u: goto label_12c584;
            case 0x12C588u: goto label_12c588;
            case 0x12C58Cu: goto label_12c58c;
            case 0x12C590u: goto label_12c590;
            case 0x12C594u: goto label_12c594;
            case 0x12C598u: goto label_12c598;
            case 0x12C59Cu: goto label_12c59c;
            case 0x12C5A0u: goto label_12c5a0;
            case 0x12C5A4u: goto label_12c5a4;
            case 0x12C5A8u: goto label_12c5a8;
            case 0x12C5ACu: goto label_12c5ac;
            case 0x12C5B0u: goto label_12c5b0;
            case 0x12C5B4u: goto label_12c5b4;
            case 0x12C5B8u: goto label_12c5b8;
            case 0x12C5BCu: goto label_12c5bc;
            case 0x12C5C0u: goto label_12c5c0;
            case 0x12C5C4u: goto label_12c5c4;
            case 0x12C5C8u: goto label_12c5c8;
            case 0x12C5CCu: goto label_12c5cc;
            case 0x12C5D0u: goto label_12c5d0;
            case 0x12C5D4u: goto label_12c5d4;
            case 0x12C5D8u: goto label_12c5d8;
            case 0x12C5DCu: goto label_12c5dc;
            case 0x12C5E0u: goto label_12c5e0;
            case 0x12C5E4u: goto label_12c5e4;
            case 0x12C5E8u: goto label_12c5e8;
            case 0x12C5ECu: goto label_12c5ec;
            case 0x12C5F0u: goto label_12c5f0;
            case 0x12C5F4u: goto label_12c5f4;
            case 0x12C5F8u: goto label_12c5f8;
            case 0x12C5FCu: goto label_12c5fc;
            case 0x12C600u: goto label_12c600;
            case 0x12C604u: goto label_12c604;
            case 0x12C608u: goto label_12c608;
            case 0x12C60Cu: goto label_12c60c;
            case 0x12C610u: goto label_12c610;
            case 0x12C614u: goto label_12c614;
            case 0x12C618u: goto label_12c618;
            case 0x12C61Cu: goto label_12c61c;
            case 0x12C620u: goto label_12c620;
            case 0x12C624u: goto label_12c624;
            case 0x12C628u: goto label_12c628;
            case 0x12C62Cu: goto label_12c62c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12C51Cu;
label_12c51c:
    // 0x12c51c: 0x0
    ctx->pc = 0x12c51cu;
    // NOP
label_12c520:
    // 0x12c520: 0x27bdfff0
    ctx->pc = 0x12c520u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_12c524:
    // 0x12c524: 0xffbf0000
    ctx->pc = 0x12c524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_12c528:
    // 0x12c528: 0x8c82000c
    ctx->pc = 0x12c528u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_12c52c:
    // 0x12c52c: 0x52080
    ctx->pc = 0x12c52cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 2));
label_12c530:
    // 0x12c530: 0x441021
    ctx->pc = 0x12c530u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_12c534:
    // 0x12c534: 0x8c430008
    ctx->pc = 0x12c534u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_12c538:
    // 0x12c538: 0x8c640008
    ctx->pc = 0x12c538u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_12c53c:
    // 0x12c53c: 0x8c860000
    ctx->pc = 0x12c53cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12c540:
    // 0x12c540: 0x8cc20024
    ctx->pc = 0x12c540u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_12c544:
    // 0x12c544: 0x40f809
label_12c548:
    if (ctx->pc == 0x12C548u) {
        ctx->pc = 0x12C548u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12C54Cu;
        goto label_12c54c;
    }
    ctx->pc = 0x12C544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12C54Cu);
        ctx->pc = 0x12C548u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12C4C8u: goto label_12c4c8;
            case 0x12C4CCu: goto label_12c4cc;
            case 0x12C4D0u: goto label_12c4d0;
            case 0x12C4D4u: goto label_12c4d4;
            case 0x12C4D8u: goto label_12c4d8;
            case 0x12C4DCu: goto label_12c4dc;
            case 0x12C4E0u: goto label_12c4e0;
            case 0x12C4E4u: goto label_12c4e4;
            case 0x12C4E8u: goto label_12c4e8;
            case 0x12C4ECu: goto label_12c4ec;
            case 0x12C4F0u: goto label_12c4f0;
            case 0x12C4F4u: goto label_12c4f4;
            case 0x12C4F8u: goto label_12c4f8;
            case 0x12C4FCu: goto label_12c4fc;
            case 0x12C500u: goto label_12c500;
            case 0x12C504u: goto label_12c504;
            case 0x12C508u: goto label_12c508;
            case 0x12C50Cu: goto label_12c50c;
            case 0x12C510u: goto label_12c510;
            case 0x12C514u: goto label_12c514;
            case 0x12C518u: goto label_12c518;
            case 0x12C51Cu: goto label_12c51c;
            case 0x12C520u: goto label_12c520;
            case 0x12C524u: goto label_12c524;
            case 0x12C528u: goto label_12c528;
            case 0x12C52Cu: goto label_12c52c;
            case 0x12C530u: goto label_12c530;
            case 0x12C534u: goto label_12c534;
            case 0x12C538u: goto label_12c538;
            case 0x12C53Cu: goto label_12c53c;
            case 0x12C540u: goto label_12c540;
            case 0x12C544u: goto label_12c544;
            case 0x12C548u: goto label_12c548;
            case 0x12C54Cu: goto label_12c54c;
            case 0x12C550u: goto label_12c550;
            case 0x12C554u: goto label_12c554;
            case 0x12C558u: goto label_12c558;
            case 0x12C55Cu: goto label_12c55c;
            case 0x12C560u: goto label_12c560;
            case 0x12C564u: goto label_12c564;
            case 0x12C568u: goto label_12c568;
            case 0x12C56Cu: goto label_12c56c;
            case 0x12C570u: goto label_12c570;
            case 0x12C574u: goto label_12c574;
            case 0x12C578u: goto label_12c578;
            case 0x12C57Cu: goto label_12c57c;
            case 0x12C580u: goto label_12c580;
            case 0x12C584u: goto label_12c584;
            case 0x12C588u: goto label_12c588;
            case 0x12C58Cu: goto label_12c58c;
            case 0x12C590u: goto label_12c590;
            case 0x12C594u: goto label_12c594;
            case 0x12C598u: goto label_12c598;
            case 0x12C59Cu: goto label_12c59c;
            case 0x12C5A0u: goto label_12c5a0;
            case 0x12C5A4u: goto label_12c5a4;
            case 0x12C5A8u: goto label_12c5a8;
            case 0x12C5ACu: goto label_12c5ac;
            case 0x12C5B0u: goto label_12c5b0;
            case 0x12C5B4u: goto label_12c5b4;
            case 0x12C5B8u: goto label_12c5b8;
            case 0x12C5BCu: goto label_12c5bc;
            case 0x12C5C0u: goto label_12c5c0;
            case 0x12C5C4u: goto label_12c5c4;
            case 0x12C5C8u: goto label_12c5c8;
            case 0x12C5CCu: goto label_12c5cc;
            case 0x12C5D0u: goto label_12c5d0;
            case 0x12C5D4u: goto label_12c5d4;
            case 0x12C5D8u: goto label_12c5d8;
            case 0x12C5DCu: goto label_12c5dc;
            case 0x12C5E0u: goto label_12c5e0;
            case 0x12C5E4u: goto label_12c5e4;
            case 0x12C5E8u: goto label_12c5e8;
            case 0x12C5ECu: goto label_12c5ec;
            case 0x12C5F0u: goto label_12c5f0;
            case 0x12C5F4u: goto label_12c5f4;
            case 0x12C5F8u: goto label_12c5f8;
            case 0x12C5FCu: goto label_12c5fc;
            case 0x12C600u: goto label_12c600;
            case 0x12C604u: goto label_12c604;
            case 0x12C608u: goto label_12c608;
            case 0x12C60Cu: goto label_12c60c;
            case 0x12C610u: goto label_12c610;
            case 0x12C614u: goto label_12c614;
            case 0x12C618u: goto label_12c618;
            case 0x12C61Cu: goto label_12c61c;
            case 0x12C620u: goto label_12c620;
            case 0x12C624u: goto label_12c624;
            case 0x12C628u: goto label_12c628;
            case 0x12C62Cu: goto label_12c62c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12C54Cu; }
            if (ctx->pc != 0x12C54Cu) { return; }
        }
    }
    ctx->pc = 0x12C54Cu;
label_12c54c:
    // 0x12c54c: 0xdfbf0000
    ctx->pc = 0x12c54cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12c550:
    // 0x12c550: 0x21042
    ctx->pc = 0x12c550u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
label_12c554:
    // 0x12c554: 0x3e00008
label_12c558:
    if (ctx->pc == 0x12C558u) {
        ctx->pc = 0x12C558u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12C55Cu;
        goto label_12c55c;
    }
    ctx->pc = 0x12C554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C558u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12C4C8u: goto label_12c4c8;
            case 0x12C4CCu: goto label_12c4cc;
            case 0x12C4D0u: goto label_12c4d0;
            case 0x12C4D4u: goto label_12c4d4;
            case 0x12C4D8u: goto label_12c4d8;
            case 0x12C4DCu: goto label_12c4dc;
            case 0x12C4E0u: goto label_12c4e0;
            case 0x12C4E4u: goto label_12c4e4;
            case 0x12C4E8u: goto label_12c4e8;
            case 0x12C4ECu: goto label_12c4ec;
            case 0x12C4F0u: goto label_12c4f0;
            case 0x12C4F4u: goto label_12c4f4;
            case 0x12C4F8u: goto label_12c4f8;
            case 0x12C4FCu: goto label_12c4fc;
            case 0x12C500u: goto label_12c500;
            case 0x12C504u: goto label_12c504;
            case 0x12C508u: goto label_12c508;
            case 0x12C50Cu: goto label_12c50c;
            case 0x12C510u: goto label_12c510;
            case 0x12C514u: goto label_12c514;
            case 0x12C518u: goto label_12c518;
            case 0x12C51Cu: goto label_12c51c;
            case 0x12C520u: goto label_12c520;
            case 0x12C524u: goto label_12c524;
            case 0x12C528u: goto label_12c528;
            case 0x12C52Cu: goto label_12c52c;
            case 0x12C530u: goto label_12c530;
            case 0x12C534u: goto label_12c534;
            case 0x12C538u: goto label_12c538;
            case 0x12C53Cu: goto label_12c53c;
            case 0x12C540u: goto label_12c540;
            case 0x12C544u: goto label_12c544;
            case 0x12C548u: goto label_12c548;
            case 0x12C54Cu: goto label_12c54c;
            case 0x12C550u: goto label_12c550;
            case 0x12C554u: goto label_12c554;
            case 0x12C558u: goto label_12c558;
            case 0x12C55Cu: goto label_12c55c;
            case 0x12C560u: goto label_12c560;
            case 0x12C564u: goto label_12c564;
            case 0x12C568u: goto label_12c568;
            case 0x12C56Cu: goto label_12c56c;
            case 0x12C570u: goto label_12c570;
            case 0x12C574u: goto label_12c574;
            case 0x12C578u: goto label_12c578;
            case 0x12C57Cu: goto label_12c57c;
            case 0x12C580u: goto label_12c580;
            case 0x12C584u: goto label_12c584;
            case 0x12C588u: goto label_12c588;
            case 0x12C58Cu: goto label_12c58c;
            case 0x12C590u: goto label_12c590;
            case 0x12C594u: goto label_12c594;
            case 0x12C598u: goto label_12c598;
            case 0x12C59Cu: goto label_12c59c;
            case 0x12C5A0u: goto label_12c5a0;
            case 0x12C5A4u: goto label_12c5a4;
            case 0x12C5A8u: goto label_12c5a8;
            case 0x12C5ACu: goto label_12c5ac;
            case 0x12C5B0u: goto label_12c5b0;
            case 0x12C5B4u: goto label_12c5b4;
            case 0x12C5B8u: goto label_12c5b8;
            case 0x12C5BCu: goto label_12c5bc;
            case 0x12C5C0u: goto label_12c5c0;
            case 0x12C5C4u: goto label_12c5c4;
            case 0x12C5C8u: goto label_12c5c8;
            case 0x12C5CCu: goto label_12c5cc;
            case 0x12C5D0u: goto label_12c5d0;
            case 0x12C5D4u: goto label_12c5d4;
            case 0x12C5D8u: goto label_12c5d8;
            case 0x12C5DCu: goto label_12c5dc;
            case 0x12C5E0u: goto label_12c5e0;
            case 0x12C5E4u: goto label_12c5e4;
            case 0x12C5E8u: goto label_12c5e8;
            case 0x12C5ECu: goto label_12c5ec;
            case 0x12C5F0u: goto label_12c5f0;
            case 0x12C5F4u: goto label_12c5f4;
            case 0x12C5F8u: goto label_12c5f8;
            case 0x12C5FCu: goto label_12c5fc;
            case 0x12C600u: goto label_12c600;
            case 0x12C604u: goto label_12c604;
            case 0x12C608u: goto label_12c608;
            case 0x12C60Cu: goto label_12c60c;
            case 0x12C610u: goto label_12c610;
            case 0x12C614u: goto label_12c614;
            case 0x12C618u: goto label_12c618;
            case 0x12C61Cu: goto label_12c61c;
            case 0x12C620u: goto label_12c620;
            case 0x12C624u: goto label_12c624;
            case 0x12C628u: goto label_12c628;
            case 0x12C62Cu: goto label_12c62c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12C55Cu;
label_12c55c:
    // 0x12c55c: 0x0
    ctx->pc = 0x12c55cu;
    // NOP
label_12c560:
    // 0x12c560: 0x27bdfff0
    ctx->pc = 0x12c560u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_12c564:
    // 0x12c564: 0xffbf0000
    ctx->pc = 0x12c564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_12c568:
    // 0x12c568: 0x8c82000c
    ctx->pc = 0x12c568u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_12c56c:
    // 0x12c56c: 0x52080
    ctx->pc = 0x12c56cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 2));
label_12c570:
    // 0x12c570: 0x24050001
    ctx->pc = 0x12c570u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_12c574:
    // 0x12c574: 0x441021
    ctx->pc = 0x12c574u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_12c578:
    // 0x12c578: 0x8c430008
    ctx->pc = 0x12c578u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_12c57c:
    // 0x12c57c: 0xc050374
label_12c580:
    if (ctx->pc == 0x12C580u) {
        ctx->pc = 0x12C580u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->pc = 0x12C584u;
        goto label_12c584;
    }
    ctx->pc = 0x12C57Cu;
    SET_GPR_U32(ctx, 31, 0x12C584u);
    ctx->pc = 0x12C580u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->pc = 0x140DD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00140DD0_0x140dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C584u; }
    }
    if (ctx->pc != 0x12C584u) { return; }
    ctx->pc = 0x12C584u;
label_12c584:
    // 0x12c584: 0xdfbf0000
    ctx->pc = 0x12c584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12c588:
    // 0x12c588: 0x21042
    ctx->pc = 0x12c588u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
label_12c58c:
    // 0x12c58c: 0x3e00008
label_12c590:
    if (ctx->pc == 0x12C590u) {
        ctx->pc = 0x12C590u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12C594u;
        goto label_12c594;
    }
    ctx->pc = 0x12C58Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C590u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12C4C8u: goto label_12c4c8;
            case 0x12C4CCu: goto label_12c4cc;
            case 0x12C4D0u: goto label_12c4d0;
            case 0x12C4D4u: goto label_12c4d4;
            case 0x12C4D8u: goto label_12c4d8;
            case 0x12C4DCu: goto label_12c4dc;
            case 0x12C4E0u: goto label_12c4e0;
            case 0x12C4E4u: goto label_12c4e4;
            case 0x12C4E8u: goto label_12c4e8;
            case 0x12C4ECu: goto label_12c4ec;
            case 0x12C4F0u: goto label_12c4f0;
            case 0x12C4F4u: goto label_12c4f4;
            case 0x12C4F8u: goto label_12c4f8;
            case 0x12C4FCu: goto label_12c4fc;
            case 0x12C500u: goto label_12c500;
            case 0x12C504u: goto label_12c504;
            case 0x12C508u: goto label_12c508;
            case 0x12C50Cu: goto label_12c50c;
            case 0x12C510u: goto label_12c510;
            case 0x12C514u: goto label_12c514;
            case 0x12C518u: goto label_12c518;
            case 0x12C51Cu: goto label_12c51c;
            case 0x12C520u: goto label_12c520;
            case 0x12C524u: goto label_12c524;
            case 0x12C528u: goto label_12c528;
            case 0x12C52Cu: goto label_12c52c;
            case 0x12C530u: goto label_12c530;
            case 0x12C534u: goto label_12c534;
            case 0x12C538u: goto label_12c538;
            case 0x12C53Cu: goto label_12c53c;
            case 0x12C540u: goto label_12c540;
            case 0x12C544u: goto label_12c544;
            case 0x12C548u: goto label_12c548;
            case 0x12C54Cu: goto label_12c54c;
            case 0x12C550u: goto label_12c550;
            case 0x12C554u: goto label_12c554;
            case 0x12C558u: goto label_12c558;
            case 0x12C55Cu: goto label_12c55c;
            case 0x12C560u: goto label_12c560;
            case 0x12C564u: goto label_12c564;
            case 0x12C568u: goto label_12c568;
            case 0x12C56Cu: goto label_12c56c;
            case 0x12C570u: goto label_12c570;
            case 0x12C574u: goto label_12c574;
            case 0x12C578u: goto label_12c578;
            case 0x12C57Cu: goto label_12c57c;
            case 0x12C580u: goto label_12c580;
            case 0x12C584u: goto label_12c584;
            case 0x12C588u: goto label_12c588;
            case 0x12C58Cu: goto label_12c58c;
            case 0x12C590u: goto label_12c590;
            case 0x12C594u: goto label_12c594;
            case 0x12C598u: goto label_12c598;
            case 0x12C59Cu: goto label_12c59c;
            case 0x12C5A0u: goto label_12c5a0;
            case 0x12C5A4u: goto label_12c5a4;
            case 0x12C5A8u: goto label_12c5a8;
            case 0x12C5ACu: goto label_12c5ac;
            case 0x12C5B0u: goto label_12c5b0;
            case 0x12C5B4u: goto label_12c5b4;
            case 0x12C5B8u: goto label_12c5b8;
            case 0x12C5BCu: goto label_12c5bc;
            case 0x12C5C0u: goto label_12c5c0;
            case 0x12C5C4u: goto label_12c5c4;
            case 0x12C5C8u: goto label_12c5c8;
            case 0x12C5CCu: goto label_12c5cc;
            case 0x12C5D0u: goto label_12c5d0;
            case 0x12C5D4u: goto label_12c5d4;
            case 0x12C5D8u: goto label_12c5d8;
            case 0x12C5DCu: goto label_12c5dc;
            case 0x12C5E0u: goto label_12c5e0;
            case 0x12C5E4u: goto label_12c5e4;
            case 0x12C5E8u: goto label_12c5e8;
            case 0x12C5ECu: goto label_12c5ec;
            case 0x12C5F0u: goto label_12c5f0;
            case 0x12C5F4u: goto label_12c5f4;
            case 0x12C5F8u: goto label_12c5f8;
            case 0x12C5FCu: goto label_12c5fc;
            case 0x12C600u: goto label_12c600;
            case 0x12C604u: goto label_12c604;
            case 0x12C608u: goto label_12c608;
            case 0x12C60Cu: goto label_12c60c;
            case 0x12C610u: goto label_12c610;
            case 0x12C614u: goto label_12c614;
            case 0x12C618u: goto label_12c618;
            case 0x12C61Cu: goto label_12c61c;
            case 0x12C620u: goto label_12c620;
            case 0x12C624u: goto label_12c624;
            case 0x12C628u: goto label_12c628;
            case 0x12C62Cu: goto label_12c62c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12C594u;
label_12c594:
    // 0x12c594: 0x0
    ctx->pc = 0x12c594u;
    // NOP
label_12c598:
    // 0x12c598: 0x27bdfff0
    ctx->pc = 0x12c598u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_12c59c:
    // 0x12c59c: 0xffbf0000
    ctx->pc = 0x12c59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_12c5a0:
    // 0x12c5a0: 0x8c82000c
    ctx->pc = 0x12c5a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_12c5a4:
    // 0x12c5a4: 0x52080
    ctx->pc = 0x12c5a4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 2));
label_12c5a8:
    // 0x12c5a8: 0x282d
    ctx->pc = 0x12c5a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12c5ac:
    // 0x12c5ac: 0x441021
    ctx->pc = 0x12c5acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_12c5b0:
    // 0x12c5b0: 0x8c430008
    ctx->pc = 0x12c5b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_12c5b4:
    // 0x12c5b4: 0xc050374
label_12c5b8:
    if (ctx->pc == 0x12C5B8u) {
        ctx->pc = 0x12C5B8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->pc = 0x12C5BCu;
        goto label_12c5bc;
    }
    ctx->pc = 0x12C5B4u;
    SET_GPR_U32(ctx, 31, 0x12C5BCu);
    ctx->pc = 0x12C5B8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->pc = 0x140DD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00140DD0_0x140dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C5BCu; }
    }
    if (ctx->pc != 0x12C5BCu) { return; }
    ctx->pc = 0x12C5BCu;
label_12c5bc:
    // 0x12c5bc: 0xdfbf0000
    ctx->pc = 0x12c5bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12c5c0:
    // 0x12c5c0: 0x21042
    ctx->pc = 0x12c5c0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
label_12c5c4:
    // 0x12c5c4: 0x3e00008
label_12c5c8:
    if (ctx->pc == 0x12C5C8u) {
        ctx->pc = 0x12C5C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12C5CCu;
        goto label_12c5cc;
    }
    ctx->pc = 0x12C5C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C5C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12C4C8u: goto label_12c4c8;
            case 0x12C4CCu: goto label_12c4cc;
            case 0x12C4D0u: goto label_12c4d0;
            case 0x12C4D4u: goto label_12c4d4;
            case 0x12C4D8u: goto label_12c4d8;
            case 0x12C4DCu: goto label_12c4dc;
            case 0x12C4E0u: goto label_12c4e0;
            case 0x12C4E4u: goto label_12c4e4;
            case 0x12C4E8u: goto label_12c4e8;
            case 0x12C4ECu: goto label_12c4ec;
            case 0x12C4F0u: goto label_12c4f0;
            case 0x12C4F4u: goto label_12c4f4;
            case 0x12C4F8u: goto label_12c4f8;
            case 0x12C4FCu: goto label_12c4fc;
            case 0x12C500u: goto label_12c500;
            case 0x12C504u: goto label_12c504;
            case 0x12C508u: goto label_12c508;
            case 0x12C50Cu: goto label_12c50c;
            case 0x12C510u: goto label_12c510;
            case 0x12C514u: goto label_12c514;
            case 0x12C518u: goto label_12c518;
            case 0x12C51Cu: goto label_12c51c;
            case 0x12C520u: goto label_12c520;
            case 0x12C524u: goto label_12c524;
            case 0x12C528u: goto label_12c528;
            case 0x12C52Cu: goto label_12c52c;
            case 0x12C530u: goto label_12c530;
            case 0x12C534u: goto label_12c534;
            case 0x12C538u: goto label_12c538;
            case 0x12C53Cu: goto label_12c53c;
            case 0x12C540u: goto label_12c540;
            case 0x12C544u: goto label_12c544;
            case 0x12C548u: goto label_12c548;
            case 0x12C54Cu: goto label_12c54c;
            case 0x12C550u: goto label_12c550;
            case 0x12C554u: goto label_12c554;
            case 0x12C558u: goto label_12c558;
            case 0x12C55Cu: goto label_12c55c;
            case 0x12C560u: goto label_12c560;
            case 0x12C564u: goto label_12c564;
            case 0x12C568u: goto label_12c568;
            case 0x12C56Cu: goto label_12c56c;
            case 0x12C570u: goto label_12c570;
            case 0x12C574u: goto label_12c574;
            case 0x12C578u: goto label_12c578;
            case 0x12C57Cu: goto label_12c57c;
            case 0x12C580u: goto label_12c580;
            case 0x12C584u: goto label_12c584;
            case 0x12C588u: goto label_12c588;
            case 0x12C58Cu: goto label_12c58c;
            case 0x12C590u: goto label_12c590;
            case 0x12C594u: goto label_12c594;
            case 0x12C598u: goto label_12c598;
            case 0x12C59Cu: goto label_12c59c;
            case 0x12C5A0u: goto label_12c5a0;
            case 0x12C5A4u: goto label_12c5a4;
            case 0x12C5A8u: goto label_12c5a8;
            case 0x12C5ACu: goto label_12c5ac;
            case 0x12C5B0u: goto label_12c5b0;
            case 0x12C5B4u: goto label_12c5b4;
            case 0x12C5B8u: goto label_12c5b8;
            case 0x12C5BCu: goto label_12c5bc;
            case 0x12C5C0u: goto label_12c5c0;
            case 0x12C5C4u: goto label_12c5c4;
            case 0x12C5C8u: goto label_12c5c8;
            case 0x12C5CCu: goto label_12c5cc;
            case 0x12C5D0u: goto label_12c5d0;
            case 0x12C5D4u: goto label_12c5d4;
            case 0x12C5D8u: goto label_12c5d8;
            case 0x12C5DCu: goto label_12c5dc;
            case 0x12C5E0u: goto label_12c5e0;
            case 0x12C5E4u: goto label_12c5e4;
            case 0x12C5E8u: goto label_12c5e8;
            case 0x12C5ECu: goto label_12c5ec;
            case 0x12C5F0u: goto label_12c5f0;
            case 0x12C5F4u: goto label_12c5f4;
            case 0x12C5F8u: goto label_12c5f8;
            case 0x12C5FCu: goto label_12c5fc;
            case 0x12C600u: goto label_12c600;
            case 0x12C604u: goto label_12c604;
            case 0x12C608u: goto label_12c608;
            case 0x12C60Cu: goto label_12c60c;
            case 0x12C610u: goto label_12c610;
            case 0x12C614u: goto label_12c614;
            case 0x12C618u: goto label_12c618;
            case 0x12C61Cu: goto label_12c61c;
            case 0x12C620u: goto label_12c620;
            case 0x12C624u: goto label_12c624;
            case 0x12C628u: goto label_12c628;
            case 0x12C62Cu: goto label_12c62c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12C5CCu;
label_12c5cc:
    // 0x12c5cc: 0x0
    ctx->pc = 0x12c5ccu;
    // NOP
label_12c5d0:
    // 0x12c5d0: 0x27bdfff0
    ctx->pc = 0x12c5d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_12c5d4:
    // 0x12c5d4: 0xffbf0000
    ctx->pc = 0x12c5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_12c5d8:
    // 0x12c5d8: 0xdfbf0000
    ctx->pc = 0x12c5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12c5dc:
    // 0x12c5dc: 0x804f95a
label_12c5e0:
    if (ctx->pc == 0x12C5E0u) {
        ctx->pc = 0x12C5E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12C5E4u;
        goto label_12c5e4;
    }
    ctx->pc = 0x12C5DCu;
    ctx->pc = 0x12C5E0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13E568u;
    entry_13e568_0x13e598(rdram, ctx, runtime); return;
    ctx->pc = 0x12C5E4u;
label_12c5e4:
    // 0x12c5e4: 0x0
    ctx->pc = 0x12c5e4u;
    // NOP
label_12c5e8:
    // 0x12c5e8: 0x27bdfff0
    ctx->pc = 0x12c5e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_12c5ec:
    // 0x12c5ec: 0xffbf0000
    ctx->pc = 0x12c5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_12c5f0:
    // 0x12c5f0: 0xdfbf0000
    ctx->pc = 0x12c5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12c5f4:
    // 0x12c5f4: 0x804f97a
label_12c5f8:
    if (ctx->pc == 0x12C5F8u) {
        ctx->pc = 0x12C5F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12C5FCu;
        goto label_12c5fc;
    }
    ctx->pc = 0x12C5F4u;
    ctx->pc = 0x12C5F8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13E5E8u;
    entry_13e5e8_0x13e640(rdram, ctx, runtime); return;
    ctx->pc = 0x12C5FCu;
label_12c5fc:
    // 0x12c5fc: 0x0
    ctx->pc = 0x12c5fcu;
    // NOP
label_12c600:
    // 0x12c600: 0x27bdfff0
    ctx->pc = 0x12c600u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_12c604:
    // 0x12c604: 0xffbf0000
    ctx->pc = 0x12c604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_12c608:
    // 0x12c608: 0xdfbf0000
    ctx->pc = 0x12c608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12c60c:
    // 0x12c60c: 0x804f990
label_12c610:
    if (ctx->pc == 0x12C610u) {
        ctx->pc = 0x12C610u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12C614u;
        goto label_12c614;
    }
    ctx->pc = 0x12C60Cu;
    ctx->pc = 0x12C610u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13E640u;
    entry_13e640_0x13e688(rdram, ctx, runtime); return;
    ctx->pc = 0x12C614u;
label_12c614:
    // 0x12c614: 0x0
    ctx->pc = 0x12c614u;
    // NOP
label_12c618:
    // 0x12c618: 0x27bdfff0
    ctx->pc = 0x12c618u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_12c61c:
    // 0x12c61c: 0xffbf0000
    ctx->pc = 0x12c61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_12c620:
    // 0x12c620: 0x8c84000c
    ctx->pc = 0x12c620u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_12c624:
    // 0x12c624: 0xdfbf0000
    ctx->pc = 0x12c624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12c628:
    // 0x12c628: 0x804f9a2
label_12c62c:
    if (ctx->pc == 0x12C62Cu) {
        ctx->pc = 0x12C62Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12C630u;
        goto label_fallthrough_0x12c628;
    }
    ctx->pc = 0x12C628u;
    ctx->pc = 0x12C62Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13E688u;
    entry_13e688_0x13e6c0(rdram, ctx, runtime); return;
label_fallthrough_0x12c628:
    ctx->pc = 0x12C630u;
}
