#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B0300
// Address: 0x1b0300 - 0x1b05b0
void sub_001B0300_0x1b0300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b0300u;

    // 0x1b0300: 0x3c010032
    ctx->pc = 0x1b0300u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b0304: 0x3e00008
    ctx->pc = 0x1B0304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0308u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17394)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0334u: goto label_1b0334;
            case 0x1B0360u: goto label_1b0360;
            case 0x1B0388u: goto label_1b0388;
            case 0x1B03A0u: goto label_1b03a0;
            case 0x1B03A4u: goto label_1b03a4;
            case 0x1B03A8u: goto label_1b03a8;
            case 0x1B03E0u: goto label_1b03e0;
            case 0x1B0408u: goto label_1b0408;
            case 0x1B040Cu: goto label_1b040c;
            case 0x1B0448u: goto label_1b0448;
            case 0x1B0484u: goto label_1b0484;
            case 0x1B0488u: goto label_1b0488;
            case 0x1B04A4u: goto label_1b04a4;
            case 0x1B04F8u: goto label_1b04f8;
            case 0x1B04FCu: goto label_1b04fc;
            case 0x1B0540u: goto label_1b0540;
            case 0x1B05A0u: goto label_1b05a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B030Cu;
    // 0x1b030c: 0x0
    ctx->pc = 0x1b030cu;
    // NOP
    // 0x1b0310: 0x3c010032
    ctx->pc = 0x1b0310u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b0314: 0x24020001
    ctx->pc = 0x1b0314u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0318: 0x802343fb
    ctx->pc = 0x1b0318u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 17403)));
    // 0x1b031c: 0x10620005
    ctx->pc = 0x1B031Cu;
    {
        const bool branch_taken_0x1b031c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1B0320u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1b031c) {
            ctx->pc = 0x1B0334u;
            goto label_1b0334;
        }
    }
    ctx->pc = 0x1B0324u;
    // 0x1b0324: 0x24020002
    ctx->pc = 0x1b0324u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b0328: 0x14620002
    ctx->pc = 0x1B0328u;
    {
        const bool branch_taken_0x1b0328 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1B032Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b0328) {
            ctx->pc = 0x1B0334u;
            goto label_1b0334;
        }
    }
    ctx->pc = 0x1B0330u;
    // 0x1b0330: 0x24020001
    ctx->pc = 0x1b0330u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1b0334:
    // 0x1b0334: 0x3e00008
    ctx->pc = 0x1B0334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0334u: goto label_1b0334;
            case 0x1B0360u: goto label_1b0360;
            case 0x1B0388u: goto label_1b0388;
            case 0x1B03A0u: goto label_1b03a0;
            case 0x1B03A4u: goto label_1b03a4;
            case 0x1B03A8u: goto label_1b03a8;
            case 0x1B03E0u: goto label_1b03e0;
            case 0x1B0408u: goto label_1b0408;
            case 0x1B040Cu: goto label_1b040c;
            case 0x1B0448u: goto label_1b0448;
            case 0x1B0484u: goto label_1b0484;
            case 0x1B0488u: goto label_1b0488;
            case 0x1B04A4u: goto label_1b04a4;
            case 0x1B04F8u: goto label_1b04f8;
            case 0x1B04FCu: goto label_1b04fc;
            case 0x1B0540u: goto label_1b0540;
            case 0x1B05A0u: goto label_1b05a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B033Cu;
    // 0x1b033c: 0x0
    ctx->pc = 0x1b033cu;
    // NOP
    // 0x1b0340: 0x27bdffe0
    ctx->pc = 0x1b0340u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b0344: 0xffbf0010
    ctx->pc = 0x1b0344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b0348: 0x7fb00000
    ctx->pc = 0x1b0348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b034c: 0x90820002
    ctx->pc = 0x1b034cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1b0350: 0x10400003
    ctx->pc = 0x1B0350u;
    {
        const bool branch_taken_0x1b0350 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B0354u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b0350) {
            ctx->pc = 0x1B0360u;
            goto label_1b0360;
        }
    }
    ctx->pc = 0x1B0358u;
    // 0x1b0358: 0x10000012
    ctx->pc = 0x1B0358u;
    {
        const bool branch_taken_0x1b0358 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B035Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b0358) {
            ctx->pc = 0x1B03A4u;
            goto label_1b03a4;
        }
    }
    ctx->pc = 0x1B0360u;
label_1b0360:
    // 0x1b0360: 0xc06c0b4
    ctx->pc = 0x1B0360u;
    SET_GPR_U32(ctx, 31, 0x1B0368u);
    ctx->pc = 0x1B02D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B02D0_0x1b02d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0368u; }
    }
    if (ctx->pc != 0x1B0368u) { return; }
    ctx->pc = 0x1B0368u;
    // 0x1b0368: 0x24040001
    ctx->pc = 0x1b0368u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b036c: 0x14440006
    ctx->pc = 0x1B036Cu;
    {
        const bool branch_taken_0x1b036c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x1B0370u;
        SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
        if (branch_taken_0x1b036c) {
            ctx->pc = 0x1B0388u;
            goto label_1b0388;
        }
    }
    ctx->pc = 0x1B0374u;
    // 0x1b0374: 0x92020003
    ctx->pc = 0x1b0374u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1b0378: 0x1440000a
    ctx->pc = 0x1B0378u;
    {
        const bool branch_taken_0x1b0378 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B037Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b0378) {
            ctx->pc = 0x1B03A4u;
            goto label_1b03a4;
        }
    }
    ctx->pc = 0x1B0380u;
    // 0x1b0380: 0x10000008
    ctx->pc = 0x1B0380u;
    {
        const bool branch_taken_0x1b0380 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B0384u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b0380) {
            ctx->pc = 0x1B03A4u;
            goto label_1b03a4;
        }
    }
    ctx->pc = 0x1B0388u;
label_1b0388:
    // 0x1b0388: 0x92020003
    ctx->pc = 0x1b0388u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1b038c: 0x9023aded
    ctx->pc = 0x1b038cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946285)));
    // 0x1b0390: 0x14620003
    ctx->pc = 0x1B0390u;
    {
        const bool branch_taken_0x1b0390 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1B0394u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b0390) {
            ctx->pc = 0x1B03A0u;
            goto label_1b03a0;
        }
    }
    ctx->pc = 0x1B0398u;
    // 0x1b0398: 0x10000003
    ctx->pc = 0x1B0398u;
    {
        const bool branch_taken_0x1b0398 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B039Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1b0398) {
            ctx->pc = 0x1B03A8u;
            goto label_1b03a8;
        }
    }
    ctx->pc = 0x1B03A0u;
label_1b03a0:
    // 0x1b03a0: 0x102d
    ctx->pc = 0x1b03a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b03a4:
    // 0x1b03a4: 0xdfbf0010
    ctx->pc = 0x1b03a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b03a8:
    // 0x1b03a8: 0x7bb00000
    ctx->pc = 0x1b03a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b03ac: 0x3e00008
    ctx->pc = 0x1B03ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B03B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0334u: goto label_1b0334;
            case 0x1B0360u: goto label_1b0360;
            case 0x1B0388u: goto label_1b0388;
            case 0x1B03A0u: goto label_1b03a0;
            case 0x1B03A4u: goto label_1b03a4;
            case 0x1B03A8u: goto label_1b03a8;
            case 0x1B03E0u: goto label_1b03e0;
            case 0x1B0408u: goto label_1b0408;
            case 0x1B040Cu: goto label_1b040c;
            case 0x1B0448u: goto label_1b0448;
            case 0x1B0484u: goto label_1b0484;
            case 0x1B0488u: goto label_1b0488;
            case 0x1B04A4u: goto label_1b04a4;
            case 0x1B04F8u: goto label_1b04f8;
            case 0x1B04FCu: goto label_1b04fc;
            case 0x1B0540u: goto label_1b0540;
            case 0x1B05A0u: goto label_1b05a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B03B4u;
    // 0x1b03b4: 0x0
    ctx->pc = 0x1b03b4u;
    // NOP
    // 0x1b03b8: 0x0
    ctx->pc = 0x1b03b8u;
    // NOP
    // 0x1b03bc: 0x0
    ctx->pc = 0x1b03bcu;
    // NOP
    // 0x1b03c0: 0x27bdffe0
    ctx->pc = 0x1b03c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b03c4: 0xffbf0010
    ctx->pc = 0x1b03c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b03c8: 0x7fb00000
    ctx->pc = 0x1b03c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b03cc: 0x90820002
    ctx->pc = 0x1b03ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1b03d0: 0x10400003
    ctx->pc = 0x1B03D0u;
    {
        const bool branch_taken_0x1b03d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B03D4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b03d0) {
            ctx->pc = 0x1B03E0u;
            goto label_1b03e0;
        }
    }
    ctx->pc = 0x1B03D8u;
    // 0x1b03d8: 0x1000000c
    ctx->pc = 0x1B03D8u;
    {
        const bool branch_taken_0x1b03d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B03DCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b03d8) {
            ctx->pc = 0x1B040Cu;
            goto label_1b040c;
        }
    }
    ctx->pc = 0x1B03E0u;
label_1b03e0:
    // 0x1b03e0: 0xc06c0b4
    ctx->pc = 0x1B03E0u;
    SET_GPR_U32(ctx, 31, 0x1B03E8u);
    ctx->pc = 0x1B02D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B02D0_0x1b02d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B03E8u; }
    }
    if (ctx->pc != 0x1B03E8u) { return; }
    ctx->pc = 0x1B03E8u;
    // 0x1b03e8: 0x24030001
    ctx->pc = 0x1b03e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b03ec: 0x14430006
    ctx->pc = 0x1B03ECu;
    {
        const bool branch_taken_0x1b03ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1b03ec) {
            ctx->pc = 0x1B0408u;
            goto label_1b0408;
        }
    }
    ctx->pc = 0x1B03F4u;
    // 0x1b03f4: 0x92020003
    ctx->pc = 0x1b03f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1b03f8: 0x10400004
    ctx->pc = 0x1B03F8u;
    {
        const bool branch_taken_0x1b03f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B03FCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b03f8) {
            ctx->pc = 0x1B040Cu;
            goto label_1b040c;
        }
    }
    ctx->pc = 0x1B0400u;
    // 0x1b0400: 0x10000002
    ctx->pc = 0x1B0400u;
    {
        const bool branch_taken_0x1b0400 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B0404u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b0400) {
            ctx->pc = 0x1B040Cu;
            goto label_1b040c;
        }
    }
    ctx->pc = 0x1B0408u;
label_1b0408:
    // 0x1b0408: 0x102d
    ctx->pc = 0x1b0408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b040c:
    // 0x1b040c: 0xdfbf0010
    ctx->pc = 0x1b040cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0410: 0x7bb00000
    ctx->pc = 0x1b0410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0414: 0x3e00008
    ctx->pc = 0x1B0414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0418u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0334u: goto label_1b0334;
            case 0x1B0360u: goto label_1b0360;
            case 0x1B0388u: goto label_1b0388;
            case 0x1B03A0u: goto label_1b03a0;
            case 0x1B03A4u: goto label_1b03a4;
            case 0x1B03A8u: goto label_1b03a8;
            case 0x1B03E0u: goto label_1b03e0;
            case 0x1B0408u: goto label_1b0408;
            case 0x1B040Cu: goto label_1b040c;
            case 0x1B0448u: goto label_1b0448;
            case 0x1B0484u: goto label_1b0484;
            case 0x1B0488u: goto label_1b0488;
            case 0x1B04A4u: goto label_1b04a4;
            case 0x1B04F8u: goto label_1b04f8;
            case 0x1B04FCu: goto label_1b04fc;
            case 0x1B0540u: goto label_1b0540;
            case 0x1B05A0u: goto label_1b05a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B041Cu;
    // 0x1b041c: 0x0
    ctx->pc = 0x1b041cu;
    // NOP
    // 0x1b0420: 0x27bdffd0
    ctx->pc = 0x1b0420u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b0424: 0xffbf0020
    ctx->pc = 0x1b0424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b0428: 0x7fb10010
    ctx->pc = 0x1b0428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b042c: 0xc06c0b4
    ctx->pc = 0x1B042Cu;
    SET_GPR_U32(ctx, 31, 0x1B0434u);
    ctx->pc = 0x1B0430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1B02D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B02D0_0x1b02d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0434u; }
    }
    if (ctx->pc != 0x1B0434u) { return; }
    ctx->pc = 0x1B0434u;
    // 0x1b0434: 0x24030001
    ctx->pc = 0x1b0434u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0438: 0x1443001a
    ctx->pc = 0x1B0438u;
    {
        const bool branch_taken_0x1b0438 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1B043Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
        if (branch_taken_0x1b0438) {
            ctx->pc = 0x1B04A4u;
            goto label_1b04a4;
        }
    }
    ctx->pc = 0x1B0440u;
    // 0x1b0440: 0x10000011
    ctx->pc = 0x1B0440u;
    {
        const bool branch_taken_0x1b0440 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B0444u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b0440) {
            ctx->pc = 0x1B0488u;
            goto label_1b0488;
        }
    }
    ctx->pc = 0x1B0448u;
label_1b0448:
    // 0x1b0448: 0x2463eef0
    ctx->pc = 0x1b0448u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294962928));
    // 0x1b044c: 0x711821
    ctx->pc = 0x1b044cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1b0450: 0x24706d35
    ctx->pc = 0x1b0450u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 27957));
    // 0x1b0454: 0x90636d35
    ctx->pc = 0x1b0454u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 27957)));
    // 0x1b0458: 0x1060000a
    ctx->pc = 0x1B0458u;
    {
        const bool branch_taken_0x1b0458 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B045Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x1b0458) {
            ctx->pc = 0x1B0484u;
            goto label_1b0484;
        }
    }
    ctx->pc = 0x1B0460u;
    // 0x1b0460: 0x3c02004a
    ctx->pc = 0x1b0460u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
    // 0x1b0464: 0x712023
    ctx->pc = 0x1b0464u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1b0468: 0x24425c30
    ctx->pc = 0x1b0468u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23600));
    // 0x1b046c: 0x418c0
    ctx->pc = 0x1b046cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x1b0470: 0x831821
    ctx->pc = 0x1b0470u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b0474: 0x31940
    ctx->pc = 0x1b0474u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
    // 0x1b0478: 0xc15c1d4
    ctx->pc = 0x1B0478u;
    SET_GPR_U32(ctx, 31, 0x1B0480u);
    ctx->pc = 0x1B047Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x570750u;
    {
        auto targetFn = runtime->lookupFunction(0x570750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0480u; }
        if (ctx->pc != 0x1B0480u) { return; }
    }
    ctx->pc = 0x1B0480u;
    // 0x1b0480: 0xa2000000
    ctx->pc = 0x1b0480u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_1b0484:
    // 0x1b0484: 0x26310001
    ctx->pc = 0x1b0484u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1b0488:
    // 0x1b0488: 0x3c01004c
    ctx->pc = 0x1b0488u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x1b048c: 0x8c23aea0
    ctx->pc = 0x1b048cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294946464)));
    // 0x1b0490: 0x223182b
    ctx->pc = 0x1b0490u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1b0494: 0x1460ffec
    ctx->pc = 0x1B0494u;
    {
        const bool branch_taken_0x1b0494 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B0498u;
        SET_GPR_U32(ctx, 3, ((uint32_t)74 << 16));
        if (branch_taken_0x1b0494) {
            ctx->pc = 0x1B0448u;
            goto label_1b0448;
        }
    }
    ctx->pc = 0x1B049Cu;
    // 0x1b049c: 0x10000017
    ctx->pc = 0x1B049Cu;
    {
        const bool branch_taken_0x1b049c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B04A0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1b049c) {
            ctx->pc = 0x1B04FCu;
            goto label_1b04fc;
        }
    }
    ctx->pc = 0x1B04A4u;
label_1b04a4:
    // 0x1b04a4: 0x3c03004a
    ctx->pc = 0x1b04a4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)74 << 16));
    // 0x1b04a8: 0x9024aded
    ctx->pc = 0x1b04a8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946285)));
    // 0x1b04ac: 0x24635c25
    ctx->pc = 0x1b04acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 23589));
    // 0x1b04b0: 0x641821
    ctx->pc = 0x1b04b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b04b4: 0x90630000
    ctx->pc = 0x1b04b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b04b8: 0x1060000f
    ctx->pc = 0x1B04B8u;
    {
        const bool branch_taken_0x1b04b8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B04BCu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x1b04b8) {
            ctx->pc = 0x1B04F8u;
            goto label_1b04f8;
        }
    }
    ctx->pc = 0x1B04C0u;
    // 0x1b04c0: 0x3c02004a
    ctx->pc = 0x1b04c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
    // 0x1b04c4: 0x642023
    ctx->pc = 0x1b04c4u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b04c8: 0x24425c30
    ctx->pc = 0x1b04c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23600));
    // 0x1b04cc: 0x418c0
    ctx->pc = 0x1b04ccu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x1b04d0: 0x831821
    ctx->pc = 0x1b04d0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b04d4: 0x31940
    ctx->pc = 0x1b04d4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
    // 0x1b04d8: 0xc15c1d4
    ctx->pc = 0x1B04D8u;
    SET_GPR_U32(ctx, 31, 0x1B04E0u);
    ctx->pc = 0x1B04DCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x570750u;
    {
        auto targetFn = runtime->lookupFunction(0x570750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B04E0u; }
        if (ctx->pc != 0x1B04E0u) { return; }
    }
    ctx->pc = 0x1B04E0u;
    // 0x1b04e0: 0x3c01004c
    ctx->pc = 0x1b04e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x1b04e4: 0x3c03004a
    ctx->pc = 0x1b04e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)74 << 16));
    // 0x1b04e8: 0x9024aded
    ctx->pc = 0x1b04e8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946285)));
    // 0x1b04ec: 0x24635c25
    ctx->pc = 0x1b04ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 23589));
    // 0x1b04f0: 0x641821
    ctx->pc = 0x1b04f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b04f4: 0xa0600000
    ctx->pc = 0x1b04f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1b04f8:
    // 0x1b04f8: 0xdfbf0020
    ctx->pc = 0x1b04f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b04fc:
    // 0x1b04fc: 0x7bb10010
    ctx->pc = 0x1b04fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0500: 0x7bb00000
    ctx->pc = 0x1b0500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0504: 0x3e00008
    ctx->pc = 0x1B0504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0508u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0334u: goto label_1b0334;
            case 0x1B0360u: goto label_1b0360;
            case 0x1B0388u: goto label_1b0388;
            case 0x1B03A0u: goto label_1b03a0;
            case 0x1B03A4u: goto label_1b03a4;
            case 0x1B03A8u: goto label_1b03a8;
            case 0x1B03E0u: goto label_1b03e0;
            case 0x1B0408u: goto label_1b0408;
            case 0x1B040Cu: goto label_1b040c;
            case 0x1B0448u: goto label_1b0448;
            case 0x1B0484u: goto label_1b0484;
            case 0x1B0488u: goto label_1b0488;
            case 0x1B04A4u: goto label_1b04a4;
            case 0x1B04F8u: goto label_1b04f8;
            case 0x1B04FCu: goto label_1b04fc;
            case 0x1B0540u: goto label_1b0540;
            case 0x1B05A0u: goto label_1b05a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B050Cu;
    // 0x1b050c: 0x0
    ctx->pc = 0x1b050cu;
    // NOP
    // 0x1b0510: 0x27bdffd0
    ctx->pc = 0x1b0510u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b0514: 0x202d
    ctx->pc = 0x1b0514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0518: 0xffbf0010
    ctx->pc = 0x1b0518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b051c: 0xc073494
    ctx->pc = 0x1B051Cu;
    SET_GPR_U32(ctx, 31, 0x1B0524u);
    ctx->pc = 0x1B0520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1CD250u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD250_0x1cd250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0524u; }
    }
    if (ctx->pc != 0x1B0524u) { return; }
    ctx->pc = 0x1B0524u;
    // 0x1b0524: 0xafa2002c
    ctx->pc = 0x1b0524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x1b0528: 0x8fa3002c
    ctx->pc = 0x1b0528u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b052c: 0x1060001c
    ctx->pc = 0x1B052Cu;
    {
        const bool branch_taken_0x1b052c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b052c) {
            ctx->pc = 0x1B05A0u;
            goto label_1b05a0;
        }
    }
    ctx->pc = 0x1B0534u;
    // 0x1b0534: 0xc063594
    ctx->pc = 0x1B0534u;
    SET_GPR_U32(ctx, 31, 0x1B053Cu);
    ctx->pc = 0x18D650u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018D650_0x18d650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B053Cu; }
    }
    if (ctx->pc != 0x1B053Cu) { return; }
    ctx->pc = 0x1B053Cu;
    // 0x1b053c: 0x802d
    ctx->pc = 0x1b053cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0540:
    // 0x1b0540: 0xc06eabc
    ctx->pc = 0x1B0540u;
    SET_GPR_U32(ctx, 31, 0x1B0548u);
    ctx->pc = 0x1B0544u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1BAAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BAAF0_0x1baaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0548u; }
    }
    if (ctx->pc != 0x1B0548u) { return; }
    ctx->pc = 0x1B0548u;
    // 0x1b0548: 0x24040004
    ctx->pc = 0x1b0548u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b054c: 0xc06bc78
    ctx->pc = 0x1B054Cu;
    SET_GPR_U32(ctx, 31, 0x1B0554u);
    ctx->pc = 0x1B0550u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x1AF1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF1E0_0x1af1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0554u; }
    }
    if (ctx->pc != 0x1B0554u) { return; }
    ctx->pc = 0x1B0554u;
    // 0x1b0554: 0x24040063
    ctx->pc = 0x1b0554u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 99));
    // 0x1b0558: 0xc06bde0
    ctx->pc = 0x1B0558u;
    SET_GPR_U32(ctx, 31, 0x1B0560u);
    ctx->pc = 0x1B055Cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)1 << 16));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0560u; }
    }
    if (ctx->pc != 0x1B0560u) { return; }
    ctx->pc = 0x1B0560u;
    // 0x1b0560: 0x2404006c
    ctx->pc = 0x1b0560u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 108));
    // 0x1b0564: 0xc06bde0
    ctx->pc = 0x1B0564u;
    SET_GPR_U32(ctx, 31, 0x1B056Cu);
    ctx->pc = 0x1B0568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B056Cu; }
    }
    if (ctx->pc != 0x1B056Cu) { return; }
    ctx->pc = 0x1B056Cu;
    // 0x1b056c: 0x24040001
    ctx->pc = 0x1b056cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0570: 0xc0675c8
    ctx->pc = 0x1B0570u;
    SET_GPR_U32(ctx, 31, 0x1B0578u);
    ctx->pc = 0x1B0574u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 44));
    ctx->pc = 0x19D720u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D720_0x19d720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0578u; }
    }
    if (ctx->pc != 0x1B0578u) { return; }
    ctx->pc = 0x1B0578u;
    // 0x1b0578: 0x8fa5002c
    ctx->pc = 0x1b0578u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b057c: 0xc06bde0
    ctx->pc = 0x1B057Cu;
    SET_GPR_U32(ctx, 31, 0x1B0584u);
    ctx->pc = 0x1B0580u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0584u; }
    }
    if (ctx->pc != 0x1B0584u) { return; }
    ctx->pc = 0x1B0584u;
    // 0x1b0584: 0x3c040023
    ctx->pc = 0x1b0584u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x1b0588: 0xc06ae18
    ctx->pc = 0x1B0588u;
    SET_GPR_U32(ctx, 31, 0x1B0590u);
    ctx->pc = 0x1B058Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17280));
    ctx->pc = 0x1AB860u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB860_0x1ab860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0590u; }
    }
    if (ctx->pc != 0x1B0590u) { return; }
    ctx->pc = 0x1B0590u;
    // 0x1b0590: 0x26100001
    ctx->pc = 0x1b0590u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b0594: 0x2a030003
    ctx->pc = 0x1b0594u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 3));
    // 0x1b0598: 0x1460ffe9
    ctx->pc = 0x1B0598u;
    {
        const bool branch_taken_0x1b0598 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b0598) {
            ctx->pc = 0x1B0540u;
            goto label_1b0540;
        }
    }
    ctx->pc = 0x1B05A0u;
label_1b05a0:
    // 0x1b05a0: 0xdfbf0010
    ctx->pc = 0x1b05a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b05a4: 0x7bb00000
    ctx->pc = 0x1b05a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b05a8: 0x3e00008
    ctx->pc = 0x1B05A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B05ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0334u: goto label_1b0334;
            case 0x1B0360u: goto label_1b0360;
            case 0x1B0388u: goto label_1b0388;
            case 0x1B03A0u: goto label_1b03a0;
            case 0x1B03A4u: goto label_1b03a4;
            case 0x1B03A8u: goto label_1b03a8;
            case 0x1B03E0u: goto label_1b03e0;
            case 0x1B0408u: goto label_1b0408;
            case 0x1B040Cu: goto label_1b040c;
            case 0x1B0448u: goto label_1b0448;
            case 0x1B0484u: goto label_1b0484;
            case 0x1B0488u: goto label_1b0488;
            case 0x1B04A4u: goto label_1b04a4;
            case 0x1B04F8u: goto label_1b04f8;
            case 0x1B04FCu: goto label_1b04fc;
            case 0x1B0540u: goto label_1b0540;
            case 0x1B05A0u: goto label_1b05a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B05B0u;
}
