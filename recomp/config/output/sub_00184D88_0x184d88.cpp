#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00184D88
// Address: 0x184d88 - 0x185280
void sub_00184D88_0x184d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x184d88u;

    // 0x184d88: 0x27bdfba0
    ctx->pc = 0x184d88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966176));
    // 0x184d8c: 0x2402ffff
    ctx->pc = 0x184d8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x184d90: 0xffb10418
    ctx->pc = 0x184d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1048), GPR_U64(ctx, 17));
    // 0x184d94: 0xc0882d
    ctx->pc = 0x184d94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184d98: 0xafa20210
    ctx->pc = 0x184d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
    // 0x184d9c: 0x3c028101
    ctx->pc = 0x184d9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x184da0: 0x2e230001
    ctx->pc = 0x184da0u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 17), 1));
    // 0x184da4: 0x3442006f
    ctx->pc = 0x184da4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 111));
    // 0x184da8: 0xffb00410
    ctx->pc = 0x184da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 16));
    // 0x184dac: 0xffb40430
    ctx->pc = 0x184dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 20));
    // 0x184db0: 0xffb60440
    ctx->pc = 0x184db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 22));
    // 0x184db4: 0xffbf0458
    ctx->pc = 0x184db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1112), GPR_U64(ctx, 31));
    // 0x184db8: 0xafa30400
    ctx->pc = 0x184db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 3));
    // 0x184dbc: 0xafa20404
    ctx->pc = 0x184dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1028), GPR_U32(ctx, 2));
    // 0x184dc0: 0xffb20420
    ctx->pc = 0x184dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 18));
    // 0x184dc4: 0xe0902d
    ctx->pc = 0x184dc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184dc8: 0xffb30428
    ctx->pc = 0x184dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1064), GPR_U64(ctx, 19));
    // 0x184dcc: 0x100982d
    ctx->pc = 0x184dccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184dd0: 0xffb50438
    ctx->pc = 0x184dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1080), GPR_U64(ctx, 21));
    // 0x184dd4: 0x80a82d
    ctx->pc = 0x184dd4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184dd8: 0xffb70448
    ctx->pc = 0x184dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1096), GPR_U64(ctx, 23));
    // 0x184ddc: 0xa0b82d
    ctx->pc = 0x184ddcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184de0: 0xffbe0450
    ctx->pc = 0x184de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 30));
    // 0x184de4: 0xf02d
    ctx->pc = 0x184de4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184de8:
    // 0x184de8: 0x2a0202d
    ctx->pc = 0x184de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184dec: 0x3c050028
    ctx->pc = 0x184decu;
    SET_GPR_U32(ctx, 5, ((uint32_t)40 << 16));
    // 0x184df0: 0x24a56c80
    ctx->pc = 0x184df0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 27776));
    // 0x184df4: 0x220302d
    ctx->pc = 0x184df4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184df8: 0xc061d1e
    ctx->pc = 0x184DF8u;
    SET_GPR_U32(ctx, 31, 0x184E00u);
    ctx->pc = 0x184DFCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x187478u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187478_0x187478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184E00u; }
    }
    if (ctx->pc != 0x184E00u) { return; }
    ctx->pc = 0x184E00u;
    // 0x184e00: 0x14400005
    ctx->pc = 0x184E00u;
    {
        const bool branch_taken_0x184e00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x184E04u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x184e00) {
            ctx->pc = 0x184E18u;
            goto label_184e18;
        }
    }
    ctx->pc = 0x184E08u;
    // 0x184e08: 0x8fa40404
    ctx->pc = 0x184e08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 1028)));
    // 0x184e0c: 0x2402ffff
    ctx->pc = 0x184e0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x184e10: 0x1000010f
    ctx->pc = 0x184E10u;
    {
        const bool branch_taken_0x184e10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184E14u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        if (branch_taken_0x184e10) {
            ctx->pc = 0x185250u;
            goto label_185250;
        }
    }
    ctx->pc = 0x184E18u;
label_184e18:
    // 0x184e18: 0x3c100028
    ctx->pc = 0x184e18u;
    SET_GPR_U32(ctx, 16, ((uint32_t)40 << 16));
    // 0x184e1c: 0x26106c80
    ctx->pc = 0x184e1cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 27776));
    // 0x184e20: 0x3c160024
    ctx->pc = 0x184e20u;
    SET_GPR_U32(ctx, 22, ((uint32_t)36 << 16));
    // 0x184e24: 0x0
    ctx->pc = 0x184e24u;
    // NOP
label_184e28:
    // 0x184e28: 0x96030000
    ctx->pc = 0x184e28u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x184e2c: 0x30620001
    ctx->pc = 0x184e2cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x184e30: 0x3042ffff
    ctx->pc = 0x184e30u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x184e34: 0x50400032
    ctx->pc = 0x184E34u;
    {
        const bool branch_taken_0x184e34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x184e34) {
            ctx->pc = 0x184E38u;
            SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 32768));
            ctx->pc = 0x184F00u;
            goto label_184f00;
        }
    }
    ctx->pc = 0x184E3Cu;
    // 0x184e3c: 0x26040040
    ctx->pc = 0x184e3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 64));
    // 0x184e40: 0xc042b9e
    ctx->pc = 0x184E40u;
    SET_GPR_U32(ctx, 31, 0x184E48u);
    ctx->pc = 0x184E44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 22), 6064));
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184E48u; }
    }
    if (ctx->pc != 0x184E48u) { return; }
    ctx->pc = 0x184E48u;
    // 0x184e48: 0x5440002c
    ctx->pc = 0x184E48u;
    {
        const bool branch_taken_0x184e48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x184e48) {
            ctx->pc = 0x184E4Cu;
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x184EFCu;
            goto label_184efc;
        }
    }
    ctx->pc = 0x184E50u;
    // 0x184e50: 0x32020007
    ctx->pc = 0x184e50u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 7));
    // 0x184e54: 0x27a40200
    ctx->pc = 0x184e54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 512));
    // 0x184e58: 0x10400019
    ctx->pc = 0x184E58u;
    {
        const bool branch_taken_0x184e58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x184E5Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x184e58) {
            ctx->pc = 0x184EC0u;
            goto label_184ec0;
        }
    }
    ctx->pc = 0x184E60u;
    // 0x184e60: 0x26020200
    ctx->pc = 0x184e60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 512));
label_184e64:
    // 0x184e64: 0x68650007
    ctx->pc = 0x184e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x184e68: 0x6c650000
    ctx->pc = 0x184e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x184e6c: 0x6866000f
    ctx->pc = 0x184e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x184e70: 0x6c660008
    ctx->pc = 0x184e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x184e74: 0x68670017
    ctx->pc = 0x184e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x184e78: 0x6c670010
    ctx->pc = 0x184e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x184e7c: 0x6868001f
    ctx->pc = 0x184e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x184e80: 0x6c680018
    ctx->pc = 0x184e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x184e84: 0xb0850007
    ctx->pc = 0x184e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184e88: 0xb4850000
    ctx->pc = 0x184e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184e8c: 0xb086000f
    ctx->pc = 0x184e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184e90: 0xb4860008
    ctx->pc = 0x184e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184e94: 0xb0870017
    ctx->pc = 0x184e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184e98: 0xb4870010
    ctx->pc = 0x184e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184e9c: 0xb088001f
    ctx->pc = 0x184e9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184ea0: 0xb4880018
    ctx->pc = 0x184ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184ea4: 0x24630020
    ctx->pc = 0x184ea4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x184ea8: 0x0
    ctx->pc = 0x184ea8u;
    // NOP
    // 0x184eac: 0x0
    ctx->pc = 0x184eacu;
    // NOP
    // 0x184eb0: 0x1462ffec
    ctx->pc = 0x184EB0u;
    {
        const bool branch_taken_0x184eb0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x184EB4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
        if (branch_taken_0x184eb0) {
            ctx->pc = 0x184E64u;
            goto label_184e64;
        }
    }
    ctx->pc = 0x184EB8u;
    // 0x184eb8: 0x10000010
    ctx->pc = 0x184EB8u;
    {
        const bool branch_taken_0x184eb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184EBCu;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x184eb8) {
            ctx->pc = 0x184EFCu;
            goto label_184efc;
        }
    }
    ctx->pc = 0x184EC0u;
label_184ec0:
    // 0x184ec0: 0x26020200
    ctx->pc = 0x184ec0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 512));
label_184ec4:
    // 0x184ec4: 0xdc650000
    ctx->pc = 0x184ec4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x184ec8: 0xdc660008
    ctx->pc = 0x184ec8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x184ecc: 0xdc670010
    ctx->pc = 0x184eccu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x184ed0: 0xdc680018
    ctx->pc = 0x184ed0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x184ed4: 0xfc850000
    ctx->pc = 0x184ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x184ed8: 0xfc860008
    ctx->pc = 0x184ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x184edc: 0xfc870010
    ctx->pc = 0x184edcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x184ee0: 0xfc880018
    ctx->pc = 0x184ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x184ee4: 0x24630020
    ctx->pc = 0x184ee4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x184ee8: 0x0
    ctx->pc = 0x184ee8u;
    // NOP
    // 0x184eec: 0x0
    ctx->pc = 0x184eecu;
    // NOP
    // 0x184ef0: 0x1462fff4
    ctx->pc = 0x184EF0u;
    {
        const bool branch_taken_0x184ef0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x184EF4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
        if (branch_taken_0x184ef0) {
            ctx->pc = 0x184EC4u;
            goto label_184ec4;
        }
    }
    ctx->pc = 0x184EF8u;
    // 0x184ef8: 0x96030000
    ctx->pc = 0x184ef8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_184efc:
    // 0x184efc: 0x30628000
    ctx->pc = 0x184efcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 32768));
label_184f00:
    // 0x184f00: 0x50400004
    ctx->pc = 0x184F00u;
    {
        const bool branch_taken_0x184f00 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x184f00) {
            ctx->pc = 0x184F04u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x184F14u;
            goto label_184f14;
        }
    }
    ctx->pc = 0x184F08u;
    // 0x184f08: 0x56400045
    ctx->pc = 0x184F08u;
    {
        const bool branch_taken_0x184f08 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x184f08) {
            ctx->pc = 0x184F0Cu;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
            ctx->pc = 0x185020u;
            goto label_185020;
        }
    }
    ctx->pc = 0x184F10u;
    // 0x184f10: 0x200202d
    ctx->pc = 0x184f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_184f14:
    // 0x184f14: 0x2e41025
    ctx->pc = 0x184f14u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x184f18: 0x30420007
    ctx->pc = 0x184f18u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 7));
    // 0x184f1c: 0x1040001a
    ctx->pc = 0x184F1Cu;
    {
        const bool branch_taken_0x184f1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x184F20u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x184f1c) {
            ctx->pc = 0x184F88u;
            goto label_184f88;
        }
    }
    ctx->pc = 0x184F24u;
    // 0x184f24: 0x26e20200
    ctx->pc = 0x184f24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 23), 512));
label_184f28:
    // 0x184f28: 0x68650007
    ctx->pc = 0x184f28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x184f2c: 0x6c650000
    ctx->pc = 0x184f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x184f30: 0x6866000f
    ctx->pc = 0x184f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x184f34: 0x6c660008
    ctx->pc = 0x184f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x184f38: 0x68670017
    ctx->pc = 0x184f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x184f3c: 0x6c670010
    ctx->pc = 0x184f3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x184f40: 0x6868001f
    ctx->pc = 0x184f40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x184f44: 0x6c680018
    ctx->pc = 0x184f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x184f48: 0xb0850007
    ctx->pc = 0x184f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184f4c: 0xb4850000
    ctx->pc = 0x184f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184f50: 0xb086000f
    ctx->pc = 0x184f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184f54: 0xb4860008
    ctx->pc = 0x184f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184f58: 0xb0870017
    ctx->pc = 0x184f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184f5c: 0xb4870010
    ctx->pc = 0x184f5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184f60: 0xb088001f
    ctx->pc = 0x184f60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184f64: 0xb4880018
    ctx->pc = 0x184f64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184f68: 0x24630020
    ctx->pc = 0x184f68u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x184f6c: 0x0
    ctx->pc = 0x184f6cu;
    // NOP
    // 0x184f70: 0x0
    ctx->pc = 0x184f70u;
    // NOP
    // 0x184f74: 0x1462ffec
    ctx->pc = 0x184F74u;
    {
        const bool branch_taken_0x184f74 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x184F78u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
        if (branch_taken_0x184f74) {
            ctx->pc = 0x184F28u;
            goto label_184f28;
        }
    }
    ctx->pc = 0x184F7Cu;
    // 0x184f7c: 0x10000011
    ctx->pc = 0x184F7Cu;
    {
        const bool branch_taken_0x184f7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184F80u;
        SET_GPR_U32(ctx, 2, ((uint32_t)40 << 16));
        if (branch_taken_0x184f7c) {
            ctx->pc = 0x184FC4u;
            goto label_184fc4;
        }
    }
    ctx->pc = 0x184F84u;
    // 0x184f84: 0x0
    ctx->pc = 0x184f84u;
    // NOP
label_184f88:
    // 0x184f88: 0x26e20200
    ctx->pc = 0x184f88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 23), 512));
label_184f8c:
    // 0x184f8c: 0xdc650000
    ctx->pc = 0x184f8cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x184f90: 0xdc660008
    ctx->pc = 0x184f90u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x184f94: 0xdc670010
    ctx->pc = 0x184f94u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x184f98: 0xdc680018
    ctx->pc = 0x184f98u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x184f9c: 0xfc850000
    ctx->pc = 0x184f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x184fa0: 0xfc860008
    ctx->pc = 0x184fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x184fa4: 0xfc870010
    ctx->pc = 0x184fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x184fa8: 0xfc880018
    ctx->pc = 0x184fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x184fac: 0x24630020
    ctx->pc = 0x184facu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x184fb0: 0x0
    ctx->pc = 0x184fb0u;
    // NOP
    // 0x184fb4: 0x0
    ctx->pc = 0x184fb4u;
    // NOP
    // 0x184fb8: 0x1462fff4
    ctx->pc = 0x184FB8u;
    {
        const bool branch_taken_0x184fb8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x184FBCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
        if (branch_taken_0x184fb8) {
            ctx->pc = 0x184F8Cu;
            goto label_184f8c;
        }
    }
    ctx->pc = 0x184FC0u;
    // 0x184fc0: 0x3c020028
    ctx->pc = 0x184fc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)40 << 16));
label_184fc4:
    // 0x184fc4: 0x220302d
    ctx->pc = 0x184fc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184fc8: 0x24456c80
    ctx->pc = 0x184fc8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 27776));
    // 0x184fcc: 0x2a0202d
    ctx->pc = 0x184fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184fd0: 0xc061d24
    ctx->pc = 0x184FD0u;
    SET_GPR_U32(ctx, 31, 0x184FD8u);
    ctx->pc = 0x184FD4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x187490u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187490_0x187490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184FD8u; }
    }
    if (ctx->pc != 0x184FD8u) { return; }
    ctx->pc = 0x184FD8u;
    // 0x184fd8: 0x14400005
    ctx->pc = 0x184FD8u;
    {
        const bool branch_taken_0x184fd8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x184FDCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 1028)));
        if (branch_taken_0x184fd8) {
            ctx->pc = 0x184FF0u;
            goto label_184ff0;
        }
    }
    ctx->pc = 0x184FE0u;
    // 0x184fe0: 0x2402ffff
    ctx->pc = 0x184fe0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x184fe4: 0x1000009a
    ctx->pc = 0x184FE4u;
    {
        const bool branch_taken_0x184fe4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184FE8u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x184fe4) {
            ctx->pc = 0x185250u;
            goto label_185250;
        }
    }
    ctx->pc = 0x184FECu;
    // 0x184fec: 0x0
    ctx->pc = 0x184fecu;
    // NOP
label_184ff0:
    // 0x184ff0: 0x56400091
    ctx->pc = 0x184FF0u;
    {
        const bool branch_taken_0x184ff0 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x184ff0) {
            ctx->pc = 0x184FF4u;
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x185238u;
            goto label_185238;
        }
    }
    ctx->pc = 0x184FF8u;
    // 0x184ff8: 0x8fa60210
    ctx->pc = 0x184ff8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x184ffc: 0x2404ffff
    ctx->pc = 0x184ffcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x185000: 0x14c4007a
    ctx->pc = 0x185000u;
    {
        const bool branch_taken_0x185000 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 4));
        ctx->pc = 0x185004u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 532)));
        if (branch_taken_0x185000) {
            ctx->pc = 0x1851ECu;
            goto label_1851ec;
        }
    }
    ctx->pc = 0x185008u;
    // 0x185008: 0x3c038101
    ctx->pc = 0x185008u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33025 << 16));
    // 0x18500c: 0x2402ffff
    ctx->pc = 0x18500cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x185010: 0x34639002
    ctx->pc = 0x185010u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 36866));
    // 0x185014: 0x1000008e
    ctx->pc = 0x185014u;
    {
        const bool branch_taken_0x185014 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185018u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x185014) {
            ctx->pc = 0x185250u;
            goto label_185250;
        }
    }
    ctx->pc = 0x18501Cu;
    // 0x18501c: 0x0
    ctx->pc = 0x18501cu;
    // NOP
label_185020:
    // 0x185020: 0x12102a
    ctx->pc = 0x185020u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 18)));
    // 0x185024: 0x2a830002
    ctx->pc = 0x185024u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), 2));
    // 0x185028: 0x2429023
    ctx->pc = 0x185028u;
    SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x18502c: 0x26100200
    ctx->pc = 0x18502cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 512));
    // 0x185030: 0x1460ff7d
    ctx->pc = 0x185030u;
    {
        const bool branch_taken_0x185030 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x185034u;
        SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 30), 1));
        if (branch_taken_0x185030) {
            ctx->pc = 0x184E28u;
            goto label_184e28;
        }
    }
    ctx->pc = 0x185038u;
    // 0x185038: 0x8fa50400
    ctx->pc = 0x185038u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x18503c: 0x14a0000a
    ctx->pc = 0x18503Cu;
    {
        const bool branch_taken_0x18503c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x185040u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18503c) {
            ctx->pc = 0x185068u;
            goto label_185068;
        }
    }
    ctx->pc = 0x185044u;
    // 0x185044: 0x2bc20014
    ctx->pc = 0x185044u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 30), 20));
    // 0x185048: 0x14400008
    ctx->pc = 0x185048u;
    {
        const bool branch_taken_0x185048 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18504Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x185048) {
            ctx->pc = 0x18506Cu;
            goto label_18506c;
        }
    }
    ctx->pc = 0x185050u;
    // 0x185050: 0x3c038101
    ctx->pc = 0x185050u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33025 << 16));
    // 0x185054: 0x2402ffff
    ctx->pc = 0x185054u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x185058: 0x34630017
    ctx->pc = 0x185058u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 23));
    // 0x18505c: 0x1000007c
    ctx->pc = 0x18505Cu;
    {
        const bool branch_taken_0x18505c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185060u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x18505c) {
            ctx->pc = 0x185250u;
            goto label_185250;
        }
    }
    ctx->pc = 0x185064u;
    // 0x185064: 0x0
    ctx->pc = 0x185064u;
    // NOP
label_185068:
    // 0x185068: 0x2a0202d
    ctx->pc = 0x185068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_18506c:
    // 0x18506c: 0x200282d
    ctx->pc = 0x18506cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185070: 0xc060b02
    ctx->pc = 0x185070u;
    SET_GPR_U32(ctx, 31, 0x185078u);
    ctx->pc = 0x185074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182C08_0x182c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185078u; }
    }
    if (ctx->pc != 0x185078u) { return; }
    ctx->pc = 0x185078u;
    // 0x185078: 0x8e630000
    ctx->pc = 0x185078u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18507c: 0x40882d
    ctx->pc = 0x18507cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185080: 0x14600073
    ctx->pc = 0x185080u;
    {
        const bool branch_taken_0x185080 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x185084u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x185080) {
            ctx->pc = 0x185250u;
            goto label_185250;
        }
    }
    ctx->pc = 0x185088u;
    // 0x185088: 0x2406ffff
    ctx->pc = 0x185088u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18508c: 0x5626006c
    ctx->pc = 0x18508Cu;
    {
        const bool branch_taken_0x18508c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 6));
        if (branch_taken_0x18508c) {
            ctx->pc = 0x185090u;
            SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
            ctx->pc = 0x185240u;
            goto label_185240;
        }
    }
    ctx->pc = 0x185094u;
    // 0x185094: 0x2a0202d
    ctx->pc = 0x185094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185098: 0xc060b7a
    ctx->pc = 0x185098u;
    SET_GPR_U32(ctx, 31, 0x1850A0u);
    ctx->pc = 0x18509Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182DE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182DE8_0x182de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1850A0u; }
    }
    if (ctx->pc != 0x1850A0u) { return; }
    ctx->pc = 0x1850A0u;
    // 0x1850a0: 0x8e630000
    ctx->pc = 0x1850a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1850a4: 0x40882d
    ctx->pc = 0x1850a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1850a8: 0x14600069
    ctx->pc = 0x1850A8u;
    {
        const bool branch_taken_0x1850a8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1850ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1850a8) {
            ctx->pc = 0x185250u;
            goto label_185250;
        }
    }
    ctx->pc = 0x1850B0u;
    // 0x1850b0: 0x3c068000
    ctx->pc = 0x1850b0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)32768 << 16));
    // 0x1850b4: 0x200282d
    ctx->pc = 0x1850b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1850b8: 0x2263025
    ctx->pc = 0x1850b8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x1850bc: 0x2a0202d
    ctx->pc = 0x1850bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1850c0: 0xc060b28
    ctx->pc = 0x1850C0u;
    SET_GPR_U32(ctx, 31, 0x1850C8u);
    ctx->pc = 0x1850C4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182CA0_0x182ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1850C8u; }
    }
    if (ctx->pc != 0x1850C8u) { return; }
    ctx->pc = 0x1850C8u;
    // 0x1850c8: 0x8e630000
    ctx->pc = 0x1850c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1850cc: 0x14600060
    ctx->pc = 0x1850CCu;
    {
        const bool branch_taken_0x1850cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1850D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1850cc) {
            ctx->pc = 0x185250u;
            goto label_185250;
        }
    }
    ctx->pc = 0x1850D4u;
    // 0x1850d4: 0x2a0202d
    ctx->pc = 0x1850d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1850d8: 0x220282d
    ctx->pc = 0x1850d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1850dc: 0x2406ffff
    ctx->pc = 0x1850dcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1850e0: 0xc060b28
    ctx->pc = 0x1850E0u;
    SET_GPR_U32(ctx, 31, 0x1850E8u);
    ctx->pc = 0x1850E4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182CA0_0x182ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1850E8u; }
    }
    if (ctx->pc != 0x1850E8u) { return; }
    ctx->pc = 0x1850E8u;
    // 0x1850e8: 0x8e630000
    ctx->pc = 0x1850e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1850ec: 0x14600058
    ctx->pc = 0x1850ECu;
    {
        const bool branch_taken_0x1850ec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1850F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1850ec) {
            ctx->pc = 0x185250u;
            goto label_185250;
        }
    }
    ctx->pc = 0x1850F4u;
    // 0x1850f4: 0x3c070028
    ctx->pc = 0x1850f4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)40 << 16));
    // 0x1850f8: 0x2e0282d
    ctx->pc = 0x1850f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1850fc: 0x24f06c80
    ctx->pc = 0x1850fcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 7), 27776));
    // 0x185100: 0xb01025
    ctx->pc = 0x185100u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x185104: 0x30420007
    ctx->pc = 0x185104u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 7));
    // 0x185108: 0x10400019
    ctx->pc = 0x185108u;
    {
        const bool branch_taken_0x185108 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18510Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x185108) {
            ctx->pc = 0x185170u;
            goto label_185170;
        }
    }
    ctx->pc = 0x185110u;
    // 0x185110: 0x24a20200
    ctx->pc = 0x185110u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 512));
label_185114:
    // 0x185114: 0x68a80007
    ctx->pc = 0x185114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x185118: 0x6ca80000
    ctx->pc = 0x185118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x18511c: 0x68a4000f
    ctx->pc = 0x18511cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x185120: 0x6ca40008
    ctx->pc = 0x185120u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x185124: 0x68a60017
    ctx->pc = 0x185124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x185128: 0x6ca60010
    ctx->pc = 0x185128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x18512c: 0x68a7001f
    ctx->pc = 0x18512cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x185130: 0x6ca70018
    ctx->pc = 0x185130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x185134: 0xb0680007
    ctx->pc = 0x185134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x185138: 0xb4680000
    ctx->pc = 0x185138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18513c: 0xb064000f
    ctx->pc = 0x18513cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x185140: 0xb4640008
    ctx->pc = 0x185140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x185144: 0xb0660017
    ctx->pc = 0x185144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x185148: 0xb4660010
    ctx->pc = 0x185148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18514c: 0xb067001f
    ctx->pc = 0x18514cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x185150: 0xb4670018
    ctx->pc = 0x185150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x185154: 0x24a50020
    ctx->pc = 0x185154u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
    // 0x185158: 0x0
    ctx->pc = 0x185158u;
    // NOP
    // 0x18515c: 0x0
    ctx->pc = 0x18515cu;
    // NOP
    // 0x185160: 0x14a2ffec
    ctx->pc = 0x185160u;
    {
        const bool branch_taken_0x185160 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x185164u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
        if (branch_taken_0x185160) {
            ctx->pc = 0x185114u;
            goto label_185114;
        }
    }
    ctx->pc = 0x185168u;
    // 0x185168: 0x10000010
    ctx->pc = 0x185168u;
    {
        const bool branch_taken_0x185168 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18516Cu;
        SET_GPR_U32(ctx, 8, ((uint32_t)40 << 16));
        if (branch_taken_0x185168) {
            ctx->pc = 0x1851ACu;
            goto label_1851ac;
        }
    }
    ctx->pc = 0x185170u;
label_185170:
    // 0x185170: 0x24a20200
    ctx->pc = 0x185170u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 512));
label_185174:
    // 0x185174: 0xdca80000
    ctx->pc = 0x185174u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x185178: 0xdca40008
    ctx->pc = 0x185178u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x18517c: 0xdca60010
    ctx->pc = 0x18517cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x185180: 0xdca70018
    ctx->pc = 0x185180u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x185184: 0xfc680000
    ctx->pc = 0x185184u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x185188: 0xfc640008
    ctx->pc = 0x185188u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x18518c: 0xfc660010
    ctx->pc = 0x18518cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 6));
    // 0x185190: 0xfc670018
    ctx->pc = 0x185190u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 7));
    // 0x185194: 0x24a50020
    ctx->pc = 0x185194u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
    // 0x185198: 0x0
    ctx->pc = 0x185198u;
    // NOP
    // 0x18519c: 0x0
    ctx->pc = 0x18519cu;
    // NOP
    // 0x1851a0: 0x14a2fff4
    ctx->pc = 0x1851A0u;
    {
        const bool branch_taken_0x1851a0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x1851A4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
        if (branch_taken_0x1851a0) {
            ctx->pc = 0x185174u;
            goto label_185174;
        }
    }
    ctx->pc = 0x1851A8u;
    // 0x1851a8: 0x3c080028
    ctx->pc = 0x1851a8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)40 << 16));
label_1851ac:
    // 0x1851ac: 0xa6000200
    ctx->pc = 0x1851acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 512), (uint16_t)GPR_U32(ctx, 0));
    // 0x1851b0: 0x25056c80
    ctx->pc = 0x1851b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 8), 27776));
    // 0x1851b4: 0x220302d
    ctx->pc = 0x1851b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1851b8: 0x2a0202d
    ctx->pc = 0x1851b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1851bc: 0xc061d24
    ctx->pc = 0x1851BCu;
    SET_GPR_U32(ctx, 31, 0x1851C4u);
    ctx->pc = 0x1851C0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x187490u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187490_0x187490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1851C4u; }
    }
    if (ctx->pc != 0x1851C4u) { return; }
    ctx->pc = 0x1851C4u;
    // 0x1851c4: 0x14400004
    ctx->pc = 0x1851C4u;
    {
        const bool branch_taken_0x1851c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1851C8u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 528)));
        if (branch_taken_0x1851c4) {
            ctx->pc = 0x1851D8u;
            goto label_1851d8;
        }
    }
    ctx->pc = 0x1851CCu;
    // 0x1851cc: 0x10000016
    ctx->pc = 0x1851CCu;
    {
        const bool branch_taken_0x1851cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1851D0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 1028)));
        if (branch_taken_0x1851cc) {
            ctx->pc = 0x185228u;
            goto label_185228;
        }
    }
    ctx->pc = 0x1851D4u;
    // 0x1851d4: 0x0
    ctx->pc = 0x1851d4u;
    // NOP
label_1851d8:
    // 0x1851d8: 0x3c028101
    ctx->pc = 0x1851d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x1851dc: 0x2403ffff
    ctx->pc = 0x1851dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1851e0: 0x10c3001b
    ctx->pc = 0x1851E0u;
    {
        const bool branch_taken_0x1851e0 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        ctx->pc = 0x1851E4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 36866));
        if (branch_taken_0x1851e0) {
            ctx->pc = 0x185250u;
            goto label_185250;
        }
    }
    ctx->pc = 0x1851E8u;
    // 0x1851e8: 0x8fa70214
    ctx->pc = 0x1851e8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 532)));
label_1851ec:
    // 0x1851ec: 0x2a0202d
    ctx->pc = 0x1851ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1851f0: 0xc060c02
    ctx->pc = 0x1851F0u;
    SET_GPR_U32(ctx, 31, 0x1851F8u);
    ctx->pc = 0x1851F4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x183008u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00183008_0x183008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1851F8u; }
    }
    if (ctx->pc != 0x1851F8u) { return; }
    ctx->pc = 0x1851F8u;
    // 0x1851f8: 0x5440000c
    ctx->pc = 0x1851F8u;
    {
        const bool branch_taken_0x1851f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1851f8) {
            ctx->pc = 0x1851FCu;
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
            ctx->pc = 0x18522Cu;
            goto label_18522c;
        }
    }
    ctx->pc = 0x185200u;
    // 0x185200: 0x8fa20004
    ctx->pc = 0x185200u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x185204: 0x2a0202d
    ctx->pc = 0x185204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185208: 0x8fa60210
    ctx->pc = 0x185208u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x18520c: 0x3a0282d
    ctx->pc = 0x18520cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185210: 0x8fa70214
    ctx->pc = 0x185210u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x185214: 0x24420001
    ctx->pc = 0x185214u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x185218: 0xc0612a8
    ctx->pc = 0x185218u;
    SET_GPR_U32(ctx, 31, 0x185220u);
    ctx->pc = 0x18521Cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x184AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00184AA0_0x184aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185220u; }
    }
    if (ctx->pc != 0x185220u) { return; }
    ctx->pc = 0x185220u;
    // 0x185220: 0x50400005
    ctx->pc = 0x185220u;
    {
        const bool branch_taken_0x185220 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x185220) {
            ctx->pc = 0x185224u;
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x185238u;
            goto label_185238;
        }
    }
    ctx->pc = 0x185228u;
label_185228:
    // 0x185228: 0xae620000
    ctx->pc = 0x185228u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_18522c:
    // 0x18522c: 0x10000008
    ctx->pc = 0x18522Cu;
    {
        const bool branch_taken_0x18522c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185230u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x18522c) {
            ctx->pc = 0x185250u;
            goto label_185250;
        }
    }
    ctx->pc = 0x185234u;
    // 0x185234: 0x0
    ctx->pc = 0x185234u;
    // NOP
label_185238:
    // 0x185238: 0x10000005
    ctx->pc = 0x185238u;
    {
        const bool branch_taken_0x185238 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18523Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x185238) {
            ctx->pc = 0x185250u;
            goto label_185250;
        }
    }
    ctx->pc = 0x185240u;
label_185240:
    // 0x185240: 0x3442ffff
    ctx->pc = 0x185240u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x185244: 0x1000fee8
    ctx->pc = 0x185244u;
    {
        const bool branch_taken_0x185244 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185248u;
        SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        if (branch_taken_0x185244) {
            ctx->pc = 0x184DE8u;
            goto label_184de8;
        }
    }
    ctx->pc = 0x18524Cu;
    // 0x18524c: 0x0
    ctx->pc = 0x18524cu;
    // NOP
label_185250:
    // 0x185250: 0xdfb00410
    ctx->pc = 0x185250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x185254: 0xdfb10418
    ctx->pc = 0x185254u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1048)));
    // 0x185258: 0xdfb20420
    ctx->pc = 0x185258u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x18525c: 0xdfb30428
    ctx->pc = 0x18525cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1064)));
    // 0x185260: 0xdfb40430
    ctx->pc = 0x185260u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x185264: 0xdfb50438
    ctx->pc = 0x185264u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1080)));
    // 0x185268: 0xdfb60440
    ctx->pc = 0x185268u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x18526c: 0xdfb70448
    ctx->pc = 0x18526cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1096)));
    // 0x185270: 0xdfbe0450
    ctx->pc = 0x185270u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x185274: 0xdfbf0458
    ctx->pc = 0x185274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1112)));
    // 0x185278: 0x3e00008
    ctx->pc = 0x185278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18527Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 1120));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x184DE8u: goto label_184de8;
            case 0x184E18u: goto label_184e18;
            case 0x184E28u: goto label_184e28;
            case 0x184E64u: goto label_184e64;
            case 0x184EC0u: goto label_184ec0;
            case 0x184EC4u: goto label_184ec4;
            case 0x184EFCu: goto label_184efc;
            case 0x184F00u: goto label_184f00;
            case 0x184F14u: goto label_184f14;
            case 0x184F28u: goto label_184f28;
            case 0x184F88u: goto label_184f88;
            case 0x184F8Cu: goto label_184f8c;
            case 0x184FC4u: goto label_184fc4;
            case 0x184FF0u: goto label_184ff0;
            case 0x185020u: goto label_185020;
            case 0x185068u: goto label_185068;
            case 0x18506Cu: goto label_18506c;
            case 0x185114u: goto label_185114;
            case 0x185170u: goto label_185170;
            case 0x185174u: goto label_185174;
            case 0x1851ACu: goto label_1851ac;
            case 0x1851D8u: goto label_1851d8;
            case 0x1851ECu: goto label_1851ec;
            case 0x185228u: goto label_185228;
            case 0x18522Cu: goto label_18522c;
            case 0x185238u: goto label_185238;
            case 0x185240u: goto label_185240;
            case 0x185250u: goto label_185250;
            default: break;
        }
        return;
    }
    ctx->pc = 0x185280u;
}
