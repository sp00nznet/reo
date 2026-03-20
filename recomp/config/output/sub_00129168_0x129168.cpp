#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00129168
// Address: 0x129168 - 0x129240
void sub_00129168_0x129168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    // HLE: Initialize the render context's DMA buffer with GIF commands.
    // The real function sets up DMA command headers; we write minimal GIF
    // data so that 129C08 → 130E40 finds something to process.
    {
        // Get the render context pointer (a0) and its DMA buffer at ctx[4]
        uint32_t ctxAddr = GPR_U32(ctx, 4);
        uint32_t ctxPhys = ctxAddr & PS2_RAM_MASK;
        if (ctxPhys + 68 <= PS2_RAM_SIZE) {
            uint32_t dmaBuf;
            memcpy(&dmaBuf, rdram + ctxPhys + 4, 4);
            uint32_t dmaPhys = dmaBuf & PS2_RAM_MASK;

            if (dmaBuf != 0 && dmaPhys + 256 <= PS2_RAM_SIZE) {
                // Write a minimal DMA chain with one GIF packet
                // DMA tag: CNT, QWC=3 (3 quadwords of GIF data)
                uint64_t dmaTag = 3 | (1ULL << 28); // QWC=3, ID=CNT
                memcpy(rdram + dmaPhys, &dmaTag, 8);
                memset(rdram + dmaPhys + 8, 0, 8); // upper tag QW

                // GIF tag at +16: NLOOP=2, EOP=1, NREG=1, A+D
                uint64_t gifLo = 2 | (1ULL << 15) | (1ULL << 60);
                uint64_t gifHi = 0x0E;
                memcpy(rdram + dmaPhys + 16, &gifLo, 8);
                memcpy(rdram + dmaPhys + 24, &gifHi, 8);

                // A+D reg write 1: TEXFLUSH (harmless register)
                uint64_t val = 0, reg = 0x3F;
                memcpy(rdram + dmaPhys + 32, &val, 8);
                memcpy(rdram + dmaPhys + 40, &reg, 8);

                // A+D reg write 2: NOP (register 0x7F = unused)
                val = 0; reg = 0x7F;
                memcpy(rdram + dmaPhys + 48, &val, 8);
                memcpy(rdram + dmaPhys + 56, &reg, 8);

                // DMA END tag at +64
                uint64_t endTag = (7ULL << 28); // ID=END, QWC=0
                memcpy(rdram + dmaPhys + 64, &endTag, 8);
                memset(rdram + dmaPhys + 72, 0, 8);

                // Set ctx[12] (write position) to indicate data is present
                uint32_t writePos = dmaBuf + 64; // point past the data
                memcpy(rdram + ctxPhys + 12, &writePos, 4);

                // Set ctx[8] = command count
                uint32_t cmdCount = 1;
                memcpy(rdram + ctxPhys + 8, &cmdCount, 4);

                static int lc = 0;
                if (lc < 5) {
                    printf("[129168-HLE] Wrote GIF commands to DMA buf 0x%08X, ctx[12]=0x%08X\n",
                           dmaBuf, writePos);
                    fflush(stdout);
                    lc++;
                }
            }
        }
        setReturnU32(ctx, 0);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    ctx->pc = 0x129168u;

    // 0x129168: 0x27bdfed0
    ctx->pc = 0x129168u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x12916c: 0xffb00110
    ctx->pc = 0x12916cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x129170: 0xa0802d
    ctx->pc = 0x129170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129174: 0xffb10118
    ctx->pc = 0x129174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x129178: 0x80882d
    ctx->pc = 0x129178u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12917c: 0xc0282d
    ctx->pc = 0x12917cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129180: 0x3a0302d
    ctx->pc = 0x129180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129184: 0x200202d
    ctx->pc = 0x129184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129188: 0x27a70100
    ctx->pc = 0x129188u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 256));
    // 0x12918c: 0x27a80104
    ctx->pc = 0x12918cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 260));
    // 0x129190: 0xffbf0120
    ctx->pc = 0x129190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x129194: 0xc04a786
    ctx->pc = 0x129194u;
    SET_GPR_U32(ctx, 31, 0x12919Cu);
    ctx->pc = 0x129198u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 264));
    ctx->pc = 0x129E18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00129E18_0x129e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12919Cu; }
    }
    if (ctx->pc != 0x12919Cu) { return; }
    ctx->pc = 0x12919Cu;
    // 0x12919c: 0x4410004
    ctx->pc = 0x12919Cu;
    {
        const bool branch_taken_0x12919c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1291A0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12919c) {
            ctx->pc = 0x1291B0u;
            goto label_1291b0;
        }
    }
    ctx->pc = 0x1291A4u;
    // 0x1291a4: 0x10000020
    ctx->pc = 0x1291A4u;
    {
        const bool branch_taken_0x1291a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1291A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x1291a4) {
            ctx->pc = 0x129228u;
            goto label_129228;
        }
    }
    ctx->pc = 0x1291ACu;
    // 0x1291ac: 0x0
    ctx->pc = 0x1291acu;
    // NOP
label_1291b0:
    // 0x1291b0: 0x8fa30100
    ctx->pc = 0x1291b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1291b4: 0x8fa20104
    ctx->pc = 0x1291b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x1291b8: 0xae230034
    ctx->pc = 0x1291b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x1291bc: 0xc04a7dc
    ctx->pc = 0x1291BCu;
    SET_GPR_U32(ctx, 31, 0x1291C4u);
    ctx->pc = 0x1291C0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    ctx->pc = 0x129F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1291C4u; }
    }
    if (ctx->pc != 0x1291C4u) { return; }
    ctx->pc = 0x1291C4u;
    // 0x1291c4: 0xae200014
    ctx->pc = 0x1291c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1291c8: 0x8e260034
    ctx->pc = 0x1291c8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1291cc: 0x40282d
    ctx->pc = 0x1291ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1291d0: 0x8fa30108
    ctx->pc = 0x1291d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1291d4: 0x8fa40104
    ctx->pc = 0x1291d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x1291d8: 0xae230040
    ctx->pc = 0x1291d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
    // 0x1291dc: 0x60402d
    ctx->pc = 0x1291dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1291e0: 0x80382d
    ctx->pc = 0x1291e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1291e4: 0xae220038
    ctx->pc = 0x1291e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    // 0x1291e8: 0xae24003c
    ctx->pc = 0x1291e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 4));
    // 0x1291ec: 0xc04c13a
    ctx->pc = 0x1291ECu;
    SET_GPR_U32(ctx, 31, 0x1291F4u);
    ctx->pc = 0x1291F0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x1304E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001304E8_0x1304e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1291F4u; }
    }
    if (ctx->pc != 0x1291F4u) { return; }
    ctx->pc = 0x1291F4u;
    // 0x1291f4: 0xc04c16e
    ctx->pc = 0x1291F4u;
    SET_GPR_U32(ctx, 31, 0x1291FCu);
    ctx->pc = 0x1291F8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x1305B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001305B8_0x1305b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1291FCu; }
    }
    if (ctx->pc != 0x1291FCu) { return; }
    ctx->pc = 0x1291FCu;
    // 0x1291fc: 0x24030004
    ctx->pc = 0x1291fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x129200: 0x54430005
    ctx->pc = 0x129200u;
    {
        const bool branch_taken_0x129200 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x129200) {
            ctx->pc = 0x129204u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 264)));
            ctx->pc = 0x129218u;
            goto label_129218;
        }
    }
    ctx->pc = 0x129208u;
    // 0x129208: 0xc04c158
    ctx->pc = 0x129208u;
    SET_GPR_U32(ctx, 31, 0x129210u);
    ctx->pc = 0x12920Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x130560u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130560_0x130560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129210u; }
    }
    if (ctx->pc != 0x129210u) { return; }
    ctx->pc = 0x129210u;
    // 0x129210: 0x10000005
    ctx->pc = 0x129210u;
    {
        const bool branch_taken_0x129210 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x129214u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x129210) {
            ctx->pc = 0x129228u;
            goto label_129228;
        }
    }
    ctx->pc = 0x129218u;
label_129218:
    // 0x129218: 0x102d
    ctx->pc = 0x129218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12921c: 0x41ac0
    ctx->pc = 0x12921cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 11));
    // 0x129220: 0xae24000c
    ctx->pc = 0x129220u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
    // 0x129224: 0xae230010
    ctx->pc = 0x129224u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_129228:
    // 0x129228: 0xdfb00110
    ctx->pc = 0x129228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x12922c: 0xdfb10118
    ctx->pc = 0x12922cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x129230: 0xdfbf0120
    ctx->pc = 0x129230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x129234: 0x3e00008
    ctx->pc = 0x129234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129238u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1291B0u: goto label_1291b0;
            case 0x129218u: goto label_129218;
            case 0x129228u: goto label_129228;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12923Cu;
    // 0x12923c: 0x0
    ctx->pc = 0x12923cu;
    // NOP
}
