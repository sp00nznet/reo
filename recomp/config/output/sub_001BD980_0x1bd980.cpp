#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BD980
// Address: 0x1bd980 - 0x1be220
void sub_001BD980_0x1bd980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1bd980u;

label_1bd980:
    // 0x1bd980: 0x2402fffb
    ctx->pc = 0x1bd980u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1bd984: 0x14a20003
    ctx->pc = 0x1BD984u;
    {
        const bool branch_taken_0x1bd984 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        if (branch_taken_0x1bd984) {
            ctx->pc = 0x1BD994u;
            goto label_1bd994;
        }
    }
    ctx->pc = 0x1BD98Cu;
    // 0x1bd98c: 0x10000003
    ctx->pc = 0x1BD98Cu;
    {
        const bool branch_taken_0x1bd98c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BD990u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x1bd98c) {
            ctx->pc = 0x1BD99Cu;
            goto label_1bd99c;
        }
    }
    ctx->pc = 0x1BD994u;
label_1bd994:
    // 0x1bd994: 0x2402ff9d
    ctx->pc = 0x1bd994u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967197));
    // 0x1bd998: 0xac820008
    ctx->pc = 0x1bd998u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1bd99c:
    // 0x1bd99c: 0x806f86c
    ctx->pc = 0x1BD99Cu;
    ctx->pc = 0x1BE1B0u;
    goto label_1be1b0;
    ctx->pc = 0x1BD9A4u;
    // 0x1bd9a4: 0x0
    ctx->pc = 0x1bd9a4u;
    // NOP
    // 0x1bd9a8: 0x0
    ctx->pc = 0x1bd9a8u;
    // NOP
    // 0x1bd9ac: 0x0
    ctx->pc = 0x1bd9acu;
    // NOP
    // 0x1bd9b0: 0x27bdffe0
    ctx->pc = 0x1bd9b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bd9b4: 0xffbf0010
    ctx->pc = 0x1bd9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bd9b8: 0x7fb00000
    ctx->pc = 0x1bd9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bd9bc: 0xc06f8e0
    ctx->pc = 0x1BD9BCu;
    SET_GPR_U32(ctx, 31, 0x1BD9C4u);
    ctx->pc = 0x1BD9C0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1BE380u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE380_0x1be380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD9C4u; }
    }
    if (ctx->pc != 0x1BD9C4u) { return; }
    ctx->pc = 0x1BD9C4u;
    // 0x1bd9c4: 0x2403fffe
    ctx->pc = 0x1bd9c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1bd9c8: 0x10430007
    ctx->pc = 0x1BD9C8u;
    {
        const bool branch_taken_0x1bd9c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1BD9CCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1bd9c8) {
            ctx->pc = 0x1BD9E8u;
            goto label_1bd9e8;
        }
    }
    ctx->pc = 0x1BD9D0u;
    // 0x1bd9d0: 0x10400005
    ctx->pc = 0x1BD9D0u;
    {
        const bool branch_taken_0x1bd9d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bd9d0) {
            ctx->pc = 0x1BD9E8u;
            goto label_1bd9e8;
        }
    }
    ctx->pc = 0x1BD9D8u;
    // 0x1bd9d8: 0xc06f660
    ctx->pc = 0x1BD9D8u;
    SET_GPR_U32(ctx, 31, 0x1BD9E0u);
    ctx->pc = 0x1BD9DCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1BD980u;
    goto label_1bd980;
    ctx->pc = 0x1BD9E0u;
label_1bd9e0:
    // 0x1bd9e0: 0x10000005
    ctx->pc = 0x1BD9E0u;
    {
        const bool branch_taken_0x1bd9e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BD9E4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1bd9e0) {
            ctx->pc = 0x1BD9F8u;
            goto label_1bd9f8;
        }
    }
    ctx->pc = 0x1BD9E8u;
label_1bd9e8:
    // 0x1bd9e8: 0x8e030000
    ctx->pc = 0x1bd9e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bd9ec: 0x24630001
    ctx->pc = 0x1bd9ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bd9f0: 0xae030000
    ctx->pc = 0x1bd9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1bd9f4: 0xdfbf0010
    ctx->pc = 0x1bd9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bd9f8:
    // 0x1bd9f8: 0x7bb00000
    ctx->pc = 0x1bd9f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd9fc: 0x3e00008
    ctx->pc = 0x1BD9FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDA00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BD980u: goto label_1bd980;
            case 0x1BD994u: goto label_1bd994;
            case 0x1BD99Cu: goto label_1bd99c;
            case 0x1BD9E0u: goto label_1bd9e0;
            case 0x1BD9E8u: goto label_1bd9e8;
            case 0x1BD9F8u: goto label_1bd9f8;
            case 0x1BDA34u: goto label_1bda34;
            case 0x1BDA3Cu: goto label_1bda3c;
            case 0x1BDA54u: goto label_1bda54;
            case 0x1BDA6Cu: goto label_1bda6c;
            case 0x1BDA70u: goto label_1bda70;
            case 0x1BDA9Cu: goto label_1bda9c;
            case 0x1BDAA0u: goto label_1bdaa0;
            case 0x1BDAC4u: goto label_1bdac4;
            case 0x1BDAD0u: goto label_1bdad0;
            case 0x1BDAD4u: goto label_1bdad4;
            case 0x1BDB74u: goto label_1bdb74;
            case 0x1BDBB8u: goto label_1bdbb8;
            case 0x1BDBC0u: goto label_1bdbc0;
            case 0x1BDC0Cu: goto label_1bdc0c;
            case 0x1BDC10u: goto label_1bdc10;
            case 0x1BDCD0u: goto label_1bdcd0;
            case 0x1BDCD8u: goto label_1bdcd8;
            case 0x1BDCE0u: goto label_1bdce0;
            case 0x1BDCE8u: goto label_1bdce8;
            case 0x1BDD04u: goto label_1bdd04;
            case 0x1BDD40u: goto label_1bdd40;
            case 0x1BDD44u: goto label_1bdd44;
            case 0x1BDD4Cu: goto label_1bdd4c;
            case 0x1BDD80u: goto label_1bdd80;
            case 0x1BDDFCu: goto label_1bddfc;
            case 0x1BDE04u: goto label_1bde04;
            case 0x1BDE0Cu: goto label_1bde0c;
            case 0x1BDE44u: goto label_1bde44;
            case 0x1BDEACu: goto label_1bdeac;
            case 0x1BDEB4u: goto label_1bdeb4;
            case 0x1BDEBCu: goto label_1bdebc;
            case 0x1BDED0u: goto label_1bded0;
            case 0x1BDF34u: goto label_1bdf34;
            case 0x1BDF50u: goto label_1bdf50;
            case 0x1BDFB0u: goto label_1bdfb0;
            case 0x1BDFECu: goto label_1bdfec;
            case 0x1BDFF8u: goto label_1bdff8;
            case 0x1BE000u: goto label_1be000;
            case 0x1BE040u: goto label_1be040;
            case 0x1BE120u: goto label_1be120;
            case 0x1BE15Cu: goto label_1be15c;
            case 0x1BE178u: goto label_1be178;
            case 0x1BE17Cu: goto label_1be17c;
            case 0x1BE1B0u: goto label_1be1b0;
            case 0x1BE1E8u: goto label_1be1e8;
            case 0x1BE1FCu: goto label_1be1fc;
            case 0x1BE20Cu: goto label_1be20c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BDA04u;
    // 0x1bda04: 0x0
    ctx->pc = 0x1bda04u;
    // NOP
    // 0x1bda08: 0x0
    ctx->pc = 0x1bda08u;
    // NOP
    // 0x1bda0c: 0x0
    ctx->pc = 0x1bda0cu;
    // NOP
    // 0x1bda10: 0x27bdffe0
    ctx->pc = 0x1bda10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bda14: 0xffbf0010
    ctx->pc = 0x1bda14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bda18: 0x7fb00000
    ctx->pc = 0x1bda18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bda1c: 0xc06f504
    ctx->pc = 0x1BDA1Cu;
    SET_GPR_U32(ctx, 31, 0x1BDA24u);
    ctx->pc = 0x1BDA20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1BD410u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BD410_0x1bd410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDA24u; }
    }
    if (ctx->pc != 0x1BDA24u) { return; }
    ctx->pc = 0x1BDA24u;
    // 0x1bda24: 0x10400005
    ctx->pc = 0x1BDA24u;
    {
        const bool branch_taken_0x1bda24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BDA28u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1bda24) {
            ctx->pc = 0x1BDA3Cu;
            goto label_1bda3c;
        }
    }
    ctx->pc = 0x1BDA2Cu;
    // 0x1bda2c: 0xc06f660
    ctx->pc = 0x1BDA2Cu;
    SET_GPR_U32(ctx, 31, 0x1BDA34u);
    ctx->pc = 0x1BDA30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1BD980u;
    goto label_1bd980;
    ctx->pc = 0x1BDA34u;
label_1bda34:
    // 0x1bda34: 0x10000027
    ctx->pc = 0x1BDA34u;
    {
        const bool branch_taken_0x1bda34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BDA38u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1bda34) {
            ctx->pc = 0x1BDAD4u;
            goto label_1bdad4;
        }
    }
    ctx->pc = 0x1BDA3Cu;
label_1bda3c:
    // 0x1bda3c: 0x3c010032
    ctx->pc = 0x1bda3cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bda40: 0x3c080023
    ctx->pc = 0x1bda40u;
    SET_GPR_U32(ctx, 8, ((uint32_t)35 << 16));
    // 0x1bda44: 0xac204868
    ctx->pc = 0x1bda44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 18536), GPR_U32(ctx, 0));
    // 0x1bda48: 0x25084f90
    ctx->pc = 0x1bda48u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 20368));
    // 0x1bda4c: 0x3c040032
    ctx->pc = 0x1bda4cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x1bda50: 0x24844520
    ctx->pc = 0x1bda50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17696));
label_1bda54:
    // 0x1bda54: 0x8d070000
    ctx->pc = 0x1bda54u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1bda58: 0x14e00004
    ctx->pc = 0x1BDA58u;
    {
        const bool branch_taken_0x1bda58 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x1BDA5Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4));
        if (branch_taken_0x1bda58) {
            ctx->pc = 0x1BDA6Cu;
            goto label_1bda6c;
        }
    }
    ctx->pc = 0x1BDA60u;
    // 0x1bda60: 0x2403fffd
    ctx->pc = 0x1bda60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1bda64: 0x1000001a
    ctx->pc = 0x1BDA64u;
    {
        const bool branch_taken_0x1bda64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BDA68u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        if (branch_taken_0x1bda64) {
            ctx->pc = 0x1BDAD0u;
            goto label_1bdad0;
        }
    }
    ctx->pc = 0x1BDA6Cu;
label_1bda6c:
    // 0x1bda6c: 0x302d
    ctx->pc = 0x1bda6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bda70:
    // 0x1bda70: 0x80e50000
    ctx->pc = 0x1bda70u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1bda74: 0x4a00009
    ctx->pc = 0x1BDA74u;
    {
        const bool branch_taken_0x1bda74 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1BDA78u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
        if (branch_taken_0x1bda74) {
            ctx->pc = 0x1BDA9Cu;
            goto label_1bda9c;
        }
    }
    ctx->pc = 0x1BDA7Cu;
    // 0x1bda7c: 0x61940
    ctx->pc = 0x1bda7cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 5));
    // 0x1bda80: 0x831821
    ctx->pc = 0x1bda80u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bda84: 0x8c630008
    ctx->pc = 0x1bda84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bda88: 0x65082b
    ctx->pc = 0x1bda88u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1bda8c: 0x14200004
    ctx->pc = 0x1BDA8Cu;
    {
        const bool branch_taken_0x1bda8c = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1BDA90u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 4294967295));
        if (branch_taken_0x1bda8c) {
            ctx->pc = 0x1BDAA0u;
            goto label_1bdaa0;
        }
    }
    ctx->pc = 0x1BDA94u;
    // 0x1bda94: 0x1000fff6
    ctx->pc = 0x1BDA94u;
    {
        const bool branch_taken_0x1bda94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BDA98u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x1bda94) {
            ctx->pc = 0x1BDA70u;
            goto label_1bda70;
        }
    }
    ctx->pc = 0x1BDA9Cu;
label_1bda9c:
    // 0x1bda9c: 0x24c3ffff
    ctx->pc = 0x1bda9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 4294967295));
label_1bdaa0:
    // 0x1bdaa0: 0x3c010032
    ctx->pc = 0x1bdaa0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bdaa4: 0x4a00007
    ctx->pc = 0x1BDAA4u;
    {
        const bool branch_taken_0x1bdaa4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1BDAA8u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 18528), GPR_U32(ctx, 3));
        if (branch_taken_0x1bdaa4) {
            ctx->pc = 0x1BDAC4u;
            goto label_1bdac4;
        }
    }
    ctx->pc = 0x1BDAACu;
    // 0x1bdaac: 0x3c010032
    ctx->pc = 0x1bdaacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bdab0: 0x8c234868
    ctx->pc = 0x1bdab0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 18536)));
    // 0x1bdab4: 0x24630001
    ctx->pc = 0x1bdab4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bdab8: 0x3c010032
    ctx->pc = 0x1bdab8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bdabc: 0x1000ffe5
    ctx->pc = 0x1BDABCu;
    {
        const bool branch_taken_0x1bdabc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BDAC0u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 18536), GPR_U32(ctx, 3));
        if (branch_taken_0x1bdabc) {
            ctx->pc = 0x1BDA54u;
            goto label_1bda54;
        }
    }
    ctx->pc = 0x1BDAC4u;
label_1bdac4:
    // 0x1bdac4: 0x8e030000
    ctx->pc = 0x1bdac4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bdac8: 0x24630001
    ctx->pc = 0x1bdac8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bdacc: 0xae030000
    ctx->pc = 0x1bdaccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1bdad0:
    // 0x1bdad0: 0xdfbf0010
    ctx->pc = 0x1bdad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bdad4:
    // 0x1bdad4: 0x7bb00000
    ctx->pc = 0x1bdad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdad8: 0x3e00008
    ctx->pc = 0x1BDAD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDADCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BD980u: goto label_1bd980;
            case 0x1BD994u: goto label_1bd994;
            case 0x1BD99Cu: goto label_1bd99c;
            case 0x1BD9E0u: goto label_1bd9e0;
            case 0x1BD9E8u: goto label_1bd9e8;
            case 0x1BD9F8u: goto label_1bd9f8;
            case 0x1BDA34u: goto label_1bda34;
            case 0x1BDA3Cu: goto label_1bda3c;
            case 0x1BDA54u: goto label_1bda54;
            case 0x1BDA6Cu: goto label_1bda6c;
            case 0x1BDA70u: goto label_1bda70;
            case 0x1BDA9Cu: goto label_1bda9c;
            case 0x1BDAA0u: goto label_1bdaa0;
            case 0x1BDAC4u: goto label_1bdac4;
            case 0x1BDAD0u: goto label_1bdad0;
            case 0x1BDAD4u: goto label_1bdad4;
            case 0x1BDB74u: goto label_1bdb74;
            case 0x1BDBB8u: goto label_1bdbb8;
            case 0x1BDBC0u: goto label_1bdbc0;
            case 0x1BDC0Cu: goto label_1bdc0c;
            case 0x1BDC10u: goto label_1bdc10;
            case 0x1BDCD0u: goto label_1bdcd0;
            case 0x1BDCD8u: goto label_1bdcd8;
            case 0x1BDCE0u: goto label_1bdce0;
            case 0x1BDCE8u: goto label_1bdce8;
            case 0x1BDD04u: goto label_1bdd04;
            case 0x1BDD40u: goto label_1bdd40;
            case 0x1BDD44u: goto label_1bdd44;
            case 0x1BDD4Cu: goto label_1bdd4c;
            case 0x1BDD80u: goto label_1bdd80;
            case 0x1BDDFCu: goto label_1bddfc;
            case 0x1BDE04u: goto label_1bde04;
            case 0x1BDE0Cu: goto label_1bde0c;
            case 0x1BDE44u: goto label_1bde44;
            case 0x1BDEACu: goto label_1bdeac;
            case 0x1BDEB4u: goto label_1bdeb4;
            case 0x1BDEBCu: goto label_1bdebc;
            case 0x1BDED0u: goto label_1bded0;
            case 0x1BDF34u: goto label_1bdf34;
            case 0x1BDF50u: goto label_1bdf50;
            case 0x1BDFB0u: goto label_1bdfb0;
            case 0x1BDFECu: goto label_1bdfec;
            case 0x1BDFF8u: goto label_1bdff8;
            case 0x1BE000u: goto label_1be000;
            case 0x1BE040u: goto label_1be040;
            case 0x1BE120u: goto label_1be120;
            case 0x1BE15Cu: goto label_1be15c;
            case 0x1BE178u: goto label_1be178;
            case 0x1BE17Cu: goto label_1be17c;
            case 0x1BE1B0u: goto label_1be1b0;
            case 0x1BE1E8u: goto label_1be1e8;
            case 0x1BE1FCu: goto label_1be1fc;
            case 0x1BE20Cu: goto label_1be20c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BDAE0u;
    // 0x1bdae0: 0x27bdfec0
    ctx->pc = 0x1bdae0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1bdae4: 0x3c010023
    ctx->pc = 0x1bdae4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1bdae8: 0xffbf0030
    ctx->pc = 0x1bdae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1bdaec: 0x7fb20020
    ctx->pc = 0x1bdaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bdaf0: 0x7fb10010
    ctx->pc = 0x1bdaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bdaf4: 0x7fb00000
    ctx->pc = 0x1bdaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bdaf8: 0x8c254fe8
    ctx->pc = 0x1bdaf8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 20456)));
    // 0x1bdafc: 0x80802d
    ctx->pc = 0x1bdafcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb00: 0xc06f904
    ctx->pc = 0x1BDB00u;
    SET_GPR_U32(ctx, 31, 0x1BDB08u);
    ctx->pc = 0x1BDB04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1BE410u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE410_0x1be410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDB08u; }
    }
    if (ctx->pc != 0x1BDB08u) { return; }
    ctx->pc = 0x1BDB08u;
    // 0x1bdb08: 0x27a40040
    ctx->pc = 0x1bdb08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bdb0c: 0x24050001
    ctx->pc = 0x1bdb0cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdb10: 0xc04629c
    ctx->pc = 0x1BDB10u;
    SET_GPR_U32(ctx, 31, 0x1BDB18u);
    ctx->pc = 0x1BDB14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x118A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118A70_0x118a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDB18u; }
    }
    if (ctx->pc != 0x1BDB18u) { return; }
    ctx->pc = 0x1BDB18u;
    // 0x1bdb18: 0x440003c
    ctx->pc = 0x1BDB18u;
    {
        const bool branch_taken_0x1bdb18 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BDB1Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1bdb18) {
            ctx->pc = 0x1BDC0Cu;
            goto label_1bdc0c;
        }
    }
    ctx->pc = 0x1BDB20u;
    // 0x1bdb20: 0x240202d
    ctx->pc = 0x1bdb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb24: 0x282d
    ctx->pc = 0x1bdb24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb28: 0xc04639e
    ctx->pc = 0x1BDB28u;
    SET_GPR_U32(ctx, 31, 0x1BDB30u);
    ctx->pc = 0x1BDB2Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x118E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118E78_0x118e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDB30u; }
    }
    if (ctx->pc != 0x1BDB30u) { return; }
    ctx->pc = 0x1BDB30u;
    // 0x1bdb30: 0x40882d
    ctx->pc = 0x1bdb30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb34: 0x240202d
    ctx->pc = 0x1bdb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb38: 0x282d
    ctx->pc = 0x1bdb38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb3c: 0xc04639e
    ctx->pc = 0x1BDB3Cu;
    SET_GPR_U32(ctx, 31, 0x1BDB44u);
    ctx->pc = 0x1BDB40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x118E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118E78_0x118e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDB44u; }
    }
    if (ctx->pc != 0x1BDB44u) { return; }
    ctx->pc = 0x1BDB44u;
    // 0x1bdb44: 0x8e05000c
    ctx->pc = 0x1bdb44u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1bdb48: 0x240202d
    ctx->pc = 0x1bdb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb4c: 0xc04642c
    ctx->pc = 0x1BDB4Cu;
    SET_GPR_U32(ctx, 31, 0x1BDB54u);
    ctx->pc = 0x1BDB50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1190B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001190B0_0x1190b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDB54u; }
    }
    if (ctx->pc != 0x1BDB54u) { return; }
    ctx->pc = 0x1BDB54u;
    // 0x1bdb54: 0xc04633e
    ctx->pc = 0x1BDB54u;
    SET_GPR_U32(ctx, 31, 0x1BDB5Cu);
    ctx->pc = 0x1BDB58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x118CF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118CF8_0x118cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDB5Cu; }
    }
    if (ctx->pc != 0x1BDB5Cu) { return; }
    ctx->pc = 0x1BDB5Cu;
    // 0x1bdb5c: 0x2623003f
    ctx->pc = 0x1bdb5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 63));
    // 0x1bdb60: 0xae110030
    ctx->pc = 0x1bdb60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 17));
    // 0x1bdb64: 0x4610003
    ctx->pc = 0x1BDB64u;
    {
        const bool branch_taken_0x1bdb64 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1BDB68u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        if (branch_taken_0x1bdb64) {
            ctx->pc = 0x1BDB74u;
            goto label_1bdb74;
        }
    }
    ctx->pc = 0x1BDB6Cu;
    // 0x1bdb6c: 0x2462003f
    ctx->pc = 0x1bdb6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 63));
    // 0x1bdb70: 0x21183
    ctx->pc = 0x1bdb70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_1bdb74:
    // 0x1bdb74: 0x21980
    ctx->pc = 0x1bdb74u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 6));
    // 0x1bdb78: 0x3c010023
    ctx->pc = 0x1bdb78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1bdb7c: 0x8e02000c
    ctx->pc = 0x1bdb7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1bdb80: 0x431021
    ctx->pc = 0x1bdb80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bdb84: 0xae02003c
    ctx->pc = 0x1bdb84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x1bdb88: 0x8c254ff0
    ctx->pc = 0x1bdb88u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 20464)));
    // 0x1bdb8c: 0xc06f904
    ctx->pc = 0x1BDB8Cu;
    SET_GPR_U32(ctx, 31, 0x1BDB94u);
    ctx->pc = 0x1BDB90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1BE410u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE410_0x1be410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDB94u; }
    }
    if (ctx->pc != 0x1BDB94u) { return; }
    ctx->pc = 0x1BDB94u;
    // 0x1bdb94: 0x27a40040
    ctx->pc = 0x1bdb94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bdb98: 0x24050001
    ctx->pc = 0x1bdb98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdb9c: 0xc04629c
    ctx->pc = 0x1BDB9Cu;
    SET_GPR_U32(ctx, 31, 0x1BDBA4u);
    ctx->pc = 0x1BDBA0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x118A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118A70_0x118a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDBA4u; }
    }
    if (ctx->pc != 0x1BDBA4u) { return; }
    ctx->pc = 0x1BDBA4u;
    // 0x1bdba4: 0x4410006
    ctx->pc = 0x1BDBA4u;
    {
        const bool branch_taken_0x1bdba4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BDBA8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1bdba4) {
            ctx->pc = 0x1BDBC0u;
            goto label_1bdbc0;
        }
    }
    ctx->pc = 0x1BDBACu;
    // 0x1bdbac: 0x200202d
    ctx->pc = 0x1bdbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdbb0: 0xc06f660
    ctx->pc = 0x1BDBB0u;
    SET_GPR_U32(ctx, 31, 0x1BDBB8u);
    ctx->pc = 0x1BDBB4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1BD980u;
    goto label_1bd980;
    ctx->pc = 0x1BDBB8u;
label_1bdbb8:
    // 0x1bdbb8: 0x10000015
    ctx->pc = 0x1BDBB8u;
    {
        const bool branch_taken_0x1bdbb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BDBBCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x1bdbb8) {
            ctx->pc = 0x1BDC10u;
            goto label_1bdc10;
        }
    }
    ctx->pc = 0x1BDBC0u;
label_1bdbc0:
    // 0x1bdbc0: 0x40202d
    ctx->pc = 0x1bdbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdbc4: 0x282d
    ctx->pc = 0x1bdbc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdbc8: 0xc04639e
    ctx->pc = 0x1BDBC8u;
    SET_GPR_U32(ctx, 31, 0x1BDBD0u);
    ctx->pc = 0x1BDBCCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x118E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118E78_0x118e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDBD0u; }
    }
    if (ctx->pc != 0x1BDBD0u) { return; }
    ctx->pc = 0x1BDBD0u;
    // 0x1bdbd0: 0x40902d
    ctx->pc = 0x1bdbd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdbd4: 0x220202d
    ctx->pc = 0x1bdbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdbd8: 0x282d
    ctx->pc = 0x1bdbd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdbdc: 0xc04639e
    ctx->pc = 0x1BDBDCu;
    SET_GPR_U32(ctx, 31, 0x1BDBE4u);
    ctx->pc = 0x1BDBE0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x118E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118E78_0x118e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDBE4u; }
    }
    if (ctx->pc != 0x1BDBE4u) { return; }
    ctx->pc = 0x1BDBE4u;
    // 0x1bdbe4: 0x8e05003c
    ctx->pc = 0x1bdbe4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1bdbe8: 0x220202d
    ctx->pc = 0x1bdbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdbec: 0xc04642c
    ctx->pc = 0x1BDBECu;
    SET_GPR_U32(ctx, 31, 0x1BDBF4u);
    ctx->pc = 0x1BDBF0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1190B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001190B0_0x1190b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDBF4u; }
    }
    if (ctx->pc != 0x1BDBF4u) { return; }
    ctx->pc = 0x1BDBF4u;
    // 0x1bdbf4: 0xc04633e
    ctx->pc = 0x1BDBF4u;
    SET_GPR_U32(ctx, 31, 0x1BDBFCu);
    ctx->pc = 0x1BDBF8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x118CF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118CF8_0x118cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDBFCu; }
    }
    if (ctx->pc != 0x1BDBFCu) { return; }
    ctx->pc = 0x1BDBFCu;
    // 0x1bdbfc: 0xae120040
    ctx->pc = 0x1bdbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 18));
    // 0x1bdc00: 0x8e030000
    ctx->pc = 0x1bdc00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bdc04: 0x24630001
    ctx->pc = 0x1bdc04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bdc08: 0xae030000
    ctx->pc = 0x1bdc08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1bdc0c:
    // 0x1bdc0c: 0xdfbf0030
    ctx->pc = 0x1bdc0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1bdc10:
    // 0x1bdc10: 0x7bb20020
    ctx->pc = 0x1bdc10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bdc14: 0x7bb10010
    ctx->pc = 0x1bdc14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bdc18: 0x7bb00000
    ctx->pc = 0x1bdc18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdc1c: 0x3e00008
    ctx->pc = 0x1BDC1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDC20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BD980u: goto label_1bd980;
            case 0x1BD994u: goto label_1bd994;
            case 0x1BD99Cu: goto label_1bd99c;
            case 0x1BD9E0u: goto label_1bd9e0;
            case 0x1BD9E8u: goto label_1bd9e8;
            case 0x1BD9F8u: goto label_1bd9f8;
            case 0x1BDA34u: goto label_1bda34;
            case 0x1BDA3Cu: goto label_1bda3c;
            case 0x1BDA54u: goto label_1bda54;
            case 0x1BDA6Cu: goto label_1bda6c;
            case 0x1BDA70u: goto label_1bda70;
            case 0x1BDA9Cu: goto label_1bda9c;
            case 0x1BDAA0u: goto label_1bdaa0;
            case 0x1BDAC4u: goto label_1bdac4;
            case 0x1BDAD0u: goto label_1bdad0;
            case 0x1BDAD4u: goto label_1bdad4;
            case 0x1BDB74u: goto label_1bdb74;
            case 0x1BDBB8u: goto label_1bdbb8;
            case 0x1BDBC0u: goto label_1bdbc0;
            case 0x1BDC0Cu: goto label_1bdc0c;
            case 0x1BDC10u: goto label_1bdc10;
            case 0x1BDCD0u: goto label_1bdcd0;
            case 0x1BDCD8u: goto label_1bdcd8;
            case 0x1BDCE0u: goto label_1bdce0;
            case 0x1BDCE8u: goto label_1bdce8;
            case 0x1BDD04u: goto label_1bdd04;
            case 0x1BDD40u: goto label_1bdd40;
            case 0x1BDD44u: goto label_1bdd44;
            case 0x1BDD4Cu: goto label_1bdd4c;
            case 0x1BDD80u: goto label_1bdd80;
            case 0x1BDDFCu: goto label_1bddfc;
            case 0x1BDE04u: goto label_1bde04;
            case 0x1BDE0Cu: goto label_1bde0c;
            case 0x1BDE44u: goto label_1bde44;
            case 0x1BDEACu: goto label_1bdeac;
            case 0x1BDEB4u: goto label_1bdeb4;
            case 0x1BDEBCu: goto label_1bdebc;
            case 0x1BDED0u: goto label_1bded0;
            case 0x1BDF34u: goto label_1bdf34;
            case 0x1BDF50u: goto label_1bdf50;
            case 0x1BDFB0u: goto label_1bdfb0;
            case 0x1BDFECu: goto label_1bdfec;
            case 0x1BDFF8u: goto label_1bdff8;
            case 0x1BE000u: goto label_1be000;
            case 0x1BE040u: goto label_1be040;
            case 0x1BE120u: goto label_1be120;
            case 0x1BE15Cu: goto label_1be15c;
            case 0x1BE178u: goto label_1be178;
            case 0x1BE17Cu: goto label_1be17c;
            case 0x1BE1B0u: goto label_1be1b0;
            case 0x1BE1E8u: goto label_1be1e8;
            case 0x1BE1FCu: goto label_1be1fc;
            case 0x1BE20Cu: goto label_1be20c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BDC24u;
    // 0x1bdc24: 0x0
    ctx->pc = 0x1bdc24u;
    // NOP
    // 0x1bdc28: 0x0
    ctx->pc = 0x1bdc28u;
    // NOP
    // 0x1bdc2c: 0x0
    ctx->pc = 0x1bdc2cu;
    // NOP
    // 0x1bdc30: 0x27bdfe80
    ctx->pc = 0x1bdc30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1bdc34: 0x3c020023
    ctx->pc = 0x1bdc34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1bdc38: 0xffbf0070
    ctx->pc = 0x1bdc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1bdc3c: 0x3c050025
    ctx->pc = 0x1bdc3cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1bdc40: 0x7fb60060
    ctx->pc = 0x1bdc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1bdc44: 0x3c010032
    ctx->pc = 0x1bdc44u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bdc48: 0x7fb50050
    ctx->pc = 0x1bdc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1bdc4c: 0x24424fc0
    ctx->pc = 0x1bdc4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20416));
    // 0x1bdc50: 0x7fb40040
    ctx->pc = 0x1bdc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1bdc54: 0x24a50440
    ctx->pc = 0x1bdc54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1088));
    // 0x1bdc58: 0x7fb30030
    ctx->pc = 0x1bdc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bdc5c: 0x80a02d
    ctx->pc = 0x1bdc5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdc60: 0x7fb20020
    ctx->pc = 0x1bdc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bdc64: 0x27a40080
    ctx->pc = 0x1bdc64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
    // 0x1bdc68: 0x7fb10010
    ctx->pc = 0x1bdc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bdc6c: 0x7fb00000
    ctx->pc = 0x1bdc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bdc70: 0x8c324860
    ctx->pc = 0x1bdc70u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 1), 18528)));
    // 0x1bdc74: 0x3c010032
    ctx->pc = 0x1bdc74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bdc78: 0x8c234868
    ctx->pc = 0x1bdc78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 18536)));
    // 0x1bdc7c: 0x31880
    ctx->pc = 0x1bdc7cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bdc80: 0x431021
    ctx->pc = 0x1bdc80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bdc84: 0x8c530000
    ctx->pc = 0x1bdc84u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bdc88: 0xc06f918
    ctx->pc = 0x1BDC88u;
    SET_GPR_U32(ctx, 31, 0x1BDC90u);
    ctx->pc = 0x1BDC8Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4660));
    ctx->pc = 0x1BE460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE460_0x1be460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC90u; }
    }
    if (ctx->pc != 0x1BDC90u) { return; }
    ctx->pc = 0x1BDC90u;
    // 0x1bdc90: 0x3c020032
    ctx->pc = 0x1bdc90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x1bdc94: 0x3c050025
    ctx->pc = 0x1bdc94u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1bdc98: 0x121940
    ctx->pc = 0x1bdc98u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 5));
    // 0x1bdc9c: 0x24424520
    ctx->pc = 0x1bdc9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 17696));
    // 0x1bdca0: 0x431021
    ctx->pc = 0x1bdca0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bdca4: 0x27a40100
    ctx->pc = 0x1bdca4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 256));
    // 0x1bdca8: 0x24470010
    ctx->pc = 0x1bdca8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 16));
    // 0x1bdcac: 0x24a50458
    ctx->pc = 0x1bdcacu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1112));
    // 0x1bdcb0: 0xc042a0c
    ctx->pc = 0x1BDCB0u;
    SET_GPR_U32(ctx, 31, 0x1BDCB8u);
    ctx->pc = 0x1BDCB4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 128));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDCB8u; }
    }
    if (ctx->pc != 0x1BDCB8u) { return; }
    ctx->pc = 0x1BDCB8u;
    // 0x1bdcb8: 0x27a40100
    ctx->pc = 0x1bdcb8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 256));
    // 0x1bdcbc: 0xc04629c
    ctx->pc = 0x1BDCBCu;
    SET_GPR_U32(ctx, 31, 0x1BDCC4u);
    ctx->pc = 0x1BDCC0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 515));
    ctx->pc = 0x118A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118A70_0x118a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDCC4u; }
    }
    if (ctx->pc != 0x1BDCC4u) { return; }
    ctx->pc = 0x1BDCC4u;
    // 0x1bdcc4: 0x4410006
    ctx->pc = 0x1BDCC4u;
    {
        const bool branch_taken_0x1bdcc4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BDCC8u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1bdcc4) {
            ctx->pc = 0x1BDCE0u;
            goto label_1bdce0;
        }
    }
    ctx->pc = 0x1BDCCCu;
    // 0x1bdccc: 0x280202d
    ctx->pc = 0x1bdcccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1bdcd0:
    // 0x1bdcd0: 0xc06f660
    ctx->pc = 0x1BDCD0u;
    SET_GPR_U32(ctx, 31, 0x1BDCD8u);
    ctx->pc = 0x1BDCD4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1BD980u;
    goto label_1bd980;
    ctx->pc = 0x1BDCD8u;
label_1bdcd8:
    // 0x1bdcd8: 0x10000029
    ctx->pc = 0x1BDCD8u;
    {
        const bool branch_taken_0x1bdcd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BDCDCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x1bdcd8) {
            ctx->pc = 0x1BDD80u;
            goto label_1bdd80;
        }
    }
    ctx->pc = 0x1BDCE0u;
label_1bdce0:
    // 0x1bdce0: 0x1000001a
    ctx->pc = 0x1BDCE0u;
    {
        const bool branch_taken_0x1bdce0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BDCE4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1bdce0) {
            ctx->pc = 0x1BDD4Cu;
            goto label_1bdd4c;
        }
    }
    ctx->pc = 0x1BDCE8u;
label_1bdce8:
    // 0x1bdce8: 0x121940
    ctx->pc = 0x1bdce8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 5));
    // 0x1bdcec: 0x80500000
    ctx->pc = 0x1bdcecu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bdcf0: 0x3c020032
    ctx->pc = 0x1bdcf0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x1bdcf4: 0x24424520
    ctx->pc = 0x1bdcf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 17696));
    // 0x1bdcf8: 0x431021
    ctx->pc = 0x1bdcf8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bdcfc: 0x10000011
    ctx->pc = 0x1BDCFCu;
    {
        const bool branch_taken_0x1bdcfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BDD00u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 16));
        if (branch_taken_0x1bdcfc) {
            ctx->pc = 0x1BDD44u;
            goto label_1bdd44;
        }
    }
    ctx->pc = 0x1BDD04u;
label_1bdd04:
    // 0x1bdd04: 0xc042c56
    ctx->pc = 0x1BDD04u;
    SET_GPR_U32(ctx, 31, 0x1BDD0Cu);
    ctx->pc = 0x1BDD08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDD0Cu; }
    }
    if (ctx->pc != 0x1BDD0Cu) { return; }
    ctx->pc = 0x1BDD0Cu;
    // 0x1bdd0c: 0x24470001
    ctx->pc = 0x1bdd0cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bdd10: 0x220202d
    ctx->pc = 0x1bdd10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd14: 0x24056801
    ctx->pc = 0x1bdd14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 26625));
    // 0x1bdd18: 0x2c0302d
    ctx->pc = 0x1bdd18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd1c: 0x402d
    ctx->pc = 0x1bdd1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd20: 0xc046652
    ctx->pc = 0x1BDD20u;
    SET_GPR_U32(ctx, 31, 0x1BDD28u);
    ctx->pc = 0x1BDD24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x119948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00119948_0x119948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDD28u; }
    }
    if (ctx->pc != 0x1BDD28u) { return; }
    ctx->pc = 0x1BDD28u;
    // 0x1bdd28: 0x4410005
    ctx->pc = 0x1BDD28u;
    {
        const bool branch_taken_0x1bdd28 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BDD2Cu;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1bdd28) {
            ctx->pc = 0x1BDD40u;
            goto label_1bdd40;
        }
    }
    ctx->pc = 0x1BDD30u;
    // 0x1bdd30: 0xc04633e
    ctx->pc = 0x1BDD30u;
    SET_GPR_U32(ctx, 31, 0x1BDD38u);
    ctx->pc = 0x1BDD34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x118CF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118CF8_0x118cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDD38u; }
    }
    if (ctx->pc != 0x1BDD38u) { return; }
    ctx->pc = 0x1BDD38u;
    // 0x1bdd38: 0x1000ffe5
    ctx->pc = 0x1BDD38u;
    {
        const bool branch_taken_0x1bdd38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BDD3Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1bdd38) {
            ctx->pc = 0x1BDCD0u;
            goto label_1bdcd0;
        }
    }
    ctx->pc = 0x1BDD40u;
label_1bdd40:
    // 0x1bdd40: 0x2610ffff
    ctx->pc = 0x1bdd40u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
label_1bdd44:
    // 0x1bdd44: 0x1e00ffef
    ctx->pc = 0x1BDD44u;
    {
        const bool branch_taken_0x1bdd44 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1bdd44) {
            ctx->pc = 0x1BDD04u;
            goto label_1bdd04;
        }
    }
    ctx->pc = 0x1BDD4Cu;
label_1bdd4c:
    // 0x1bdd4c: 0x2652ffff
    ctx->pc = 0x1bdd4cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1bdd50: 0x641ffe5
    ctx->pc = 0x1BDD50u;
    {
        const bool branch_taken_0x1bdd50 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1BDD54u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        if (branch_taken_0x1bdd50) {
            ctx->pc = 0x1BDCE8u;
            goto label_1bdce8;
        }
    }
    ctx->pc = 0x1BDD58u;
    // 0x1bdd58: 0x8e85000c
    ctx->pc = 0x1bdd58u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1bdd5c: 0x8e860030
    ctx->pc = 0x1bdd5cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1bdd60: 0xc0464c4
    ctx->pc = 0x1BDD60u;
    SET_GPR_U32(ctx, 31, 0x1BDD68u);
    ctx->pc = 0x1BDD64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x119310u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00119310_0x119310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDD68u; }
    }
    if (ctx->pc != 0x1BDD68u) { return; }
    ctx->pc = 0x1BDD68u;
    // 0x1bdd68: 0xc04633e
    ctx->pc = 0x1BDD68u;
    SET_GPR_U32(ctx, 31, 0x1BDD70u);
    ctx->pc = 0x1BDD6Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x118CF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118CF8_0x118cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDD70u; }
    }
    if (ctx->pc != 0x1BDD70u) { return; }
    ctx->pc = 0x1BDD70u;
    // 0x1bdd70: 0x8e830000
    ctx->pc = 0x1bdd70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bdd74: 0x24630001
    ctx->pc = 0x1bdd74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bdd78: 0xae830000
    ctx->pc = 0x1bdd78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x1bdd7c: 0xdfbf0070
    ctx->pc = 0x1bdd7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1bdd80:
    // 0x1bdd80: 0x7bb60060
    ctx->pc = 0x1bdd80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bdd84: 0x7bb50050
    ctx->pc = 0x1bdd84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bdd88: 0x7bb40040
    ctx->pc = 0x1bdd88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bdd8c: 0x7bb30030
    ctx->pc = 0x1bdd8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bdd90: 0x7bb20020
    ctx->pc = 0x1bdd90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bdd94: 0x7bb10010
    ctx->pc = 0x1bdd94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bdd98: 0x7bb00000
    ctx->pc = 0x1bdd98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdd9c: 0x3e00008
    ctx->pc = 0x1BDD9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDDA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BD980u: goto label_1bd980;
            case 0x1BD994u: goto label_1bd994;
            case 0x1BD99Cu: goto label_1bd99c;
            case 0x1BD9E0u: goto label_1bd9e0;
            case 0x1BD9E8u: goto label_1bd9e8;
            case 0x1BD9F8u: goto label_1bd9f8;
            case 0x1BDA34u: goto label_1bda34;
            case 0x1BDA3Cu: goto label_1bda3c;
            case 0x1BDA54u: goto label_1bda54;
            case 0x1BDA6Cu: goto label_1bda6c;
            case 0x1BDA70u: goto label_1bda70;
            case 0x1BDA9Cu: goto label_1bda9c;
            case 0x1BDAA0u: goto label_1bdaa0;
            case 0x1BDAC4u: goto label_1bdac4;
            case 0x1BDAD0u: goto label_1bdad0;
            case 0x1BDAD4u: goto label_1bdad4;
            case 0x1BDB74u: goto label_1bdb74;
            case 0x1BDBB8u: goto label_1bdbb8;
            case 0x1BDBC0u: goto label_1bdbc0;
            case 0x1BDC0Cu: goto label_1bdc0c;
            case 0x1BDC10u: goto label_1bdc10;
            case 0x1BDCD0u: goto label_1bdcd0;
            case 0x1BDCD8u: goto label_1bdcd8;
            case 0x1BDCE0u: goto label_1bdce0;
            case 0x1BDCE8u: goto label_1bdce8;
            case 0x1BDD04u: goto label_1bdd04;
            case 0x1BDD40u: goto label_1bdd40;
            case 0x1BDD44u: goto label_1bdd44;
            case 0x1BDD4Cu: goto label_1bdd4c;
            case 0x1BDD80u: goto label_1bdd80;
            case 0x1BDDFCu: goto label_1bddfc;
            case 0x1BDE04u: goto label_1bde04;
            case 0x1BDE0Cu: goto label_1bde0c;
            case 0x1BDE44u: goto label_1bde44;
            case 0x1BDEACu: goto label_1bdeac;
            case 0x1BDEB4u: goto label_1bdeb4;
            case 0x1BDEBCu: goto label_1bdebc;
            case 0x1BDED0u: goto label_1bded0;
            case 0x1BDF34u: goto label_1bdf34;
            case 0x1BDF50u: goto label_1bdf50;
            case 0x1BDFB0u: goto label_1bdfb0;
            case 0x1BDFECu: goto label_1bdfec;
            case 0x1BDFF8u: goto label_1bdff8;
            case 0x1BE000u: goto label_1be000;
            case 0x1BE040u: goto label_1be040;
            case 0x1BE120u: goto label_1be120;
            case 0x1BE15Cu: goto label_1be15c;
            case 0x1BE178u: goto label_1be178;
            case 0x1BE17Cu: goto label_1be17c;
            case 0x1BE1B0u: goto label_1be1b0;
            case 0x1BE1E8u: goto label_1be1e8;
            case 0x1BE1FCu: goto label_1be1fc;
            case 0x1BE20Cu: goto label_1be20c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BDDA4u;
    // 0x1bdda4: 0x0
    ctx->pc = 0x1bdda4u;
    // NOP
    // 0x1bdda8: 0x0
    ctx->pc = 0x1bdda8u;
    // NOP
    // 0x1bddac: 0x0
    ctx->pc = 0x1bddacu;
    // NOP
    // 0x1bddb0: 0x27bdfed0
    ctx->pc = 0x1bddb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1bddb4: 0x3c050025
    ctx->pc = 0x1bddb4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1bddb8: 0xffbf0020
    ctx->pc = 0x1bddb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1bddbc: 0x24a50440
    ctx->pc = 0x1bddbcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1088));
    // 0x1bddc0: 0x7fb10010
    ctx->pc = 0x1bddc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bddc4: 0x24061234
    ctx->pc = 0x1bddc4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4660));
    // 0x1bddc8: 0x80882d
    ctx->pc = 0x1bddc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bddcc: 0x7fb00000
    ctx->pc = 0x1bddccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bddd0: 0xc06f918
    ctx->pc = 0x1BDDD0u;
    SET_GPR_U32(ctx, 31, 0x1BDDD8u);
    ctx->pc = 0x1BDDD4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1BE460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE460_0x1be460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDDD8u; }
    }
    if (ctx->pc != 0x1BDDD8u) { return; }
    ctx->pc = 0x1BDDD8u;
    // 0x1bddd8: 0x3c040025
    ctx->pc = 0x1bddd8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)37 << 16));
    // 0x1bdddc: 0x27a50030
    ctx->pc = 0x1bdddcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1bdde0: 0x24840420
    ctx->pc = 0x1bdde0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1056));
    // 0x1bdde4: 0x26260010
    ctx->pc = 0x1bdde4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 16));
    // 0x1bdde8: 0xc0467b0
    ctx->pc = 0x1BDDE8u;
    SET_GPR_U32(ctx, 31, 0x1BDDF0u);
    ctx->pc = 0x1BDDECu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x119EC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00119EC0_0x119ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDDF0u; }
    }
    if (ctx->pc != 0x1BDDF0u) { return; }
    ctx->pc = 0x1BDDF0u;
    // 0x1bddf0: 0x4410006
    ctx->pc = 0x1BDDF0u;
    {
        const bool branch_taken_0x1bddf0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BDDF4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1bddf0) {
            ctx->pc = 0x1BDE0Cu;
            goto label_1bde0c;
        }
    }
    ctx->pc = 0x1BDDF8u;
    // 0x1bddf8: 0x220202d
    ctx->pc = 0x1bddf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bddfc:
    // 0x1bddfc: 0xc06f660
    ctx->pc = 0x1BDDFCu;
    SET_GPR_U32(ctx, 31, 0x1BDE04u);
    ctx->pc = 0x1BDE00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1BD980u;
    goto label_1bd980;
    ctx->pc = 0x1BDE04u;
label_1bde04:
    // 0x1bde04: 0x1000000f
    ctx->pc = 0x1BDE04u;
    {
        const bool branch_taken_0x1bde04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BDE08u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1bde04) {
            ctx->pc = 0x1BDE44u;
            goto label_1bde44;
        }
    }
    ctx->pc = 0x1BDE0Cu;
label_1bde0c:
    // 0x1bde0c: 0xc06f8ec
    ctx->pc = 0x1BDE0Cu;
    SET_GPR_U32(ctx, 31, 0x1BDE14u);
    ctx->pc = 0x1BDE10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1BE3B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE3B0_0x1be3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDE14u; }
    }
    if (ctx->pc != 0x1BDE14u) { return; }
    ctx->pc = 0x1BDE14u;
    // 0x1bde14: 0x440fff9
    ctx->pc = 0x1BDE14u;
    {
        const bool branch_taken_0x1bde14 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BDE18u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1bde14) {
            ctx->pc = 0x1BDDFCu;
            goto label_1bddfc;
        }
    }
    ctx->pc = 0x1BDE1Cu;
    // 0x1bde1c: 0x8e230000
    ctx->pc = 0x1bde1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bde20: 0x24630001
    ctx->pc = 0x1bde20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bde24: 0xae230000
    ctx->pc = 0x1bde24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1bde28: 0xae200004
    ctx->pc = 0x1bde28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1bde2c: 0xae200024
    ctx->pc = 0x1bde2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x1bde30: 0xae200028
    ctx->pc = 0x1bde30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x1bde34: 0xae20002c
    ctx->pc = 0x1bde34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x1bde38: 0xae200034
    ctx->pc = 0x1bde38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x1bde3c: 0xae200038
    ctx->pc = 0x1bde3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    // 0x1bde40: 0xdfbf0020
    ctx->pc = 0x1bde40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1bde44:
    // 0x1bde44: 0x7bb10010
    ctx->pc = 0x1bde44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bde48: 0x7bb00000
    ctx->pc = 0x1bde48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bde4c: 0x3e00008
    ctx->pc = 0x1BDE4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDE50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BD980u: goto label_1bd980;
            case 0x1BD994u: goto label_1bd994;
            case 0x1BD99Cu: goto label_1bd99c;
            case 0x1BD9E0u: goto label_1bd9e0;
            case 0x1BD9E8u: goto label_1bd9e8;
            case 0x1BD9F8u: goto label_1bd9f8;
            case 0x1BDA34u: goto label_1bda34;
            case 0x1BDA3Cu: goto label_1bda3c;
            case 0x1BDA54u: goto label_1bda54;
            case 0x1BDA6Cu: goto label_1bda6c;
            case 0x1BDA70u: goto label_1bda70;
            case 0x1BDA9Cu: goto label_1bda9c;
            case 0x1BDAA0u: goto label_1bdaa0;
            case 0x1BDAC4u: goto label_1bdac4;
            case 0x1BDAD0u: goto label_1bdad0;
            case 0x1BDAD4u: goto label_1bdad4;
            case 0x1BDB74u: goto label_1bdb74;
            case 0x1BDBB8u: goto label_1bdbb8;
            case 0x1BDBC0u: goto label_1bdbc0;
            case 0x1BDC0Cu: goto label_1bdc0c;
            case 0x1BDC10u: goto label_1bdc10;
            case 0x1BDCD0u: goto label_1bdcd0;
            case 0x1BDCD8u: goto label_1bdcd8;
            case 0x1BDCE0u: goto label_1bdce0;
            case 0x1BDCE8u: goto label_1bdce8;
            case 0x1BDD04u: goto label_1bdd04;
            case 0x1BDD40u: goto label_1bdd40;
            case 0x1BDD44u: goto label_1bdd44;
            case 0x1BDD4Cu: goto label_1bdd4c;
            case 0x1BDD80u: goto label_1bdd80;
            case 0x1BDDFCu: goto label_1bddfc;
            case 0x1BDE04u: goto label_1bde04;
            case 0x1BDE0Cu: goto label_1bde0c;
            case 0x1BDE44u: goto label_1bde44;
            case 0x1BDEACu: goto label_1bdeac;
            case 0x1BDEB4u: goto label_1bdeb4;
            case 0x1BDEBCu: goto label_1bdebc;
            case 0x1BDED0u: goto label_1bded0;
            case 0x1BDF34u: goto label_1bdf34;
            case 0x1BDF50u: goto label_1bdf50;
            case 0x1BDFB0u: goto label_1bdfb0;
            case 0x1BDFECu: goto label_1bdfec;
            case 0x1BDFF8u: goto label_1bdff8;
            case 0x1BE000u: goto label_1be000;
            case 0x1BE040u: goto label_1be040;
            case 0x1BE120u: goto label_1be120;
            case 0x1BE15Cu: goto label_1be15c;
            case 0x1BE178u: goto label_1be178;
            case 0x1BE17Cu: goto label_1be17c;
            case 0x1BE1B0u: goto label_1be1b0;
            case 0x1BE1E8u: goto label_1be1e8;
            case 0x1BE1FCu: goto label_1be1fc;
            case 0x1BE20Cu: goto label_1be20c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BDE54u;
    // 0x1bde54: 0x0
    ctx->pc = 0x1bde54u;
    // NOP
    // 0x1bde58: 0x0
    ctx->pc = 0x1bde58u;
    // NOP
    // 0x1bde5c: 0x0
    ctx->pc = 0x1bde5cu;
    // NOP
    // 0x1bde60: 0x27bdff10
    ctx->pc = 0x1bde60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1bde64: 0x3c050025
    ctx->pc = 0x1bde64u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1bde68: 0xffbf0060
    ctx->pc = 0x1bde68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1bde6c: 0x24a50468
    ctx->pc = 0x1bde6cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1128));
    // 0x1bde70: 0x7fb50050
    ctx->pc = 0x1bde70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1bde74: 0x7fb40040
    ctx->pc = 0x1bde74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1bde78: 0x80a82d
    ctx->pc = 0x1bde78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde7c: 0x7fb30030
    ctx->pc = 0x1bde7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bde80: 0x27a40070
    ctx->pc = 0x1bde80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 112));
    // 0x1bde84: 0x7fb20020
    ctx->pc = 0x1bde84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bde88: 0x7fb10010
    ctx->pc = 0x1bde88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bde8c: 0xc042bf0
    ctx->pc = 0x1BDE8Cu;
    SET_GPR_U32(ctx, 31, 0x1BDE94u);
    ctx->pc = 0x1BDE90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDE94u; }
    }
    if (ctx->pc != 0x1BDE94u) { return; }
    ctx->pc = 0x1BDE94u;
    // 0x1bde94: 0x27a40070
    ctx->pc = 0x1bde94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 112));
    // 0x1bde98: 0xc04673c
    ctx->pc = 0x1BDE98u;
    SET_GPR_U32(ctx, 31, 0x1BDEA0u);
    ctx->pc = 0x1BDE9Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 511));
    ctx->pc = 0x119CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00119CF0_0x119cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDEA0u; }
    }
    if (ctx->pc != 0x1BDEA0u) { return; }
    ctx->pc = 0x1BDEA0u;
    // 0x1bdea0: 0x40282d
    ctx->pc = 0x1bdea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdea4: 0x4a10005
    ctx->pc = 0x1BDEA4u;
    {
        const bool branch_taken_0x1bdea4 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1bdea4) {
            ctx->pc = 0x1BDEBCu;
            goto label_1bdebc;
        }
    }
    ctx->pc = 0x1BDEACu;
label_1bdeac:
    // 0x1bdeac: 0xc06f660
    ctx->pc = 0x1BDEACu;
    SET_GPR_U32(ctx, 31, 0x1BDEB4u);
    ctx->pc = 0x1BDEB0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1BD980u;
    goto label_1bd980;
    ctx->pc = 0x1BDEB4u;
label_1bdeb4:
    // 0x1bdeb4: 0x10000026
    ctx->pc = 0x1BDEB4u;
    {
        const bool branch_taken_0x1bdeb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BDEB8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x1bdeb4) {
            ctx->pc = 0x1BDF50u;
            goto label_1bdf50;
        }
    }
    ctx->pc = 0x1BDEBCu;
label_1bdebc:
    // 0x1bdebc: 0x8eb0003c
    ctx->pc = 0x1bdebcu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x1bdec0: 0xa02d
    ctx->pc = 0x1bdec0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdec4: 0x8e130004
    ctx->pc = 0x1bdec4u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bdec8: 0x1000001a
    ctx->pc = 0x1BDEC8u;
    {
        const bool branch_taken_0x1bdec8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BDECCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8));
        if (branch_taken_0x1bdec8) {
            ctx->pc = 0x1BDF34u;
            goto label_1bdf34;
        }
    }
    ctx->pc = 0x1BDED0u;
label_1bded0:
    // 0x1bded0: 0x3c020023
    ctx->pc = 0x1bded0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1bded4: 0x141880
    ctx->pc = 0x1bded4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 2));
    // 0x1bded8: 0x24424ff8
    ctx->pc = 0x1bded8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20472));
    // 0x1bdedc: 0x8e120000
    ctx->pc = 0x1bdedcu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bdee0: 0x431021
    ctx->pc = 0x1bdee0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bdee4: 0x8e110004
    ctx->pc = 0x1bdee4u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bdee8: 0x8c450000
    ctx->pc = 0x1bdee8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bdeec: 0x27a40070
    ctx->pc = 0x1bdeecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 112));
    // 0x1bdef0: 0xc06f914
    ctx->pc = 0x1BDEF0u;
    SET_GPR_U32(ctx, 31, 0x1BDEF8u);
    ctx->pc = 0x1BDEF4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8));
    ctx->pc = 0x1BE450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE450_0x1be450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDEF8u; }
    }
    if (ctx->pc != 0x1BDEF8u) { return; }
    ctx->pc = 0x1BDEF8u;
    // 0x1bdef8: 0x27a40070
    ctx->pc = 0x1bdef8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 112));
    // 0x1bdefc: 0x24050602
    ctx->pc = 0x1bdefcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1538));
    // 0x1bdf00: 0xc04629c
    ctx->pc = 0x1BDF00u;
    SET_GPR_U32(ctx, 31, 0x1BDF08u);
    ctx->pc = 0x1BDF04u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 438));
    ctx->pc = 0x118A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118A70_0x118a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDF08u; }
    }
    if (ctx->pc != 0x1BDF08u) { return; }
    ctx->pc = 0x1BDF08u;
    // 0x1bdf08: 0x440ffe8
    ctx->pc = 0x1BDF08u;
    {
        const bool branch_taken_0x1bdf08 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BDF0Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1bdf08) {
            ctx->pc = 0x1BDEACu;
            goto label_1bdeac;
        }
    }
    ctx->pc = 0x1BDF10u;
    // 0x1bdf10: 0xaea5002c
    ctx->pc = 0x1bdf10u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 5));
    // 0x1bdf14: 0x220302d
    ctx->pc = 0x1bdf14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf18: 0x8ea2003c
    ctx->pc = 0x1bdf18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x1bdf1c: 0x8ea4002c
    ctx->pc = 0x1bdf1cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x1bdf20: 0xc0464c4
    ctx->pc = 0x1BDF20u;
    SET_GPR_U32(ctx, 31, 0x1BDF28u);
    ctx->pc = 0x1BDF24u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x119310u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00119310_0x119310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDF28u; }
    }
    if (ctx->pc != 0x1BDF28u) { return; }
    ctx->pc = 0x1BDF28u;
    // 0x1bdf28: 0xc04633e
    ctx->pc = 0x1BDF28u;
    SET_GPR_U32(ctx, 31, 0x1BDF30u);
    ctx->pc = 0x1BDF2Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 44)));
    ctx->pc = 0x118CF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118CF8_0x118cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDF30u; }
    }
    if (ctx->pc != 0x1BDF30u) { return; }
    ctx->pc = 0x1BDF30u;
    // 0x1bdf30: 0x26940001
    ctx->pc = 0x1bdf30u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_1bdf34:
    // 0x1bdf34: 0x293182a
    ctx->pc = 0x1bdf34u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 19)));
    // 0x1bdf38: 0x1460ffe5
    ctx->pc = 0x1BDF38u;
    {
        const bool branch_taken_0x1bdf38 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1bdf38) {
            ctx->pc = 0x1BDED0u;
            goto label_1bded0;
        }
    }
    ctx->pc = 0x1BDF40u;
    // 0x1bdf40: 0x8ea30000
    ctx->pc = 0x1bdf40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1bdf44: 0x24630001
    ctx->pc = 0x1bdf44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bdf48: 0xaea30000
    ctx->pc = 0x1bdf48u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x1bdf4c: 0xdfbf0060
    ctx->pc = 0x1bdf4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1bdf50:
    // 0x1bdf50: 0x7bb50050
    ctx->pc = 0x1bdf50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bdf54: 0x7bb40040
    ctx->pc = 0x1bdf54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bdf58: 0x7bb30030
    ctx->pc = 0x1bdf58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bdf5c: 0x7bb20020
    ctx->pc = 0x1bdf5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bdf60: 0x7bb10010
    ctx->pc = 0x1bdf60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bdf64: 0x7bb00000
    ctx->pc = 0x1bdf64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdf68: 0x3e00008
    ctx->pc = 0x1BDF68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDF6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BD980u: goto label_1bd980;
            case 0x1BD994u: goto label_1bd994;
            case 0x1BD99Cu: goto label_1bd99c;
            case 0x1BD9E0u: goto label_1bd9e0;
            case 0x1BD9E8u: goto label_1bd9e8;
            case 0x1BD9F8u: goto label_1bd9f8;
            case 0x1BDA34u: goto label_1bda34;
            case 0x1BDA3Cu: goto label_1bda3c;
            case 0x1BDA54u: goto label_1bda54;
            case 0x1BDA6Cu: goto label_1bda6c;
            case 0x1BDA70u: goto label_1bda70;
            case 0x1BDA9Cu: goto label_1bda9c;
            case 0x1BDAA0u: goto label_1bdaa0;
            case 0x1BDAC4u: goto label_1bdac4;
            case 0x1BDAD0u: goto label_1bdad0;
            case 0x1BDAD4u: goto label_1bdad4;
            case 0x1BDB74u: goto label_1bdb74;
            case 0x1BDBB8u: goto label_1bdbb8;
            case 0x1BDBC0u: goto label_1bdbc0;
            case 0x1BDC0Cu: goto label_1bdc0c;
            case 0x1BDC10u: goto label_1bdc10;
            case 0x1BDCD0u: goto label_1bdcd0;
            case 0x1BDCD8u: goto label_1bdcd8;
            case 0x1BDCE0u: goto label_1bdce0;
            case 0x1BDCE8u: goto label_1bdce8;
            case 0x1BDD04u: goto label_1bdd04;
            case 0x1BDD40u: goto label_1bdd40;
            case 0x1BDD44u: goto label_1bdd44;
            case 0x1BDD4Cu: goto label_1bdd4c;
            case 0x1BDD80u: goto label_1bdd80;
            case 0x1BDDFCu: goto label_1bddfc;
            case 0x1BDE04u: goto label_1bde04;
            case 0x1BDE0Cu: goto label_1bde0c;
            case 0x1BDE44u: goto label_1bde44;
            case 0x1BDEACu: goto label_1bdeac;
            case 0x1BDEB4u: goto label_1bdeb4;
            case 0x1BDEBCu: goto label_1bdebc;
            case 0x1BDED0u: goto label_1bded0;
            case 0x1BDF34u: goto label_1bdf34;
            case 0x1BDF50u: goto label_1bdf50;
            case 0x1BDFB0u: goto label_1bdfb0;
            case 0x1BDFECu: goto label_1bdfec;
            case 0x1BDFF8u: goto label_1bdff8;
            case 0x1BE000u: goto label_1be000;
            case 0x1BE040u: goto label_1be040;
            case 0x1BE120u: goto label_1be120;
            case 0x1BE15Cu: goto label_1be15c;
            case 0x1BE178u: goto label_1be178;
            case 0x1BE17Cu: goto label_1be17c;
            case 0x1BE1B0u: goto label_1be1b0;
            case 0x1BE1E8u: goto label_1be1e8;
            case 0x1BE1FCu: goto label_1be1fc;
            case 0x1BE20Cu: goto label_1be20c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BDF70u;
    // 0x1bdf70: 0x27bdfec0
    ctx->pc = 0x1bdf70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1bdf74: 0x24030002
    ctx->pc = 0x1bdf74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bdf78: 0xffbf0030
    ctx->pc = 0x1bdf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1bdf7c: 0x7fb20020
    ctx->pc = 0x1bdf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bdf80: 0x7fb10010
    ctx->pc = 0x1bdf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bdf84: 0x7fb00000
    ctx->pc = 0x1bdf84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bdf88: 0x80882d
    ctx->pc = 0x1bdf88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf8c: 0x8c840004
    ctx->pc = 0x1bdf8cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bdf90: 0x10830063
    ctx->pc = 0x1BDF90u;
    {
        const bool branch_taken_0x1bdf90 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1BDF94u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1bdf90) {
            ctx->pc = 0x1BE120u;
            goto label_1be120;
        }
    }
    ctx->pc = 0x1BDF98u;
    // 0x1bdf98: 0x10830029
    ctx->pc = 0x1BDF98u;
    {
        const bool branch_taken_0x1bdf98 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1bdf98) {
            ctx->pc = 0x1BE040u;
            goto label_1be040;
        }
    }
    ctx->pc = 0x1BDFA0u;
    // 0x1bdfa0: 0x10800003
    ctx->pc = 0x1BDFA0u;
    {
        const bool branch_taken_0x1bdfa0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bdfa0) {
            ctx->pc = 0x1BDFB0u;
            goto label_1bdfb0;
        }
    }
    ctx->pc = 0x1BDFA8u;
    // 0x1bdfa8: 0x10000074
    ctx->pc = 0x1BDFA8u;
    {
        const bool branch_taken_0x1bdfa8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BDFACu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x1bdfa8) {
            ctx->pc = 0x1BE17Cu;
            goto label_1be17c;
        }
    }
    ctx->pc = 0x1BDFB0u;
label_1bdfb0:
    // 0x1bdfb0: 0x8e250024
    ctx->pc = 0x1bdfb0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1bdfb4: 0x8e220018
    ctx->pc = 0x1bdfb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1bdfb8: 0x51840
    ctx->pc = 0x1bdfb8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1bdfbc: 0x651821
    ctx->pc = 0x1bdfbcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1bdfc0: 0x31880
    ctx->pc = 0x1bdfc0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bdfc4: 0x438021
    ctx->pc = 0x1bdfc4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bdfc8: 0x8e050000
    ctx->pc = 0x1bdfc8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bdfcc: 0xc06f904
    ctx->pc = 0x1BDFCCu;
    SET_GPR_U32(ctx, 31, 0x1BDFD4u);
    ctx->pc = 0x1BDFD0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1BE410u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE410_0x1be410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDFD4u; }
    }
    if (ctx->pc != 0x1BDFD4u) { return; }
    ctx->pc = 0x1BDFD4u;
    // 0x1bdfd4: 0x27a40040
    ctx->pc = 0x1bdfd4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bdfd8: 0x24050001
    ctx->pc = 0x1bdfd8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdfdc: 0xc04629c
    ctx->pc = 0x1BDFDCu;
    SET_GPR_U32(ctx, 31, 0x1BDFE4u);
    ctx->pc = 0x1BDFE0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x118A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118A70_0x118a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDFE4u; }
    }
    if (ctx->pc != 0x1BDFE4u) { return; }
    ctx->pc = 0x1BDFE4u;
    // 0x1bdfe4: 0x4410006
    ctx->pc = 0x1BDFE4u;
    {
        const bool branch_taken_0x1bdfe4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BDFE8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1bdfe4) {
            ctx->pc = 0x1BE000u;
            goto label_1be000;
        }
    }
    ctx->pc = 0x1BDFECu;
label_1bdfec:
    // 0x1bdfec: 0x220202d
    ctx->pc = 0x1bdfecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdff0: 0xc06f660
    ctx->pc = 0x1BDFF0u;
    SET_GPR_U32(ctx, 31, 0x1BDFF8u);
    ctx->pc = 0x1BDFF4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1BD980u;
    goto label_1bd980;
    ctx->pc = 0x1BDFF8u;
label_1bdff8:
    // 0x1bdff8: 0x1000005f
    ctx->pc = 0x1BDFF8u;
    {
        const bool branch_taken_0x1bdff8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bdff8) {
            ctx->pc = 0x1BE178u;
            goto label_1be178;
        }
    }
    ctx->pc = 0x1BE000u;
label_1be000:
    // 0x1be000: 0xae260028
    ctx->pc = 0x1be000u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 6));
    // 0x1be004: 0x8e050000
    ctx->pc = 0x1be004u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1be008: 0xc06f914
    ctx->pc = 0x1BE008u;
    SET_GPR_U32(ctx, 31, 0x1BE010u);
    ctx->pc = 0x1BE00Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1BE450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE450_0x1be450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE010u; }
    }
    if (ctx->pc != 0x1BE010u) { return; }
    ctx->pc = 0x1BE010u;
    // 0x1be010: 0x27a40040
    ctx->pc = 0x1be010u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1be014: 0x24050602
    ctx->pc = 0x1be014u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1538));
    // 0x1be018: 0xc04629c
    ctx->pc = 0x1BE018u;
    SET_GPR_U32(ctx, 31, 0x1BE020u);
    ctx->pc = 0x1BE01Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 438));
    ctx->pc = 0x118A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118A70_0x118a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE020u; }
    }
    if (ctx->pc != 0x1BE020u) { return; }
    ctx->pc = 0x1BE020u;
    // 0x1be020: 0x440fff2
    ctx->pc = 0x1BE020u;
    {
        const bool branch_taken_0x1be020 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BE024u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1be020) {
            ctx->pc = 0x1BDFECu;
            goto label_1bdfec;
        }
    }
    ctx->pc = 0x1BE028u;
    // 0x1be028: 0xae26002c
    ctx->pc = 0x1be028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 6));
    // 0x1be02c: 0x8e230004
    ctx->pc = 0x1be02cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1be030: 0x24630001
    ctx->pc = 0x1be030u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1be034: 0xae230004
    ctx->pc = 0x1be034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1be038: 0x1000004f
    ctx->pc = 0x1BE038u;
    {
        const bool branch_taken_0x1be038 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BE03Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
        if (branch_taken_0x1be038) {
            ctx->pc = 0x1BE178u;
            goto label_1be178;
        }
    }
    ctx->pc = 0x1BE040u;
label_1be040:
    // 0x1be040: 0x8e270024
    ctx->pc = 0x1be040u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1be044: 0x8e220018
    ctx->pc = 0x1be044u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1be048: 0x8e240028
    ctx->pc = 0x1be048u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1be04c: 0x8e25000c
    ctx->pc = 0x1be04cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1be050: 0x8e260014
    ctx->pc = 0x1be050u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1be054: 0x71840
    ctx->pc = 0x1be054u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 1));
    // 0x1be058: 0x671821
    ctx->pc = 0x1be058u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1be05c: 0x31880
    ctx->pc = 0x1be05cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1be060: 0xc04642c
    ctx->pc = 0x1BE060u;
    SET_GPR_U32(ctx, 31, 0x1BE068u);
    ctx->pc = 0x1BE064u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1190B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001190B0_0x1190b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE068u; }
    }
    if (ctx->pc != 0x1BE068u) { return; }
    ctx->pc = 0x1BE068u;
    // 0x1be068: 0x440ffe0
    ctx->pc = 0x1BE068u;
    {
        const bool branch_taken_0x1be068 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BE06Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1be068) {
            ctx->pc = 0x1BDFECu;
            goto label_1bdfec;
        }
    }
    ctx->pc = 0x1BE070u;
    // 0x1be070: 0x8e24002c
    ctx->pc = 0x1be070u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1be074: 0x8e25000c
    ctx->pc = 0x1be074u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1be078: 0xc0464c4
    ctx->pc = 0x1BE078u;
    SET_GPR_U32(ctx, 31, 0x1BE080u);
    ctx->pc = 0x1BE07Cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x119310u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00119310_0x119310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE080u; }
    }
    if (ctx->pc != 0x1BE080u) { return; }
    ctx->pc = 0x1BE080u;
    // 0x1be080: 0x440ffda
    ctx->pc = 0x1BE080u;
    {
        const bool branch_taken_0x1be080 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BE084u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1be080) {
            ctx->pc = 0x1BDFECu;
            goto label_1bdfec;
        }
    }
    ctx->pc = 0x1BE088u;
    // 0x1be088: 0x8e240030
    ctx->pc = 0x1be088u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1be08c: 0x3c0342c8
    ctx->pc = 0x1be08cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)17096 << 16));
    // 0x1be090: 0x44830000
    ctx->pc = 0x1be090u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1be094: 0x921821
    ctx->pc = 0x1be094u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1be098: 0xae230030
    ctx->pc = 0x1be098u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
    // 0x1be09c: 0x8e230034
    ctx->pc = 0x1be09cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1be0a0: 0x721821
    ctx->pc = 0x1be0a0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1be0a4: 0xae230034
    ctx->pc = 0x1be0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x1be0a8: 0xc6210034
    ctx->pc = 0x1be0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be0ac: 0x8e230020
    ctx->pc = 0x1be0acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1be0b0: 0x468008a0
    ctx->pc = 0x1be0b0u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1be0b4: 0x31a40
    ctx->pc = 0x1be0b4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 9));
    // 0x1be0b8: 0x44830800
    ctx->pc = 0x1be0b8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x1be0bc: 0x0
    ctx->pc = 0x1be0bcu;
    // NOP
    // 0x1be0c0: 0x46800860
    ctx->pc = 0x1be0c0u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1be0c4: 0x46011043
    ctx->pc = 0x1be0c4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x1be0c8: 0x46010002
    ctx->pc = 0x1be0c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1be0cc: 0xe6200038
    ctx->pc = 0x1be0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x1be0d0: 0x8e040004
    ctx->pc = 0x1be0d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1be0d4: 0x8e230030
    ctx->pc = 0x1be0d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1be0d8: 0x64182a
    ctx->pc = 0x1be0d8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x1be0dc: 0x14600026
    ctx->pc = 0x1BE0DCu;
    {
        const bool branch_taken_0x1be0dc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1be0dc) {
            ctx->pc = 0x1BE178u;
            goto label_1be178;
        }
    }
    ctx->pc = 0x1BE0E4u;
    // 0x1be0e4: 0xae040008
    ctx->pc = 0x1be0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x1be0e8: 0x8e240010
    ctx->pc = 0x1be0e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1be0ec: 0x8e230034
    ctx->pc = 0x1be0ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1be0f0: 0x641821
    ctx->pc = 0x1be0f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1be0f4: 0x2463ffff
    ctx->pc = 0x1be0f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1be0f8: 0x64001a
    ctx->pc = 0x1be0f8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1be0fc: 0x0
    ctx->pc = 0x1be0fcu;
    // NOP
    // 0x1be100: 0x0
    ctx->pc = 0x1be100u;
    // NOP
    // 0x1be104: 0x1812
    ctx->pc = 0x1be104u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x1be108: 0x831818
    ctx->pc = 0x1be108u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1be10c: 0xae230034
    ctx->pc = 0x1be10cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x1be110: 0x8e230004
    ctx->pc = 0x1be110u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1be114: 0x24630001
    ctx->pc = 0x1be114u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1be118: 0x10000017
    ctx->pc = 0x1BE118u;
    {
        const bool branch_taken_0x1be118 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BE11Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1be118) {
            ctx->pc = 0x1BE178u;
            goto label_1be178;
        }
    }
    ctx->pc = 0x1BE120u;
label_1be120:
    // 0x1be120: 0xc04633e
    ctx->pc = 0x1BE120u;
    SET_GPR_U32(ctx, 31, 0x1BE128u);
    ctx->pc = 0x1BE124u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    ctx->pc = 0x118CF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118CF8_0x118cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE128u; }
    }
    if (ctx->pc != 0x1BE128u) { return; }
    ctx->pc = 0x1BE128u;
    // 0x1be128: 0xc04633e
    ctx->pc = 0x1BE128u;
    SET_GPR_U32(ctx, 31, 0x1BE130u);
    ctx->pc = 0x1BE12Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 44)));
    ctx->pc = 0x118CF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118CF8_0x118cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE130u; }
    }
    if (ctx->pc != 0x1BE130u) { return; }
    ctx->pc = 0x1BE130u;
    // 0x1be130: 0xae200028
    ctx->pc = 0x1be130u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x1be134: 0xae20002c
    ctx->pc = 0x1be134u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x1be138: 0x8e230024
    ctx->pc = 0x1be138u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1be13c: 0x24640001
    ctx->pc = 0x1be13cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1be140: 0xae240024
    ctx->pc = 0x1be140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 4));
    // 0x1be144: 0x8e23001c
    ctx->pc = 0x1be144u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1be148: 0x83082a
    ctx->pc = 0x1be148u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x1be14c: 0x10200003
    ctx->pc = 0x1BE14Cu;
    {
        const bool branch_taken_0x1be14c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1be14c) {
            ctx->pc = 0x1BE15Cu;
            goto label_1be15c;
        }
    }
    ctx->pc = 0x1BE154u;
    // 0x1be154: 0x10000008
    ctx->pc = 0x1BE154u;
    {
        const bool branch_taken_0x1be154 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BE158u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x1be154) {
            ctx->pc = 0x1BE178u;
            goto label_1be178;
        }
    }
    ctx->pc = 0x1BE15Cu;
label_1be15c:
    // 0x1be15c: 0xc06f900
    ctx->pc = 0x1BE15Cu;
    SET_GPR_U32(ctx, 31, 0x1BE164u);
    ctx->pc = 0x1BE400u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE400_0x1be400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE164u; }
    }
    if (ctx->pc != 0x1BE164u) { return; }
    ctx->pc = 0x1BE164u;
    // 0x1be164: 0x440ffa1
    ctx->pc = 0x1BE164u;
    {
        const bool branch_taken_0x1be164 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BE168u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1be164) {
            ctx->pc = 0x1BDFECu;
            goto label_1bdfec;
        }
    }
    ctx->pc = 0x1BE16Cu;
    // 0x1be16c: 0x8e230000
    ctx->pc = 0x1be16cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1be170: 0x24630001
    ctx->pc = 0x1be170u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1be174: 0xae230000
    ctx->pc = 0x1be174u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1be178:
    // 0x1be178: 0xdfbf0030
    ctx->pc = 0x1be178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1be17c:
    // 0x1be17c: 0x7bb20020
    ctx->pc = 0x1be17cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be180: 0x7bb10010
    ctx->pc = 0x1be180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be184: 0x7bb00000
    ctx->pc = 0x1be184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be188: 0x3e00008
    ctx->pc = 0x1BE188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE18Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BD980u: goto label_1bd980;
            case 0x1BD994u: goto label_1bd994;
            case 0x1BD99Cu: goto label_1bd99c;
            case 0x1BD9E0u: goto label_1bd9e0;
            case 0x1BD9E8u: goto label_1bd9e8;
            case 0x1BD9F8u: goto label_1bd9f8;
            case 0x1BDA34u: goto label_1bda34;
            case 0x1BDA3Cu: goto label_1bda3c;
            case 0x1BDA54u: goto label_1bda54;
            case 0x1BDA6Cu: goto label_1bda6c;
            case 0x1BDA70u: goto label_1bda70;
            case 0x1BDA9Cu: goto label_1bda9c;
            case 0x1BDAA0u: goto label_1bdaa0;
            case 0x1BDAC4u: goto label_1bdac4;
            case 0x1BDAD0u: goto label_1bdad0;
            case 0x1BDAD4u: goto label_1bdad4;
            case 0x1BDB74u: goto label_1bdb74;
            case 0x1BDBB8u: goto label_1bdbb8;
            case 0x1BDBC0u: goto label_1bdbc0;
            case 0x1BDC0Cu: goto label_1bdc0c;
            case 0x1BDC10u: goto label_1bdc10;
            case 0x1BDCD0u: goto label_1bdcd0;
            case 0x1BDCD8u: goto label_1bdcd8;
            case 0x1BDCE0u: goto label_1bdce0;
            case 0x1BDCE8u: goto label_1bdce8;
            case 0x1BDD04u: goto label_1bdd04;
            case 0x1BDD40u: goto label_1bdd40;
            case 0x1BDD44u: goto label_1bdd44;
            case 0x1BDD4Cu: goto label_1bdd4c;
            case 0x1BDD80u: goto label_1bdd80;
            case 0x1BDDFCu: goto label_1bddfc;
            case 0x1BDE04u: goto label_1bde04;
            case 0x1BDE0Cu: goto label_1bde0c;
            case 0x1BDE44u: goto label_1bde44;
            case 0x1BDEACu: goto label_1bdeac;
            case 0x1BDEB4u: goto label_1bdeb4;
            case 0x1BDEBCu: goto label_1bdebc;
            case 0x1BDED0u: goto label_1bded0;
            case 0x1BDF34u: goto label_1bdf34;
            case 0x1BDF50u: goto label_1bdf50;
            case 0x1BDFB0u: goto label_1bdfb0;
            case 0x1BDFECu: goto label_1bdfec;
            case 0x1BDFF8u: goto label_1bdff8;
            case 0x1BE000u: goto label_1be000;
            case 0x1BE040u: goto label_1be040;
            case 0x1BE120u: goto label_1be120;
            case 0x1BE15Cu: goto label_1be15c;
            case 0x1BE178u: goto label_1be178;
            case 0x1BE17Cu: goto label_1be17c;
            case 0x1BE1B0u: goto label_1be1b0;
            case 0x1BE1E8u: goto label_1be1e8;
            case 0x1BE1FCu: goto label_1be1fc;
            case 0x1BE20Cu: goto label_1be20c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BE190u;
    // 0x1be190: 0x24030001
    ctx->pc = 0x1be190u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be194: 0x3c010032
    ctx->pc = 0x1be194u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1be198: 0xac2344e0
    ctx->pc = 0x1be198u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17632), GPR_U32(ctx, 3));
    // 0x1be19c: 0x3c0342c8
    ctx->pc = 0x1be19cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)17096 << 16));
    // 0x1be1a0: 0xac800008
    ctx->pc = 0x1be1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1be1a4: 0x3e00008
    ctx->pc = 0x1BE1A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE1A8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BD980u: goto label_1bd980;
            case 0x1BD994u: goto label_1bd994;
            case 0x1BD99Cu: goto label_1bd99c;
            case 0x1BD9E0u: goto label_1bd9e0;
            case 0x1BD9E8u: goto label_1bd9e8;
            case 0x1BD9F8u: goto label_1bd9f8;
            case 0x1BDA34u: goto label_1bda34;
            case 0x1BDA3Cu: goto label_1bda3c;
            case 0x1BDA54u: goto label_1bda54;
            case 0x1BDA6Cu: goto label_1bda6c;
            case 0x1BDA70u: goto label_1bda70;
            case 0x1BDA9Cu: goto label_1bda9c;
            case 0x1BDAA0u: goto label_1bdaa0;
            case 0x1BDAC4u: goto label_1bdac4;
            case 0x1BDAD0u: goto label_1bdad0;
            case 0x1BDAD4u: goto label_1bdad4;
            case 0x1BDB74u: goto label_1bdb74;
            case 0x1BDBB8u: goto label_1bdbb8;
            case 0x1BDBC0u: goto label_1bdbc0;
            case 0x1BDC0Cu: goto label_1bdc0c;
            case 0x1BDC10u: goto label_1bdc10;
            case 0x1BDCD0u: goto label_1bdcd0;
            case 0x1BDCD8u: goto label_1bdcd8;
            case 0x1BDCE0u: goto label_1bdce0;
            case 0x1BDCE8u: goto label_1bdce8;
            case 0x1BDD04u: goto label_1bdd04;
            case 0x1BDD40u: goto label_1bdd40;
            case 0x1BDD44u: goto label_1bdd44;
            case 0x1BDD4Cu: goto label_1bdd4c;
            case 0x1BDD80u: goto label_1bdd80;
            case 0x1BDDFCu: goto label_1bddfc;
            case 0x1BDE04u: goto label_1bde04;
            case 0x1BDE0Cu: goto label_1bde0c;
            case 0x1BDE44u: goto label_1bde44;
            case 0x1BDEACu: goto label_1bdeac;
            case 0x1BDEB4u: goto label_1bdeb4;
            case 0x1BDEBCu: goto label_1bdebc;
            case 0x1BDED0u: goto label_1bded0;
            case 0x1BDF34u: goto label_1bdf34;
            case 0x1BDF50u: goto label_1bdf50;
            case 0x1BDFB0u: goto label_1bdfb0;
            case 0x1BDFECu: goto label_1bdfec;
            case 0x1BDFF8u: goto label_1bdff8;
            case 0x1BE000u: goto label_1be000;
            case 0x1BE040u: goto label_1be040;
            case 0x1BE120u: goto label_1be120;
            case 0x1BE15Cu: goto label_1be15c;
            case 0x1BE178u: goto label_1be178;
            case 0x1BE17Cu: goto label_1be17c;
            case 0x1BE1B0u: goto label_1be1b0;
            case 0x1BE1E8u: goto label_1be1e8;
            case 0x1BE1FCu: goto label_1be1fc;
            case 0x1BE20Cu: goto label_1be20c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BE1ACu;
    // 0x1be1ac: 0x0
    ctx->pc = 0x1be1acu;
    // NOP
label_1be1b0:
    // 0x1be1b0: 0x27bdffe0
    ctx->pc = 0x1be1b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1be1b4: 0x3c010032
    ctx->pc = 0x1be1b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1be1b8: 0xffbf0010
    ctx->pc = 0x1be1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1be1bc: 0x24030002
    ctx->pc = 0x1be1bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1be1c0: 0x7fb00000
    ctx->pc = 0x1be1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1be1c4: 0x8c3044f0
    ctx->pc = 0x1be1c4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 1), 17648)));
    // 0x1be1c8: 0x3c010032
    ctx->pc = 0x1be1c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1be1cc: 0x1200000f
    ctx->pc = 0x1BE1CCu;
    {
        const bool branch_taken_0x1be1cc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BE1D0u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 17632), GPR_U32(ctx, 3));
        if (branch_taken_0x1be1cc) {
            ctx->pc = 0x1BE20Cu;
            goto label_1be20c;
        }
    }
    ctx->pc = 0x1BE1D4u;
    // 0x1be1d4: 0x8e040028
    ctx->pc = 0x1be1d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1be1d8: 0x10800003
    ctx->pc = 0x1BE1D8u;
    {
        const bool branch_taken_0x1be1d8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1be1d8) {
            ctx->pc = 0x1BE1E8u;
            goto label_1be1e8;
        }
    }
    ctx->pc = 0x1BE1E0u;
    // 0x1be1e0: 0xc04633e
    ctx->pc = 0x1BE1E0u;
    SET_GPR_U32(ctx, 31, 0x1BE1E8u);
    ctx->pc = 0x118CF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118CF8_0x118cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE1E8u; }
    }
    if (ctx->pc != 0x1BE1E8u) { return; }
    ctx->pc = 0x1BE1E8u;
label_1be1e8:
    // 0x1be1e8: 0x8e04002c
    ctx->pc = 0x1be1e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1be1ec: 0x10800003
    ctx->pc = 0x1BE1ECu;
    {
        const bool branch_taken_0x1be1ec = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1be1ec) {
            ctx->pc = 0x1BE1FCu;
            goto label_1be1fc;
        }
    }
    ctx->pc = 0x1BE1F4u;
    // 0x1be1f4: 0xc04633e
    ctx->pc = 0x1BE1F4u;
    SET_GPR_U32(ctx, 31, 0x1BE1FCu);
    ctx->pc = 0x118CF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118CF8_0x118cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE1FCu; }
    }
    if (ctx->pc != 0x1BE1FCu) { return; }
    ctx->pc = 0x1BE1FCu;
label_1be1fc:
    // 0x1be1fc: 0xc06f900
    ctx->pc = 0x1BE1FCu;
    SET_GPR_U32(ctx, 31, 0x1BE204u);
    ctx->pc = 0x1BE400u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE400_0x1be400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE204u; }
    }
    if (ctx->pc != 0x1BE204u) { return; }
    ctx->pc = 0x1BE204u;
    // 0x1be204: 0xc06f888
    ctx->pc = 0x1BE204u;
    SET_GPR_U32(ctx, 31, 0x1BE20Cu);
    ctx->pc = 0x1BE220u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE220_0x1be220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE20Cu; }
    }
    if (ctx->pc != 0x1BE20Cu) { return; }
    ctx->pc = 0x1BE20Cu;
label_1be20c:
    // 0x1be20c: 0xdfbf0010
    ctx->pc = 0x1be20cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be210: 0x7bb00000
    ctx->pc = 0x1be210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be214: 0x3e00008
    ctx->pc = 0x1BE214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE218u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BD980u: goto label_1bd980;
            case 0x1BD994u: goto label_1bd994;
            case 0x1BD99Cu: goto label_1bd99c;
            case 0x1BD9E0u: goto label_1bd9e0;
            case 0x1BD9E8u: goto label_1bd9e8;
            case 0x1BD9F8u: goto label_1bd9f8;
            case 0x1BDA34u: goto label_1bda34;
            case 0x1BDA3Cu: goto label_1bda3c;
            case 0x1BDA54u: goto label_1bda54;
            case 0x1BDA6Cu: goto label_1bda6c;
            case 0x1BDA70u: goto label_1bda70;
            case 0x1BDA9Cu: goto label_1bda9c;
            case 0x1BDAA0u: goto label_1bdaa0;
            case 0x1BDAC4u: goto label_1bdac4;
            case 0x1BDAD0u: goto label_1bdad0;
            case 0x1BDAD4u: goto label_1bdad4;
            case 0x1BDB74u: goto label_1bdb74;
            case 0x1BDBB8u: goto label_1bdbb8;
            case 0x1BDBC0u: goto label_1bdbc0;
            case 0x1BDC0Cu: goto label_1bdc0c;
            case 0x1BDC10u: goto label_1bdc10;
            case 0x1BDCD0u: goto label_1bdcd0;
            case 0x1BDCD8u: goto label_1bdcd8;
            case 0x1BDCE0u: goto label_1bdce0;
            case 0x1BDCE8u: goto label_1bdce8;
            case 0x1BDD04u: goto label_1bdd04;
            case 0x1BDD40u: goto label_1bdd40;
            case 0x1BDD44u: goto label_1bdd44;
            case 0x1BDD4Cu: goto label_1bdd4c;
            case 0x1BDD80u: goto label_1bdd80;
            case 0x1BDDFCu: goto label_1bddfc;
            case 0x1BDE04u: goto label_1bde04;
            case 0x1BDE0Cu: goto label_1bde0c;
            case 0x1BDE44u: goto label_1bde44;
            case 0x1BDEACu: goto label_1bdeac;
            case 0x1BDEB4u: goto label_1bdeb4;
            case 0x1BDEBCu: goto label_1bdebc;
            case 0x1BDED0u: goto label_1bded0;
            case 0x1BDF34u: goto label_1bdf34;
            case 0x1BDF50u: goto label_1bdf50;
            case 0x1BDFB0u: goto label_1bdfb0;
            case 0x1BDFECu: goto label_1bdfec;
            case 0x1BDFF8u: goto label_1bdff8;
            case 0x1BE000u: goto label_1be000;
            case 0x1BE040u: goto label_1be040;
            case 0x1BE120u: goto label_1be120;
            case 0x1BE15Cu: goto label_1be15c;
            case 0x1BE178u: goto label_1be178;
            case 0x1BE17Cu: goto label_1be17c;
            case 0x1BE1B0u: goto label_1be1b0;
            case 0x1BE1E8u: goto label_1be1e8;
            case 0x1BE1FCu: goto label_1be1fc;
            case 0x1BE20Cu: goto label_1be20c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BE21Cu;
    // 0x1be21c: 0x0
    ctx->pc = 0x1be21cu;
    // NOP
}
