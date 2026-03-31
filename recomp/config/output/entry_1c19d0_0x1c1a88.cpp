#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1c19d0
// Address: 0x1c19d0 - 0x1c1a88
void entry_1c19d0_0x1c1a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c19d0u;

    // 0x1c19d0: 0x80282d
    ctx->pc = 0x1c19d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c19d4: 0x27bdfff0
    ctx->pc = 0x1c19d4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c19d8: 0x90a30005
    ctx->pc = 0x1c19d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x1c19dc: 0x3c020025
    ctx->pc = 0x1c19dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)37 << 16));
    // 0x1c19e0: 0x90a40007
    ctx->pc = 0x1c19e0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x1c19e4: 0x24630001
    ctx->pc = 0x1c19e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c19e8: 0x24490688
    ctx->pc = 0x1c19e8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 1672));
    // 0x1c19ec: 0x69260007
    ctx->pc = 0x1c19ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1c19f0: 0x6d260000
    ctx->pc = 0x1c19f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1c19f4: 0x8927000b
    ctx->pc = 0x1c19f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 11); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 7, (GPR_U32(ctx, 7) & ~mask) | ((aligned_word << shift) & mask)); }
    // 0x1c19f8: 0x99270008
    ctx->pc = 0x1c19f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 7, (GPR_U32(ctx, 7) & ~mask) | ((aligned_word >> shift) & mask)); }
    // 0x1c19fc: 0xb3a60007
    ctx->pc = 0x1c19fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c1a00: 0xb7a60000
    ctx->pc = 0x1c1a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c1a04: 0xaba7000b
    ctx->pc = 0x1c1a04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 7) >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1c1a08: 0xbba70008
    ctx->pc = 0x1c1a08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 7) << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1c1a0c: 0x30840003
    ctx->pc = 0x1c1a0cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 3));
    // 0x1c1a10: 0x14800003
    ctx->pc = 0x1C1A10u;
    {
        const bool branch_taken_0x1c1a10 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C1A14u;
        WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1c1a10) {
            ctx->pc = 0x1C1A20u;
            goto label_1c1a20;
        }
    }
    ctx->pc = 0x1C1A18u;
    // 0x1c1a18: 0x2402001d
    ctx->pc = 0x1c1a18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29));
    // 0x1c1a1c: 0xa3a20001
    ctx->pc = 0x1c1a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
label_1c1a20:
    // 0x1c1a20: 0x90a20006
    ctx->pc = 0x1c1a20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x1c1a24: 0x90a40005
    ctx->pc = 0x1c1a24u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x1c1a28: 0x5d1021
    ctx->pc = 0x1c1a28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1c1a2c: 0x8043ffff
    ctx->pc = 0x1c1a2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x1c1a30: 0x64182a
    ctx->pc = 0x1c1a30u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x1c1a34: 0x10600011
    ctx->pc = 0x1C1A34u;
    {
        const bool branch_taken_0x1c1a34 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C1A38u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1c1a34) {
            ctx->pc = 0x1C1A7Cu;
            goto label_1c1a7c;
        }
    }
    ctx->pc = 0x1C1A3Cu;
    // 0x1c1a3c: 0x90a30006
    ctx->pc = 0x1c1a3cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x1c1a40: 0xa0a20005
    ctx->pc = 0x1c1a40u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c1a44: 0x2404000d
    ctx->pc = 0x1c1a44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c1a48: 0x24630001
    ctx->pc = 0x1c1a48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c1a4c: 0x306200ff
    ctx->pc = 0x1c1a4cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 255));
    // 0x1c1a50: 0x1444000a
    ctx->pc = 0x1C1A50u;
    {
        const bool branch_taken_0x1c1a50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x1C1A54u;
        WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1c1a50) {
            ctx->pc = 0x1C1A7Cu;
            goto label_1c1a7c;
        }
    }
    ctx->pc = 0x1C1A58u;
    // 0x1c1a58: 0x90a30007
    ctx->pc = 0x1c1a58u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x1c1a5c: 0x24020063
    ctx->pc = 0x1c1a5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 99));
    // 0x1c1a60: 0x14620003
    ctx->pc = 0x1C1A60u;
    {
        const bool branch_taken_0x1c1a60 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1C1A64u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x1c1a60) {
            ctx->pc = 0x1C1A70u;
            goto label_1c1a70;
        }
    }
    ctx->pc = 0x1C1A68u;
    // 0x1c1a68: 0x10000002
    ctx->pc = 0x1C1A68u;
    {
        const bool branch_taken_0x1c1a68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C1A6Cu;
        WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1c1a68) {
            ctx->pc = 0x1C1A74u;
            goto label_1c1a74;
        }
    }
    ctx->pc = 0x1C1A70u;
label_1c1a70:
    // 0x1c1a70: 0xa0a20007
    ctx->pc = 0x1c1a70u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 2));
label_1c1a74:
    // 0x1c1a74: 0x24020001
    ctx->pc = 0x1c1a74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1a78: 0xa0a20006
    ctx->pc = 0x1c1a78u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
label_1c1a7c:
    // 0x1c1a7c: 0x3e00008
    ctx->pc = 0x1C1A7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1A80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1A20u: goto label_1c1a20;
            case 0x1C1A70u: goto label_1c1a70;
            case 0x1C1A74u: goto label_1c1a74;
            case 0x1C1A7Cu: goto label_1c1a7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C1A84u;
    // 0x1c1a84: 0x0
    ctx->pc = 0x1c1a84u;
    // NOP
}
