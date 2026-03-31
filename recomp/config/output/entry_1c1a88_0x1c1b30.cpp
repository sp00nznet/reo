#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1c1a88
// Address: 0x1c1a88 - 0x1c1b30
void entry_1c1a88_0x1c1b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c1a88u;

    // 0x1c1a88: 0x80282d
    ctx->pc = 0x1c1a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1a8c: 0x27bdfff0
    ctx->pc = 0x1c1a8cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c1a90: 0x90a30005
    ctx->pc = 0x1c1a90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x1c1a94: 0x3c020025
    ctx->pc = 0x1c1a94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)37 << 16));
    // 0x1c1a98: 0x90a40007
    ctx->pc = 0x1c1a98u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x1c1a9c: 0x2463ffff
    ctx->pc = 0x1c1a9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c1aa0: 0x24490688
    ctx->pc = 0x1c1aa0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 1672));
    // 0x1c1aa4: 0x69260007
    ctx->pc = 0x1c1aa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1c1aa8: 0x6d260000
    ctx->pc = 0x1c1aa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1c1aac: 0x8927000b
    ctx->pc = 0x1c1aacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 11); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 7, (GPR_U32(ctx, 7) & ~mask) | ((aligned_word << shift) & mask)); }
    // 0x1c1ab0: 0x99270008
    ctx->pc = 0x1c1ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 7, (GPR_U32(ctx, 7) & ~mask) | ((aligned_word >> shift) & mask)); }
    // 0x1c1ab4: 0xb3a60007
    ctx->pc = 0x1c1ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c1ab8: 0xb7a60000
    ctx->pc = 0x1c1ab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c1abc: 0xaba7000b
    ctx->pc = 0x1c1abcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 7) >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1c1ac0: 0xbba70008
    ctx->pc = 0x1c1ac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 7) << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1c1ac4: 0x30840003
    ctx->pc = 0x1c1ac4u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 3));
    // 0x1c1ac8: 0x14800003
    ctx->pc = 0x1C1AC8u;
    {
        const bool branch_taken_0x1c1ac8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C1ACCu;
        WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1c1ac8) {
            ctx->pc = 0x1C1AD8u;
            goto label_1c1ad8;
        }
    }
    ctx->pc = 0x1C1AD0u;
    // 0x1c1ad0: 0x2402001d
    ctx->pc = 0x1c1ad0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29));
    // 0x1c1ad4: 0xa3a20001
    ctx->pc = 0x1c1ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
label_1c1ad8:
    // 0x1c1ad8: 0x90a20005
    ctx->pc = 0x1c1ad8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x1c1adc: 0x14400011
    ctx->pc = 0x1C1ADCu;
    {
        const bool branch_taken_0x1c1adc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c1adc) {
            ctx->pc = 0x1C1B24u;
            goto label_1c1b24;
        }
    }
    ctx->pc = 0x1C1AE4u;
    // 0x1c1ae4: 0x90a20006
    ctx->pc = 0x1c1ae4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x1c1ae8: 0x2442ffff
    ctx->pc = 0x1c1ae8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c1aec: 0x304300ff
    ctx->pc = 0x1c1aecu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x1c1af0: 0x14600008
    ctx->pc = 0x1C1AF0u;
    {
        const bool branch_taken_0x1c1af0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C1AF4u;
        WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1c1af0) {
            ctx->pc = 0x1C1B14u;
            goto label_1c1b14;
        }
    }
    ctx->pc = 0x1C1AF8u;
    // 0x1c1af8: 0x90a20007
    ctx->pc = 0x1c1af8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x1c1afc: 0x14400002
    ctx->pc = 0x1C1AFCu;
    {
        const bool branch_taken_0x1c1afc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C1B00u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x1c1afc) {
            ctx->pc = 0x1C1B08u;
            goto label_1c1b08;
        }
    }
    ctx->pc = 0x1C1B04u;
    // 0x1c1b04: 0x24020063
    ctx->pc = 0x1c1b04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 99));
label_1c1b08:
    // 0x1c1b08: 0xa0a20007
    ctx->pc = 0x1c1b08u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c1b0c: 0x2402000c
    ctx->pc = 0x1c1b0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c1b10: 0xa0a20006
    ctx->pc = 0x1c1b10u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
label_1c1b14:
    // 0x1c1b14: 0x90a20006
    ctx->pc = 0x1c1b14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x1c1b18: 0x5d1021
    ctx->pc = 0x1c1b18u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1c1b1c: 0x9043ffff
    ctx->pc = 0x1c1b1cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x1c1b20: 0xa0a30005
    ctx->pc = 0x1c1b20u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
label_1c1b24:
    // 0x1c1b24: 0x3e00008
    ctx->pc = 0x1C1B24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1B28u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1AD8u: goto label_1c1ad8;
            case 0x1C1B08u: goto label_1c1b08;
            case 0x1C1B14u: goto label_1c1b14;
            case 0x1C1B24u: goto label_1c1b24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C1B2Cu;
    // 0x1c1b2c: 0x0
    ctx->pc = 0x1c1b2cu;
    // NOP
}
