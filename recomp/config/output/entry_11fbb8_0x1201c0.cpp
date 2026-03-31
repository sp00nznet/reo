#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_11fbb8
// Address: 0x11fbb8 - 0x1201c0
void entry_11fbb8_0x1201c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11fbb8u;

    // 0x11fbb8: 0x27bdffb0
    ctx->pc = 0x11fbb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11fbbc: 0x80182d
    ctx->pc = 0x11fbbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fbc0: 0xffb00000
    ctx->pc = 0x11fbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11fbc4: 0xffb10008
    ctx->pc = 0x11fbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11fbc8: 0xffb20010
    ctx->pc = 0x11fbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11fbcc: 0xffb30018
    ctx->pc = 0x11fbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x11fbd0: 0xffb40020
    ctx->pc = 0x11fbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x11fbd4: 0xffb50028
    ctx->pc = 0x11fbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x11fbd8: 0xffb60030
    ctx->pc = 0x11fbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x11fbdc: 0xffb70038
    ctx->pc = 0x11fbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x11fbe0: 0xffbe0040
    ctx->pc = 0x11fbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x11fbe4: 0xffbf0048
    ctx->pc = 0x11fbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x11fbe8: 0x60102d
    ctx->pc = 0x11fbe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fbec: 0x2283c
    ctx->pc = 0x11fbecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11fbf0: 0x5283f
    ctx->pc = 0x11fbf0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x11fbf4: 0x2983f
    ctx->pc = 0x11fbf4u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11fbf8: 0x3c02000f
    ctx->pc = 0x11fbf8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15 << 16));
    // 0x11fbfc: 0x3442ffff
    ctx->pc = 0x11fbfcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x11fc00: 0x53102a
    ctx->pc = 0x11fc00u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 19)));
    // 0x11fc04: 0x1440001e
    ctx->pc = 0x11FC04u;
    {
        const bool branch_taken_0x11fc04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11FC08u;
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11fc04) {
            ctx->pc = 0x11FC80u;
            goto label_11fc80;
        }
    }
    ctx->pc = 0x11FC0Cu;
    // 0x11fc0c: 0x3c027fff
    ctx->pc = 0x11fc0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x11fc10: 0x3442ffff
    ctx->pc = 0x11fc10u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x11fc14: 0x2621024
    ctx->pc = 0x11fc14u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x11fc18: 0x451025
    ctx->pc = 0x11fc18u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11fc1c: 0x14400006
    ctx->pc = 0x11FC1Cu;
    {
        const bool branch_taken_0x11fc1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11FC20u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x11fc1c) {
            ctx->pc = 0x11FC38u;
            goto label_11fc38;
        }
    }
    ctx->pc = 0x11FC24u;
    // 0x11fc24: 0x3c030024
    ctx->pc = 0x11fc24u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x11fc28: 0xdc628d60
    ctx->pc = 0x11fc28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4294937952)));
    // 0x11fc2c: 0x1000015a
    ctx->pc = 0x11FC2Cu;
    {
        const bool branch_taken_0x11fc2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11FC30u;
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x11fc2c) {
            ctx->pc = 0x120198u;
            goto label_120198;
        }
    }
    ctx->pc = 0x11FC34u;
    // 0x11fc34: 0x0
    ctx->pc = 0x11fc34u;
    // NOP
label_11fc38:
    // 0x11fc38: 0x661000b
    ctx->pc = 0x11FC38u;
    {
        const bool branch_taken_0x11fc38 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x11fc38) {
            ctx->pc = 0x11FC68u;
            goto label_11fc68;
        }
    }
    ctx->pc = 0x11FC40u;
    // 0x11fc40: 0x60282d
    ctx->pc = 0x11fc40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fc44: 0xc044752
    ctx->pc = 0x11FC44u;
    SET_GPR_U32(ctx, 31, 0x11FC4Cu);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FC4Cu; }
    }
    if (ctx->pc != 0x11FC4Cu) { return; }
    ctx->pc = 0x11FC4Cu;
    // 0x11fc4c: 0x282d
    ctx->pc = 0x11fc4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fc50: 0x40202d
    ctx->pc = 0x11fc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fc54: 0xc04480e
    ctx->pc = 0x11FC54u;
    SET_GPR_U32(ctx, 31, 0x11FC5Cu);
    ctx->pc = 0x112038u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112038_0x112038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FC5Cu; }
    }
    if (ctx->pc != 0x11FC5Cu) { return; }
    ctx->pc = 0x11FC5Cu;
    // 0x11fc5c: 0x1000014d
    ctx->pc = 0x11FC5Cu;
    {
        const bool branch_taken_0x11fc5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11FC60u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x11fc5c) {
            ctx->pc = 0x120194u;
            goto label_120194;
        }
    }
    ctx->pc = 0x11FC64u;
    // 0x11fc64: 0x0
    ctx->pc = 0x11fc64u;
    // NOP
label_11fc68:
    // 0x11fc68: 0x340586a0
    ctx->pc = 0x11fc68u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 34464));
    // 0x11fc6c: 0x52bfc
    ctx->pc = 0x11fc6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x11fc70: 0xc04476c
    ctx->pc = 0x11FC70u;
    SET_GPR_U32(ctx, 31, 0x11FC78u);
    ctx->pc = 0x11FC74u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 4294967242));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FC78u; }
    }
    if (ctx->pc != 0x11FC78u) { return; }
    ctx->pc = 0x11FC78u;
    // 0x11fc78: 0x40182d
    ctx->pc = 0x11fc78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fc7c: 0x2983f
    ctx->pc = 0x11fc7cu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 2) >> (32 + 0));
label_11fc80:
    // 0x11fc80: 0x3c027fef
    ctx->pc = 0x11fc80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32751 << 16));
    // 0x11fc84: 0x3442ffff
    ctx->pc = 0x11fc84u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x11fc88: 0x53102a
    ctx->pc = 0x11fc88u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 19)));
    // 0x11fc8c: 0x50400008
    ctx->pc = 0x11FC8Cu;
    {
        const bool branch_taken_0x11fc8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x11fc8c) {
            ctx->pc = 0x11FC90u;
            SET_GPR_U32(ctx, 16, ((uint32_t)15 << 16));
            ctx->pc = 0x11FCB0u;
            goto label_11fcb0;
        }
    }
    ctx->pc = 0x11FC94u;
    // 0x11fc94: 0x60202d
    ctx->pc = 0x11fc94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fc98: 0x80282d
    ctx->pc = 0x11fc98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fc9c: 0xc04473c
    ctx->pc = 0x11FC9Cu;
    SET_GPR_U32(ctx, 31, 0x11FCA4u);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FCA4u; }
    }
    if (ctx->pc != 0x11FCA4u) { return; }
    ctx->pc = 0x11FCA4u;
    // 0x11fca4: 0x1000013b
    ctx->pc = 0x11FCA4u;
    {
        const bool branch_taken_0x11fca4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11FCA8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x11fca4) {
            ctx->pc = 0x120194u;
            goto label_120194;
        }
    }
    ctx->pc = 0x11FCACu;
    // 0x11fcac: 0x0
    ctx->pc = 0x11fcacu;
    // NOP
label_11fcb0:
    // 0x11fcb0: 0x131503
    ctx->pc = 0x11fcb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 19), 20));
    // 0x11fcb4: 0x3610ffff
    ctx->pc = 0x11fcb4u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 65535));
    // 0x11fcb8: 0x3c21021
    ctx->pc = 0x11fcb8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x11fcbc: 0x2709824
    ctx->pc = 0x11fcbcu;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x11fcc0: 0x3c050010
    ctx->pc = 0x11fcc0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)16 << 16));
    // 0x11fcc4: 0x3c040009
    ctx->pc = 0x11fcc4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)9 << 16));
    // 0x11fcc8: 0x34845f64
    ctx->pc = 0x11fcc8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 24420));
    // 0x11fccc: 0x932021
    ctx->pc = 0x11fcccu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x11fcd0: 0x245efc01
    ctx->pc = 0x11fcd0u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 4294966273));
    // 0x11fcd4: 0x85b024
    ctx->pc = 0x11fcd4u;
    SET_GPR_U32(ctx, 22, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x11fcd8: 0x3c023ff0
    ctx->pc = 0x11fcd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16368 << 16));
    // 0x11fcdc: 0x3c04ffff
    ctx->pc = 0x11fcdcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
    // 0x11fce0: 0x4203e
    ctx->pc = 0x11fce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x11fce4: 0x2c21026
    ctx->pc = 0x11fce4u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x11fce8: 0x641824
    ctx->pc = 0x11fce8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11fcec: 0x531025
    ctx->pc = 0x11fcecu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x11fcf0: 0x2103c
    ctx->pc = 0x11fcf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11fcf4: 0x621825
    ctx->pc = 0x11fcf4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11fcf8: 0x163503
    ctx->pc = 0x11fcf8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 22), 20));
    // 0x11fcfc: 0x3405ffc0
    ctx->pc = 0x11fcfcu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65472));
    // 0x11fd00: 0x52bbc
    ctx->pc = 0x11fd00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x11fd04: 0x60202d
    ctx->pc = 0x11fd04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fd08: 0xc044752
    ctx->pc = 0x11FD08u;
    SET_GPR_U32(ctx, 31, 0x11FD10u);
    ctx->pc = 0x11FD0Cu;
    SET_GPR_U32(ctx, 30, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FD10u; }
    }
    if (ctx->pc != 0x11FD10u) { return; }
    ctx->pc = 0x11FD10u;
    // 0x11fd10: 0x40a02d
    ctx->pc = 0x11fd10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fd14: 0x26620002
    ctx->pc = 0x11fd14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 2));
    // 0x11fd18: 0x501024
    ctx->pc = 0x11fd18u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x11fd1c: 0x28420003
    ctx->pc = 0x11fd1cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 3));
    // 0x11fd20: 0x10400055
    ctx->pc = 0x11FD20u;
    {
        const bool branch_taken_0x11fd20 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x11fd20) {
            ctx->pc = 0x11FE78u;
            goto label_11fe78;
        }
    }
    ctx->pc = 0x11FD28u;
    // 0x11fd28: 0x802d
    ctx->pc = 0x11fd28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fd2c: 0x280202d
    ctx->pc = 0x11fd2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fd30: 0x200282d
    ctx->pc = 0x11fd30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fd34: 0xc0448a6
    ctx->pc = 0x11FD34u;
    SET_GPR_U32(ctx, 31, 0x11FD3Cu);
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FD3Cu; }
    }
    if (ctx->pc != 0x11FD3Cu) { return; }
    ctx->pc = 0x11FD3Cu;
    // 0x11fd3c: 0x14400018
    ctx->pc = 0x11FD3Cu;
    {
        const bool branch_taken_0x11fd3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11fd3c) {
            ctx->pc = 0x11FDA0u;
            goto label_11fda0;
        }
    }
    ctx->pc = 0x11FD44u;
    // 0x11fd44: 0x200102d
    ctx->pc = 0x11fd44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fd48: 0x53c00112
    ctx->pc = 0x11FD48u;
    {
        const bool branch_taken_0x11fd48 = (GPR_U32(ctx, 30) == GPR_U32(ctx, 0));
        if (branch_taken_0x11fd48) {
            ctx->pc = 0x11FD4Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x120194u;
            goto label_120194;
        }
    }
    ctx->pc = 0x11FD50u;
    // 0x11fd50: 0xc0448ba
    ctx->pc = 0x11FD50u;
    SET_GPR_U32(ctx, 31, 0x11FD58u);
    ctx->pc = 0x11FD54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FD58u; }
    }
    if (ctx->pc != 0x11FD58u) { return; }
    ctx->pc = 0x11FD58u;
    // 0x11fd58: 0x3c010024
    ctx->pc = 0x11fd58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x11fd5c: 0xdc258d68
    ctx->pc = 0x11fd5cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937960)));
    // 0x11fd60: 0x40a82d
    ctx->pc = 0x11fd60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fd64: 0x2a0202d
    ctx->pc = 0x11fd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fd68: 0xc04476c
    ctx->pc = 0x11FD68u;
    SET_GPR_U32(ctx, 31, 0x11FD70u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FD70u; }
    }
    if (ctx->pc != 0x11FD70u) { return; }
    ctx->pc = 0x11FD70u;
    // 0x11fd70: 0x2a0202d
    ctx->pc = 0x11fd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fd74: 0x3c010024
    ctx->pc = 0x11fd74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x11fd78: 0xdc258d70
    ctx->pc = 0x11fd78u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937968)));
    // 0x11fd7c: 0x40802d
    ctx->pc = 0x11fd7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fd80: 0xc04476c
    ctx->pc = 0x11FD80u;
    SET_GPR_U32(ctx, 31, 0x11FD88u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FD88u; }
    }
    if (ctx->pc != 0x11FD88u) { return; }
    ctx->pc = 0x11FD88u;
    // 0x11fd88: 0x200202d
    ctx->pc = 0x11fd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fd8c: 0x40282d
    ctx->pc = 0x11fd8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fd90: 0xc04473c
    ctx->pc = 0x11FD90u;
    SET_GPR_U32(ctx, 31, 0x11FD98u);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FD98u; }
    }
    if (ctx->pc != 0x11FD98u) { return; }
    ctx->pc = 0x11FD98u;
    // 0x11fd98: 0x100000fe
    ctx->pc = 0x11FD98u;
    {
        const bool branch_taken_0x11fd98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11FD9Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x11fd98) {
            ctx->pc = 0x120194u;
            goto label_120194;
        }
    }
    ctx->pc = 0x11FDA0u;
label_11fda0:
    // 0x11fda0: 0x280282d
    ctx->pc = 0x11fda0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fda4: 0x280202d
    ctx->pc = 0x11fda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fda8: 0xc04476c
    ctx->pc = 0x11FDA8u;
    SET_GPR_U32(ctx, 31, 0x11FDB0u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FDB0u; }
    }
    if (ctx->pc != 0x11FDB0u) { return; }
    ctx->pc = 0x11FDB0u;
    // 0x11fdb0: 0x280202d
    ctx->pc = 0x11fdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fdb4: 0x3c010024
    ctx->pc = 0x11fdb4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x11fdb8: 0xdc258d78
    ctx->pc = 0x11fdb8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937976)));
    // 0x11fdbc: 0x40802d
    ctx->pc = 0x11fdbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fdc0: 0xc04476c
    ctx->pc = 0x11FDC0u;
    SET_GPR_U32(ctx, 31, 0x11FDC8u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FDC8u; }
    }
    if (ctx->pc != 0x11FDC8u) { return; }
    ctx->pc = 0x11FDC8u;
    // 0x11fdc8: 0x3404ff80
    ctx->pc = 0x11fdc8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 65408));
    // 0x11fdcc: 0x423bc
    ctx->pc = 0x11fdccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x11fdd0: 0x40282d
    ctx->pc = 0x11fdd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fdd4: 0xc044752
    ctx->pc = 0x11FDD4u;
    SET_GPR_U32(ctx, 31, 0x11FDDCu);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FDDCu; }
    }
    if (ctx->pc != 0x11FDDCu) { return; }
    ctx->pc = 0x11FDDCu;
    // 0x11fddc: 0x200202d
    ctx->pc = 0x11fddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fde0: 0x40282d
    ctx->pc = 0x11fde0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fde4: 0xc04476c
    ctx->pc = 0x11FDE4u;
    SET_GPR_U32(ctx, 31, 0x11FDECu);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FDECu; }
    }
    if (ctx->pc != 0x11FDECu) { return; }
    ctx->pc = 0x11FDECu;
    // 0x11fdec: 0x40902d
    ctx->pc = 0x11fdecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fdf0: 0x17c00007
    ctx->pc = 0x11FDF0u;
    {
        const bool branch_taken_0x11fdf0 = (GPR_U32(ctx, 30) != GPR_U32(ctx, 0));
        if (branch_taken_0x11fdf0) {
            ctx->pc = 0x11FE10u;
            goto label_11fe10;
        }
    }
    ctx->pc = 0x11FDF8u;
    // 0x11fdf8: 0x280202d
    ctx->pc = 0x11fdf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fdfc: 0x240282d
    ctx->pc = 0x11fdfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe00: 0xc044752
    ctx->pc = 0x11FE00u;
    SET_GPR_U32(ctx, 31, 0x11FE08u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FE08u; }
    }
    if (ctx->pc != 0x11FE08u) { return; }
    ctx->pc = 0x11FE08u;
    // 0x11fe08: 0x100000e2
    ctx->pc = 0x11FE08u;
    {
        const bool branch_taken_0x11fe08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11FE0Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x11fe08) {
            ctx->pc = 0x120194u;
            goto label_120194;
        }
    }
    ctx->pc = 0x11FE10u;
label_11fe10:
    // 0x11fe10: 0xc0448ba
    ctx->pc = 0x11FE10u;
    SET_GPR_U32(ctx, 31, 0x11FE18u);
    ctx->pc = 0x11FE14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FE18u; }
    }
    if (ctx->pc != 0x11FE18u) { return; }
    ctx->pc = 0x11FE18u;
    // 0x11fe18: 0x3c010024
    ctx->pc = 0x11fe18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x11fe1c: 0xdc258d80
    ctx->pc = 0x11fe1cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937984)));
    // 0x11fe20: 0x40a82d
    ctx->pc = 0x11fe20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe24: 0x2a0202d
    ctx->pc = 0x11fe24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe28: 0xc04476c
    ctx->pc = 0x11FE28u;
    SET_GPR_U32(ctx, 31, 0x11FE30u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FE30u; }
    }
    if (ctx->pc != 0x11FE30u) { return; }
    ctx->pc = 0x11FE30u;
    // 0x11fe30: 0x2a0202d
    ctx->pc = 0x11fe30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe34: 0x3c010024
    ctx->pc = 0x11fe34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x11fe38: 0xdc258d88
    ctx->pc = 0x11fe38u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937992)));
    // 0x11fe3c: 0x40802d
    ctx->pc = 0x11fe3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe40: 0xc04476c
    ctx->pc = 0x11FE40u;
    SET_GPR_U32(ctx, 31, 0x11FE48u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FE48u; }
    }
    if (ctx->pc != 0x11FE48u) { return; }
    ctx->pc = 0x11FE48u;
    // 0x11fe48: 0x240202d
    ctx->pc = 0x11fe48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe4c: 0x40282d
    ctx->pc = 0x11fe4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe50: 0xc044752
    ctx->pc = 0x11FE50u;
    SET_GPR_U32(ctx, 31, 0x11FE58u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FE58u; }
    }
    if (ctx->pc != 0x11FE58u) { return; }
    ctx->pc = 0x11FE58u;
    // 0x11fe58: 0x280282d
    ctx->pc = 0x11fe58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe5c: 0x40202d
    ctx->pc = 0x11fe5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe60: 0xc044752
    ctx->pc = 0x11FE60u;
    SET_GPR_U32(ctx, 31, 0x11FE68u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FE68u; }
    }
    if (ctx->pc != 0x11FE68u) { return; }
    ctx->pc = 0x11FE68u;
    // 0x11fe68: 0x200202d
    ctx->pc = 0x11fe68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe6c: 0x100000a3
    ctx->pc = 0x11FE6Cu;
    {
        const bool branch_taken_0x11fe6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x11fe6c) {
            ctx->pc = 0x1200FCu;
            goto label_1200fc;
        }
    }
    ctx->pc = 0x11FE74u;
    // 0x11fe74: 0x0
    ctx->pc = 0x11fe74u;
    // NOP
label_11fe78:
    // 0x11fe78: 0x34058000
    ctx->pc = 0x11fe78u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32768));
    // 0x11fe7c: 0x52bfc
    ctx->pc = 0x11fe7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x11fe80: 0x280202d
    ctx->pc = 0x11fe80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe84: 0xc04473c
    ctx->pc = 0x11FE84u;
    SET_GPR_U32(ctx, 31, 0x11FE8Cu);
    ctx->pc = 0x11FE88u;
    SET_GPR_U32(ctx, 16, ((uint32_t)6 << 16));
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FE8Cu; }
    }
    if (ctx->pc != 0x11FE8Cu) { return; }
    ctx->pc = 0x11FE8Cu;
    // 0x11fe8c: 0x280202d
    ctx->pc = 0x11fe8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe90: 0x40282d
    ctx->pc = 0x11fe90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe94: 0xc04480e
    ctx->pc = 0x11FE94u;
    SET_GPR_U32(ctx, 31, 0x11FE9Cu);
    ctx->pc = 0x11FE98u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 47185));
    ctx->pc = 0x112038u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112038_0x112038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FE9Cu; }
    }
    if (ctx->pc != 0x11FE9Cu) { return; }
    ctx->pc = 0x11FE9Cu;
    // 0x11fe9c: 0x40b82d
    ctx->pc = 0x11fe9cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fea0: 0xc0448ba
    ctx->pc = 0x11FEA0u;
    SET_GPR_U32(ctx, 31, 0x11FEA8u);
    ctx->pc = 0x11FEA4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FEA8u; }
    }
    if (ctx->pc != 0x11FEA8u) { return; }
    ctx->pc = 0x11FEA8u;
    // 0x11fea8: 0x2e0202d
    ctx->pc = 0x11fea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11feac: 0x2e0282d
    ctx->pc = 0x11feacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11feb0: 0x40a82d
    ctx->pc = 0x11feb0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11feb4: 0xc04476c
    ctx->pc = 0x11FEB4u;
    SET_GPR_U32(ctx, 31, 0x11FEBCu);
    ctx->pc = 0x11FEB8u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FEBCu; }
    }
    if (ctx->pc != 0x11FEBCu) { return; }
    ctx->pc = 0x11FEBCu;
    // 0x11febc: 0x40902d
    ctx->pc = 0x11febcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fec0: 0x3c02fff9
    ctx->pc = 0x11fec0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65529 << 16));
    // 0x11fec4: 0x240202d
    ctx->pc = 0x11fec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fec8: 0x240282d
    ctx->pc = 0x11fec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fecc: 0x3442eb86
    ctx->pc = 0x11feccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 60294));
    // 0x11fed0: 0xc04476c
    ctx->pc = 0x11FED0u;
    SET_GPR_U32(ctx, 31, 0x11FED8u);
    ctx->pc = 0x11FED4u;
    SET_GPR_U32(ctx, 22, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FED8u; }
    }
    if (ctx->pc != 0x11FED8u) { return; }
    ctx->pc = 0x11FED8u;
    // 0x11fed8: 0x40882d
    ctx->pc = 0x11fed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fedc: 0x3c010024
    ctx->pc = 0x11fedcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x11fee0: 0xdc258d90
    ctx->pc = 0x11fee0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294938000)));
    // 0x11fee4: 0x220202d
    ctx->pc = 0x11fee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fee8: 0xc04476c
    ctx->pc = 0x11FEE8u;
    SET_GPR_U32(ctx, 31, 0x11FEF0u);
    ctx->pc = 0x11FEECu;
    SET_GPR_U32(ctx, 22, OR32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FEF0u; }
    }
    if (ctx->pc != 0x11FEF0u) { return; }
    ctx->pc = 0x11FEF0u;
    // 0x11fef0: 0x3c010024
    ctx->pc = 0x11fef0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x11fef4: 0xdc258d98
    ctx->pc = 0x11fef4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294938008)));
    // 0x11fef8: 0x40202d
    ctx->pc = 0x11fef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fefc: 0xc04473c
    ctx->pc = 0x11FEFCu;
    SET_GPR_U32(ctx, 31, 0x11FF04u);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FF04u; }
    }
    if (ctx->pc != 0x11FF04u) { return; }
    ctx->pc = 0x11FF04u;
    // 0x11ff04: 0x220202d
    ctx->pc = 0x11ff04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff08: 0x40282d
    ctx->pc = 0x11ff08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff0c: 0xc04476c
    ctx->pc = 0x11FF0Cu;
    SET_GPR_U32(ctx, 31, 0x11FF14u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FF14u; }
    }
    if (ctx->pc != 0x11FF14u) { return; }
    ctx->pc = 0x11FF14u;
    // 0x11ff14: 0x3c010024
    ctx->pc = 0x11ff14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x11ff18: 0xdc258da0
    ctx->pc = 0x11ff18u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294938016)));
    // 0x11ff1c: 0x40202d
    ctx->pc = 0x11ff1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff20: 0xc04473c
    ctx->pc = 0x11FF20u;
    SET_GPR_U32(ctx, 31, 0x11FF28u);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FF28u; }
    }
    if (ctx->pc != 0x11FF28u) { return; }
    ctx->pc = 0x11FF28u;
    // 0x11ff28: 0x220202d
    ctx->pc = 0x11ff28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff2c: 0x40282d
    ctx->pc = 0x11ff2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff30: 0xc04476c
    ctx->pc = 0x11FF30u;
    SET_GPR_U32(ctx, 31, 0x11FF38u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FF38u; }
    }
    if (ctx->pc != 0x11FF38u) { return; }
    ctx->pc = 0x11FF38u;
    // 0x11ff38: 0x220202d
    ctx->pc = 0x11ff38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff3c: 0x3c010024
    ctx->pc = 0x11ff3cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x11ff40: 0xdc258da8
    ctx->pc = 0x11ff40u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294938024)));
    // 0x11ff44: 0x40802d
    ctx->pc = 0x11ff44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff48: 0xc04476c
    ctx->pc = 0x11FF48u;
    SET_GPR_U32(ctx, 31, 0x11FF50u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FF50u; }
    }
    if (ctx->pc != 0x11FF50u) { return; }
    ctx->pc = 0x11FF50u;
    // 0x11ff50: 0x3c010024
    ctx->pc = 0x11ff50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x11ff54: 0xdc258db0
    ctx->pc = 0x11ff54u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294938032)));
    // 0x11ff58: 0x40202d
    ctx->pc = 0x11ff58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff5c: 0xc04473c
    ctx->pc = 0x11FF5Cu;
    SET_GPR_U32(ctx, 31, 0x11FF64u);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FF64u; }
    }
    if (ctx->pc != 0x11FF64u) { return; }
    ctx->pc = 0x11FF64u;
    // 0x11ff64: 0x220202d
    ctx->pc = 0x11ff64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff68: 0x40282d
    ctx->pc = 0x11ff68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff6c: 0xc04476c
    ctx->pc = 0x11FF6Cu;
    SET_GPR_U32(ctx, 31, 0x11FF74u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FF74u; }
    }
    if (ctx->pc != 0x11FF74u) { return; }
    ctx->pc = 0x11FF74u;
    // 0x11ff74: 0x3c010024
    ctx->pc = 0x11ff74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x11ff78: 0xdc258db8
    ctx->pc = 0x11ff78u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294938040)));
    // 0x11ff7c: 0x40202d
    ctx->pc = 0x11ff7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff80: 0xc04473c
    ctx->pc = 0x11FF80u;
    SET_GPR_U32(ctx, 31, 0x11FF88u);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FF88u; }
    }
    if (ctx->pc != 0x11FF88u) { return; }
    ctx->pc = 0x11FF88u;
    // 0x11ff88: 0x220202d
    ctx->pc = 0x11ff88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff8c: 0x40282d
    ctx->pc = 0x11ff8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff90: 0xc04476c
    ctx->pc = 0x11FF90u;
    SET_GPR_U32(ctx, 31, 0x11FF98u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FF98u; }
    }
    if (ctx->pc != 0x11FF98u) { return; }
    ctx->pc = 0x11FF98u;
    // 0x11ff98: 0x3c010024
    ctx->pc = 0x11ff98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x11ff9c: 0xdc258dc0
    ctx->pc = 0x11ff9cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294938048)));
    // 0x11ffa0: 0x40202d
    ctx->pc = 0x11ffa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ffa4: 0xc04473c
    ctx->pc = 0x11FFA4u;
    SET_GPR_U32(ctx, 31, 0x11FFACu);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FFACu; }
    }
    if (ctx->pc != 0x11FFACu) { return; }
    ctx->pc = 0x11FFACu;
    // 0x11ffac: 0x240202d
    ctx->pc = 0x11ffacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ffb0: 0x40282d
    ctx->pc = 0x11ffb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ffb4: 0xc04476c
    ctx->pc = 0x11FFB4u;
    SET_GPR_U32(ctx, 31, 0x11FFBCu);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FFBCu; }
    }
    if (ctx->pc != 0x11FFBCu) { return; }
    ctx->pc = 0x11FFBCu;
    // 0x11ffbc: 0x200282d
    ctx->pc = 0x11ffbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ffc0: 0x40202d
    ctx->pc = 0x11ffc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ffc4: 0xc04473c
    ctx->pc = 0x11FFC4u;
    SET_GPR_U32(ctx, 31, 0x11FFCCu);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FFCCu; }
    }
    if (ctx->pc != 0x11FFCCu) { return; }
    ctx->pc = 0x11FFCCu;
    // 0x11ffcc: 0x40902d
    ctx->pc = 0x11ffccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ffd0: 0x1ac0003f
    ctx->pc = 0x11FFD0u;
    {
        const bool branch_taken_0x11ffd0 = (GPR_S32(ctx, 22) <= 0);
        if (branch_taken_0x11ffd0) {
            ctx->pc = 0x1200D0u;
            goto label_1200d0;
        }
    }
    ctx->pc = 0x11FFD8u;
    // 0x11ffd8: 0x3405ff80
    ctx->pc = 0x11ffd8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65408));
    // 0x11ffdc: 0x52bbc
    ctx->pc = 0x11ffdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x11ffe0: 0x280202d
    ctx->pc = 0x11ffe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ffe4: 0xc04476c
    ctx->pc = 0x11FFE4u;
    SET_GPR_U32(ctx, 31, 0x11FFECu);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FFECu; }
    }
    if (ctx->pc != 0x11FFECu) { return; }
    ctx->pc = 0x11FFECu;
    // 0x11ffec: 0x280282d
    ctx->pc = 0x11ffecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fff0: 0x40202d
    ctx->pc = 0x11fff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fff4: 0xc04476c
    ctx->pc = 0x11FFF4u;
    SET_GPR_U32(ctx, 31, 0x11FFFCu);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FFFCu; }
    }
    if (ctx->pc != 0x11FFFCu) { return; }
    ctx->pc = 0x11FFFCu;
    // 0x11fffc: 0x40982d
    ctx->pc = 0x11fffcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120000: 0x17c0000f
    ctx->pc = 0x120000u;
    {
        const bool branch_taken_0x120000 = (GPR_U32(ctx, 30) != GPR_U32(ctx, 0));
        if (branch_taken_0x120000) {
            ctx->pc = 0x120040u;
            goto label_120040;
        }
    }
    ctx->pc = 0x120008u;
    // 0x120008: 0x240282d
    ctx->pc = 0x120008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12000c: 0x260202d
    ctx->pc = 0x12000cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120010: 0xc04473c
    ctx->pc = 0x120010u;
    SET_GPR_U32(ctx, 31, 0x120018u);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120018u; }
    }
    if (ctx->pc != 0x120018u) { return; }
    ctx->pc = 0x120018u;
    // 0x120018: 0x2e0202d
    ctx->pc = 0x120018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12001c: 0x40282d
    ctx->pc = 0x12001cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120020: 0xc04476c
    ctx->pc = 0x120020u;
    SET_GPR_U32(ctx, 31, 0x120028u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120028u; }
    }
    if (ctx->pc != 0x120028u) { return; }
    ctx->pc = 0x120028u;
    // 0x120028: 0x260202d
    ctx->pc = 0x120028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12002c: 0x40282d
    ctx->pc = 0x12002cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120030: 0xc044752
    ctx->pc = 0x120030u;
    SET_GPR_U32(ctx, 31, 0x120038u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120038u; }
    }
    if (ctx->pc != 0x120038u) { return; }
    ctx->pc = 0x120038u;
    // 0x120038: 0x1000002f
    ctx->pc = 0x120038u;
    {
        const bool branch_taken_0x120038 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x120038) {
            ctx->pc = 0x1200F8u;
            goto label_1200f8;
        }
    }
    ctx->pc = 0x120040u;
label_120040:
    // 0x120040: 0x3c010024
    ctx->pc = 0x120040u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x120044: 0xdc258dc8
    ctx->pc = 0x120044u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294938056)));
    // 0x120048: 0x2a0202d
    ctx->pc = 0x120048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12004c: 0xc04476c
    ctx->pc = 0x12004Cu;
    SET_GPR_U32(ctx, 31, 0x120054u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120054u; }
    }
    if (ctx->pc != 0x120054u) { return; }
    ctx->pc = 0x120054u;
    // 0x120054: 0x260202d
    ctx->pc = 0x120054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120058: 0x240282d
    ctx->pc = 0x120058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12005c: 0x40882d
    ctx->pc = 0x12005cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120060: 0xc04473c
    ctx->pc = 0x120060u;
    SET_GPR_U32(ctx, 31, 0x120068u);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120068u; }
    }
    if (ctx->pc != 0x120068u) { return; }
    ctx->pc = 0x120068u;
    // 0x120068: 0x2e0202d
    ctx->pc = 0x120068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12006c: 0x40282d
    ctx->pc = 0x12006cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120070: 0xc04476c
    ctx->pc = 0x120070u;
    SET_GPR_U32(ctx, 31, 0x120078u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120078u; }
    }
    if (ctx->pc != 0x120078u) { return; }
    ctx->pc = 0x120078u;
    // 0x120078: 0x2a0202d
    ctx->pc = 0x120078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12007c: 0x3c010024
    ctx->pc = 0x12007cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x120080: 0xdc258dd0
    ctx->pc = 0x120080u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294938064)));
    // 0x120084: 0x40802d
    ctx->pc = 0x120084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120088: 0xc04476c
    ctx->pc = 0x120088u;
    SET_GPR_U32(ctx, 31, 0x120090u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120090u; }
    }
    if (ctx->pc != 0x120090u) { return; }
    ctx->pc = 0x120090u;
    // 0x120090: 0x200202d
    ctx->pc = 0x120090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120094: 0x40282d
    ctx->pc = 0x120094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120098: 0xc04473c
    ctx->pc = 0x120098u;
    SET_GPR_U32(ctx, 31, 0x1200A0u);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1200A0u; }
    }
    if (ctx->pc != 0x1200A0u) { return; }
    ctx->pc = 0x1200A0u;
    // 0x1200a0: 0x260202d
    ctx->pc = 0x1200a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1200a4: 0x40282d
    ctx->pc = 0x1200a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1200a8: 0xc044752
    ctx->pc = 0x1200A8u;
    SET_GPR_U32(ctx, 31, 0x1200B0u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1200B0u; }
    }
    if (ctx->pc != 0x1200B0u) { return; }
    ctx->pc = 0x1200B0u;
    // 0x1200b0: 0x280282d
    ctx->pc = 0x1200b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1200b4: 0x40202d
    ctx->pc = 0x1200b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1200b8: 0xc044752
    ctx->pc = 0x1200B8u;
    SET_GPR_U32(ctx, 31, 0x1200C0u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1200C0u; }
    }
    if (ctx->pc != 0x1200C0u) { return; }
    ctx->pc = 0x1200C0u;
    // 0x1200c0: 0x220202d
    ctx->pc = 0x1200c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1200c4: 0x1000000d
    ctx->pc = 0x1200C4u;
    {
        const bool branch_taken_0x1200c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1200c4) {
            ctx->pc = 0x1200FCu;
            goto label_1200fc;
        }
    }
    ctx->pc = 0x1200CCu;
    // 0x1200cc: 0x0
    ctx->pc = 0x1200ccu;
    // NOP
label_1200d0:
    // 0x1200d0: 0x17c0000f
    ctx->pc = 0x1200D0u;
    {
        const bool branch_taken_0x1200d0 = (GPR_U32(ctx, 30) != GPR_U32(ctx, 0));
        if (branch_taken_0x1200d0) {
            ctx->pc = 0x120110u;
            goto label_120110;
        }
    }
    ctx->pc = 0x1200D8u;
    // 0x1200d8: 0x240282d
    ctx->pc = 0x1200d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1200dc: 0x280202d
    ctx->pc = 0x1200dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1200e0: 0xc044752
    ctx->pc = 0x1200E0u;
    SET_GPR_U32(ctx, 31, 0x1200E8u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1200E8u; }
    }
    if (ctx->pc != 0x1200E8u) { return; }
    ctx->pc = 0x1200E8u;
    // 0x1200e8: 0x2e0202d
    ctx->pc = 0x1200e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1200ec: 0x40282d
    ctx->pc = 0x1200ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1200f0: 0xc04476c
    ctx->pc = 0x1200F0u;
    SET_GPR_U32(ctx, 31, 0x1200F8u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1200F8u; }
    }
    if (ctx->pc != 0x1200F8u) { return; }
    ctx->pc = 0x1200F8u;
label_1200f8:
    // 0x1200f8: 0x280202d
    ctx->pc = 0x1200f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1200fc:
    // 0x1200fc: 0x40282d
    ctx->pc = 0x1200fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120100: 0xc044752
    ctx->pc = 0x120100u;
    SET_GPR_U32(ctx, 31, 0x120108u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120108u; }
    }
    if (ctx->pc != 0x120108u) { return; }
    ctx->pc = 0x120108u;
    // 0x120108: 0x10000022
    ctx->pc = 0x120108u;
    {
        const bool branch_taken_0x120108 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12010Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x120108) {
            ctx->pc = 0x120194u;
            goto label_120194;
        }
    }
    ctx->pc = 0x120110u;
label_120110:
    // 0x120110: 0x3c010024
    ctx->pc = 0x120110u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x120114: 0xdc258dd8
    ctx->pc = 0x120114u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294938072)));
    // 0x120118: 0x2a0202d
    ctx->pc = 0x120118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12011c: 0xc04476c
    ctx->pc = 0x12011Cu;
    SET_GPR_U32(ctx, 31, 0x120124u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120124u; }
    }
    if (ctx->pc != 0x120124u) { return; }
    ctx->pc = 0x120124u;
    // 0x120124: 0x280202d
    ctx->pc = 0x120124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120128: 0x240282d
    ctx->pc = 0x120128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12012c: 0x40882d
    ctx->pc = 0x12012cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120130: 0xc044752
    ctx->pc = 0x120130u;
    SET_GPR_U32(ctx, 31, 0x120138u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120138u; }
    }
    if (ctx->pc != 0x120138u) { return; }
    ctx->pc = 0x120138u;
    // 0x120138: 0x2e0202d
    ctx->pc = 0x120138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12013c: 0x40282d
    ctx->pc = 0x12013cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120140: 0xc04476c
    ctx->pc = 0x120140u;
    SET_GPR_U32(ctx, 31, 0x120148u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120148u; }
    }
    if (ctx->pc != 0x120148u) { return; }
    ctx->pc = 0x120148u;
    // 0x120148: 0x2a0202d
    ctx->pc = 0x120148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12014c: 0x3c010024
    ctx->pc = 0x12014cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x120150: 0xdc258de0
    ctx->pc = 0x120150u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294938080)));
    // 0x120154: 0x40802d
    ctx->pc = 0x120154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120158: 0xc04476c
    ctx->pc = 0x120158u;
    SET_GPR_U32(ctx, 31, 0x120160u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120160u; }
    }
    if (ctx->pc != 0x120160u) { return; }
    ctx->pc = 0x120160u;
    // 0x120160: 0x200202d
    ctx->pc = 0x120160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120164: 0x40282d
    ctx->pc = 0x120164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120168: 0xc044752
    ctx->pc = 0x120168u;
    SET_GPR_U32(ctx, 31, 0x120170u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120170u; }
    }
    if (ctx->pc != 0x120170u) { return; }
    ctx->pc = 0x120170u;
    // 0x120170: 0x280282d
    ctx->pc = 0x120170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120174: 0x40202d
    ctx->pc = 0x120174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120178: 0xc044752
    ctx->pc = 0x120178u;
    SET_GPR_U32(ctx, 31, 0x120180u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120180u; }
    }
    if (ctx->pc != 0x120180u) { return; }
    ctx->pc = 0x120180u;
    // 0x120180: 0x220202d
    ctx->pc = 0x120180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120184: 0x40282d
    ctx->pc = 0x120184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120188: 0xc044752
    ctx->pc = 0x120188u;
    SET_GPR_U32(ctx, 31, 0x120190u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120190u; }
    }
    if (ctx->pc != 0x120190u) { return; }
    ctx->pc = 0x120190u;
    // 0x120190: 0xdfb00000
    ctx->pc = 0x120190u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_120194:
    // 0x120194: 0xdfb10008
    ctx->pc = 0x120194u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_120198:
    // 0x120198: 0xdfb20010
    ctx->pc = 0x120198u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12019c: 0xdfb30018
    ctx->pc = 0x12019cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1201a0: 0xdfb40020
    ctx->pc = 0x1201a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1201a4: 0xdfb50028
    ctx->pc = 0x1201a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1201a8: 0xdfb60030
    ctx->pc = 0x1201a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1201ac: 0xdfb70038
    ctx->pc = 0x1201acu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1201b0: 0xdfbe0040
    ctx->pc = 0x1201b0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1201b4: 0xdfbf0048
    ctx->pc = 0x1201b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1201b8: 0x3e00008
    ctx->pc = 0x1201B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1201BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11FC38u: goto label_11fc38;
            case 0x11FC68u: goto label_11fc68;
            case 0x11FC80u: goto label_11fc80;
            case 0x11FCB0u: goto label_11fcb0;
            case 0x11FDA0u: goto label_11fda0;
            case 0x11FE10u: goto label_11fe10;
            case 0x11FE78u: goto label_11fe78;
            case 0x120040u: goto label_120040;
            case 0x1200D0u: goto label_1200d0;
            case 0x1200F8u: goto label_1200f8;
            case 0x1200FCu: goto label_1200fc;
            case 0x120110u: goto label_120110;
            case 0x120194u: goto label_120194;
            case 0x120198u: goto label_120198;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1201C0u;
}
