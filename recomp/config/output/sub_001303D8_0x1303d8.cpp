#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001303D8
// Address: 0x1303d8 - 0x130420
void sub_001303D8_0x1303d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    // REO HLE: DMA buffer allocator. Allocates QWC quadwords of DMA command
    // buffer space. The original function uses a complex pool manager that
    // fails because the display list write pointer system isn't fully initialized.
    // We allocate from a dedicated region in guest memory.
    {
        static uint32_t dmaPoolBase = 0xD80000;
        static uint32_t dmaPoolOffset = 0;
        uint32_t qwc = GPR_U32(ctx, 5); // a1 = requested size in QWC
        if (qwc == 0) qwc = 256; // default

        uint32_t bytes = qwc * 16;
        uint32_t bufAddr = dmaPoolBase + dmaPoolOffset;
        dmaPoolOffset = (dmaPoolOffset + bytes + 0xFF) & ~0xFF; // Align to 256
        if (dmaPoolOffset > 0x200000) dmaPoolOffset = 0; // Wrap at 2MB

        uint32_t bufPhys = bufAddr & PS2_RAM_MASK;
        if (bufPhys + bytes <= PS2_RAM_SIZE) {
            memset(rdram + bufPhys, 0, bytes);
            static int logC = 0;
            if (logC < 10) {
                printf("[1303D8-HLE] Allocated DMA buffer: %u QWC at 0x%08X\n", qwc, bufAddr);
                fflush(stdout);
                logC++;
            }
            setReturnU32(ctx, bufAddr);
        } else {
            setReturnU32(ctx, 0);
        }
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    ctx->pc = 0x1303d8u;

    // 0x1303d8: 0x80182d
    ctx->pc = 0x1303d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1303dc: 0x202d
    ctx->pc = 0x1303dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1303e0: 0x27bdfff0
    ctx->pc = 0x1303e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1303e4: 0x28a20100
    ctx->pc = 0x1303e4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 256));
    // 0x1303e8: 0xffbf0000
    ctx->pc = 0x1303e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1303ec: 0x60382d
    ctx->pc = 0x1303ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1303f0: 0x10400005
    ctx->pc = 0x1303F0u;
    {
        const bool branch_taken_0x1303f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1303F4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1303f0) {
            ctx->pc = 0x130408u;
            goto label_130408;
        }
    }
    ctx->pc = 0x1303F8u;
    // 0x1303f8: 0xc04c086
    ctx->pc = 0x1303F8u;
    SET_GPR_U32(ctx, 31, 0x130400u);
    ctx->pc = 0x1303FCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130218u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130218_0x130218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130400u; }
    }
    if (ctx->pc != 0x130400u) { return; }
    ctx->pc = 0x130400u;
    // 0x130400: 0x10000004
    ctx->pc = 0x130400u;
    {
        const bool branch_taken_0x130400 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x130404u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x130400) {
            ctx->pc = 0x130414u;
            goto label_130414;
        }
    }
    ctx->pc = 0x130408u;
label_130408:
    // 0x130408: 0xc04c0be
    ctx->pc = 0x130408u;
    SET_GPR_U32(ctx, 31, 0x130410u);
    ctx->pc = 0x13040Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1302F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001302F8_0x1302f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130410u; }
    }
    if (ctx->pc != 0x130410u) { return; }
    ctx->pc = 0x130410u;
    // 0x130410: 0xdfbf0000
    ctx->pc = 0x130410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_130414:
    // 0x130414: 0x3e00008
    ctx->pc = 0x130414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130418u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130408u: goto label_130408;
            case 0x130414u: goto label_130414;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13041Cu;
    // 0x13041c: 0x0
    ctx->pc = 0x13041cu;
    // NOP
}
