#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00161978
// Address: 0x161978 - 0x1619d8
void sub_00161978_0x161978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x161978u;

    // 0x161978: 0x27bdfff0
    ctx->pc = 0x161978u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16197c: 0xffb00000
    ctx->pc = 0x16197cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x161980: 0xffbf0008
    ctx->pc = 0x161980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x161984: 0xc05862c
    ctx->pc = 0x161984u;
    SET_GPR_U32(ctx, 31, 0x16198Cu);
    ctx->pc = 0x161988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1618B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001618B0_0x1618b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16198Cu; }
    }
    if (ctx->pc != 0x16198Cu) { return; }
    ctx->pc = 0x16198Cu;
    // 0x16198c: 0x24030001
    ctx->pc = 0x16198cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x161990: 0x54430003
    ctx->pc = 0x161990u;
    {
        const bool branch_taken_0x161990 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x161990) {
            ctx->pc = 0x161994u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 232)));
            ctx->pc = 0x1619A0u;
            goto label_1619a0;
        }
    }
    ctx->pc = 0x161998u;
    // 0x161998: 0x1000000b
    ctx->pc = 0x161998u;
    {
        const bool branch_taken_0x161998 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16199Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x161998) {
            ctx->pc = 0x1619C8u;
            goto label_1619c8;
        }
    }
    ctx->pc = 0x1619A0u;
label_1619a0:
    // 0x1619a0: 0x102d
    ctx->pc = 0x1619a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1619a4: 0x10600008
    ctx->pc = 0x1619A4u;
    {
        const bool branch_taken_0x1619a4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1619A8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1619a4) {
            ctx->pc = 0x1619C8u;
            goto label_1619c8;
        }
    }
    ctx->pc = 0x1619ACu;
    // 0x1619ac: 0x8e040040
    ctx->pc = 0x1619acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1619b0: 0x24050002
    ctx->pc = 0x1619b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1619b4: 0xc05e244
    ctx->pc = 0x1619B4u;
    SET_GPR_U32(ctx, 31, 0x1619BCu);
    ctx->pc = 0x1619B8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x178910u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00178910_0x178910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1619BCu; }
    }
    if (ctx->pc != 0x1619BCu) { return; }
    ctx->pc = 0x1619BCu;
    // 0x1619bc: 0x2403ffff
    ctx->pc = 0x1619bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1619c0: 0x2180a
    ctx->pc = 0x1619c0u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 0));
    // 0x1619c4: 0x60102d
    ctx->pc = 0x1619c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1619c8:
    // 0x1619c8: 0xdfb00000
    ctx->pc = 0x1619c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1619cc: 0xdfbf0008
    ctx->pc = 0x1619ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1619d0: 0x3e00008
    ctx->pc = 0x1619D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1619D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1619A0u: goto label_1619a0;
            case 0x1619C8u: goto label_1619c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1619D8u;
}
