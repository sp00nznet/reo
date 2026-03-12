#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0037D9F0
// Address: 0x37d9f0 - 0x37e020
void sub_0037D9F0_0x37d9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x37d9f0u;

    // 0x37d9f0: 0x27bdffe0
    ctx->pc = 0x37d9f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37d9f4: 0x282d
    ctx->pc = 0x37d9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d9f8: 0xffbf0010
    ctx->pc = 0x37d9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37d9fc: 0x7fb00000
    ctx->pc = 0x37d9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37da00: 0xc199820
    ctx->pc = 0x37DA00u;
    SET_GPR_U32(ctx, 31, 0x37DA08u);
    ctx->pc = 0x37DA04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x666080u;
    {
        auto targetFn = runtime->lookupFunction(0x666080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37DA08u; }
        if (ctx->pc != 0x37DA08u) { return; }
    }
    ctx->pc = 0x37DA08u;
    // 0x37da08: 0x14400005
    ctx->pc = 0x37DA08u;
    {
        const bool branch_taken_0x37da08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x37da08) {
            ctx->pc = 0x37DA20u;
            goto label_37da20;
        }
    }
    ctx->pc = 0x37DA10u;
    // 0x37da10: 0x8e020ba0
    ctx->pc = 0x37da10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2976)));
    // 0x37da14: 0x30420080
    ctx->pc = 0x37da14u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 128));
    // 0x37da18: 0x10400008
    ctx->pc = 0x37DA18u;
    {
        const bool branch_taken_0x37da18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x37DA1Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x37da18) {
            ctx->pc = 0x37DA3Cu;
            goto label_37da3c;
        }
    }
    ctx->pc = 0x37DA20u;
label_37da20:
    // 0x37da20: 0x8e030ba4
    ctx->pc = 0x37da20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 2980)));
    // 0x37da24: 0x3c022000
    ctx->pc = 0x37da24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
    // 0x37da28: 0x621024
    ctx->pc = 0x37da28u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37da2c: 0x10400003
    ctx->pc = 0x37DA2Cu;
    {
        const bool branch_taken_0x37da2c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x37DA30u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37da2c) {
            ctx->pc = 0x37DA3Cu;
            goto label_37da3c;
        }
    }
    ctx->pc = 0x37DA34u;
    // 0x37da34: 0x10000001
    ctx->pc = 0x37DA34u;
    {
        const bool branch_taken_0x37da34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37DA38u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x37da34) {
            ctx->pc = 0x37DA3Cu;
            goto label_37da3c;
        }
    }
    ctx->pc = 0x37DA3Cu;
label_37da3c:
    // 0x37da3c: 0xdfbf0010
    ctx->pc = 0x37da3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37da40: 0x7bb00000
    ctx->pc = 0x37da40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37da44: 0x3e00008
    ctx->pc = 0x37DA44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37DA48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37DA20u: goto label_37da20;
            case 0x37DA3Cu: goto label_37da3c;
            case 0x37DAA0u: goto label_37daa0;
            case 0x37DAECu: goto label_37daec;
            case 0x37DB24u: goto label_37db24;
            case 0x37DBA0u: goto label_37dba0;
            case 0x37DBB0u: goto label_37dbb0;
            case 0x37DBB8u: goto label_37dbb8;
            case 0x37DBBCu: goto label_37dbbc;
            case 0x37DC18u: goto label_37dc18;
            case 0x37DC5Cu: goto label_37dc5c;
            case 0x37DCA8u: goto label_37dca8;
            case 0x37DCB8u: goto label_37dcb8;
            case 0x37DCCCu: goto label_37dccc;
            case 0x37DD28u: goto label_37dd28;
            case 0x37DD5Cu: goto label_37dd5c;
            case 0x37DDA8u: goto label_37dda8;
            case 0x37DDB8u: goto label_37ddb8;
            case 0x37DDCCu: goto label_37ddcc;
            case 0x37DE10u: goto label_37de10;
            case 0x37DE78u: goto label_37de78;
            case 0x37DE88u: goto label_37de88;
            case 0x37DE8Cu: goto label_37de8c;
            case 0x37DEB8u: goto label_37deb8;
            case 0x37DEDCu: goto label_37dedc;
            case 0x37DF2Cu: goto label_37df2c;
            case 0x37DF30u: goto label_37df30;
            case 0x37DF64u: goto label_37df64;
            case 0x37DF88u: goto label_37df88;
            case 0x37DFACu: goto label_37dfac;
            case 0x37DFB0u: goto label_37dfb0;
            case 0x37DFF8u: goto label_37dff8;
            case 0x37E008u: goto label_37e008;
            case 0x37E00Cu: goto label_37e00c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37DA4Cu;
    // 0x37da4c: 0x0
    ctx->pc = 0x37da4cu;
    // NOP
    // 0x37da50: 0x27bdffc0
    ctx->pc = 0x37da50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37da54: 0x24060008
    ctx->pc = 0x37da54u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    // 0x37da58: 0xffbf0030
    ctx->pc = 0x37da58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x37da5c: 0x7fb20020
    ctx->pc = 0x37da5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37da60: 0x7fb10010
    ctx->pc = 0x37da60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37da64: 0x80902d
    ctx->pc = 0x37da64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37da68: 0xa0882d
    ctx->pc = 0x37da68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37da6c: 0x7fb00000
    ctx->pc = 0x37da6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37da70: 0x3c100032
    ctx->pc = 0x37da70u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x37da74: 0x220202d
    ctx->pc = 0x37da74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37da78: 0x282d
    ctx->pc = 0x37da78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37da7c: 0xc041f1a
    ctx->pc = 0x37DA7Cu;
    SET_GPR_U32(ctx, 31, 0x37DA84u);
    ctx->pc = 0x37DA80u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294966112));
    ctx->pc = 0x107C68u;
    {
        auto targetFn = runtime->lookupFunction(0x107C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37DA84u; }
        if (ctx->pc != 0x37DA84u) { return; }
    }
    ctx->pc = 0x37DA84u;
    // 0x37da84: 0x324400ff
    ctx->pc = 0x37da84u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 18), 255));
    // 0x37da88: 0x24031ce4
    ctx->pc = 0x37da88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7396));
    // 0x37da8c: 0x833018
    ctx->pc = 0x37da8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)(uint32_t)result); }
    // 0x37da90: 0x482d
    ctx->pc = 0x37da90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37da94: 0x402d
    ctx->pc = 0x37da94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37da98: 0x200182d
    ctx->pc = 0x37da98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37da9c: 0x663821
    ctx->pc = 0x37da9cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_37daa0:
    // 0x37daa0: 0x82c3c
    ctx->pc = 0x37daa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) << (32 + 16));
    // 0x37daa4: 0x25030001
    ctx->pc = 0x37daa4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 8), 1));
    // 0x37daa8: 0x3443c
    ctx->pc = 0x37daa8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 16));
    // 0x37daac: 0x52c3f
    ctx->pc = 0x37daacu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x37dab0: 0x518c0
    ctx->pc = 0x37dab0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x37dab4: 0x8443f
    ctx->pc = 0x37dab4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x37dab8: 0x652021
    ctx->pc = 0x37dab8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x37dabc: 0x42040
    ctx->pc = 0x37dabcu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    // 0x37dac0: 0x29030030
    ctx->pc = 0x37dac0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 8), 48));
    // 0x37dac4: 0x852021
    ctx->pc = 0x37dac4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x37dac8: 0x420c0
    ctx->pc = 0x37dac8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 3));
    // 0x37dacc: 0xe42021
    ctx->pc = 0x37daccu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x37dad0: 0x948406d4
    ctx->pc = 0x37dad0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1748)));
    // 0x37dad4: 0x1460fff2
    ctx->pc = 0x37DAD4u;
    {
        const bool branch_taken_0x37dad4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x37DAD8u;
        SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        if (branch_taken_0x37dad4) {
            ctx->pc = 0x37DAA0u;
            goto label_37daa0;
        }
    }
    ctx->pc = 0x37DADCu;
    // 0x37dadc: 0x11200037
    ctx->pc = 0x37DADCu;
    {
        const bool branch_taken_0x37dadc = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        ctx->pc = 0x37DAE0u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        if (branch_taken_0x37dadc) {
            ctx->pc = 0x37DBBCu;
            goto label_37dbbc;
        }
    }
    ctx->pc = 0x37DAE4u;
    // 0x37dae4: 0x202d
    ctx->pc = 0x37dae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37dae8: 0x382d
    ctx->pc = 0x37dae8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37daec:
    // 0x37daec: 0x7343c
    ctx->pc = 0x37daecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 16));
    // 0x37daf0: 0x24e50001
    ctx->pc = 0x37daf0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 7), 1));
    // 0x37daf4: 0x6343f
    ctx->pc = 0x37daf4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x37daf8: 0x53c3c
    ctx->pc = 0x37daf8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 16));
    // 0x37dafc: 0x63080
    ctx->pc = 0x37dafcu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    // 0x37db00: 0x73c3f
    ctx->pc = 0x37db00u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x37db04: 0x663021
    ctx->pc = 0x37db04u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x37db08: 0x28e50008
    ctx->pc = 0x37db08u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 7), 8));
    // 0x37db0c: 0x8cc62354
    ctx->pc = 0x37db0cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 9044)));
    // 0x37db10: 0x14a0fff6
    ctx->pc = 0x37DB10u;
    {
        const bool branch_taken_0x37db10 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x37DB14u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        if (branch_taken_0x37db10) {
            ctx->pc = 0x37DAECu;
            goto label_37daec;
        }
    }
    ctx->pc = 0x37DB18u;
    // 0x37db18: 0x10800027
    ctx->pc = 0x37DB18u;
    {
        const bool branch_taken_0x37db18 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x37DB1Cu;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 100));
        if (branch_taken_0x37db18) {
            ctx->pc = 0x37DBB8u;
            goto label_37dbb8;
        }
    }
    ctx->pc = 0x37DB20u;
    // 0x37db20: 0x24080001
    ctx->pc = 0x37db20u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
label_37db24:
    // 0x37db24: 0x8343c
    ctx->pc = 0x37db24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << (32 + 16));
    // 0x37db28: 0x25050001
    ctx->pc = 0x37db28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 8), 1));
    // 0x37db2c: 0x6343f
    ctx->pc = 0x37db2cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x37db30: 0x5443c
    ctx->pc = 0x37db30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 16));
    // 0x37db34: 0x2264821
    ctx->pc = 0x37db34u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x37db38: 0x8443f
    ctx->pc = 0x37db38u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x37db3c: 0x63080
    ctx->pc = 0x37db3cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    // 0x37db40: 0x29050008
    ctx->pc = 0x37db40u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 8), 8));
    // 0x37db44: 0x663021
    ctx->pc = 0x37db44u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x37db48: 0x8cc72354
    ctx->pc = 0x37db48u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 9044)));
    // 0x37db4c: 0x73080
    ctx->pc = 0x37db4cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 7), 2));
    // 0x37db50: 0xc73821
    ctx->pc = 0x37db50u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x37db54: 0x73080
    ctx->pc = 0x37db54u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 7), 2));
    // 0x37db58: 0xe63021
    ctx->pc = 0x37db58u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x37db5c: 0x63080
    ctx->pc = 0x37db5cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    // 0x37db60: 0xc4001b
    ctx->pc = 0x37db60u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 6) / divisor; ctx->hi = GPR_U32(ctx, 4) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,6); } }
    // 0x37db64: 0x0
    ctx->pc = 0x37db64u;
    // NOP
    // 0x37db68: 0x0
    ctx->pc = 0x37db68u;
    // NOP
    // 0x37db6c: 0x3012
    ctx->pc = 0x37db6cu;
    SET_GPR_U32(ctx, 6, ctx->lo);
    // 0x37db70: 0xa1260000
    ctx->pc = 0x37db70u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x37db74: 0x91260000
    ctx->pc = 0x37db74u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x37db78: 0x1463023
    ctx->pc = 0x37db78u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x37db7c: 0x6543c
    ctx->pc = 0x37db7cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) << (32 + 16));
    // 0x37db80: 0x14a0ffe8
    ctx->pc = 0x37DB80u;
    {
        const bool branch_taken_0x37db80 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x37DB84u;
        SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
        if (branch_taken_0x37db80) {
            ctx->pc = 0x37DB24u;
            goto label_37db24;
        }
    }
    ctx->pc = 0x37DB88u;
    // 0x37db88: 0xa1c3c
    ctx->pc = 0x37db88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 16));
    // 0x37db8c: 0x31c3f
    ctx->pc = 0x37db8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x37db90: 0x4610003
    ctx->pc = 0x37DB90u;
    {
        const bool branch_taken_0x37db90 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x37DB94u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 101));
        if (branch_taken_0x37db90) {
            ctx->pc = 0x37DBA0u;
            goto label_37dba0;
        }
    }
    ctx->pc = 0x37DB98u;
    // 0x37db98: 0x10000005
    ctx->pc = 0x37DB98u;
    {
        const bool branch_taken_0x37db98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37DB9Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37db98) {
            ctx->pc = 0x37DBB0u;
            goto label_37dbb0;
        }
    }
    ctx->pc = 0x37DBA0u;
label_37dba0:
    // 0x37dba0: 0x14200003
    ctx->pc = 0x37DBA0u;
    {
        const bool branch_taken_0x37dba0 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x37dba0) {
            ctx->pc = 0x37DBB0u;
            goto label_37dbb0;
        }
    }
    ctx->pc = 0x37DBA8u;
    // 0x37dba8: 0x10000001
    ctx->pc = 0x37DBA8u;
    {
        const bool branch_taken_0x37dba8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37DBACu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 100));
        if (branch_taken_0x37dba8) {
            ctx->pc = 0x37DBB0u;
            goto label_37dbb0;
        }
    }
    ctx->pc = 0x37DBB0u;
label_37dbb0:
    // 0x37dbb0: 0x3543c
    ctx->pc = 0x37dbb0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << (32 + 16));
    // 0x37dbb4: 0xa543f
    ctx->pc = 0x37dbb4u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
label_37dbb8:
    // 0x37dbb8: 0xa22a0000
    ctx->pc = 0x37dbb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 10));
label_37dbbc:
    // 0x37dbbc: 0xdfbf0030
    ctx->pc = 0x37dbbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37dbc0: 0x7bb20020
    ctx->pc = 0x37dbc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37dbc4: 0x7bb10010
    ctx->pc = 0x37dbc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37dbc8: 0x7bb00000
    ctx->pc = 0x37dbc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37dbcc: 0x3e00008
    ctx->pc = 0x37DBCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37DBD0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37DA20u: goto label_37da20;
            case 0x37DA3Cu: goto label_37da3c;
            case 0x37DAA0u: goto label_37daa0;
            case 0x37DAECu: goto label_37daec;
            case 0x37DB24u: goto label_37db24;
            case 0x37DBA0u: goto label_37dba0;
            case 0x37DBB0u: goto label_37dbb0;
            case 0x37DBB8u: goto label_37dbb8;
            case 0x37DBBCu: goto label_37dbbc;
            case 0x37DC18u: goto label_37dc18;
            case 0x37DC5Cu: goto label_37dc5c;
            case 0x37DCA8u: goto label_37dca8;
            case 0x37DCB8u: goto label_37dcb8;
            case 0x37DCCCu: goto label_37dccc;
            case 0x37DD28u: goto label_37dd28;
            case 0x37DD5Cu: goto label_37dd5c;
            case 0x37DDA8u: goto label_37dda8;
            case 0x37DDB8u: goto label_37ddb8;
            case 0x37DDCCu: goto label_37ddcc;
            case 0x37DE10u: goto label_37de10;
            case 0x37DE78u: goto label_37de78;
            case 0x37DE88u: goto label_37de88;
            case 0x37DE8Cu: goto label_37de8c;
            case 0x37DEB8u: goto label_37deb8;
            case 0x37DEDCu: goto label_37dedc;
            case 0x37DF2Cu: goto label_37df2c;
            case 0x37DF30u: goto label_37df30;
            case 0x37DF64u: goto label_37df64;
            case 0x37DF88u: goto label_37df88;
            case 0x37DFACu: goto label_37dfac;
            case 0x37DFB0u: goto label_37dfb0;
            case 0x37DFF8u: goto label_37dff8;
            case 0x37E008u: goto label_37e008;
            case 0x37E00Cu: goto label_37e00c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37DBD4u;
    // 0x37dbd4: 0x0
    ctx->pc = 0x37dbd4u;
    // NOP
    // 0x37dbd8: 0x0
    ctx->pc = 0x37dbd8u;
    // NOP
    // 0x37dbdc: 0x0
    ctx->pc = 0x37dbdcu;
    // NOP
    // 0x37dbe0: 0x27bdffc0
    ctx->pc = 0x37dbe0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37dbe4: 0x308300ff
    ctx->pc = 0x37dbe4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 255));
    // 0x37dbe8: 0x24021ce4
    ctx->pc = 0x37dbe8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7396));
    // 0x37dbec: 0xffbf0030
    ctx->pc = 0x37dbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x37dbf0: 0x7fb20020
    ctx->pc = 0x37dbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37dbf4: 0x621018
    ctx->pc = 0x37dbf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x37dbf8: 0x7fb10010
    ctx->pc = 0x37dbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37dbfc: 0x3c040032
    ctx->pc = 0x37dbfcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x37dc00: 0xa0902d
    ctx->pc = 0x37dc00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37dc04: 0x7fb00000
    ctx->pc = 0x37dc04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37dc08: 0x2484fb60
    ctx->pc = 0x37dc08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966112));
    // 0x37dc0c: 0x882d
    ctx->pc = 0x37dc0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37dc10: 0x282d
    ctx->pc = 0x37dc10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37dc14: 0x828021
    ctx->pc = 0x37dc14u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_37dc18:
    // 0x37dc18: 0x510c0
    ctx->pc = 0x37dc18u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
    // 0x37dc1c: 0x451021
    ctx->pc = 0x37dc1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x37dc20: 0x21040
    ctx->pc = 0x37dc20u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x37dc24: 0x451021
    ctx->pc = 0x37dc24u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x37dc28: 0x210c0
    ctx->pc = 0x37dc28u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x37dc2c: 0x24a50001
    ctx->pc = 0x37dc2cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x37dc30: 0x2021821
    ctx->pc = 0x37dc30u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x37dc34: 0x946306d4
    ctx->pc = 0x37dc34u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1748)));
    // 0x37dc38: 0x28a20030
    ctx->pc = 0x37dc38u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 48));
    // 0x37dc3c: 0x1440fff6
    ctx->pc = 0x37DC3Cu;
    {
        const bool branch_taken_0x37dc3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37DC40u;
        SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        if (branch_taken_0x37dc3c) {
            ctx->pc = 0x37DC18u;
            goto label_37dc18;
        }
    }
    ctx->pc = 0x37DC44u;
    // 0x37dc44: 0x240202d
    ctx->pc = 0x37dc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37dc48: 0x282d
    ctx->pc = 0x37dc48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37dc4c: 0xc041f1a
    ctx->pc = 0x37DC4Cu;
    SET_GPR_U32(ctx, 31, 0x37DC54u);
    ctx->pc = 0x37DC50u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x107C68u;
    {
        auto targetFn = runtime->lookupFunction(0x107C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37DC54u; }
        if (ctx->pc != 0x37DC54u) { return; }
    }
    ctx->pc = 0x37DC54u;
    // 0x37dc54: 0x1220001d
    ctx->pc = 0x37DC54u;
    {
        const bool branch_taken_0x37dc54 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x37DC58u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37dc54) {
            ctx->pc = 0x37DCCCu;
            goto label_37dccc;
        }
    }
    ctx->pc = 0x37DC5Cu;
label_37dc5c:
    // 0x37dc5c: 0x51840
    ctx->pc = 0x37dc5cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
    // 0x37dc60: 0x2453021
    ctx->pc = 0x37dc60u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x37dc64: 0x2031821
    ctx->pc = 0x37dc64u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x37dc68: 0x9464239c
    ctx->pc = 0x37dc68u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 9116)));
    // 0x37dc6c: 0x41880
    ctx->pc = 0x37dc6cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x37dc70: 0x642021
    ctx->pc = 0x37dc70u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37dc74: 0x41880
    ctx->pc = 0x37dc74u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x37dc78: 0x831821
    ctx->pc = 0x37dc78u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x37dc7c: 0x31880
    ctx->pc = 0x37dc7cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x37dc80: 0x71001a
    ctx->pc = 0x37dc80u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x37dc84: 0x0
    ctx->pc = 0x37dc84u;
    // NOP
    // 0x37dc88: 0x0
    ctx->pc = 0x37dc88u;
    // NOP
    // 0x37dc8c: 0x1812
    ctx->pc = 0x37dc8cu;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x37dc90: 0xa0c30000
    ctx->pc = 0x37dc90u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x37dc94: 0x90c30000
    ctx->pc = 0x37dc94u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x37dc98: 0x4610003
    ctx->pc = 0x37DC98u;
    {
        const bool branch_taken_0x37dc98 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x37DC9Cu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 101));
        if (branch_taken_0x37dc98) {
            ctx->pc = 0x37DCA8u;
            goto label_37dca8;
        }
    }
    ctx->pc = 0x37DCA0u;
    // 0x37dca0: 0x10000005
    ctx->pc = 0x37DCA0u;
    {
        const bool branch_taken_0x37dca0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37DCA4u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37dca0) {
            ctx->pc = 0x37DCB8u;
            goto label_37dcb8;
        }
    }
    ctx->pc = 0x37DCA8u;
label_37dca8:
    // 0x37dca8: 0x14200003
    ctx->pc = 0x37DCA8u;
    {
        const bool branch_taken_0x37dca8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x37dca8) {
            ctx->pc = 0x37DCB8u;
            goto label_37dcb8;
        }
    }
    ctx->pc = 0x37DCB0u;
    // 0x37dcb0: 0x10000001
    ctx->pc = 0x37DCB0u;
    {
        const bool branch_taken_0x37dcb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37DCB4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 100));
        if (branch_taken_0x37dcb0) {
            ctx->pc = 0x37DCB8u;
            goto label_37dcb8;
        }
    }
    ctx->pc = 0x37DCB8u;
label_37dcb8:
    // 0x37dcb8: 0xa0c30000
    ctx->pc = 0x37dcb8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x37dcbc: 0x24a50001
    ctx->pc = 0x37dcbcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x37dcc0: 0x28a30009
    ctx->pc = 0x37dcc0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 9));
    // 0x37dcc4: 0x1460ffe5
    ctx->pc = 0x37DCC4u;
    {
        const bool branch_taken_0x37dcc4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x37dcc4) {
            ctx->pc = 0x37DC5Cu;
            goto label_37dc5c;
        }
    }
    ctx->pc = 0x37DCCCu;
label_37dccc:
    // 0x37dccc: 0xdfbf0030
    ctx->pc = 0x37dcccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37dcd0: 0x7bb20020
    ctx->pc = 0x37dcd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37dcd4: 0x7bb10010
    ctx->pc = 0x37dcd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37dcd8: 0x7bb00000
    ctx->pc = 0x37dcd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37dcdc: 0x3e00008
    ctx->pc = 0x37DCDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37DCE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37DA20u: goto label_37da20;
            case 0x37DA3Cu: goto label_37da3c;
            case 0x37DAA0u: goto label_37daa0;
            case 0x37DAECu: goto label_37daec;
            case 0x37DB24u: goto label_37db24;
            case 0x37DBA0u: goto label_37dba0;
            case 0x37DBB0u: goto label_37dbb0;
            case 0x37DBB8u: goto label_37dbb8;
            case 0x37DBBCu: goto label_37dbbc;
            case 0x37DC18u: goto label_37dc18;
            case 0x37DC5Cu: goto label_37dc5c;
            case 0x37DCA8u: goto label_37dca8;
            case 0x37DCB8u: goto label_37dcb8;
            case 0x37DCCCu: goto label_37dccc;
            case 0x37DD28u: goto label_37dd28;
            case 0x37DD5Cu: goto label_37dd5c;
            case 0x37DDA8u: goto label_37dda8;
            case 0x37DDB8u: goto label_37ddb8;
            case 0x37DDCCu: goto label_37ddcc;
            case 0x37DE10u: goto label_37de10;
            case 0x37DE78u: goto label_37de78;
            case 0x37DE88u: goto label_37de88;
            case 0x37DE8Cu: goto label_37de8c;
            case 0x37DEB8u: goto label_37deb8;
            case 0x37DEDCu: goto label_37dedc;
            case 0x37DF2Cu: goto label_37df2c;
            case 0x37DF30u: goto label_37df30;
            case 0x37DF64u: goto label_37df64;
            case 0x37DF88u: goto label_37df88;
            case 0x37DFACu: goto label_37dfac;
            case 0x37DFB0u: goto label_37dfb0;
            case 0x37DFF8u: goto label_37dff8;
            case 0x37E008u: goto label_37e008;
            case 0x37E00Cu: goto label_37e00c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37DCE4u;
    // 0x37dce4: 0x0
    ctx->pc = 0x37dce4u;
    // NOP
    // 0x37dce8: 0x0
    ctx->pc = 0x37dce8u;
    // NOP
    // 0x37dcec: 0x0
    ctx->pc = 0x37dcecu;
    // NOP
    // 0x37dcf0: 0x27bdffc0
    ctx->pc = 0x37dcf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37dcf4: 0x308300ff
    ctx->pc = 0x37dcf4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 255));
    // 0x37dcf8: 0x24021ce4
    ctx->pc = 0x37dcf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7396));
    // 0x37dcfc: 0xffbf0030
    ctx->pc = 0x37dcfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x37dd00: 0x7fb20020
    ctx->pc = 0x37dd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37dd04: 0x621018
    ctx->pc = 0x37dd04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x37dd08: 0x7fb10010
    ctx->pc = 0x37dd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37dd0c: 0x3c040032
    ctx->pc = 0x37dd0cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x37dd10: 0xa0902d
    ctx->pc = 0x37dd10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37dd14: 0x7fb00000
    ctx->pc = 0x37dd14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37dd18: 0x2484fb60
    ctx->pc = 0x37dd18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966112));
    // 0x37dd1c: 0x882d
    ctx->pc = 0x37dd1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37dd20: 0x282d
    ctx->pc = 0x37dd20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37dd24: 0x828021
    ctx->pc = 0x37dd24u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_37dd28:
    // 0x37dd28: 0x51080
    ctx->pc = 0x37dd28u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x37dd2c: 0x2021021
    ctx->pc = 0x37dd2cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x37dd30: 0x24a50001
    ctx->pc = 0x37dd30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x37dd34: 0x8c432378
    ctx->pc = 0x37dd34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 9080)));
    // 0x37dd38: 0x28a20004
    ctx->pc = 0x37dd38u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
    // 0x37dd3c: 0x1440fffa
    ctx->pc = 0x37DD3Cu;
    {
        const bool branch_taken_0x37dd3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37DD40u;
        SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        if (branch_taken_0x37dd3c) {
            ctx->pc = 0x37DD28u;
            goto label_37dd28;
        }
    }
    ctx->pc = 0x37DD44u;
    // 0x37dd44: 0x240202d
    ctx->pc = 0x37dd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37dd48: 0x282d
    ctx->pc = 0x37dd48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37dd4c: 0xc041f1a
    ctx->pc = 0x37DD4Cu;
    SET_GPR_U32(ctx, 31, 0x37DD54u);
    ctx->pc = 0x37DD50u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x107C68u;
    {
        auto targetFn = runtime->lookupFunction(0x107C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37DD54u; }
        if (ctx->pc != 0x37DD54u) { return; }
    }
    ctx->pc = 0x37DD54u;
    // 0x37dd54: 0x1220001d
    ctx->pc = 0x37DD54u;
    {
        const bool branch_taken_0x37dd54 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x37DD58u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37dd54) {
            ctx->pc = 0x37DDCCu;
            goto label_37ddcc;
        }
    }
    ctx->pc = 0x37DD5Cu;
label_37dd5c:
    // 0x37dd5c: 0x51880
    ctx->pc = 0x37dd5cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x37dd60: 0x2453021
    ctx->pc = 0x37dd60u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x37dd64: 0x2031821
    ctx->pc = 0x37dd64u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x37dd68: 0x8c642378
    ctx->pc = 0x37dd68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 9080)));
    // 0x37dd6c: 0x41880
    ctx->pc = 0x37dd6cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x37dd70: 0x642021
    ctx->pc = 0x37dd70u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37dd74: 0x41880
    ctx->pc = 0x37dd74u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x37dd78: 0x831821
    ctx->pc = 0x37dd78u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x37dd7c: 0x31880
    ctx->pc = 0x37dd7cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x37dd80: 0x71001b
    ctx->pc = 0x37dd80u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 3) / divisor; ctx->hi = GPR_U32(ctx, 17) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,3); } }
    // 0x37dd84: 0x0
    ctx->pc = 0x37dd84u;
    // NOP
    // 0x37dd88: 0x0
    ctx->pc = 0x37dd88u;
    // NOP
    // 0x37dd8c: 0x1812
    ctx->pc = 0x37dd8cu;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x37dd90: 0xa0c30000
    ctx->pc = 0x37dd90u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x37dd94: 0x90c30000
    ctx->pc = 0x37dd94u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x37dd98: 0x4610003
    ctx->pc = 0x37DD98u;
    {
        const bool branch_taken_0x37dd98 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x37DD9Cu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 101));
        if (branch_taken_0x37dd98) {
            ctx->pc = 0x37DDA8u;
            goto label_37dda8;
        }
    }
    ctx->pc = 0x37DDA0u;
    // 0x37dda0: 0x10000005
    ctx->pc = 0x37DDA0u;
    {
        const bool branch_taken_0x37dda0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37DDA4u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37dda0) {
            ctx->pc = 0x37DDB8u;
            goto label_37ddb8;
        }
    }
    ctx->pc = 0x37DDA8u;
label_37dda8:
    // 0x37dda8: 0x14200003
    ctx->pc = 0x37DDA8u;
    {
        const bool branch_taken_0x37dda8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x37dda8) {
            ctx->pc = 0x37DDB8u;
            goto label_37ddb8;
        }
    }
    ctx->pc = 0x37DDB0u;
    // 0x37ddb0: 0x10000001
    ctx->pc = 0x37DDB0u;
    {
        const bool branch_taken_0x37ddb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37DDB4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 100));
        if (branch_taken_0x37ddb0) {
            ctx->pc = 0x37DDB8u;
            goto label_37ddb8;
        }
    }
    ctx->pc = 0x37DDB8u;
label_37ddb8:
    // 0x37ddb8: 0xa0c30000
    ctx->pc = 0x37ddb8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x37ddbc: 0x24a50001
    ctx->pc = 0x37ddbcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x37ddc0: 0x28a30004
    ctx->pc = 0x37ddc0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 4));
    // 0x37ddc4: 0x1460ffe5
    ctx->pc = 0x37DDC4u;
    {
        const bool branch_taken_0x37ddc4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x37ddc4) {
            ctx->pc = 0x37DD5Cu;
            goto label_37dd5c;
        }
    }
    ctx->pc = 0x37DDCCu;
label_37ddcc:
    // 0x37ddcc: 0xdfbf0030
    ctx->pc = 0x37ddccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37ddd0: 0x7bb20020
    ctx->pc = 0x37ddd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37ddd4: 0x7bb10010
    ctx->pc = 0x37ddd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37ddd8: 0x7bb00000
    ctx->pc = 0x37ddd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37dddc: 0x3e00008
    ctx->pc = 0x37DDDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37DDE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37DA20u: goto label_37da20;
            case 0x37DA3Cu: goto label_37da3c;
            case 0x37DAA0u: goto label_37daa0;
            case 0x37DAECu: goto label_37daec;
            case 0x37DB24u: goto label_37db24;
            case 0x37DBA0u: goto label_37dba0;
            case 0x37DBB0u: goto label_37dbb0;
            case 0x37DBB8u: goto label_37dbb8;
            case 0x37DBBCu: goto label_37dbbc;
            case 0x37DC18u: goto label_37dc18;
            case 0x37DC5Cu: goto label_37dc5c;
            case 0x37DCA8u: goto label_37dca8;
            case 0x37DCB8u: goto label_37dcb8;
            case 0x37DCCCu: goto label_37dccc;
            case 0x37DD28u: goto label_37dd28;
            case 0x37DD5Cu: goto label_37dd5c;
            case 0x37DDA8u: goto label_37dda8;
            case 0x37DDB8u: goto label_37ddb8;
            case 0x37DDCCu: goto label_37ddcc;
            case 0x37DE10u: goto label_37de10;
            case 0x37DE78u: goto label_37de78;
            case 0x37DE88u: goto label_37de88;
            case 0x37DE8Cu: goto label_37de8c;
            case 0x37DEB8u: goto label_37deb8;
            case 0x37DEDCu: goto label_37dedc;
            case 0x37DF2Cu: goto label_37df2c;
            case 0x37DF30u: goto label_37df30;
            case 0x37DF64u: goto label_37df64;
            case 0x37DF88u: goto label_37df88;
            case 0x37DFACu: goto label_37dfac;
            case 0x37DFB0u: goto label_37dfb0;
            case 0x37DFF8u: goto label_37dff8;
            case 0x37E008u: goto label_37e008;
            case 0x37E00Cu: goto label_37e00c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37DDE4u;
    // 0x37dde4: 0x0
    ctx->pc = 0x37dde4u;
    // NOP
    // 0x37dde8: 0x0
    ctx->pc = 0x37dde8u;
    // NOP
    // 0x37ddec: 0x0
    ctx->pc = 0x37ddecu;
    // NOP
    // 0x37ddf0: 0x308300ff
    ctx->pc = 0x37ddf0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 255));
    // 0x37ddf4: 0x24021ce4
    ctx->pc = 0x37ddf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7396));
    // 0x37ddf8: 0x622018
    ctx->pc = 0x37ddf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x37ddfc: 0x3c050032
    ctx->pc = 0x37ddfcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x37de00: 0x24a5fb60
    ctx->pc = 0x37de00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294966112));
    // 0x37de04: 0x382d
    ctx->pc = 0x37de04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37de08: 0x302d
    ctx->pc = 0x37de08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37de0c: 0xa42821
    ctx->pc = 0x37de0cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_37de10:
    // 0x37de10: 0x610c0
    ctx->pc = 0x37de10u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 3));
    // 0x37de14: 0x461021
    ctx->pc = 0x37de14u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x37de18: 0x21040
    ctx->pc = 0x37de18u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x37de1c: 0x461021
    ctx->pc = 0x37de1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x37de20: 0x210c0
    ctx->pc = 0x37de20u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x37de24: 0x24c60001
    ctx->pc = 0x37de24u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x37de28: 0xa21821
    ctx->pc = 0x37de28u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x37de2c: 0x946306d4
    ctx->pc = 0x37de2cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1748)));
    // 0x37de30: 0x28c20030
    ctx->pc = 0x37de30u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 48));
    // 0x37de34: 0x1440fff6
    ctx->pc = 0x37DE34u;
    {
        const bool branch_taken_0x37de34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37DE38u;
        SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        if (branch_taken_0x37de34) {
            ctx->pc = 0x37DE10u;
            goto label_37de10;
        }
    }
    ctx->pc = 0x37DE3Cu;
    // 0x37de3c: 0x10e00013
    ctx->pc = 0x37DE3Cu;
    {
        const bool branch_taken_0x37de3c = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x37DE40u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37de3c) {
            ctx->pc = 0x37DE8Cu;
            goto label_37de8c;
        }
    }
    ctx->pc = 0x37DE44u;
    // 0x37de44: 0x3c020032
    ctx->pc = 0x37de44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x37de48: 0x24421ed4
    ctx->pc = 0x37de48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7892));
    // 0x37de4c: 0x441021
    ctx->pc = 0x37de4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37de50: 0x8c420000
    ctx->pc = 0x37de50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37de54: 0x47001b
    ctx->pc = 0x37de54u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 2) / divisor; ctx->hi = GPR_U32(ctx, 7) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,2); } }
    // 0x37de58: 0x0
    ctx->pc = 0x37de58u;
    // NOP
    // 0x37de5c: 0x0
    ctx->pc = 0x37de5cu;
    // NOP
    // 0x37de60: 0x1012
    ctx->pc = 0x37de60u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x37de64: 0x304200ff
    ctx->pc = 0x37de64u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x37de68: 0x4410003
    ctx->pc = 0x37DE68u;
    {
        const bool branch_taken_0x37de68 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x37DE6Cu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 101));
        if (branch_taken_0x37de68) {
            ctx->pc = 0x37DE78u;
            goto label_37de78;
        }
    }
    ctx->pc = 0x37DE70u;
    // 0x37de70: 0x10000005
    ctx->pc = 0x37DE70u;
    {
        const bool branch_taken_0x37de70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37DE74u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37de70) {
            ctx->pc = 0x37DE88u;
            goto label_37de88;
        }
    }
    ctx->pc = 0x37DE78u;
label_37de78:
    // 0x37de78: 0x14200003
    ctx->pc = 0x37DE78u;
    {
        const bool branch_taken_0x37de78 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x37de78) {
            ctx->pc = 0x37DE88u;
            goto label_37de88;
        }
    }
    ctx->pc = 0x37DE80u;
    // 0x37de80: 0x10000001
    ctx->pc = 0x37DE80u;
    {
        const bool branch_taken_0x37de80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37DE84u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 100));
        if (branch_taken_0x37de80) {
            ctx->pc = 0x37DE88u;
            goto label_37de88;
        }
    }
    ctx->pc = 0x37DE88u;
label_37de88:
    // 0x37de88: 0x304200ff
    ctx->pc = 0x37de88u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_37de8c:
    // 0x37de8c: 0x3e00008
    ctx->pc = 0x37DE8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37DA20u: goto label_37da20;
            case 0x37DA3Cu: goto label_37da3c;
            case 0x37DAA0u: goto label_37daa0;
            case 0x37DAECu: goto label_37daec;
            case 0x37DB24u: goto label_37db24;
            case 0x37DBA0u: goto label_37dba0;
            case 0x37DBB0u: goto label_37dbb0;
            case 0x37DBB8u: goto label_37dbb8;
            case 0x37DBBCu: goto label_37dbbc;
            case 0x37DC18u: goto label_37dc18;
            case 0x37DC5Cu: goto label_37dc5c;
            case 0x37DCA8u: goto label_37dca8;
            case 0x37DCB8u: goto label_37dcb8;
            case 0x37DCCCu: goto label_37dccc;
            case 0x37DD28u: goto label_37dd28;
            case 0x37DD5Cu: goto label_37dd5c;
            case 0x37DDA8u: goto label_37dda8;
            case 0x37DDB8u: goto label_37ddb8;
            case 0x37DDCCu: goto label_37ddcc;
            case 0x37DE10u: goto label_37de10;
            case 0x37DE78u: goto label_37de78;
            case 0x37DE88u: goto label_37de88;
            case 0x37DE8Cu: goto label_37de8c;
            case 0x37DEB8u: goto label_37deb8;
            case 0x37DEDCu: goto label_37dedc;
            case 0x37DF2Cu: goto label_37df2c;
            case 0x37DF30u: goto label_37df30;
            case 0x37DF64u: goto label_37df64;
            case 0x37DF88u: goto label_37df88;
            case 0x37DFACu: goto label_37dfac;
            case 0x37DFB0u: goto label_37dfb0;
            case 0x37DFF8u: goto label_37dff8;
            case 0x37E008u: goto label_37e008;
            case 0x37E00Cu: goto label_37e00c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37DE94u;
    // 0x37de94: 0x0
    ctx->pc = 0x37de94u;
    // NOP
    // 0x37de98: 0x0
    ctx->pc = 0x37de98u;
    // NOP
    // 0x37de9c: 0x0
    ctx->pc = 0x37de9cu;
    // NOP
    // 0x37dea0: 0x382d
    ctx->pc = 0x37dea0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37dea4: 0x402d
    ctx->pc = 0x37dea4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37dea8: 0x3c05003c
    ctx->pc = 0x37dea8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x37deac: 0x24040001
    ctx->pc = 0x37deacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37deb0: 0x24a584b0
    ctx->pc = 0x37deb0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294935728));
    // 0x37deb4: 0x81943
    ctx->pc = 0x37deb4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 8), 5));
label_37deb8:
    // 0x37deb8: 0x3102001f
    ctx->pc = 0x37deb8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 8), 31));
    // 0x37debc: 0x33080
    ctx->pc = 0x37debcu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 2));
    // 0x37dec0: 0x441804
    ctx->pc = 0x37dec0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x37dec4: 0xa61021
    ctx->pc = 0x37dec4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x37dec8: 0x8c420048
    ctx->pc = 0x37dec8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x37decc: 0x431024
    ctx->pc = 0x37deccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37ded0: 0x10400002
    ctx->pc = 0x37DED0u;
    {
        const bool branch_taken_0x37ded0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x37DED4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 1));
        if (branch_taken_0x37ded0) {
            ctx->pc = 0x37DEDCu;
            goto label_37dedc;
        }
    }
    ctx->pc = 0x37DED8u;
    // 0x37ded8: 0x304700ff
    ctx->pc = 0x37ded8u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 2), 255));
label_37dedc:
    // 0x37dedc: 0x25080001
    ctx->pc = 0x37dedcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x37dee0: 0x29020040
    ctx->pc = 0x37dee0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), 64));
    // 0x37dee4: 0x1440fff4
    ctx->pc = 0x37DEE4u;
    {
        const bool branch_taken_0x37dee4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37DEE8u;
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 8), 5));
        if (branch_taken_0x37dee4) {
            ctx->pc = 0x37DEB8u;
            goto label_37deb8;
        }
    }
    ctx->pc = 0x37DEECu;
    // 0x37deec: 0x3c01003c
    ctx->pc = 0x37deecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x37def0: 0x90228504
    ctx->pc = 0x37def0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294935812)));
    // 0x37def4: 0x1040000d
    ctx->pc = 0x37DEF4u;
    {
        const bool branch_taken_0x37def4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x37DEF8u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 7), 255));
        if (branch_taken_0x37def4) {
            ctx->pc = 0x37DF2Cu;
            goto label_37df2c;
        }
    }
    ctx->pc = 0x37DEFCu;
    // 0x37defc: 0x304200ff
    ctx->pc = 0x37defcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x37df00: 0x41880
    ctx->pc = 0x37df00u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x37df04: 0x642021
    ctx->pc = 0x37df04u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37df08: 0x41880
    ctx->pc = 0x37df08u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x37df0c: 0x831821
    ctx->pc = 0x37df0cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x37df10: 0x31880
    ctx->pc = 0x37df10u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x37df14: 0x62001a
    ctx->pc = 0x37df14u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x37df18: 0x0
    ctx->pc = 0x37df18u;
    // NOP
    // 0x37df1c: 0x0
    ctx->pc = 0x37df1cu;
    // NOP
    // 0x37df20: 0x1012
    ctx->pc = 0x37df20u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x37df24: 0x10000002
    ctx->pc = 0x37DF24u;
    {
        const bool branch_taken_0x37df24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37DF28u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
        if (branch_taken_0x37df24) {
            ctx->pc = 0x37DF30u;
            goto label_37df30;
        }
    }
    ctx->pc = 0x37DF2Cu;
label_37df2c:
    // 0x37df2c: 0x24020064
    ctx->pc = 0x37df2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 100));
label_37df30:
    // 0x37df30: 0x3e00008
    ctx->pc = 0x37DF30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37DA20u: goto label_37da20;
            case 0x37DA3Cu: goto label_37da3c;
            case 0x37DAA0u: goto label_37daa0;
            case 0x37DAECu: goto label_37daec;
            case 0x37DB24u: goto label_37db24;
            case 0x37DBA0u: goto label_37dba0;
            case 0x37DBB0u: goto label_37dbb0;
            case 0x37DBB8u: goto label_37dbb8;
            case 0x37DBBCu: goto label_37dbbc;
            case 0x37DC18u: goto label_37dc18;
            case 0x37DC5Cu: goto label_37dc5c;
            case 0x37DCA8u: goto label_37dca8;
            case 0x37DCB8u: goto label_37dcb8;
            case 0x37DCCCu: goto label_37dccc;
            case 0x37DD28u: goto label_37dd28;
            case 0x37DD5Cu: goto label_37dd5c;
            case 0x37DDA8u: goto label_37dda8;
            case 0x37DDB8u: goto label_37ddb8;
            case 0x37DDCCu: goto label_37ddcc;
            case 0x37DE10u: goto label_37de10;
            case 0x37DE78u: goto label_37de78;
            case 0x37DE88u: goto label_37de88;
            case 0x37DE8Cu: goto label_37de8c;
            case 0x37DEB8u: goto label_37deb8;
            case 0x37DEDCu: goto label_37dedc;
            case 0x37DF2Cu: goto label_37df2c;
            case 0x37DF30u: goto label_37df30;
            case 0x37DF64u: goto label_37df64;
            case 0x37DF88u: goto label_37df88;
            case 0x37DFACu: goto label_37dfac;
            case 0x37DFB0u: goto label_37dfb0;
            case 0x37DFF8u: goto label_37dff8;
            case 0x37E008u: goto label_37e008;
            case 0x37E00Cu: goto label_37e00c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37DF38u;
    // 0x37df38: 0x0
    ctx->pc = 0x37df38u;
    // NOP
    // 0x37df3c: 0x0
    ctx->pc = 0x37df3cu;
    // NOP
    // 0x37df40: 0x3c020032
    ctx->pc = 0x37df40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x37df44: 0x308400ff
    ctx->pc = 0x37df44u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 255));
    // 0x37df48: 0x244201fc
    ctx->pc = 0x37df48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 508));
    // 0x37df4c: 0x441021
    ctx->pc = 0x37df4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37df50: 0x90460000
    ctx->pc = 0x37df50u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37df54: 0x14c00003
    ctx->pc = 0x37DF54u;
    {
        const bool branch_taken_0x37df54 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x37DF58u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x37df54) {
            ctx->pc = 0x37DF64u;
            goto label_37df64;
        }
    }
    ctx->pc = 0x37DF5Cu;
    // 0x37df5c: 0x1000002b
    ctx->pc = 0x37DF5Cu;
    {
        const bool branch_taken_0x37df5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37DF60u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37df5c) {
            ctx->pc = 0x37E00Cu;
            goto label_37e00c;
        }
    }
    ctx->pc = 0x37DF64u;
label_37df64:
    // 0x37df64: 0x418c0
    ctx->pc = 0x37df64u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x37df68: 0x2442fb60
    ctx->pc = 0x37df68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966112));
    // 0x37df6c: 0x482d
    ctx->pc = 0x37df6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37df70: 0x434021
    ctx->pc = 0x37df70u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37df74: 0x502d
    ctx->pc = 0x37df74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37df78: 0x441021
    ctx->pc = 0x37df78u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37df7c: 0x9047069c
    ctx->pc = 0x37df7cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1692)));
    // 0x37df80: 0x1000000b
    ctx->pc = 0x37DF80u;
    {
        const bool branch_taken_0x37df80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37DF84u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x37df80) {
            ctx->pc = 0x37DFB0u;
            goto label_37dfb0;
        }
    }
    ctx->pc = 0x37DF88u;
label_37df88:
    // 0x37df88: 0x3142001f
    ctx->pc = 0x37df88u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 10), 31));
    // 0x37df8c: 0x32880
    ctx->pc = 0x37df8cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 2));
    // 0x37df90: 0x441804
    ctx->pc = 0x37df90u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x37df94: 0x1051021
    ctx->pc = 0x37df94u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x37df98: 0x8c42051c
    ctx->pc = 0x37df98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1308)));
    // 0x37df9c: 0x431024
    ctx->pc = 0x37df9cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37dfa0: 0x10400002
    ctx->pc = 0x37DFA0u;
    {
        const bool branch_taken_0x37dfa0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x37DFA4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 9), 1));
        if (branch_taken_0x37dfa0) {
            ctx->pc = 0x37DFACu;
            goto label_37dfac;
        }
    }
    ctx->pc = 0x37DFA8u;
    // 0x37dfa8: 0x304900ff
    ctx->pc = 0x37dfa8u;
    SET_GPR_U32(ctx, 9, AND32(GPR_U32(ctx, 2), 255));
label_37dfac:
    // 0x37dfac: 0x254a0001
    ctx->pc = 0x37dfacu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
label_37dfb0:
    // 0x37dfb0: 0x147102a
    ctx->pc = 0x37dfb0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), GPR_S32(ctx, 7)));
    // 0x37dfb4: 0x1440fff4
    ctx->pc = 0x37DFB4u;
    {
        const bool branch_taken_0x37dfb4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37DFB8u;
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 10), 5));
        if (branch_taken_0x37dfb4) {
            ctx->pc = 0x37DF88u;
            goto label_37df88;
        }
    }
    ctx->pc = 0x37DFBCu;
    // 0x37dfbc: 0x312300ff
    ctx->pc = 0x37dfbcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 9), 255));
    // 0x37dfc0: 0x31080
    ctx->pc = 0x37dfc0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x37dfc4: 0x431821
    ctx->pc = 0x37dfc4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37dfc8: 0x31080
    ctx->pc = 0x37dfc8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x37dfcc: 0x621021
    ctx->pc = 0x37dfccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37dfd0: 0x21080
    ctx->pc = 0x37dfd0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x37dfd4: 0x46001a
    ctx->pc = 0x37dfd4u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x37dfd8: 0x0
    ctx->pc = 0x37dfd8u;
    // NOP
    // 0x37dfdc: 0x0
    ctx->pc = 0x37dfdcu;
    // NOP
    // 0x37dfe0: 0x1012
    ctx->pc = 0x37dfe0u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x37dfe4: 0x304200ff
    ctx->pc = 0x37dfe4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x37dfe8: 0x4410003
    ctx->pc = 0x37DFE8u;
    {
        const bool branch_taken_0x37dfe8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x37DFECu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 101));
        if (branch_taken_0x37dfe8) {
            ctx->pc = 0x37DFF8u;
            goto label_37dff8;
        }
    }
    ctx->pc = 0x37DFF0u;
    // 0x37dff0: 0x10000005
    ctx->pc = 0x37DFF0u;
    {
        const bool branch_taken_0x37dff0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37DFF4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37dff0) {
            ctx->pc = 0x37E008u;
            goto label_37e008;
        }
    }
    ctx->pc = 0x37DFF8u;
label_37dff8:
    // 0x37dff8: 0x14200003
    ctx->pc = 0x37DFF8u;
    {
        const bool branch_taken_0x37dff8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x37dff8) {
            ctx->pc = 0x37E008u;
            goto label_37e008;
        }
    }
    ctx->pc = 0x37E000u;
    // 0x37e000: 0x10000001
    ctx->pc = 0x37E000u;
    {
        const bool branch_taken_0x37e000 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37E004u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 100));
        if (branch_taken_0x37e000) {
            ctx->pc = 0x37E008u;
            goto label_37e008;
        }
    }
    ctx->pc = 0x37E008u;
label_37e008:
    // 0x37e008: 0x304200ff
    ctx->pc = 0x37e008u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_37e00c:
    // 0x37e00c: 0x3e00008
    ctx->pc = 0x37E00Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37DA20u: goto label_37da20;
            case 0x37DA3Cu: goto label_37da3c;
            case 0x37DAA0u: goto label_37daa0;
            case 0x37DAECu: goto label_37daec;
            case 0x37DB24u: goto label_37db24;
            case 0x37DBA0u: goto label_37dba0;
            case 0x37DBB0u: goto label_37dbb0;
            case 0x37DBB8u: goto label_37dbb8;
            case 0x37DBBCu: goto label_37dbbc;
            case 0x37DC18u: goto label_37dc18;
            case 0x37DC5Cu: goto label_37dc5c;
            case 0x37DCA8u: goto label_37dca8;
            case 0x37DCB8u: goto label_37dcb8;
            case 0x37DCCCu: goto label_37dccc;
            case 0x37DD28u: goto label_37dd28;
            case 0x37DD5Cu: goto label_37dd5c;
            case 0x37DDA8u: goto label_37dda8;
            case 0x37DDB8u: goto label_37ddb8;
            case 0x37DDCCu: goto label_37ddcc;
            case 0x37DE10u: goto label_37de10;
            case 0x37DE78u: goto label_37de78;
            case 0x37DE88u: goto label_37de88;
            case 0x37DE8Cu: goto label_37de8c;
            case 0x37DEB8u: goto label_37deb8;
            case 0x37DEDCu: goto label_37dedc;
            case 0x37DF2Cu: goto label_37df2c;
            case 0x37DF30u: goto label_37df30;
            case 0x37DF64u: goto label_37df64;
            case 0x37DF88u: goto label_37df88;
            case 0x37DFACu: goto label_37dfac;
            case 0x37DFB0u: goto label_37dfb0;
            case 0x37DFF8u: goto label_37dff8;
            case 0x37E008u: goto label_37e008;
            case 0x37E00Cu: goto label_37e00c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37E014u;
    // 0x37e014: 0x0
    ctx->pc = 0x37e014u;
    // NOP
    // 0x37e018: 0x0
    ctx->pc = 0x37e018u;
    // NOP
    // 0x37e01c: 0x0
    ctx->pc = 0x37e01cu;
    // NOP
}
