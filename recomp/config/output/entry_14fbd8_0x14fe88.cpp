#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_14fbd8
// Address: 0x14fbd8 - 0x14fe88
void entry_14fbd8_0x14fe88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x14fbd8u;

    // 0x14fbd8: 0x27bdffb0
    ctx->pc = 0x14fbd8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14fbdc: 0xffb30018
    ctx->pc = 0x14fbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x14fbe0: 0x982d
    ctx->pc = 0x14fbe0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fbe4: 0xffb40020
    ctx->pc = 0x14fbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x14fbe8: 0xffb50028
    ctx->pc = 0x14fbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x14fbec: 0x80a82d
    ctx->pc = 0x14fbecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fbf0: 0xffb60030
    ctx->pc = 0x14fbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x14fbf4: 0x26b61000
    ctx->pc = 0x14fbf4u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 21), 4096));
    // 0x14fbf8: 0xffb70038
    ctx->pc = 0x14fbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x14fbfc: 0xffbe0040
    ctx->pc = 0x14fbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x14fc00: 0xffb00000
    ctx->pc = 0x14fc00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14fc04: 0xffb10008
    ctx->pc = 0x14fc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14fc08: 0xffb20010
    ctx->pc = 0x14fc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14fc0c: 0xffbf0048
    ctx->pc = 0x14fc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x14fc10: 0xc052490
    ctx->pc = 0x14FC10u;
    SET_GPR_U32(ctx, 31, 0x14FC18u);
    ctx->pc = 0x14FC14u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 21), 2048));
    ctx->pc = 0x149240u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00149240_0x149240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FC18u; }
    }
    if (ctx->pc != 0x14FC18u) { return; }
    ctx->pc = 0x14FC18u;
    // 0x14fc18: 0x3414ff80
    ctx->pc = 0x14fc18u;
    SET_GPR_U32(ctx, 20, OR32(GPR_U32(ctx, 0), 65408));
    // 0x14fc1c: 0x14a3bc
    ctx->pc = 0x14fc1cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 14));
    // 0x14fc20: 0x40f02d
    ctx->pc = 0x14fc20u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc24: 0x0
    ctx->pc = 0x14fc24u;
    // NOP
label_14fc28:
    // 0x14fc28: 0x2664ff80
    ctx->pc = 0x14fc28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 4294967168));
    // 0x14fc2c: 0xc0448ba
    ctx->pc = 0x14FC2Cu;
    SET_GPR_U32(ctx, 31, 0x14FC34u);
    ctx->pc = 0x14FC30u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 19), 3));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FC34u; }
    }
    if (ctx->pc != 0x14FC34u) { return; }
    ctx->pc = 0x14FC34u;
    // 0x14fc34: 0x3c010024
    ctx->pc = 0x14fc34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x14fc38: 0xdc25e2d8
    ctx->pc = 0x14fc38u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294959832)));
    // 0x14fc3c: 0x40902d
    ctx->pc = 0x14fc3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc40: 0x2378021
    ctx->pc = 0x14fc40u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x14fc44: 0x240202d
    ctx->pc = 0x14fc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc48: 0xc04476c
    ctx->pc = 0x14FC48u;
    SET_GPR_U32(ctx, 31, 0x14FC50u);
    ctx->pc = 0x14FC4Cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FC50u; }
    }
    if (ctx->pc != 0x14FC50u) { return; }
    ctx->pc = 0x14FC50u;
    // 0x14fc50: 0x280282d
    ctx->pc = 0x14fc50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc54: 0x40202d
    ctx->pc = 0x14fc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc58: 0xc04473c
    ctx->pc = 0x14FC58u;
    SET_GPR_U32(ctx, 31, 0x14FC60u);
    ctx->pc = 0x14FC5Cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FC60u; }
    }
    if (ctx->pc != 0x14FC60u) { return; }
    ctx->pc = 0x14FC60u;
    // 0x14fc60: 0x40202d
    ctx->pc = 0x14fc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc64: 0xc0448e8
    ctx->pc = 0x14FC64u;
    SET_GPR_U32(ctx, 31, 0x14FC6Cu);
    ctx->pc = 0x1123A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001123A0_0x1123a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FC6Cu; }
    }
    if (ctx->pc != 0x14FC6Cu) { return; }
    ctx->pc = 0x14FC6Cu;
    // 0x14fc6c: 0x240202d
    ctx->pc = 0x14fc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc70: 0x3c010024
    ctx->pc = 0x14fc70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x14fc74: 0xdc25e2e0
    ctx->pc = 0x14fc74u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294959840)));
    // 0x14fc78: 0xc04476c
    ctx->pc = 0x14FC78u;
    SET_GPR_U32(ctx, 31, 0x14FC80u);
    ctx->pc = 0x14FC7Cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FC80u; }
    }
    if (ctx->pc != 0x14FC80u) { return; }
    ctx->pc = 0x14FC80u;
    // 0x14fc80: 0x280282d
    ctx->pc = 0x14fc80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc84: 0xc04473c
    ctx->pc = 0x14FC84u;
    SET_GPR_U32(ctx, 31, 0x14FC8Cu);
    ctx->pc = 0x14FC88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FC8Cu; }
    }
    if (ctx->pc != 0x14FC8Cu) { return; }
    ctx->pc = 0x14FC8Cu;
    // 0x14fc8c: 0xc0448e8
    ctx->pc = 0x14FC8Cu;
    SET_GPR_U32(ctx, 31, 0x14FC94u);
    ctx->pc = 0x14FC90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1123A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001123A0_0x1123a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FC94u; }
    }
    if (ctx->pc != 0x14FC94u) { return; }
    ctx->pc = 0x14FC94u;
    // 0x14fc94: 0xa6000000
    ctx->pc = 0x14fc94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x14fc98: 0xa6020002
    ctx->pc = 0x14fc98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x14fc9c: 0x240202d
    ctx->pc = 0x14fc9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fca0: 0xa6000006
    ctx->pc = 0x14fca0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x14fca4: 0x3c010024
    ctx->pc = 0x14fca4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x14fca8: 0xdc25e2e8
    ctx->pc = 0x14fca8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294959848)));
    // 0x14fcac: 0xc04476c
    ctx->pc = 0x14FCACu;
    SET_GPR_U32(ctx, 31, 0x14FCB4u);
    ctx->pc = 0x14FCB0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FCB4u; }
    }
    if (ctx->pc != 0x14FCB4u) { return; }
    ctx->pc = 0x14FCB4u;
    // 0x14fcb4: 0x280282d
    ctx->pc = 0x14fcb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fcb8: 0xc04473c
    ctx->pc = 0x14FCB8u;
    SET_GPR_U32(ctx, 31, 0x14FCC0u);
    ctx->pc = 0x14FCBCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FCC0u; }
    }
    if (ctx->pc != 0x14FCC0u) { return; }
    ctx->pc = 0x14FCC0u;
    // 0x14fcc0: 0xc0448e8
    ctx->pc = 0x14FCC0u;
    SET_GPR_U32(ctx, 31, 0x14FCC8u);
    ctx->pc = 0x14FCC4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1123A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001123A0_0x1123a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FCC8u; }
    }
    if (ctx->pc != 0x14FCC8u) { return; }
    ctx->pc = 0x14FCC8u;
    // 0x14fcc8: 0x240202d
    ctx->pc = 0x14fcc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fccc: 0x3c010024
    ctx->pc = 0x14fcccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x14fcd0: 0xdc25e2f0
    ctx->pc = 0x14fcd0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294959856)));
    // 0x14fcd4: 0xc04476c
    ctx->pc = 0x14FCD4u;
    SET_GPR_U32(ctx, 31, 0x14FCDCu);
    ctx->pc = 0x14FCD8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FCDCu; }
    }
    if (ctx->pc != 0x14FCDCu) { return; }
    ctx->pc = 0x14FCDCu;
    // 0x14fcdc: 0x280282d
    ctx->pc = 0x14fcdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fce0: 0xc04473c
    ctx->pc = 0x14FCE0u;
    SET_GPR_U32(ctx, 31, 0x14FCE8u);
    ctx->pc = 0x14FCE4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FCE8u; }
    }
    if (ctx->pc != 0x14FCE8u) { return; }
    ctx->pc = 0x14FCE8u;
    // 0x14fce8: 0xc0448e8
    ctx->pc = 0x14FCE8u;
    SET_GPR_U32(ctx, 31, 0x14FCF0u);
    ctx->pc = 0x14FCECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1123A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001123A0_0x1123a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FCF0u; }
    }
    if (ctx->pc != 0x14FCF0u) { return; }
    ctx->pc = 0x14FCF0u;
    // 0x14fcf0: 0xa6200006
    ctx->pc = 0x14fcf0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x14fcf4: 0x2a630100
    ctx->pc = 0x14fcf4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), 256));
    // 0x14fcf8: 0x1460ffcb
    ctx->pc = 0x14FCF8u;
    {
        const bool branch_taken_0x14fcf8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x14FCFCu;
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x14fcf8) {
            ctx->pc = 0x14FC28u;
            goto label_14fc28;
        }
    }
    ctx->pc = 0x14FD00u;
    // 0x14fd00: 0x2a0102d
    ctx->pc = 0x14fd00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd04: 0x2413000f
    ctx->pc = 0x14fd04u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 15));
label_14fd08:
    // 0x14fd08: 0x2673ffff
    ctx->pc = 0x14fd08u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x14fd0c: 0xa4400004
    ctx->pc = 0x14fd0cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x14fd10: 0xa4400002
    ctx->pc = 0x14fd10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x14fd14: 0xa4400000
    ctx->pc = 0x14fd14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x14fd18: 0xa4400006
    ctx->pc = 0x14fd18u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x14fd1c: 0x661fffa
    ctx->pc = 0x14FD1Cu;
    {
        const bool branch_taken_0x14fd1c = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x14FD20u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
        if (branch_taken_0x14fd1c) {
            ctx->pc = 0x14FD08u;
            goto label_14fd08;
        }
    }
    ctx->pc = 0x14FD24u;
    // 0x14fd24: 0x1ea140
    ctx->pc = 0x14fd24u;
    SET_GPR_U32(ctx, 20, SLL32(GPR_U32(ctx, 30), 5));
    // 0x14fd28: 0x24120070
    ctx->pc = 0x14fd28u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 112));
    // 0x14fd2c: 0x26b00080
    ctx->pc = 0x14fd2cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 21), 128));
    // 0x14fd30: 0x882d
    ctx->pc = 0x14fd30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd34: 0x2413006f
    ctx->pc = 0x14fd34u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 111));
label_14fd38:
    // 0x14fd38: 0x232001a
    ctx->pc = 0x14fd38u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x14fd3c: 0x26310100
    ctx->pc = 0x14fd3cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 256));
    // 0x14fd40: 0x52400001
    ctx->pc = 0x14FD40u;
    {
        const bool branch_taken_0x14fd40 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x14fd40) {
            ctx->pc = 0x14FD44u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x14FD48u;
            goto label_14fd48;
        }
    }
    ctx->pc = 0x14FD48u;
label_14fd48:
    // 0x14fd48: 0x2673ffff
    ctx->pc = 0x14fd48u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x14fd4c: 0x2012
    ctx->pc = 0x14fd4cu;
    SET_GPR_U32(ctx, 4, ctx->lo);
    // 0x14fd50: 0xc0448ba
    ctx->pc = 0x14FD50u;
    SET_GPR_U32(ctx, 31, 0x14FD58u);
    ctx->pc = 0x14FD54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FD58u; }
    }
    if (ctx->pc != 0x14FD58u) { return; }
    ctx->pc = 0x14FD58u;
    // 0x14fd58: 0x3c010024
    ctx->pc = 0x14fd58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x14fd5c: 0xdc25e2f8
    ctx->pc = 0x14fd5cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294959864)));
    // 0x14fd60: 0xc04476c
    ctx->pc = 0x14FD60u;
    SET_GPR_U32(ctx, 31, 0x14FD68u);
    ctx->pc = 0x14FD64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FD68u; }
    }
    if (ctx->pc != 0x14FD68u) { return; }
    ctx->pc = 0x14FD68u;
    // 0x14fd68: 0x3405ff80
    ctx->pc = 0x14fd68u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65408));
    // 0x14fd6c: 0x52bbc
    ctx->pc = 0x14fd6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x14fd70: 0xc04473c
    ctx->pc = 0x14FD70u;
    SET_GPR_U32(ctx, 31, 0x14FD78u);
    ctx->pc = 0x14FD74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FD78u; }
    }
    if (ctx->pc != 0x14FD78u) { return; }
    ctx->pc = 0x14FD78u;
    // 0x14fd78: 0xc0448e8
    ctx->pc = 0x14FD78u;
    SET_GPR_U32(ctx, 31, 0x14FD80u);
    ctx->pc = 0x14FD7Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1123A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001123A0_0x1123a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FD80u; }
    }
    if (ctx->pc != 0x14FD80u) { return; }
    ctx->pc = 0x14FD80u;
    // 0x14fd80: 0xa6140006
    ctx->pc = 0x14fd80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 20));
    // 0x14fd84: 0x21400
    ctx->pc = 0x14fd84u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x14fd88: 0x21403
    ctx->pc = 0x14fd88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x14fd8c: 0xa6020000
    ctx->pc = 0x14fd8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x14fd90: 0xa6020004
    ctx->pc = 0x14fd90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x14fd94: 0xa6020002
    ctx->pc = 0x14fd94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x14fd98: 0x661ffe7
    ctx->pc = 0x14FD98u;
    {
        const bool branch_taken_0x14fd98 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x14FD9Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8));
        if (branch_taken_0x14fd98) {
            ctx->pc = 0x14FD38u;
            goto label_14fd38;
        }
    }
    ctx->pc = 0x14FDA0u;
    // 0x14fda0: 0x1ea180
    ctx->pc = 0x14fda0u;
    SET_GPR_U32(ctx, 20, SLL32(GPR_U32(ctx, 30), 6));
    // 0x14fda4: 0x2402458d
    ctx->pc = 0x14fda4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 17805));
    // 0x14fda8: 0x280202d
    ctx->pc = 0x14fda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fdac: 0x26a30400
    ctx->pc = 0x14fdacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 21), 1024));
    // 0x14fdb0: 0x2413000f
    ctx->pc = 0x14fdb0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 15));
    // 0x14fdb4: 0x0
    ctx->pc = 0x14fdb4u;
    // NOP
label_14fdb8:
    // 0x14fdb8: 0x2673ffff
    ctx->pc = 0x14fdb8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x14fdbc: 0xa4620004
    ctx->pc = 0x14fdbcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x14fdc0: 0xa4620002
    ctx->pc = 0x14fdc0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x14fdc4: 0xa4620000
    ctx->pc = 0x14fdc4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x14fdc8: 0xa4640006
    ctx->pc = 0x14fdc8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x14fdcc: 0x661fffa
    ctx->pc = 0x14FDCCu;
    {
        const bool branch_taken_0x14fdcc = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x14FDD0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
        if (branch_taken_0x14fdcc) {
            ctx->pc = 0x14FDB8u;
            goto label_14fdb8;
        }
    }
    ctx->pc = 0x14FDD4u;
    // 0x14fdd4: 0x26b00480
    ctx->pc = 0x14fdd4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 21), 1152));
    // 0x14fdd8: 0x241500ff
    ctx->pc = 0x14fdd8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 255));
    // 0x14fddc: 0x24120070
    ctx->pc = 0x14fddcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 112));
    // 0x14fde0: 0x882d
    ctx->pc = 0x14fde0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fde4: 0x2413006f
    ctx->pc = 0x14fde4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 111));
label_14fde8:
    // 0x14fde8: 0x232001a
    ctx->pc = 0x14fde8u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x14fdec: 0x26310100
    ctx->pc = 0x14fdecu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 256));
    // 0x14fdf0: 0x52400001
    ctx->pc = 0x14FDF0u;
    {
        const bool branch_taken_0x14fdf0 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x14fdf0) {
            ctx->pc = 0x14FDF4u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x14FDF8u;
            goto label_14fdf8;
        }
    }
    ctx->pc = 0x14FDF8u;
label_14fdf8:
    // 0x14fdf8: 0x2673ffff
    ctx->pc = 0x14fdf8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x14fdfc: 0x2012
    ctx->pc = 0x14fdfcu;
    SET_GPR_U32(ctx, 4, ctx->lo);
    // 0x14fe00: 0x2a42023
    ctx->pc = 0x14fe00u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x14fe04: 0xc0448ba
    ctx->pc = 0x14FE04u;
    SET_GPR_U32(ctx, 31, 0x14FE0Cu);
    ctx->pc = 0x14FE08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FE0Cu; }
    }
    if (ctx->pc != 0x14FE0Cu) { return; }
    ctx->pc = 0x14FE0Cu;
    // 0x14fe0c: 0x3c010024
    ctx->pc = 0x14fe0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x14fe10: 0xdc25e300
    ctx->pc = 0x14fe10u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294959872)));
    // 0x14fe14: 0xc04476c
    ctx->pc = 0x14FE14u;
    SET_GPR_U32(ctx, 31, 0x14FE1Cu);
    ctx->pc = 0x14FE18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FE1Cu; }
    }
    if (ctx->pc != 0x14FE1Cu) { return; }
    ctx->pc = 0x14FE1Cu;
    // 0x14fe1c: 0x3405ff80
    ctx->pc = 0x14fe1cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65408));
    // 0x14fe20: 0x52bbc
    ctx->pc = 0x14fe20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x14fe24: 0xc04473c
    ctx->pc = 0x14FE24u;
    SET_GPR_U32(ctx, 31, 0x14FE2Cu);
    ctx->pc = 0x14FE28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FE2Cu; }
    }
    if (ctx->pc != 0x14FE2Cu) { return; }
    ctx->pc = 0x14FE2Cu;
    // 0x14fe2c: 0xc0448e8
    ctx->pc = 0x14FE2Cu;
    SET_GPR_U32(ctx, 31, 0x14FE34u);
    ctx->pc = 0x14FE30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1123A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001123A0_0x1123a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FE34u; }
    }
    if (ctx->pc != 0x14FE34u) { return; }
    ctx->pc = 0x14FE34u;
    // 0x14fe34: 0xa6140006
    ctx->pc = 0x14fe34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 20));
    // 0x14fe38: 0x21400
    ctx->pc = 0x14fe38u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x14fe3c: 0x21403
    ctx->pc = 0x14fe3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x14fe40: 0xa6020000
    ctx->pc = 0x14fe40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x14fe44: 0xa6020004
    ctx->pc = 0x14fe44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x14fe48: 0xa6020002
    ctx->pc = 0x14fe48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x14fe4c: 0x661ffe6
    ctx->pc = 0x14FE4Cu;
    {
        const bool branch_taken_0x14fe4c = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x14FE50u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8));
        if (branch_taken_0x14fe4c) {
            ctx->pc = 0x14FDE8u;
            goto label_14fde8;
        }
    }
    ctx->pc = 0x14FE54u;
    // 0x14fe54: 0xdfb00000
    ctx->pc = 0x14fe54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14fe58: 0xdfb10008
    ctx->pc = 0x14fe58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14fe5c: 0xdfb20010
    ctx->pc = 0x14fe5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14fe60: 0xdfb30018
    ctx->pc = 0x14fe60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14fe64: 0xdfb40020
    ctx->pc = 0x14fe64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14fe68: 0xdfb50028
    ctx->pc = 0x14fe68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14fe6c: 0xdfb60030
    ctx->pc = 0x14fe6cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14fe70: 0xdfb70038
    ctx->pc = 0x14fe70u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14fe74: 0xdfbe0040
    ctx->pc = 0x14fe74u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14fe78: 0xdfbf0048
    ctx->pc = 0x14fe78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14fe7c: 0x3e00008
    ctx->pc = 0x14FE7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FE80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14FC28u: goto label_14fc28;
            case 0x14FD08u: goto label_14fd08;
            case 0x14FD38u: goto label_14fd38;
            case 0x14FD48u: goto label_14fd48;
            case 0x14FDB8u: goto label_14fdb8;
            case 0x14FDE8u: goto label_14fde8;
            case 0x14FDF8u: goto label_14fdf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14FE84u;
    // 0x14fe84: 0x0
    ctx->pc = 0x14fe84u;
    // NOP
}
