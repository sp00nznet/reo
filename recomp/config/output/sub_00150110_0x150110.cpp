#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00150110
// Address: 0x150110 - 0x1501e8
void sub_00150110_0x150110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x150110u;

    // 0x150110: 0x80582d
    ctx->pc = 0x150110u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150114: 0xa0702d
    ctx->pc = 0x150114u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150118: 0x8d630004
    ctx->pc = 0x150118u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x15011c: 0xc0682d
    ctx->pc = 0x15011cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150120: 0x8d620008
    ctx->pc = 0x150120u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x150124: 0x502d
    ctx->pc = 0x150124u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150128: 0x2467000f
    ctx->pc = 0x150128u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 15));
    // 0x15012c: 0x28650000
    ctx->pc = 0x15012cu;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 3), 0));
    // 0x150130: 0x2446001f
    ctx->pc = 0x150130u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 31));
    // 0x150134: 0x28440000
    ctx->pc = 0x150134u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 0));
    // 0x150138: 0xe5180b
    ctx->pc = 0x150138u;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 7));
    // 0x15013c: 0xc4100b
    ctx->pc = 0x15013cu;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 6));
    // 0x150140: 0x23943
    ctx->pc = 0x150140u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 5));
    // 0x150144: 0x36103
    ctx->pc = 0x150144u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 4));
    // 0x150148: 0x77840
    ctx->pc = 0x150148u;
    SET_GPR_U32(ctx, 15, SLL32(GPR_U32(ctx, 7), 1));
    // 0x15014c: 0x8d690000
    ctx->pc = 0x15014cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x150150: 0x19800023
    ctx->pc = 0x150150u;
    {
        const bool branch_taken_0x150150 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x150154u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 14), 0)));
        if (branch_taken_0x150150) {
            ctx->pc = 0x1501E0u;
            goto label_1501e0;
        }
    }
    ctx->pc = 0x150158u;
    // 0x150158: 0x10000003
    ctx->pc = 0x150158u;
    {
        const bool branch_taken_0x150158 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15015Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
        if (branch_taken_0x150158) {
            ctx->pc = 0x150168u;
            goto label_150168;
        }
    }
    ctx->pc = 0x150160u;
label_150160:
    // 0x150160: 0x8dc60000
    ctx->pc = 0x150160u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x150164: 0xea2018
    ctx->pc = 0x150164u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
label_150168:
    // 0x150168: 0x1e72821
    ctx->pc = 0x150168u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 7)));
    // 0x15016c: 0x529c0
    ctx->pc = 0x15016cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 7));
    // 0x150170: 0x402d
    ctx->pc = 0x150170u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150174: 0x41040
    ctx->pc = 0x150174u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
    // 0x150178: 0x41a80
    ctx->pc = 0x150178u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 10));
    // 0x15017c: 0x441021
    ctx->pc = 0x15017cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x150180: 0xc31821
    ctx->pc = 0x150180u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x150184: 0x21200
    ctx->pc = 0x150184u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
    // 0x150188: 0x24660003
    ctx->pc = 0x150188u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 3));
    // 0x15018c: 0x451021
    ctx->pc = 0x15018cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x150190: 0x18e0000f
    ctx->pc = 0x150190u;
    {
        const bool branch_taken_0x150190 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x150194u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
        if (branch_taken_0x150190) {
            ctx->pc = 0x1501D0u;
            goto label_1501d0;
        }
    }
    ctx->pc = 0x150198u;
label_150198:
    // 0x150198: 0x240500ff
    ctx->pc = 0x150198u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    // 0x15019c: 0x0
    ctx->pc = 0x15019cu;
    // NOP
label_1501a0:
    // 0x1501a0: 0x90830000
    ctx->pc = 0x1501a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1501a4: 0x24840001
    ctx->pc = 0x1501a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1501a8: 0x24a5ffff
    ctx->pc = 0x1501a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1501ac: 0x1a31821
    ctx->pc = 0x1501acu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x1501b0: 0x90620000
    ctx->pc = 0x1501b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1501b4: 0xa0c20000
    ctx->pc = 0x1501b4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1501b8: 0x4a1fff9
    ctx->pc = 0x1501B8u;
    {
        const bool branch_taken_0x1501b8 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1501BCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
        if (branch_taken_0x1501b8) {
            ctx->pc = 0x1501A0u;
            goto label_1501a0;
        }
    }
    ctx->pc = 0x1501C0u;
    // 0x1501c0: 0x25080001
    ctx->pc = 0x1501c0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x1501c4: 0x107102a
    ctx->pc = 0x1501c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 7)));
    // 0x1501c8: 0x1440fff3
    ctx->pc = 0x1501C8u;
    {
        const bool branch_taken_0x1501c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1501CCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 128));
        if (branch_taken_0x1501c8) {
            ctx->pc = 0x150198u;
            goto label_150198;
        }
    }
    ctx->pc = 0x1501D0u;
label_1501d0:
    // 0x1501d0: 0x254a0001
    ctx->pc = 0x1501d0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x1501d4: 0x14c102a
    ctx->pc = 0x1501d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), GPR_S32(ctx, 12)));
    // 0x1501d8: 0x5440ffe1
    ctx->pc = 0x1501D8u;
    {
        const bool branch_taken_0x1501d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1501d8) {
            ctx->pc = 0x1501DCu;
            SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 11), 0)));
            ctx->pc = 0x150160u;
            goto label_150160;
        }
    }
    ctx->pc = 0x1501E0u;
label_1501e0:
    // 0x1501e0: 0x3e00008
    ctx->pc = 0x1501E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150160u: goto label_150160;
            case 0x150168u: goto label_150168;
            case 0x150198u: goto label_150198;
            case 0x1501A0u: goto label_1501a0;
            case 0x1501D0u: goto label_1501d0;
            case 0x1501E0u: goto label_1501e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1501E8u;
}
