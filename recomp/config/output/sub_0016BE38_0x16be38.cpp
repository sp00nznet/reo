#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016BE38
// Address: 0x16be38 - 0x16bf80
void sub_0016BE38_0x16be38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16be38u;

    // 0x16be38: 0x24a2000f
    ctx->pc = 0x16be38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 15));
    // 0x16be3c: 0x24a5001e
    ctx->pc = 0x16be3cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30));
    // 0x16be40: 0x28430000
    ctx->pc = 0x16be40u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 0));
    // 0x16be44: 0x24ca000f
    ctx->pc = 0x16be44u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 6), 15));
    // 0x16be48: 0xa3100b
    ctx->pc = 0x16be48u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
    // 0x16be4c: 0x294b0000
    ctx->pc = 0x16be4cu;
    SET_GPR_U32(ctx, 11, SLT32(GPR_S32(ctx, 10), 0));
    // 0x16be50: 0x21103
    ctx->pc = 0x16be50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x16be54: 0x24c6001e
    ctx->pc = 0x16be54u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 30));
    // 0x16be58: 0x22900
    ctx->pc = 0x16be58u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 2), 4));
    // 0x16be5c: 0x210c0
    ctx->pc = 0x16be5cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x16be60: 0x24a8003f
    ctx->pc = 0x16be60u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 5), 63));
    // 0x16be64: 0x24a5007e
    ctx->pc = 0x16be64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 126));
    // 0x16be68: 0x2449003f
    ctx->pc = 0x16be68u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 63));
    // 0x16be6c: 0x2442007e
    ctx->pc = 0x16be6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 126));
    // 0x16be70: 0x29030000
    ctx->pc = 0x16be70u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 8), 0));
    // 0x16be74: 0xcb500b
    ctx->pc = 0x16be74u;
    if (GPR_U32(ctx, 11) != 0) SET_GPR_U32(ctx, 10, GPR_U32(ctx, 6));
    // 0x16be78: 0xa3400b
    ctx->pc = 0x16be78u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 8, GPR_U32(ctx, 5));
    // 0x16be7c: 0x29230000
    ctx->pc = 0x16be7cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 9), 0));
    // 0x16be80: 0x43480b
    ctx->pc = 0x16be80u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 9, GPR_U32(ctx, 2));
    // 0x16be84: 0x84183
    ctx->pc = 0x16be84u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 6));
    // 0x16be88: 0xa5103
    ctx->pc = 0x16be88u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 4));
    // 0x16be8c: 0x94983
    ctx->pc = 0x16be8cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 6));
    // 0x16be90: 0x10a1018
    ctx->pc = 0x16be90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x16be94: 0x712a5018
    ctx->pc = 0x16be94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x16be98: 0x84180
    ctx->pc = 0x16be98u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 6));
    // 0x16be9c: 0x94980
    ctx->pc = 0x16be9cu;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 6));
    // 0x16bea0: 0xa4e8000e
    ctx->pc = 0x16bea0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 8));
    // 0x16bea4: 0xa4e9000c
    ctx->pc = 0x16bea4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 9));
    // 0x16bea8: 0x21280
    ctx->pc = 0x16bea8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 10));
    // 0x16beac: 0xa5240
    ctx->pc = 0x16beacu;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 9));
    // 0x16beb0: 0x821021
    ctx->pc = 0x16beb0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16beb4: 0xace40008
    ctx->pc = 0x16beb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x16beb8: 0x4a5021
    ctx->pc = 0x16beb8u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x16bebc: 0xace20000
    ctx->pc = 0x16bebcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x16bec0: 0x3e00008
    ctx->pc = 0x16BEC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BEC4u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 10));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16BF20u: goto label_16bf20;
            case 0x16BF28u: goto label_16bf28;
            case 0x16BF68u: goto label_16bf68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16BEC8u;
    // 0x16bec8: 0x27bdffe0
    ctx->pc = 0x16bec8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16becc: 0x182d
    ctx->pc = 0x16beccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bed0: 0xffb00000
    ctx->pc = 0x16bed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16bed4: 0x80802d
    ctx->pc = 0x16bed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bed8: 0xffb10008
    ctx->pc = 0x16bed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16bedc: 0xa0882d
    ctx->pc = 0x16bedcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bee0: 0xffb20010
    ctx->pc = 0x16bee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16bee4: 0xc0902d
    ctx->pc = 0x16bee4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bee8: 0x1200000f
    ctx->pc = 0x16BEE8u;
    {
        const bool branch_taken_0x16bee8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x16BEECu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        if (branch_taken_0x16bee8) {
            ctx->pc = 0x16BF28u;
            goto label_16bf28;
        }
    }
    ctx->pc = 0x16BEF0u;
    // 0x16bef0: 0xc05a78c
    ctx->pc = 0x16BEF0u;
    SET_GPR_U32(ctx, 31, 0x16BEF8u);
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BEF8u; }
    }
    if (ctx->pc != 0x16BEF8u) { return; }
    ctx->pc = 0x16BEF8u;
    // 0x16bef8: 0x3c05ff00
    ctx->pc = 0x16bef8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x16befc: 0x10400008
    ctx->pc = 0x16BEFCu;
    {
        const bool branch_taken_0x16befc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16BF00u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16befc) {
            ctx->pc = 0x16BF20u;
            goto label_16bf20;
        }
    }
    ctx->pc = 0x16BF04u;
    // 0x16bf04: 0xdfb00000
    ctx->pc = 0x16bf04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bf08: 0x34a50181
    ctx->pc = 0x16bf08u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 385));
    // 0x16bf0c: 0xdfb10008
    ctx->pc = 0x16bf0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16bf10: 0xdfb20010
    ctx->pc = 0x16bf10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bf14: 0xdfbf0018
    ctx->pc = 0x16bf14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16bf18: 0x805a704
    ctx->pc = 0x16BF18u;
    ctx->pc = 0x16BF1Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x16BF20u;
label_16bf20:
    // 0x16bf20: 0x8e021b30
    ctx->pc = 0x16bf20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 6960)));
    // 0x16bf24: 0x8c430000
    ctx->pc = 0x16bf24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16bf28:
    // 0x16bf28: 0x3a220005
    ctx->pc = 0x16bf28u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 17), 5));
    // 0x16bf2c: 0x302d
    ctx->pc = 0x16bf2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bf30: 0x60202d
    ctx->pc = 0x16bf30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bf34: 0x220282d
    ctx->pc = 0x16bf34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bf38: 0xc056daa
    ctx->pc = 0x16BF38u;
    SET_GPR_U32(ctx, 31, 0x16BF40u);
    ctx->pc = 0x16BF3Cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 18));
    ctx->pc = 0x15B6A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B6A8_0x15b6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BF40u; }
    }
    if (ctx->pc != 0x16BF40u) { return; }
    ctx->pc = 0x16BF40u;
    // 0x16bf40: 0x3c05ff00
    ctx->pc = 0x16bf40u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x16bf44: 0x10400008
    ctx->pc = 0x16BF44u;
    {
        const bool branch_taken_0x16bf44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16BF48u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16bf44) {
            ctx->pc = 0x16BF68u;
            goto label_16bf68;
        }
    }
    ctx->pc = 0x16BF4Cu;
    // 0x16bf4c: 0xdfb00000
    ctx->pc = 0x16bf4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bf50: 0x34a50f12
    ctx->pc = 0x16bf50u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3858));
    // 0x16bf54: 0xdfb10008
    ctx->pc = 0x16bf54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16bf58: 0xdfb20010
    ctx->pc = 0x16bf58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bf5c: 0xdfbf0018
    ctx->pc = 0x16bf5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16bf60: 0x805a704
    ctx->pc = 0x16BF60u;
    ctx->pc = 0x16BF64u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x16BF68u;
label_16bf68:
    // 0x16bf68: 0xdfb00000
    ctx->pc = 0x16bf68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bf6c: 0xdfb10008
    ctx->pc = 0x16bf6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16bf70: 0xdfb20010
    ctx->pc = 0x16bf70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bf74: 0xdfbf0018
    ctx->pc = 0x16bf74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16bf78: 0x3e00008
    ctx->pc = 0x16BF78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BF7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16BF20u: goto label_16bf20;
            case 0x16BF28u: goto label_16bf28;
            case 0x16BF68u: goto label_16bf68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16BF80u;
}
