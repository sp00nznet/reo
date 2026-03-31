#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018EBB0
// Address: 0x18ebb0 - 0x18ed20
void sub_0018EBB0_0x18ebb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18ebb0u;

    // 0x18ebb0: 0x3c010029
    ctx->pc = 0x18ebb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18ebb4: 0x8c830004
    ctx->pc = 0x18ebb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18ebb8: 0x8c224160
    ctx->pc = 0x18ebb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 16736)));
    // 0x18ebbc: 0xaca00000
    ctx->pc = 0x18ebbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x18ebc0: 0x624021
    ctx->pc = 0x18ebc0u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18ebc4: 0xacc00000
    ctx->pc = 0x18ebc4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x18ebc8: 0xc5000008
    ctx->pc = 0x18ebc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ebcc: 0x46006036
    ctx->pc = 0x18ebccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ebd0: 0x45010005
    ctx->pc = 0x18EBD0u;
    {
        const bool branch_taken_0x18ebd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ebd0) {
            ctx->pc = 0x18EBE8u;
            goto label_18ebe8;
        }
    }
    ctx->pc = 0x18EBD8u;
    // 0x18ebd8: 0x94830002
    ctx->pc = 0x18ebd8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x18ebdc: 0x24020001
    ctx->pc = 0x18ebdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ebe0: 0x14620005
    ctx->pc = 0x18EBE0u;
    {
        const bool branch_taken_0x18ebe0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x18EBE4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x18ebe0) {
            ctx->pc = 0x18EBF8u;
            goto label_18ebf8;
        }
    }
    ctx->pc = 0x18EBE8u;
label_18ebe8:
    // 0x18ebe8: 0xaca80000
    ctx->pc = 0x18ebe8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x18ebec: 0x102d
    ctx->pc = 0x18ebecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ebf0: 0x10000046
    ctx->pc = 0x18EBF0u;
    {
        const bool branch_taken_0x18ebf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18EBF4u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x18ebf0) {
            ctx->pc = 0x18ED0Cu;
            goto label_18ed0c;
        }
    }
    ctx->pc = 0x18EBF8u;
label_18ebf8:
    // 0x18ebf8: 0x431021
    ctx->pc = 0x18ebf8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18ebfc: 0x21080
    ctx->pc = 0x18ebfcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x18ec00: 0x481021
    ctx->pc = 0x18ec00u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18ec04: 0xc440fff4
    ctx->pc = 0x18ec04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ec08: 0x46006034
    ctx->pc = 0x18ec08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ec0c: 0x4501000d
    ctx->pc = 0x18EC0Cu;
    {
        const bool branch_taken_0x18ec0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ec0c) {
            ctx->pc = 0x18EC44u;
            goto label_18ec44;
        }
    }
    ctx->pc = 0x18EC14u;
    // 0x18ec14: 0x2463ffff
    ctx->pc = 0x18ec14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18ec18: 0x31080
    ctx->pc = 0x18ec18u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x18ec1c: 0x431021
    ctx->pc = 0x18ec1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18ec20: 0x21080
    ctx->pc = 0x18ec20u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x18ec24: 0x1021021
    ctx->pc = 0x18ec24u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x18ec28: 0xaca20000
    ctx->pc = 0x18ec28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x18ec2c: 0xacc00000
    ctx->pc = 0x18ec2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x18ec30: 0x94820002
    ctx->pc = 0x18ec30u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x18ec34: 0x2442ffff
    ctx->pc = 0x18ec34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18ec38: 0x2143c
    ctx->pc = 0x18ec38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18ec3c: 0x10000033
    ctx->pc = 0x18EC3Cu;
    {
        const bool branch_taken_0x18ec3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18EC40u;
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        if (branch_taken_0x18ec3c) {
            ctx->pc = 0x18ED0Cu;
            goto label_18ed0c;
        }
    }
    ctx->pc = 0x18EC44u;
label_18ec44:
    // 0x18ec44: 0x7143c
    ctx->pc = 0x18ec44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x18ec48: 0x2143f
    ctx->pc = 0x18ec48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x18ec4c: 0x4410003
    ctx->pc = 0x18EC4Cu;
    {
        const bool branch_taken_0x18ec4c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x18ec4c) {
            ctx->pc = 0x18EC5Cu;
            goto label_18ec5c;
        }
    }
    ctx->pc = 0x18EC54u;
    // 0x18ec54: 0x10000007
    ctx->pc = 0x18EC54u;
    {
        const bool branch_taken_0x18ec54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18EC58u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18ec54) {
            ctx->pc = 0x18EC74u;
            goto label_18ec74;
        }
    }
    ctx->pc = 0x18EC5Cu;
label_18ec5c:
    // 0x18ec5c: 0x43102a
    ctx->pc = 0x18ec5cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x18ec60: 0x14400004
    ctx->pc = 0x18EC60u;
    {
        const bool branch_taken_0x18ec60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x18ec60) {
            ctx->pc = 0x18EC74u;
            goto label_18ec74;
        }
    }
    ctx->pc = 0x18EC68u;
    // 0x18ec68: 0x2462ffff
    ctx->pc = 0x18ec68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18ec6c: 0x23c3c
    ctx->pc = 0x18ec6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18ec70: 0x73c3f
    ctx->pc = 0x18ec70u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
label_18ec74:
    // 0x18ec74: 0x71c3c
    ctx->pc = 0x18ec74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 16));
    // 0x18ec78: 0x31c3f
    ctx->pc = 0x18ec78u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x18ec7c: 0x31080
    ctx->pc = 0x18ec7cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x18ec80: 0x431021
    ctx->pc = 0x18ec80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18ec84: 0x21080
    ctx->pc = 0x18ec84u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x18ec88: 0x1024021
    ctx->pc = 0x18ec88u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_18ec8c:
    // 0x18ec8c: 0xc5010008
    ctx->pc = 0x18ec8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ec90: 0x460c0832
    ctx->pc = 0x18ec90u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ec94: 0x45000005
    ctx->pc = 0x18EC94u;
    {
        const bool branch_taken_0x18ec94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ec94) {
            ctx->pc = 0x18ECACu;
            goto label_18ecac;
        }
    }
    ctx->pc = 0x18EC9Cu;
    // 0x18ec9c: 0xaca80000
    ctx->pc = 0x18ec9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x18eca0: 0xe0102d
    ctx->pc = 0x18eca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eca4: 0x10000019
    ctx->pc = 0x18ECA4u;
    {
        const bool branch_taken_0x18eca4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18ECA8u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x18eca4) {
            ctx->pc = 0x18ED0Cu;
            goto label_18ed0c;
        }
    }
    ctx->pc = 0x18ECACu;
label_18ecac:
    // 0x18ecac: 0x460c0834
    ctx->pc = 0x18ecacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ecb0: 0x4500000a
    ctx->pc = 0x18ECB0u;
    {
        const bool branch_taken_0x18ecb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ecb0) {
            ctx->pc = 0x18ECDCu;
            goto label_18ecdc;
        }
    }
    ctx->pc = 0x18ECB8u;
    // 0x18ecb8: 0xc500001c
    ctx->pc = 0x18ecb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ecbc: 0x46006034
    ctx->pc = 0x18ecbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ecc0: 0x45000006
    ctx->pc = 0x18ECC0u;
    {
        const bool branch_taken_0x18ecc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ecc0) {
            ctx->pc = 0x18ECDCu;
            goto label_18ecdc;
        }
    }
    ctx->pc = 0x18ECC8u;
    // 0x18ecc8: 0xaca80000
    ctx->pc = 0x18ecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x18eccc: 0x25020014
    ctx->pc = 0x18ecccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 8), 20));
    // 0x18ecd0: 0xacc20000
    ctx->pc = 0x18ecd0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x18ecd4: 0x1000000d
    ctx->pc = 0x18ECD4u;
    {
        const bool branch_taken_0x18ecd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18ECD8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18ecd4) {
            ctx->pc = 0x18ED0Cu;
            goto label_18ed0c;
        }
    }
    ctx->pc = 0x18ECDCu;
label_18ecdc:
    // 0x18ecdc: 0x46016034
    ctx->pc = 0x18ecdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ece0: 0x45000006
    ctx->pc = 0x18ECE0u;
    {
        const bool branch_taken_0x18ece0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18ECE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 1));
        if (branch_taken_0x18ece0) {
            ctx->pc = 0x18ECFCu;
            goto label_18ecfc;
        }
    }
    ctx->pc = 0x18ECE8u;
    // 0x18ece8: 0x24e2ffff
    ctx->pc = 0x18ece8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x18ecec: 0x2508ffec
    ctx->pc = 0x18ececu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967276));
    // 0x18ecf0: 0x23c3c
    ctx->pc = 0x18ecf0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18ecf4: 0x1000ffe5
    ctx->pc = 0x18ECF4u;
    {
        const bool branch_taken_0x18ecf4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18ECF8u;
        SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
        if (branch_taken_0x18ecf4) {
            ctx->pc = 0x18EC8Cu;
            goto label_18ec8c;
        }
    }
    ctx->pc = 0x18ECFCu;
label_18ecfc:
    // 0x18ecfc: 0x25080014
    ctx->pc = 0x18ecfcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 20));
    // 0x18ed00: 0x23c3c
    ctx->pc = 0x18ed00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18ed04: 0x1000ffe1
    ctx->pc = 0x18ED04u;
    {
        const bool branch_taken_0x18ed04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18ED08u;
        SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
        if (branch_taken_0x18ed04) {
            ctx->pc = 0x18EC8Cu;
            goto label_18ec8c;
        }
    }
    ctx->pc = 0x18ED0Cu;
label_18ed0c:
    // 0x18ed0c: 0x3e00008
    ctx->pc = 0x18ED0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18EBE8u: goto label_18ebe8;
            case 0x18EBF8u: goto label_18ebf8;
            case 0x18EC44u: goto label_18ec44;
            case 0x18EC5Cu: goto label_18ec5c;
            case 0x18EC74u: goto label_18ec74;
            case 0x18EC8Cu: goto label_18ec8c;
            case 0x18ECACu: goto label_18ecac;
            case 0x18ECDCu: goto label_18ecdc;
            case 0x18ECFCu: goto label_18ecfc;
            case 0x18ED0Cu: goto label_18ed0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18ED14u;
    // 0x18ed14: 0x0
    ctx->pc = 0x18ed14u;
    // NOP
    // 0x18ed18: 0x0
    ctx->pc = 0x18ed18u;
    // NOP
    // 0x18ed1c: 0x0
    ctx->pc = 0x18ed1cu;
    // NOP
}
