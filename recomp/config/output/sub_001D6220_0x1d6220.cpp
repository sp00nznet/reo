#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D6220
// Address: 0x1d6220 - 0x1d6370
void sub_001D6220_0x1d6220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d6220u;

    // 0x1d6220: 0x24020038
    ctx->pc = 0x1d6220u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 56));
    // 0x1d6224: 0x3c030034
    ctx->pc = 0x1d6224u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x1d6228: 0x822018
    ctx->pc = 0x1d6228u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x1d622c: 0x27bdff70
    ctx->pc = 0x1d622cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1d6230: 0x8c6a2844
    ctx->pc = 0x1d6230u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 3), 10308)));
    // 0x1d6234: 0xffb70070
    ctx->pc = 0x1d6234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x1d6238: 0xffb60060
    ctx->pc = 0x1d6238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1d623c: 0x30b700ff
    ctx->pc = 0x1d623cu;
    SET_GPR_U32(ctx, 23, AND32(GPR_U32(ctx, 5), 255));
    // 0x1d6240: 0xffb50050
    ctx->pc = 0x1d6240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1d6244: 0x30d600ff
    ctx->pc = 0x1d6244u;
    SET_GPR_U32(ctx, 22, AND32(GPR_U32(ctx, 6), 255));
    // 0x1d6248: 0xffb40040
    ctx->pc = 0x1d6248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1d624c: 0x120a82d
    ctx->pc = 0x1d624cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6250: 0xffb30030
    ctx->pc = 0x1d6250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1d6254: 0xe0a02d
    ctx->pc = 0x1d6254u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6258: 0xffb20020
    ctx->pc = 0x1d6258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1d625c: 0x1449821
    ctx->pc = 0x1d625cu;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1d6260: 0xffbf0080
    ctx->pc = 0x1d6260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1d6264: 0x100902d
    ctx->pc = 0x1d6264u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6268: 0xffb10010
    ctx->pc = 0x1d6268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1d626c: 0xffb00000
    ctx->pc = 0x1d626cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d6270: 0x8e630004
    ctx->pc = 0x1d6270u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1d6274: 0x10600006
    ctx->pc = 0x1D6274u;
    {
        const bool branch_taken_0x1d6274 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D6278u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d6274) {
            ctx->pc = 0x1D6290u;
            goto label_1d6290;
        }
    }
    ctx->pc = 0x1D627Cu;
    // 0x1d627c: 0x24020001
    ctx->pc = 0x1d627cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6280: 0x10620017
    ctx->pc = 0x1D6280u;
    {
        const bool branch_taken_0x1d6280 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D6284u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x1d6280) {
            ctx->pc = 0x1D62E0u;
            goto label_1d62e0;
        }
    }
    ctx->pc = 0x1D6288u;
    // 0x1d6288: 0x1000002e
    ctx->pc = 0x1D6288u;
    {
        const bool branch_taken_0x1d6288 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D628Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d6288) {
            ctx->pc = 0x1D6344u;
            goto label_1d6344;
        }
    }
    ctx->pc = 0x1D6290u;
label_1d6290:
    // 0x1d6290: 0x1a800029
    ctx->pc = 0x1D6290u;
    {
        const bool branch_taken_0x1d6290 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1D6294u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d6290) {
            ctx->pc = 0x1D6338u;
            goto label_1d6338;
        }
    }
    ctx->pc = 0x1D6298u;
    // 0x1d6298: 0x96420000
    ctx->pc = 0x1d6298u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d629c: 0x10400026
    ctx->pc = 0x1D629Cu;
    {
        const bool branch_taken_0x1d629c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D62A0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d629c) {
            ctx->pc = 0x1D6338u;
            goto label_1d6338;
        }
    }
    ctx->pc = 0x1D62A4u;
    // 0x1d62a4: 0x2121021
    ctx->pc = 0x1d62a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1d62a8: 0x2152021
    ctx->pc = 0x1d62a8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x1d62ac: 0x0
    ctx->pc = 0x1d62acu;
    // NOP
label_1d62b0:
    // 0x1d62b0: 0x94430000
    ctx->pc = 0x1d62b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d62b4: 0x26310001
    ctx->pc = 0x1d62b4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d62b8: 0x234102a
    ctx->pc = 0x1d62b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 20)));
    // 0x1d62bc: 0x1040001e
    ctx->pc = 0x1D62BCu;
    {
        const bool branch_taken_0x1d62bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D62C0u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d62bc) {
            ctx->pc = 0x1D6338u;
            goto label_1d6338;
        }
    }
    ctx->pc = 0x1D62C4u;
    // 0x1d62c4: 0x118040
    ctx->pc = 0x1d62c4u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 17), 1));
    // 0x1d62c8: 0x2121021
    ctx->pc = 0x1d62c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1d62cc: 0x94430000
    ctx->pc = 0x1d62ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d62d0: 0x1460fff7
    ctx->pc = 0x1D62D0u;
    {
        const bool branch_taken_0x1d62d0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D62D4u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        if (branch_taken_0x1d62d0) {
            ctx->pc = 0x1D62B0u;
            goto label_1d62b0;
        }
    }
    ctx->pc = 0x1D62D8u;
    // 0x1d62d8: 0x10000018
    ctx->pc = 0x1D62D8u;
    {
        const bool branch_taken_0x1d62d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D62DCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d62d8) {
            ctx->pc = 0x1D633Cu;
            goto label_1d633c;
        }
    }
    ctx->pc = 0x1D62E0u;
label_1d62e0:
    // 0x1d62e0: 0x1a800015
    ctx->pc = 0x1D62E0u;
    {
        const bool branch_taken_0x1d62e0 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1D62E4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d62e0) {
            ctx->pc = 0x1D6338u;
            goto label_1d6338;
        }
    }
    ctx->pc = 0x1D62E8u;
    // 0x1d62e8: 0x96420000
    ctx->pc = 0x1d62e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d62ec: 0x10400012
    ctx->pc = 0x1D62ECu;
    {
        const bool branch_taken_0x1d62ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D62F0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d62ec) {
            ctx->pc = 0x1D6338u;
            goto label_1d6338;
        }
    }
    ctx->pc = 0x1D62F4u;
    // 0x1d62f4: 0x2121021
    ctx->pc = 0x1d62f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1d62f8:
    // 0x1d62f8: 0x8e640008
    ctx->pc = 0x1d62f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1d62fc: 0x94470000
    ctx->pc = 0x1d62fcu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d6300: 0x2e0282d
    ctx->pc = 0x1d6300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6304: 0x2c0302d
    ctx->pc = 0x1d6304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6308: 0xc0758dc
    ctx->pc = 0x1D6308u;
    SET_GPR_U32(ctx, 31, 0x1D6310u);
    ctx->pc = 0x1D630Cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x1D6370u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6370_0x1d6370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6310u; }
    }
    if (ctx->pc != 0x1D6310u) { return; }
    ctx->pc = 0x1D6310u;
    // 0x1d6310: 0x2151821
    ctx->pc = 0x1d6310u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x1d6314: 0x234202a
    ctx->pc = 0x1d6314u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 20)));
    // 0x1d6318: 0x10800007
    ctx->pc = 0x1D6318u;
    {
        const bool branch_taken_0x1d6318 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D631Cu;
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1d6318) {
            ctx->pc = 0x1D6338u;
            goto label_1d6338;
        }
    }
    ctx->pc = 0x1D6320u;
    // 0x1d6320: 0x111040
    ctx->pc = 0x1d6320u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 1));
    // 0x1d6324: 0x40802d
    ctx->pc = 0x1d6324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6328: 0x2121821
    ctx->pc = 0x1d6328u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1d632c: 0x94620000
    ctx->pc = 0x1d632cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d6330: 0x1440fff1
    ctx->pc = 0x1D6330u;
    {
        const bool branch_taken_0x1d6330 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D6334u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        if (branch_taken_0x1d6330) {
            ctx->pc = 0x1D62F8u;
            goto label_1d62f8;
        }
    }
    ctx->pc = 0x1D6338u;
label_1d6338:
    // 0x1d6338: 0x220282d
    ctx->pc = 0x1d6338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d633c:
    // 0x1d633c: 0xdfbf0080
    ctx->pc = 0x1d633cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d6340: 0xa0102d
    ctx->pc = 0x1d6340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d6344:
    // 0x1d6344: 0xdfb70070
    ctx->pc = 0x1d6344u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d6348: 0xdfb60060
    ctx->pc = 0x1d6348u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d634c: 0xdfb50050
    ctx->pc = 0x1d634cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d6350: 0xdfb40040
    ctx->pc = 0x1d6350u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d6354: 0xdfb30030
    ctx->pc = 0x1d6354u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d6358: 0xdfb20020
    ctx->pc = 0x1d6358u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d635c: 0xdfb10010
    ctx->pc = 0x1d635cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6360: 0xdfb00000
    ctx->pc = 0x1d6360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6364: 0x3e00008
    ctx->pc = 0x1D6364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6368u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D6290u: goto label_1d6290;
            case 0x1D62B0u: goto label_1d62b0;
            case 0x1D62E0u: goto label_1d62e0;
            case 0x1D62F8u: goto label_1d62f8;
            case 0x1D6338u: goto label_1d6338;
            case 0x1D633Cu: goto label_1d633c;
            case 0x1D6344u: goto label_1d6344;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D636Cu;
    // 0x1d636c: 0x0
    ctx->pc = 0x1d636cu;
    // NOP
}
