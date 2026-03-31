#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C5EC0
// Address: 0x1c5ec0 - 0x1c60c0
void sub_001C5EC0_0x1c5ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c5ec0u;

    // 0x1c5ec0: 0x8c860000
    ctx->pc = 0x1c5ec0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c5ec4: 0x8ca30000
    ctx->pc = 0x1c5ec4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c5ec8: 0xac830000
    ctx->pc = 0x1c5ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1c5ecc: 0x3e00008
    ctx->pc = 0x1C5ECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5ED0u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C5F64u: goto label_1c5f64;
            case 0x1C5F88u: goto label_1c5f88;
            case 0x1C5F8Cu: goto label_1c5f8c;
            case 0x1C5F94u: goto label_1c5f94;
            case 0x1C5FBCu: goto label_1c5fbc;
            case 0x1C5FDCu: goto label_1c5fdc;
            case 0x1C5FE4u: goto label_1c5fe4;
            case 0x1C6040u: goto label_1c6040;
            case 0x1C6044u: goto label_1c6044;
            case 0x1C607Cu: goto label_1c607c;
            case 0x1C608Cu: goto label_1c608c;
            case 0x1C60A8u: goto label_1c60a8;
            case 0x1C60ACu: goto label_1c60ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C5ED4u;
    // 0x1c5ed4: 0x0
    ctx->pc = 0x1c5ed4u;
    // NOP
    // 0x1c5ed8: 0x0
    ctx->pc = 0x1c5ed8u;
    // NOP
    // 0x1c5edc: 0x0
    ctx->pc = 0x1c5edcu;
    // NOP
    // 0x1c5ee0: 0x27bdffe0
    ctx->pc = 0x1c5ee0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c5ee4: 0x3c050033
    ctx->pc = 0x1c5ee4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)51 << 16));
    // 0x1c5ee8: 0xffbf0010
    ctx->pc = 0x1c5ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c5eec: 0x24a58f20
    ctx->pc = 0x1c5eecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294938400));
    // 0x1c5ef0: 0x7fb00000
    ctx->pc = 0x1c5ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c5ef4: 0x24062000
    ctx->pc = 0x1c5ef4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1c5ef8: 0xa48001cc
    ctx->pc = 0x1c5ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 460), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c5efc: 0xc07224c
    ctx->pc = 0x1C5EFCu;
    SET_GPR_U32(ctx, 31, 0x1C5F04u);
    ctx->pc = 0x1C5F00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C8930u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8930_0x1c8930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5F04u; }
    }
    if (ctx->pc != 0x1C5F04u) { return; }
    ctx->pc = 0x1C5F04u;
    // 0x1c5f04: 0x3c050032
    ctx->pc = 0x1c5f04u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x1c5f08: 0x26040014
    ctx->pc = 0x1c5f08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 20));
    // 0x1c5f0c: 0x24a56f20
    ctx->pc = 0x1c5f0cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 28448));
    // 0x1c5f10: 0xc07224c
    ctx->pc = 0x1C5F10u;
    SET_GPR_U32(ctx, 31, 0x1C5F18u);
    ctx->pc = 0x1C5F14u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8192));
    ctx->pc = 0x1C8930u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8930_0x1c8930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5F18u; }
    }
    if (ctx->pc != 0x1C5F18u) { return; }
    ctx->pc = 0x1C5F18u;
    // 0x1c5f18: 0xc0720b4
    ctx->pc = 0x1C5F18u;
    SET_GPR_U32(ctx, 31, 0x1C5F20u);
    ctx->pc = 0x1C5F1Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 40));
    ctx->pc = 0x1C82D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C82D0_0x1c82d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5F20u; }
    }
    if (ctx->pc != 0x1C5F20u) { return; }
    ctx->pc = 0x1C5F20u;
    // 0x1c5f20: 0xdfbf0010
    ctx->pc = 0x1c5f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5f24: 0x7bb00000
    ctx->pc = 0x1c5f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5f28: 0x3e00008
    ctx->pc = 0x1C5F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5F2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C5F64u: goto label_1c5f64;
            case 0x1C5F88u: goto label_1c5f88;
            case 0x1C5F8Cu: goto label_1c5f8c;
            case 0x1C5F94u: goto label_1c5f94;
            case 0x1C5FBCu: goto label_1c5fbc;
            case 0x1C5FDCu: goto label_1c5fdc;
            case 0x1C5FE4u: goto label_1c5fe4;
            case 0x1C6040u: goto label_1c6040;
            case 0x1C6044u: goto label_1c6044;
            case 0x1C607Cu: goto label_1c607c;
            case 0x1C608Cu: goto label_1c608c;
            case 0x1C60A8u: goto label_1c60a8;
            case 0x1C60ACu: goto label_1c60ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C5F30u;
    // 0x1c5f30: 0x27bdffc0
    ctx->pc = 0x1c5f30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c5f34: 0xffbf0030
    ctx->pc = 0x1c5f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c5f38: 0x7fb20020
    ctx->pc = 0x1c5f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c5f3c: 0x7fb10010
    ctx->pc = 0x1c5f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c5f40: 0x80902d
    ctx->pc = 0x1c5f40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5f44: 0x7fb00000
    ctx->pc = 0x1c5f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c5f48: 0xa0882d
    ctx->pc = 0x1c5f48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5f4c: 0x8c9001ac
    ctx->pc = 0x1c5f4cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 428)));
    // 0x1c5f50: 0x2625000c
    ctx->pc = 0x1c5f50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 12));
    // 0x1c5f54: 0x16200003
    ctx->pc = 0x1C5F54u;
    {
        const bool branch_taken_0x1c5f54 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C5F58u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 12));
        if (branch_taken_0x1c5f54) {
            ctx->pc = 0x1C5F64u;
            goto label_1c5f64;
        }
    }
    ctx->pc = 0x1C5F5Cu;
    // 0x1c5f5c: 0x10000052
    ctx->pc = 0x1C5F5Cu;
    {
        const bool branch_taken_0x1c5f5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C5F60u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c5f5c) {
            ctx->pc = 0x1C60A8u;
            goto label_1c60a8;
        }
    }
    ctx->pc = 0x1C5F64u;
label_1c5f64:
    // 0x1c5f64: 0x96220000
    ctx->pc = 0x1c5f64u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c5f68: 0x10400008
    ctx->pc = 0x1C5F68u;
    {
        const bool branch_taken_0x1c5f68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C5F6Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c5f68) {
            ctx->pc = 0x1C5F8Cu;
            goto label_1c5f8c;
        }
    }
    ctx->pc = 0x1C5F70u;
    // 0x1c5f70: 0x92280003
    ctx->pc = 0x1c5f70u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x1c5f74: 0x11000004
    ctx->pc = 0x1C5F74u;
    {
        const bool branch_taken_0x1c5f74 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c5f74) {
            ctx->pc = 0x1C5F88u;
            goto label_1c5f88;
        }
    }
    ctx->pc = 0x1C5F7Cu;
    // 0x1c5f7c: 0x96220008
    ctx->pc = 0x1c5f7cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c5f80: 0x14400004
    ctx->pc = 0x1C5F80u;
    {
        const bool branch_taken_0x1c5f80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c5f80) {
            ctx->pc = 0x1C5F94u;
            goto label_1c5f94;
        }
    }
    ctx->pc = 0x1C5F88u;
label_1c5f88:
    // 0x1c5f88: 0x102d
    ctx->pc = 0x1c5f88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c5f8c:
    // 0x1c5f8c: 0x10000047
    ctx->pc = 0x1C5F8Cu;
    {
        const bool branch_taken_0x1c5f8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C5F90u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x1c5f8c) {
            ctx->pc = 0x1C60ACu;
            goto label_1c60ac;
        }
    }
    ctx->pc = 0x1C5F94u;
label_1c5f94:
    // 0x1c5f94: 0x964701b4
    ctx->pc = 0x1c5f94u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x1c5f98: 0x964301b0
    ctx->pc = 0x1c5f98u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x1c5f9c: 0x8e4201a8
    ctx->pc = 0x1c5f9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 424)));
    // 0x1c5fa0: 0x2073021
    ctx->pc = 0x1c5fa0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1c5fa4: 0x431021
    ctx->pc = 0x1c5fa4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c5fa8: 0x46082b
    ctx->pc = 0x1c5fa8u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1c5fac: 0x10200003
    ctx->pc = 0x1C5FACu;
    {
        const bool branch_taken_0x1c5fac = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C5FB0u;
        SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 8), 255));
        if (branch_taken_0x1c5fac) {
            ctx->pc = 0x1C5FBCu;
            goto label_1c5fbc;
        }
    }
    ctx->pc = 0x1C5FB4u;
    // 0x1c5fb4: 0x1000003c
    ctx->pc = 0x1C5FB4u;
    {
        const bool branch_taken_0x1c5fb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C5FB8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c5fb4) {
            ctx->pc = 0x1C60A8u;
            goto label_1c60a8;
        }
    }
    ctx->pc = 0x1C5FBCu;
label_1c5fbc:
    // 0x1c5fbc: 0x24e2fff4
    ctx->pc = 0x1c5fbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 4294967284));
    // 0x1c5fc0: 0x46082a
    ctx->pc = 0x1c5fc0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 6)));
    // 0x1c5fc4: 0x14200005
    ctx->pc = 0x1C5FC4u;
    {
        const bool branch_taken_0x1c5fc4 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C5FC8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c5fc4) {
            ctx->pc = 0x1C5FDCu;
            goto label_1c5fdc;
        }
    }
    ctx->pc = 0x1C5FCCu;
    // 0x1c5fcc: 0xc041eac
    ctx->pc = 0x1C5FCCu;
    SET_GPR_U32(ctx, 31, 0x1C5FD4u);
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5FD4u; }
    }
    if (ctx->pc != 0x1C5FD4u) { return; }
    ctx->pc = 0x1C5FD4u;
    // 0x1c5fd4: 0x10000003
    ctx->pc = 0x1C5FD4u;
    {
        const bool branch_taken_0x1c5fd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C5FD8u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        if (branch_taken_0x1c5fd4) {
            ctx->pc = 0x1C5FE4u;
            goto label_1c5fe4;
        }
    }
    ctx->pc = 0x1C5FDCu;
label_1c5fdc:
    // 0x1c5fdc: 0x10000032
    ctx->pc = 0x1C5FDCu;
    {
        const bool branch_taken_0x1c5fdc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c5fdc) {
            ctx->pc = 0x1C60A8u;
            goto label_1c60a8;
        }
    }
    ctx->pc = 0x1C5FE4u;
label_1c5fe4:
    // 0x1c5fe4: 0x240202d
    ctx->pc = 0x1c5fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5fe8: 0xa6020000
    ctx->pc = 0x1c5fe8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c5fec: 0x92220002
    ctx->pc = 0x1c5fecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1c5ff0: 0xa2020002
    ctx->pc = 0x1c5ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c5ff4: 0x92220003
    ctx->pc = 0x1c5ff4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x1c5ff8: 0x2442000c
    ctx->pc = 0x1c5ff8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12));
    // 0x1c5ffc: 0xa2020003
    ctx->pc = 0x1c5ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c6000: 0x8e220004
    ctx->pc = 0x1c6000u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c6004: 0xae020004
    ctx->pc = 0x1c6004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1c6008: 0x96220008
    ctx->pc = 0x1c6008u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c600c: 0xa6020008
    ctx->pc = 0x1c600cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c6010: 0x9222000a
    ctx->pc = 0x1c6010u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1c6014: 0xa202000a
    ctx->pc = 0x1c6014u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c6018: 0x9222000b
    ctx->pc = 0x1c6018u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
    // 0x1c601c: 0x304200e0
    ctx->pc = 0x1c601cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 224));
    // 0x1c6020: 0xc07199c
    ctx->pc = 0x1C6020u;
    SET_GPR_U32(ctx, 31, 0x1C6028u);
    ctx->pc = 0x1C6024u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 2), 255));
    ctx->pc = 0x1C6670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6670_0x1c6670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6028u; }
    }
    if (ctx->pc != 0x1C6028u) { return; }
    ctx->pc = 0x1C6028u;
    // 0x1c6028: 0x304300ff
    ctx->pc = 0x1c6028u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x1c602c: 0x240200ff
    ctx->pc = 0x1c602cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1c6030: 0x10620003
    ctx->pc = 0x1C6030u;
    {
        const bool branch_taken_0x1c6030 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1c6030) {
            ctx->pc = 0x1C6040u;
            goto label_1c6040;
        }
    }
    ctx->pc = 0x1C6038u;
    // 0x1c6038: 0x10000002
    ctx->pc = 0x1C6038u;
    {
        const bool branch_taken_0x1c6038 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C603Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 31));
        if (branch_taken_0x1c6038) {
            ctx->pc = 0x1C6044u;
            goto label_1c6044;
        }
    }
    ctx->pc = 0x1C6040u;
label_1c6040:
    // 0x1c6040: 0x102d
    ctx->pc = 0x1c6040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6044:
    // 0x1c6044: 0x304300ff
    ctx->pc = 0x1c6044u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x1c6048: 0x322200ff
    ctx->pc = 0x1c6048u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 255));
    // 0x1c604c: 0x431025
    ctx->pc = 0x1c604cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c6050: 0xa202000b
    ctx->pc = 0x1c6050u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c6054: 0x964301b4
    ctx->pc = 0x1c6054u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x1c6058: 0x8e4201ac
    ctx->pc = 0x1c6058u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 428)));
    // 0x1c605c: 0x431021
    ctx->pc = 0x1c605cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c6060: 0xae4201ac
    ctx->pc = 0x1c6060u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 428), GPR_U32(ctx, 2));
    // 0x1c6064: 0x92040003
    ctx->pc = 0x1c6064u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1c6068: 0x4810004
    ctx->pc = 0x1C6068u;
    {
        const bool branch_taken_0x1c6068 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1C606Cu;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 3));
        if (branch_taken_0x1c6068) {
            ctx->pc = 0x1C607Cu;
            goto label_1c607c;
        }
    }
    ctx->pc = 0x1C6070u;
    // 0x1c6070: 0x10600002
    ctx->pc = 0x1C6070u;
    {
        const bool branch_taken_0x1c6070 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c6070) {
            ctx->pc = 0x1C607Cu;
            goto label_1c607c;
        }
    }
    ctx->pc = 0x1C6078u;
    // 0x1c6078: 0x2463fffc
    ctx->pc = 0x1c6078u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967292));
label_1c607c:
    // 0x1c607c: 0x10600003
    ctx->pc = 0x1C607Cu;
    {
        const bool branch_taken_0x1c607c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C6080u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1c607c) {
            ctx->pc = 0x1C608Cu;
            goto label_1c608c;
        }
    }
    ctx->pc = 0x1C6084u;
    // 0x1c6084: 0x431023
    ctx->pc = 0x1c6084u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c6088: 0x822021
    ctx->pc = 0x1c6088u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1c608c:
    // 0x1c608c: 0x8e4301c8
    ctx->pc = 0x1c608cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 456)));
    // 0x1c6090: 0x24020001
    ctx->pc = 0x1c6090u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6094: 0x641821
    ctx->pc = 0x1c6094u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c6098: 0xae4301c8
    ctx->pc = 0x1c6098u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 456), GPR_U32(ctx, 3));
    // 0x1c609c: 0x924301c4
    ctx->pc = 0x1c609cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 452)));
    // 0x1c60a0: 0x24630001
    ctx->pc = 0x1c60a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c60a4: 0xa24301c4
    ctx->pc = 0x1c60a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 452), (uint8_t)GPR_U32(ctx, 3));
label_1c60a8:
    // 0x1c60a8: 0xdfbf0030
    ctx->pc = 0x1c60a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c60ac:
    // 0x1c60ac: 0x7bb20020
    ctx->pc = 0x1c60acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c60b0: 0x7bb10010
    ctx->pc = 0x1c60b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c60b4: 0x7bb00000
    ctx->pc = 0x1c60b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c60b8: 0x3e00008
    ctx->pc = 0x1C60B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C60BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C5F64u: goto label_1c5f64;
            case 0x1C5F88u: goto label_1c5f88;
            case 0x1C5F8Cu: goto label_1c5f8c;
            case 0x1C5F94u: goto label_1c5f94;
            case 0x1C5FBCu: goto label_1c5fbc;
            case 0x1C5FDCu: goto label_1c5fdc;
            case 0x1C5FE4u: goto label_1c5fe4;
            case 0x1C6040u: goto label_1c6040;
            case 0x1C6044u: goto label_1c6044;
            case 0x1C607Cu: goto label_1c607c;
            case 0x1C608Cu: goto label_1c608c;
            case 0x1C60A8u: goto label_1c60a8;
            case 0x1C60ACu: goto label_1c60ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C60C0u;
}
