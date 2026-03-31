#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00172340
// Address: 0x172340 - 0x1723b0
void sub_00172340_0x172340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x172340u;

    // 0x172340: 0x27bdffe0
    ctx->pc = 0x172340u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x172344: 0xffb00000
    ctx->pc = 0x172344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x172348: 0xa0802d
    ctx->pc = 0x172348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17234c: 0xffb10008
    ctx->pc = 0x17234cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x172350: 0xffbf0010
    ctx->pc = 0x172350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x172354: 0xc05a78c
    ctx->pc = 0x172354u;
    SET_GPR_U32(ctx, 31, 0x17235Cu);
    ctx->pc = 0x172358u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17235Cu; }
    }
    if (ctx->pc != 0x17235Cu) { return; }
    ctx->pc = 0x17235Cu;
    // 0x17235c: 0x3c05ff00
    ctx->pc = 0x17235cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x172360: 0x202d
    ctx->pc = 0x172360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172364: 0x200302d
    ctx->pc = 0x172364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172368: 0x10400007
    ctx->pc = 0x172368u;
    {
        const bool branch_taken_0x172368 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17236Cu;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 325));
        if (branch_taken_0x172368) {
            ctx->pc = 0x172388u;
            goto label_172388;
        }
    }
    ctx->pc = 0x172370u;
    // 0x172370: 0xdfb00000
    ctx->pc = 0x172370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172374: 0xdfb10008
    ctx->pc = 0x172374u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x172378: 0xdfbf0010
    ctx->pc = 0x172378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17237c: 0x805a704
    ctx->pc = 0x17237Cu;
    ctx->pc = 0x172380u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x172384u;
    // 0x172384: 0x0
    ctx->pc = 0x172384u;
    // NOP
label_172388:
    // 0x172388: 0x220202d
    ctx->pc = 0x172388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17238c: 0xc05d518
    ctx->pc = 0x17238Cu;
    SET_GPR_U32(ctx, 31, 0x172394u);
    ctx->pc = 0x172390u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 30));
    ctx->pc = 0x175460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175460_0x175460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172394u; }
    }
    if (ctx->pc != 0x172394u) { return; }
    ctx->pc = 0x172394u;
    // 0x172394: 0x102d
    ctx->pc = 0x172394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172398: 0xdfb00000
    ctx->pc = 0x172398u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17239c: 0xdfb10008
    ctx->pc = 0x17239cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1723a0: 0xdfbf0010
    ctx->pc = 0x1723a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1723a4: 0x3e00008
    ctx->pc = 0x1723A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1723A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172388u: goto label_172388;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1723ACu;
    // 0x1723ac: 0x0
    ctx->pc = 0x1723acu;
    // NOP
}
