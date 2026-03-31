#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D53F0
// Address: 0x1d53f0 - 0x1d5498
void sub_001D53F0_0x1d53f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d53f0u;

    // 0x1d53f0: 0x27bdffd0
    ctx->pc = 0x1d53f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d53f4: 0x3c030023
    ctx->pc = 0x1d53f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x1d53f8: 0xffb00010
    ctx->pc = 0x1d53f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d53fc: 0x2402ffff
    ctx->pc = 0x1d53fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5400: 0x80802d
    ctx->pc = 0x1d5400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5404: 0xffbf0020
    ctx->pc = 0x1d5404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d5408: 0x8c646998
    ctx->pc = 0x1d5408u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 27032)));
    // 0x1d540c: 0x1082001f
    ctx->pc = 0x1D540Cu;
    {
        const bool branch_taken_0x1d540c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D5410u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1d540c) {
            ctx->pc = 0x1D548Cu;
            goto label_1d548c;
        }
    }
    ctx->pc = 0x1D5414u;
    // 0x1d5414: 0xc045198
    ctx->pc = 0x1D5414u;
    SET_GPR_U32(ctx, 31, 0x1D541Cu);
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D541Cu; }
    }
    if (ctx->pc != 0x1D541Cu) { return; }
    ctx->pc = 0x1D541Cu;
    // 0x1d541c: 0x3c040034
    ctx->pc = 0x1d541cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x1d5420: 0x3c070034
    ctx->pc = 0x1d5420u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d5424: 0x3c090034
    ctx->pc = 0x1d5424u;
    SET_GPR_U32(ctx, 9, ((uint32_t)52 << 16));
    // 0x1d5428: 0x3c0b001d
    ctx->pc = 0x1d5428u;
    SET_GPR_U32(ctx, 11, ((uint32_t)29 << 16));
    // 0x1d542c: 0x248428e0
    ctx->pc = 0x1d542cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10464));
    // 0x1d5430: 0x24e72940
    ctx->pc = 0x1d5430u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 10560));
    // 0x1d5434: 0x25292980
    ctx->pc = 0x1d5434u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 10624));
    // 0x1d5438: 0x256b59b8
    ctx->pc = 0x1d5438u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 22968));
    // 0x1d543c: 0xafa00000
    ctx->pc = 0x1d543cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1d5440: 0x24050001
    ctx->pc = 0x1d5440u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5444: 0x24060001
    ctx->pc = 0x1d5444u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5448: 0x24080010
    ctx->pc = 0x1d5448u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d544c: 0xc045e7a
    ctx->pc = 0x1D544Cu;
    SET_GPR_U32(ctx, 31, 0x1D5454u);
    ctx->pc = 0x1D5450u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 144));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5454u; }
    }
    if (ctx->pc != 0x1D5454u) { return; }
    ctx->pc = 0x1D5454u;
    // 0x1d5454: 0x10400006
    ctx->pc = 0x1D5454u;
    {
        const bool branch_taken_0x1d5454 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D5458u;
        SET_GPR_U32(ctx, 4, ((uint32_t)37 << 16));
        if (branch_taken_0x1d5454) {
            ctx->pc = 0x1D5470u;
            goto label_1d5470;
        }
    }
    ctx->pc = 0x1D545Cu;
    // 0x1d545c: 0x40282d
    ctx->pc = 0x1d545cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5460: 0xc045a12
    ctx->pc = 0x1D5460u;
    SET_GPR_U32(ctx, 31, 0x1D5468u);
    ctx->pc = 0x1D5464u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 28256));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5468u; }
    }
    if (ctx->pc != 0x1D5468u) { return; }
    ctx->pc = 0x1D5468u;
    // 0x1d5468: 0x10000007
    ctx->pc = 0x1D5468u;
    {
        const bool branch_taken_0x1d5468 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D546Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x1d5468) {
            ctx->pc = 0x1D5488u;
            goto label_1d5488;
        }
    }
    ctx->pc = 0x1D5470u;
label_1d5470:
    // 0x1d5470: 0x3c030034
    ctx->pc = 0x1d5470u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x1d5474: 0x24040001
    ctx->pc = 0x1d5474u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5478: 0x24632840
    ctx->pc = 0x1d5478u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 10304));
    // 0x1d547c: 0x102d
    ctx->pc = 0x1d547cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5480: 0xac700098
    ctx->pc = 0x1d5480u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 152), GPR_U32(ctx, 16));
    // 0x1d5484: 0xac640090
    ctx->pc = 0x1d5484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 4));
label_1d5488:
    // 0x1d5488: 0xdfbf0020
    ctx->pc = 0x1d5488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d548c:
    // 0x1d548c: 0xdfb00010
    ctx->pc = 0x1d548cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5490: 0x3e00008
    ctx->pc = 0x1D5490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5494u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D5470u: goto label_1d5470;
            case 0x1D5488u: goto label_1d5488;
            case 0x1D548Cu: goto label_1d548c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D5498u;
}
