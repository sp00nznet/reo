#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00174218
// Address: 0x174218 - 0x1742a8
void sub_00174218_0x174218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x174218u;

    // 0x174218: 0x27bdfff0
    ctx->pc = 0x174218u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17421c: 0xc0382d
    ctx->pc = 0x17421cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174220: 0xffb00000
    ctx->pc = 0x174220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174224: 0x80802d
    ctx->pc = 0x174224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174228: 0xffbf0008
    ctx->pc = 0x174228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17422c: 0x518c0
    ctx->pc = 0x17422cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x174230: 0x651823
    ctx->pc = 0x174230u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x174234: 0x102d
    ctx->pc = 0x174234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174238: 0x8ce60000
    ctx->pc = 0x174238u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x17423c: 0x31880
    ctx->pc = 0x17423cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x174240: 0x4c00014
    ctx->pc = 0x174240u;
    {
        const bool branch_taken_0x174240 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x174244u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        if (branch_taken_0x174240) {
            ctx->pc = 0x174294u;
            goto label_174294;
        }
    }
    ctx->pc = 0x174248u;
    // 0x174248: 0x32080
    ctx->pc = 0x174248u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 2));
    // 0x17424c: 0x2042021
    ctx->pc = 0x17424cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x174250: 0x24841178
    ctx->pc = 0x174250u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4472));
    // 0x174254: 0x8c830000
    ctx->pc = 0x174254u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x174258: 0x5060000f
    ctx->pc = 0x174258u;
    {
        const bool branch_taken_0x174258 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x174258) {
            ctx->pc = 0x17425Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x174298u;
            goto label_174298;
        }
    }
    ctx->pc = 0x174260u;
    // 0x174260: 0xc05d0aa
    ctx->pc = 0x174260u;
    SET_GPR_U32(ctx, 31, 0x174268u);
    ctx->pc = 0x174264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1742A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001742A8_0x1742a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174268u; }
    }
    if (ctx->pc != 0x174268u) { return; }
    ctx->pc = 0x174268u;
    // 0x174268: 0x200202d
    ctx->pc = 0x174268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17426c: 0x3c05ff00
    ctx->pc = 0x17426cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x174270: 0x2403ffff
    ctx->pc = 0x174270u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x174274: 0x14430006
    ctx->pc = 0x174274u;
    {
        const bool branch_taken_0x174274 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x174278u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1057));
        if (branch_taken_0x174274) {
            ctx->pc = 0x174290u;
            goto label_174290;
        }
    }
    ctx->pc = 0x17427Cu;
    // 0x17427c: 0xdfb00000
    ctx->pc = 0x17427cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174280: 0xdfbf0008
    ctx->pc = 0x174280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174284: 0x805a704
    ctx->pc = 0x174284u;
    ctx->pc = 0x174288u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x17428Cu;
    // 0x17428c: 0x0
    ctx->pc = 0x17428cu;
    // NOP
label_174290:
    // 0x174290: 0x102d
    ctx->pc = 0x174290u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174294:
    // 0x174294: 0xdfb00000
    ctx->pc = 0x174294u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_174298:
    // 0x174298: 0xdfbf0008
    ctx->pc = 0x174298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17429c: 0x3e00008
    ctx->pc = 0x17429Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1742A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174290u: goto label_174290;
            case 0x174294u: goto label_174294;
            case 0x174298u: goto label_174298;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1742A4u;
    // 0x1742a4: 0x0
    ctx->pc = 0x1742a4u;
    // NOP
}
