#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C17E0
// Address: 0x1c17e0 - 0x1c18b0
void sub_001C17E0_0x1c17e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c17e0u;

    // 0x1c17e0: 0x27bdffe0
    ctx->pc = 0x1c17e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c17e4: 0xffbf0010
    ctx->pc = 0x1c17e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c17e8: 0xc07057a
    ctx->pc = 0x1C17E8u;
    SET_GPR_U32(ctx, 31, 0x1C17F0u);
    ctx->pc = 0x1C15E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C15E8_0x1c15e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C17F0u; }
    }
    if (ctx->pc != 0x1C17F0u) { return; }
    ctx->pc = 0x1C17F0u;
    // 0x1c17f0: 0x10400003
    ctx->pc = 0x1C17F0u;
    {
        const bool branch_taken_0x1c17f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C17F4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x1c17f0) {
            ctx->pc = 0x1C1800u;
            goto label_1c1800;
        }
    }
    ctx->pc = 0x1C17F8u;
    // 0x1c17f8: 0x10000010
    ctx->pc = 0x1C17F8u;
    {
        const bool branch_taken_0x1c17f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C17FCu;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 21206)));
        if (branch_taken_0x1c17f8) {
            ctx->pc = 0x1C183Cu;
            goto label_1c183c;
        }
    }
    ctx->pc = 0x1C1800u;
label_1c1800:
    // 0x1c1800: 0xc0451b4
    ctx->pc = 0x1C1800u;
    SET_GPR_U32(ctx, 31, 0x1C1808u);
    ctx->pc = 0x1C1804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1146D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001146D0_0x1146d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1808u; }
    }
    if (ctx->pc != 0x1C1808u) { return; }
    ctx->pc = 0x1C1808u;
    // 0x1c1808: 0x8fa20000
    ctx->pc = 0x1c1808u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c180c: 0x21342
    ctx->pc = 0x1c180cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 13));
    // 0x1c1810: 0x30420007
    ctx->pc = 0x1c1810u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 7));
    // 0x1c1814: 0x14400003
    ctx->pc = 0x1C1814u;
    {
        const bool branch_taken_0x1c1814 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C1818u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 29), 4));
        if (branch_taken_0x1c1814) {
            ctx->pc = 0x1C1824u;
            goto label_1c1824;
        }
    }
    ctx->pc = 0x1C181Cu;
    // 0x1c181c: 0x10000007
    ctx->pc = 0x1C181Cu;
    {
        const bool branch_taken_0x1c181c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C1820u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c181c) {
            ctx->pc = 0x1C183Cu;
            goto label_1c183c;
        }
    }
    ctx->pc = 0x1C1824u;
label_1c1824:
    // 0x1c1824: 0x24050001
    ctx->pc = 0x1c1824u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1828: 0xc04524c
    ctx->pc = 0x1C1828u;
    SET_GPR_U32(ctx, 31, 0x1C1830u);
    ctx->pc = 0x1C182Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x114930u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114930_0x114930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1830u; }
    }
    if (ctx->pc != 0x1C1830u) { return; }
    ctx->pc = 0x1C1830u;
    // 0x1c1830: 0x93a30004
    ctx->pc = 0x1c1830u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1c1834: 0x31902
    ctx->pc = 0x1c1834u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 4));
    // 0x1c1838: 0x30620001
    ctx->pc = 0x1c1838u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
label_1c183c:
    // 0x1c183c: 0xdfbf0010
    ctx->pc = 0x1c183cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1840: 0x3e00008
    ctx->pc = 0x1C1840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1844u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1800u: goto label_1c1800;
            case 0x1C1824u: goto label_1c1824;
            case 0x1C183Cu: goto label_1c183c;
            case 0x1C1868u: goto label_1c1868;
            case 0x1C188Cu: goto label_1c188c;
            case 0x1C18A4u: goto label_1c18a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C1848u;
    // 0x1c1848: 0x27bdffe0
    ctx->pc = 0x1c1848u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c184c: 0xffbf0010
    ctx->pc = 0x1c184cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c1850: 0xc07057a
    ctx->pc = 0x1C1850u;
    SET_GPR_U32(ctx, 31, 0x1C1858u);
    ctx->pc = 0x1C15E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C15E8_0x1c15e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1858u; }
    }
    if (ctx->pc != 0x1C1858u) { return; }
    ctx->pc = 0x1C1858u;
    // 0x1c1858: 0x10400003
    ctx->pc = 0x1C1858u;
    {
        const bool branch_taken_0x1c1858 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C185Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x1c1858) {
            ctx->pc = 0x1C1868u;
            goto label_1c1868;
        }
    }
    ctx->pc = 0x1C1860u;
    // 0x1c1860: 0x10000010
    ctx->pc = 0x1C1860u;
    {
        const bool branch_taken_0x1c1860 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C1864u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 21207)));
        if (branch_taken_0x1c1860) {
            ctx->pc = 0x1C18A4u;
            goto label_1c18a4;
        }
    }
    ctx->pc = 0x1C1868u;
label_1c1868:
    // 0x1c1868: 0xc0451b4
    ctx->pc = 0x1C1868u;
    SET_GPR_U32(ctx, 31, 0x1C1870u);
    ctx->pc = 0x1C186Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1146D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001146D0_0x1146d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1870u; }
    }
    if (ctx->pc != 0x1C1870u) { return; }
    ctx->pc = 0x1C1870u;
    // 0x1c1870: 0x8fa20000
    ctx->pc = 0x1c1870u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1874: 0x21342
    ctx->pc = 0x1c1874u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 13));
    // 0x1c1878: 0x30420007
    ctx->pc = 0x1c1878u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 7));
    // 0x1c187c: 0x14400003
    ctx->pc = 0x1C187Cu;
    {
        const bool branch_taken_0x1c187c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C1880u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 29), 4));
        if (branch_taken_0x1c187c) {
            ctx->pc = 0x1C188Cu;
            goto label_1c188c;
        }
    }
    ctx->pc = 0x1C1884u;
    // 0x1c1884: 0x10000007
    ctx->pc = 0x1C1884u;
    {
        const bool branch_taken_0x1c1884 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C1888u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c1884) {
            ctx->pc = 0x1C18A4u;
            goto label_1c18a4;
        }
    }
    ctx->pc = 0x1C188Cu;
label_1c188c:
    // 0x1c188c: 0x24050001
    ctx->pc = 0x1c188cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1890: 0xc04524c
    ctx->pc = 0x1C1890u;
    SET_GPR_U32(ctx, 31, 0x1C1898u);
    ctx->pc = 0x1C1894u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x114930u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114930_0x114930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1898u; }
    }
    if (ctx->pc != 0x1C1898u) { return; }
    ctx->pc = 0x1C1898u;
    // 0x1c1898: 0x93a30004
    ctx->pc = 0x1c1898u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1c189c: 0x31942
    ctx->pc = 0x1c189cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 5));
    // 0x1c18a0: 0x30620001
    ctx->pc = 0x1c18a0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
label_1c18a4:
    // 0x1c18a4: 0xdfbf0010
    ctx->pc = 0x1c18a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c18a8: 0x3e00008
    ctx->pc = 0x1C18A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C18ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1800u: goto label_1c1800;
            case 0x1C1824u: goto label_1c1824;
            case 0x1C183Cu: goto label_1c183c;
            case 0x1C1868u: goto label_1c1868;
            case 0x1C188Cu: goto label_1c188c;
            case 0x1C18A4u: goto label_1c18a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C18B0u;
}
