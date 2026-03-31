#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1a2e00
// Address: 0x1a2e00 - 0x1a2ff0
void entry_1a2e00_0x1a2ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a2e00u;

    // 0x1a2e00: 0x27bdff80
    ctx->pc = 0x1a2e00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1a2e04: 0xffbf0070
    ctx->pc = 0x1a2e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1a2e08: 0x7fb60060
    ctx->pc = 0x1a2e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1a2e0c: 0x7fb50050
    ctx->pc = 0x1a2e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1a2e10: 0x7fb40040
    ctx->pc = 0x1a2e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a2e14: 0x7fb30030
    ctx->pc = 0x1a2e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a2e18: 0x7fb20020
    ctx->pc = 0x1a2e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a2e1c: 0xe0982d
    ctx->pc = 0x1a2e1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e20: 0x7fb10010
    ctx->pc = 0x1a2e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a2e24: 0x80902d
    ctx->pc = 0x1a2e24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e28: 0x7fb00000
    ctx->pc = 0x1a2e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a2e2c: 0xa0882d
    ctx->pc = 0x1a2e2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e30: 0xc0802d
    ctx->pc = 0x1a2e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e34: 0xc068acc
    ctx->pc = 0x1A2E34u;
    SET_GPR_U32(ctx, 31, 0x1A2E3Cu);
    ctx->pc = 0x1A2E38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A2B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2B30_0x1a2b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2E3Cu; }
    }
    if (ctx->pc != 0x1A2E3Cu) { return; }
    ctx->pc = 0x1A2E3Cu;
    // 0x1a2e3c: 0x262102a
    ctx->pc = 0x1a2e3cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
    // 0x1a2e40: 0x14400003
    ctx->pc = 0x1A2E40u;
    {
        const bool branch_taken_0x1a2e40 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A2E44u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a2e40) {
            ctx->pc = 0x1A2E50u;
            goto label_1a2e50;
        }
    }
    ctx->pc = 0x1A2E48u;
    // 0x1a2e48: 0x1000005e
    ctx->pc = 0x1A2E48u;
    {
        const bool branch_taken_0x1a2e48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A2E4Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a2e48) {
            ctx->pc = 0x1A2FC4u;
            goto label_1a2fc4;
        }
    }
    ctx->pc = 0x1A2E50u;
label_1a2e50:
    // 0x1a2e50: 0xc068b68
    ctx->pc = 0x1A2E50u;
    SET_GPR_U32(ctx, 31, 0x1A2E58u);
    ctx->pc = 0x1A2E54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A2DA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2DA0_0x1a2da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2E58u; }
    }
    if (ctx->pc != 0x1A2E58u) { return; }
    ctx->pc = 0x1A2E58u;
    // 0x1a2e58: 0xae22000c
    ctx->pc = 0x1a2e58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1a2e5c: 0x200202d
    ctx->pc = 0x1a2e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e60: 0xc068aec
    ctx->pc = 0x1A2E60u;
    SET_GPR_U32(ctx, 31, 0x1A2E68u);
    ctx->pc = 0x1A2E64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A2BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2BB0_0x1a2bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2E68u; }
    }
    if (ctx->pc != 0x1A2E68u) { return; }
    ctx->pc = 0x1A2E68u;
    // 0x1a2e68: 0xa6220002
    ctx->pc = 0x1a2e68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a2e6c: 0x40b02d
    ctx->pc = 0x1a2e6cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e70: 0x24020010
    ctx->pc = 0x1a2e70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a2e74: 0x26340010
    ctx->pc = 0x1a2e74u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 17), 16));
    // 0x1a2e78: 0xae220004
    ctx->pc = 0x1a2e78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1a2e7c: 0x302d
    ctx->pc = 0x1a2e7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e80: 0x1000000c
    ctx->pc = 0x1A2E80u;
    {
        const bool branch_taken_0x1a2e80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A2E84u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        if (branch_taken_0x1a2e80) {
            ctx->pc = 0x1A2EB4u;
            goto label_1a2eb4;
        }
    }
    ctx->pc = 0x1A2E88u;
label_1a2e88:
    // 0x1a2e88: 0x282d
    ctx->pc = 0x1a2e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e8c: 0x2822021
    ctx->pc = 0x1a2e8cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1a2e90:
    // 0x1a2e90: 0x51080
    ctx->pc = 0x1a2e90u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a2e94: 0x821821
    ctx->pc = 0x1a2e94u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a2e98: 0x24a50001
    ctx->pc = 0x1a2e98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a2e9c: 0xac600010
    ctx->pc = 0x1a2e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1a2ea0: 0x28a20004
    ctx->pc = 0x1a2ea0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
    // 0x1a2ea4: 0xac600020
    ctx->pc = 0x1a2ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x1a2ea8: 0x1440fff9
    ctx->pc = 0x1A2EA8u;
    {
        const bool branch_taken_0x1a2ea8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A2EACu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
        if (branch_taken_0x1a2ea8) {
            ctx->pc = 0x1A2E90u;
            goto label_1a2e90;
        }
    }
    ctx->pc = 0x1A2EB0u;
    // 0x1a2eb0: 0x24c60001
    ctx->pc = 0x1a2eb0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_1a2eb4:
    // 0x1a2eb4: 0xd6102a
    ctx->pc = 0x1a2eb4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 22)));
    // 0x1a2eb8: 0x1440fff3
    ctx->pc = 0x1A2EB8u;
    {
        const bool branch_taken_0x1a2eb8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A2EBCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 6));
        if (branch_taken_0x1a2eb8) {
            ctx->pc = 0x1A2E88u;
            goto label_1a2e88;
        }
    }
    ctx->pc = 0x1A2EC0u;
    // 0x1a2ec0: 0x260282d
    ctx->pc = 0x1a2ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2ec4: 0xc068ad8
    ctx->pc = 0x1A2EC4u;
    SET_GPR_U32(ctx, 31, 0x1A2ECCu);
    ctx->pc = 0x1A2EC8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A2B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2B60_0x1a2b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2ECCu; }
    }
    if (ctx->pc != 0x1A2ECCu) { return; }
    ctx->pc = 0x1A2ECCu;
    // 0x1a2ecc: 0x40a82d
    ctx->pc = 0x1a2eccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2ed0: 0x1000002f
    ctx->pc = 0x1A2ED0u;
    {
        const bool branch_taken_0x1a2ed0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A2ED4u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a2ed0) {
            ctx->pc = 0x1A2F90u;
            goto label_1a2f90;
        }
    }
    ctx->pc = 0x1A2ED8u;
label_1a2ed8:
    // 0x1a2ed8: 0xc068b5c
    ctx->pc = 0x1A2ED8u;
    SET_GPR_U32(ctx, 31, 0x1A2EE0u);
    ctx->pc = 0x1A2EDCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A2D70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2D70_0x1a2d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2EE0u; }
    }
    if (ctx->pc != 0x1A2EE0u) { return; }
    ctx->pc = 0x1A2EE0u;
    // 0x1a2ee0: 0x8c440000
    ctx->pc = 0x1a2ee0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a2ee4: 0x2403ffff
    ctx->pc = 0x1a2ee4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a2ee8: 0xa6840000
    ctx->pc = 0x1a2ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a2eec: 0x8c440044
    ctx->pc = 0x1a2eecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1a2ef0: 0xa6840002
    ctx->pc = 0x1a2ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a2ef4: 0x8c440008
    ctx->pc = 0x1a2ef4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a2ef8: 0xa6840006
    ctx->pc = 0x1a2ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a2efc: 0x8c44000c
    ctx->pc = 0x1a2efcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1a2f00: 0xa6840008
    ctx->pc = 0x1a2f00u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a2f04: 0x86840006
    ctx->pc = 0x1a2f04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x1a2f08: 0x10830004
    ctx->pc = 0x1A2F08u;
    {
        const bool branch_taken_0x1a2f08 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1A2F0Cu;
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 16));
        if (branch_taken_0x1a2f08) {
            ctx->pc = 0x1A2F1Cu;
            goto label_1a2f1c;
        }
    }
    ctx->pc = 0x1A2F10u;
    // 0x1a2f10: 0x31c3f
    ctx->pc = 0x1a2f10u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1a2f14: 0x831823
    ctx->pc = 0x1a2f14u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a2f18: 0xa6830006
    ctx->pc = 0x1a2f18u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 3));
label_1a2f1c:
    // 0x1a2f1c: 0x86840008
    ctx->pc = 0x1a2f1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1a2f20: 0x2403ffff
    ctx->pc = 0x1a2f20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a2f24: 0x10830004
    ctx->pc = 0x1A2F24u;
    {
        const bool branch_taken_0x1a2f24 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1A2F28u;
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 16));
        if (branch_taken_0x1a2f24) {
            ctx->pc = 0x1A2F38u;
            goto label_1a2f38;
        }
    }
    ctx->pc = 0x1A2F2Cu;
    // 0x1a2f2c: 0x31c3f
    ctx->pc = 0x1a2f2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1a2f30: 0x831823
    ctx->pc = 0x1a2f30u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a2f34: 0xa6830008
    ctx->pc = 0x1a2f34u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 3));
label_1a2f38:
    // 0x1a2f38: 0x8c430040
    ctx->pc = 0x1a2f38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1a2f3c: 0x302d
    ctx->pc = 0x1a2f3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2f40: 0xa683000a
    ctx->pc = 0x1a2f40u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10), (uint16_t)GPR_U32(ctx, 3));
label_1a2f44:
    // 0x1a2f44: 0x64080
    ctx->pc = 0x1a2f44u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a2f48: 0x25030010
    ctx->pc = 0x1a2f48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 8), 16));
    // 0x1a2f4c: 0x2883821
    ctx->pc = 0x1a2f4cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x1a2f50: 0x432021
    ctx->pc = 0x1a2f50u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a2f54: 0x24c60001
    ctx->pc = 0x1a2f54u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a2f58: 0xc4800000
    ctx->pc = 0x1a2f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2f5c: 0x25030020
    ctx->pc = 0x1a2f5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 8), 32));
    // 0x1a2f60: 0x432821
    ctx->pc = 0x1a2f60u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a2f64: 0x25030030
    ctx->pc = 0x1a2f64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 8), 48));
    // 0x1a2f68: 0xe4e00010
    ctx->pc = 0x1a2f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x1a2f6c: 0x432021
    ctx->pc = 0x1a2f6cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a2f70: 0xc4a00000
    ctx->pc = 0x1a2f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2f74: 0x28c30004
    ctx->pc = 0x1a2f74u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 4));
    // 0x1a2f78: 0xe4e00020
    ctx->pc = 0x1a2f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x1a2f7c: 0xc4800000
    ctx->pc = 0x1a2f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2f80: 0x1460fff0
    ctx->pc = 0x1A2F80u;
    {
        const bool branch_taken_0x1a2f80 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A2F84u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
        if (branch_taken_0x1a2f80) {
            ctx->pc = 0x1A2F44u;
            goto label_1a2f44;
        }
    }
    ctx->pc = 0x1A2F88u;
    // 0x1a2f88: 0x26940040
    ctx->pc = 0x1a2f88u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 64));
    // 0x1a2f8c: 0x26730001
    ctx->pc = 0x1a2f8cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1a2f90:
    // 0x1a2f90: 0x276102a
    ctx->pc = 0x1a2f90u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 22)));
    // 0x1a2f94: 0x1440ffd0
    ctx->pc = 0x1A2F94u;
    {
        const bool branch_taken_0x1a2f94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A2F98u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
        if (branch_taken_0x1a2f94) {
            ctx->pc = 0x1A2ED8u;
            goto label_1a2ed8;
        }
    }
    ctx->pc = 0x1A2F9Cu;
    // 0x1a2f9c: 0xc6230000
    ctx->pc = 0x1a2f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a2fa0: 0x24020001
    ctx->pc = 0x1a2fa0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2fa4: 0xc6220004
    ctx->pc = 0x1a2fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a2fa8: 0xc6210008
    ctx->pc = 0x1a2fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2fac: 0xc620000c
    ctx->pc = 0x1a2facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2fb0: 0xe6430000
    ctx->pc = 0x1a2fb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1a2fb4: 0xe6420004
    ctx->pc = 0x1a2fb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1a2fb8: 0xe6410008
    ctx->pc = 0x1a2fb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1a2fbc: 0xe640000c
    ctx->pc = 0x1a2fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1a2fc0: 0xae510008
    ctx->pc = 0x1a2fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 17));
label_1a2fc4:
    // 0x1a2fc4: 0xdfbf0070
    ctx->pc = 0x1a2fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a2fc8: 0x7bb60060
    ctx->pc = 0x1a2fc8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a2fcc: 0x7bb50050
    ctx->pc = 0x1a2fccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a2fd0: 0x7bb40040
    ctx->pc = 0x1a2fd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a2fd4: 0x7bb30030
    ctx->pc = 0x1a2fd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a2fd8: 0x7bb20020
    ctx->pc = 0x1a2fd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2fdc: 0x7bb10010
    ctx->pc = 0x1a2fdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2fe0: 0x7bb00000
    ctx->pc = 0x1a2fe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2fe4: 0x3e00008
    ctx->pc = 0x1A2FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2FE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A2E50u: goto label_1a2e50;
            case 0x1A2E88u: goto label_1a2e88;
            case 0x1A2E90u: goto label_1a2e90;
            case 0x1A2EB4u: goto label_1a2eb4;
            case 0x1A2ED8u: goto label_1a2ed8;
            case 0x1A2F1Cu: goto label_1a2f1c;
            case 0x1A2F38u: goto label_1a2f38;
            case 0x1A2F44u: goto label_1a2f44;
            case 0x1A2F90u: goto label_1a2f90;
            case 0x1A2FC4u: goto label_1a2fc4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A2FECu;
    // 0x1a2fec: 0x0
    ctx->pc = 0x1a2fecu;
    // NOP
}
