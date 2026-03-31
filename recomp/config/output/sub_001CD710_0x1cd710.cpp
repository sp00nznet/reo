#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CD710
// Address: 0x1cd710 - 0x1cdda0
void sub_001CD710_0x1cd710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cd710u;

    // 0x1cd710: 0x3c02ffff
    ctx->pc = 0x1cd710u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x1cd714: 0x27bdfff0
    ctx->pc = 0x1cd714u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cd718: 0xa21024
    ctx->pc = 0x1cd718u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1cd71c: 0x28830100
    ctx->pc = 0x1cd71cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 256));
    // 0x1cd720: 0xffbf0000
    ctx->pc = 0x1cd720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cd724: 0x14600014
    ctx->pc = 0x1CD724u;
    {
        const bool branch_taken_0x1cd724 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CD728u;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 16));
        if (branch_taken_0x1cd724) {
            ctx->pc = 0x1CD778u;
            goto label_1cd778;
        }
    }
    ctx->pc = 0x1CD72Cu;
    // 0x1cd72c: 0x28810ff0
    ctx->pc = 0x1cd72cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 4080));
    // 0x1cd730: 0x10200012
    ctx->pc = 0x1CD730u;
    {
        const bool branch_taken_0x1cd730 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CD734u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 4096));
        if (branch_taken_0x1cd730) {
            ctx->pc = 0x1CD77Cu;
            goto label_1cd77c;
        }
    }
    ctx->pc = 0x1CD738u;
    // 0x1cd738: 0x14c00008
    ctx->pc = 0x1CD738u;
    {
        const bool branch_taken_0x1cd738 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CD73Cu;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 65535));
        if (branch_taken_0x1cd738) {
            ctx->pc = 0x1CD75Cu;
            goto label_1cd75c;
        }
    }
    ctx->pc = 0x1CD740u;
    // 0x1cd740: 0x30a3ffff
    ctx->pc = 0x1cd740u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 65535));
    // 0x1cd744: 0x3c020023
    ctx->pc = 0x1cd744u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1cd748: 0x24426300
    ctx->pc = 0x1cd748u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25344));
    // 0x1cd74c: 0x31880
    ctx->pc = 0x1cd74cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cd750: 0x431021
    ctx->pc = 0x1cd750u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cd754: 0x10000006
    ctx->pc = 0x1CD754u;
    {
        const bool branch_taken_0x1cd754 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CD758u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x1cd754) {
            ctx->pc = 0x1CD770u;
            goto label_1cd770;
        }
    }
    ctx->pc = 0x1CD75Cu;
label_1cd75c:
    // 0x1cd75c: 0x3c020023
    ctx->pc = 0x1cd75cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1cd760: 0x24426630
    ctx->pc = 0x1cd760u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26160));
    // 0x1cd764: 0x31880
    ctx->pc = 0x1cd764u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cd768: 0x431021
    ctx->pc = 0x1cd768u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cd76c: 0x8c420000
    ctx->pc = 0x1cd76cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cd770:
    // 0x1cd770: 0x10000187
    ctx->pc = 0x1CD770u;
    {
        const bool branch_taken_0x1cd770 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CD774u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1cd770) {
            ctx->pc = 0x1CDD90u;
            goto label_1cdd90;
        }
    }
    ctx->pc = 0x1CD778u;
label_1cd778:
    // 0x1cd778: 0x28831000
    ctx->pc = 0x1cd778u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 4096));
label_1cd77c:
    // 0x1cd77c: 0x14600032
    ctx->pc = 0x1CD77Cu;
    {
        const bool branch_taken_0x1cd77c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CD780u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 4352));
        if (branch_taken_0x1cd77c) {
            ctx->pc = 0x1CD848u;
            goto label_1cd848;
        }
    }
    ctx->pc = 0x1CD784u;
    // 0x1cd784: 0x28811100
    ctx->pc = 0x1cd784u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 4352));
    // 0x1cd788: 0x1020002f
    ctx->pc = 0x1CD788u;
    {
        const bool branch_taken_0x1cd788 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd788) {
            ctx->pc = 0x1CD848u;
            goto label_1cd848;
        }
    }
    ctx->pc = 0x1CD790u;
    // 0x1cd790: 0x30a38000
    ctx->pc = 0x1cd790u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 32768));
    // 0x1cd794: 0x10600012
    ctx->pc = 0x1CD794u;
    {
        const bool branch_taken_0x1cd794 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd794) {
            ctx->pc = 0x1CD7E0u;
            goto label_1cd7e0;
        }
    }
    ctx->pc = 0x1CD79Cu;
    // 0x1cd79c: 0x14c00009
    ctx->pc = 0x1CD79Cu;
    {
        const bool branch_taken_0x1cd79c = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CD7A0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cd79c) {
            ctx->pc = 0x1CD7C4u;
            goto label_1cd7c4;
        }
    }
    ctx->pc = 0x1CD7A4u;
    // 0x1cd7a4: 0xc0202d
    ctx->pc = 0x1cd7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd7a8: 0x3c070025
    ctx->pc = 0x1cd7a8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)37 << 16));
    // 0x1cd7ac: 0x30a5ffff
    ctx->pc = 0x1cd7acu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65535));
    // 0x1cd7b0: 0x40302d
    ctx->pc = 0x1cd7b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd7b4: 0xc0734fc
    ctx->pc = 0x1CD7B4u;
    SET_GPR_U32(ctx, 31, 0x1CD7BCu);
    ctx->pc = 0x1CD7B8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 24632));
    ctx->pc = 0x1CD3F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD3F0_0x1cd3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD7BCu; }
    }
    if (ctx->pc != 0x1CD7BCu) { return; }
    ctx->pc = 0x1CD7BCu;
    // 0x1cd7bc: 0x10000006
    ctx->pc = 0x1CD7BCu;
    {
        const bool branch_taken_0x1cd7bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd7bc) {
            ctx->pc = 0x1CD7D8u;
            goto label_1cd7d8;
        }
    }
    ctx->pc = 0x1CD7C4u;
label_1cd7c4:
    // 0x1cd7c4: 0x3c070025
    ctx->pc = 0x1cd7c4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)37 << 16));
    // 0x1cd7c8: 0x30a5ffff
    ctx->pc = 0x1cd7c8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65535));
    // 0x1cd7cc: 0x40302d
    ctx->pc = 0x1cd7ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd7d0: 0xc0734fc
    ctx->pc = 0x1CD7D0u;
    SET_GPR_U32(ctx, 31, 0x1CD7D8u);
    ctx->pc = 0x1CD7D4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 24648));
    ctx->pc = 0x1CD3F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD3F0_0x1cd3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD7D8u; }
    }
    if (ctx->pc != 0x1CD7D8u) { return; }
    ctx->pc = 0x1CD7D8u;
label_1cd7d8:
    // 0x1cd7d8: 0x1000016c
    ctx->pc = 0x1CD7D8u;
    {
        const bool branch_taken_0x1cd7d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd7d8) {
            ctx->pc = 0x1CDD8Cu;
            goto label_1cdd8c;
        }
    }
    ctx->pc = 0x1CD7E0u;
label_1cd7e0:
    // 0x1cd7e0: 0x14c00008
    ctx->pc = 0x1CD7E0u;
    {
        const bool branch_taken_0x1cd7e0 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CD7E4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cd7e0) {
            ctx->pc = 0x1CD804u;
            goto label_1cd804;
        }
    }
    ctx->pc = 0x1CD7E8u;
    // 0x1cd7e8: 0x3c070025
    ctx->pc = 0x1cd7e8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)37 << 16));
    // 0x1cd7ec: 0x30a5ffff
    ctx->pc = 0x1cd7ecu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65535));
    // 0x1cd7f0: 0x40302d
    ctx->pc = 0x1cd7f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd7f4: 0xc0734fc
    ctx->pc = 0x1CD7F4u;
    SET_GPR_U32(ctx, 31, 0x1CD7FCu);
    ctx->pc = 0x1CD7F8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 24656));
    ctx->pc = 0x1CD3F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD3F0_0x1cd3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD7FCu; }
    }
    if (ctx->pc != 0x1CD7FCu) { return; }
    ctx->pc = 0x1CD7FCu;
    // 0x1cd7fc: 0x10000163
    ctx->pc = 0x1CD7FCu;
    {
        const bool branch_taken_0x1cd7fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd7fc) {
            ctx->pc = 0x1CDD8Cu;
            goto label_1cdd8c;
        }
    }
    ctx->pc = 0x1CD804u;
label_1cd804:
    // 0x1cd804: 0x14e00009
    ctx->pc = 0x1CD804u;
    {
        const bool branch_taken_0x1cd804 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CD808u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cd804) {
            ctx->pc = 0x1CD82Cu;
            goto label_1cd82c;
        }
    }
    ctx->pc = 0x1CD80Cu;
    // 0x1cd80c: 0xc0202d
    ctx->pc = 0x1cd80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd810: 0x3c070025
    ctx->pc = 0x1cd810u;
    SET_GPR_U32(ctx, 7, ((uint32_t)37 << 16));
    // 0x1cd814: 0x30a5ffff
    ctx->pc = 0x1cd814u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65535));
    // 0x1cd818: 0x40302d
    ctx->pc = 0x1cd818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd81c: 0xc0734fc
    ctx->pc = 0x1CD81Cu;
    SET_GPR_U32(ctx, 31, 0x1CD824u);
    ctx->pc = 0x1CD820u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 24672));
    ctx->pc = 0x1CD3F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD3F0_0x1cd3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD824u; }
    }
    if (ctx->pc != 0x1CD824u) { return; }
    ctx->pc = 0x1CD824u;
    // 0x1cd824: 0x10000006
    ctx->pc = 0x1CD824u;
    {
        const bool branch_taken_0x1cd824 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd824) {
            ctx->pc = 0x1CD840u;
            goto label_1cd840;
        }
    }
    ctx->pc = 0x1CD82Cu;
label_1cd82c:
    // 0x1cd82c: 0x3c070025
    ctx->pc = 0x1cd82cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)37 << 16));
    // 0x1cd830: 0x30a5ffff
    ctx->pc = 0x1cd830u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65535));
    // 0x1cd834: 0x40302d
    ctx->pc = 0x1cd834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd838: 0xc0734fc
    ctx->pc = 0x1CD838u;
    SET_GPR_U32(ctx, 31, 0x1CD840u);
    ctx->pc = 0x1CD83Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 24680));
    ctx->pc = 0x1CD3F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD3F0_0x1cd3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD840u; }
    }
    if (ctx->pc != 0x1CD840u) { return; }
    ctx->pc = 0x1CD840u;
label_1cd840:
    // 0x1cd840: 0x10000152
    ctx->pc = 0x1CD840u;
    {
        const bool branch_taken_0x1cd840 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd840) {
            ctx->pc = 0x1CDD8Cu;
            goto label_1cdd8c;
        }
    }
    ctx->pc = 0x1CD848u;
label_1cd848:
    // 0x1cd848: 0x14600012
    ctx->pc = 0x1CD848u;
    {
        const bool branch_taken_0x1cd848 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CD84Cu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 4608));
        if (branch_taken_0x1cd848) {
            ctx->pc = 0x1CD894u;
            goto label_1cd894;
        }
    }
    ctx->pc = 0x1CD850u;
    // 0x1cd850: 0x10200011
    ctx->pc = 0x1CD850u;
    {
        const bool branch_taken_0x1cd850 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CD854u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 4608));
        if (branch_taken_0x1cd850) {
            ctx->pc = 0x1CD898u;
            goto label_1cd898;
        }
    }
    ctx->pc = 0x1CD858u;
    // 0x1cd858: 0x14c00008
    ctx->pc = 0x1CD858u;
    {
        const bool branch_taken_0x1cd858 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CD85Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cd858) {
            ctx->pc = 0x1CD87Cu;
            goto label_1cd87c;
        }
    }
    ctx->pc = 0x1CD860u;
    // 0x1cd860: 0xc0202d
    ctx->pc = 0x1cd860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd864: 0x30a5ffff
    ctx->pc = 0x1cd864u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65535));
    // 0x1cd868: 0x3c060025
    ctx->pc = 0x1cd868u;
    SET_GPR_U32(ctx, 6, ((uint32_t)37 << 16));
    // 0x1cd86c: 0xc0734d0
    ctx->pc = 0x1CD86Cu;
    SET_GPR_U32(ctx, 31, 0x1CD874u);
    ctx->pc = 0x1CD870u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 24688));
    ctx->pc = 0x1CD340u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD340_0x1cd340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD874u; }
    }
    if (ctx->pc != 0x1CD874u) { return; }
    ctx->pc = 0x1CD874u;
    // 0x1cd874: 0x10000005
    ctx->pc = 0x1CD874u;
    {
        const bool branch_taken_0x1cd874 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd874) {
            ctx->pc = 0x1CD88Cu;
            goto label_1cd88c;
        }
    }
    ctx->pc = 0x1CD87Cu;
label_1cd87c:
    // 0x1cd87c: 0x30a5ffff
    ctx->pc = 0x1cd87cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65535));
    // 0x1cd880: 0x3c060025
    ctx->pc = 0x1cd880u;
    SET_GPR_U32(ctx, 6, ((uint32_t)37 << 16));
    // 0x1cd884: 0xc0734d0
    ctx->pc = 0x1CD884u;
    SET_GPR_U32(ctx, 31, 0x1CD88Cu);
    ctx->pc = 0x1CD888u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 24704));
    ctx->pc = 0x1CD340u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD340_0x1cd340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD88Cu; }
    }
    if (ctx->pc != 0x1CD88Cu) { return; }
    ctx->pc = 0x1CD88Cu;
label_1cd88c:
    // 0x1cd88c: 0x1000013f
    ctx->pc = 0x1CD88Cu;
    {
        const bool branch_taken_0x1cd88c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd88c) {
            ctx->pc = 0x1CDD8Cu;
            goto label_1cdd8c;
        }
    }
    ctx->pc = 0x1CD894u;
label_1cd894:
    // 0x1cd894: 0x28831200
    ctx->pc = 0x1cd894u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 4608));
label_1cd898:
    // 0x1cd898: 0x14600014
    ctx->pc = 0x1CD898u;
    {
        const bool branch_taken_0x1cd898 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CD89Cu;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 4864));
        if (branch_taken_0x1cd898) {
            ctx->pc = 0x1CD8ECu;
            goto label_1cd8ec;
        }
    }
    ctx->pc = 0x1CD8A0u;
    // 0x1cd8a0: 0x28811300
    ctx->pc = 0x1cd8a0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 4864));
    // 0x1cd8a4: 0x10200011
    ctx->pc = 0x1CD8A4u;
    {
        const bool branch_taken_0x1cd8a4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd8a4) {
            ctx->pc = 0x1CD8ECu;
            goto label_1cd8ec;
        }
    }
    ctx->pc = 0x1CD8ACu;
    // 0x1cd8ac: 0x14c00008
    ctx->pc = 0x1CD8ACu;
    {
        const bool branch_taken_0x1cd8ac = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CD8B0u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 65535));
        if (branch_taken_0x1cd8ac) {
            ctx->pc = 0x1CD8D0u;
            goto label_1cd8d0;
        }
    }
    ctx->pc = 0x1CD8B4u;
    // 0x1cd8b4: 0x30a3ffff
    ctx->pc = 0x1cd8b4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 65535));
    // 0x1cd8b8: 0x3c020023
    ctx->pc = 0x1cd8b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1cd8bc: 0x24426010
    ctx->pc = 0x1cd8bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 24592));
    // 0x1cd8c0: 0x31880
    ctx->pc = 0x1cd8c0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cd8c4: 0x431021
    ctx->pc = 0x1cd8c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cd8c8: 0x10000006
    ctx->pc = 0x1CD8C8u;
    {
        const bool branch_taken_0x1cd8c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CD8CCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x1cd8c8) {
            ctx->pc = 0x1CD8E4u;
            goto label_1cd8e4;
        }
    }
    ctx->pc = 0x1CD8D0u;
label_1cd8d0:
    // 0x1cd8d0: 0x3c020023
    ctx->pc = 0x1cd8d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1cd8d4: 0x24426310
    ctx->pc = 0x1cd8d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25360));
    // 0x1cd8d8: 0x31880
    ctx->pc = 0x1cd8d8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cd8dc: 0x431021
    ctx->pc = 0x1cd8dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cd8e0: 0x8c420000
    ctx->pc = 0x1cd8e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cd8e4:
    // 0x1cd8e4: 0x10000129
    ctx->pc = 0x1CD8E4u;
    {
        const bool branch_taken_0x1cd8e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd8e4) {
            ctx->pc = 0x1CDD8Cu;
            goto label_1cdd8c;
        }
    }
    ctx->pc = 0x1CD8ECu;
label_1cd8ec:
    // 0x1cd8ec: 0x14600013
    ctx->pc = 0x1CD8ECu;
    {
        const bool branch_taken_0x1cd8ec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CD8F0u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 5120));
        if (branch_taken_0x1cd8ec) {
            ctx->pc = 0x1CD93Cu;
            goto label_1cd93c;
        }
    }
    ctx->pc = 0x1CD8F4u;
    // 0x1cd8f4: 0x10200012
    ctx->pc = 0x1CD8F4u;
    {
        const bool branch_taken_0x1cd8f4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CD8F8u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 5120));
        if (branch_taken_0x1cd8f4) {
            ctx->pc = 0x1CD940u;
            goto label_1cd940;
        }
    }
    ctx->pc = 0x1CD8FCu;
    // 0x1cd8fc: 0x14c00008
    ctx->pc = 0x1CD8FCu;
    {
        const bool branch_taken_0x1cd8fc = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CD900u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 65535));
        if (branch_taken_0x1cd8fc) {
            ctx->pc = 0x1CD920u;
            goto label_1cd920;
        }
    }
    ctx->pc = 0x1CD904u;
    // 0x1cd904: 0x30a3ffff
    ctx->pc = 0x1cd904u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 65535));
    // 0x1cd908: 0x3c020023
    ctx->pc = 0x1cd908u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1cd90c: 0x24426250
    ctx->pc = 0x1cd90cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25168));
    // 0x1cd910: 0x31880
    ctx->pc = 0x1cd910u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cd914: 0x431021
    ctx->pc = 0x1cd914u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cd918: 0x10000006
    ctx->pc = 0x1CD918u;
    {
        const bool branch_taken_0x1cd918 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CD91Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x1cd918) {
            ctx->pc = 0x1CD934u;
            goto label_1cd934;
        }
    }
    ctx->pc = 0x1CD920u;
label_1cd920:
    // 0x1cd920: 0x3c020023
    ctx->pc = 0x1cd920u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1cd924: 0x24426580
    ctx->pc = 0x1cd924u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25984));
    // 0x1cd928: 0x31880
    ctx->pc = 0x1cd928u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cd92c: 0x431021
    ctx->pc = 0x1cd92cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cd930: 0x8c420000
    ctx->pc = 0x1cd930u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cd934:
    // 0x1cd934: 0x10000115
    ctx->pc = 0x1CD934u;
    {
        const bool branch_taken_0x1cd934 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd934) {
            ctx->pc = 0x1CDD8Cu;
            goto label_1cdd8c;
        }
    }
    ctx->pc = 0x1CD93Cu;
label_1cd93c:
    // 0x1cd93c: 0x28831400
    ctx->pc = 0x1cd93cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 5120));
label_1cd940:
    // 0x1cd940: 0x14600013
    ctx->pc = 0x1CD940u;
    {
        const bool branch_taken_0x1cd940 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CD944u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 5632));
        if (branch_taken_0x1cd940) {
            ctx->pc = 0x1CD990u;
            goto label_1cd990;
        }
    }
    ctx->pc = 0x1CD948u;
    // 0x1cd948: 0x28811600
    ctx->pc = 0x1cd948u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 5632));
    // 0x1cd94c: 0x10200010
    ctx->pc = 0x1CD94Cu;
    {
        const bool branch_taken_0x1cd94c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd94c) {
            ctx->pc = 0x1CD990u;
            goto label_1cd990;
        }
    }
    ctx->pc = 0x1CD954u;
    // 0x1cd954: 0x14c00008
    ctx->pc = 0x1CD954u;
    {
        const bool branch_taken_0x1cd954 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CD958u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cd954) {
            ctx->pc = 0x1CD978u;
            goto label_1cd978;
        }
    }
    ctx->pc = 0x1CD95Cu;
    // 0x1cd95c: 0xc0202d
    ctx->pc = 0x1cd95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd960: 0x30a5ffff
    ctx->pc = 0x1cd960u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65535));
    // 0x1cd964: 0x3c060025
    ctx->pc = 0x1cd964u;
    SET_GPR_U32(ctx, 6, ((uint32_t)37 << 16));
    // 0x1cd968: 0xc0734d0
    ctx->pc = 0x1CD968u;
    SET_GPR_U32(ctx, 31, 0x1CD970u);
    ctx->pc = 0x1CD96Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 24632));
    ctx->pc = 0x1CD340u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD340_0x1cd340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD970u; }
    }
    if (ctx->pc != 0x1CD970u) { return; }
    ctx->pc = 0x1CD970u;
    // 0x1cd970: 0x10000005
    ctx->pc = 0x1CD970u;
    {
        const bool branch_taken_0x1cd970 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd970) {
            ctx->pc = 0x1CD988u;
            goto label_1cd988;
        }
    }
    ctx->pc = 0x1CD978u;
label_1cd978:
    // 0x1cd978: 0x30a5ffff
    ctx->pc = 0x1cd978u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65535));
    // 0x1cd97c: 0x3c060025
    ctx->pc = 0x1cd97cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)37 << 16));
    // 0x1cd980: 0xc0734d0
    ctx->pc = 0x1CD980u;
    SET_GPR_U32(ctx, 31, 0x1CD988u);
    ctx->pc = 0x1CD984u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 24648));
    ctx->pc = 0x1CD340u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD340_0x1cd340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD988u; }
    }
    if (ctx->pc != 0x1CD988u) { return; }
    ctx->pc = 0x1CD988u;
label_1cd988:
    // 0x1cd988: 0x10000100
    ctx->pc = 0x1CD988u;
    {
        const bool branch_taken_0x1cd988 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd988) {
            ctx->pc = 0x1CDD8Cu;
            goto label_1cdd8c;
        }
    }
    ctx->pc = 0x1CD990u;
label_1cd990:
    // 0x1cd990: 0x14600012
    ctx->pc = 0x1CD990u;
    {
        const bool branch_taken_0x1cd990 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CD994u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 6144));
        if (branch_taken_0x1cd990) {
            ctx->pc = 0x1CD9DCu;
            goto label_1cd9dc;
        }
    }
    ctx->pc = 0x1CD998u;
    // 0x1cd998: 0x10200011
    ctx->pc = 0x1CD998u;
    {
        const bool branch_taken_0x1cd998 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CD99Cu;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 6144));
        if (branch_taken_0x1cd998) {
            ctx->pc = 0x1CD9E0u;
            goto label_1cd9e0;
        }
    }
    ctx->pc = 0x1CD9A0u;
    // 0x1cd9a0: 0x14c00008
    ctx->pc = 0x1CD9A0u;
    {
        const bool branch_taken_0x1cd9a0 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CD9A4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cd9a0) {
            ctx->pc = 0x1CD9C4u;
            goto label_1cd9c4;
        }
    }
    ctx->pc = 0x1CD9A8u;
    // 0x1cd9a8: 0xc0202d
    ctx->pc = 0x1cd9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd9ac: 0x30a5ffff
    ctx->pc = 0x1cd9acu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65535));
    // 0x1cd9b0: 0x3c060025
    ctx->pc = 0x1cd9b0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)37 << 16));
    // 0x1cd9b4: 0xc0734d0
    ctx->pc = 0x1CD9B4u;
    SET_GPR_U32(ctx, 31, 0x1CD9BCu);
    ctx->pc = 0x1CD9B8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 24712));
    ctx->pc = 0x1CD340u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD340_0x1cd340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD9BCu; }
    }
    if (ctx->pc != 0x1CD9BCu) { return; }
    ctx->pc = 0x1CD9BCu;
    // 0x1cd9bc: 0x10000005
    ctx->pc = 0x1CD9BCu;
    {
        const bool branch_taken_0x1cd9bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd9bc) {
            ctx->pc = 0x1CD9D4u;
            goto label_1cd9d4;
        }
    }
    ctx->pc = 0x1CD9C4u;
label_1cd9c4:
    // 0x1cd9c4: 0x30a5ffff
    ctx->pc = 0x1cd9c4u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65535));
    // 0x1cd9c8: 0x3c060025
    ctx->pc = 0x1cd9c8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)37 << 16));
    // 0x1cd9cc: 0xc0734d0
    ctx->pc = 0x1CD9CCu;
    SET_GPR_U32(ctx, 31, 0x1CD9D4u);
    ctx->pc = 0x1CD9D0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 24728));
    ctx->pc = 0x1CD340u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD340_0x1cd340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD9D4u; }
    }
    if (ctx->pc != 0x1CD9D4u) { return; }
    ctx->pc = 0x1CD9D4u;
label_1cd9d4:
    // 0x1cd9d4: 0x100000ed
    ctx->pc = 0x1CD9D4u;
    {
        const bool branch_taken_0x1cd9d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd9d4) {
            ctx->pc = 0x1CDD8Cu;
            goto label_1cdd8c;
        }
    }
    ctx->pc = 0x1CD9DCu;
label_1cd9dc:
    // 0x1cd9dc: 0x28831800
    ctx->pc = 0x1cd9dcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 6144));
label_1cd9e0:
    // 0x1cd9e0: 0x14600008
    ctx->pc = 0x1CD9E0u;
    {
        const bool branch_taken_0x1cd9e0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CD9E4u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 8448));
        if (branch_taken_0x1cd9e0) {
            ctx->pc = 0x1CDA04u;
            goto label_1cda04;
        }
    }
    ctx->pc = 0x1CD9E8u;
    // 0x1cd9e8: 0x28812000
    ctx->pc = 0x1cd9e8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 8192));
    // 0x1cd9ec: 0x10200005
    ctx->pc = 0x1CD9ECu;
    {
        const bool branch_taken_0x1cd9ec = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd9ec) {
            ctx->pc = 0x1CDA04u;
            goto label_1cda04;
        }
    }
    ctx->pc = 0x1CD9F4u;
    // 0x1cd9f4: 0xc073548
    ctx->pc = 0x1CD9F4u;
    SET_GPR_U32(ctx, 31, 0x1CD9FCu);
    ctx->pc = 0x1CD9F8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CD520u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD520_0x1cd520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD9FCu; }
    }
    if (ctx->pc != 0x1CD9FCu) { return; }
    ctx->pc = 0x1CD9FCu;
    // 0x1cd9fc: 0x100000e3
    ctx->pc = 0x1CD9FCu;
    {
        const bool branch_taken_0x1cd9fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd9fc) {
            ctx->pc = 0x1CDD8Cu;
            goto label_1cdd8c;
        }
    }
    ctx->pc = 0x1CDA04u;
label_1cda04:
    // 0x1cda04: 0x14600008
    ctx->pc = 0x1CDA04u;
    {
        const bool branch_taken_0x1cda04 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CDA08u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 9216));
        if (branch_taken_0x1cda04) {
            ctx->pc = 0x1CDA28u;
            goto label_1cda28;
        }
    }
    ctx->pc = 0x1CDA0Cu;
    // 0x1cda0c: 0x10200007
    ctx->pc = 0x1CDA0Cu;
    {
        const bool branch_taken_0x1cda0c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDA10u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 8192));
        if (branch_taken_0x1cda0c) {
            ctx->pc = 0x1CDA2Cu;
            goto label_1cda2c;
        }
    }
    ctx->pc = 0x1CDA14u;
    // 0x1cda14: 0x40202d
    ctx->pc = 0x1cda14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cda18: 0xc07356c
    ctx->pc = 0x1CDA18u;
    SET_GPR_U32(ctx, 31, 0x1CDA20u);
    ctx->pc = 0x1CDA1Cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65535));
    ctx->pc = 0x1CD5B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD5B0_0x1cd5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDA20u; }
    }
    if (ctx->pc != 0x1CDA20u) { return; }
    ctx->pc = 0x1CDA20u;
    // 0x1cda20: 0x100000da
    ctx->pc = 0x1CDA20u;
    {
        const bool branch_taken_0x1cda20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cda20) {
            ctx->pc = 0x1CDD8Cu;
            goto label_1cdd8c;
        }
    }
    ctx->pc = 0x1CDA28u;
label_1cda28:
    // 0x1cda28: 0x28832000
    ctx->pc = 0x1cda28u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 8192));
label_1cda2c:
    // 0x1cda2c: 0x14600009
    ctx->pc = 0x1CDA2Cu;
    {
        const bool branch_taken_0x1cda2c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CDA30u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 9216));
        if (branch_taken_0x1cda2c) {
            ctx->pc = 0x1CDA54u;
            goto label_1cda54;
        }
    }
    ctx->pc = 0x1CDA34u;
    // 0x1cda34: 0x28812100
    ctx->pc = 0x1cda34u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 8448));
    // 0x1cda38: 0x10200006
    ctx->pc = 0x1CDA38u;
    {
        const bool branch_taken_0x1cda38 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cda38) {
            ctx->pc = 0x1CDA54u;
            goto label_1cda54;
        }
    }
    ctx->pc = 0x1CDA40u;
    // 0x1cda40: 0x30a4ffff
    ctx->pc = 0x1cda40u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), 65535));
    // 0x1cda44: 0xc07358c
    ctx->pc = 0x1CDA44u;
    SET_GPR_U32(ctx, 31, 0x1CDA4Cu);
    ctx->pc = 0x1CDA48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CD630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD630_0x1cd630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDA4Cu; }
    }
    if (ctx->pc != 0x1CDA4Cu) { return; }
    ctx->pc = 0x1CDA4Cu;
    // 0x1cda4c: 0x100000cf
    ctx->pc = 0x1CDA4Cu;
    {
        const bool branch_taken_0x1cda4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cda4c) {
            ctx->pc = 0x1CDD8Cu;
            goto label_1cdd8c;
        }
    }
    ctx->pc = 0x1CDA54u;
label_1cda54:
    // 0x1cda54: 0x14600008
    ctx->pc = 0x1CDA54u;
    {
        const bool branch_taken_0x1cda54 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CDA58u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 9472));
        if (branch_taken_0x1cda54) {
            ctx->pc = 0x1CDA78u;
            goto label_1cda78;
        }
    }
    ctx->pc = 0x1CDA5Cu;
    // 0x1cda5c: 0x10200007
    ctx->pc = 0x1CDA5Cu;
    {
        const bool branch_taken_0x1cda5c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDA60u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 10752));
        if (branch_taken_0x1cda5c) {
            ctx->pc = 0x1CDA7Cu;
            goto label_1cda7c;
        }
    }
    ctx->pc = 0x1CDA64u;
    // 0x1cda64: 0x30a4ffff
    ctx->pc = 0x1cda64u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), 65535));
    // 0x1cda68: 0xc0735a8
    ctx->pc = 0x1CDA68u;
    SET_GPR_U32(ctx, 31, 0x1CDA70u);
    ctx->pc = 0x1CDA6Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CD6A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD6A0_0x1cd6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDA70u; }
    }
    if (ctx->pc != 0x1CDA70u) { return; }
    ctx->pc = 0x1CDA70u;
    // 0x1cda70: 0x100000c6
    ctx->pc = 0x1CDA70u;
    {
        const bool branch_taken_0x1cda70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cda70) {
            ctx->pc = 0x1CDD8Cu;
            goto label_1cdd8c;
        }
    }
    ctx->pc = 0x1CDA78u;
label_1cda78:
    // 0x1cda78: 0x28832a00
    ctx->pc = 0x1cda78u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 10752));
label_1cda7c:
    // 0x1cda7c: 0x146000a3
    ctx->pc = 0x1CDA7Cu;
    {
        const bool branch_taken_0x1cda7c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CDA80u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 12288));
        if (branch_taken_0x1cda7c) {
            ctx->pc = 0x1CDD0Cu;
            goto label_1cdd0c;
        }
    }
    ctx->pc = 0x1CDA84u;
    // 0x1cda84: 0x102000a1
    ctx->pc = 0x1CDA84u;
    {
        const bool branch_taken_0x1cda84 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cda84) {
            ctx->pc = 0x1CDD0Cu;
            goto label_1cdd0c;
        }
    }
    ctx->pc = 0x1CDA8Cu;
    // 0x1cda8c: 0x14c00050
    ctx->pc = 0x1CDA8Cu;
    {
        const bool branch_taken_0x1cda8c = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CDA90u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 41));
        if (branch_taken_0x1cda8c) {
            ctx->pc = 0x1CDBD0u;
            goto label_1cdbd0;
        }
    }
    ctx->pc = 0x1CDA94u;
    // 0x1cda94: 0x24030029
    ctx->pc = 0x1cda94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 41));
    // 0x1cda98: 0x10430041
    ctx->pc = 0x1CDA98u;
    {
        const bool branch_taken_0x1cda98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CDA9Cu;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 65535));
        if (branch_taken_0x1cda98) {
            ctx->pc = 0x1CDBA0u;
            goto label_1cdba0;
        }
    }
    ctx->pc = 0x1CDAA0u;
    // 0x1cdaa0: 0x24030023
    ctx->pc = 0x1cdaa0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 35));
    // 0x1cdaa4: 0x10430038
    ctx->pc = 0x1CDAA4u;
    {
        const bool branch_taken_0x1cdaa4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CDAA8u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 65535));
        if (branch_taken_0x1cdaa4) {
            ctx->pc = 0x1CDB88u;
            goto label_1cdb88;
        }
    }
    ctx->pc = 0x1CDAACu;
    // 0x1cdaac: 0x2403001c
    ctx->pc = 0x1cdaacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
    // 0x1cdab0: 0x1043002f
    ctx->pc = 0x1CDAB0u;
    {
        const bool branch_taken_0x1cdab0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CDAB4u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 65535));
        if (branch_taken_0x1cdab0) {
            ctx->pc = 0x1CDB70u;
            goto label_1cdb70;
        }
    }
    ctx->pc = 0x1CDAB8u;
    // 0x1cdab8: 0x2403001a
    ctx->pc = 0x1cdab8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 26));
    // 0x1cdabc: 0x10430026
    ctx->pc = 0x1CDABCu;
    {
        const bool branch_taken_0x1cdabc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CDAC0u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 65535));
        if (branch_taken_0x1cdabc) {
            ctx->pc = 0x1CDB58u;
            goto label_1cdb58;
        }
    }
    ctx->pc = 0x1CDAC4u;
    // 0x1cdac4: 0x24030018
    ctx->pc = 0x1cdac4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 24));
    // 0x1cdac8: 0x1043001d
    ctx->pc = 0x1CDAC8u;
    {
        const bool branch_taken_0x1cdac8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CDACCu;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 65535));
        if (branch_taken_0x1cdac8) {
            ctx->pc = 0x1CDB40u;
            goto label_1cdb40;
        }
    }
    ctx->pc = 0x1CDAD0u;
    // 0x1cdad0: 0x24030002
    ctx->pc = 0x1cdad0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cdad4: 0x10430014
    ctx->pc = 0x1CDAD4u;
    {
        const bool branch_taken_0x1cdad4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CDAD8u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 65535));
        if (branch_taken_0x1cdad4) {
            ctx->pc = 0x1CDB28u;
            goto label_1cdb28;
        }
    }
    ctx->pc = 0x1CDADCu;
    // 0x1cdadc: 0x24030001
    ctx->pc = 0x1cdadcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdae0: 0x1043000b
    ctx->pc = 0x1CDAE0u;
    {
        const bool branch_taken_0x1cdae0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CDAE4u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 65535));
        if (branch_taken_0x1cdae0) {
            ctx->pc = 0x1CDB10u;
            goto label_1cdb10;
        }
    }
    ctx->pc = 0x1CDAE8u;
    // 0x1cdae8: 0x10400003
    ctx->pc = 0x1CDAE8u;
    {
        const bool branch_taken_0x1cdae8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDAECu;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 65535));
        if (branch_taken_0x1cdae8) {
            ctx->pc = 0x1CDAF8u;
            goto label_1cdaf8;
        }
    }
    ctx->pc = 0x1CDAF0u;
    // 0x1cdaf0: 0x10000031
    ctx->pc = 0x1CDAF0u;
    {
        const bool branch_taken_0x1cdaf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDAF4u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 65535));
        if (branch_taken_0x1cdaf0) {
            ctx->pc = 0x1CDBB8u;
            goto label_1cdbb8;
        }
    }
    ctx->pc = 0x1CDAF8u;
label_1cdaf8:
    // 0x1cdaf8: 0x3c020023
    ctx->pc = 0x1cdaf8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1cdafc: 0x244262c8
    ctx->pc = 0x1cdafcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25288));
    // 0x1cdb00: 0x31880
    ctx->pc = 0x1cdb00u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cdb04: 0x431021
    ctx->pc = 0x1cdb04u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cdb08: 0x100000a0
    ctx->pc = 0x1CDB08u;
    {
        const bool branch_taken_0x1cdb08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDB0Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x1cdb08) {
            ctx->pc = 0x1CDD8Cu;
            goto label_1cdd8c;
        }
    }
    ctx->pc = 0x1CDB10u;
label_1cdb10:
    // 0x1cdb10: 0x3c020023
    ctx->pc = 0x1cdb10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1cdb14: 0x244262c8
    ctx->pc = 0x1cdb14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25288));
    // 0x1cdb18: 0x31880
    ctx->pc = 0x1cdb18u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cdb1c: 0x431021
    ctx->pc = 0x1cdb1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cdb20: 0x1000009a
    ctx->pc = 0x1CDB20u;
    {
        const bool branch_taken_0x1cdb20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDB24u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x1cdb20) {
            ctx->pc = 0x1CDD8Cu;
            goto label_1cdd8c;
        }
    }
    ctx->pc = 0x1CDB28u;
label_1cdb28:
    // 0x1cdb28: 0x3c020023
    ctx->pc = 0x1cdb28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1cdb2c: 0x244262d0
    ctx->pc = 0x1cdb2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25296));
    // 0x1cdb30: 0x31880
    ctx->pc = 0x1cdb30u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cdb34: 0x431021
    ctx->pc = 0x1cdb34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cdb38: 0x10000094
    ctx->pc = 0x1CDB38u;
    {
        const bool branch_taken_0x1cdb38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDB3Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x1cdb38) {
            ctx->pc = 0x1CDD8Cu;
            goto label_1cdd8c;
        }
    }
    ctx->pc = 0x1CDB40u;
label_1cdb40:
    // 0x1cdb40: 0x3c020023
    ctx->pc = 0x1cdb40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1cdb44: 0x244262d8
    ctx->pc = 0x1cdb44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25304));
    // 0x1cdb48: 0x31880
    ctx->pc = 0x1cdb48u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cdb4c: 0x431021
    ctx->pc = 0x1cdb4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cdb50: 0x1000008e
    ctx->pc = 0x1CDB50u;
    {
        const bool branch_taken_0x1cdb50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDB54u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x1cdb50) {
            ctx->pc = 0x1CDD8Cu;
            goto label_1cdd8c;
        }
    }
    ctx->pc = 0x1CDB58u;
label_1cdb58:
    // 0x1cdb58: 0x3c020023
    ctx->pc = 0x1cdb58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1cdb5c: 0x244262e0
    ctx->pc = 0x1cdb5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25312));
    // 0x1cdb60: 0x31880
    ctx->pc = 0x1cdb60u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cdb64: 0x431021
    ctx->pc = 0x1cdb64u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cdb68: 0x10000088
    ctx->pc = 0x1CDB68u;
    {
        const bool branch_taken_0x1cdb68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDB6Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x1cdb68) {
            ctx->pc = 0x1CDD8Cu;
            goto label_1cdd8c;
        }
    }
    ctx->pc = 0x1CDB70u;
label_1cdb70:
    // 0x1cdb70: 0x3c020023
    ctx->pc = 0x1cdb70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1cdb74: 0x244262e8
    ctx->pc = 0x1cdb74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25320));
    // 0x1cdb78: 0x31880
    ctx->pc = 0x1cdb78u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cdb7c: 0x431021
    ctx->pc = 0x1cdb7cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cdb80: 0x10000082
    ctx->pc = 0x1CDB80u;
    {
        const bool branch_taken_0x1cdb80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDB84u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x1cdb80) {
            ctx->pc = 0x1CDD8Cu;
            goto label_1cdd8c;
        }
    }
    ctx->pc = 0x1CDB88u;
label_1cdb88:
    // 0x1cdb88: 0x3c020023
    ctx->pc = 0x1cdb88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1cdb8c: 0x244262f0
    ctx->pc = 0x1cdb8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25328));
    // 0x1cdb90: 0x31880
    ctx->pc = 0x1cdb90u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cdb94: 0x431021
    ctx->pc = 0x1cdb94u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cdb98: 0x1000007c
    ctx->pc = 0x1CDB98u;
    {
        const bool branch_taken_0x1cdb98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDB9Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x1cdb98) {
            ctx->pc = 0x1CDD8Cu;
            goto label_1cdd8c;
        }
    }
    ctx->pc = 0x1CDBA0u;
label_1cdba0:
    // 0x1cdba0: 0x3c020023
    ctx->pc = 0x1cdba0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1cdba4: 0x244262f8
    ctx->pc = 0x1cdba4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25336));
    // 0x1cdba8: 0x31880
    ctx->pc = 0x1cdba8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cdbac: 0x431021
    ctx->pc = 0x1cdbacu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cdbb0: 0x10000076
    ctx->pc = 0x1CDBB0u;
    {
        const bool branch_taken_0x1cdbb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDBB4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x1cdbb0) {
            ctx->pc = 0x1CDD8Cu;
            goto label_1cdd8c;
        }
    }
    ctx->pc = 0x1CDBB8u;
label_1cdbb8:
    // 0x1cdbb8: 0x3c020023
    ctx->pc = 0x1cdbb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1cdbbc: 0x244262d8
    ctx->pc = 0x1cdbbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25304));
    // 0x1cdbc0: 0x31880
    ctx->pc = 0x1cdbc0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cdbc4: 0x431021
    ctx->pc = 0x1cdbc4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cdbc8: 0x10000070
    ctx->pc = 0x1CDBC8u;
    {
        const bool branch_taken_0x1cdbc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDBCCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x1cdbc8) {
            ctx->pc = 0x1CDD8Cu;
            goto label_1cdd8c;
        }
    }
    ctx->pc = 0x1CDBD0u;
label_1cdbd0:
    // 0x1cdbd0: 0x10430041
    ctx->pc = 0x1CDBD0u;
    {
        const bool branch_taken_0x1cdbd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1cdbd0) {
            ctx->pc = 0x1CDCD8u;
            goto label_1cdcd8;
        }
    }
    ctx->pc = 0x1CDBD8u;
    // 0x1cdbd8: 0x24030023
    ctx->pc = 0x1cdbd8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 35));
    // 0x1cdbdc: 0x10430038
    ctx->pc = 0x1CDBDCu;
    {
        const bool branch_taken_0x1cdbdc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CDBE0u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 65535));
        if (branch_taken_0x1cdbdc) {
            ctx->pc = 0x1CDCC0u;
            goto label_1cdcc0;
        }
    }
    ctx->pc = 0x1CDBE4u;
    // 0x1cdbe4: 0x2403001c
    ctx->pc = 0x1cdbe4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
    // 0x1cdbe8: 0x1043002f
    ctx->pc = 0x1CDBE8u;
    {
        const bool branch_taken_0x1cdbe8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CDBECu;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 65535));
        if (branch_taken_0x1cdbe8) {
            ctx->pc = 0x1CDCA8u;
            goto label_1cdca8;
        }
    }
    ctx->pc = 0x1CDBF0u;
    // 0x1cdbf0: 0x2403001a
    ctx->pc = 0x1cdbf0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 26));
    // 0x1cdbf4: 0x10430026
    ctx->pc = 0x1CDBF4u;
    {
        const bool branch_taken_0x1cdbf4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CDBF8u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 65535));
        if (branch_taken_0x1cdbf4) {
            ctx->pc = 0x1CDC90u;
            goto label_1cdc90;
        }
    }
    ctx->pc = 0x1CDBFCu;
    // 0x1cdbfc: 0x24030018
    ctx->pc = 0x1cdbfcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 24));
    // 0x1cdc00: 0x1043001d
    ctx->pc = 0x1CDC00u;
    {
        const bool branch_taken_0x1cdc00 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CDC04u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 65535));
        if (branch_taken_0x1cdc00) {
            ctx->pc = 0x1CDC78u;
            goto label_1cdc78;
        }
    }
    ctx->pc = 0x1CDC08u;
    // 0x1cdc08: 0x24030002
    ctx->pc = 0x1cdc08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cdc0c: 0x10430014
    ctx->pc = 0x1CDC0Cu;
    {
        const bool branch_taken_0x1cdc0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CDC10u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 65535));
        if (branch_taken_0x1cdc0c) {
            ctx->pc = 0x1CDC60u;
            goto label_1cdc60;
        }
    }
    ctx->pc = 0x1CDC14u;
    // 0x1cdc14: 0x24030001
    ctx->pc = 0x1cdc14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdc18: 0x1043000b
    ctx->pc = 0x1CDC18u;
    {
        const bool branch_taken_0x1cdc18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CDC1Cu;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 65535));
        if (branch_taken_0x1cdc18) {
            ctx->pc = 0x1CDC48u;
            goto label_1cdc48;
        }
    }
    ctx->pc = 0x1CDC20u;
    // 0x1cdc20: 0x10400003
    ctx->pc = 0x1CDC20u;
    {
        const bool branch_taken_0x1cdc20 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDC24u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 65535));
        if (branch_taken_0x1cdc20) {
            ctx->pc = 0x1CDC30u;
            goto label_1cdc30;
        }
    }
    ctx->pc = 0x1CDC28u;
    // 0x1cdc28: 0x10000032
    ctx->pc = 0x1CDC28u;
    {
        const bool branch_taken_0x1cdc28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDC2Cu;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 65535));
        if (branch_taken_0x1cdc28) {
            ctx->pc = 0x1CDCF4u;
            goto label_1cdcf4;
        }
    }
    ctx->pc = 0x1CDC30u;
label_1cdc30:
    // 0x1cdc30: 0x3c020023
    ctx->pc = 0x1cdc30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1cdc34: 0x244265f8
    ctx->pc = 0x1cdc34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26104));
    // 0x1cdc38: 0x31880
    ctx->pc = 0x1cdc38u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cdc3c: 0x431021
    ctx->pc = 0x1cdc3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cdc40: 0x10000052
    ctx->pc = 0x1CDC40u;
    {
        const bool branch_taken_0x1cdc40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDC44u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x1cdc40) {
            ctx->pc = 0x1CDD8Cu;
            goto label_1cdd8c;
        }
    }
    ctx->pc = 0x1CDC48u;
label_1cdc48:
    // 0x1cdc48: 0x3c020023
    ctx->pc = 0x1cdc48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1cdc4c: 0x244265f8
    ctx->pc = 0x1cdc4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26104));
    // 0x1cdc50: 0x31880
    ctx->pc = 0x1cdc50u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cdc54: 0x431021
    ctx->pc = 0x1cdc54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cdc58: 0x1000004c
    ctx->pc = 0x1CDC58u;
    {
        const bool branch_taken_0x1cdc58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDC5Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x1cdc58) {
            ctx->pc = 0x1CDD8Cu;
            goto label_1cdd8c;
        }
    }
    ctx->pc = 0x1CDC60u;
label_1cdc60:
    // 0x1cdc60: 0x3c020023
    ctx->pc = 0x1cdc60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1cdc64: 0x24426600
    ctx->pc = 0x1cdc64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26112));
    // 0x1cdc68: 0x31880
    ctx->pc = 0x1cdc68u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cdc6c: 0x431021
    ctx->pc = 0x1cdc6cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cdc70: 0x10000046
    ctx->pc = 0x1CDC70u;
    {
        const bool branch_taken_0x1cdc70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDC74u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x1cdc70) {
            ctx->pc = 0x1CDD8Cu;
            goto label_1cdd8c;
        }
    }
    ctx->pc = 0x1CDC78u;
label_1cdc78:
    // 0x1cdc78: 0x3c020023
    ctx->pc = 0x1cdc78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1cdc7c: 0x24426608
    ctx->pc = 0x1cdc7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26120));
    // 0x1cdc80: 0x31880
    ctx->pc = 0x1cdc80u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cdc84: 0x431021
    ctx->pc = 0x1cdc84u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cdc88: 0x10000040
    ctx->pc = 0x1CDC88u;
    {
        const bool branch_taken_0x1cdc88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDC8Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x1cdc88) {
            ctx->pc = 0x1CDD8Cu;
            goto label_1cdd8c;
        }
    }
    ctx->pc = 0x1CDC90u;
label_1cdc90:
    // 0x1cdc90: 0x3c020023
    ctx->pc = 0x1cdc90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1cdc94: 0x24426610
    ctx->pc = 0x1cdc94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26128));
    // 0x1cdc98: 0x31880
    ctx->pc = 0x1cdc98u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cdc9c: 0x431021
    ctx->pc = 0x1cdc9cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cdca0: 0x1000003a
    ctx->pc = 0x1CDCA0u;
    {
        const bool branch_taken_0x1cdca0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDCA4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x1cdca0) {
            ctx->pc = 0x1CDD8Cu;
            goto label_1cdd8c;
        }
    }
    ctx->pc = 0x1CDCA8u;
label_1cdca8:
    // 0x1cdca8: 0x3c020023
    ctx->pc = 0x1cdca8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1cdcac: 0x24426618
    ctx->pc = 0x1cdcacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26136));
    // 0x1cdcb0: 0x31880
    ctx->pc = 0x1cdcb0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cdcb4: 0x431021
    ctx->pc = 0x1cdcb4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cdcb8: 0x10000034
    ctx->pc = 0x1CDCB8u;
    {
        const bool branch_taken_0x1cdcb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDCBCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x1cdcb8) {
            ctx->pc = 0x1CDD8Cu;
            goto label_1cdd8c;
        }
    }
    ctx->pc = 0x1CDCC0u;
label_1cdcc0:
    // 0x1cdcc0: 0x3c020023
    ctx->pc = 0x1cdcc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1cdcc4: 0x24426620
    ctx->pc = 0x1cdcc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26144));
    // 0x1cdcc8: 0x31880
    ctx->pc = 0x1cdcc8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cdccc: 0x431021
    ctx->pc = 0x1cdcccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cdcd0: 0x1000002e
    ctx->pc = 0x1CDCD0u;
    {
        const bool branch_taken_0x1cdcd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDCD4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x1cdcd0) {
            ctx->pc = 0x1CDD8Cu;
            goto label_1cdd8c;
        }
    }
    ctx->pc = 0x1CDCD8u;
label_1cdcd8:
    // 0x1cdcd8: 0x30a3ffff
    ctx->pc = 0x1cdcd8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 65535));
    // 0x1cdcdc: 0x3c020023
    ctx->pc = 0x1cdcdcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1cdce0: 0x24426628
    ctx->pc = 0x1cdce0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26152));
    // 0x1cdce4: 0x31880
    ctx->pc = 0x1cdce4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cdce8: 0x431021
    ctx->pc = 0x1cdce8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cdcec: 0x10000027
    ctx->pc = 0x1CDCECu;
    {
        const bool branch_taken_0x1cdcec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDCF0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x1cdcec) {
            ctx->pc = 0x1CDD8Cu;
            goto label_1cdd8c;
        }
    }
    ctx->pc = 0x1CDCF4u;
label_1cdcf4:
    // 0x1cdcf4: 0x3c020023
    ctx->pc = 0x1cdcf4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1cdcf8: 0x24426608
    ctx->pc = 0x1cdcf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26120));
    // 0x1cdcfc: 0x31880
    ctx->pc = 0x1cdcfcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cdd00: 0x431021
    ctx->pc = 0x1cdd00u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cdd04: 0x10000021
    ctx->pc = 0x1CDD04u;
    {
        const bool branch_taken_0x1cdd04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDD08u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x1cdd04) {
            ctx->pc = 0x1CDD8Cu;
            goto label_1cdd8c;
        }
    }
    ctx->pc = 0x1CDD0Cu;
label_1cdd0c:
    // 0x1cdd0c: 0x28823000
    ctx->pc = 0x1cdd0cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 12288));
    // 0x1cdd10: 0x14400012
    ctx->pc = 0x1CDD10u;
    {
        const bool branch_taken_0x1cdd10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CDD14u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 9472));
        if (branch_taken_0x1cdd10) {
            ctx->pc = 0x1CDD5Cu;
            goto label_1cdd5c;
        }
    }
    ctx->pc = 0x1CDD18u;
    // 0x1cdd18: 0x28813100
    ctx->pc = 0x1cdd18u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 12544));
    // 0x1cdd1c: 0x1020000f
    ctx->pc = 0x1CDD1Cu;
    {
        const bool branch_taken_0x1cdd1c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cdd1c) {
            ctx->pc = 0x1CDD5Cu;
            goto label_1cdd5c;
        }
    }
    ctx->pc = 0x1CDD24u;
    // 0x1cdd24: 0x14c00007
    ctx->pc = 0x1CDD24u;
    {
        const bool branch_taken_0x1cdd24 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CDD28u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 65535));
        if (branch_taken_0x1cdd24) {
            ctx->pc = 0x1CDD44u;
            goto label_1cdd44;
        }
    }
    ctx->pc = 0x1CDD2Cu;
    // 0x1cdd2c: 0x30a3ffff
    ctx->pc = 0x1cdd2cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 65535));
    // 0x1cdd30: 0x3c020034
    ctx->pc = 0x1cdd30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x1cdd34: 0x24420ff0
    ctx->pc = 0x1cdd34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4080));
    // 0x1cdd38: 0x31980
    ctx->pc = 0x1cdd38u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 6));
    // 0x1cdd3c: 0x10000005
    ctx->pc = 0x1CDD3Cu;
    {
        const bool branch_taken_0x1cdd3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDD40u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x1cdd3c) {
            ctx->pc = 0x1CDD54u;
            goto label_1cdd54;
        }
    }
    ctx->pc = 0x1CDD44u;
label_1cdd44:
    // 0x1cdd44: 0x3c020034
    ctx->pc = 0x1cdd44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x1cdd48: 0x24420bf0
    ctx->pc = 0x1cdd48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3056));
    // 0x1cdd4c: 0x31980
    ctx->pc = 0x1cdd4cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 6));
    // 0x1cdd50: 0x431021
    ctx->pc = 0x1cdd50u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cdd54:
    // 0x1cdd54: 0x1000000d
    ctx->pc = 0x1CDD54u;
    {
        const bool branch_taken_0x1cdd54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cdd54) {
            ctx->pc = 0x1CDD8Cu;
            goto label_1cdd8c;
        }
    }
    ctx->pc = 0x1CDD5Cu;
label_1cdd5c:
    // 0x1cdd5c: 0x1440000a
    ctx->pc = 0x1CDD5Cu;
    {
        const bool branch_taken_0x1cdd5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CDD60u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 9488));
        if (branch_taken_0x1cdd5c) {
            ctx->pc = 0x1CDD88u;
            goto label_1cdd88;
        }
    }
    ctx->pc = 0x1CDD64u;
    // 0x1cdd64: 0x10200009
    ctx->pc = 0x1CDD64u;
    {
        const bool branch_taken_0x1cdd64 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDD68u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cdd64) {
            ctx->pc = 0x1CDD8Cu;
            goto label_1cdd8c;
        }
    }
    ctx->pc = 0x1CDD6Cu;
    // 0x1cdd6c: 0x30a3ffff
    ctx->pc = 0x1cdd6cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 65535));
    // 0x1cdd70: 0x3c020023
    ctx->pc = 0x1cdd70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1cdd74: 0x24426308
    ctx->pc = 0x1cdd74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25352));
    // 0x1cdd78: 0x31880
    ctx->pc = 0x1cdd78u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cdd7c: 0x431021
    ctx->pc = 0x1cdd7cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cdd80: 0x10000002
    ctx->pc = 0x1CDD80u;
    {
        const bool branch_taken_0x1cdd80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDD84u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x1cdd80) {
            ctx->pc = 0x1CDD8Cu;
            goto label_1cdd8c;
        }
    }
    ctx->pc = 0x1CDD88u;
label_1cdd88:
    // 0x1cdd88: 0x102d
    ctx->pc = 0x1cdd88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cdd8c:
    // 0x1cdd8c: 0xdfbf0000
    ctx->pc = 0x1cdd8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cdd90:
    // 0x1cdd90: 0x3e00008
    ctx->pc = 0x1CDD90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDD94u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CD75Cu: goto label_1cd75c;
            case 0x1CD770u: goto label_1cd770;
            case 0x1CD778u: goto label_1cd778;
            case 0x1CD77Cu: goto label_1cd77c;
            case 0x1CD7C4u: goto label_1cd7c4;
            case 0x1CD7D8u: goto label_1cd7d8;
            case 0x1CD7E0u: goto label_1cd7e0;
            case 0x1CD804u: goto label_1cd804;
            case 0x1CD82Cu: goto label_1cd82c;
            case 0x1CD840u: goto label_1cd840;
            case 0x1CD848u: goto label_1cd848;
            case 0x1CD87Cu: goto label_1cd87c;
            case 0x1CD88Cu: goto label_1cd88c;
            case 0x1CD894u: goto label_1cd894;
            case 0x1CD898u: goto label_1cd898;
            case 0x1CD8D0u: goto label_1cd8d0;
            case 0x1CD8E4u: goto label_1cd8e4;
            case 0x1CD8ECu: goto label_1cd8ec;
            case 0x1CD920u: goto label_1cd920;
            case 0x1CD934u: goto label_1cd934;
            case 0x1CD93Cu: goto label_1cd93c;
            case 0x1CD940u: goto label_1cd940;
            case 0x1CD978u: goto label_1cd978;
            case 0x1CD988u: goto label_1cd988;
            case 0x1CD990u: goto label_1cd990;
            case 0x1CD9C4u: goto label_1cd9c4;
            case 0x1CD9D4u: goto label_1cd9d4;
            case 0x1CD9DCu: goto label_1cd9dc;
            case 0x1CD9E0u: goto label_1cd9e0;
            case 0x1CDA04u: goto label_1cda04;
            case 0x1CDA28u: goto label_1cda28;
            case 0x1CDA2Cu: goto label_1cda2c;
            case 0x1CDA54u: goto label_1cda54;
            case 0x1CDA78u: goto label_1cda78;
            case 0x1CDA7Cu: goto label_1cda7c;
            case 0x1CDAF8u: goto label_1cdaf8;
            case 0x1CDB10u: goto label_1cdb10;
            case 0x1CDB28u: goto label_1cdb28;
            case 0x1CDB40u: goto label_1cdb40;
            case 0x1CDB58u: goto label_1cdb58;
            case 0x1CDB70u: goto label_1cdb70;
            case 0x1CDB88u: goto label_1cdb88;
            case 0x1CDBA0u: goto label_1cdba0;
            case 0x1CDBB8u: goto label_1cdbb8;
            case 0x1CDBD0u: goto label_1cdbd0;
            case 0x1CDC30u: goto label_1cdc30;
            case 0x1CDC48u: goto label_1cdc48;
            case 0x1CDC60u: goto label_1cdc60;
            case 0x1CDC78u: goto label_1cdc78;
            case 0x1CDC90u: goto label_1cdc90;
            case 0x1CDCA8u: goto label_1cdca8;
            case 0x1CDCC0u: goto label_1cdcc0;
            case 0x1CDCD8u: goto label_1cdcd8;
            case 0x1CDCF4u: goto label_1cdcf4;
            case 0x1CDD0Cu: goto label_1cdd0c;
            case 0x1CDD44u: goto label_1cdd44;
            case 0x1CDD54u: goto label_1cdd54;
            case 0x1CDD5Cu: goto label_1cdd5c;
            case 0x1CDD88u: goto label_1cdd88;
            case 0x1CDD8Cu: goto label_1cdd8c;
            case 0x1CDD90u: goto label_1cdd90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CDD98u;
    // 0x1cdd98: 0x0
    ctx->pc = 0x1cdd98u;
    // NOP
    // 0x1cdd9c: 0x0
    ctx->pc = 0x1cdd9cu;
    // NOP
}
