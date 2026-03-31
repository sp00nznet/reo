#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013BCC0
// Address: 0x13bcc0 - 0x13bdb8
void sub_0013BCC0_0x13bcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13bcc0u;

label_13bcc0:
    // 0x13bcc0: 0x27bdfff0
    ctx->pc = 0x13bcc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13bcc4: 0xffbf0000
    ctx->pc = 0x13bcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13bcc8: 0xc04ef0e
    ctx->pc = 0x13BCC8u;
    SET_GPR_U32(ctx, 31, 0x13BCD0u);
    ctx->pc = 0x13BC38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013BC38_0x13bc38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BCD0u; }
    }
    if (ctx->pc != 0x13BCD0u) { return; }
    ctx->pc = 0x13BCD0u;
    // 0x13bcd0: 0x3c03ffff
    ctx->pc = 0x13bcd0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x13bcd4: 0x3183e
    ctx->pc = 0x13bcd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x13bcd8: 0xdfbf0000
    ctx->pc = 0x13bcd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13bcdc: 0x431024
    ctx->pc = 0x13bcdcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13bce0: 0x2103c
    ctx->pc = 0x13bce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13bce4: 0x2103f
    ctx->pc = 0x13bce4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x13bce8: 0x3e00008
    ctx->pc = 0x13BCE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BCECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13BCC0u: goto label_13bcc0;
            case 0x13BD40u: goto label_13bd40;
            case 0x13BD60u: goto label_13bd60;
            case 0x13BD70u: goto label_13bd70;
            case 0x13BD80u: goto label_13bd80;
            case 0x13BD90u: goto label_13bd90;
            case 0x13BD98u: goto label_13bd98;
            case 0x13BDA0u: goto label_13bda0;
            case 0x13BDA4u: goto label_13bda4;
            case 0x13BDA8u: goto label_13bda8;
            case 0x13BDACu: goto label_13bdac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13BCF0u;
    // 0x13bcf0: 0x27bdfff0
    ctx->pc = 0x13bcf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13bcf4: 0x182d
    ctx->pc = 0x13bcf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bcf8: 0xffbf0000
    ctx->pc = 0x13bcf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13bcfc: 0x1080002a
    ctx->pc = 0x13BCFCu;
    {
        const bool branch_taken_0x13bcfc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x13BD00u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13bcfc) {
            ctx->pc = 0x13BDA8u;
            goto label_13bda8;
        }
    }
    ctx->pc = 0x13BD04u;
    // 0x13bd04: 0x240200cb
    ctx->pc = 0x13bd04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 203));
    // 0x13bd08: 0x10a20021
    ctx->pc = 0x13BD08u;
    {
        const bool branch_taken_0x13bd08 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x13BD0Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 204));
        if (branch_taken_0x13bd08) {
            ctx->pc = 0x13BD90u;
            goto label_13bd90;
        }
    }
    ctx->pc = 0x13BD10u;
    // 0x13bd10: 0x1040000b
    ctx->pc = 0x13BD10u;
    {
        const bool branch_taken_0x13bd10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13BD14u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 205));
        if (branch_taken_0x13bd10) {
            ctx->pc = 0x13BD40u;
            goto label_13bd40;
        }
    }
    ctx->pc = 0x13BD18u;
    // 0x13bd18: 0x240200c9
    ctx->pc = 0x13bd18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 201));
    // 0x13bd1c: 0x10a20014
    ctx->pc = 0x13BD1Cu;
    {
        const bool branch_taken_0x13bd1c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x13BD20u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 202));
        if (branch_taken_0x13bd1c) {
            ctx->pc = 0x13BD70u;
            goto label_13bd70;
        }
    }
    ctx->pc = 0x13BD24u;
    // 0x13bd24: 0x10400016
    ctx->pc = 0x13BD24u;
    {
        const bool branch_taken_0x13bd24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13BD28u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 200));
        if (branch_taken_0x13bd24) {
            ctx->pc = 0x13BD80u;
            goto label_13bd80;
        }
    }
    ctx->pc = 0x13BD2Cu;
    // 0x13bd2c: 0x10a2000c
    ctx->pc = 0x13BD2Cu;
    {
        const bool branch_taken_0x13bd2c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x13BD30u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13bd2c) {
            ctx->pc = 0x13BD60u;
            goto label_13bd60;
        }
    }
    ctx->pc = 0x13BD34u;
    // 0x13bd34: 0x1000001d
    ctx->pc = 0x13BD34u;
    {
        const bool branch_taken_0x13bd34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13BD38u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x13bd34) {
            ctx->pc = 0x13BDACu;
            goto label_13bdac;
        }
    }
    ctx->pc = 0x13BD3Cu;
    // 0x13bd3c: 0x0
    ctx->pc = 0x13bd3cu;
    // NOP
label_13bd40:
    // 0x13bd40: 0x10a20013
    ctx->pc = 0x13BD40u;
    {
        const bool branch_taken_0x13bd40 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x13BD44u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 205));
        if (branch_taken_0x13bd40) {
            ctx->pc = 0x13BD90u;
            goto label_13bd90;
        }
    }
    ctx->pc = 0x13BD48u;
    // 0x13bd48: 0x1440000d
    ctx->pc = 0x13BD48u;
    {
        const bool branch_taken_0x13bd48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13BD4Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 299));
        if (branch_taken_0x13bd48) {
            ctx->pc = 0x13BD80u;
            goto label_13bd80;
        }
    }
    ctx->pc = 0x13BD50u;
    // 0x13bd50: 0x10a20013
    ctx->pc = 0x13BD50u;
    {
        const bool branch_taken_0x13bd50 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x13BD54u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13bd50) {
            ctx->pc = 0x13BDA0u;
            goto label_13bda0;
        }
    }
    ctx->pc = 0x13BD58u;
    // 0x13bd58: 0x10000014
    ctx->pc = 0x13BD58u;
    {
        const bool branch_taken_0x13bd58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13BD5Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x13bd58) {
            ctx->pc = 0x13BDACu;
            goto label_13bdac;
        }
    }
    ctx->pc = 0x13BD60u;
label_13bd60:
    // 0x13bd60: 0xc04ef14
    ctx->pc = 0x13BD60u;
    SET_GPR_U32(ctx, 31, 0x13BD68u);
    ctx->pc = 0x13BC50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013BC50_0x13bc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BD68u; }
    }
    if (ctx->pc != 0x13BD68u) { return; }
    ctx->pc = 0x13BD68u;
    // 0x13bd68: 0x1000000e
    ctx->pc = 0x13BD68u;
    {
        const bool branch_taken_0x13bd68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13BD6Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13bd68) {
            ctx->pc = 0x13BDA4u;
            goto label_13bda4;
        }
    }
    ctx->pc = 0x13BD70u;
label_13bd70:
    // 0x13bd70: 0xc04ef1c
    ctx->pc = 0x13BD70u;
    SET_GPR_U32(ctx, 31, 0x13BD78u);
    ctx->pc = 0x13BC70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013BC70_0x13bc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BD78u; }
    }
    if (ctx->pc != 0x13BD78u) { return; }
    ctx->pc = 0x13BD78u;
    // 0x13bd78: 0x1000000a
    ctx->pc = 0x13BD78u;
    {
        const bool branch_taken_0x13bd78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13BD7Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13bd78) {
            ctx->pc = 0x13BDA4u;
            goto label_13bda4;
        }
    }
    ctx->pc = 0x13BD80u;
label_13bd80:
    // 0x13bd80: 0xc04ef28
    ctx->pc = 0x13BD80u;
    SET_GPR_U32(ctx, 31, 0x13BD88u);
    ctx->pc = 0x13BCA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013BCA0_0x13bca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BD88u; }
    }
    if (ctx->pc != 0x13BD88u) { return; }
    ctx->pc = 0x13BD88u;
    // 0x13bd88: 0x10000006
    ctx->pc = 0x13BD88u;
    {
        const bool branch_taken_0x13bd88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13BD8Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13bd88) {
            ctx->pc = 0x13BDA4u;
            goto label_13bda4;
        }
    }
    ctx->pc = 0x13BD90u;
label_13bd90:
    // 0x13bd90: 0xc04ef30
    ctx->pc = 0x13BD90u;
    SET_GPR_U32(ctx, 31, 0x13BD98u);
    ctx->pc = 0x13BCC0u;
    goto label_13bcc0;
    ctx->pc = 0x13BD98u;
label_13bd98:
    // 0x13bd98: 0x10000002
    ctx->pc = 0x13BD98u;
    {
        const bool branch_taken_0x13bd98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13BD9Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13bd98) {
            ctx->pc = 0x13BDA4u;
            goto label_13bda4;
        }
    }
    ctx->pc = 0x13BDA0u;
label_13bda0:
    // 0x13bda0: 0x24030001
    ctx->pc = 0x13bda0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_13bda4:
    // 0x13bda4: 0x60102d
    ctx->pc = 0x13bda4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_13bda8:
    // 0x13bda8: 0xdfbf0000
    ctx->pc = 0x13bda8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13bdac:
    // 0x13bdac: 0x3e00008
    ctx->pc = 0x13BDACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BDB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13BCC0u: goto label_13bcc0;
            case 0x13BD40u: goto label_13bd40;
            case 0x13BD60u: goto label_13bd60;
            case 0x13BD70u: goto label_13bd70;
            case 0x13BD80u: goto label_13bd80;
            case 0x13BD90u: goto label_13bd90;
            case 0x13BD98u: goto label_13bd98;
            case 0x13BDA0u: goto label_13bda0;
            case 0x13BDA4u: goto label_13bda4;
            case 0x13BDA8u: goto label_13bda8;
            case 0x13BDACu: goto label_13bdac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13BDB4u;
    // 0x13bdb4: 0x0
    ctx->pc = 0x13bdb4u;
    // NOP
}
