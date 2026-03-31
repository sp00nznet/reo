#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015A950
// Address: 0x15a950 - 0x15aa70
void sub_0015A950_0x15a950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15a950u;

label_15a950:
    // 0x15a950: 0x27bdffb0
    ctx->pc = 0x15a950u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_15a954:
    // 0x15a954: 0x3c067fff
    ctx->pc = 0x15a954u;
    SET_GPR_U32(ctx, 6, ((uint32_t)32767 << 16));
label_15a958:
    // 0x15a958: 0xffb10018
    ctx->pc = 0x15a958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_15a95c:
    // 0x15a95c: 0x34c6ffff
    ctx->pc = 0x15a95cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
label_15a960:
    // 0x15a960: 0xffb20020
    ctx->pc = 0x15a960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_15a964:
    // 0x15a964: 0xffb30028
    ctx->pc = 0x15a964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_15a968:
    // 0x15a968: 0xa0982d
    ctx->pc = 0x15a968u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15a96c:
    // 0x15a96c: 0xffb40030
    ctx->pc = 0x15a96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_15a970:
    // 0x15a970: 0x24050001
    ctx->pc = 0x15a970u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_15a974:
    // 0x15a974: 0xffb50038
    ctx->pc = 0x15a974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_15a978:
    // 0x15a978: 0x80a82d
    ctx->pc = 0x15a978u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15a97c:
    // 0x15a97c: 0xffb00010
    ctx->pc = 0x15a97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_15a980:
    // 0x15a980: 0x26b40348
    ctx->pc = 0x15a980u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 21), 840));
label_15a984:
    // 0x15a984: 0xffbf0040
    ctx->pc = 0x15a984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_15a988:
    // 0x15a988: 0x260202d
    ctx->pc = 0x15a988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15a98c:
    // 0x15a98c: 0x8e620000
    ctx->pc = 0x15a98cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_15a990:
    // 0x15a990: 0x8c430018
    ctx->pc = 0x15a990u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_15a994:
    // 0x15a994: 0x60f809
label_15a998:
    if (ctx->pc == 0x15A998u) {
        ctx->pc = 0x15A998u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15A99Cu;
        goto label_15a99c;
    }
    ctx->pc = 0x15A994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A99Cu);
        ctx->pc = 0x15A998u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15A950u: goto label_15a950;
            case 0x15A954u: goto label_15a954;
            case 0x15A958u: goto label_15a958;
            case 0x15A95Cu: goto label_15a95c;
            case 0x15A960u: goto label_15a960;
            case 0x15A964u: goto label_15a964;
            case 0x15A968u: goto label_15a968;
            case 0x15A96Cu: goto label_15a96c;
            case 0x15A970u: goto label_15a970;
            case 0x15A974u: goto label_15a974;
            case 0x15A978u: goto label_15a978;
            case 0x15A97Cu: goto label_15a97c;
            case 0x15A980u: goto label_15a980;
            case 0x15A984u: goto label_15a984;
            case 0x15A988u: goto label_15a988;
            case 0x15A98Cu: goto label_15a98c;
            case 0x15A990u: goto label_15a990;
            case 0x15A994u: goto label_15a994;
            case 0x15A998u: goto label_15a998;
            case 0x15A99Cu: goto label_15a99c;
            case 0x15A9A0u: goto label_15a9a0;
            case 0x15A9A4u: goto label_15a9a4;
            case 0x15A9A8u: goto label_15a9a8;
            case 0x15A9ACu: goto label_15a9ac;
            case 0x15A9B0u: goto label_15a9b0;
            case 0x15A9B4u: goto label_15a9b4;
            case 0x15A9B8u: goto label_15a9b8;
            case 0x15A9BCu: goto label_15a9bc;
            case 0x15A9C0u: goto label_15a9c0;
            case 0x15A9C4u: goto label_15a9c4;
            case 0x15A9C8u: goto label_15a9c8;
            case 0x15A9CCu: goto label_15a9cc;
            case 0x15A9D0u: goto label_15a9d0;
            case 0x15A9D4u: goto label_15a9d4;
            case 0x15A9D8u: goto label_15a9d8;
            case 0x15A9DCu: goto label_15a9dc;
            case 0x15A9E0u: goto label_15a9e0;
            case 0x15A9E4u: goto label_15a9e4;
            case 0x15A9E8u: goto label_15a9e8;
            case 0x15A9ECu: goto label_15a9ec;
            case 0x15A9F0u: goto label_15a9f0;
            case 0x15A9F4u: goto label_15a9f4;
            case 0x15A9F8u: goto label_15a9f8;
            case 0x15A9FCu: goto label_15a9fc;
            case 0x15AA00u: goto label_15aa00;
            case 0x15AA04u: goto label_15aa04;
            case 0x15AA08u: goto label_15aa08;
            case 0x15AA0Cu: goto label_15aa0c;
            case 0x15AA10u: goto label_15aa10;
            case 0x15AA14u: goto label_15aa14;
            case 0x15AA18u: goto label_15aa18;
            case 0x15AA1Cu: goto label_15aa1c;
            case 0x15AA20u: goto label_15aa20;
            case 0x15AA24u: goto label_15aa24;
            case 0x15AA28u: goto label_15aa28;
            case 0x15AA2Cu: goto label_15aa2c;
            case 0x15AA30u: goto label_15aa30;
            case 0x15AA34u: goto label_15aa34;
            case 0x15AA38u: goto label_15aa38;
            case 0x15AA3Cu: goto label_15aa3c;
            case 0x15AA40u: goto label_15aa40;
            case 0x15AA44u: goto label_15aa44;
            case 0x15AA48u: goto label_15aa48;
            case 0x15AA4Cu: goto label_15aa4c;
            case 0x15AA50u: goto label_15aa50;
            case 0x15AA54u: goto label_15aa54;
            case 0x15AA58u: goto label_15aa58;
            case 0x15AA5Cu: goto label_15aa5c;
            case 0x15AA60u: goto label_15aa60;
            case 0x15AA64u: goto label_15aa64;
            case 0x15AA68u: goto label_15aa68;
            case 0x15AA6Cu: goto label_15aa6c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15A99Cu; }
            if (ctx->pc != 0x15A99Cu) { return; }
        }
    }
    ctx->pc = 0x15A99Cu;
label_15a99c:
    // 0x15a99c: 0x2a0202d
    ctx->pc = 0x15a99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15a9a0:
    // 0x15a9a0: 0x8e820000
    ctx->pc = 0x15a9a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15a9a4:
    // 0x15a9a4: 0x2403fffc
    ctx->pc = 0x15a9a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967292));
label_15a9a8:
    // 0x15a9a8: 0x439024
    ctx->pc = 0x15a9a8u;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15a9ac:
    // 0x15a9ac: 0x40282d
    ctx->pc = 0x15a9acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a9b0:
    // 0x15a9b0: 0x521023
    ctx->pc = 0x15a9b0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15a9b4:
    // 0x15a9b4: 0x288c0
    ctx->pc = 0x15a9b4u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 2), 3));
label_15a9b8:
    // 0x15a9b8: 0x2a230020
    ctx->pc = 0x15a9b8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 32));
label_15a9bc:
    // 0x15a9bc: 0x14600003
label_15a9c0:
    if (ctx->pc == 0x15A9C0u) {
        ctx->pc = 0x15A9C0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 8));
        ctx->pc = 0x15A9C4u;
        goto label_15a9c4;
    }
    ctx->pc = 0x15A9BCu;
    {
        const bool branch_taken_0x15a9bc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x15A9C0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 8));
        if (branch_taken_0x15a9bc) {
            ctx->pc = 0x15A9CCu;
            goto label_15a9cc;
        }
    }
    ctx->pc = 0x15A9C4u;
label_15a9c4:
    // 0x15a9c4: 0x2631ffe0
    ctx->pc = 0x15a9c4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967264));
label_15a9c8:
    // 0x15a9c8: 0x26520004
    ctx->pc = 0x15a9c8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
label_15a9cc:
    // 0x15a9cc: 0xc056a9c
label_15a9d0:
    if (ctx->pc == 0x15A9D0u) {
        ctx->pc = 0x15A9D0u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 844)));
        ctx->pc = 0x15A9D4u;
        goto label_15a9d4;
    }
    ctx->pc = 0x15A9CCu;
    SET_GPR_U32(ctx, 31, 0x15A9D4u);
    ctx->pc = 0x15A9D0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 844)));
    ctx->pc = 0x15AA70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AA70_0x15aa70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A9D4u; }
    }
    if (ctx->pc != 0x15A9D4u) { return; }
    ctx->pc = 0x15A9D4u;
label_15a9d4:
    // 0x15a9d4: 0x8e830000
    ctx->pc = 0x15a9d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15a9d8:
    // 0x15a9d8: 0x40802d
    ctx->pc = 0x15a9d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a9dc:
    // 0x15a9dc: 0x32220007
    ctx->pc = 0x15a9dcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 7));
label_15a9e0:
    // 0x15a9e0: 0x2222823
    ctx->pc = 0x15a9e0u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_15a9e4:
    // 0x15a9e4: 0xaea20350
    ctx->pc = 0x15a9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 848), GPR_U32(ctx, 2));
label_15a9e8:
    // 0x15a9e8: 0x24a50007
    ctx->pc = 0x15a9e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 7));
label_15a9ec:
    // 0x15a9ec: 0x3a0382d
    ctx->pc = 0x15a9ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15a9f0:
    // 0x15a9f0: 0x528c3
    ctx->pc = 0x15a9f0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
label_15a9f4:
    // 0x15a9f4: 0x280202d
    ctx->pc = 0x15a9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15a9f8:
    // 0x15a9f8: 0x2452821
    ctx->pc = 0x15a9f8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_15a9fc:
    // 0x15a9fc: 0x280302d
    ctx->pc = 0x15a9fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15aa00:
    // 0x15aa00: 0x24a5fffc
    ctx->pc = 0x15aa00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967292));
label_15aa04:
    // 0x15aa04: 0xc0501f8
label_15aa08:
    if (ctx->pc == 0x15AA08u) {
        ctx->pc = 0x15AA08u;
        SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->pc = 0x15AA0Cu;
        goto label_15aa0c;
    }
    ctx->pc = 0x15AA04u;
    SET_GPR_U32(ctx, 31, 0x15AA0Cu);
    ctx->pc = 0x15AA08u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->pc = 0x1407E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001407E0_0x1407e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AA0Cu; }
    }
    if (ctx->pc != 0x15AA0Cu) { return; }
    ctx->pc = 0x15AA0Cu;
label_15aa0c:
    // 0x15aa0c: 0x8e630000
    ctx->pc = 0x15aa0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_15aa10:
    // 0x15aa10: 0x280302d
    ctx->pc = 0x15aa10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15aa14:
    // 0x15aa14: 0x260202d
    ctx->pc = 0x15aa14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15aa18:
    // 0x15aa18: 0x8c620020
    ctx->pc = 0x15aa18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_15aa1c:
    // 0x15aa1c: 0x40f809
label_15aa20:
    if (ctx->pc == 0x15AA20u) {
        ctx->pc = 0x15AA20u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15AA24u;
        goto label_15aa24;
    }
    ctx->pc = 0x15AA1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15AA24u);
        ctx->pc = 0x15AA20u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15A950u: goto label_15a950;
            case 0x15A954u: goto label_15a954;
            case 0x15A958u: goto label_15a958;
            case 0x15A95Cu: goto label_15a95c;
            case 0x15A960u: goto label_15a960;
            case 0x15A964u: goto label_15a964;
            case 0x15A968u: goto label_15a968;
            case 0x15A96Cu: goto label_15a96c;
            case 0x15A970u: goto label_15a970;
            case 0x15A974u: goto label_15a974;
            case 0x15A978u: goto label_15a978;
            case 0x15A97Cu: goto label_15a97c;
            case 0x15A980u: goto label_15a980;
            case 0x15A984u: goto label_15a984;
            case 0x15A988u: goto label_15a988;
            case 0x15A98Cu: goto label_15a98c;
            case 0x15A990u: goto label_15a990;
            case 0x15A994u: goto label_15a994;
            case 0x15A998u: goto label_15a998;
            case 0x15A99Cu: goto label_15a99c;
            case 0x15A9A0u: goto label_15a9a0;
            case 0x15A9A4u: goto label_15a9a4;
            case 0x15A9A8u: goto label_15a9a8;
            case 0x15A9ACu: goto label_15a9ac;
            case 0x15A9B0u: goto label_15a9b0;
            case 0x15A9B4u: goto label_15a9b4;
            case 0x15A9B8u: goto label_15a9b8;
            case 0x15A9BCu: goto label_15a9bc;
            case 0x15A9C0u: goto label_15a9c0;
            case 0x15A9C4u: goto label_15a9c4;
            case 0x15A9C8u: goto label_15a9c8;
            case 0x15A9CCu: goto label_15a9cc;
            case 0x15A9D0u: goto label_15a9d0;
            case 0x15A9D4u: goto label_15a9d4;
            case 0x15A9D8u: goto label_15a9d8;
            case 0x15A9DCu: goto label_15a9dc;
            case 0x15A9E0u: goto label_15a9e0;
            case 0x15A9E4u: goto label_15a9e4;
            case 0x15A9E8u: goto label_15a9e8;
            case 0x15A9ECu: goto label_15a9ec;
            case 0x15A9F0u: goto label_15a9f0;
            case 0x15A9F4u: goto label_15a9f4;
            case 0x15A9F8u: goto label_15a9f8;
            case 0x15A9FCu: goto label_15a9fc;
            case 0x15AA00u: goto label_15aa00;
            case 0x15AA04u: goto label_15aa04;
            case 0x15AA08u: goto label_15aa08;
            case 0x15AA0Cu: goto label_15aa0c;
            case 0x15AA10u: goto label_15aa10;
            case 0x15AA14u: goto label_15aa14;
            case 0x15AA18u: goto label_15aa18;
            case 0x15AA1Cu: goto label_15aa1c;
            case 0x15AA20u: goto label_15aa20;
            case 0x15AA24u: goto label_15aa24;
            case 0x15AA28u: goto label_15aa28;
            case 0x15AA2Cu: goto label_15aa2c;
            case 0x15AA30u: goto label_15aa30;
            case 0x15AA34u: goto label_15aa34;
            case 0x15AA38u: goto label_15aa38;
            case 0x15AA3Cu: goto label_15aa3c;
            case 0x15AA40u: goto label_15aa40;
            case 0x15AA44u: goto label_15aa44;
            case 0x15AA48u: goto label_15aa48;
            case 0x15AA4Cu: goto label_15aa4c;
            case 0x15AA50u: goto label_15aa50;
            case 0x15AA54u: goto label_15aa54;
            case 0x15AA58u: goto label_15aa58;
            case 0x15AA5Cu: goto label_15aa5c;
            case 0x15AA60u: goto label_15aa60;
            case 0x15AA64u: goto label_15aa64;
            case 0x15AA68u: goto label_15aa68;
            case 0x15AA6Cu: goto label_15aa6c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15AA24u; }
            if (ctx->pc != 0x15AA24u) { return; }
        }
    }
    ctx->pc = 0x15AA24u;
label_15aa24:
    // 0x15aa24: 0x8e630000
    ctx->pc = 0x15aa24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_15aa28:
    // 0x15aa28: 0x24050001
    ctx->pc = 0x15aa28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_15aa2c:
    // 0x15aa2c: 0x3a0302d
    ctx->pc = 0x15aa2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15aa30:
    // 0x15aa30: 0x8c62001c
    ctx->pc = 0x15aa30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_15aa34:
    // 0x15aa34: 0x40f809
label_15aa38:
    if (ctx->pc == 0x15AA38u) {
        ctx->pc = 0x15AA38u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15AA3Cu;
        goto label_15aa3c;
    }
    ctx->pc = 0x15AA34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15AA3Cu);
        ctx->pc = 0x15AA38u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15A950u: goto label_15a950;
            case 0x15A954u: goto label_15a954;
            case 0x15A958u: goto label_15a958;
            case 0x15A95Cu: goto label_15a95c;
            case 0x15A960u: goto label_15a960;
            case 0x15A964u: goto label_15a964;
            case 0x15A968u: goto label_15a968;
            case 0x15A96Cu: goto label_15a96c;
            case 0x15A970u: goto label_15a970;
            case 0x15A974u: goto label_15a974;
            case 0x15A978u: goto label_15a978;
            case 0x15A97Cu: goto label_15a97c;
            case 0x15A980u: goto label_15a980;
            case 0x15A984u: goto label_15a984;
            case 0x15A988u: goto label_15a988;
            case 0x15A98Cu: goto label_15a98c;
            case 0x15A990u: goto label_15a990;
            case 0x15A994u: goto label_15a994;
            case 0x15A998u: goto label_15a998;
            case 0x15A99Cu: goto label_15a99c;
            case 0x15A9A0u: goto label_15a9a0;
            case 0x15A9A4u: goto label_15a9a4;
            case 0x15A9A8u: goto label_15a9a8;
            case 0x15A9ACu: goto label_15a9ac;
            case 0x15A9B0u: goto label_15a9b0;
            case 0x15A9B4u: goto label_15a9b4;
            case 0x15A9B8u: goto label_15a9b8;
            case 0x15A9BCu: goto label_15a9bc;
            case 0x15A9C0u: goto label_15a9c0;
            case 0x15A9C4u: goto label_15a9c4;
            case 0x15A9C8u: goto label_15a9c8;
            case 0x15A9CCu: goto label_15a9cc;
            case 0x15A9D0u: goto label_15a9d0;
            case 0x15A9D4u: goto label_15a9d4;
            case 0x15A9D8u: goto label_15a9d8;
            case 0x15A9DCu: goto label_15a9dc;
            case 0x15A9E0u: goto label_15a9e0;
            case 0x15A9E4u: goto label_15a9e4;
            case 0x15A9E8u: goto label_15a9e8;
            case 0x15A9ECu: goto label_15a9ec;
            case 0x15A9F0u: goto label_15a9f0;
            case 0x15A9F4u: goto label_15a9f4;
            case 0x15A9F8u: goto label_15a9f8;
            case 0x15A9FCu: goto label_15a9fc;
            case 0x15AA00u: goto label_15aa00;
            case 0x15AA04u: goto label_15aa04;
            case 0x15AA08u: goto label_15aa08;
            case 0x15AA0Cu: goto label_15aa0c;
            case 0x15AA10u: goto label_15aa10;
            case 0x15AA14u: goto label_15aa14;
            case 0x15AA18u: goto label_15aa18;
            case 0x15AA1Cu: goto label_15aa1c;
            case 0x15AA20u: goto label_15aa20;
            case 0x15AA24u: goto label_15aa24;
            case 0x15AA28u: goto label_15aa28;
            case 0x15AA2Cu: goto label_15aa2c;
            case 0x15AA30u: goto label_15aa30;
            case 0x15AA34u: goto label_15aa34;
            case 0x15AA38u: goto label_15aa38;
            case 0x15AA3Cu: goto label_15aa3c;
            case 0x15AA40u: goto label_15aa40;
            case 0x15AA44u: goto label_15aa44;
            case 0x15AA48u: goto label_15aa48;
            case 0x15AA4Cu: goto label_15aa4c;
            case 0x15AA50u: goto label_15aa50;
            case 0x15AA54u: goto label_15aa54;
            case 0x15AA58u: goto label_15aa58;
            case 0x15AA5Cu: goto label_15aa5c;
            case 0x15AA60u: goto label_15aa60;
            case 0x15AA64u: goto label_15aa64;
            case 0x15AA68u: goto label_15aa68;
            case 0x15AA6Cu: goto label_15aa6c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15AA3Cu; }
            if (ctx->pc != 0x15AA3Cu) { return; }
        }
    }
    ctx->pc = 0x15AA3Cu;
label_15aa3c:
    // 0x15aa3c: 0xc056b7a
label_15aa40:
    if (ctx->pc == 0x15AA40u) {
        ctx->pc = 0x15AA40u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15AA44u;
        goto label_15aa44;
    }
    ctx->pc = 0x15AA3Cu;
    SET_GPR_U32(ctx, 31, 0x15AA44u);
    ctx->pc = 0x15AA40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15ADE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ADE8_0x15ade8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AA44u; }
    }
    if (ctx->pc != 0x15AA44u) { return; }
    ctx->pc = 0x15AA44u;
label_15aa44:
    // 0x15aa44: 0x200102d
    ctx->pc = 0x15aa44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15aa48:
    // 0x15aa48: 0xdfb10018
    ctx->pc = 0x15aa48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15aa4c:
    // 0x15aa4c: 0xdfb00010
    ctx->pc = 0x15aa4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15aa50:
    // 0x15aa50: 0xdfb20020
    ctx->pc = 0x15aa50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15aa54:
    // 0x15aa54: 0xdfb30028
    ctx->pc = 0x15aa54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_15aa58:
    // 0x15aa58: 0xdfb40030
    ctx->pc = 0x15aa58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15aa5c:
    // 0x15aa5c: 0xdfb50038
    ctx->pc = 0x15aa5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_15aa60:
    // 0x15aa60: 0xdfbf0040
    ctx->pc = 0x15aa60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15aa64:
    // 0x15aa64: 0x3e00008
label_15aa68:
    if (ctx->pc == 0x15AA68u) {
        ctx->pc = 0x15AA68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x15AA6Cu;
        goto label_15aa6c;
    }
    ctx->pc = 0x15AA64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AA68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15A950u: goto label_15a950;
            case 0x15A954u: goto label_15a954;
            case 0x15A958u: goto label_15a958;
            case 0x15A95Cu: goto label_15a95c;
            case 0x15A960u: goto label_15a960;
            case 0x15A964u: goto label_15a964;
            case 0x15A968u: goto label_15a968;
            case 0x15A96Cu: goto label_15a96c;
            case 0x15A970u: goto label_15a970;
            case 0x15A974u: goto label_15a974;
            case 0x15A978u: goto label_15a978;
            case 0x15A97Cu: goto label_15a97c;
            case 0x15A980u: goto label_15a980;
            case 0x15A984u: goto label_15a984;
            case 0x15A988u: goto label_15a988;
            case 0x15A98Cu: goto label_15a98c;
            case 0x15A990u: goto label_15a990;
            case 0x15A994u: goto label_15a994;
            case 0x15A998u: goto label_15a998;
            case 0x15A99Cu: goto label_15a99c;
            case 0x15A9A0u: goto label_15a9a0;
            case 0x15A9A4u: goto label_15a9a4;
            case 0x15A9A8u: goto label_15a9a8;
            case 0x15A9ACu: goto label_15a9ac;
            case 0x15A9B0u: goto label_15a9b0;
            case 0x15A9B4u: goto label_15a9b4;
            case 0x15A9B8u: goto label_15a9b8;
            case 0x15A9BCu: goto label_15a9bc;
            case 0x15A9C0u: goto label_15a9c0;
            case 0x15A9C4u: goto label_15a9c4;
            case 0x15A9C8u: goto label_15a9c8;
            case 0x15A9CCu: goto label_15a9cc;
            case 0x15A9D0u: goto label_15a9d0;
            case 0x15A9D4u: goto label_15a9d4;
            case 0x15A9D8u: goto label_15a9d8;
            case 0x15A9DCu: goto label_15a9dc;
            case 0x15A9E0u: goto label_15a9e0;
            case 0x15A9E4u: goto label_15a9e4;
            case 0x15A9E8u: goto label_15a9e8;
            case 0x15A9ECu: goto label_15a9ec;
            case 0x15A9F0u: goto label_15a9f0;
            case 0x15A9F4u: goto label_15a9f4;
            case 0x15A9F8u: goto label_15a9f8;
            case 0x15A9FCu: goto label_15a9fc;
            case 0x15AA00u: goto label_15aa00;
            case 0x15AA04u: goto label_15aa04;
            case 0x15AA08u: goto label_15aa08;
            case 0x15AA0Cu: goto label_15aa0c;
            case 0x15AA10u: goto label_15aa10;
            case 0x15AA14u: goto label_15aa14;
            case 0x15AA18u: goto label_15aa18;
            case 0x15AA1Cu: goto label_15aa1c;
            case 0x15AA20u: goto label_15aa20;
            case 0x15AA24u: goto label_15aa24;
            case 0x15AA28u: goto label_15aa28;
            case 0x15AA2Cu: goto label_15aa2c;
            case 0x15AA30u: goto label_15aa30;
            case 0x15AA34u: goto label_15aa34;
            case 0x15AA38u: goto label_15aa38;
            case 0x15AA3Cu: goto label_15aa3c;
            case 0x15AA40u: goto label_15aa40;
            case 0x15AA44u: goto label_15aa44;
            case 0x15AA48u: goto label_15aa48;
            case 0x15AA4Cu: goto label_15aa4c;
            case 0x15AA50u: goto label_15aa50;
            case 0x15AA54u: goto label_15aa54;
            case 0x15AA58u: goto label_15aa58;
            case 0x15AA5Cu: goto label_15aa5c;
            case 0x15AA60u: goto label_15aa60;
            case 0x15AA64u: goto label_15aa64;
            case 0x15AA68u: goto label_15aa68;
            case 0x15AA6Cu: goto label_15aa6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15AA6Cu;
label_15aa6c:
    // 0x15aa6c: 0x0
    ctx->pc = 0x15aa6cu;
    // NOP
}
