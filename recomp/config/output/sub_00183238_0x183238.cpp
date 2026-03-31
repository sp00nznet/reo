#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00183238
// Address: 0x183238 - 0x183290
void sub_00183238_0x183238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x183238u;

    // 0x183238: 0x27bdffe0
    ctx->pc = 0x183238u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18323c: 0xa0302d
    ctx->pc = 0x18323cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183240: 0xffbf0010
    ctx->pc = 0x183240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x183244: 0x24080001
    ctx->pc = 0x183244u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x183248: 0x3a0282d
    ctx->pc = 0x183248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18324c: 0x8cc30030
    ctx->pc = 0x18324cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x183250: 0x94c20028
    ctx->pc = 0x183250u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x183254: 0x31a80
    ctx->pc = 0x183254u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 10));
    // 0x183258: 0x94c7002c
    ctx->pc = 0x183258u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x18325c: 0x62001a
    ctx->pc = 0x18325cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x183260: 0xafa20000
    ctx->pc = 0x183260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x183264: 0xafa70004
    ctx->pc = 0x183264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x183268: 0x50400001
    ctx->pc = 0x183268u;
    {
        const bool branch_taken_0x183268 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x183268) {
            ctx->pc = 0x18326Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x183270u;
            goto label_183270;
        }
    }
    ctx->pc = 0x183270u;
label_183270:
    // 0x183270: 0xafa8000c
    ctx->pc = 0x183270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
    // 0x183274: 0x1812
    ctx->pc = 0x183274u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x183278: 0xc061ec6
    ctx->pc = 0x183278u;
    SET_GPR_U32(ctx, 31, 0x183280u);
    ctx->pc = 0x18327Cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x187B18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187B18_0x187b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183280u; }
    }
    if (ctx->pc != 0x183280u) { return; }
    ctx->pc = 0x183280u;
    // 0x183280: 0xdfbf0010
    ctx->pc = 0x183280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183284: 0x3e00008
    ctx->pc = 0x183284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183288u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x183270u: goto label_183270;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18328Cu;
    // 0x18328c: 0x0
    ctx->pc = 0x18328cu;
    // NOP
}
