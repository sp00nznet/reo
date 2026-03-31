#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00128198
// Address: 0x128198 - 0x1282a0
void sub_00128198_0x128198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x128198u;

    // 0x128198: 0x2402000a
    ctx->pc = 0x128198u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x12819c: 0x27bdffe0
    ctx->pc = 0x12819cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1281a0: 0x82001a
    ctx->pc = 0x1281a0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1281a4: 0xffb00000
    ctx->pc = 0x1281a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1281a8: 0x2403000a
    ctx->pc = 0x1281a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1281ac: 0xa0802d
    ctx->pc = 0x1281acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1281b0: 0xffb20010
    ctx->pc = 0x1281b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1281b4: 0xc0902d
    ctx->pc = 0x1281b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1281b8: 0xffb10008
    ctx->pc = 0x1281b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1281bc: 0x282d
    ctx->pc = 0x1281bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1281c0: 0xffbf0018
    ctx->pc = 0x1281c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1281c4: 0x50400001
    ctx->pc = 0x1281C4u;
    {
        const bool branch_taken_0x1281c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1281c4) {
            ctx->pc = 0x1281C8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1281CCu;
            goto label_1281cc;
        }
    }
    ctx->pc = 0x1281CCu;
label_1281cc:
    // 0x1281cc: 0x4012
    ctx->pc = 0x1281ccu;
    SET_GPR_U32(ctx, 8, ctx->lo);
    // 0x1281d0: 0x3810
    ctx->pc = 0x1281d0u;
    SET_GPR_U32(ctx, 7, ctx->hi);
    // 0x1281d4: 0x100202d
    ctx->pc = 0x1281d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1281d8: 0xa2070000
    ctx->pc = 0x1281d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x1281dc: 0x54800004
    ctx->pc = 0x1281DCu;
    {
        const bool branch_taken_0x1281dc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x1281dc) {
            ctx->pc = 0x1281E0u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x1281F0u;
            goto label_1281f0;
        }
    }
    ctx->pc = 0x1281E4u;
    // 0x1281e4: 0x10000011
    ctx->pc = 0x1281E4u;
    {
        const bool branch_taken_0x1281e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1281E8u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1281e4) {
            ctx->pc = 0x12822Cu;
            goto label_12822c;
        }
    }
    ctx->pc = 0x1281ECu;
    // 0x1281ec: 0x0
    ctx->pc = 0x1281ecu;
    // NOP
label_1281f0:
    // 0x1281f0: 0x28a20020
    ctx->pc = 0x1281f0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 32));
    // 0x1281f4: 0x1040000d
    ctx->pc = 0x1281F4u;
    {
        const bool branch_taken_0x1281f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1281F8u;
        SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        if (branch_taken_0x1281f4) {
            ctx->pc = 0x12822Cu;
            goto label_12822c;
        }
    }
    ctx->pc = 0x1281FCu;
    // 0x1281fc: 0x2402000a
    ctx->pc = 0x1281fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x128200: 0x2403000a
    ctx->pc = 0x128200u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x128204: 0x82001a
    ctx->pc = 0x128204u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x128208: 0x50400001
    ctx->pc = 0x128208u;
    {
        const bool branch_taken_0x128208 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x128208) {
            ctx->pc = 0x12820Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x128210u;
            goto label_128210;
        }
    }
    ctx->pc = 0x128210u;
label_128210:
    // 0x128210: 0x4012
    ctx->pc = 0x128210u;
    SET_GPR_U32(ctx, 8, ctx->lo);
    // 0x128214: 0x3810
    ctx->pc = 0x128214u;
    SET_GPR_U32(ctx, 7, ctx->hi);
    // 0x128218: 0x100202d
    ctx->pc = 0x128218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12821c: 0xa0c70000
    ctx->pc = 0x12821cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x128220: 0x5480fff3
    ctx->pc = 0x128220u;
    {
        const bool branch_taken_0x128220 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x128220) {
            ctx->pc = 0x128224u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x1281F0u;
            goto label_1281f0;
        }
    }
    ctx->pc = 0x128228u;
    // 0x128228: 0xa0c00000
    ctx->pc = 0x128228u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
label_12822c:
    // 0x12822c: 0x3c020026
    ctx->pc = 0x12822cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x128230: 0x24511f08
    ctx->pc = 0x128230u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 7944));
    // 0x128234: 0xc042c56
    ctx->pc = 0x128234u;
    SET_GPR_U32(ctx, 31, 0x12823Cu);
    ctx->pc = 0x128238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12823Cu; }
    }
    if (ctx->pc != 0x12823Cu) { return; }
    ctx->pc = 0x12823Cu;
    // 0x12823c: 0x40382d
    ctx->pc = 0x12823cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128240: 0x2642ffff
    ctx->pc = 0x128240u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x128244: 0xe2182a
    ctx->pc = 0x128244u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 2)));
    // 0x128248: 0x43380a
    ctx->pc = 0x128248u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 2));
    // 0x12824c: 0x18e0000b
    ctx->pc = 0x12824Cu;
    {
        const bool branch_taken_0x12824c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x128250u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12824c) {
            ctx->pc = 0x12827Cu;
            goto label_12827c;
        }
    }
    ctx->pc = 0x128254u;
    // 0x128254: 0xf11021
    ctx->pc = 0x128254u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x128258: 0x2446ffff
    ctx->pc = 0x128258u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12825c: 0x0
    ctx->pc = 0x12825cu;
    // NOP
label_128260:
    // 0x128260: 0x2052021
    ctx->pc = 0x128260u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x128264: 0x24a50001
    ctx->pc = 0x128264u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x128268: 0x90c30000
    ctx->pc = 0x128268u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12826c: 0x24c6ffff
    ctx->pc = 0x12826cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x128270: 0xa7102a
    ctx->pc = 0x128270u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 7)));
    // 0x128274: 0x1440fffa
    ctx->pc = 0x128274u;
    {
        const bool branch_taken_0x128274 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x128278u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x128274) {
            ctx->pc = 0x128260u;
            goto label_128260;
        }
    }
    ctx->pc = 0x12827Cu;
label_12827c:
    // 0x12827c: 0x2051021
    ctx->pc = 0x12827cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x128280: 0xdfb00000
    ctx->pc = 0x128280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128284: 0xdfb10008
    ctx->pc = 0x128284u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x128288: 0xdfb20010
    ctx->pc = 0x128288u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12828c: 0xdfbf0018
    ctx->pc = 0x12828cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x128290: 0xa0400000
    ctx->pc = 0x128290u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x128294: 0x3e00008
    ctx->pc = 0x128294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128298u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1281CCu: goto label_1281cc;
            case 0x1281F0u: goto label_1281f0;
            case 0x128210u: goto label_128210;
            case 0x12822Cu: goto label_12822c;
            case 0x128260u: goto label_128260;
            case 0x12827Cu: goto label_12827c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12829Cu;
    // 0x12829c: 0x0
    ctx->pc = 0x12829cu;
    // NOP
}
