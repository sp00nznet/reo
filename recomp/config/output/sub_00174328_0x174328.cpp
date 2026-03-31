#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00174328
// Address: 0x174328 - 0x1743a0
void sub_00174328_0x174328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x174328u;

    // 0x174328: 0x510c0
    ctx->pc = 0x174328u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
    // 0x17432c: 0x24831140
    ctx->pc = 0x17432cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4416));
    // 0x174330: 0x451023
    ctx->pc = 0x174330u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x174334: 0x27bdfff0
    ctx->pc = 0x174334u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x174338: 0x21080
    ctx->pc = 0x174338u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x17433c: 0xffbf0000
    ctx->pc = 0x17433cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x174340: 0x451021
    ctx->pc = 0x174340u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x174344: 0x2404ffff
    ctx->pc = 0x174344u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x174348: 0x21080
    ctx->pc = 0x174348u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x17434c: 0xace40000
    ctx->pc = 0x17434cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x174350: 0x621821
    ctx->pc = 0x174350u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x174354: 0x102d
    ctx->pc = 0x174354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174358: 0x24640038
    ctx->pc = 0x174358u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 56));
    // 0x17435c: 0x24630010
    ctx->pc = 0x17435cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
    // 0x174360: 0x8c850000
    ctx->pc = 0x174360u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x174364: 0xc0482d
    ctx->pc = 0x174364u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174368: 0x8c68000c
    ctx->pc = 0x174368u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x17436c: 0xe0302d
    ctx->pc = 0x17436cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174370: 0x10a00007
    ctx->pc = 0x174370u;
    {
        const bool branch_taken_0x174370 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x174374u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 8)));
        if (branch_taken_0x174370) {
            ctx->pc = 0x174390u;
            goto label_174390;
        }
    }
    ctx->pc = 0x174378u;
    // 0x174378: 0xe81021
    ctx->pc = 0x174378u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x17437c: 0x1282823
    ctx->pc = 0x17437cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x174380: 0x122102b
    ctx->pc = 0x174380u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x174384: 0xc05d0e8
    ctx->pc = 0x174384u;
    SET_GPR_U32(ctx, 31, 0x17438Cu);
    ctx->pc = 0x174388u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 9));
    ctx->pc = 0x1743A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001743A0_0x1743a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17438Cu; }
    }
    if (ctx->pc != 0x17438Cu) { return; }
    ctx->pc = 0x17438Cu;
    // 0x17438c: 0x102d
    ctx->pc = 0x17438cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174390:
    // 0x174390: 0xdfbf0000
    ctx->pc = 0x174390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174394: 0x3e00008
    ctx->pc = 0x174394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174398u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174390u: goto label_174390;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17439Cu;
    // 0x17439c: 0x0
    ctx->pc = 0x17439cu;
    // NOP
}
