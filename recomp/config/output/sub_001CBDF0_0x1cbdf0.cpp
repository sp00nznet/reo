/*
 * REO: sub_001CBDC0 — Scene initialization (demo scene loader)
 *
 * Real function entry at 0x1CBDC0, mid-function entry at 0x1CBDF0.
 * The recompiler saw 0x1CBDF0 as the entry (from call refs at 0x1CB90C, 0x1CBE20).
 *
 * When called at 0x1CBDF0 (mid-entry): checks loading state, returns -16 if busy.
 * When called via the full path: does prologue, calls scene loader, etc.
 *
 * Since sub_001CB8F0 calls us at 0x1CBDF0, we handle BOTH entry points:
 * - First call (0x34D9F8==0 && 0x34DA00==0): full load
 * - Subsequent calls: return -16 (already loading/loaded)
 */
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

void sub_001CBDF0_0x1cbdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    ctx->pc = 0x1CBDC0u;

    // Prologue
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248u)); // sp -= 48
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), ctx->r[17]);
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), ctx->r[16]);

    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4)); // s1 = a0

    // 0x1CBDD8: lw v0, -9736(at) → load [0x34D9F8]
    SET_GPR_U32(ctx, 2, READ32(0x34D9F8u & PS2_RAM_MASK));

    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5)); // s0 = a1 (delay slot)

    // 0x1CBDDC: bne v0, zero → if loading, jump to 0x1CBDF4
    if (GPR_U32(ctx, 2) != 0) {
        goto label_1cbdf4;
    }

    // 0x1CBDE4..0x1CBDEC: check [0x34DA00]
    SET_GPR_U32(ctx, 2, READ32(0x34DA00u & PS2_RAM_MASK));
    if (GPR_U32(ctx, 2) == 0) {
        goto label_1cbdfc; // Not loaded — do the load
    }

    // Fall through to mid-entry at 0x1CBDF0 (nop + branch to return)
label_1cbdf4:
    // 0x1CBDF4: beq zero,zero → goto epilogue (unconditional)
    // 0x1CBDF8: v0 = -16 (delay slot)
    SET_GPR_S32(ctx, 2, -16);
    goto epilogue;

label_1cbdfc:
    // 0x1CBDFC: jal 0x1CBDE0 (init)
    {
        static int initLog = 0;
        if (initLog < 3) {
            printf("[SCENE-INIT] Calling init (0x1CBDE0), scene_id=0x%08X flags=0x%08X\n",
                   GPR_U32(ctx, 17), GPR_U32(ctx, 16));
            initLog++;
        }
        SET_GPR_U32(ctx, 31, 0x1CBE04u);
        ctx->pc = 0x1CBDE0u;
        sub_001CBDE0_0x1cbde0(rdram, ctx, runtime);
    }

    // 0x1CBE04..0x1CBE18: set up args for sub_001E5008
    // a0 = [0x34C7F0], a1 = 0x8000, a2 = s1, a3 = s0
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17)); // a2 = s1 (scene id)
    SET_GPR_U32(ctx, 4, READ32(0x34C7F0u & PS2_RAM_MASK)); // a0 = [0x34C7F0]
    SET_GPR_U32(ctx, 5, 0x8000u); // a1 = 0x8000

    // 0x1CBE14: jal 0x1E5008 (load scene)
    {
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16)); // a3 = s0 (delay slot)

        static int loadLog = 0;
        if (loadLog < 3) {
            // Also check the lookup table at 0x259D08 that sub_001E5008 reads
            uint32_t table_val = READ32((0x259D08u + GPR_U32(ctx, 4) * 4) & PS2_RAM_MASK);
            printf("[SCENE-INIT] Loading scene: a0=0x%08X a1=0x%08X a2=0x%08X a3=0x%08X\n",
                   GPR_U32(ctx, 4), GPR_U32(ctx, 5), GPR_U32(ctx, 6), GPR_U32(ctx, 7));
            printf("[SCENE-INIT]   lookup[a0] at 0x%08X = 0x%08X\n",
                   0x259D08 + GPR_U32(ctx, 4) * 4, table_val);
            // Scan full table for populated entries
            for (int ti = 0; ti < 32; ti++) {
                uint32_t tv = READ32((0x259D08u + ti * 4) & PS2_RAM_MASK);
                if (tv != 0) printf("[SCENE-INIT]   lookup[%d] = 0x%08X\n", ti, tv);
            }
            loadLog++;
        }
        SET_GPR_U32(ctx, 31, 0x1CBE1Cu);
        ctx->pc = 0x1E5008u;
        sub_001E5008_0x1e5008(rdram, ctx, runtime);
    }

    // 0x1CBE1C..0x1CBE24: store result, then recursive call
    // sw v0, [0x34DA00] (in delay slot of jal)
    WRITE32(0x34DA00u & PS2_RAM_MASK, GPR_U32(ctx, 2));

    {
        static int resultLog = 0;
        if (resultLog < 3) {
            // Read error code that sub_001E5008 stored at gp-0x7FE0
            // gp is typically 0x2B0000, so gp+0x8020 = gp-0x7FE0 ≈ various
            // The function stores codes 100-106 before returning -1
            printf("[SCENE-INIT] Load result: v0=0x%08X\n", GPR_U32(ctx, 2));
            // Also check the scene struct's +0x50C field
            uint32_t scene_struct = READ32((0x259D08u + 4*4) & PS2_RAM_MASK);
            if (scene_struct) {
                uint32_t field_50c = READ32((scene_struct + 0x50C) & PS2_RAM_MASK);
                printf("[SCENE-INIT]   scene_struct=0x%08X, field[0x50C]=0x%08X\n",
                       scene_struct, field_50c);
            }
            resultLog++;
        }
    }

    // 0x1CBE20: jal 0x1CBDF0 — recursive call
    // At this mid-entry, the function checks loading state.
    // Since we just stored v0 at 0x34DA00, [0x34DA00] is now nonzero (if load succeeded)
    // or zero (if it failed). The recursive call will:
    //   - Read [0x34D9F8], and if nonzero → return -16
    //   - Read [0x34DA00], and if nonzero → return -16
    //   - If both zero → re-enter load path (shouldn't happen here)
    //
    // We handle this inline instead of actual recursion:
    {
        // Save current s0/s1 since the recursive call would use them
        // But since the recursive call returns immediately (-16 or re-enters),
        // and we're already in the function body, just do the check:
        uint32_t check_d9f8 = READ32(0x34D9F8u & PS2_RAM_MASK);
        uint32_t check_da00 = READ32(0x34DA00u & PS2_RAM_MASK);
        if (check_d9f8 != 0 || check_da00 != 0) {
            SET_GPR_S32(ctx, 2, -16);
        }
        // If both zero, the recursive call would redo the load — unlikely after we just stored
    }

    // 0x1CBE28..0x1CBE30: check [0x34DA00]
    {
        uint32_t final_result = READ32(0x34DA00u & PS2_RAM_MASK);
        if (final_result != 0) {
            // 0x1CBE34: v0 = s0
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16));

            // 0x1CBE38: jal 0x1CBB60 (finalize)
            static int finLog = 0;
            if (finLog < 3) {
                printf("[SCENE-INIT] Calling finalize (0x1CBB60) with v0=0x%08X\n",
                       GPR_U32(ctx, 2));
                finLog++;
            }
            SET_GPR_U32(ctx, 31, 0x1CBE40u);
            ctx->pc = 0x1CBB60u;
            sub_001CBB60_0x1cbb60(rdram, ctx, runtime);
        }
    }

epilogue:
    // 0x1CBE48: restore and return
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->r[17] = READ128(ADD32(GPR_U32(ctx, 29), 16));
    ctx->r[16] = READ128(ADD32(GPR_U32(ctx, 29), 0));
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = GPR_U32(ctx, 31);
}
