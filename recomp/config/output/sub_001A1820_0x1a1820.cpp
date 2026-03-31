#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A1820
// Address: 0x1a1820 - 0x1a1890
void sub_001A1820_0x1a1820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a1820u;

    // 0x1a1820: 0x30a70003
    ctx->pc = 0x1a1820u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 5), 3));
    // 0x1a1824: 0x402d
    ctx->pc = 0x1a1824u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1828: 0x4a10008
    ctx->pc = 0x1A1828u;
    {
        const bool branch_taken_0x1a1828 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1A182Cu;
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 2));
        if (branch_taken_0x1a1828) {
            ctx->pc = 0x1A184Cu;
            goto label_1a184c;
        }
    }
    ctx->pc = 0x1A1830u;
    // 0x1a1830: 0x24a30003
    ctx->pc = 0x1a1830u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 3));
    // 0x1a1834: 0x33083
    ctx->pc = 0x1a1834u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1a1838: 0x10000005
    ctx->pc = 0x1A1838u;
    {
        const bool branch_taken_0x1a1838 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A183Cu;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 6)));
        if (branch_taken_0x1a1838) {
            ctx->pc = 0x1A1850u;
            goto label_1a1850;
        }
    }
    ctx->pc = 0x1A1840u;
label_1a1840:
    // 0x1a1840: 0xac800000
    ctx->pc = 0x1a1840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1a1844: 0x25080001
    ctx->pc = 0x1a1844u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x1a1848: 0x24840004
    ctx->pc = 0x1a1848u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
label_1a184c:
    // 0x1a184c: 0x106182a
    ctx->pc = 0x1a184cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 6)));
label_1a1850:
    // 0x1a1850: 0x0
    ctx->pc = 0x1a1850u;
    // NOP
    // 0x1a1854: 0x1460fffa
    ctx->pc = 0x1A1854u;
    {
        const bool branch_taken_0x1a1854 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a1854) {
            ctx->pc = 0x1A1840u;
            goto label_1a1840;
        }
    }
    ctx->pc = 0x1A185Cu;
    // 0x1a185c: 0x10e0000a
    ctx->pc = 0x1A185Cu;
    {
        const bool branch_taken_0x1a185c = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a185c) {
            ctx->pc = 0x1A1888u;
            goto label_1a1888;
        }
    }
    ctx->pc = 0x1A1864u;
    // 0x1a1864: 0x10000004
    ctx->pc = 0x1A1864u;
    {
        const bool branch_taken_0x1a1864 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1868u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a1864) {
            ctx->pc = 0x1A1878u;
            goto label_1a1878;
        }
    }
    ctx->pc = 0x1A186Cu;
label_1a186c:
    // 0x1a186c: 0xa0800000
    ctx->pc = 0x1a186cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a1870: 0x24a50001
    ctx->pc = 0x1a1870u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a1874: 0x24840001
    ctx->pc = 0x1a1874u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_1a1878:
    // 0x1a1878: 0xa7182a
    ctx->pc = 0x1a1878u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 7)));
    // 0x1a187c: 0x0
    ctx->pc = 0x1a187cu;
    // NOP
    // 0x1a1880: 0x1460fffa
    ctx->pc = 0x1A1880u;
    {
        const bool branch_taken_0x1a1880 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a1880) {
            ctx->pc = 0x1A186Cu;
            goto label_1a186c;
        }
    }
    ctx->pc = 0x1A1888u;
label_1a1888:
    // 0x1a1888: 0x3e00008
    ctx->pc = 0x1A1888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A1840u: goto label_1a1840;
            case 0x1A184Cu: goto label_1a184c;
            case 0x1A1850u: goto label_1a1850;
            case 0x1A186Cu: goto label_1a186c;
            case 0x1A1878u: goto label_1a1878;
            case 0x1A1888u: goto label_1a1888;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A1890u;
}
