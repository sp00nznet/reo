#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C1900
// Address: 0x1c1900 - 0x1c1b30
void sub_001C1900_0x1c1900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c1900u;

    // 0x1c1900: 0x27bdffe0
    ctx->pc = 0x1c1900u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c1904: 0xffb00000
    ctx->pc = 0x1c1904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c1908: 0xffbf0010
    ctx->pc = 0x1c1908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c190c: 0x80802d
    ctx->pc = 0x1c190cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1910: 0xc070638
    ctx->pc = 0x1C1910u;
    SET_GPR_U32(ctx, 31, 0x1C1918u);
    ctx->pc = 0x1C1914u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    ctx->pc = 0x1C18E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C18E0_0x1c18e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1918u; }
    }
    if (ctx->pc != 0x1C1918u) { return; }
    ctx->pc = 0x1C1918u;
    // 0x1c1918: 0x92040006
    ctx->pc = 0x1c1918u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1c191c: 0xc070638
    ctx->pc = 0x1C191Cu;
    SET_GPR_U32(ctx, 31, 0x1C1924u);
    ctx->pc = 0x1C1920u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1C18E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C18E0_0x1c18e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1924u; }
    }
    if (ctx->pc != 0x1C1924u) { return; }
    ctx->pc = 0x1C1924u;
    // 0x1c1924: 0x92040005
    ctx->pc = 0x1c1924u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x1c1928: 0xc070638
    ctx->pc = 0x1C1928u;
    SET_GPR_U32(ctx, 31, 0x1C1930u);
    ctx->pc = 0x1C192Cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1C18E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C18E0_0x1c18e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1930u; }
    }
    if (ctx->pc != 0x1C1930u) { return; }
    ctx->pc = 0x1C1930u;
    // 0x1c1930: 0x92040003
    ctx->pc = 0x1c1930u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1c1934: 0xc070638
    ctx->pc = 0x1C1934u;
    SET_GPR_U32(ctx, 31, 0x1C193Cu);
    ctx->pc = 0x1C1938u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1C18E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C18E0_0x1c18e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C193Cu; }
    }
    if (ctx->pc != 0x1C193Cu) { return; }
    ctx->pc = 0x1C193Cu;
    // 0x1c193c: 0x92040002
    ctx->pc = 0x1c193cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1c1940: 0xc070638
    ctx->pc = 0x1C1940u;
    SET_GPR_U32(ctx, 31, 0x1C1948u);
    ctx->pc = 0x1C1944u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1C18E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C18E0_0x1c18e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1948u; }
    }
    if (ctx->pc != 0x1C1948u) { return; }
    ctx->pc = 0x1C1948u;
    // 0x1c1948: 0x92040001
    ctx->pc = 0x1c1948u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1c194c: 0xc070638
    ctx->pc = 0x1C194Cu;
    SET_GPR_U32(ctx, 31, 0x1C1954u);
    ctx->pc = 0x1C1950u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1C18E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C18E0_0x1c18e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1954u; }
    }
    if (ctx->pc != 0x1C1954u) { return; }
    ctx->pc = 0x1C1954u;
    // 0x1c1954: 0xa2020001
    ctx->pc = 0x1c1954u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c1958: 0xdfbf0010
    ctx->pc = 0x1c1958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c195c: 0xdfb00000
    ctx->pc = 0x1c195cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1960: 0x3e00008
    ctx->pc = 0x1C1960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1964u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1A20u: goto label_1c1a20;
            case 0x1C1A70u: goto label_1c1a70;
            case 0x1C1A74u: goto label_1c1a74;
            case 0x1C1A7Cu: goto label_1c1a7c;
            case 0x1C1AD8u: goto label_1c1ad8;
            case 0x1C1B08u: goto label_1c1b08;
            case 0x1C1B14u: goto label_1c1b14;
            case 0x1C1B24u: goto label_1c1b24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C1968u;
    // 0x1c1968: 0x27bdffe0
    ctx->pc = 0x1c1968u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c196c: 0xffb00000
    ctx->pc = 0x1c196cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c1970: 0xffbf0010
    ctx->pc = 0x1c1970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c1974: 0x80802d
    ctx->pc = 0x1c1974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1978: 0xc07062c
    ctx->pc = 0x1C1978u;
    SET_GPR_U32(ctx, 31, 0x1C1980u);
    ctx->pc = 0x1C197Cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    ctx->pc = 0x1C18B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C18B0_0x1c18b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1980u; }
    }
    if (ctx->pc != 0x1C1980u) { return; }
    ctx->pc = 0x1C1980u;
    // 0x1c1980: 0x92040006
    ctx->pc = 0x1c1980u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1c1984: 0xc07062c
    ctx->pc = 0x1C1984u;
    SET_GPR_U32(ctx, 31, 0x1C198Cu);
    ctx->pc = 0x1C1988u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1C18B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C18B0_0x1c18b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C198Cu; }
    }
    if (ctx->pc != 0x1C198Cu) { return; }
    ctx->pc = 0x1C198Cu;
    // 0x1c198c: 0x92040005
    ctx->pc = 0x1c198cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x1c1990: 0xc07062c
    ctx->pc = 0x1C1990u;
    SET_GPR_U32(ctx, 31, 0x1C1998u);
    ctx->pc = 0x1C1994u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1C18B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C18B0_0x1c18b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1998u; }
    }
    if (ctx->pc != 0x1C1998u) { return; }
    ctx->pc = 0x1C1998u;
    // 0x1c1998: 0x92040003
    ctx->pc = 0x1c1998u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1c199c: 0xc07062c
    ctx->pc = 0x1C199Cu;
    SET_GPR_U32(ctx, 31, 0x1C19A4u);
    ctx->pc = 0x1C19A0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1C18B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C18B0_0x1c18b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C19A4u; }
    }
    if (ctx->pc != 0x1C19A4u) { return; }
    ctx->pc = 0x1C19A4u;
    // 0x1c19a4: 0x92040002
    ctx->pc = 0x1c19a4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1c19a8: 0xc07062c
    ctx->pc = 0x1C19A8u;
    SET_GPR_U32(ctx, 31, 0x1C19B0u);
    ctx->pc = 0x1C19ACu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1C18B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C18B0_0x1c18b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C19B0u; }
    }
    if (ctx->pc != 0x1C19B0u) { return; }
    ctx->pc = 0x1C19B0u;
    // 0x1c19b0: 0x92040001
    ctx->pc = 0x1c19b0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1c19b4: 0xc07062c
    ctx->pc = 0x1C19B4u;
    SET_GPR_U32(ctx, 31, 0x1C19BCu);
    ctx->pc = 0x1C19B8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1C18B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C18B0_0x1c18b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C19BCu; }
    }
    if (ctx->pc != 0x1C19BCu) { return; }
    ctx->pc = 0x1C19BCu;
    // 0x1c19bc: 0xa2020001
    ctx->pc = 0x1c19bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c19c0: 0xdfbf0010
    ctx->pc = 0x1c19c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c19c4: 0xdfb00000
    ctx->pc = 0x1c19c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c19c8: 0x3e00008
    ctx->pc = 0x1C19C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C19CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1A20u: goto label_1c1a20;
            case 0x1C1A70u: goto label_1c1a70;
            case 0x1C1A74u: goto label_1c1a74;
            case 0x1C1A7Cu: goto label_1c1a7c;
            case 0x1C1AD8u: goto label_1c1ad8;
            case 0x1C1B08u: goto label_1c1b08;
            case 0x1C1B14u: goto label_1c1b14;
            case 0x1C1B24u: goto label_1c1b24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C19D0u;
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
            case 0x1C1AD8u: goto label_1c1ad8;
            case 0x1C1B08u: goto label_1c1b08;
            case 0x1C1B14u: goto label_1c1b14;
            case 0x1C1B24u: goto label_1c1b24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C1A84u;
    // 0x1c1a84: 0x0
    ctx->pc = 0x1c1a84u;
    // NOP
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
            case 0x1C1A20u: goto label_1c1a20;
            case 0x1C1A70u: goto label_1c1a70;
            case 0x1C1A74u: goto label_1c1a74;
            case 0x1C1A7Cu: goto label_1c1a7c;
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
