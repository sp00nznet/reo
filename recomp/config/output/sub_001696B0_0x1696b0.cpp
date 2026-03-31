#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001696B0
// Address: 0x1696b0 - 0x169748
void sub_001696B0_0x1696b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1696b0u;

    // 0x1696b0: 0x27bdffe0
    ctx->pc = 0x1696b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1696b4: 0xffb00000
    ctx->pc = 0x1696b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1696b8: 0xa0802d
    ctx->pc = 0x1696b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1696bc: 0xffb10008
    ctx->pc = 0x1696bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1696c0: 0x80882d
    ctx->pc = 0x1696c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1696c4: 0xffb20010
    ctx->pc = 0x1696c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1696c8: 0xc0902d
    ctx->pc = 0x1696c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1696cc: 0x12000017
    ctx->pc = 0x1696CCu;
    {
        const bool branch_taken_0x1696cc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1696D0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        if (branch_taken_0x1696cc) {
            ctx->pc = 0x16972Cu;
            goto label_16972c;
        }
    }
    ctx->pc = 0x1696D4u;
    // 0x1696d4: 0x3c060018
    ctx->pc = 0x1696d4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)24 << 16));
    // 0x1696d8: 0xc05a646
    ctx->pc = 0x1696D8u;
    SET_GPR_U32(ctx, 31, 0x1696E0u);
    ctx->pc = 0x1696DCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294942128));
    ctx->pc = 0x169918u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169918_0x169918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1696E0u; }
    }
    if (ctx->pc != 0x1696E0u) { return; }
    ctx->pc = 0x1696E0u;
    // 0x1696e0: 0x3c060018
    ctx->pc = 0x1696e0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)24 << 16));
    // 0x1696e4: 0xae420000
    ctx->pc = 0x1696e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1696e8: 0x24c69e18
    ctx->pc = 0x1696e8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294942232));
    // 0x1696ec: 0x220202d
    ctx->pc = 0x1696ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1696f0: 0xc05a646
    ctx->pc = 0x1696F0u;
    SET_GPR_U32(ctx, 31, 0x1696F8u);
    ctx->pc = 0x1696F4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169918u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169918_0x169918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1696F8u; }
    }
    if (ctx->pc != 0x1696F8u) { return; }
    ctx->pc = 0x1696F8u;
    // 0x1696f8: 0x3c060018
    ctx->pc = 0x1696f8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)24 << 16));
    // 0x1696fc: 0xae420004
    ctx->pc = 0x1696fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x169700: 0x24c69e98
    ctx->pc = 0x169700u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294942360));
    // 0x169704: 0x220202d
    ctx->pc = 0x169704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169708: 0xc05a646
    ctx->pc = 0x169708u;
    SET_GPR_U32(ctx, 31, 0x169710u);
    ctx->pc = 0x16970Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169918u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169918_0x169918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169710u; }
    }
    if (ctx->pc != 0x169710u) { return; }
    ctx->pc = 0x169710u;
    // 0x169710: 0x3c060018
    ctx->pc = 0x169710u;
    SET_GPR_U32(ctx, 6, ((uint32_t)24 << 16));
    // 0x169714: 0xae420008
    ctx->pc = 0x169714u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x169718: 0x220202d
    ctx->pc = 0x169718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16971c: 0x200282d
    ctx->pc = 0x16971cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169720: 0xc05a646
    ctx->pc = 0x169720u;
    SET_GPR_U32(ctx, 31, 0x169728u);
    ctx->pc = 0x169724u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294942464));
    ctx->pc = 0x169918u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169918_0x169918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169728u; }
    }
    if (ctx->pc != 0x169728u) { return; }
    ctx->pc = 0x169728u;
    // 0x169728: 0xae42000c
    ctx->pc = 0x169728u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_16972c:
    // 0x16972c: 0xdfb00000
    ctx->pc = 0x16972cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169730: 0xdfb10008
    ctx->pc = 0x169730u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169734: 0xdfb20010
    ctx->pc = 0x169734u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169738: 0xdfbf0018
    ctx->pc = 0x169738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16973c: 0x3e00008
    ctx->pc = 0x16973Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169740u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16972Cu: goto label_16972c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x169744u;
    // 0x169744: 0x0
    ctx->pc = 0x169744u;
    // NOP
}
