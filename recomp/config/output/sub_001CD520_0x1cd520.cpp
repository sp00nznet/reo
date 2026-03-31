#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CD520
// Address: 0x1cd520 - 0x1cd5b0
void sub_001CD520_0x1cd520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cd520u;

    // 0x1cd520: 0x27bdffe0
    ctx->pc = 0x1cd520u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cd524: 0x3c020023
    ctx->pc = 0x1cd524u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1cd528: 0xffbf0010
    ctx->pc = 0x1cd528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cd52c: 0x3c050025
    ctx->pc = 0x1cd52cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1cd530: 0x7fb00000
    ctx->pc = 0x1cd530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cd534: 0x3c010032
    ctx->pc = 0x1cd534u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1cd538: 0x942743da
    ctx->pc = 0x1cd538u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17370)));
    // 0x1cd53c: 0x41880
    ctx->pc = 0x1cd53cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cd540: 0x244266d0
    ctx->pc = 0x1cd540u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26320));
    // 0x1cd544: 0x80802d
    ctx->pc = 0x1cd544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd548: 0x431021
    ctx->pc = 0x1cd548u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cd54c: 0x3c040034
    ctx->pc = 0x1cd54cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x1cd550: 0x8c460000
    ctx->pc = 0x1cd550u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd554: 0x24840af0
    ctx->pc = 0x1cd554u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2800));
    // 0x1cd558: 0x24a55fd0
    ctx->pc = 0x1cd558u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 24528));
    // 0x1cd55c: 0x3c010032
    ctx->pc = 0x1cd55cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1cd560: 0x942943dc
    ctx->pc = 0x1cd560u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17372)));
    // 0x1cd564: 0x3c010032
    ctx->pc = 0x1cd564u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1cd568: 0x942a43de
    ctx->pc = 0x1cd568u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17374)));
    // 0x1cd56c: 0xc042a0c
    ctx->pc = 0x1CD56Cu;
    SET_GPR_U32(ctx, 31, 0x1CD574u);
    ctx->pc = 0x1CD570u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD574u; }
    }
    if (ctx->pc != 0x1CD574u) { return; }
    ctx->pc = 0x1CD574u;
    // 0x1cd574: 0x16000005
    ctx->pc = 0x1CD574u;
    {
        const bool branch_taken_0x1cd574 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CD578u;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x1cd574) {
            ctx->pc = 0x1CD58Cu;
            goto label_1cd58c;
        }
    }
    ctx->pc = 0x1CD57Cu;
    // 0x1cd57c: 0x3c050025
    ctx->pc = 0x1cd57cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1cd580: 0x24840af0
    ctx->pc = 0x1cd580u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2800));
    // 0x1cd584: 0xc042aee
    ctx->pc = 0x1CD584u;
    SET_GPR_U32(ctx, 31, 0x1CD58Cu);
    ctx->pc = 0x1CD588u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 24480));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD58Cu; }
    }
    if (ctx->pc != 0x1CD58Cu) { return; }
    ctx->pc = 0x1CD58Cu;
label_1cd58c:
    // 0x1cd58c: 0xdfbf0010
    ctx->pc = 0x1cd58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd590: 0x3c020034
    ctx->pc = 0x1cd590u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x1cd594: 0x7bb00000
    ctx->pc = 0x1cd594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd598: 0x24420af0
    ctx->pc = 0x1cd598u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2800));
    // 0x1cd59c: 0x3e00008
    ctx->pc = 0x1CD59Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD5A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CD58Cu: goto label_1cd58c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CD5A4u;
    // 0x1cd5a4: 0x0
    ctx->pc = 0x1cd5a4u;
    // NOP
    // 0x1cd5a8: 0x0
    ctx->pc = 0x1cd5a8u;
    // NOP
    // 0x1cd5ac: 0x0
    ctx->pc = 0x1cd5acu;
    // NOP
}
