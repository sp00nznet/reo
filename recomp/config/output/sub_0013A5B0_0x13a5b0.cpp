#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013A5B0
// Address: 0x13a5b0 - 0x13a738
void sub_0013A5B0_0x13a5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13a5b0u;

    // 0x13a5b0: 0x27bdff80
    ctx->pc = 0x13a5b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x13a5b4: 0x3c030024
    ctx->pc = 0x13a5b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x13a5b8: 0xffb10058
    ctx->pc = 0x13a5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x13a5bc: 0x80882d
    ctx->pc = 0x13a5bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a5c0: 0xffb20060
    ctx->pc = 0x13a5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x13a5c4: 0xa0902d
    ctx->pc = 0x13a5c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a5c8: 0xffb00050
    ctx->pc = 0x13a5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x13a5cc: 0x27a20040
    ctx->pc = 0x13a5ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 64));
    // 0x13a5d0: 0xffb30068
    ctx->pc = 0x13a5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x13a5d4: 0x2465cc80
    ctx->pc = 0x13a5d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294954112));
    // 0x13a5d8: 0xffbf0070
    ctx->pc = 0x13a5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x13a5dc: 0x40202d
    ctx->pc = 0x13a5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a5e0: 0x8a230003
    ctx->pc = 0x13a5e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 3, (GPR_U32(ctx, 3) & ~mask) | ((aligned_word << shift) & mask)); }
    // 0x13a5e4: 0x9a230000
    ctx->pc = 0x13a5e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 3, (GPR_U32(ctx, 3) & ~mask) | ((aligned_word >> shift) & mask)); }
    // 0x13a5e8: 0x82260004
    ctx->pc = 0x13a5e8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13a5ec: 0xa8430003
    ctx->pc = 0x13a5ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 3) >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x13a5f0: 0xb8430000
    ctx->pc = 0x13a5f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 3) << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x13a5f4: 0xa0460004
    ctx->pc = 0x13a5f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 6));
    // 0x13a5f8: 0xc042ab8
    ctx->pc = 0x13A5F8u;
    SET_GPR_U32(ctx, 31, 0x13A600u);
    ctx->pc = 0x13A5FCu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x10AAE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AAE0_0x10aae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A600u; }
    }
    if (ctx->pc != 0x13A600u) { return; }
    ctx->pc = 0x13A600u;
    // 0x13a600: 0x54400007
    ctx->pc = 0x13A600u;
    {
        const bool branch_taken_0x13a600 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x13a600) {
            ctx->pc = 0x13A604u;
            SET_GPR_U32(ctx, 19, ((uint32_t)34 << 16));
            ctx->pc = 0x13A620u;
            goto label_13a620;
        }
    }
    ctx->pc = 0x13A608u;
    // 0x13a608: 0x26240004
    ctx->pc = 0x13a608u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 4));
    // 0x13a60c: 0xc04f090
    ctx->pc = 0x13A60Cu;
    SET_GPR_U32(ctx, 31, 0x13A614u);
    ctx->pc = 0x13A610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13C240u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C240_0x13c240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A614u; }
    }
    if (ctx->pc != 0x13A614u) { return; }
    ctx->pc = 0x13A614u;
    // 0x13a614: 0x10000042
    ctx->pc = 0x13A614u;
    {
        const bool branch_taken_0x13a614 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13A618u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x13a614) {
            ctx->pc = 0x13A720u;
            goto label_13a720;
        }
    }
    ctx->pc = 0x13A61Cu;
    // 0x13a61c: 0x0
    ctx->pc = 0x13a61cu;
    // NOP
label_13a620:
    // 0x13a620: 0x24060080
    ctx->pc = 0x13a620u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 128));
    // 0x13a624: 0x2670d9f8
    ctx->pc = 0x13a624u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 4294957560));
    // 0x13a628: 0x282d
    ctx->pc = 0x13a628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a62c: 0xc041f1a
    ctx->pc = 0x13A62Cu;
    SET_GPR_U32(ctx, 31, 0x13A634u);
    ctx->pc = 0x13A630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A634u; }
    }
    if (ctx->pc != 0x13A634u) { return; }
    ctx->pc = 0x13A634u;
    // 0x13a634: 0x220202d
    ctx->pc = 0x13a634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a638: 0x200282d
    ctx->pc = 0x13a638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a63c: 0xc04e892
    ctx->pc = 0x13A63Cu;
    SET_GPR_U32(ctx, 31, 0x13A644u);
    ctx->pc = 0x13A640u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x13A248u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A248_0x13a248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A644u; }
    }
    if (ctx->pc != 0x13A644u) { return; }
    ctx->pc = 0x13A644u;
    // 0x13a644: 0xc04e082
    ctx->pc = 0x13A644u;
    SET_GPR_U32(ctx, 31, 0x13A64Cu);
    ctx->pc = 0x13A648u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 36864));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A64Cu; }
    }
    if (ctx->pc != 0x13A64Cu) { return; }
    ctx->pc = 0x13A64Cu;
    // 0x13a64c: 0x0
    ctx->pc = 0x13a64cu;
    // NOP
label_13a650:
    // 0x13a650: 0xc04035e
    ctx->pc = 0x13A650u;
    SET_GPR_U32(ctx, 31, 0x13A658u);
    ctx->pc = 0x13A654u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x100D78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00100D78_0x100d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A658u; }
    }
    if (ctx->pc != 0x13A658u) { return; }
    ctx->pc = 0x13A658u;
    // 0x13a658: 0x1050fffd
    ctx->pc = 0x13A658u;
    {
        const bool branch_taken_0x13a658 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 16));
        if (branch_taken_0x13a658) {
            ctx->pc = 0x13A650u;
            goto label_13a650;
        }
    }
    ctx->pc = 0x13A660u;
    // 0x13a660: 0xc04e082
    ctx->pc = 0x13A660u;
    SET_GPR_U32(ctx, 31, 0x13A668u);
    ctx->pc = 0x13A664u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 36865));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A668u; }
    }
    if (ctx->pc != 0x13A668u) { return; }
    ctx->pc = 0x13A668u;
    // 0x13a668: 0xc04e082
    ctx->pc = 0x13A668u;
    SET_GPR_U32(ctx, 31, 0x13A670u);
    ctx->pc = 0x13A66Cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 37120));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A670u; }
    }
    if (ctx->pc != 0x13A670u) { return; }
    ctx->pc = 0x13A670u;
    // 0x13a670: 0x2665d9f8
    ctx->pc = 0x13a670u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294957560));
    // 0x13a674: 0xc04e58a
    ctx->pc = 0x13A674u;
    SET_GPR_U32(ctx, 31, 0x13A67Cu);
    ctx->pc = 0x13A678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x139628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00139628_0x139628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A67Cu; }
    }
    if (ctx->pc != 0x13A67Cu) { return; }
    ctx->pc = 0x13A67Cu;
    // 0x13a67c: 0x14400004
    ctx->pc = 0x13A67Cu;
    {
        const bool branch_taken_0x13a67c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x13a67c) {
            ctx->pc = 0x13A690u;
            goto label_13a690;
        }
    }
    ctx->pc = 0x13A684u;
    // 0x13a684: 0x10000013
    ctx->pc = 0x13A684u;
    {
        const bool branch_taken_0x13a684 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13A688u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 37121));
        if (branch_taken_0x13a684) {
            ctx->pc = 0x13A6D4u;
            goto label_13a6d4;
        }
    }
    ctx->pc = 0x13A68Cu;
    // 0x13a68c: 0x0
    ctx->pc = 0x13a68cu;
    // NOP
label_13a690:
    // 0x13a690: 0xc04e082
    ctx->pc = 0x13A690u;
    SET_GPR_U32(ctx, 31, 0x13A698u);
    ctx->pc = 0x13A694u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 37122));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A698u; }
    }
    if (ctx->pc != 0x13A698u) { return; }
    ctx->pc = 0x13A698u;
    // 0x13a698: 0x24020001
    ctx->pc = 0x13a698u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a69c: 0x34049200
    ctx->pc = 0x13a69cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 37376));
    // 0x13a6a0: 0xa3a20031
    ctx->pc = 0x13a6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x13a6a4: 0xa3a00030
    ctx->pc = 0x13a6a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x13a6a8: 0xa3a00032
    ctx->pc = 0x13a6a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x13a6ac: 0xc04e082
    ctx->pc = 0x13A6ACu;
    SET_GPR_U32(ctx, 31, 0x13A6B4u);
    ctx->pc = 0x13A6B0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 51), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A6B4u; }
    }
    if (ctx->pc != 0x13A6B4u) { return; }
    ctx->pc = 0x13A6B4u;
    // 0x13a6b4: 0x8fa40000
    ctx->pc = 0x13a6b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a6b8: 0x27a70030
    ctx->pc = 0x13a6b8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 48));
    // 0x13a6bc: 0x240302d
    ctx->pc = 0x13a6bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a6c0: 0xc0405e2
    ctx->pc = 0x13A6C0u;
    SET_GPR_U32(ctx, 31, 0x13A6C8u);
    ctx->pc = 0x13A6C4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x101788u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00101788_0x101788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A6C8u; }
    }
    if (ctx->pc != 0x13A6C8u) { return; }
    ctx->pc = 0x13A6C8u;
    // 0x13a6c8: 0x14400007
    ctx->pc = 0x13A6C8u;
    {
        const bool branch_taken_0x13a6c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x13a6c8) {
            ctx->pc = 0x13A6E8u;
            goto label_13a6e8;
        }
    }
    ctx->pc = 0x13A6D0u;
    // 0x13a6d0: 0x34049201
    ctx->pc = 0x13a6d0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 37377));
label_13a6d4:
    // 0x13a6d4: 0xc04e082
    ctx->pc = 0x13A6D4u;
    SET_GPR_U32(ctx, 31, 0x13A6DCu);
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A6DCu; }
    }
    if (ctx->pc != 0x13A6DCu) { return; }
    ctx->pc = 0x13A6DCu;
    // 0x13a6dc: 0x1000000f
    ctx->pc = 0x13A6DCu;
    {
        const bool branch_taken_0x13a6dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13A6E0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13a6dc) {
            ctx->pc = 0x13A71Cu;
            goto label_13a71c;
        }
    }
    ctx->pc = 0x13A6E4u;
    // 0x13a6e4: 0x0
    ctx->pc = 0x13a6e4u;
    // NOP
label_13a6e8:
    // 0x13a6e8: 0xc04e082
    ctx->pc = 0x13A6E8u;
    SET_GPR_U32(ctx, 31, 0x13A6F0u);
    ctx->pc = 0x13A6ECu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 37378));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A6F0u; }
    }
    if (ctx->pc != 0x13A6F0u) { return; }
    ctx->pc = 0x13A6F0u;
    // 0x13a6f0: 0xc04e082
    ctx->pc = 0x13A6F0u;
    SET_GPR_U32(ctx, 31, 0x13A6F8u);
    ctx->pc = 0x13A6F4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 37632));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A6F8u; }
    }
    if (ctx->pc != 0x13A6F8u) { return; }
    ctx->pc = 0x13A6F8u;
    // 0x13a6f8: 0x24100001
    ctx->pc = 0x13a6f8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a6fc: 0x0
    ctx->pc = 0x13a6fcu;
    // NOP
label_13a700:
    // 0x13a700: 0xc04035e
    ctx->pc = 0x13A700u;
    SET_GPR_U32(ctx, 31, 0x13A708u);
    ctx->pc = 0x13A704u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x100D78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00100D78_0x100d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A708u; }
    }
    if (ctx->pc != 0x13A708u) { return; }
    ctx->pc = 0x13A708u;
    // 0x13a708: 0x1050fffd
    ctx->pc = 0x13A708u;
    {
        const bool branch_taken_0x13a708 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 16));
        if (branch_taken_0x13a708) {
            ctx->pc = 0x13A700u;
            goto label_13a700;
        }
    }
    ctx->pc = 0x13A710u;
    // 0x13a710: 0xc04e082
    ctx->pc = 0x13A710u;
    SET_GPR_U32(ctx, 31, 0x13A718u);
    ctx->pc = 0x13A714u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 37633));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A718u; }
    }
    if (ctx->pc != 0x13A718u) { return; }
    ctx->pc = 0x13A718u;
    // 0x13a718: 0x24020001
    ctx->pc = 0x13a718u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_13a71c:
    // 0x13a71c: 0xdfb00050
    ctx->pc = 0x13a71cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_13a720:
    // 0x13a720: 0xdfb10058
    ctx->pc = 0x13a720u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13a724: 0xdfb20060
    ctx->pc = 0x13a724u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13a728: 0xdfb30068
    ctx->pc = 0x13a728u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x13a72c: 0xdfbf0070
    ctx->pc = 0x13a72cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13a730: 0x3e00008
    ctx->pc = 0x13A730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A734u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13A620u: goto label_13a620;
            case 0x13A650u: goto label_13a650;
            case 0x13A690u: goto label_13a690;
            case 0x13A6D4u: goto label_13a6d4;
            case 0x13A6E8u: goto label_13a6e8;
            case 0x13A700u: goto label_13a700;
            case 0x13A71Cu: goto label_13a71c;
            case 0x13A720u: goto label_13a720;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13A738u;
}
