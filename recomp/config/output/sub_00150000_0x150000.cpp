#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00150000
// Address: 0x150000 - 0x150110
void sub_00150000_0x150000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x150000u;

    // 0x150000: 0x27bdfff0
    ctx->pc = 0x150000u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x150004: 0x80782d
    ctx->pc = 0x150004u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150008: 0xffb00000
    ctx->pc = 0x150008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15000c: 0xa0c82d
    ctx->pc = 0x15000cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150010: 0xc0702d
    ctx->pc = 0x150010u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150014: 0x682d
    ctx->pc = 0x150014u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150018: 0x8de30004
    ctx->pc = 0x150018u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x15001c: 0x8de20008
    ctx->pc = 0x15001cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x150020: 0x28650000
    ctx->pc = 0x150020u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 3), 0));
    // 0x150024: 0x2467000f
    ctx->pc = 0x150024u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 15));
    // 0x150028: 0x2446001f
    ctx->pc = 0x150028u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 31));
    // 0x15002c: 0x28440000
    ctx->pc = 0x15002cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 0));
    // 0x150030: 0xe5180b
    ctx->pc = 0x150030u;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 7));
    // 0x150034: 0x8de50000
    ctx->pc = 0x150034u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x150038: 0xc4100b
    ctx->pc = 0x150038u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 6));
    // 0x15003c: 0x3c103
    ctx->pc = 0x15003cu;
    SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 3), 4));
    // 0x150040: 0x24943
    ctx->pc = 0x150040u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 5));
    // 0x150044: 0x8f2c000c
    ctx->pc = 0x150044u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 25), 12)));
    // 0x150048: 0x1b00002d
    ctx->pc = 0x150048u;
    {
        const bool branch_taken_0x150048 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x15004Cu;
        SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 9), 1));
        if (branch_taken_0x150048) {
            ctx->pc = 0x150100u;
            goto label_150100;
        }
    }
    ctx->pc = 0x150050u;
    // 0x150050: 0x10000003
    ctx->pc = 0x150050u;
    {
        const bool branch_taken_0x150050 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x150054u;
        { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
        if (branch_taken_0x150050) {
            ctx->pc = 0x150060u;
            goto label_150060;
        }
    }
    ctx->pc = 0x150058u;
label_150058:
    // 0x150058: 0x12d2018
    ctx->pc = 0x150058u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x15005c: 0x0
    ctx->pc = 0x15005cu;
    // NOP
label_150060:
    // 0x150060: 0x2091821
    ctx->pc = 0x150060u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x150064: 0x319c0
    ctx->pc = 0x150064u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 7));
    // 0x150068: 0x502d
    ctx->pc = 0x150068u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15006c: 0x41040
    ctx->pc = 0x15006cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
    // 0x150070: 0x441021
    ctx->pc = 0x150070u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x150074: 0x21200
    ctx->pc = 0x150074u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
    // 0x150078: 0x431021
    ctx->pc = 0x150078u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15007c: 0x1920001c
    ctx->pc = 0x15007Cu;
    {
        const bool branch_taken_0x15007c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x150080u;
        SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        if (branch_taken_0x15007c) {
            ctx->pc = 0x1500F0u;
            goto label_1500f0;
        }
    }
    ctx->pc = 0x150084u;
    // 0x150084: 0xd3980
    ctx->pc = 0x150084u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 13), 6));
    // 0x150088: 0xc5900
    ctx->pc = 0x150088u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 12), 4));
    // 0x15008c: 0x0
    ctx->pc = 0x15008cu;
    // NOP
label_150090:
    // 0x150090: 0x8f220000
    ctx->pc = 0x150090u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x150094: 0x402d
    ctx->pc = 0x150094u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150098: 0xe21021
    ctx->pc = 0x150098u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x15009c: 0x24440003
    ctx->pc = 0x15009cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 3));
label_1500a0:
    // 0x1500a0: 0x2405000f
    ctx->pc = 0x1500a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    // 0x1500a4: 0x0
    ctx->pc = 0x1500a4u;
    // NOP
label_1500a8:
    // 0x1500a8: 0x90c30000
    ctx->pc = 0x1500a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1500ac: 0x24c60001
    ctx->pc = 0x1500acu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1500b0: 0x24a5ffff
    ctx->pc = 0x1500b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1500b4: 0x1c31821
    ctx->pc = 0x1500b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x1500b8: 0x90620000
    ctx->pc = 0x1500b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1500bc: 0xa0820000
    ctx->pc = 0x1500bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1500c0: 0x4a1fff9
    ctx->pc = 0x1500C0u;
    {
        const bool branch_taken_0x1500c0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1500C4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x1500c0) {
            ctx->pc = 0x1500A8u;
            goto label_1500a8;
        }
    }
    ctx->pc = 0x1500C8u;
    // 0x1500c8: 0x25080001
    ctx->pc = 0x1500c8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x1500cc: 0x8c1021
    ctx->pc = 0x1500ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x1500d0: 0x29030010
    ctx->pc = 0x1500d0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 8), 16));
    // 0x1500d4: 0x1460fff2
    ctx->pc = 0x1500D4u;
    {
        const bool branch_taken_0x1500d4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1500D8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294967232));
        if (branch_taken_0x1500d4) {
            ctx->pc = 0x1500A0u;
            goto label_1500a0;
        }
    }
    ctx->pc = 0x1500DCu;
    // 0x1500dc: 0x254a0001
    ctx->pc = 0x1500dcu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x1500e0: 0x24c60080
    ctx->pc = 0x1500e0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 128));
    // 0x1500e4: 0x149102a
    ctx->pc = 0x1500e4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), GPR_S32(ctx, 9)));
    // 0x1500e8: 0x1440ffe9
    ctx->pc = 0x1500E8u;
    {
        const bool branch_taken_0x1500e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1500ECu;
        SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        if (branch_taken_0x1500e8) {
            ctx->pc = 0x150090u;
            goto label_150090;
        }
    }
    ctx->pc = 0x1500F0u;
label_1500f0:
    // 0x1500f0: 0x25ad0001
    ctx->pc = 0x1500f0u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 1));
    // 0x1500f4: 0x1b8102a
    ctx->pc = 0x1500f4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 13), GPR_S32(ctx, 24)));
    // 0x1500f8: 0x5440ffd7
    ctx->pc = 0x1500F8u;
    {
        const bool branch_taken_0x1500f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1500f8) {
            ctx->pc = 0x1500FCu;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 15), 0)));
            ctx->pc = 0x150058u;
            goto label_150058;
        }
    }
    ctx->pc = 0x150100u;
label_150100:
    // 0x150100: 0xdfb00000
    ctx->pc = 0x150100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150104: 0x3e00008
    ctx->pc = 0x150104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150108u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150058u: goto label_150058;
            case 0x150060u: goto label_150060;
            case 0x150090u: goto label_150090;
            case 0x1500A0u: goto label_1500a0;
            case 0x1500A8u: goto label_1500a8;
            case 0x1500F0u: goto label_1500f0;
            case 0x150100u: goto label_150100;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15010Cu;
    // 0x15010c: 0x0
    ctx->pc = 0x15010cu;
    // NOP
}
