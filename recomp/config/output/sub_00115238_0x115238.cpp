#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00115238
// Address: 0x115238 - 0x1152a0
void sub_00115238_0x115238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x115238u;

    // 0x115238: 0x27bdffd0
    ctx->pc = 0x115238u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11523c: 0xffb10010
    ctx->pc = 0x11523cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x115240: 0xffbf0020
    ctx->pc = 0x115240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x115244: 0x80882d
    ctx->pc = 0x115244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115248: 0xffb00000
    ctx->pc = 0x115248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11524c: 0x40106000
    ctx->pc = 0x11524cu;
    SET_GPR_U32(ctx, 16, ctx->cop0_status);
    // 0x115250: 0x3c020001
    ctx->pc = 0x115250u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x115254: 0x2028024
    ctx->pc = 0x115254u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x115258: 0x12000003
    ctx->pc = 0x115258u;
    {
        const bool branch_taken_0x115258 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x115258) {
            ctx->pc = 0x115268u;
            goto label_115268;
        }
    }
    ctx->pc = 0x115260u;
    // 0x115260: 0xc047598
    ctx->pc = 0x115260u;
    SET_GPR_U32(ctx, 31, 0x115268u);
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115268u; }
    }
    if (ctx->pc != 0x115268u) { return; }
    ctx->pc = 0x115268u;
label_115268:
    // 0x115268: 0xc0450e0
    ctx->pc = 0x115268u;
    SET_GPR_U32(ctx, 31, 0x115270u);
    ctx->pc = 0x11526Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114380u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114380_0x114380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115270u; }
    }
    if (ctx->pc != 0x115270u) { return; }
    ctx->pc = 0x115270u;
    // 0x115270: 0x40882d
    ctx->pc = 0x115270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115274: 0xf
    ctx->pc = 0x115274u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x115278: 0x12000004
    ctx->pc = 0x115278u;
    {
        const bool branch_taken_0x115278 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x11527Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x115278) {
            ctx->pc = 0x11528Cu;
            goto label_11528c;
        }
    }
    ctx->pc = 0x115280u;
    // 0x115280: 0xc0475ae
    ctx->pc = 0x115280u;
    SET_GPR_U32(ctx, 31, 0x115288u);
    ctx->pc = 0x11D6B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6B8_0x11d6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115288u; }
    }
    if (ctx->pc != 0x115288u) { return; }
    ctx->pc = 0x115288u;
    // 0x115288: 0x220102d
    ctx->pc = 0x115288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11528c:
    // 0x11528c: 0xdfbf0020
    ctx->pc = 0x11528cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115290: 0xdfb10010
    ctx->pc = 0x115290u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115294: 0xdfb00000
    ctx->pc = 0x115294u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115298: 0x3e00008
    ctx->pc = 0x115298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11529Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x115268u: goto label_115268;
            case 0x11528Cu: goto label_11528c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1152A0u;
}
