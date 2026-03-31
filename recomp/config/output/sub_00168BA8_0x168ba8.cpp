#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00168BA8
// Address: 0x168ba8 - 0x168c70
void sub_00168BA8_0x168ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x168ba8u;

    // 0x168ba8: 0x27bdffe0
    ctx->pc = 0x168ba8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x168bac: 0xa0182d
    ctx->pc = 0x168bacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168bb0: 0x80102d
    ctx->pc = 0x168bb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168bb4: 0x3a0202d
    ctx->pc = 0x168bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168bb8: 0xffb00010
    ctx->pc = 0x168bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x168bbc: 0xc0802d
    ctx->pc = 0x168bbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168bc0: 0x40282d
    ctx->pc = 0x168bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168bc4: 0xffbf0018
    ctx->pc = 0x168bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x168bc8: 0xc05a31c
    ctx->pc = 0x168BC8u;
    SET_GPR_U32(ctx, 31, 0x168BD0u);
    ctx->pc = 0x168BCCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x168C70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00168C70_0x168c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168BD0u; }
    }
    if (ctx->pc != 0x168BD0u) { return; }
    ctx->pc = 0x168BD0u;
    // 0x168bd0: 0x10400022
    ctx->pc = 0x168BD0u;
    {
        const bool branch_taken_0x168bd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x168BD4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x168bd0) {
            ctx->pc = 0x168C5Cu;
            goto label_168c5c;
        }
    }
    ctx->pc = 0x168BD8u;
    // 0x168bd8: 0x93a20000
    ctx->pc = 0x168bd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168bdc: 0x14430013
    ctx->pc = 0x168BDCu;
    {
        const bool branch_taken_0x168bdc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x168BE0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x168bdc) {
            ctx->pc = 0x168C2Cu;
            goto label_168c2c;
        }
    }
    ctx->pc = 0x168BE4u;
    // 0x168be4: 0x93a20002
    ctx->pc = 0x168be4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x168be8: 0x1040000f
    ctx->pc = 0x168BE8u;
    {
        const bool branch_taken_0x168be8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x168BECu;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
        if (branch_taken_0x168be8) {
            ctx->pc = 0x168C28u;
            goto label_168c28;
        }
    }
    ctx->pc = 0x168BF0u;
    // 0x168bf0: 0x1440000e
    ctx->pc = 0x168BF0u;
    {
        const bool branch_taken_0x168bf0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x168BF4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x168bf0) {
            ctx->pc = 0x168C2Cu;
            goto label_168c2c;
        }
    }
    ctx->pc = 0x168BF8u;
    // 0x168bf8: 0x93a20006
    ctx->pc = 0x168bf8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x168bfc: 0x93a40003
    ctx->pc = 0x168bfcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x168c00: 0x21080
    ctx->pc = 0x168c00u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x168c04: 0x3c030024
    ctx->pc = 0x168c04u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x168c08: 0x621821
    ctx->pc = 0x168c08u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x168c0c: 0x90630660
    ctx->pc = 0x168c0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1632)));
    // 0x168c10: 0x42080
    ctx->pc = 0x168c10u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x168c14: 0xa2030028
    ctx->pc = 0x168c14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 3));
    // 0x168c18: 0x3c020024
    ctx->pc = 0x168c18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x168c1c: 0x441021
    ctx->pc = 0x168c1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x168c20: 0x8c420670
    ctx->pc = 0x168c20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1648)));
    // 0x168c24: 0xae02002c
    ctx->pc = 0x168c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_168c28:
    // 0x168c28: 0x3c020023
    ctx->pc = 0x168c28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_168c2c:
    // 0x168c2c: 0x2446ef70
    ctx->pc = 0x168c2cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294963056));
    // 0x168c30: 0x6ba30007
    ctx->pc = 0x168c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x168c34: 0x6fa30000
    ctx->pc = 0x168c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x168c38: 0x83a40008
    ctx->pc = 0x168c38u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x168c3c: 0x83a50009
    ctx->pc = 0x168c3cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 9)));
    // 0x168c40: 0xb0c30007
    ctx->pc = 0x168c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x168c44: 0xb4c30000
    ctx->pc = 0x168c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x168c48: 0xa0c40008
    ctx->pc = 0x168c48u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8), (uint8_t)GPR_U32(ctx, 4));
    // 0x168c4c: 0xa0c50009
    ctx->pc = 0x168c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 9), (uint8_t)GPR_U32(ctx, 5));
    // 0x168c50: 0x83a3000a
    ctx->pc = 0x168c50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 10)));
    // 0x168c54: 0xa0c3000a
    ctx->pc = 0x168c54u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x168c58: 0x24020001
    ctx->pc = 0x168c58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_168c5c:
    // 0x168c5c: 0xdfb00010
    ctx->pc = 0x168c5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168c60: 0xdfbf0018
    ctx->pc = 0x168c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x168c64: 0x3e00008
    ctx->pc = 0x168C64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168C68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168C28u: goto label_168c28;
            case 0x168C2Cu: goto label_168c2c;
            case 0x168C5Cu: goto label_168c5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x168C6Cu;
    // 0x168c6c: 0x0
    ctx->pc = 0x168c6cu;
    // NOP
}
