#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C56A0
// Address: 0x1c56a0 - 0x1c5760
void sub_001C56A0_0x1c56a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c56a0u;

    // 0x1c56a0: 0x27bdffe0
    ctx->pc = 0x1c56a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c56a4: 0xffbf0010
    ctx->pc = 0x1c56a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c56a8: 0x7fb00000
    ctx->pc = 0x1c56a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c56ac: 0x80802d
    ctx->pc = 0x1c56acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c56b0: 0xc06bb20
    ctx->pc = 0x1C56B0u;
    SET_GPR_U32(ctx, 31, 0x1C56B8u);
    ctx->pc = 0x1C56B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AEC80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEC80_0x1aec80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C56B8u; }
    }
    if (ctx->pc != 0x1C56B8u) { return; }
    ctx->pc = 0x1C56B8u;
    // 0x1c56b8: 0x24035963
    ctx->pc = 0x1c56b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 22883));
    // 0x1c56bc: 0x26080004
    ctx->pc = 0x1c56bcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 4));
    // 0x1c56c0: 0xa6030000
    ctx->pc = 0x1c56c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c56c4: 0x3049ffff
    ctx->pc = 0x1c56c4u;
    SET_GPR_U32(ctx, 9, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1c56c8: 0xa6020002
    ctx->pc = 0x1c56c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c56cc: 0x502d
    ctx->pc = 0x1c56ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c56d0: 0xa6000004
    ctx->pc = 0x1c56d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c56d4: 0xa6000006
    ctx->pc = 0x1c56d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c56d8: 0x26100008
    ctx->pc = 0x1c56d8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8));
    // 0x1c56dc: 0x3c030001
    ctx->pc = 0x1c56dcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x1c56e0: 0x3406ff53
    ctx->pc = 0x1c56e0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 0), 65363));
    // 0x1c56e4: 0x3464fe5c
    ctx->pc = 0x1c56e4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), 65116));
label_1c56e8:
    // 0x1c56e8: 0x95070000
    ctx->pc = 0x1c56e8u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1c56ec: 0x3123ffff
    ctx->pc = 0x1c56ecu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 9), 65535));
    // 0x1c56f0: 0x96050000
    ctx->pc = 0x1c56f0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c56f4: 0xe52821
    ctx->pc = 0x1c56f4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1c56f8: 0xa5050000
    ctx->pc = 0x1c56f8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x1c56fc: 0x96050000
    ctx->pc = 0x1c56fcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c5700: 0xa92826
    ctx->pc = 0x1c5700u;
    SET_GPR_U32(ctx, 5, XOR32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1c5704: 0xa6050000
    ctx->pc = 0x1c5704u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x1c5708: 0x14600002
    ctx->pc = 0x1C5708u;
    {
        const bool branch_taken_0x1c5708 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C570Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x1c5708) {
            ctx->pc = 0x1C5714u;
            goto label_1c5714;
        }
    }
    ctx->pc = 0x1C5710u;
    // 0x1c5710: 0x64090001
    ctx->pc = 0x1c5710u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)1);
label_1c5714:
    // 0x1c5714: 0x3127ffff
    ctx->pc = 0x1c5714u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 9), 65535));
    // 0x1c5718: 0x254a0001
    ctx->pc = 0x1c5718u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x1c571c: 0x72880
    ctx->pc = 0x1c571cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 7), 2));
    // 0x1c5720: 0x144182a
    ctx->pc = 0x1c5720u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 10), GPR_S32(ctx, 4)));
    // 0x1c5724: 0xa72821
    ctx->pc = 0x1c5724u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1c5728: 0x52840
    ctx->pc = 0x1c5728u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1c572c: 0xa72821
    ctx->pc = 0x1c572cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1c5730: 0x52900
    ctx->pc = 0x1c5730u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 4));
    // 0x1c5734: 0xa6001a
    ctx->pc = 0x1c5734u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1c5738: 0x0
    ctx->pc = 0x1c5738u;
    // NOP
    // 0x1c573c: 0x0
    ctx->pc = 0x1c573cu;
    // NOP
    // 0x1c5740: 0x2810
    ctx->pc = 0x1c5740u;
    SET_GPR_U32(ctx, 5, ctx->hi);
    // 0x1c5744: 0x1460ffe8
    ctx->pc = 0x1C5744u;
    {
        const bool branch_taken_0x1c5744 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C5748u;
        SET_GPR_U32(ctx, 9, AND32(GPR_U32(ctx, 5), 65535));
        if (branch_taken_0x1c5744) {
            ctx->pc = 0x1C56E8u;
            goto label_1c56e8;
        }
    }
    ctx->pc = 0x1C574Cu;
    // 0x1c574c: 0xdfbf0010
    ctx->pc = 0x1c574cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5750: 0x7bb00000
    ctx->pc = 0x1c5750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5754: 0x3e00008
    ctx->pc = 0x1C5754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5758u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C56E8u: goto label_1c56e8;
            case 0x1C5714u: goto label_1c5714;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C575Cu;
    // 0x1c575c: 0x0
    ctx->pc = 0x1c575cu;
    // NOP
}
