#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013A168
// Address: 0x13a168 - 0x13a248
void sub_0013A168_0x13a168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13a168u;

label_13a168:
    // 0x13a168: 0x27bdfff0
    ctx->pc = 0x13a168u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13a16c: 0xffbf0000
    ctx->pc = 0x13a16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13a170: 0xdfbf0000
    ctx->pc = 0x13a170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a174: 0x804e822
    ctx->pc = 0x13A174u;
    ctx->pc = 0x13A178u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13A088u;
    entry_13a088_0x13a130(rdram, ctx, runtime); return;
    ctx->pc = 0x13A17Cu;
    // 0x13a17c: 0x0
    ctx->pc = 0x13a17cu;
    // NOP
    // 0x13a180: 0x27bdfff0
    ctx->pc = 0x13a180u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13a184: 0x182d
    ctx->pc = 0x13a184u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a188: 0xffbf0000
    ctx->pc = 0x13a188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13a18c: 0x1080002a
    ctx->pc = 0x13A18Cu;
    {
        const bool branch_taken_0x13a18c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x13A190u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13a18c) {
            ctx->pc = 0x13A238u;
            goto label_13a238;
        }
    }
    ctx->pc = 0x13A194u;
    // 0x13a194: 0x240200cb
    ctx->pc = 0x13a194u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 203));
    // 0x13a198: 0x10a20021
    ctx->pc = 0x13A198u;
    {
        const bool branch_taken_0x13a198 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x13A19Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 204));
        if (branch_taken_0x13a198) {
            ctx->pc = 0x13A220u;
            goto label_13a220;
        }
    }
    ctx->pc = 0x13A1A0u;
    // 0x13a1a0: 0x1040000b
    ctx->pc = 0x13A1A0u;
    {
        const bool branch_taken_0x13a1a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13A1A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 205));
        if (branch_taken_0x13a1a0) {
            ctx->pc = 0x13A1D0u;
            goto label_13a1d0;
        }
    }
    ctx->pc = 0x13A1A8u;
    // 0x13a1a8: 0x240200c9
    ctx->pc = 0x13a1a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 201));
    // 0x13a1ac: 0x10a20014
    ctx->pc = 0x13A1ACu;
    {
        const bool branch_taken_0x13a1ac = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x13A1B0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 202));
        if (branch_taken_0x13a1ac) {
            ctx->pc = 0x13A200u;
            goto label_13a200;
        }
    }
    ctx->pc = 0x13A1B4u;
    // 0x13a1b4: 0x10400016
    ctx->pc = 0x13A1B4u;
    {
        const bool branch_taken_0x13a1b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13A1B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 200));
        if (branch_taken_0x13a1b4) {
            ctx->pc = 0x13A210u;
            goto label_13a210;
        }
    }
    ctx->pc = 0x13A1BCu;
    // 0x13a1bc: 0x10a2000c
    ctx->pc = 0x13A1BCu;
    {
        const bool branch_taken_0x13a1bc = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x13A1C0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13a1bc) {
            ctx->pc = 0x13A1F0u;
            goto label_13a1f0;
        }
    }
    ctx->pc = 0x13A1C4u;
    // 0x13a1c4: 0x1000001d
    ctx->pc = 0x13A1C4u;
    {
        const bool branch_taken_0x13a1c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13A1C8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x13a1c4) {
            ctx->pc = 0x13A23Cu;
            goto label_13a23c;
        }
    }
    ctx->pc = 0x13A1CCu;
    // 0x13a1cc: 0x0
    ctx->pc = 0x13a1ccu;
    // NOP
label_13a1d0:
    // 0x13a1d0: 0x10a20013
    ctx->pc = 0x13A1D0u;
    {
        const bool branch_taken_0x13a1d0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x13A1D4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 205));
        if (branch_taken_0x13a1d0) {
            ctx->pc = 0x13A220u;
            goto label_13a220;
        }
    }
    ctx->pc = 0x13A1D8u;
    // 0x13a1d8: 0x1440000d
    ctx->pc = 0x13A1D8u;
    {
        const bool branch_taken_0x13a1d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13A1DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 299));
        if (branch_taken_0x13a1d8) {
            ctx->pc = 0x13A210u;
            goto label_13a210;
        }
    }
    ctx->pc = 0x13A1E0u;
    // 0x13a1e0: 0x10a20013
    ctx->pc = 0x13A1E0u;
    {
        const bool branch_taken_0x13a1e0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x13A1E4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13a1e0) {
            ctx->pc = 0x13A230u;
            goto label_13a230;
        }
    }
    ctx->pc = 0x13A1E8u;
    // 0x13a1e8: 0x10000014
    ctx->pc = 0x13A1E8u;
    {
        const bool branch_taken_0x13a1e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13A1ECu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x13a1e8) {
            ctx->pc = 0x13A23Cu;
            goto label_13a23c;
        }
    }
    ctx->pc = 0x13A1F0u;
label_13a1f0:
    // 0x13a1f0: 0xc04e84c
    ctx->pc = 0x13A1F0u;
    SET_GPR_U32(ctx, 31, 0x13A1F8u);
    ctx->pc = 0x13A130u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A130_0x13a130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A1F8u; }
    }
    if (ctx->pc != 0x13A1F8u) { return; }
    ctx->pc = 0x13A1F8u;
    // 0x13a1f8: 0x1000000e
    ctx->pc = 0x13A1F8u;
    {
        const bool branch_taken_0x13a1f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13A1FCu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13a1f8) {
            ctx->pc = 0x13A234u;
            goto label_13a234;
        }
    }
    ctx->pc = 0x13A200u;
label_13a200:
    // 0x13a200: 0xc04e850
    ctx->pc = 0x13A200u;
    SET_GPR_U32(ctx, 31, 0x13A208u);
    ctx->pc = 0x13A140u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A140_0x13a140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A208u; }
    }
    if (ctx->pc != 0x13A208u) { return; }
    ctx->pc = 0x13A208u;
    // 0x13a208: 0x1000000a
    ctx->pc = 0x13A208u;
    {
        const bool branch_taken_0x13a208 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13A20Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13a208) {
            ctx->pc = 0x13A234u;
            goto label_13a234;
        }
    }
    ctx->pc = 0x13A210u;
label_13a210:
    // 0x13a210: 0xc04e858
    ctx->pc = 0x13A210u;
    SET_GPR_U32(ctx, 31, 0x13A218u);
    ctx->pc = 0x13A160u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A160_0x13a160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A218u; }
    }
    if (ctx->pc != 0x13A218u) { return; }
    ctx->pc = 0x13A218u;
    // 0x13a218: 0x10000006
    ctx->pc = 0x13A218u;
    {
        const bool branch_taken_0x13a218 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13A21Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13a218) {
            ctx->pc = 0x13A234u;
            goto label_13a234;
        }
    }
    ctx->pc = 0x13A220u;
label_13a220:
    // 0x13a220: 0xc04e85a
    ctx->pc = 0x13A220u;
    SET_GPR_U32(ctx, 31, 0x13A228u);
    ctx->pc = 0x13A168u;
    goto label_13a168;
    ctx->pc = 0x13A228u;
label_13a228:
    // 0x13a228: 0x10000002
    ctx->pc = 0x13A228u;
    {
        const bool branch_taken_0x13a228 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13A22Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13a228) {
            ctx->pc = 0x13A234u;
            goto label_13a234;
        }
    }
    ctx->pc = 0x13A230u;
label_13a230:
    // 0x13a230: 0x24030001
    ctx->pc = 0x13a230u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_13a234:
    // 0x13a234: 0x60102d
    ctx->pc = 0x13a234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_13a238:
    // 0x13a238: 0xdfbf0000
    ctx->pc = 0x13a238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13a23c:
    // 0x13a23c: 0x3e00008
    ctx->pc = 0x13A23Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A240u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13A168u: goto label_13a168;
            case 0x13A1D0u: goto label_13a1d0;
            case 0x13A1F0u: goto label_13a1f0;
            case 0x13A200u: goto label_13a200;
            case 0x13A210u: goto label_13a210;
            case 0x13A220u: goto label_13a220;
            case 0x13A228u: goto label_13a228;
            case 0x13A230u: goto label_13a230;
            case 0x13A234u: goto label_13a234;
            case 0x13A238u: goto label_13a238;
            case 0x13A23Cu: goto label_13a23c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13A244u;
    // 0x13a244: 0x0
    ctx->pc = 0x13a244u;
    // NOP
}
