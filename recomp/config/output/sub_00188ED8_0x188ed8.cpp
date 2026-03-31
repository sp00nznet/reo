#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00188ED8
// Address: 0x188ed8 - 0x189120
void sub_00188ED8_0x188ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x188ed8u;

    // 0x188ed8: 0x27bdffc0
    ctx->pc = 0x188ed8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x188edc: 0xffb20020
    ctx->pc = 0x188edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x188ee0: 0xffb00000
    ctx->pc = 0x188ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x188ee4: 0x3c120029
    ctx->pc = 0x188ee4u;
    SET_GPR_U32(ctx, 18, ((uint32_t)41 << 16));
    // 0x188ee8: 0x80802d
    ctx->pc = 0x188ee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188eec: 0xffb10010
    ctx->pc = 0x188eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x188ef0: 0x26444080
    ctx->pc = 0x188ef0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 16512));
    // 0x188ef4: 0xffbf0030
    ctx->pc = 0x188ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x188ef8: 0xc0453c6
    ctx->pc = 0x188EF8u;
    SET_GPR_U32(ctx, 31, 0x188F00u);
    ctx->pc = 0x188EFCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 128));
    ctx->pc = 0x114F18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114F18_0x114f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188F00u; }
    }
    if (ctx->pc != 0x188F00u) { return; }
    ctx->pc = 0x188F00u;
    // 0x188f00: 0xc047598
    ctx->pc = 0x188F00u;
    SET_GPR_U32(ctx, 31, 0x188F08u);
    ctx->pc = 0x188F04u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 2));
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188F08u; }
    }
    if (ctx->pc != 0x188F08u) { return; }
    ctx->pc = 0x188F08u;
    // 0x188f08: 0x3c030029
    ctx->pc = 0x188f08u;
    SET_GPR_U32(ctx, 3, ((uint32_t)41 << 16));
    // 0x188f0c: 0x26464080
    ctx->pc = 0x188f0cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 16512));
    // 0x188f10: 0x24654100
    ctx->pc = 0x188f10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 16640));
    // 0x188f14: 0x68c20007
    ctx->pc = 0x188f14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x188f18: 0x6cc20000
    ctx->pc = 0x188f18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x188f1c: 0x68c4000f
    ctx->pc = 0x188f1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x188f20: 0x6cc40008
    ctx->pc = 0x188f20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x188f24: 0xb0a20007
    ctx->pc = 0x188f24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x188f28: 0xb4a20000
    ctx->pc = 0x188f28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x188f2c: 0xb0a4000f
    ctx->pc = 0x188f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x188f30: 0xb4a40008
    ctx->pc = 0x188f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x188f34: 0x68c20017
    ctx->pc = 0x188f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x188f38: 0x6cc20010
    ctx->pc = 0x188f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x188f3c: 0x68c4001f
    ctx->pc = 0x188f3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x188f40: 0x6cc40018
    ctx->pc = 0x188f40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x188f44: 0xb0a20017
    ctx->pc = 0x188f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x188f48: 0xb4a20010
    ctx->pc = 0x188f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x188f4c: 0xb0a4001f
    ctx->pc = 0x188f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x188f50: 0xb4a40018
    ctx->pc = 0x188f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x188f54: 0x68c20027
    ctx->pc = 0x188f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x188f58: 0x6cc20020
    ctx->pc = 0x188f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x188f5c: 0x68c4002f
    ctx->pc = 0x188f5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 47); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x188f60: 0x6cc40028
    ctx->pc = 0x188f60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 40); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x188f64: 0xb0a20027
    ctx->pc = 0x188f64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x188f68: 0xb4a20020
    ctx->pc = 0x188f68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x188f6c: 0xb0a4002f
    ctx->pc = 0x188f6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 47); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x188f70: 0xb4a40028
    ctx->pc = 0x188f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 40); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x188f74: 0x68c20037
    ctx->pc = 0x188f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 55); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x188f78: 0x6cc20030
    ctx->pc = 0x188f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 48); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x188f7c: 0x68c4003f
    ctx->pc = 0x188f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 63); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x188f80: 0x6cc40038
    ctx->pc = 0x188f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 56); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x188f84: 0xb0a20037
    ctx->pc = 0x188f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 55); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x188f88: 0xb4a20030
    ctx->pc = 0x188f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 48); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x188f8c: 0xb0a4003f
    ctx->pc = 0x188f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 63); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x188f90: 0xb4a40038
    ctx->pc = 0x188f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 56); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x188f94: 0xc0475ae
    ctx->pc = 0x188F94u;
    SET_GPR_U32(ctx, 31, 0x188F9Cu);
    ctx->pc = 0x188F98u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 16640));
    ctx->pc = 0x11D6B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6B8_0x11d6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188F9Cu; }
    }
    if (ctx->pc != 0x188F9Cu) { return; }
    ctx->pc = 0x188F9Cu;
    // 0x188f9c: 0x24040001
    ctx->pc = 0x188f9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x188fa0: 0x2118021
    ctx->pc = 0x188fa0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x188fa4: 0x24020003
    ctx->pc = 0x188fa4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x188fa8: 0x8e030000
    ctx->pc = 0x188fa8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x188fac: 0xdfbf0030
    ctx->pc = 0x188facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x188fb0: 0x38630001
    ctx->pc = 0x188fb0u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 1));
    // 0x188fb4: 0xdfb20020
    ctx->pc = 0x188fb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188fb8: 0xdfb10010
    ctx->pc = 0x188fb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188fbc: 0x83100a
    ctx->pc = 0x188fbcu;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x188fc0: 0xdfb00000
    ctx->pc = 0x188fc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188fc4: 0x3e00008
    ctx->pc = 0x188FC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188FC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189030u: goto label_189030;
            case 0x1890A0u: goto label_1890a0;
            case 0x189110u: goto label_189110;
            default: break;
        }
        return;
    }
    ctx->pc = 0x188FCCu;
    // 0x188fcc: 0x0
    ctx->pc = 0x188fccu;
    // NOP
    // 0x188fd0: 0x27bdffd0
    ctx->pc = 0x188fd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x188fd4: 0x3c020029
    ctx->pc = 0x188fd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x188fd8: 0xffb00010
    ctx->pc = 0x188fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x188fdc: 0x3c030029
    ctx->pc = 0x188fdcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)41 << 16));
    // 0x188fe0: 0x24500c00
    ctx->pc = 0x188fe0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 3072));
    // 0x188fe4: 0xac440c00
    ctx->pc = 0x188fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3072), GPR_U32(ctx, 4));
    // 0x188fe8: 0x3c058000
    ctx->pc = 0x188fe8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x188fec: 0xffbf0020
    ctx->pc = 0x188fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x188ff0: 0x24640b88
    ctx->pc = 0x188ff0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 2952));
    // 0x188ff4: 0xafa00000
    ctx->pc = 0x188ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x188ff8: 0x34a51315
    ctx->pc = 0x188ff8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 4885));
    // 0x188ffc: 0x302d
    ctx->pc = 0x188ffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189000: 0x200382d
    ctx->pc = 0x189000u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189004: 0x24080280
    ctx->pc = 0x189004u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 640));
    // 0x189008: 0x200482d
    ctx->pc = 0x189008u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18900c: 0x240a0280
    ctx->pc = 0x18900cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 640));
    // 0x189010: 0xc045e7a
    ctx->pc = 0x189010u;
    SET_GPR_U32(ctx, 31, 0x189018u);
    ctx->pc = 0x189014u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189018u; }
    }
    if (ctx->pc != 0x189018u) { return; }
    ctx->pc = 0x189018u;
    // 0x189018: 0x4430005
    ctx->pc = 0x189018u;
    {
        const bool branch_taken_0x189018 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x189018) {
            ctx->pc = 0x18901Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x189030u;
            goto label_189030;
        }
    }
    ctx->pc = 0x189020u;
    // 0x189020: 0x3c040024
    ctx->pc = 0x189020u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x189024: 0xc0625f6
    ctx->pc = 0x189024u;
    SET_GPR_U32(ctx, 31, 0x18902Cu);
    ctx->pc = 0x189028u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6528));
    ctx->pc = 0x1897D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001897D8_0x1897d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18902Cu; }
    }
    if (ctx->pc != 0x18902Cu) { return; }
    ctx->pc = 0x18902Cu;
    // 0x18902c: 0x102d
    ctx->pc = 0x18902cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189030:
    // 0x189030: 0xdfbf0020
    ctx->pc = 0x189030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189034: 0xdfb00010
    ctx->pc = 0x189034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189038: 0x3e00008
    ctx->pc = 0x189038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18903Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189030u: goto label_189030;
            case 0x1890A0u: goto label_1890a0;
            case 0x189110u: goto label_189110;
            default: break;
        }
        return;
    }
    ctx->pc = 0x189040u;
    // 0x189040: 0x27bdffd0
    ctx->pc = 0x189040u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x189044: 0x3c020029
    ctx->pc = 0x189044u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x189048: 0xffb00010
    ctx->pc = 0x189048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x18904c: 0x3c030029
    ctx->pc = 0x18904cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)41 << 16));
    // 0x189050: 0x24500c00
    ctx->pc = 0x189050u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 3072));
    // 0x189054: 0xac440c00
    ctx->pc = 0x189054u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3072), GPR_U32(ctx, 4));
    // 0x189058: 0x3c058000
    ctx->pc = 0x189058u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x18905c: 0xffbf0020
    ctx->pc = 0x18905cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x189060: 0x24640b88
    ctx->pc = 0x189060u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 2952));
    // 0x189064: 0xafa00000
    ctx->pc = 0x189064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x189068: 0x34a51316
    ctx->pc = 0x189068u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 4886));
    // 0x18906c: 0x302d
    ctx->pc = 0x18906cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189070: 0x200382d
    ctx->pc = 0x189070u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189074: 0x24080280
    ctx->pc = 0x189074u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 640));
    // 0x189078: 0x200482d
    ctx->pc = 0x189078u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18907c: 0x240a0280
    ctx->pc = 0x18907cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 640));
    // 0x189080: 0xc045e7a
    ctx->pc = 0x189080u;
    SET_GPR_U32(ctx, 31, 0x189088u);
    ctx->pc = 0x189084u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189088u; }
    }
    if (ctx->pc != 0x189088u) { return; }
    ctx->pc = 0x189088u;
    // 0x189088: 0x4430005
    ctx->pc = 0x189088u;
    {
        const bool branch_taken_0x189088 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x189088) {
            ctx->pc = 0x18908Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x1890A0u;
            goto label_1890a0;
        }
    }
    ctx->pc = 0x189090u;
    // 0x189090: 0x3c040024
    ctx->pc = 0x189090u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x189094: 0xc0625f6
    ctx->pc = 0x189094u;
    SET_GPR_U32(ctx, 31, 0x18909Cu);
    ctx->pc = 0x189098u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6560));
    ctx->pc = 0x1897D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001897D8_0x1897d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18909Cu; }
    }
    if (ctx->pc != 0x18909Cu) { return; }
    ctx->pc = 0x18909Cu;
    // 0x18909c: 0x102d
    ctx->pc = 0x18909cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1890a0:
    // 0x1890a0: 0xdfbf0020
    ctx->pc = 0x1890a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1890a4: 0xdfb00010
    ctx->pc = 0x1890a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1890a8: 0x3e00008
    ctx->pc = 0x1890A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1890ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189030u: goto label_189030;
            case 0x1890A0u: goto label_1890a0;
            case 0x189110u: goto label_189110;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1890B0u;
    // 0x1890b0: 0x27bdffd0
    ctx->pc = 0x1890b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1890b4: 0x3c020029
    ctx->pc = 0x1890b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x1890b8: 0xffb00010
    ctx->pc = 0x1890b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1890bc: 0x3c030029
    ctx->pc = 0x1890bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)41 << 16));
    // 0x1890c0: 0x24500c00
    ctx->pc = 0x1890c0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 3072));
    // 0x1890c4: 0xac440c00
    ctx->pc = 0x1890c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3072), GPR_U32(ctx, 4));
    // 0x1890c8: 0x3c058000
    ctx->pc = 0x1890c8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x1890cc: 0xffbf0020
    ctx->pc = 0x1890ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1890d0: 0x24640b88
    ctx->pc = 0x1890d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 2952));
    // 0x1890d4: 0xafa00000
    ctx->pc = 0x1890d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1890d8: 0x34a51317
    ctx->pc = 0x1890d8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 4887));
    // 0x1890dc: 0x302d
    ctx->pc = 0x1890dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1890e0: 0x200382d
    ctx->pc = 0x1890e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1890e4: 0x24080280
    ctx->pc = 0x1890e4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 640));
    // 0x1890e8: 0x200482d
    ctx->pc = 0x1890e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1890ec: 0x240a0280
    ctx->pc = 0x1890ecu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 640));
    // 0x1890f0: 0xc045e7a
    ctx->pc = 0x1890F0u;
    SET_GPR_U32(ctx, 31, 0x1890F8u);
    ctx->pc = 0x1890F4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1890F8u; }
    }
    if (ctx->pc != 0x1890F8u) { return; }
    ctx->pc = 0x1890F8u;
    // 0x1890f8: 0x4430005
    ctx->pc = 0x1890F8u;
    {
        const bool branch_taken_0x1890f8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1890f8) {
            ctx->pc = 0x1890FCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x189110u;
            goto label_189110;
        }
    }
    ctx->pc = 0x189100u;
    // 0x189100: 0x3c040024
    ctx->pc = 0x189100u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x189104: 0xc0625f6
    ctx->pc = 0x189104u;
    SET_GPR_U32(ctx, 31, 0x18910Cu);
    ctx->pc = 0x189108u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6592));
    ctx->pc = 0x1897D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001897D8_0x1897d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18910Cu; }
    }
    if (ctx->pc != 0x18910Cu) { return; }
    ctx->pc = 0x18910Cu;
    // 0x18910c: 0x102d
    ctx->pc = 0x18910cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189110:
    // 0x189110: 0xdfbf0020
    ctx->pc = 0x189110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189114: 0xdfb00010
    ctx->pc = 0x189114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189118: 0x3e00008
    ctx->pc = 0x189118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18911Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189030u: goto label_189030;
            case 0x1890A0u: goto label_1890a0;
            case 0x189110u: goto label_189110;
            default: break;
        }
        return;
    }
    ctx->pc = 0x189120u;
}
