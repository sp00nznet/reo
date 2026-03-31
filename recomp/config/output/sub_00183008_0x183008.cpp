#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00183008
// Address: 0x183008 - 0x183238
void sub_00183008_0x183008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x183008u;

    // 0x183008: 0x27bdffb0
    ctx->pc = 0x183008u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18300c: 0xffb20020
    ctx->pc = 0x18300cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x183010: 0x3c127fff
    ctx->pc = 0x183010u;
    SET_GPR_U32(ctx, 18, ((uint32_t)32767 << 16));
    // 0x183014: 0xffbf0040
    ctx->pc = 0x183014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x183018: 0x3652ffff
    ctx->pc = 0x183018u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), 65535));
    // 0x18301c: 0xafa00000
    ctx->pc = 0x18301cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x183020: 0xffb00010
    ctx->pc = 0x183020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x183024: 0xe0802d
    ctx->pc = 0x183024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183028: 0xffb10018
    ctx->pc = 0x183028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x18302c: 0x80882d
    ctx->pc = 0x18302cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183030: 0xffb30028
    ctx->pc = 0x183030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x183034: 0xa0982d
    ctx->pc = 0x183034u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183038: 0xffb40030
    ctx->pc = 0x183038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x18303c: 0x2414ffff
    ctx->pc = 0x18303cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x183040: 0xffb50038
    ctx->pc = 0x183040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x183044: 0x3c150028
    ctx->pc = 0x183044u;
    SET_GPR_U32(ctx, 21, ((uint32_t)40 << 16));
    // 0x183048: 0xc0282d
    ctx->pc = 0x183048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18304c: 0x0
    ctx->pc = 0x18304cu;
    // NOP
label_183050:
    // 0x183050: 0x2a020002
    ctx->pc = 0x183050u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 2));
    // 0x183054: 0x1040003c
    ctx->pc = 0x183054u;
    {
        const bool branch_taken_0x183054 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x183058u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x183054) {
            ctx->pc = 0x183148u;
            goto label_183148;
        }
    }
    ctx->pc = 0x18305Cu;
    // 0x18305c: 0x26b26c80
    ctx->pc = 0x18305cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 21), 27776));
    // 0x183060: 0xa0302d
    ctx->pc = 0x183060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183064: 0x24070001
    ctx->pc = 0x183064u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x183068: 0xc061d1e
    ctx->pc = 0x183068u;
    SET_GPR_U32(ctx, 31, 0x183070u);
    ctx->pc = 0x18306Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x187478u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187478_0x187478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183070u; }
    }
    if (ctx->pc != 0x183070u) { return; }
    ctx->pc = 0x183070u;
    // 0x183070: 0x14400005
    ctx->pc = 0x183070u;
    {
        const bool branch_taken_0x183070 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x183074u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 9));
        if (branch_taken_0x183070) {
            ctx->pc = 0x183088u;
            goto label_183088;
        }
    }
    ctx->pc = 0x183078u;
    // 0x183078: 0x3c028101
    ctx->pc = 0x183078u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x18307c: 0x1000003e
    ctx->pc = 0x18307Cu;
    {
        const bool branch_taken_0x18307c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x183080u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 111));
        if (branch_taken_0x18307c) {
            ctx->pc = 0x183178u;
            goto label_183178;
        }
    }
    ctx->pc = 0x183084u;
    // 0x183084: 0x0
    ctx->pc = 0x183084u;
    // NOP
label_183088:
    // 0x183088: 0x721821
    ctx->pc = 0x183088u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x18308c: 0x731025
    ctx->pc = 0x18308cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x183090: 0x30420007
    ctx->pc = 0x183090u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 7));
    // 0x183094: 0x1040001a
    ctx->pc = 0x183094u;
    {
        const bool branch_taken_0x183094 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x183098u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x183094) {
            ctx->pc = 0x183100u;
            goto label_183100;
        }
    }
    ctx->pc = 0x18309Cu;
    // 0x18309c: 0x24620200
    ctx->pc = 0x18309cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 512));
label_1830a0:
    // 0x1830a0: 0x68650007
    ctx->pc = 0x1830a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1830a4: 0x6c650000
    ctx->pc = 0x1830a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1830a8: 0x6866000f
    ctx->pc = 0x1830a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1830ac: 0x6c660008
    ctx->pc = 0x1830acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1830b0: 0x68670017
    ctx->pc = 0x1830b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1830b4: 0x6c670010
    ctx->pc = 0x1830b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1830b8: 0x6868001f
    ctx->pc = 0x1830b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1830bc: 0x6c680018
    ctx->pc = 0x1830bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1830c0: 0xb0850007
    ctx->pc = 0x1830c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1830c4: 0xb4850000
    ctx->pc = 0x1830c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1830c8: 0xb086000f
    ctx->pc = 0x1830c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1830cc: 0xb4860008
    ctx->pc = 0x1830ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1830d0: 0xb0870017
    ctx->pc = 0x1830d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1830d4: 0xb4870010
    ctx->pc = 0x1830d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1830d8: 0xb088001f
    ctx->pc = 0x1830d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1830dc: 0xb4880018
    ctx->pc = 0x1830dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1830e0: 0x24630020
    ctx->pc = 0x1830e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x1830e4: 0x0
    ctx->pc = 0x1830e4u;
    // NOP
    // 0x1830e8: 0x0
    ctx->pc = 0x1830e8u;
    // NOP
    // 0x1830ec: 0x1462ffec
    ctx->pc = 0x1830ECu;
    {
        const bool branch_taken_0x1830ec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1830F0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
        if (branch_taken_0x1830ec) {
            ctx->pc = 0x1830A0u;
            goto label_1830a0;
        }
    }
    ctx->pc = 0x1830F4u;
    // 0x1830f4: 0x10000011
    ctx->pc = 0x1830F4u;
    {
        const bool branch_taken_0x1830f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1830F8u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 95), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1830f4) {
            ctx->pc = 0x18313Cu;
            goto label_18313c;
        }
    }
    ctx->pc = 0x1830FCu;
    // 0x1830fc: 0x0
    ctx->pc = 0x1830fcu;
    // NOP
label_183100:
    // 0x183100: 0x24620200
    ctx->pc = 0x183100u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 512));
label_183104:
    // 0x183104: 0xdc650000
    ctx->pc = 0x183104u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x183108: 0xdc660008
    ctx->pc = 0x183108u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x18310c: 0xdc670010
    ctx->pc = 0x18310cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x183110: 0xdc680018
    ctx->pc = 0x183110u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x183114: 0xfc850000
    ctx->pc = 0x183114u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x183118: 0xfc860008
    ctx->pc = 0x183118u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x18311c: 0xfc870010
    ctx->pc = 0x18311cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x183120: 0xfc880018
    ctx->pc = 0x183120u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x183124: 0x24630020
    ctx->pc = 0x183124u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x183128: 0x0
    ctx->pc = 0x183128u;
    // NOP
    // 0x18312c: 0x0
    ctx->pc = 0x18312cu;
    // NOP
    // 0x183130: 0x1462fff4
    ctx->pc = 0x183130u;
    {
        const bool branch_taken_0x183130 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x183134u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
        if (branch_taken_0x183130) {
            ctx->pc = 0x183104u;
            goto label_183104;
        }
    }
    ctx->pc = 0x183138u;
    // 0x183138: 0xa260005f
    ctx->pc = 0x183138u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 95), (uint8_t)GPR_U32(ctx, 0));
label_18313c:
    // 0x18313c: 0x1000000e
    ctx->pc = 0x18313Cu;
    {
        const bool branch_taken_0x18313c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x183140u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18313c) {
            ctx->pc = 0x183178u;
            goto label_183178;
        }
    }
    ctx->pc = 0x183144u;
    // 0x183144: 0x0
    ctx->pc = 0x183144u;
    // NOP
label_183148:
    // 0x183148: 0xc060b02
    ctx->pc = 0x183148u;
    SET_GPR_U32(ctx, 31, 0x183150u);
    ctx->pc = 0x18314Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182C08_0x182c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183150u; }
    }
    if (ctx->pc != 0x183150u) { return; }
    ctx->pc = 0x183150u;
    // 0x183150: 0x8fa30000
    ctx->pc = 0x183150u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183154: 0x40282d
    ctx->pc = 0x183154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183158: 0x14600007
    ctx->pc = 0x183158u;
    {
        const bool branch_taken_0x183158 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x18315Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x183158) {
            ctx->pc = 0x183178u;
            goto label_183178;
        }
    }
    ctx->pc = 0x183160u;
    // 0x183160: 0x3c028101
    ctx->pc = 0x183160u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x183164: 0x10b40004
    ctx->pc = 0x183164u;
    {
        const bool branch_taken_0x183164 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 20));
        ctx->pc = 0x183168u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
        if (branch_taken_0x183164) {
            ctx->pc = 0x183178u;
            goto label_183178;
        }
    }
    ctx->pc = 0x18316Cu;
    // 0x18316c: 0xb22824
    ctx->pc = 0x18316cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x183170: 0x1000ffb7
    ctx->pc = 0x183170u;
    {
        const bool branch_taken_0x183170 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x183174u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967294));
        if (branch_taken_0x183170) {
            ctx->pc = 0x183050u;
            goto label_183050;
        }
    }
    ctx->pc = 0x183178u;
label_183178:
    // 0x183178: 0xdfb00010
    ctx->pc = 0x183178u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18317c: 0xdfb10018
    ctx->pc = 0x18317cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x183180: 0xdfb20020
    ctx->pc = 0x183180u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183184: 0xdfb30028
    ctx->pc = 0x183184u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x183188: 0xdfb40030
    ctx->pc = 0x183188u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18318c: 0xdfb50038
    ctx->pc = 0x18318cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x183190: 0xdfbf0040
    ctx->pc = 0x183190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x183194: 0x3e00008
    ctx->pc = 0x183194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183198u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x183050u: goto label_183050;
            case 0x183088u: goto label_183088;
            case 0x1830A0u: goto label_1830a0;
            case 0x183100u: goto label_183100;
            case 0x183104u: goto label_183104;
            case 0x18313Cu: goto label_18313c;
            case 0x183148u: goto label_183148;
            case 0x183178u: goto label_183178;
            case 0x1831D8u: goto label_1831d8;
            case 0x183214u: goto label_183214;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18319Cu;
    // 0x18319c: 0x0
    ctx->pc = 0x18319cu;
    // NOP
    // 0x1831a0: 0x27bdffc0
    ctx->pc = 0x1831a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1831a4: 0xffb10018
    ctx->pc = 0x1831a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1831a8: 0x3c117fff
    ctx->pc = 0x1831a8u;
    SET_GPR_U32(ctx, 17, ((uint32_t)32767 << 16));
    // 0x1831ac: 0xffbf0038
    ctx->pc = 0x1831acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1831b0: 0x3631ffff
    ctx->pc = 0x1831b0u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), 65535));
    // 0x1831b4: 0xffb00010
    ctx->pc = 0x1831b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1831b8: 0x24100001
    ctx->pc = 0x1831b8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1831bc: 0xffb20020
    ctx->pc = 0x1831bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1831c0: 0x80902d
    ctx->pc = 0x1831c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1831c4: 0xffb30028
    ctx->pc = 0x1831c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1831c8: 0x3c138000
    ctx->pc = 0x1831c8u;
    SET_GPR_U32(ctx, 19, ((uint32_t)32768 << 16));
    // 0x1831cc: 0xffb40030
    ctx->pc = 0x1831ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1831d0: 0x2414ffff
    ctx->pc = 0x1831d0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1831d4: 0x0
    ctx->pc = 0x1831d4u;
    // NOP
label_1831d8:
    // 0x1831d8: 0x240202d
    ctx->pc = 0x1831d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1831dc: 0xc060b02
    ctx->pc = 0x1831DCu;
    SET_GPR_U32(ctx, 31, 0x1831E4u);
    ctx->pc = 0x1831E0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182C08_0x182c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1831E4u; }
    }
    if (ctx->pc != 0x1831E4u) { return; }
    ctx->pc = 0x1831E4u;
    // 0x1831e4: 0x8fa30000
    ctx->pc = 0x1831e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1831e8: 0x40282d
    ctx->pc = 0x1831e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1831ec: 0xb32024
    ctx->pc = 0x1831ecu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x1831f0: 0x14600008
    ctx->pc = 0x1831F0u;
    {
        const bool branch_taken_0x1831f0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1831F4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1831f0) {
            ctx->pc = 0x183214u;
            goto label_183214;
        }
    }
    ctx->pc = 0x1831F8u;
    // 0x1831f8: 0x200102d
    ctx->pc = 0x1831f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1831fc: 0x10b40005
    ctx->pc = 0x1831FCu;
    {
        const bool branch_taken_0x1831fc = (GPR_U32(ctx, 5) == GPR_U32(ctx, 20));
        ctx->pc = 0x183200u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x1831fc) {
            ctx->pc = 0x183214u;
            goto label_183214;
        }
    }
    ctx->pc = 0x183204u;
    // 0x183204: 0x1480fff4
    ctx->pc = 0x183204u;
    {
        const bool branch_taken_0x183204 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x183208u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        if (branch_taken_0x183204) {
            ctx->pc = 0x1831D8u;
            goto label_1831d8;
        }
    }
    ctx->pc = 0x18320Cu;
    // 0x18320c: 0x3c028101
    ctx->pc = 0x18320cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x183210: 0x34429002
    ctx->pc = 0x183210u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 36866));
label_183214:
    // 0x183214: 0xdfb00010
    ctx->pc = 0x183214u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183218: 0xdfb10018
    ctx->pc = 0x183218u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18321c: 0xdfb20020
    ctx->pc = 0x18321cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183220: 0xdfb30028
    ctx->pc = 0x183220u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x183224: 0xdfb40030
    ctx->pc = 0x183224u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x183228: 0xdfbf0038
    ctx->pc = 0x183228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x18322c: 0x3e00008
    ctx->pc = 0x18322Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183230u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x183050u: goto label_183050;
            case 0x183088u: goto label_183088;
            case 0x1830A0u: goto label_1830a0;
            case 0x183100u: goto label_183100;
            case 0x183104u: goto label_183104;
            case 0x18313Cu: goto label_18313c;
            case 0x183148u: goto label_183148;
            case 0x183178u: goto label_183178;
            case 0x1831D8u: goto label_1831d8;
            case 0x183214u: goto label_183214;
            default: break;
        }
        return;
    }
    ctx->pc = 0x183234u;
    // 0x183234: 0x0
    ctx->pc = 0x183234u;
    // NOP
}
