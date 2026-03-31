#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00168490
// Address: 0x168490 - 0x168578
void sub_00168490_0x168490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x168490u;

    // 0x168490: 0x27bdffc0
    ctx->pc = 0x168490u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x168494: 0xffb60030
    ctx->pc = 0x168494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x168498: 0xc0b02d
    ctx->pc = 0x168498u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16849c: 0xffb10008
    ctx->pc = 0x16849cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1684a0: 0x3c060001
    ctx->pc = 0x1684a0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)1 << 16));
    // 0x1684a4: 0xffb20010
    ctx->pc = 0x1684a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1684a8: 0xffb30018
    ctx->pc = 0x1684a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1684ac: 0x80982d
    ctx->pc = 0x1684acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1684b0: 0xffb40020
    ctx->pc = 0x1684b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1684b4: 0xa0a02d
    ctx->pc = 0x1684b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1684b8: 0xffb50028
    ctx->pc = 0x1684b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1684bc: 0xffb00000
    ctx->pc = 0x1684bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1684c0: 0xffbf0038
    ctx->pc = 0x1684c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1684c4: 0xc05a208
    ctx->pc = 0x1684C4u;
    SET_GPR_U32(ctx, 31, 0x1684CCu);
    ctx->pc = 0x1684C8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x168820u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00168820_0x168820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1684CCu; }
    }
    if (ctx->pc != 0x1684CCu) { return; }
    ctx->pc = 0x1684CCu;
    // 0x1684cc: 0x3c060001
    ctx->pc = 0x1684ccu;
    SET_GPR_U32(ctx, 6, ((uint32_t)1 << 16));
    // 0x1684d0: 0x40882d
    ctx->pc = 0x1684d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1684d4: 0x2339023
    ctx->pc = 0x1684d4u;
    SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1684d8: 0x26240001
    ctx->pc = 0x1684d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1684dc: 0x1220001c
    ctx->pc = 0x1684DCu;
    {
        const bool branch_taken_0x1684dc = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x1684E0u;
        SET_GPR_U32(ctx, 21, SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        if (branch_taken_0x1684dc) {
            ctx->pc = 0x168550u;
            goto label_168550;
        }
    }
    ctx->pc = 0x1684E4u;
    // 0x1684e4: 0xc05a208
    ctx->pc = 0x1684E4u;
    SET_GPR_U32(ctx, 31, 0x1684ECu);
    ctx->pc = 0x1684E8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->pc = 0x168820u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00168820_0x168820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1684ECu; }
    }
    if (ctx->pc != 0x1684ECu) { return; }
    ctx->pc = 0x1684ECu;
    // 0x1684ec: 0x3c060001
    ctx->pc = 0x1684ecu;
    SET_GPR_U32(ctx, 6, ((uint32_t)1 << 16));
    // 0x1684f0: 0x40802d
    ctx->pc = 0x1684f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1684f4: 0x2131823
    ctx->pc = 0x1684f4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x1684f8: 0x26040001
    ctx->pc = 0x1684f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1684fc: 0x12000014
    ctx->pc = 0x1684FCu;
    {
        const bool branch_taken_0x1684fc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x168500u;
        SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        if (branch_taken_0x1684fc) {
            ctx->pc = 0x168550u;
            goto label_168550;
        }
    }
    ctx->pc = 0x168504u;
    // 0x168504: 0xc05a208
    ctx->pc = 0x168504u;
    SET_GPR_U32(ctx, 31, 0x16850Cu);
    ctx->pc = 0x168508u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->pc = 0x168820u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00168820_0x168820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16850Cu; }
    }
    if (ctx->pc != 0x16850Cu) { return; }
    ctx->pc = 0x16850Cu;
    // 0x16850c: 0x40182d
    ctx->pc = 0x16850cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168510: 0x1060000f
    ctx->pc = 0x168510u;
    {
        const bool branch_taken_0x168510 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x168514u;
        SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        if (branch_taken_0x168510) {
            ctx->pc = 0x168550u;
            goto label_168550;
        }
    }
    ctx->pc = 0x168518u;
    // 0x168518: 0x2118023
    ctx->pc = 0x168518u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x16851c: 0x1604000c
    ctx->pc = 0x16851Cu;
    {
        const bool branch_taken_0x16851c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 4));
        ctx->pc = 0x168520u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x16851c) {
            ctx->pc = 0x168550u;
            goto label_168550;
        }
    }
    ctx->pc = 0x168524u;
    // 0x168524: 0x250001a
    ctx->pc = 0x168524u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x168528: 0x52000001
    ctx->pc = 0x168528u;
    {
        const bool branch_taken_0x168528 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x168528) {
            ctx->pc = 0x16852Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x168530u;
            goto label_168530;
        }
    }
    ctx->pc = 0x168530u;
label_168530:
    // 0x168530: 0x1810
    ctx->pc = 0x168530u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x168534: 0x54600007
    ctx->pc = 0x168534u;
    {
        const bool branch_taken_0x168534 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x168534) {
            ctx->pc = 0x168538u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x168554u;
            goto label_168554;
        }
    }
    ctx->pc = 0x16853Cu;
    // 0x16853c: 0x220202d
    ctx->pc = 0x16853cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168540: 0x2a0282d
    ctx->pc = 0x168540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168544: 0xc05a15e
    ctx->pc = 0x168544u;
    SET_GPR_U32(ctx, 31, 0x16854Cu);
    ctx->pc = 0x168548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x168578u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00168578_0x168578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16854Cu; }
    }
    if (ctx->pc != 0x16854Cu) { return; }
    ctx->pc = 0x16854Cu;
    // 0x16854c: 0x200102d
    ctx->pc = 0x16854cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_168550:
    // 0x168550: 0xdfb00000
    ctx->pc = 0x168550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_168554:
    // 0x168554: 0xdfb10008
    ctx->pc = 0x168554u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x168558: 0xdfb20010
    ctx->pc = 0x168558u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16855c: 0xdfb30018
    ctx->pc = 0x16855cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x168560: 0xdfb40020
    ctx->pc = 0x168560u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168564: 0xdfb50028
    ctx->pc = 0x168564u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x168568: 0xdfb60030
    ctx->pc = 0x168568u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16856c: 0xdfbf0038
    ctx->pc = 0x16856cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x168570: 0x3e00008
    ctx->pc = 0x168570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168574u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168530u: goto label_168530;
            case 0x168550u: goto label_168550;
            case 0x168554u: goto label_168554;
            default: break;
        }
        return;
    }
    ctx->pc = 0x168578u;
}
