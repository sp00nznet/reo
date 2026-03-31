#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016A1C0
// Address: 0x16a1c0 - 0x16a290
void sub_0016A1C0_0x16a1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16a1c0u;

    // 0x16a1c0: 0x27bdffc0
    ctx->pc = 0x16a1c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16a1c4: 0x182d
    ctx->pc = 0x16a1c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a1c8: 0xffb00010
    ctx->pc = 0x16a1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16a1cc: 0x80802d
    ctx->pc = 0x16a1ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a1d0: 0xffb10018
    ctx->pc = 0x16a1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x16a1d4: 0x882d
    ctx->pc = 0x16a1d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a1d8: 0xffb20020
    ctx->pc = 0x16a1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16a1dc: 0x3c127fff
    ctx->pc = 0x16a1dcu;
    SET_GPR_U32(ctx, 18, ((uint32_t)32767 << 16));
    // 0x16a1e0: 0xffb30028
    ctx->pc = 0x16a1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x16a1e4: 0x3652fffe
    ctx->pc = 0x16a1e4u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), 65534));
    // 0x16a1e8: 0xffbf0030
    ctx->pc = 0x16a1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16a1ec: 0x10000009
    ctx->pc = 0x16A1ECu;
    {
        const bool branch_taken_0x16a1ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16A1F0u;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        if (branch_taken_0x16a1ec) {
            ctx->pc = 0x16A214u;
            goto label_16a214;
        }
    }
    ctx->pc = 0x16A1F4u;
    // 0x16a1f4: 0x0
    ctx->pc = 0x16a1f4u;
    // NOP
label_16a1f8:
    // 0x16a1f8: 0xc05a8be
    ctx->pc = 0x16A1F8u;
    SET_GPR_U32(ctx, 31, 0x16A200u);
    ctx->pc = 0x16A2F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A2F8_0x16a2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A200u; }
    }
    if (ctx->pc != 0x16A200u) { return; }
    ctx->pc = 0x16A200u;
    // 0x16a200: 0x40182d
    ctx->pc = 0x16a200u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a204: 0x5460001b
    ctx->pc = 0x16A204u;
    {
        const bool branch_taken_0x16a204 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x16a204) {
            ctx->pc = 0x16A208u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x16A274u;
            goto label_16a274;
        }
    }
    ctx->pc = 0x16A20Cu;
    // 0x16a20c: 0x8fa2000c
    ctx->pc = 0x16a20cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x16a210: 0x2228821
    ctx->pc = 0x16a210u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_16a214:
    // 0x16a214: 0x251102a
    ctx->pc = 0x16a214u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 17)));
    // 0x16a218: 0x54400016
    ctx->pc = 0x16A218u;
    {
        const bool branch_taken_0x16a218 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16a218) {
            ctx->pc = 0x16A21Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x16A274u;
            goto label_16a274;
        }
    }
    ctx->pc = 0x16A220u;
    // 0x16a220: 0x200202d
    ctx->pc = 0x16a220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a224: 0x260382d
    ctx->pc = 0x16a224u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a228: 0x3a0282d
    ctx->pc = 0x16a228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a22c: 0x27a60004
    ctx->pc = 0x16a22cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
    // 0x16a230: 0xc05a8a4
    ctx->pc = 0x16A230u;
    SET_GPR_U32(ctx, 31, 0x16A238u);
    ctx->pc = 0x16A234u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 8));
    ctx->pc = 0x16A290u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A290_0x16a290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A238u; }
    }
    if (ctx->pc != 0x16A238u) { return; }
    ctx->pc = 0x16A238u;
    // 0x16a238: 0x200202d
    ctx->pc = 0x16a238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a23c: 0x40182d
    ctx->pc = 0x16a23cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a240: 0x1460000b
    ctx->pc = 0x16A240u;
    {
        const bool branch_taken_0x16a240 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x16A244u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 12));
        if (branch_taken_0x16a240) {
            ctx->pc = 0x16A270u;
            goto label_16a270;
        }
    }
    ctx->pc = 0x16A248u;
    // 0x16a248: 0x8fa50000
    ctx->pc = 0x16a248u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a24c: 0x8fa60004
    ctx->pc = 0x16a24cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16a250: 0xc05a8c6
    ctx->pc = 0x16A250u;
    SET_GPR_U32(ctx, 31, 0x16A258u);
    ctx->pc = 0x16A254u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x16A318u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A318_0x16a318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A258u; }
    }
    if (ctx->pc != 0x16A258u) { return; }
    ctx->pc = 0x16A258u;
    // 0x16a258: 0x40182d
    ctx->pc = 0x16a258u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a25c: 0x14600004
    ctx->pc = 0x16A25Cu;
    {
        const bool branch_taken_0x16a25c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x16A260u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16a25c) {
            ctx->pc = 0x16A270u;
            goto label_16a270;
        }
    }
    ctx->pc = 0x16A264u;
    // 0x16a264: 0x8fa5000c
    ctx->pc = 0x16a264u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x16a268: 0x14a0ffe3
    ctx->pc = 0x16A268u;
    {
        const bool branch_taken_0x16a268 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x16a268) {
            ctx->pc = 0x16A1F8u;
            goto label_16a1f8;
        }
    }
    ctx->pc = 0x16A270u;
label_16a270:
    // 0x16a270: 0xdfb00010
    ctx->pc = 0x16a270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16a274:
    // 0x16a274: 0x60102d
    ctx->pc = 0x16a274u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a278: 0xdfb10018
    ctx->pc = 0x16a278u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16a27c: 0xdfb20020
    ctx->pc = 0x16a27cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a280: 0xdfb30028
    ctx->pc = 0x16a280u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16a284: 0xdfbf0030
    ctx->pc = 0x16a284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16a288: 0x3e00008
    ctx->pc = 0x16A288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A28Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16A1F8u: goto label_16a1f8;
            case 0x16A214u: goto label_16a214;
            case 0x16A270u: goto label_16a270;
            case 0x16A274u: goto label_16a274;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16A290u;
}
