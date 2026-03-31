#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1201c0
// Address: 0x1201c0 - 0x1204e0
void entry_1201c0_0x1204e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1201c0u;

    // 0x1201c0: 0x27bdffc0
    ctx->pc = 0x1201c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1201c4: 0xffb00000
    ctx->pc = 0x1201c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1201c8: 0x80802d
    ctx->pc = 0x1201c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1201cc: 0xffb40020
    ctx->pc = 0x1201ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1201d0: 0x3c148000
    ctx->pc = 0x1201d0u;
    SET_GPR_U32(ctx, 20, ((uint32_t)32768 << 16));
    // 0x1201d4: 0xffb10008
    ctx->pc = 0x1201d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1201d8: 0xffb20010
    ctx->pc = 0x1201d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1201dc: 0xffb30018
    ctx->pc = 0x1201dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1201e0: 0xffb50028
    ctx->pc = 0x1201e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1201e4: 0x200102d
    ctx->pc = 0x1201e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1201e8: 0x2383c
    ctx->pc = 0x1201e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1201ec: 0x7383f
    ctx->pc = 0x1201ecu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x1201f0: 0x2283f
    ctx->pc = 0x1201f0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1201f4: 0x3c037ff0
    ctx->pc = 0x1201f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32752 << 16));
    // 0x1201f8: 0xa31024
    ctx->pc = 0x1201f8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1201fc: 0x1443000a
    ctx->pc = 0x1201FCu;
    {
        const bool branch_taken_0x1201fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x120200u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        if (branch_taken_0x1201fc) {
            ctx->pc = 0x120228u;
            goto label_120228;
        }
    }
    ctx->pc = 0x120204u;
    // 0x120204: 0x200282d
    ctx->pc = 0x120204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120208: 0xc04476c
    ctx->pc = 0x120208u;
    SET_GPR_U32(ctx, 31, 0x120210u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120210u; }
    }
    if (ctx->pc != 0x120210u) { return; }
    ctx->pc = 0x120210u;
    // 0x120210: 0x200282d
    ctx->pc = 0x120210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120214: 0x40202d
    ctx->pc = 0x120214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120218: 0xc04473c
    ctx->pc = 0x120218u;
    SET_GPR_U32(ctx, 31, 0x120220u);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120220u; }
    }
    if (ctx->pc != 0x120220u) { return; }
    ctx->pc = 0x120220u;
    // 0x120220: 0x100000a6
    ctx->pc = 0x120220u;
    {
        const bool branch_taken_0x120220 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x120224u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x120220) {
            ctx->pc = 0x1204BCu;
            goto label_1204bc;
        }
    }
    ctx->pc = 0x120228u;
label_120228:
    // 0x120228: 0x1ca00013
    ctx->pc = 0x120228u;
    {
        const bool branch_taken_0x120228 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x12022Cu;
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 5), 20));
        if (branch_taken_0x120228) {
            ctx->pc = 0x120278u;
            goto label_120278;
        }
    }
    ctx->pc = 0x120230u;
    // 0x120230: 0x3c037fff
    ctx->pc = 0x120230u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32767 << 16));
    // 0x120234: 0x200102d
    ctx->pc = 0x120234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120238: 0x3463ffff
    ctx->pc = 0x120238u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x12023c: 0xa31824
    ctx->pc = 0x12023cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x120240: 0x671825
    ctx->pc = 0x120240u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x120244: 0x5060009d
    ctx->pc = 0x120244u;
    {
        const bool branch_taken_0x120244 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x120244) {
            ctx->pc = 0x120248u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x1204BCu;
            goto label_1204bc;
        }
    }
    ctx->pc = 0x12024Cu;
    // 0x12024c: 0x4a1000a
    ctx->pc = 0x12024Cu;
    {
        const bool branch_taken_0x12024c = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x12024c) {
            ctx->pc = 0x120278u;
            goto label_120278;
        }
    }
    ctx->pc = 0x120254u;
    // 0x120254: 0x200282d
    ctx->pc = 0x120254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120258: 0xc044752
    ctx->pc = 0x120258u;
    SET_GPR_U32(ctx, 31, 0x120260u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120260u; }
    }
    if (ctx->pc != 0x120260u) { return; }
    ctx->pc = 0x120260u;
    // 0x120260: 0x40202d
    ctx->pc = 0x120260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120264: 0x40282d
    ctx->pc = 0x120264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120268: 0xc04480e
    ctx->pc = 0x120268u;
    SET_GPR_U32(ctx, 31, 0x120270u);
    ctx->pc = 0x112038u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112038_0x112038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120270u; }
    }
    if (ctx->pc != 0x120270u) { return; }
    ctx->pc = 0x120270u;
    // 0x120270: 0x10000092
    ctx->pc = 0x120270u;
    {
        const bool branch_taken_0x120270 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x120274u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x120270) {
            ctx->pc = 0x1204BCu;
            goto label_1204bc;
        }
    }
    ctx->pc = 0x120278u;
label_120278:
    // 0x120278: 0x1620001d
    ctx->pc = 0x120278u;
    {
        const bool branch_taken_0x120278 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x12027Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)15 << 16));
        if (branch_taken_0x120278) {
            ctx->pc = 0x1202F0u;
            goto label_1202f0;
        }
    }
    ctx->pc = 0x120280u;
    // 0x120280: 0x14a00009
    ctx->pc = 0x120280u;
    {
        const bool branch_taken_0x120280 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x120284u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
        if (branch_taken_0x120280) {
            ctx->pc = 0x1202A8u;
            goto label_1202a8;
        }
    }
    ctx->pc = 0x120288u;
label_120288:
    // 0x120288: 0x712c2
    ctx->pc = 0x120288u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 7), 11));
    // 0x12028c: 0x73d40
    ctx->pc = 0x12028cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 21));
    // 0x120290: 0xa22825
    ctx->pc = 0x120290u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x120294: 0x0
    ctx->pc = 0x120294u;
    // NOP
    // 0x120298: 0x0
    ctx->pc = 0x120298u;
    // NOP
    // 0x12029c: 0x10a0fffa
    ctx->pc = 0x12029Cu;
    {
        const bool branch_taken_0x12029c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x1202A0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967275));
        if (branch_taken_0x12029c) {
            ctx->pc = 0x120288u;
            goto label_120288;
        }
    }
    ctx->pc = 0x1202A4u;
    // 0x1202a4: 0x3c020010
    ctx->pc = 0x1202a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
label_1202a8:
    // 0x1202a8: 0xa21024
    ctx->pc = 0x1202a8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1202ac: 0x14400009
    ctx->pc = 0x1202ACu;
    {
        const bool branch_taken_0x1202ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1202B0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1202ac) {
            ctx->pc = 0x1202D4u;
            goto label_1202d4;
        }
    }
    ctx->pc = 0x1202B4u;
    // 0x1202b4: 0x3c030010
    ctx->pc = 0x1202b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16 << 16));
label_1202b8:
    // 0x1202b8: 0x52840
    ctx->pc = 0x1202b8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1202bc: 0xa31024
    ctx->pc = 0x1202bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1202c0: 0x0
    ctx->pc = 0x1202c0u;
    // NOP
    // 0x1202c4: 0x0
    ctx->pc = 0x1202c4u;
    // NOP
    // 0x1202c8: 0x0
    ctx->pc = 0x1202c8u;
    // NOP
    // 0x1202cc: 0x1040fffa
    ctx->pc = 0x1202CCu;
    {
        const bool branch_taken_0x1202cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1202D0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x1202cc) {
            ctx->pc = 0x1202B8u;
            goto label_1202b8;
        }
    }
    ctx->pc = 0x1202D4u;
label_1202d4:
    // 0x1202d4: 0x41023
    ctx->pc = 0x1202d4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1202d8: 0x2241823
    ctx->pc = 0x1202d8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1202dc: 0x471006
    ctx->pc = 0x1202dcu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1202e0: 0x873804
    ctx->pc = 0x1202e0u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x1202e4: 0x24710001
    ctx->pc = 0x1202e4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1202e8: 0xa22825
    ctx->pc = 0x1202e8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1202ec: 0x3c02000f
    ctx->pc = 0x1202ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15 << 16));
label_1202f0:
    // 0x1202f0: 0x2631fc01
    ctx->pc = 0x1202f0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294966273));
    // 0x1202f4: 0x3442ffff
    ctx->pc = 0x1202f4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1202f8: 0x3c040010
    ctx->pc = 0x1202f8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)16 << 16));
    // 0x1202fc: 0xa21024
    ctx->pc = 0x1202fcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x120300: 0x32230001
    ctx->pc = 0x120300u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 17), 1));
    // 0x120304: 0x10600006
    ctx->pc = 0x120304u;
    {
        const bool branch_taken_0x120304 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x120308u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        if (branch_taken_0x120304) {
            ctx->pc = 0x120320u;
            goto label_120320;
        }
    }
    ctx->pc = 0x12030Cu;
    // 0x12030c: 0xf41024
    ctx->pc = 0x12030cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x120310: 0x73840
    ctx->pc = 0x120310u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 1));
    // 0x120314: 0x217c2
    ctx->pc = 0x120314u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 31));
    // 0x120318: 0xa21021
    ctx->pc = 0x120318u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x12031c: 0xa22821
    ctx->pc = 0x12031cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_120320:
    // 0x120320: 0xf41024
    ctx->pc = 0x120320u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x120324: 0x73840
    ctx->pc = 0x120324u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 1));
    // 0x120328: 0x217c2
    ctx->pc = 0x120328u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 31));
    // 0x12032c: 0x118843
    ctx->pc = 0x12032cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
    // 0x120330: 0xa21021
    ctx->pc = 0x120330u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x120334: 0x602d
    ctx->pc = 0x120334u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120338: 0xa22821
    ctx->pc = 0x120338u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x12033c: 0x582d
    ctx->pc = 0x12033cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120340: 0x902d
    ctx->pc = 0x120340u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120344: 0x982d
    ctx->pc = 0x120344u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120348: 0x3c090020
    ctx->pc = 0x120348u;
    SET_GPR_U32(ctx, 9, ((uint32_t)32 << 16));
    // 0x12034c: 0x0
    ctx->pc = 0x12034cu;
    // NOP
label_120350:
    // 0x120350: 0x1691821
    ctx->pc = 0x120350u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x120354: 0xa3102a
    ctx->pc = 0x120354u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 3)));
    // 0x120358: 0x14400004
    ctx->pc = 0x120358u;
    {
        const bool branch_taken_0x120358 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12035Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
        if (branch_taken_0x120358) {
            ctx->pc = 0x12036Cu;
            goto label_12036c;
        }
    }
    ctx->pc = 0x120360u;
    // 0x120360: 0xa32823
    ctx->pc = 0x120360u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x120364: 0x695821
    ctx->pc = 0x120364u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x120368: 0x2699821
    ctx->pc = 0x120368u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
label_12036c:
    // 0x12036c: 0x73840
    ctx->pc = 0x12036cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 1));
    // 0x120370: 0x217c2
    ctx->pc = 0x120370u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 31));
    // 0x120374: 0x94842
    ctx->pc = 0x120374u;
    SET_GPR_U32(ctx, 9, SRL32(GPR_U32(ctx, 9), 1));
    // 0x120378: 0xa21021
    ctx->pc = 0x120378u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x12037c: 0x1520fff4
    ctx->pc = 0x12037Cu;
    {
        const bool branch_taken_0x12037c = (GPR_U32(ctx, 9) != GPR_U32(ctx, 0));
        ctx->pc = 0x120380u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        if (branch_taken_0x12037c) {
            ctx->pc = 0x120350u;
            goto label_120350;
        }
    }
    ctx->pc = 0x120384u;
    // 0x120384: 0x3c098000
    ctx->pc = 0x120384u;
    SET_GPR_U32(ctx, 9, ((uint32_t)32768 << 16));
label_120388:
    // 0x120388: 0x160182d
    ctx->pc = 0x120388u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12038c: 0x1892021
    ctx->pc = 0x12038cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x120390: 0x65102a
    ctx->pc = 0x120390u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 5)));
    // 0x120394: 0x945024
    ctx->pc = 0x120394u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x120398: 0x14400005
    ctx->pc = 0x120398u;
    {
        const bool branch_taken_0x120398 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12039Cu;
        SET_GPR_U32(ctx, 8, SLTU32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        if (branch_taken_0x120398) {
            ctx->pc = 0x1203B0u;
            goto label_1203b0;
        }
    }
    ctx->pc = 0x1203A0u;
    // 0x1203a0: 0x1465000d
    ctx->pc = 0x1203A0u;
    {
        const bool branch_taken_0x1203a0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 5));
        ctx->pc = 0x1203A4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
        if (branch_taken_0x1203a0) {
            ctx->pc = 0x1203D8u;
            goto label_1203d8;
        }
    }
    ctx->pc = 0x1203A8u;
    // 0x1203a8: 0x5500000c
    ctx->pc = 0x1203A8u;
    {
        const bool branch_taken_0x1203a8 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        if (branch_taken_0x1203a8) {
            ctx->pc = 0x1203ACu;
            SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 1));
            ctx->pc = 0x1203DCu;
            goto label_1203dc;
        }
    }
    ctx->pc = 0x1203B0u;
label_1203b0:
    // 0x1203b0: 0x896021
    ctx->pc = 0x1203b0u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1203b4: 0x15540003
    ctx->pc = 0x1203B4u;
    {
        const bool branch_taken_0x1203b4 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 20));
        ctx->pc = 0x1203B8u;
        SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 12), GPR_U32(ctx, 20)));
        if (branch_taken_0x1203b4) {
            ctx->pc = 0x1203C4u;
            goto label_1203c4;
        }
    }
    ctx->pc = 0x1203BCu;
    // 0x1203bc: 0x25620001
    ctx->pc = 0x1203bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 11), 1));
    // 0x1203c0: 0x46580a
    ctx->pc = 0x1203c0u;
    if (GPR_U32(ctx, 6) == 0) SET_GPR_U32(ctx, 11, GPR_U32(ctx, 2));
label_1203c4:
    // 0x1203c4: 0xa32823
    ctx->pc = 0x1203c4u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1203c8: 0xe43823
    ctx->pc = 0x1203c8u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1203cc: 0x2499021
    ctx->pc = 0x1203ccu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x1203d0: 0xa82823
    ctx->pc = 0x1203d0u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1203d4: 0xf41024
    ctx->pc = 0x1203d4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
label_1203d8:
    // 0x1203d8: 0x73840
    ctx->pc = 0x1203d8u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 1));
label_1203dc:
    // 0x1203dc: 0x217c2
    ctx->pc = 0x1203dcu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 31));
    // 0x1203e0: 0x94842
    ctx->pc = 0x1203e0u;
    SET_GPR_U32(ctx, 9, SRL32(GPR_U32(ctx, 9), 1));
    // 0x1203e4: 0xa21021
    ctx->pc = 0x1203e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1203e8: 0x1520ffe7
    ctx->pc = 0x1203E8u;
    {
        const bool branch_taken_0x1203e8 = (GPR_U32(ctx, 9) != GPR_U32(ctx, 0));
        ctx->pc = 0x1203ECu;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        if (branch_taken_0x1203e8) {
            ctx->pc = 0x120388u;
            goto label_120388;
        }
    }
    ctx->pc = 0x1203F0u;
    // 0x1203f0: 0xa71025
    ctx->pc = 0x1203f0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1203f4: 0x1040001c
    ctx->pc = 0x1203F4u;
    {
        const bool branch_taken_0x1203f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1203F8u;
        SET_GPR_U32(ctx, 7, SRL32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x1203f4) {
            ctx->pc = 0x120468u;
            goto label_120468;
        }
    }
    ctx->pc = 0x1203FCu;
    // 0x1203fc: 0x3410ffc0
    ctx->pc = 0x1203fcu;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 0), 65472));
    // 0x120400: 0x1083bc
    ctx->pc = 0x120400u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x120404: 0x200202d
    ctx->pc = 0x120404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120408: 0x200282d
    ctx->pc = 0x120408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12040c: 0xc0448a6
    ctx->pc = 0x12040Cu;
    SET_GPR_U32(ctx, 31, 0x120414u);
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120414u; }
    }
    if (ctx->pc != 0x120414u) { return; }
    ctx->pc = 0x120414u;
    // 0x120414: 0x4400013
    ctx->pc = 0x120414u;
    {
        const bool branch_taken_0x120414 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x120418u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x120414) {
            ctx->pc = 0x120464u;
            goto label_120464;
        }
    }
    ctx->pc = 0x12041Cu;
    // 0x12041c: 0x16420004
    ctx->pc = 0x12041Cu;
    {
        const bool branch_taken_0x12041c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x12041c) {
            ctx->pc = 0x120430u;
            goto label_120430;
        }
    }
    ctx->pc = 0x120424u;
    // 0x120424: 0x902d
    ctx->pc = 0x120424u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120428: 0x1000000e
    ctx->pc = 0x120428u;
    {
        const bool branch_taken_0x120428 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12042Cu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x120428) {
            ctx->pc = 0x120464u;
            goto label_120464;
        }
    }
    ctx->pc = 0x120430u;
label_120430:
    // 0x120430: 0x200202d
    ctx->pc = 0x120430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120434: 0x200282d
    ctx->pc = 0x120434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120438: 0xc0448a6
    ctx->pc = 0x120438u;
    SET_GPR_U32(ctx, 31, 0x120440u);
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120440u; }
    }
    if (ctx->pc != 0x120440u) { return; }
    ctx->pc = 0x120440u;
    // 0x120440: 0x18400007
    ctx->pc = 0x120440u;
    {
        const bool branch_taken_0x120440 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x120444u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x120440) {
            ctx->pc = 0x120460u;
            goto label_120460;
        }
    }
    ctx->pc = 0x120448u;
    // 0x120448: 0x2402fffe
    ctx->pc = 0x120448u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x12044c: 0x26630001
    ctx->pc = 0x12044cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 19), 1));
    // 0x120450: 0x2421026
    ctx->pc = 0x120450u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x120454: 0x26520002
    ctx->pc = 0x120454u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 2));
    // 0x120458: 0x10000002
    ctx->pc = 0x120458u;
    {
        const bool branch_taken_0x120458 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12045Cu;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 3));
        if (branch_taken_0x120458) {
            ctx->pc = 0x120464u;
            goto label_120464;
        }
    }
    ctx->pc = 0x120460u;
label_120460:
    // 0x120460: 0x2429021
    ctx->pc = 0x120460u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_120464:
    // 0x120464: 0x123842
    ctx->pc = 0x120464u;
    SET_GPR_U32(ctx, 7, SRL32(GPR_U32(ctx, 18), 1));
label_120468:
    // 0x120468: 0x131043
    ctx->pc = 0x120468u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 19), 1));
    // 0x12046c: 0x3c053fe0
    ctx->pc = 0x12046cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)16352 << 16));
    // 0x120470: 0xa22821
    ctx->pc = 0x120470u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x120474: 0xf41025
    ctx->pc = 0x120474u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x120478: 0x32640001
    ctx->pc = 0x120478u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 19), 1));
    // 0x12047c: 0x111d00
    ctx->pc = 0x12047cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 20));
    // 0x120480: 0x44380b
    ctx->pc = 0x120480u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 2));
    // 0x120484: 0xa32821
    ctx->pc = 0x120484u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x120488: 0x5203c
    ctx->pc = 0x120488u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x12048c: 0x3c02ffff
    ctx->pc = 0x12048cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x120490: 0x2103e
    ctx->pc = 0x120490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x120494: 0x2a2a824
    ctx->pc = 0x120494u;
    SET_GPR_U32(ctx, 21, AND32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x120498: 0x2402ffff
    ctx->pc = 0x120498u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12049c: 0x2103c
    ctx->pc = 0x12049cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1204a0: 0x7183c
    ctx->pc = 0x1204a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1204a4: 0x2a4a825
    ctx->pc = 0x1204a4u;
    SET_GPR_U32(ctx, 21, OR32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1204a8: 0x3183e
    ctx->pc = 0x1204a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1204ac: 0x2a2a824
    ctx->pc = 0x1204acu;
    SET_GPR_U32(ctx, 21, AND32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1204b0: 0x2a38025
    ctx->pc = 0x1204b0u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1204b4: 0x200102d
    ctx->pc = 0x1204b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1204b8: 0xdfb00000
    ctx->pc = 0x1204b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1204bc:
    // 0x1204bc: 0xdfb10008
    ctx->pc = 0x1204bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1204c0: 0xdfb20010
    ctx->pc = 0x1204c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1204c4: 0xdfb30018
    ctx->pc = 0x1204c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1204c8: 0xdfb40020
    ctx->pc = 0x1204c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1204cc: 0xdfb50028
    ctx->pc = 0x1204ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1204d0: 0xdfbf0030
    ctx->pc = 0x1204d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1204d4: 0x3e00008
    ctx->pc = 0x1204D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1204D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x120228u: goto label_120228;
            case 0x120278u: goto label_120278;
            case 0x120288u: goto label_120288;
            case 0x1202A8u: goto label_1202a8;
            case 0x1202B8u: goto label_1202b8;
            case 0x1202D4u: goto label_1202d4;
            case 0x1202F0u: goto label_1202f0;
            case 0x120320u: goto label_120320;
            case 0x120350u: goto label_120350;
            case 0x12036Cu: goto label_12036c;
            case 0x120388u: goto label_120388;
            case 0x1203B0u: goto label_1203b0;
            case 0x1203C4u: goto label_1203c4;
            case 0x1203D8u: goto label_1203d8;
            case 0x1203DCu: goto label_1203dc;
            case 0x120430u: goto label_120430;
            case 0x120460u: goto label_120460;
            case 0x120464u: goto label_120464;
            case 0x120468u: goto label_120468;
            case 0x1204BCu: goto label_1204bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1204DCu;
    // 0x1204dc: 0x0
    ctx->pc = 0x1204dcu;
    // NOP
}
