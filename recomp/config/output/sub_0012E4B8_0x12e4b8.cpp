#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012E4B8
// Address: 0x12e4b8 - 0x12e550
void sub_0012E4B8_0x12e4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12e4b8u;

    // 0x12e4b8: 0x27bdfff0
    ctx->pc = 0x12e4b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12e4bc: 0x24050007
    ctx->pc = 0x12e4bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    // 0x12e4c0: 0xffb00000
    ctx->pc = 0x12e4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12e4c4: 0x80802d
    ctx->pc = 0x12e4c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e4c8: 0xffbf0008
    ctx->pc = 0x12e4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12e4cc: 0x50a00001
    ctx->pc = 0x12E4CCu;
    {
        const bool branch_taken_0x12e4cc = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x12e4cc) {
            ctx->pc = 0x12E4D0u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x12E4D4u;
            goto label_12e4d4;
        }
    }
    ctx->pc = 0x12E4D4u;
label_12e4d4:
    // 0x12e4d4: 0x3c040022
    ctx->pc = 0x12e4d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)34 << 16));
    // 0x12e4d8: 0x24080001
    ctx->pc = 0x12e4d8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e4dc: 0x8e070078
    ctx->pc = 0x12e4dcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x12e4e0: 0x8c838758
    ctx->pc = 0x12e4e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294936408)));
    // 0x12e4e4: 0x24e2ffff
    ctx->pc = 0x12e4e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x12e4e8: 0xe0202d
    ctx->pc = 0x12e4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e4ec: 0x45001a
    ctx->pc = 0x12e4ecu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x12e4f0: 0x1012
    ctx->pc = 0x12e4f0u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x12e4f4: 0x24420001
    ctx->pc = 0x12e4f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x12e4f8: 0x43282a
    ctx->pc = 0x12e4f8u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x12e4fc: 0x45180b
    ctx->pc = 0x12e4fcu;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 2));
    // 0x12e500: 0x28660001
    ctx->pc = 0x12e500u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 3), 1));
    // 0x12e504: 0x106180b
    ctx->pc = 0x12e504u;
    if (GPR_U32(ctx, 6) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 8));
    // 0x12e508: 0x14e00005
    ctx->pc = 0x12E508u;
    {
        const bool branch_taken_0x12e508 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x12E50Cu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x12e508) {
            ctx->pc = 0x12E520u;
            goto label_12e520;
        }
    }
    ctx->pc = 0x12E510u;
    // 0x12e510: 0x3c010024
    ctx->pc = 0x12e510u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x12e514: 0x10000008
    ctx->pc = 0x12E514u;
    {
        const bool branch_taken_0x12e514 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E518u;
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 4294946296)));
        if (branch_taken_0x12e514) {
            ctx->pc = 0x12E538u;
            goto label_12e538;
        }
    }
    ctx->pc = 0x12E51Cu;
    // 0x12e51c: 0x0
    ctx->pc = 0x12e51cu;
    // NOP
label_12e520:
    // 0x12e520: 0xc0448ba
    ctx->pc = 0x12E520u;
    SET_GPR_U32(ctx, 31, 0x12E528u);
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E528u; }
    }
    if (ctx->pc != 0x12E528u) { return; }
    ctx->pc = 0x12E528u;
    // 0x12e528: 0x3c010024
    ctx->pc = 0x12e528u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x12e52c: 0xdc24ae00
    ctx->pc = 0x12e52cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 1), 4294946304)));
    // 0x12e530: 0xc04480e
    ctx->pc = 0x12E530u;
    SET_GPR_U32(ctx, 31, 0x12E538u);
    ctx->pc = 0x12E534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x112038u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112038_0x112038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E538u; }
    }
    if (ctx->pc != 0x12E538u) { return; }
    ctx->pc = 0x12E538u;
label_12e538:
    // 0x12e538: 0xfe020080
    ctx->pc = 0x12e538u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 128), GPR_U64(ctx, 2));
    // 0x12e53c: 0xdfb00000
    ctx->pc = 0x12e53cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e540: 0xdfbf0008
    ctx->pc = 0x12e540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12e544: 0x3e00008
    ctx->pc = 0x12E544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E548u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12E4D4u: goto label_12e4d4;
            case 0x12E520u: goto label_12e520;
            case 0x12E538u: goto label_12e538;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12E54Cu;
    // 0x12e54c: 0x0
    ctx->pc = 0x12e54cu;
    // NOP
}
