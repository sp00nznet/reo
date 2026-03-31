#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00139628
// Address: 0x139628 - 0x1396d0
void sub_00139628_0x139628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x139628u;

    // 0x139628: 0x27bdffe0
    ctx->pc = 0x139628u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13962c: 0xffb00000
    ctx->pc = 0x13962cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x139630: 0x80802d
    ctx->pc = 0x139630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139634: 0x34048000
    ctx->pc = 0x139634u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32768));
    // 0x139638: 0xffb10008
    ctx->pc = 0x139638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13963c: 0xffbf0010
    ctx->pc = 0x13963cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x139640: 0xc04e082
    ctx->pc = 0x139640u;
    SET_GPR_U32(ctx, 31, 0x139648u);
    ctx->pc = 0x139644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139648u; }
    }
    if (ctx->pc != 0x139648u) { return; }
    ctx->pc = 0x139648u;
    // 0x139648: 0x3c020022
    ctx->pc = 0x139648u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13964c: 0x8c46cbec
    ctx->pc = 0x13964cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294953964)));
    // 0x139650: 0x220282d
    ctx->pc = 0x139650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139654: 0xc04020e
    ctx->pc = 0x139654u;
    SET_GPR_U32(ctx, 31, 0x13965Cu);
    ctx->pc = 0x139658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x100838u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00100838_0x100838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13965Cu; }
    }
    if (ctx->pc != 0x13965Cu) { return; }
    ctx->pc = 0x13965Cu;
    // 0x13965c: 0x34048001
    ctx->pc = 0x13965cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32769));
    // 0x139660: 0xc04e082
    ctx->pc = 0x139660u;
    SET_GPR_U32(ctx, 31, 0x139668u);
    ctx->pc = 0x139664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139668u; }
    }
    if (ctx->pc != 0x139668u) { return; }
    ctx->pc = 0x139668u;
    // 0x139668: 0xdfb10008
    ctx->pc = 0x139668u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13966c: 0x200102d
    ctx->pc = 0x13966cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139670: 0xdfbf0010
    ctx->pc = 0x139670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139674: 0xdfb00000
    ctx->pc = 0x139674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139678: 0x3e00008
    ctx->pc = 0x139678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13967Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x139698u: goto label_139698;
            case 0x1396B4u: goto label_1396b4;
            case 0x1396C8u: goto label_1396c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x139680u;
    // 0x139680: 0x3c020022
    ctx->pc = 0x139680u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x139684: 0x282d
    ctx->pc = 0x139684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139688: 0x2444cc60
    ctx->pc = 0x139688u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294954080));
    // 0x13968c: 0x24070001
    ctx->pc = 0x13968cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x139690: 0x24060002
    ctx->pc = 0x139690u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x139694: 0x0
    ctx->pc = 0x139694u;
    // NOP
label_139698:
    // 0x139698: 0x80820000
    ctx->pc = 0x139698u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13969c: 0x54470005
    ctx->pc = 0x13969Cu;
    {
        const bool branch_taken_0x13969c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 7));
        if (branch_taken_0x13969c) {
            ctx->pc = 0x1396A0u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x1396B4u;
            goto label_1396b4;
        }
    }
    ctx->pc = 0x1396A4u;
    // 0x1396a4: 0x80830002
    ctx->pc = 0x1396a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1396a8: 0x10660007
    ctx->pc = 0x1396A8u;
    {
        const bool branch_taken_0x1396a8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 6));
        ctx->pc = 0x1396ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1396a8) {
            ctx->pc = 0x1396C8u;
            goto label_1396c8;
        }
    }
    ctx->pc = 0x1396B0u;
    // 0x1396b0: 0x24a50001
    ctx->pc = 0x1396b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_1396b4:
    // 0x1396b4: 0x28a20028
    ctx->pc = 0x1396b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 40));
    // 0x1396b8: 0x0
    ctx->pc = 0x1396b8u;
    // NOP
    // 0x1396bc: 0x1440fff6
    ctx->pc = 0x1396BCu;
    {
        const bool branch_taken_0x1396bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1396C0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 72));
        if (branch_taken_0x1396bc) {
            ctx->pc = 0x139698u;
            goto label_139698;
        }
    }
    ctx->pc = 0x1396C4u;
    // 0x1396c4: 0x102d
    ctx->pc = 0x1396c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1396c8:
    // 0x1396c8: 0x3e00008
    ctx->pc = 0x1396C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x139698u: goto label_139698;
            case 0x1396B4u: goto label_1396b4;
            case 0x1396C8u: goto label_1396c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1396D0u;
}
