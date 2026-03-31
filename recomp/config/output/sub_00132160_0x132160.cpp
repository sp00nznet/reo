#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00132160
// Address: 0x132160 - 0x1324a8
void sub_00132160_0x132160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x132160u;

label_132160:
    // 0x132160: 0x27bdffb0
    ctx->pc = 0x132160u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x132164: 0xffb20020
    ctx->pc = 0x132164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x132168: 0x80902d
    ctx->pc = 0x132168u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13216c: 0xffb30028
    ctx->pc = 0x13216cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x132170: 0xa0982d
    ctx->pc = 0x132170u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132174: 0xffb50038
    ctx->pc = 0x132174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x132178: 0xc0a82d
    ctx->pc = 0x132178u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13217c: 0xffb00010
    ctx->pc = 0x13217cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x132180: 0xffb10018
    ctx->pc = 0x132180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x132184: 0xffb40030
    ctx->pc = 0x132184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x132188: 0xffb60040
    ctx->pc = 0x132188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x13218c: 0x12400005
    ctx->pc = 0x13218Cu;
    {
        const bool branch_taken_0x13218c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x132190u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        if (branch_taken_0x13218c) {
            ctx->pc = 0x1321A4u;
            goto label_1321a4;
        }
    }
    ctx->pc = 0x132194u;
    // 0x132194: 0x52600004
    ctx->pc = 0x132194u;
    {
        const bool branch_taken_0x132194 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x132194) {
            ctx->pc = 0x132198u;
            SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
            ctx->pc = 0x1321A8u;
            goto label_1321a8;
        }
    }
    ctx->pc = 0x13219Cu;
    // 0x13219c: 0x16a00006
    ctx->pc = 0x13219Cu;
    {
        const bool branch_taken_0x13219c = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        ctx->pc = 0x1321A0u;
        SET_GPR_U32(ctx, 16, ((uint32_t)34 << 16));
        if (branch_taken_0x13219c) {
            ctx->pc = 0x1321B8u;
            goto label_1321b8;
        }
    }
    ctx->pc = 0x1321A4u;
label_1321a4:
    // 0x1321a4: 0x3c040024
    ctx->pc = 0x1321a4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_1321a8:
    // 0x1321a8: 0xc04a034
    ctx->pc = 0x1321A8u;
    SET_GPR_U32(ctx, 31, 0x1321B0u);
    ctx->pc = 0x1321ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946672));
    ctx->pc = 0x1280D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001280D0_0x1280d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1321B0u; }
    }
    if (ctx->pc != 0x1321B0u) { return; }
    ctx->pc = 0x1321B0u;
    // 0x1321b0: 0x1000009f
    ctx->pc = 0x1321B0u;
    {
        const bool branch_taken_0x1321b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1321B4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1321b0) {
            ctx->pc = 0x132430u;
            goto label_132430;
        }
    }
    ctx->pc = 0x1321B8u;
label_1321b8:
    // 0x1321b8: 0x8e02b750
    ctx->pc = 0x1321b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294948688)));
    // 0x1321bc: 0x14400006
    ctx->pc = 0x1321BCu;
    {
        const bool branch_taken_0x1321bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1321C0u;
        SET_GPR_U32(ctx, 17, ((uint32_t)34 << 16));
        if (branch_taken_0x1321bc) {
            ctx->pc = 0x1321D8u;
            goto label_1321d8;
        }
    }
    ctx->pc = 0x1321C4u;
    // 0x1321c4: 0xc04c80a
    ctx->pc = 0x1321C4u;
    SET_GPR_U32(ctx, 31, 0x1321CCu);
    ctx->pc = 0x132028u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00132028_0x132028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1321CCu; }
    }
    if (ctx->pc != 0x1321CCu) { return; }
    ctx->pc = 0x1321CCu;
    // 0x1321cc: 0x10000098
    ctx->pc = 0x1321CCu;
    {
        const bool branch_taken_0x1321cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1321D0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1321cc) {
            ctx->pc = 0x132430u;
            goto label_132430;
        }
    }
    ctx->pc = 0x1321D4u;
    // 0x1321d4: 0x0
    ctx->pc = 0x1321d4u;
    // NOP
label_1321d8:
    // 0x1321d8: 0xae20b78c
    ctx->pc = 0x1321d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294948748), GPR_U32(ctx, 0));
    // 0x1321dc: 0x92430001
    ctx->pc = 0x1321dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x1321e0: 0x2462fffd
    ctx->pc = 0x1321e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x1321e4: 0x2c420002
    ctx->pc = 0x1321e4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x1321e8: 0x10400061
    ctx->pc = 0x1321E8u;
    {
        const bool branch_taken_0x1321e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1321ECu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 24));
        if (branch_taken_0x1321e8) {
            ctx->pc = 0x132370u;
            goto label_132370;
        }
    }
    ctx->pc = 0x1321F0u;
    // 0x1321f0: 0x82420072
    ctx->pc = 0x1321f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 114)));
    // 0x1321f4: 0x5440000c
    ctx->pc = 0x1321F4u;
    {
        const bool branch_taken_0x1321f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1321f4) {
            ctx->pc = 0x1321F8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 156)));
            ctx->pc = 0x132228u;
            goto label_132228;
        }
    }
    ctx->pc = 0x1321FCu;
    // 0x1321fc: 0x3c020021
    ctx->pc = 0x1321fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x132200: 0x8e4400a0
    ctx->pc = 0x132200u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x132204: 0x8c43f3c4
    ctx->pc = 0x132204u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294964164)));
    // 0x132208: 0x8e45009c
    ctx->pc = 0x132208u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x13220c: 0x641823
    ctx->pc = 0x13220cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x132210: 0x31040
    ctx->pc = 0x132210u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x132214: 0x431021
    ctx->pc = 0x132214u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x132218: 0x210c0
    ctx->pc = 0x132218u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x13221c: 0x431021
    ctx->pc = 0x13221cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x132220: 0x21080
    ctx->pc = 0x132220u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x132224: 0x451021
    ctx->pc = 0x132224u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_132228:
    // 0x132228: 0xae620000
    ctx->pc = 0x132228u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x13222c: 0x3a0282d
    ctx->pc = 0x13222cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132230: 0x27a60004
    ctx->pc = 0x132230u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
    // 0x132234: 0x240202d
    ctx->pc = 0x132234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132238: 0xc04c80a
    ctx->pc = 0x132238u;
    SET_GPR_U32(ctx, 31, 0x132240u);
    ctx->pc = 0x13223Cu;
    SET_GPR_U32(ctx, 22, ((uint32_t)34 << 16));
    ctx->pc = 0x132028u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00132028_0x132028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132240u; }
    }
    if (ctx->pc != 0x132240u) { return; }
    ctx->pc = 0x132240u;
    // 0x132240: 0xc6610000
    ctx->pc = 0x132240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132244: 0x46800860
    ctx->pc = 0x132244u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x132248: 0x26d4b788
    ctx->pc = 0x132248u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 22), 4294948744));
    // 0x13224c: 0x8fa50000
    ctx->pc = 0x13224cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132250: 0x8fa60004
    ctx->pc = 0x132250u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x132254: 0x8e870000
    ctx->pc = 0x132254u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x132258: 0x44850000
    ctx->pc = 0x132258u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 5);
    // 0x13225c: 0x46800020
    ctx->pc = 0x13225cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x132260: 0x44861800
    ctx->pc = 0x132260u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 6);
    // 0x132264: 0x468018e0
    ctx->pc = 0x132264u;
    ctx->f[3] = FPU_CVT_S_W(*(int32_t*)&ctx->f[3]);
    // 0x132268: 0x3c01447a
    ctx->pc = 0x132268u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17530 << 16));
    // 0x13226c: 0x44812800
    ctx->pc = 0x13226cu;
    *(uint32_t*)&ctx->f[5] = GPR_U32(ctx, 1);
    // 0x132270: 0x44871000
    ctx->pc = 0x132270u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 7);
    // 0x132274: 0x468010a0
    ctx->pc = 0x132274u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x132278: 0x3c014270
    ctx->pc = 0x132278u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17008 << 16));
    // 0x13227c: 0x44812000
    ctx->pc = 0x13227cu;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 1);
    // 0x132280: 0x0
    ctx->pc = 0x132280u;
    // NOP
    // 0x132284: 0x0
    ctx->pc = 0x132284u;
    // NOP
    // 0x132288: 0x46030003
    ctx->pc = 0x132288u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x13228c: 0x0
    ctx->pc = 0x13228cu;
    // NOP
    // 0x132290: 0x0
    ctx->pc = 0x132290u;
    // NOP
    // 0x132294: 0x46020843
    ctx->pc = 0x132294u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x132298: 0x46010001
    ctx->pc = 0x132298u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x13229c: 0x46050042
    ctx->pc = 0x13229cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1322a0: 0x46012034
    ctx->pc = 0x1322a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1322a4: 0x45010006
    ctx->pc = 0x1322A4u;
    {
        const bool branch_taken_0x1322a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1322A8u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294948748), bits); }
        if (branch_taken_0x1322a4) {
            ctx->pc = 0x1322C0u;
            goto label_1322c0;
        }
    }
    ctx->pc = 0x1322ACu;
    // 0x1322ac: 0x3c01c270
    ctx->pc = 0x1322acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49776 << 16));
    // 0x1322b0: 0x44810000
    ctx->pc = 0x1322b0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x1322b4: 0x46000834
    ctx->pc = 0x1322b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1322b8: 0x45020057
    ctx->pc = 0x1322B8u;
    {
        const bool branch_taken_0x1322b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1322b8) {
            ctx->pc = 0x1322BCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 136)));
            ctx->pc = 0x132418u;
            goto label_132418;
        }
    }
    ctx->pc = 0x1322C0u;
label_1322c0:
    // 0x1322c0: 0x3c020022
    ctx->pc = 0x1322c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x1322c4: 0x24040001
    ctx->pc = 0x1322c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1322c8: 0x8c43b760
    ctx->pc = 0x1322c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294948704)));
    // 0x1322cc: 0x1464000c
    ctx->pc = 0x1322CCu;
    {
        const bool branch_taken_0x1322cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x1322D0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294948688));
        if (branch_taken_0x1322cc) {
            ctx->pc = 0x132300u;
            goto label_132300;
        }
    }
    ctx->pc = 0x1322D4u;
    // 0x1322d4: 0x3a0282d
    ctx->pc = 0x1322d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1322d8: 0x8e110000
    ctx->pc = 0x1322d8u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1322dc: 0x27a60004
    ctx->pc = 0x1322dcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
    // 0x1322e0: 0xae000000
    ctx->pc = 0x1322e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1322e4: 0xc04c858
    ctx->pc = 0x1322E4u;
    SET_GPR_U32(ctx, 31, 0x1322ECu);
    ctx->pc = 0x1322E8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x132160u;
    goto label_132160;
    ctx->pc = 0x1322ECu;
label_1322ec:
    // 0x1322ec: 0xc04c852
    ctx->pc = 0x1322ECu;
    SET_GPR_U32(ctx, 31, 0x1322F4u);
    ctx->pc = 0x1322F0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    ctx->pc = 0x132148u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00132148_0x132148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1322F4u; }
    }
    if (ctx->pc != 0x1322F4u) { return; }
    ctx->pc = 0x1322F4u;
    // 0x1322f4: 0x8e870000
    ctx->pc = 0x1322f4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1322f8: 0x8fa50000
    ctx->pc = 0x1322f8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1322fc: 0x8fa60004
    ctx->pc = 0x1322fcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_132300:
    // 0x132300: 0x44860800
    ctx->pc = 0x132300u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 6);
    // 0x132304: 0x46800860
    ctx->pc = 0x132304u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x132308: 0x3c014f00
    ctx->pc = 0x132308u;
    SET_GPR_U32(ctx, 1, ((uint32_t)20224 << 16));
    // 0x13230c: 0x44811800
    ctx->pc = 0x13230cu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x132310: 0x44850000
    ctx->pc = 0x132310u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 5);
    // 0x132314: 0x46800020
    ctx->pc = 0x132314u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x132318: 0x44871000
    ctx->pc = 0x132318u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 7);
    // 0x13231c: 0x468010a0
    ctx->pc = 0x13231cu;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x132320: 0x0
    ctx->pc = 0x132320u;
    // NOP
    // 0x132324: 0x0
    ctx->pc = 0x132324u;
    // NOP
    // 0x132328: 0x46010003
    ctx->pc = 0x132328u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x13232c: 0x46020002
    ctx->pc = 0x13232cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x132330: 0x46001836
    ctx->pc = 0x132330u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x132334: 0x46000064
    ctx->pc = 0x132334u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x132338: 0x44030800
    ctx->pc = 0x132338u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x13233c: 0x45020007
    ctx->pc = 0x13233Cu;
    {
        const bool branch_taken_0x13233c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13233c) {
            ctx->pc = 0x132340u;
            WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 3));
            ctx->pc = 0x13235Cu;
            goto label_13235c;
        }
    }
    ctx->pc = 0x132344u;
    // 0x132344: 0x46030001
    ctx->pc = 0x132344u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x132348: 0x3c028000
    ctx->pc = 0x132348u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x13234c: 0x46000064
    ctx->pc = 0x13234cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x132350: 0x44030800
    ctx->pc = 0x132350u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x132354: 0x621825
    ctx->pc = 0x132354u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x132358: 0xae43009c
    ctx->pc = 0x132358u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 3));
label_13235c:
    // 0x13235c: 0x3c030021
    ctx->pc = 0x13235cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x132360: 0x8c62f3c4
    ctx->pc = 0x132360u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294964164)));
    // 0x132364: 0x1000002b
    ctx->pc = 0x132364u;
    {
        const bool branch_taken_0x132364 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x132368u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
        if (branch_taken_0x132364) {
            ctx->pc = 0x132414u;
            goto label_132414;
        }
    }
    ctx->pc = 0x13236Cu;
    // 0x13236c: 0x0
    ctx->pc = 0x13236cu;
    // NOP
label_132370:
    // 0x132370: 0x24030005
    ctx->pc = 0x132370u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x132374: 0x21603
    ctx->pc = 0x132374u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x132378: 0x54430025
    ctx->pc = 0x132378u;
    {
        const bool branch_taken_0x132378 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x132378) {
            ctx->pc = 0x13237Cu;
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x132410u;
            goto label_132410;
        }
    }
    ctx->pc = 0x132380u;
    // 0x132380: 0x8e440004
    ctx->pc = 0x132380u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x132384: 0xc04b602
    ctx->pc = 0x132384u;
    SET_GPR_U32(ctx, 31, 0x13238Cu);
    ctx->pc = 0x132388u;
    SET_GPR_U32(ctx, 22, ((uint32_t)34 << 16));
    ctx->pc = 0x12D808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D808_0x12d808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13238Cu; }
    }
    if (ctx->pc != 0x13238Cu) { return; }
    ctx->pc = 0x13238Cu;
    // 0x13238c: 0x8e440004
    ctx->pc = 0x13238cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x132390: 0xc04b5e4
    ctx->pc = 0x132390u;
    SET_GPR_U32(ctx, 31, 0x132398u);
    ctx->pc = 0x132394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x12D790u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D790_0x12d790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132398u; }
    }
    if (ctx->pc != 0x132398u) { return; }
    ctx->pc = 0x132398u;
    // 0x132398: 0x8e440004
    ctx->pc = 0x132398u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13239c: 0xc04b5f0
    ctx->pc = 0x13239Cu;
    SET_GPR_U32(ctx, 31, 0x1323A4u);
    ctx->pc = 0x1323A0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x12D7C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D7C0_0x12d7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1323A4u; }
    }
    if (ctx->pc != 0x1323A4u) { return; }
    ctx->pc = 0x1323A4u;
    // 0x1323a4: 0x24030010
    ctx->pc = 0x1323a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1323a8: 0x62001a
    ctx->pc = 0x1323a8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1323ac: 0x50400001
    ctx->pc = 0x1323ACu;
    {
        const bool branch_taken_0x1323ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1323ac) {
            ctx->pc = 0x1323B0u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1323B4u;
            goto label_1323b4;
        }
    }
    ctx->pc = 0x1323B4u;
label_1323b4:
    // 0x1323b4: 0x8fa20000
    ctx->pc = 0x1323b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1323b8: 0xc7a20004
    ctx->pc = 0x1323b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1323bc: 0x468010a0
    ctx->pc = 0x1323bcu;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x1323c0: 0xc6c1b788
    ctx->pc = 0x1323c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294948744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1323c4: 0x46800860
    ctx->pc = 0x1323c4u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1323c8: 0x1812
    ctx->pc = 0x1323c8u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x1323cc: 0x432818
    ctx->pc = 0x1323ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x1323d0: 0x44850000
    ctx->pc = 0x1323d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 5);
    // 0x1323d4: 0x46800020
    ctx->pc = 0x1323d4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1323d8: 0xafa50000
    ctx->pc = 0x1323d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1323dc: 0x0
    ctx->pc = 0x1323dcu;
    // NOP
    // 0x1323e0: 0x0
    ctx->pc = 0x1323e0u;
    // NOP
    // 0x1323e4: 0x46020003
    ctx->pc = 0x1323e4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x1323e8: 0x46010002
    ctx->pc = 0x1323e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1323ec: 0x46000064
    ctx->pc = 0x1323ecu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1323f0: 0x44030800
    ctx->pc = 0x1323f0u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x1323f4: 0xae630000
    ctx->pc = 0x1323f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1323f8: 0x8e42009c
    ctx->pc = 0x1323f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x1323fc: 0x24420001
    ctx->pc = 0x1323fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x132400: 0x621821
    ctx->pc = 0x132400u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x132404: 0x10000003
    ctx->pc = 0x132404u;
    {
        const bool branch_taken_0x132404 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x132408u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x132404) {
            ctx->pc = 0x132414u;
            goto label_132414;
        }
    }
    ctx->pc = 0x13240Cu;
    // 0x13240c: 0x0
    ctx->pc = 0x13240cu;
    // NOP
label_132410:
    // 0x132410: 0x3c160022
    ctx->pc = 0x132410u;
    SET_GPR_U32(ctx, 22, ((uint32_t)34 << 16));
label_132414:
    // 0x132414: 0x8e420088
    ctx->pc = 0x132414u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_132418:
    // 0x132418: 0x8e630000
    ctx->pc = 0x132418u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13241c: 0x621821
    ctx->pc = 0x13241cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x132420: 0xae630000
    ctx->pc = 0x132420u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x132424: 0x8ec2b788
    ctx->pc = 0x132424u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 4294948744)));
    // 0x132428: 0xaea20000
    ctx->pc = 0x132428u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x13242c: 0xdfb00010
    ctx->pc = 0x13242cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_132430:
    // 0x132430: 0xdfb10018
    ctx->pc = 0x132430u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x132434: 0xdfb20020
    ctx->pc = 0x132434u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132438: 0xdfb30028
    ctx->pc = 0x132438u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13243c: 0xdfb40030
    ctx->pc = 0x13243cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x132440: 0xdfb50038
    ctx->pc = 0x132440u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132444: 0xdfb60040
    ctx->pc = 0x132444u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x132448: 0xdfbf0048
    ctx->pc = 0x132448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13244c: 0x3e00008
    ctx->pc = 0x13244Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132450u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132160u: goto label_132160;
            case 0x1321A4u: goto label_1321a4;
            case 0x1321A8u: goto label_1321a8;
            case 0x1321B8u: goto label_1321b8;
            case 0x1321D8u: goto label_1321d8;
            case 0x132228u: goto label_132228;
            case 0x1322C0u: goto label_1322c0;
            case 0x1322ECu: goto label_1322ec;
            case 0x132300u: goto label_132300;
            case 0x13235Cu: goto label_13235c;
            case 0x132370u: goto label_132370;
            case 0x1323B4u: goto label_1323b4;
            case 0x132410u: goto label_132410;
            case 0x132414u: goto label_132414;
            case 0x132418u: goto label_132418;
            case 0x132430u: goto label_132430;
            case 0x13246Cu: goto label_13246c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x132454u;
    // 0x132454: 0x0
    ctx->pc = 0x132454u;
    // NOP
    // 0x132458: 0x27bdffe0
    ctx->pc = 0x132458u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13245c: 0x3a0282d
    ctx->pc = 0x13245cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132460: 0xffbf0010
    ctx->pc = 0x132460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x132464: 0xc04c858
    ctx->pc = 0x132464u;
    SET_GPR_U32(ctx, 31, 0x13246Cu);
    ctx->pc = 0x132468u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x132160u;
    goto label_132160;
    ctx->pc = 0x13246Cu;
label_13246c:
    // 0x13246c: 0xc7a10000
    ctx->pc = 0x13246cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132470: 0x46800860
    ctx->pc = 0x132470u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x132474: 0x3c0142c8
    ctx->pc = 0x132474u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17096 << 16));
    // 0x132478: 0x44810000
    ctx->pc = 0x132478u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x13247c: 0xc7a20004
    ctx->pc = 0x13247cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x132480: 0x468010a0
    ctx->pc = 0x132480u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x132484: 0xdfbf0010
    ctx->pc = 0x132484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132488: 0x0
    ctx->pc = 0x132488u;
    // NOP
    // 0x13248c: 0x0
    ctx->pc = 0x13248cu;
    // NOP
    // 0x132490: 0x46020843
    ctx->pc = 0x132490u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x132494: 0x46000842
    ctx->pc = 0x132494u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x132498: 0x46000824
    ctx->pc = 0x132498u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x13249c: 0x44020000
    ctx->pc = 0x13249cu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1324a0: 0x3e00008
    ctx->pc = 0x1324A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1324A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132160u: goto label_132160;
            case 0x1321A4u: goto label_1321a4;
            case 0x1321A8u: goto label_1321a8;
            case 0x1321B8u: goto label_1321b8;
            case 0x1321D8u: goto label_1321d8;
            case 0x132228u: goto label_132228;
            case 0x1322C0u: goto label_1322c0;
            case 0x1322ECu: goto label_1322ec;
            case 0x132300u: goto label_132300;
            case 0x13235Cu: goto label_13235c;
            case 0x132370u: goto label_132370;
            case 0x1323B4u: goto label_1323b4;
            case 0x132410u: goto label_132410;
            case 0x132414u: goto label_132414;
            case 0x132418u: goto label_132418;
            case 0x132430u: goto label_132430;
            case 0x13246Cu: goto label_13246c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1324A8u;
}
