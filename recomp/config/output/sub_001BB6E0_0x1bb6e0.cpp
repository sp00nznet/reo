#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BB6E0
// Address: 0x1bb6e0 - 0x1bb7c0
void sub_001BB6E0_0x1bb6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1bb6e0u;

    // 0x1bb6e0: 0x27bdfff0
    ctx->pc = 0x1bb6e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb6e4: 0xffbf0000
    ctx->pc = 0x1bb6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb6e8: 0xc06e0a8
    ctx->pc = 0x1BB6E8u;
    SET_GPR_U32(ctx, 31, 0x1BB6F0u);
    ctx->pc = 0x1BB6ECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 88));
    ctx->pc = 0x1B82A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B82A0_0x1b82a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB6F0u; }
    }
    if (ctx->pc != 0x1BB6F0u) { return; }
    ctx->pc = 0x1BB6F0u;
    // 0x1bb6f0: 0x1440002e
    ctx->pc = 0x1BB6F0u;
    {
        const bool branch_taken_0x1bb6f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1BB6F4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x1bb6f0) {
            ctx->pc = 0x1BB7ACu;
            goto label_1bb7ac;
        }
    }
    ctx->pc = 0x1BB6F8u;
    // 0x1bb6f8: 0x902243c0
    ctx->pc = 0x1bb6f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17344)));
    // 0x1bb6fc: 0x10400017
    ctx->pc = 0x1BB6FCu;
    {
        const bool branch_taken_0x1bb6fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bb6fc) {
            ctx->pc = 0x1BB75Cu;
            goto label_1bb75c;
        }
    }
    ctx->pc = 0x1BB704u;
    // 0x1bb704: 0x3c01004c
    ctx->pc = 0x1bb704u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x1bb708: 0x8022adf8
    ctx->pc = 0x1bb708u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946296)));
    // 0x1bb70c: 0x10400013
    ctx->pc = 0x1BB70Cu;
    {
        const bool branch_taken_0x1bb70c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bb70c) {
            ctx->pc = 0x1BB75Cu;
            goto label_1bb75c;
        }
    }
    ctx->pc = 0x1BB714u;
    // 0x1bb714: 0x3c010031
    ctx->pc = 0x1bb714u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1bb718: 0x3c02ff00
    ctx->pc = 0x1bb718u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65280 << 16));
    // 0x1bb71c: 0x8c236614
    ctx->pc = 0x1bb71cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 26132)));
    // 0x1bb720: 0x621024
    ctx->pc = 0x1bb720u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bb724: 0x1040000d
    ctx->pc = 0x1BB724u;
    {
        const bool branch_taken_0x1bb724 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bb724) {
            ctx->pc = 0x1BB75Cu;
            goto label_1bb75c;
        }
    }
    ctx->pc = 0x1BB72Cu;
    // 0x1bb72c: 0x2404006c
    ctx->pc = 0x1bb72cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 108));
    // 0x1bb730: 0xc06bde0
    ctx->pc = 0x1BB730u;
    SET_GPR_U32(ctx, 31, 0x1BB738u);
    ctx->pc = 0x1BB734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB738u; }
    }
    if (ctx->pc != 0x1BB738u) { return; }
    ctx->pc = 0x1BB738u;
    // 0x1bb738: 0x24040004
    ctx->pc = 0x1bb738u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bb73c: 0xc06bc78
    ctx->pc = 0x1BB73Cu;
    SET_GPR_U32(ctx, 31, 0x1BB744u);
    ctx->pc = 0x1BB740u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x1AF1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF1E0_0x1af1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB744u; }
    }
    if (ctx->pc != 0x1BB744u) { return; }
    ctx->pc = 0x1BB744u;
    // 0x1bb744: 0x2404005e
    ctx->pc = 0x1bb744u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 94));
    // 0x1bb748: 0xc06bde0
    ctx->pc = 0x1BB748u;
    SET_GPR_U32(ctx, 31, 0x1BB750u);
    ctx->pc = 0x1BB74Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 50));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB750u; }
    }
    if (ctx->pc != 0x1BB750u) { return; }
    ctx->pc = 0x1BB750u;
    // 0x1bb750: 0x3c040031
    ctx->pc = 0x1bb750u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x1bb754: 0xc06aed8
    ctx->pc = 0x1BB754u;
    SET_GPR_U32(ctx, 31, 0x1BB75Cu);
    ctx->pc = 0x1BB758u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26124));
    ctx->pc = 0x1ABB60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ABB60_0x1abb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB75Cu; }
    }
    if (ctx->pc != 0x1BB75Cu) { return; }
    ctx->pc = 0x1BB75Cu;
label_1bb75c:
    // 0x1bb75c: 0x3c010031
    ctx->pc = 0x1bb75cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1bb760: 0x90226620
    ctx->pc = 0x1bb760u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 26144)));
    // 0x1bb764: 0x1040000f
    ctx->pc = 0x1BB764u;
    {
        const bool branch_taken_0x1bb764 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BB768u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 108));
        if (branch_taken_0x1bb764) {
            ctx->pc = 0x1BB7A4u;
            goto label_1bb7a4;
        }
    }
    ctx->pc = 0x1BB76Cu;
    // 0x1bb76c: 0xc06bde0
    ctx->pc = 0x1BB76Cu;
    SET_GPR_U32(ctx, 31, 0x1BB774u);
    ctx->pc = 0x1BB770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB774u; }
    }
    if (ctx->pc != 0x1BB774u) { return; }
    ctx->pc = 0x1BB774u;
    // 0x1bb774: 0x24040004
    ctx->pc = 0x1bb774u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bb778: 0xc06bc78
    ctx->pc = 0x1BB778u;
    SET_GPR_U32(ctx, 31, 0x1BB780u);
    ctx->pc = 0x1BB77Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x1AF1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF1E0_0x1af1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB780u; }
    }
    if (ctx->pc != 0x1BB780u) { return; }
    ctx->pc = 0x1BB780u;
    // 0x1bb780: 0x2404005e
    ctx->pc = 0x1bb780u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 94));
    // 0x1bb784: 0xc06bde0
    ctx->pc = 0x1BB784u;
    SET_GPR_U32(ctx, 31, 0x1BB78Cu);
    ctx->pc = 0x1BB788u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 50));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB78Cu; }
    }
    if (ctx->pc != 0x1BB78Cu) { return; }
    ctx->pc = 0x1BB78Cu;
    // 0x1bb78c: 0x3c040031
    ctx->pc = 0x1bb78cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x1bb790: 0xc06aed8
    ctx->pc = 0x1BB790u;
    SET_GPR_U32(ctx, 31, 0x1BB798u);
    ctx->pc = 0x1BB794u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26156));
    ctx->pc = 0x1ABB60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ABB60_0x1abb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB798u; }
    }
    if (ctx->pc != 0x1BB798u) { return; }
    ctx->pc = 0x1BB798u;
    // 0x1bb798: 0x3c040031
    ctx->pc = 0x1bb798u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x1bb79c: 0xc06aed8
    ctx->pc = 0x1BB79Cu;
    SET_GPR_U32(ctx, 31, 0x1BB7A4u);
    ctx->pc = 0x1BB7A0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26168));
    ctx->pc = 0x1ABB60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ABB60_0x1abb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB7A4u; }
    }
    if (ctx->pc != 0x1BB7A4u) { return; }
    ctx->pc = 0x1BB7A4u;
label_1bb7a4:
    // 0x1bb7a4: 0xc06edf0
    ctx->pc = 0x1BB7A4u;
    SET_GPR_U32(ctx, 31, 0x1BB7ACu);
    ctx->pc = 0x1BB7C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB7C0_0x1bb7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB7ACu; }
    }
    if (ctx->pc != 0x1BB7ACu) { return; }
    ctx->pc = 0x1BB7ACu;
label_1bb7ac:
    // 0x1bb7ac: 0xdfbf0000
    ctx->pc = 0x1bb7acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb7b0: 0x3e00008
    ctx->pc = 0x1BB7B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB7B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BB75Cu: goto label_1bb75c;
            case 0x1BB7A4u: goto label_1bb7a4;
            case 0x1BB7ACu: goto label_1bb7ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BB7B8u;
    // 0x1bb7b8: 0x0
    ctx->pc = 0x1bb7b8u;
    // NOP
    // 0x1bb7bc: 0x0
    ctx->pc = 0x1bb7bcu;
    // NOP
}
