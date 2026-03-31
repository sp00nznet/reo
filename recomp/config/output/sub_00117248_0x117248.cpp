#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00117248
// Address: 0x117248 - 0x1172f0
void sub_00117248_0x117248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x117248u;

    // 0x117248: 0x27bdffd0
    ctx->pc = 0x117248u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11724c: 0xffb10010
    ctx->pc = 0x11724cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x117250: 0xffb00000
    ctx->pc = 0x117250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117254: 0xffbf0020
    ctx->pc = 0x117254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x117258: 0xc047598
    ctx->pc = 0x117258u;
    SET_GPR_U32(ctx, 31, 0x117260u);
    ctx->pc = 0x11725Cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117260u; }
    }
    if (ctx->pc != 0x117260u) { return; }
    ctx->pc = 0x117260u;
    // 0x117260: 0x8e240008
    ctx->pc = 0x117260u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x117264: 0x182d
    ctx->pc = 0x117264u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117268: 0x18800019
    ctx->pc = 0x117268u;
    {
        const bool branch_taken_0x117268 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x11726Cu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 4)));
        if (branch_taken_0x117268) {
            ctx->pc = 0x1172D0u;
            goto label_1172d0;
        }
    }
    ctx->pc = 0x117270u;
    // 0x117270: 0x24050001
    ctx->pc = 0x117270u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x117274: 0x0
    ctx->pc = 0x117274u;
    // NOP
label_117278:
    // 0x117278: 0x8e020010
    ctx->pc = 0x117278u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11727c: 0x30420001
    ctx->pc = 0x11727cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x117280: 0x54400010
    ctx->pc = 0x117280u;
    {
        const bool branch_taken_0x117280 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x117280) {
            ctx->pc = 0x117284u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x1172C4u;
            goto label_1172c4;
        }
    }
    ctx->pc = 0x117288u;
    // 0x117288: 0x31400
    ctx->pc = 0x117288u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 16));
    // 0x11728c: 0x34420005
    ctx->pc = 0x11728cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 5));
    // 0x117290: 0xae020010
    ctx->pc = 0x117290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x117294: 0x8e220000
    ctx->pc = 0x117294u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x117298: 0x24430001
    ctx->pc = 0x117298u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x11729c: 0x14650004
    ctx->pc = 0x11729Cu;
    {
        const bool branch_taken_0x11729c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 5));
        ctx->pc = 0x1172A0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x11729c) {
            ctx->pc = 0x1172B0u;
            goto label_1172b0;
        }
    }
    ctx->pc = 0x1172A4u;
    // 0x1172a4: 0x24420002
    ctx->pc = 0x1172a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x1172a8: 0x24030001
    ctx->pc = 0x1172a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1172ac: 0xae220000
    ctx->pc = 0x1172acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1172b0:
    // 0x1172b0: 0xae100014
    ctx->pc = 0x1172b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
    // 0x1172b4: 0xc0475ae
    ctx->pc = 0x1172B4u;
    SET_GPR_U32(ctx, 31, 0x1172BCu);
    ctx->pc = 0x1172B8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    ctx->pc = 0x11D6B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6B8_0x11d6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1172BCu; }
    }
    if (ctx->pc != 0x1172BCu) { return; }
    ctx->pc = 0x1172BCu;
    // 0x1172bc: 0x10000007
    ctx->pc = 0x1172BCu;
    {
        const bool branch_taken_0x1172bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1172C0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1172bc) {
            ctx->pc = 0x1172DCu;
            goto label_1172dc;
        }
    }
    ctx->pc = 0x1172C4u;
label_1172c4:
    // 0x1172c4: 0x64102a
    ctx->pc = 0x1172c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x1172c8: 0x1440ffeb
    ctx->pc = 0x1172C8u;
    {
        const bool branch_taken_0x1172c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1172CCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 64));
        if (branch_taken_0x1172c8) {
            ctx->pc = 0x117278u;
            goto label_117278;
        }
    }
    ctx->pc = 0x1172D0u;
label_1172d0:
    // 0x1172d0: 0xc0475ae
    ctx->pc = 0x1172D0u;
    SET_GPR_U32(ctx, 31, 0x1172D8u);
    ctx->pc = 0x11D6B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6B8_0x11d6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1172D8u; }
    }
    if (ctx->pc != 0x1172D8u) { return; }
    ctx->pc = 0x1172D8u;
    // 0x1172d8: 0x102d
    ctx->pc = 0x1172d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1172dc:
    // 0x1172dc: 0xdfbf0020
    ctx->pc = 0x1172dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1172e0: 0xdfb10010
    ctx->pc = 0x1172e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1172e4: 0xdfb00000
    ctx->pc = 0x1172e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1172e8: 0x3e00008
    ctx->pc = 0x1172E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1172ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117278u: goto label_117278;
            case 0x1172B0u: goto label_1172b0;
            case 0x1172C4u: goto label_1172c4;
            case 0x1172D0u: goto label_1172d0;
            case 0x1172DCu: goto label_1172dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1172F0u;
}
