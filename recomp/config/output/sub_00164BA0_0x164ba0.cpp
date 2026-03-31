#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00164BA0
// Address: 0x164ba0 - 0x164f40
void sub_00164BA0_0x164ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x164ba0u;

label_164ba0:
    // 0x164ba0: 0x27bdffd0
    ctx->pc = 0x164ba0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_164ba4:
    // 0x164ba4: 0xffb00010
    ctx->pc = 0x164ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_164ba8:
    // 0x164ba8: 0x80802d
    ctx->pc = 0x164ba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_164bac:
    // 0x164bac: 0xffb10018
    ctx->pc = 0x164bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_164bb0:
    // 0x164bb0: 0xc0882d
    ctx->pc = 0x164bb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_164bb4:
    // 0x164bb4: 0x14a00008
label_164bb8:
    if (ctx->pc == 0x164BB8u) {
        ctx->pc = 0x164BB8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->pc = 0x164BBCu;
        goto label_164bbc;
    }
    ctx->pc = 0x164BB4u;
    {
        const bool branch_taken_0x164bb4 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x164BB8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        if (branch_taken_0x164bb4) {
            ctx->pc = 0x164BD8u;
            goto label_164bd8;
        }
    }
    ctx->pc = 0x164BBCu;
label_164bbc:
    // 0x164bbc: 0x8e020000
    ctx->pc = 0x164bbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_164bc0:
    // 0x164bc0: 0x8c43001c
    ctx->pc = 0x164bc0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_164bc4:
    // 0x164bc4: 0x60f809
label_164bc8:
    if (ctx->pc == 0x164BC8u) {
        ctx->pc = 0x164BCCu;
        goto label_164bcc;
    }
    ctx->pc = 0x164BC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x164BCCu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x164BA0u: goto label_164ba0;
            case 0x164BA4u: goto label_164ba4;
            case 0x164BA8u: goto label_164ba8;
            case 0x164BACu: goto label_164bac;
            case 0x164BB0u: goto label_164bb0;
            case 0x164BB4u: goto label_164bb4;
            case 0x164BB8u: goto label_164bb8;
            case 0x164BBCu: goto label_164bbc;
            case 0x164BC0u: goto label_164bc0;
            case 0x164BC4u: goto label_164bc4;
            case 0x164BC8u: goto label_164bc8;
            case 0x164BCCu: goto label_164bcc;
            case 0x164BD0u: goto label_164bd0;
            case 0x164BD4u: goto label_164bd4;
            case 0x164BD8u: goto label_164bd8;
            case 0x164BDCu: goto label_164bdc;
            case 0x164BE0u: goto label_164be0;
            case 0x164BE4u: goto label_164be4;
            case 0x164BE8u: goto label_164be8;
            case 0x164BECu: goto label_164bec;
            case 0x164BF0u: goto label_164bf0;
            case 0x164BF4u: goto label_164bf4;
            case 0x164BF8u: goto label_164bf8;
            case 0x164BFCu: goto label_164bfc;
            case 0x164C00u: goto label_164c00;
            case 0x164C04u: goto label_164c04;
            case 0x164C08u: goto label_164c08;
            case 0x164C0Cu: goto label_164c0c;
            case 0x164C10u: goto label_164c10;
            case 0x164C14u: goto label_164c14;
            case 0x164C18u: goto label_164c18;
            case 0x164C1Cu: goto label_164c1c;
            case 0x164C20u: goto label_164c20;
            case 0x164C24u: goto label_164c24;
            case 0x164C28u: goto label_164c28;
            case 0x164C2Cu: goto label_164c2c;
            case 0x164C30u: goto label_164c30;
            case 0x164C34u: goto label_164c34;
            case 0x164C38u: goto label_164c38;
            case 0x164C3Cu: goto label_164c3c;
            case 0x164C40u: goto label_164c40;
            case 0x164C44u: goto label_164c44;
            case 0x164C48u: goto label_164c48;
            case 0x164C4Cu: goto label_164c4c;
            case 0x164C50u: goto label_164c50;
            case 0x164C54u: goto label_164c54;
            case 0x164C58u: goto label_164c58;
            case 0x164C5Cu: goto label_164c5c;
            case 0x164C60u: goto label_164c60;
            case 0x164C64u: goto label_164c64;
            case 0x164C68u: goto label_164c68;
            case 0x164C6Cu: goto label_164c6c;
            case 0x164C70u: goto label_164c70;
            case 0x164C74u: goto label_164c74;
            case 0x164C78u: goto label_164c78;
            case 0x164C7Cu: goto label_164c7c;
            case 0x164C80u: goto label_164c80;
            case 0x164C84u: goto label_164c84;
            case 0x164C88u: goto label_164c88;
            case 0x164C8Cu: goto label_164c8c;
            case 0x164C90u: goto label_164c90;
            case 0x164C94u: goto label_164c94;
            case 0x164C98u: goto label_164c98;
            case 0x164C9Cu: goto label_164c9c;
            case 0x164CA0u: goto label_164ca0;
            case 0x164CA4u: goto label_164ca4;
            case 0x164CA8u: goto label_164ca8;
            case 0x164CACu: goto label_164cac;
            case 0x164CB0u: goto label_164cb0;
            case 0x164CB4u: goto label_164cb4;
            case 0x164CB8u: goto label_164cb8;
            case 0x164CBCu: goto label_164cbc;
            case 0x164CC0u: goto label_164cc0;
            case 0x164CC4u: goto label_164cc4;
            case 0x164CC8u: goto label_164cc8;
            case 0x164CCCu: goto label_164ccc;
            case 0x164CD0u: goto label_164cd0;
            case 0x164CD4u: goto label_164cd4;
            case 0x164CD8u: goto label_164cd8;
            case 0x164CDCu: goto label_164cdc;
            case 0x164CE0u: goto label_164ce0;
            case 0x164CE4u: goto label_164ce4;
            case 0x164CE8u: goto label_164ce8;
            case 0x164CECu: goto label_164cec;
            case 0x164CF0u: goto label_164cf0;
            case 0x164CF4u: goto label_164cf4;
            case 0x164CF8u: goto label_164cf8;
            case 0x164CFCu: goto label_164cfc;
            case 0x164D00u: goto label_164d00;
            case 0x164D04u: goto label_164d04;
            case 0x164D08u: goto label_164d08;
            case 0x164D0Cu: goto label_164d0c;
            case 0x164D10u: goto label_164d10;
            case 0x164D14u: goto label_164d14;
            case 0x164D18u: goto label_164d18;
            case 0x164D1Cu: goto label_164d1c;
            case 0x164D20u: goto label_164d20;
            case 0x164D24u: goto label_164d24;
            case 0x164D28u: goto label_164d28;
            case 0x164D2Cu: goto label_164d2c;
            case 0x164D30u: goto label_164d30;
            case 0x164D34u: goto label_164d34;
            case 0x164D38u: goto label_164d38;
            case 0x164D3Cu: goto label_164d3c;
            case 0x164D40u: goto label_164d40;
            case 0x164D44u: goto label_164d44;
            case 0x164D48u: goto label_164d48;
            case 0x164D4Cu: goto label_164d4c;
            case 0x164D50u: goto label_164d50;
            case 0x164D54u: goto label_164d54;
            case 0x164D58u: goto label_164d58;
            case 0x164D5Cu: goto label_164d5c;
            case 0x164D60u: goto label_164d60;
            case 0x164D64u: goto label_164d64;
            case 0x164D68u: goto label_164d68;
            case 0x164D6Cu: goto label_164d6c;
            case 0x164D70u: goto label_164d70;
            case 0x164D74u: goto label_164d74;
            case 0x164D78u: goto label_164d78;
            case 0x164D7Cu: goto label_164d7c;
            case 0x164D80u: goto label_164d80;
            case 0x164D84u: goto label_164d84;
            case 0x164D88u: goto label_164d88;
            case 0x164D8Cu: goto label_164d8c;
            case 0x164D90u: goto label_164d90;
            case 0x164D94u: goto label_164d94;
            case 0x164D98u: goto label_164d98;
            case 0x164D9Cu: goto label_164d9c;
            case 0x164DA0u: goto label_164da0;
            case 0x164DA4u: goto label_164da4;
            case 0x164DA8u: goto label_164da8;
            case 0x164DACu: goto label_164dac;
            case 0x164DB0u: goto label_164db0;
            case 0x164DB4u: goto label_164db4;
            case 0x164DB8u: goto label_164db8;
            case 0x164DBCu: goto label_164dbc;
            case 0x164DC0u: goto label_164dc0;
            case 0x164DC4u: goto label_164dc4;
            case 0x164DC8u: goto label_164dc8;
            case 0x164DCCu: goto label_164dcc;
            case 0x164DD0u: goto label_164dd0;
            case 0x164DD4u: goto label_164dd4;
            case 0x164DD8u: goto label_164dd8;
            case 0x164DDCu: goto label_164ddc;
            case 0x164DE0u: goto label_164de0;
            case 0x164DE4u: goto label_164de4;
            case 0x164DE8u: goto label_164de8;
            case 0x164DECu: goto label_164dec;
            case 0x164DF0u: goto label_164df0;
            case 0x164DF4u: goto label_164df4;
            case 0x164DF8u: goto label_164df8;
            case 0x164DFCu: goto label_164dfc;
            case 0x164E00u: goto label_164e00;
            case 0x164E04u: goto label_164e04;
            case 0x164E08u: goto label_164e08;
            case 0x164E0Cu: goto label_164e0c;
            case 0x164E10u: goto label_164e10;
            case 0x164E14u: goto label_164e14;
            case 0x164E18u: goto label_164e18;
            case 0x164E1Cu: goto label_164e1c;
            case 0x164E20u: goto label_164e20;
            case 0x164E24u: goto label_164e24;
            case 0x164E28u: goto label_164e28;
            case 0x164E2Cu: goto label_164e2c;
            case 0x164E30u: goto label_164e30;
            case 0x164E34u: goto label_164e34;
            case 0x164E38u: goto label_164e38;
            case 0x164E3Cu: goto label_164e3c;
            case 0x164E40u: goto label_164e40;
            case 0x164E44u: goto label_164e44;
            case 0x164E48u: goto label_164e48;
            case 0x164E4Cu: goto label_164e4c;
            case 0x164E50u: goto label_164e50;
            case 0x164E54u: goto label_164e54;
            case 0x164E58u: goto label_164e58;
            case 0x164E5Cu: goto label_164e5c;
            case 0x164E60u: goto label_164e60;
            case 0x164E64u: goto label_164e64;
            case 0x164E68u: goto label_164e68;
            case 0x164E6Cu: goto label_164e6c;
            case 0x164E70u: goto label_164e70;
            case 0x164E74u: goto label_164e74;
            case 0x164E78u: goto label_164e78;
            case 0x164E7Cu: goto label_164e7c;
            case 0x164E80u: goto label_164e80;
            case 0x164E84u: goto label_164e84;
            case 0x164E88u: goto label_164e88;
            case 0x164E8Cu: goto label_164e8c;
            case 0x164E90u: goto label_164e90;
            case 0x164E94u: goto label_164e94;
            case 0x164E98u: goto label_164e98;
            case 0x164E9Cu: goto label_164e9c;
            case 0x164EA0u: goto label_164ea0;
            case 0x164EA4u: goto label_164ea4;
            case 0x164EA8u: goto label_164ea8;
            case 0x164EACu: goto label_164eac;
            case 0x164EB0u: goto label_164eb0;
            case 0x164EB4u: goto label_164eb4;
            case 0x164EB8u: goto label_164eb8;
            case 0x164EBCu: goto label_164ebc;
            case 0x164EC0u: goto label_164ec0;
            case 0x164EC4u: goto label_164ec4;
            case 0x164EC8u: goto label_164ec8;
            case 0x164ECCu: goto label_164ecc;
            case 0x164ED0u: goto label_164ed0;
            case 0x164ED4u: goto label_164ed4;
            case 0x164ED8u: goto label_164ed8;
            case 0x164EDCu: goto label_164edc;
            case 0x164EE0u: goto label_164ee0;
            case 0x164EE4u: goto label_164ee4;
            case 0x164EE8u: goto label_164ee8;
            case 0x164EECu: goto label_164eec;
            case 0x164EF0u: goto label_164ef0;
            case 0x164EF4u: goto label_164ef4;
            case 0x164EF8u: goto label_164ef8;
            case 0x164EFCu: goto label_164efc;
            case 0x164F00u: goto label_164f00;
            case 0x164F04u: goto label_164f04;
            case 0x164F08u: goto label_164f08;
            case 0x164F0Cu: goto label_164f0c;
            case 0x164F10u: goto label_164f10;
            case 0x164F14u: goto label_164f14;
            case 0x164F18u: goto label_164f18;
            case 0x164F1Cu: goto label_164f1c;
            case 0x164F20u: goto label_164f20;
            case 0x164F24u: goto label_164f24;
            case 0x164F28u: goto label_164f28;
            case 0x164F2Cu: goto label_164f2c;
            case 0x164F30u: goto label_164f30;
            case 0x164F34u: goto label_164f34;
            case 0x164F38u: goto label_164f38;
            case 0x164F3Cu: goto label_164f3c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x164BCCu; }
            if (ctx->pc != 0x164BCCu) { return; }
        }
    }
    ctx->pc = 0x164BCCu;
label_164bcc:
    // 0x164bcc: 0x10000012
label_164bd0:
    if (ctx->pc == 0x164BD0u) {
        ctx->pc = 0x164BD0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x164BD4u;
        goto label_164bd4;
    }
    ctx->pc = 0x164BCCu;
    {
        const bool branch_taken_0x164bcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x164BD0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x164bcc) {
            ctx->pc = 0x164C18u;
            goto label_164c18;
        }
    }
    ctx->pc = 0x164BD4u;
label_164bd4:
    // 0x164bd4: 0x0
    ctx->pc = 0x164bd4u;
    // NOP
label_164bd8:
    // 0x164bd8: 0x220202d
    ctx->pc = 0x164bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_164bdc:
    // 0x164bdc: 0xc0501f8
label_164be0:
    if (ctx->pc == 0x164BE0u) {
        ctx->pc = 0x164BE0u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x164BE4u;
        goto label_164be4;
    }
    ctx->pc = 0x164BDCu;
    SET_GPR_U32(ctx, 31, 0x164BE4u);
    ctx->pc = 0x164BE0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1407E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001407E0_0x1407e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164BE4u; }
    }
    if (ctx->pc != 0x164BE4u) { return; }
    ctx->pc = 0x164BE4u;
label_164be4:
    // 0x164be4: 0x8e030000
    ctx->pc = 0x164be4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_164be8:
    // 0x164be8: 0x220302d
    ctx->pc = 0x164be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_164bec:
    // 0x164bec: 0x200202d
    ctx->pc = 0x164becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_164bf0:
    // 0x164bf0: 0x8c620020
    ctx->pc = 0x164bf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_164bf4:
    // 0x164bf4: 0x40f809
label_164bf8:
    if (ctx->pc == 0x164BF8u) {
        ctx->pc = 0x164BF8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x164BFCu;
        goto label_164bfc;
    }
    ctx->pc = 0x164BF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164BFCu);
        ctx->pc = 0x164BF8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x164BA0u: goto label_164ba0;
            case 0x164BA4u: goto label_164ba4;
            case 0x164BA8u: goto label_164ba8;
            case 0x164BACu: goto label_164bac;
            case 0x164BB0u: goto label_164bb0;
            case 0x164BB4u: goto label_164bb4;
            case 0x164BB8u: goto label_164bb8;
            case 0x164BBCu: goto label_164bbc;
            case 0x164BC0u: goto label_164bc0;
            case 0x164BC4u: goto label_164bc4;
            case 0x164BC8u: goto label_164bc8;
            case 0x164BCCu: goto label_164bcc;
            case 0x164BD0u: goto label_164bd0;
            case 0x164BD4u: goto label_164bd4;
            case 0x164BD8u: goto label_164bd8;
            case 0x164BDCu: goto label_164bdc;
            case 0x164BE0u: goto label_164be0;
            case 0x164BE4u: goto label_164be4;
            case 0x164BE8u: goto label_164be8;
            case 0x164BECu: goto label_164bec;
            case 0x164BF0u: goto label_164bf0;
            case 0x164BF4u: goto label_164bf4;
            case 0x164BF8u: goto label_164bf8;
            case 0x164BFCu: goto label_164bfc;
            case 0x164C00u: goto label_164c00;
            case 0x164C04u: goto label_164c04;
            case 0x164C08u: goto label_164c08;
            case 0x164C0Cu: goto label_164c0c;
            case 0x164C10u: goto label_164c10;
            case 0x164C14u: goto label_164c14;
            case 0x164C18u: goto label_164c18;
            case 0x164C1Cu: goto label_164c1c;
            case 0x164C20u: goto label_164c20;
            case 0x164C24u: goto label_164c24;
            case 0x164C28u: goto label_164c28;
            case 0x164C2Cu: goto label_164c2c;
            case 0x164C30u: goto label_164c30;
            case 0x164C34u: goto label_164c34;
            case 0x164C38u: goto label_164c38;
            case 0x164C3Cu: goto label_164c3c;
            case 0x164C40u: goto label_164c40;
            case 0x164C44u: goto label_164c44;
            case 0x164C48u: goto label_164c48;
            case 0x164C4Cu: goto label_164c4c;
            case 0x164C50u: goto label_164c50;
            case 0x164C54u: goto label_164c54;
            case 0x164C58u: goto label_164c58;
            case 0x164C5Cu: goto label_164c5c;
            case 0x164C60u: goto label_164c60;
            case 0x164C64u: goto label_164c64;
            case 0x164C68u: goto label_164c68;
            case 0x164C6Cu: goto label_164c6c;
            case 0x164C70u: goto label_164c70;
            case 0x164C74u: goto label_164c74;
            case 0x164C78u: goto label_164c78;
            case 0x164C7Cu: goto label_164c7c;
            case 0x164C80u: goto label_164c80;
            case 0x164C84u: goto label_164c84;
            case 0x164C88u: goto label_164c88;
            case 0x164C8Cu: goto label_164c8c;
            case 0x164C90u: goto label_164c90;
            case 0x164C94u: goto label_164c94;
            case 0x164C98u: goto label_164c98;
            case 0x164C9Cu: goto label_164c9c;
            case 0x164CA0u: goto label_164ca0;
            case 0x164CA4u: goto label_164ca4;
            case 0x164CA8u: goto label_164ca8;
            case 0x164CACu: goto label_164cac;
            case 0x164CB0u: goto label_164cb0;
            case 0x164CB4u: goto label_164cb4;
            case 0x164CB8u: goto label_164cb8;
            case 0x164CBCu: goto label_164cbc;
            case 0x164CC0u: goto label_164cc0;
            case 0x164CC4u: goto label_164cc4;
            case 0x164CC8u: goto label_164cc8;
            case 0x164CCCu: goto label_164ccc;
            case 0x164CD0u: goto label_164cd0;
            case 0x164CD4u: goto label_164cd4;
            case 0x164CD8u: goto label_164cd8;
            case 0x164CDCu: goto label_164cdc;
            case 0x164CE0u: goto label_164ce0;
            case 0x164CE4u: goto label_164ce4;
            case 0x164CE8u: goto label_164ce8;
            case 0x164CECu: goto label_164cec;
            case 0x164CF0u: goto label_164cf0;
            case 0x164CF4u: goto label_164cf4;
            case 0x164CF8u: goto label_164cf8;
            case 0x164CFCu: goto label_164cfc;
            case 0x164D00u: goto label_164d00;
            case 0x164D04u: goto label_164d04;
            case 0x164D08u: goto label_164d08;
            case 0x164D0Cu: goto label_164d0c;
            case 0x164D10u: goto label_164d10;
            case 0x164D14u: goto label_164d14;
            case 0x164D18u: goto label_164d18;
            case 0x164D1Cu: goto label_164d1c;
            case 0x164D20u: goto label_164d20;
            case 0x164D24u: goto label_164d24;
            case 0x164D28u: goto label_164d28;
            case 0x164D2Cu: goto label_164d2c;
            case 0x164D30u: goto label_164d30;
            case 0x164D34u: goto label_164d34;
            case 0x164D38u: goto label_164d38;
            case 0x164D3Cu: goto label_164d3c;
            case 0x164D40u: goto label_164d40;
            case 0x164D44u: goto label_164d44;
            case 0x164D48u: goto label_164d48;
            case 0x164D4Cu: goto label_164d4c;
            case 0x164D50u: goto label_164d50;
            case 0x164D54u: goto label_164d54;
            case 0x164D58u: goto label_164d58;
            case 0x164D5Cu: goto label_164d5c;
            case 0x164D60u: goto label_164d60;
            case 0x164D64u: goto label_164d64;
            case 0x164D68u: goto label_164d68;
            case 0x164D6Cu: goto label_164d6c;
            case 0x164D70u: goto label_164d70;
            case 0x164D74u: goto label_164d74;
            case 0x164D78u: goto label_164d78;
            case 0x164D7Cu: goto label_164d7c;
            case 0x164D80u: goto label_164d80;
            case 0x164D84u: goto label_164d84;
            case 0x164D88u: goto label_164d88;
            case 0x164D8Cu: goto label_164d8c;
            case 0x164D90u: goto label_164d90;
            case 0x164D94u: goto label_164d94;
            case 0x164D98u: goto label_164d98;
            case 0x164D9Cu: goto label_164d9c;
            case 0x164DA0u: goto label_164da0;
            case 0x164DA4u: goto label_164da4;
            case 0x164DA8u: goto label_164da8;
            case 0x164DACu: goto label_164dac;
            case 0x164DB0u: goto label_164db0;
            case 0x164DB4u: goto label_164db4;
            case 0x164DB8u: goto label_164db8;
            case 0x164DBCu: goto label_164dbc;
            case 0x164DC0u: goto label_164dc0;
            case 0x164DC4u: goto label_164dc4;
            case 0x164DC8u: goto label_164dc8;
            case 0x164DCCu: goto label_164dcc;
            case 0x164DD0u: goto label_164dd0;
            case 0x164DD4u: goto label_164dd4;
            case 0x164DD8u: goto label_164dd8;
            case 0x164DDCu: goto label_164ddc;
            case 0x164DE0u: goto label_164de0;
            case 0x164DE4u: goto label_164de4;
            case 0x164DE8u: goto label_164de8;
            case 0x164DECu: goto label_164dec;
            case 0x164DF0u: goto label_164df0;
            case 0x164DF4u: goto label_164df4;
            case 0x164DF8u: goto label_164df8;
            case 0x164DFCu: goto label_164dfc;
            case 0x164E00u: goto label_164e00;
            case 0x164E04u: goto label_164e04;
            case 0x164E08u: goto label_164e08;
            case 0x164E0Cu: goto label_164e0c;
            case 0x164E10u: goto label_164e10;
            case 0x164E14u: goto label_164e14;
            case 0x164E18u: goto label_164e18;
            case 0x164E1Cu: goto label_164e1c;
            case 0x164E20u: goto label_164e20;
            case 0x164E24u: goto label_164e24;
            case 0x164E28u: goto label_164e28;
            case 0x164E2Cu: goto label_164e2c;
            case 0x164E30u: goto label_164e30;
            case 0x164E34u: goto label_164e34;
            case 0x164E38u: goto label_164e38;
            case 0x164E3Cu: goto label_164e3c;
            case 0x164E40u: goto label_164e40;
            case 0x164E44u: goto label_164e44;
            case 0x164E48u: goto label_164e48;
            case 0x164E4Cu: goto label_164e4c;
            case 0x164E50u: goto label_164e50;
            case 0x164E54u: goto label_164e54;
            case 0x164E58u: goto label_164e58;
            case 0x164E5Cu: goto label_164e5c;
            case 0x164E60u: goto label_164e60;
            case 0x164E64u: goto label_164e64;
            case 0x164E68u: goto label_164e68;
            case 0x164E6Cu: goto label_164e6c;
            case 0x164E70u: goto label_164e70;
            case 0x164E74u: goto label_164e74;
            case 0x164E78u: goto label_164e78;
            case 0x164E7Cu: goto label_164e7c;
            case 0x164E80u: goto label_164e80;
            case 0x164E84u: goto label_164e84;
            case 0x164E88u: goto label_164e88;
            case 0x164E8Cu: goto label_164e8c;
            case 0x164E90u: goto label_164e90;
            case 0x164E94u: goto label_164e94;
            case 0x164E98u: goto label_164e98;
            case 0x164E9Cu: goto label_164e9c;
            case 0x164EA0u: goto label_164ea0;
            case 0x164EA4u: goto label_164ea4;
            case 0x164EA8u: goto label_164ea8;
            case 0x164EACu: goto label_164eac;
            case 0x164EB0u: goto label_164eb0;
            case 0x164EB4u: goto label_164eb4;
            case 0x164EB8u: goto label_164eb8;
            case 0x164EBCu: goto label_164ebc;
            case 0x164EC0u: goto label_164ec0;
            case 0x164EC4u: goto label_164ec4;
            case 0x164EC8u: goto label_164ec8;
            case 0x164ECCu: goto label_164ecc;
            case 0x164ED0u: goto label_164ed0;
            case 0x164ED4u: goto label_164ed4;
            case 0x164ED8u: goto label_164ed8;
            case 0x164EDCu: goto label_164edc;
            case 0x164EE0u: goto label_164ee0;
            case 0x164EE4u: goto label_164ee4;
            case 0x164EE8u: goto label_164ee8;
            case 0x164EECu: goto label_164eec;
            case 0x164EF0u: goto label_164ef0;
            case 0x164EF4u: goto label_164ef4;
            case 0x164EF8u: goto label_164ef8;
            case 0x164EFCu: goto label_164efc;
            case 0x164F00u: goto label_164f00;
            case 0x164F04u: goto label_164f04;
            case 0x164F08u: goto label_164f08;
            case 0x164F0Cu: goto label_164f0c;
            case 0x164F10u: goto label_164f10;
            case 0x164F14u: goto label_164f14;
            case 0x164F18u: goto label_164f18;
            case 0x164F1Cu: goto label_164f1c;
            case 0x164F20u: goto label_164f20;
            case 0x164F24u: goto label_164f24;
            case 0x164F28u: goto label_164f28;
            case 0x164F2Cu: goto label_164f2c;
            case 0x164F30u: goto label_164f30;
            case 0x164F34u: goto label_164f34;
            case 0x164F38u: goto label_164f38;
            case 0x164F3Cu: goto label_164f3c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x164BFCu; }
            if (ctx->pc != 0x164BFCu) { return; }
        }
    }
    ctx->pc = 0x164BFCu;
label_164bfc:
    // 0x164bfc: 0x8e030000
    ctx->pc = 0x164bfcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_164c00:
    // 0x164c00: 0x200202d
    ctx->pc = 0x164c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_164c04:
    // 0x164c04: 0x282d
    ctx->pc = 0x164c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164c08:
    // 0x164c08: 0x8c62001c
    ctx->pc = 0x164c08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_164c0c:
    // 0x164c0c: 0x40f809
label_164c10:
    if (ctx->pc == 0x164C10u) {
        ctx->pc = 0x164C10u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x164C14u;
        goto label_164c14;
    }
    ctx->pc = 0x164C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164C14u);
        ctx->pc = 0x164C10u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x164BA0u: goto label_164ba0;
            case 0x164BA4u: goto label_164ba4;
            case 0x164BA8u: goto label_164ba8;
            case 0x164BACu: goto label_164bac;
            case 0x164BB0u: goto label_164bb0;
            case 0x164BB4u: goto label_164bb4;
            case 0x164BB8u: goto label_164bb8;
            case 0x164BBCu: goto label_164bbc;
            case 0x164BC0u: goto label_164bc0;
            case 0x164BC4u: goto label_164bc4;
            case 0x164BC8u: goto label_164bc8;
            case 0x164BCCu: goto label_164bcc;
            case 0x164BD0u: goto label_164bd0;
            case 0x164BD4u: goto label_164bd4;
            case 0x164BD8u: goto label_164bd8;
            case 0x164BDCu: goto label_164bdc;
            case 0x164BE0u: goto label_164be0;
            case 0x164BE4u: goto label_164be4;
            case 0x164BE8u: goto label_164be8;
            case 0x164BECu: goto label_164bec;
            case 0x164BF0u: goto label_164bf0;
            case 0x164BF4u: goto label_164bf4;
            case 0x164BF8u: goto label_164bf8;
            case 0x164BFCu: goto label_164bfc;
            case 0x164C00u: goto label_164c00;
            case 0x164C04u: goto label_164c04;
            case 0x164C08u: goto label_164c08;
            case 0x164C0Cu: goto label_164c0c;
            case 0x164C10u: goto label_164c10;
            case 0x164C14u: goto label_164c14;
            case 0x164C18u: goto label_164c18;
            case 0x164C1Cu: goto label_164c1c;
            case 0x164C20u: goto label_164c20;
            case 0x164C24u: goto label_164c24;
            case 0x164C28u: goto label_164c28;
            case 0x164C2Cu: goto label_164c2c;
            case 0x164C30u: goto label_164c30;
            case 0x164C34u: goto label_164c34;
            case 0x164C38u: goto label_164c38;
            case 0x164C3Cu: goto label_164c3c;
            case 0x164C40u: goto label_164c40;
            case 0x164C44u: goto label_164c44;
            case 0x164C48u: goto label_164c48;
            case 0x164C4Cu: goto label_164c4c;
            case 0x164C50u: goto label_164c50;
            case 0x164C54u: goto label_164c54;
            case 0x164C58u: goto label_164c58;
            case 0x164C5Cu: goto label_164c5c;
            case 0x164C60u: goto label_164c60;
            case 0x164C64u: goto label_164c64;
            case 0x164C68u: goto label_164c68;
            case 0x164C6Cu: goto label_164c6c;
            case 0x164C70u: goto label_164c70;
            case 0x164C74u: goto label_164c74;
            case 0x164C78u: goto label_164c78;
            case 0x164C7Cu: goto label_164c7c;
            case 0x164C80u: goto label_164c80;
            case 0x164C84u: goto label_164c84;
            case 0x164C88u: goto label_164c88;
            case 0x164C8Cu: goto label_164c8c;
            case 0x164C90u: goto label_164c90;
            case 0x164C94u: goto label_164c94;
            case 0x164C98u: goto label_164c98;
            case 0x164C9Cu: goto label_164c9c;
            case 0x164CA0u: goto label_164ca0;
            case 0x164CA4u: goto label_164ca4;
            case 0x164CA8u: goto label_164ca8;
            case 0x164CACu: goto label_164cac;
            case 0x164CB0u: goto label_164cb0;
            case 0x164CB4u: goto label_164cb4;
            case 0x164CB8u: goto label_164cb8;
            case 0x164CBCu: goto label_164cbc;
            case 0x164CC0u: goto label_164cc0;
            case 0x164CC4u: goto label_164cc4;
            case 0x164CC8u: goto label_164cc8;
            case 0x164CCCu: goto label_164ccc;
            case 0x164CD0u: goto label_164cd0;
            case 0x164CD4u: goto label_164cd4;
            case 0x164CD8u: goto label_164cd8;
            case 0x164CDCu: goto label_164cdc;
            case 0x164CE0u: goto label_164ce0;
            case 0x164CE4u: goto label_164ce4;
            case 0x164CE8u: goto label_164ce8;
            case 0x164CECu: goto label_164cec;
            case 0x164CF0u: goto label_164cf0;
            case 0x164CF4u: goto label_164cf4;
            case 0x164CF8u: goto label_164cf8;
            case 0x164CFCu: goto label_164cfc;
            case 0x164D00u: goto label_164d00;
            case 0x164D04u: goto label_164d04;
            case 0x164D08u: goto label_164d08;
            case 0x164D0Cu: goto label_164d0c;
            case 0x164D10u: goto label_164d10;
            case 0x164D14u: goto label_164d14;
            case 0x164D18u: goto label_164d18;
            case 0x164D1Cu: goto label_164d1c;
            case 0x164D20u: goto label_164d20;
            case 0x164D24u: goto label_164d24;
            case 0x164D28u: goto label_164d28;
            case 0x164D2Cu: goto label_164d2c;
            case 0x164D30u: goto label_164d30;
            case 0x164D34u: goto label_164d34;
            case 0x164D38u: goto label_164d38;
            case 0x164D3Cu: goto label_164d3c;
            case 0x164D40u: goto label_164d40;
            case 0x164D44u: goto label_164d44;
            case 0x164D48u: goto label_164d48;
            case 0x164D4Cu: goto label_164d4c;
            case 0x164D50u: goto label_164d50;
            case 0x164D54u: goto label_164d54;
            case 0x164D58u: goto label_164d58;
            case 0x164D5Cu: goto label_164d5c;
            case 0x164D60u: goto label_164d60;
            case 0x164D64u: goto label_164d64;
            case 0x164D68u: goto label_164d68;
            case 0x164D6Cu: goto label_164d6c;
            case 0x164D70u: goto label_164d70;
            case 0x164D74u: goto label_164d74;
            case 0x164D78u: goto label_164d78;
            case 0x164D7Cu: goto label_164d7c;
            case 0x164D80u: goto label_164d80;
            case 0x164D84u: goto label_164d84;
            case 0x164D88u: goto label_164d88;
            case 0x164D8Cu: goto label_164d8c;
            case 0x164D90u: goto label_164d90;
            case 0x164D94u: goto label_164d94;
            case 0x164D98u: goto label_164d98;
            case 0x164D9Cu: goto label_164d9c;
            case 0x164DA0u: goto label_164da0;
            case 0x164DA4u: goto label_164da4;
            case 0x164DA8u: goto label_164da8;
            case 0x164DACu: goto label_164dac;
            case 0x164DB0u: goto label_164db0;
            case 0x164DB4u: goto label_164db4;
            case 0x164DB8u: goto label_164db8;
            case 0x164DBCu: goto label_164dbc;
            case 0x164DC0u: goto label_164dc0;
            case 0x164DC4u: goto label_164dc4;
            case 0x164DC8u: goto label_164dc8;
            case 0x164DCCu: goto label_164dcc;
            case 0x164DD0u: goto label_164dd0;
            case 0x164DD4u: goto label_164dd4;
            case 0x164DD8u: goto label_164dd8;
            case 0x164DDCu: goto label_164ddc;
            case 0x164DE0u: goto label_164de0;
            case 0x164DE4u: goto label_164de4;
            case 0x164DE8u: goto label_164de8;
            case 0x164DECu: goto label_164dec;
            case 0x164DF0u: goto label_164df0;
            case 0x164DF4u: goto label_164df4;
            case 0x164DF8u: goto label_164df8;
            case 0x164DFCu: goto label_164dfc;
            case 0x164E00u: goto label_164e00;
            case 0x164E04u: goto label_164e04;
            case 0x164E08u: goto label_164e08;
            case 0x164E0Cu: goto label_164e0c;
            case 0x164E10u: goto label_164e10;
            case 0x164E14u: goto label_164e14;
            case 0x164E18u: goto label_164e18;
            case 0x164E1Cu: goto label_164e1c;
            case 0x164E20u: goto label_164e20;
            case 0x164E24u: goto label_164e24;
            case 0x164E28u: goto label_164e28;
            case 0x164E2Cu: goto label_164e2c;
            case 0x164E30u: goto label_164e30;
            case 0x164E34u: goto label_164e34;
            case 0x164E38u: goto label_164e38;
            case 0x164E3Cu: goto label_164e3c;
            case 0x164E40u: goto label_164e40;
            case 0x164E44u: goto label_164e44;
            case 0x164E48u: goto label_164e48;
            case 0x164E4Cu: goto label_164e4c;
            case 0x164E50u: goto label_164e50;
            case 0x164E54u: goto label_164e54;
            case 0x164E58u: goto label_164e58;
            case 0x164E5Cu: goto label_164e5c;
            case 0x164E60u: goto label_164e60;
            case 0x164E64u: goto label_164e64;
            case 0x164E68u: goto label_164e68;
            case 0x164E6Cu: goto label_164e6c;
            case 0x164E70u: goto label_164e70;
            case 0x164E74u: goto label_164e74;
            case 0x164E78u: goto label_164e78;
            case 0x164E7Cu: goto label_164e7c;
            case 0x164E80u: goto label_164e80;
            case 0x164E84u: goto label_164e84;
            case 0x164E88u: goto label_164e88;
            case 0x164E8Cu: goto label_164e8c;
            case 0x164E90u: goto label_164e90;
            case 0x164E94u: goto label_164e94;
            case 0x164E98u: goto label_164e98;
            case 0x164E9Cu: goto label_164e9c;
            case 0x164EA0u: goto label_164ea0;
            case 0x164EA4u: goto label_164ea4;
            case 0x164EA8u: goto label_164ea8;
            case 0x164EACu: goto label_164eac;
            case 0x164EB0u: goto label_164eb0;
            case 0x164EB4u: goto label_164eb4;
            case 0x164EB8u: goto label_164eb8;
            case 0x164EBCu: goto label_164ebc;
            case 0x164EC0u: goto label_164ec0;
            case 0x164EC4u: goto label_164ec4;
            case 0x164EC8u: goto label_164ec8;
            case 0x164ECCu: goto label_164ecc;
            case 0x164ED0u: goto label_164ed0;
            case 0x164ED4u: goto label_164ed4;
            case 0x164ED8u: goto label_164ed8;
            case 0x164EDCu: goto label_164edc;
            case 0x164EE0u: goto label_164ee0;
            case 0x164EE4u: goto label_164ee4;
            case 0x164EE8u: goto label_164ee8;
            case 0x164EECu: goto label_164eec;
            case 0x164EF0u: goto label_164ef0;
            case 0x164EF4u: goto label_164ef4;
            case 0x164EF8u: goto label_164ef8;
            case 0x164EFCu: goto label_164efc;
            case 0x164F00u: goto label_164f00;
            case 0x164F04u: goto label_164f04;
            case 0x164F08u: goto label_164f08;
            case 0x164F0Cu: goto label_164f0c;
            case 0x164F10u: goto label_164f10;
            case 0x164F14u: goto label_164f14;
            case 0x164F18u: goto label_164f18;
            case 0x164F1Cu: goto label_164f1c;
            case 0x164F20u: goto label_164f20;
            case 0x164F24u: goto label_164f24;
            case 0x164F28u: goto label_164f28;
            case 0x164F2Cu: goto label_164f2c;
            case 0x164F30u: goto label_164f30;
            case 0x164F34u: goto label_164f34;
            case 0x164F38u: goto label_164f38;
            case 0x164F3Cu: goto label_164f3c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x164C14u; }
            if (ctx->pc != 0x164C14u) { return; }
        }
    }
    ctx->pc = 0x164C14u;
label_164c14:
    // 0x164c14: 0xdfb00010
    ctx->pc = 0x164c14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_164c18:
    // 0x164c18: 0xdfb10018
    ctx->pc = 0x164c18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_164c1c:
    // 0x164c1c: 0xdfbf0020
    ctx->pc = 0x164c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_164c20:
    // 0x164c20: 0x3e00008
label_164c24:
    if (ctx->pc == 0x164C24u) {
        ctx->pc = 0x164C24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x164C28u;
        goto label_164c28;
    }
    ctx->pc = 0x164C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164C24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x164BA0u: goto label_164ba0;
            case 0x164BA4u: goto label_164ba4;
            case 0x164BA8u: goto label_164ba8;
            case 0x164BACu: goto label_164bac;
            case 0x164BB0u: goto label_164bb0;
            case 0x164BB4u: goto label_164bb4;
            case 0x164BB8u: goto label_164bb8;
            case 0x164BBCu: goto label_164bbc;
            case 0x164BC0u: goto label_164bc0;
            case 0x164BC4u: goto label_164bc4;
            case 0x164BC8u: goto label_164bc8;
            case 0x164BCCu: goto label_164bcc;
            case 0x164BD0u: goto label_164bd0;
            case 0x164BD4u: goto label_164bd4;
            case 0x164BD8u: goto label_164bd8;
            case 0x164BDCu: goto label_164bdc;
            case 0x164BE0u: goto label_164be0;
            case 0x164BE4u: goto label_164be4;
            case 0x164BE8u: goto label_164be8;
            case 0x164BECu: goto label_164bec;
            case 0x164BF0u: goto label_164bf0;
            case 0x164BF4u: goto label_164bf4;
            case 0x164BF8u: goto label_164bf8;
            case 0x164BFCu: goto label_164bfc;
            case 0x164C00u: goto label_164c00;
            case 0x164C04u: goto label_164c04;
            case 0x164C08u: goto label_164c08;
            case 0x164C0Cu: goto label_164c0c;
            case 0x164C10u: goto label_164c10;
            case 0x164C14u: goto label_164c14;
            case 0x164C18u: goto label_164c18;
            case 0x164C1Cu: goto label_164c1c;
            case 0x164C20u: goto label_164c20;
            case 0x164C24u: goto label_164c24;
            case 0x164C28u: goto label_164c28;
            case 0x164C2Cu: goto label_164c2c;
            case 0x164C30u: goto label_164c30;
            case 0x164C34u: goto label_164c34;
            case 0x164C38u: goto label_164c38;
            case 0x164C3Cu: goto label_164c3c;
            case 0x164C40u: goto label_164c40;
            case 0x164C44u: goto label_164c44;
            case 0x164C48u: goto label_164c48;
            case 0x164C4Cu: goto label_164c4c;
            case 0x164C50u: goto label_164c50;
            case 0x164C54u: goto label_164c54;
            case 0x164C58u: goto label_164c58;
            case 0x164C5Cu: goto label_164c5c;
            case 0x164C60u: goto label_164c60;
            case 0x164C64u: goto label_164c64;
            case 0x164C68u: goto label_164c68;
            case 0x164C6Cu: goto label_164c6c;
            case 0x164C70u: goto label_164c70;
            case 0x164C74u: goto label_164c74;
            case 0x164C78u: goto label_164c78;
            case 0x164C7Cu: goto label_164c7c;
            case 0x164C80u: goto label_164c80;
            case 0x164C84u: goto label_164c84;
            case 0x164C88u: goto label_164c88;
            case 0x164C8Cu: goto label_164c8c;
            case 0x164C90u: goto label_164c90;
            case 0x164C94u: goto label_164c94;
            case 0x164C98u: goto label_164c98;
            case 0x164C9Cu: goto label_164c9c;
            case 0x164CA0u: goto label_164ca0;
            case 0x164CA4u: goto label_164ca4;
            case 0x164CA8u: goto label_164ca8;
            case 0x164CACu: goto label_164cac;
            case 0x164CB0u: goto label_164cb0;
            case 0x164CB4u: goto label_164cb4;
            case 0x164CB8u: goto label_164cb8;
            case 0x164CBCu: goto label_164cbc;
            case 0x164CC0u: goto label_164cc0;
            case 0x164CC4u: goto label_164cc4;
            case 0x164CC8u: goto label_164cc8;
            case 0x164CCCu: goto label_164ccc;
            case 0x164CD0u: goto label_164cd0;
            case 0x164CD4u: goto label_164cd4;
            case 0x164CD8u: goto label_164cd8;
            case 0x164CDCu: goto label_164cdc;
            case 0x164CE0u: goto label_164ce0;
            case 0x164CE4u: goto label_164ce4;
            case 0x164CE8u: goto label_164ce8;
            case 0x164CECu: goto label_164cec;
            case 0x164CF0u: goto label_164cf0;
            case 0x164CF4u: goto label_164cf4;
            case 0x164CF8u: goto label_164cf8;
            case 0x164CFCu: goto label_164cfc;
            case 0x164D00u: goto label_164d00;
            case 0x164D04u: goto label_164d04;
            case 0x164D08u: goto label_164d08;
            case 0x164D0Cu: goto label_164d0c;
            case 0x164D10u: goto label_164d10;
            case 0x164D14u: goto label_164d14;
            case 0x164D18u: goto label_164d18;
            case 0x164D1Cu: goto label_164d1c;
            case 0x164D20u: goto label_164d20;
            case 0x164D24u: goto label_164d24;
            case 0x164D28u: goto label_164d28;
            case 0x164D2Cu: goto label_164d2c;
            case 0x164D30u: goto label_164d30;
            case 0x164D34u: goto label_164d34;
            case 0x164D38u: goto label_164d38;
            case 0x164D3Cu: goto label_164d3c;
            case 0x164D40u: goto label_164d40;
            case 0x164D44u: goto label_164d44;
            case 0x164D48u: goto label_164d48;
            case 0x164D4Cu: goto label_164d4c;
            case 0x164D50u: goto label_164d50;
            case 0x164D54u: goto label_164d54;
            case 0x164D58u: goto label_164d58;
            case 0x164D5Cu: goto label_164d5c;
            case 0x164D60u: goto label_164d60;
            case 0x164D64u: goto label_164d64;
            case 0x164D68u: goto label_164d68;
            case 0x164D6Cu: goto label_164d6c;
            case 0x164D70u: goto label_164d70;
            case 0x164D74u: goto label_164d74;
            case 0x164D78u: goto label_164d78;
            case 0x164D7Cu: goto label_164d7c;
            case 0x164D80u: goto label_164d80;
            case 0x164D84u: goto label_164d84;
            case 0x164D88u: goto label_164d88;
            case 0x164D8Cu: goto label_164d8c;
            case 0x164D90u: goto label_164d90;
            case 0x164D94u: goto label_164d94;
            case 0x164D98u: goto label_164d98;
            case 0x164D9Cu: goto label_164d9c;
            case 0x164DA0u: goto label_164da0;
            case 0x164DA4u: goto label_164da4;
            case 0x164DA8u: goto label_164da8;
            case 0x164DACu: goto label_164dac;
            case 0x164DB0u: goto label_164db0;
            case 0x164DB4u: goto label_164db4;
            case 0x164DB8u: goto label_164db8;
            case 0x164DBCu: goto label_164dbc;
            case 0x164DC0u: goto label_164dc0;
            case 0x164DC4u: goto label_164dc4;
            case 0x164DC8u: goto label_164dc8;
            case 0x164DCCu: goto label_164dcc;
            case 0x164DD0u: goto label_164dd0;
            case 0x164DD4u: goto label_164dd4;
            case 0x164DD8u: goto label_164dd8;
            case 0x164DDCu: goto label_164ddc;
            case 0x164DE0u: goto label_164de0;
            case 0x164DE4u: goto label_164de4;
            case 0x164DE8u: goto label_164de8;
            case 0x164DECu: goto label_164dec;
            case 0x164DF0u: goto label_164df0;
            case 0x164DF4u: goto label_164df4;
            case 0x164DF8u: goto label_164df8;
            case 0x164DFCu: goto label_164dfc;
            case 0x164E00u: goto label_164e00;
            case 0x164E04u: goto label_164e04;
            case 0x164E08u: goto label_164e08;
            case 0x164E0Cu: goto label_164e0c;
            case 0x164E10u: goto label_164e10;
            case 0x164E14u: goto label_164e14;
            case 0x164E18u: goto label_164e18;
            case 0x164E1Cu: goto label_164e1c;
            case 0x164E20u: goto label_164e20;
            case 0x164E24u: goto label_164e24;
            case 0x164E28u: goto label_164e28;
            case 0x164E2Cu: goto label_164e2c;
            case 0x164E30u: goto label_164e30;
            case 0x164E34u: goto label_164e34;
            case 0x164E38u: goto label_164e38;
            case 0x164E3Cu: goto label_164e3c;
            case 0x164E40u: goto label_164e40;
            case 0x164E44u: goto label_164e44;
            case 0x164E48u: goto label_164e48;
            case 0x164E4Cu: goto label_164e4c;
            case 0x164E50u: goto label_164e50;
            case 0x164E54u: goto label_164e54;
            case 0x164E58u: goto label_164e58;
            case 0x164E5Cu: goto label_164e5c;
            case 0x164E60u: goto label_164e60;
            case 0x164E64u: goto label_164e64;
            case 0x164E68u: goto label_164e68;
            case 0x164E6Cu: goto label_164e6c;
            case 0x164E70u: goto label_164e70;
            case 0x164E74u: goto label_164e74;
            case 0x164E78u: goto label_164e78;
            case 0x164E7Cu: goto label_164e7c;
            case 0x164E80u: goto label_164e80;
            case 0x164E84u: goto label_164e84;
            case 0x164E88u: goto label_164e88;
            case 0x164E8Cu: goto label_164e8c;
            case 0x164E90u: goto label_164e90;
            case 0x164E94u: goto label_164e94;
            case 0x164E98u: goto label_164e98;
            case 0x164E9Cu: goto label_164e9c;
            case 0x164EA0u: goto label_164ea0;
            case 0x164EA4u: goto label_164ea4;
            case 0x164EA8u: goto label_164ea8;
            case 0x164EACu: goto label_164eac;
            case 0x164EB0u: goto label_164eb0;
            case 0x164EB4u: goto label_164eb4;
            case 0x164EB8u: goto label_164eb8;
            case 0x164EBCu: goto label_164ebc;
            case 0x164EC0u: goto label_164ec0;
            case 0x164EC4u: goto label_164ec4;
            case 0x164EC8u: goto label_164ec8;
            case 0x164ECCu: goto label_164ecc;
            case 0x164ED0u: goto label_164ed0;
            case 0x164ED4u: goto label_164ed4;
            case 0x164ED8u: goto label_164ed8;
            case 0x164EDCu: goto label_164edc;
            case 0x164EE0u: goto label_164ee0;
            case 0x164EE4u: goto label_164ee4;
            case 0x164EE8u: goto label_164ee8;
            case 0x164EECu: goto label_164eec;
            case 0x164EF0u: goto label_164ef0;
            case 0x164EF4u: goto label_164ef4;
            case 0x164EF8u: goto label_164ef8;
            case 0x164EFCu: goto label_164efc;
            case 0x164F00u: goto label_164f00;
            case 0x164F04u: goto label_164f04;
            case 0x164F08u: goto label_164f08;
            case 0x164F0Cu: goto label_164f0c;
            case 0x164F10u: goto label_164f10;
            case 0x164F14u: goto label_164f14;
            case 0x164F18u: goto label_164f18;
            case 0x164F1Cu: goto label_164f1c;
            case 0x164F20u: goto label_164f20;
            case 0x164F24u: goto label_164f24;
            case 0x164F28u: goto label_164f28;
            case 0x164F2Cu: goto label_164f2c;
            case 0x164F30u: goto label_164f30;
            case 0x164F34u: goto label_164f34;
            case 0x164F38u: goto label_164f38;
            case 0x164F3Cu: goto label_164f3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x164C28u;
label_164c28:
    // 0x164c28: 0x27bdffb0
    ctx->pc = 0x164c28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_164c2c:
    // 0x164c2c: 0xffb00010
    ctx->pc = 0x164c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_164c30:
    // 0x164c30: 0xffb20020
    ctx->pc = 0x164c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_164c34:
    // 0x164c34: 0xc0902d
    ctx->pc = 0x164c34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_164c38:
    // 0x164c38: 0xffb40030
    ctx->pc = 0x164c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_164c3c:
    // 0x164c3c: 0xa0a02d
    ctx->pc = 0x164c3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_164c40:
    // 0x164c40: 0xffb50038
    ctx->pc = 0x164c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_164c44:
    // 0x164c44: 0xe0a82d
    ctx->pc = 0x164c44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_164c48:
    // 0x164c48: 0xffbf0040
    ctx->pc = 0x164c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_164c4c:
    // 0x164c4c: 0x3a0302d
    ctx->pc = 0x164c4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_164c50:
    // 0x164c50: 0xffb10018
    ctx->pc = 0x164c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_164c54:
    // 0x164c54: 0xffb30028
    ctx->pc = 0x164c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_164c58:
    // 0x164c58: 0x8c911b74
    ctx->pc = 0x164c58u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 4), 7028)));
label_164c5c:
    // 0x164c5c: 0x8e330004
    ctx->pc = 0x164c5cu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_164c60:
    // 0x164c60: 0x8e250008
    ctx->pc = 0x164c60u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_164c64:
    // 0x164c64: 0xc0592dc
label_164c68:
    if (ctx->pc == 0x164C68u) {
        ctx->pc = 0x164C68u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x164C6Cu;
        goto label_164c6c;
    }
    ctx->pc = 0x164C64u;
    SET_GPR_U32(ctx, 31, 0x164C6Cu);
    ctx->pc = 0x164C68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x164B70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00164B70_0x164b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164C6Cu; }
    }
    if (ctx->pc != 0x164C6Cu) { return; }
    ctx->pc = 0x164C6Cu;
label_164c6c:
    // 0x164c6c: 0x3c060001
    ctx->pc = 0x164c6cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)1 << 16));
label_164c70:
    // 0x164c70: 0x8fb00004
    ctx->pc = 0x164c70u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_164c74:
    // 0x164c74: 0x34c69000
    ctx->pc = 0x164c74u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 36864));
label_164c78:
    // 0x164c78: 0x8fa40000
    ctx->pc = 0x164c78u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_164c7c:
    // 0x164c7c: 0x280282d
    ctx->pc = 0x164c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_164c80:
    // 0x164c80: 0x250102a
    ctx->pc = 0x164c80u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 16)));
label_164c84:
    // 0x164c84: 0x242800b
    ctx->pc = 0x164c84u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 18));
label_164c88:
    // 0x164c88: 0xd0182a
    ctx->pc = 0x164c88u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 16)));
label_164c8c:
    // 0x164c8c: 0xc3800b
    ctx->pc = 0x164c8cu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 6));
label_164c90:
    // 0x164c90: 0xc055798
label_164c94:
    if (ctx->pc == 0x164C94u) {
        ctx->pc = 0x164C94u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x164C98u;
        goto label_164c98;
    }
    ctx->pc = 0x164C90u;
    SET_GPR_U32(ctx, 31, 0x164C98u);
    ctx->pc = 0x164C94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x155E60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00155E60_0x155e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164C98u; }
    }
    if (ctx->pc != 0x164C98u) { return; }
    ctx->pc = 0x164C98u;
label_164c98:
    // 0x164c98: 0x260202d
    ctx->pc = 0x164c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_164c9c:
    // 0x164c9c: 0x200282d
    ctx->pc = 0x164c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_164ca0:
    // 0x164ca0: 0xc0592e8
label_164ca4:
    if (ctx->pc == 0x164CA4u) {
        ctx->pc = 0x164CA4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x164CA8u;
        goto label_164ca8;
    }
    ctx->pc = 0x164CA0u;
    SET_GPR_U32(ctx, 31, 0x164CA8u);
    ctx->pc = 0x164CA4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x164BA0u;
    goto label_164ba0;
    ctx->pc = 0x164CA8u;
label_164ca8:
    // 0x164ca8: 0x8e220048
    ctx->pc = 0x164ca8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_164cac:
    // 0x164cac: 0xdfb20020
    ctx->pc = 0x164cacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_164cb0:
    // 0x164cb0: 0x501021
    ctx->pc = 0x164cb0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_164cb4:
    // 0x164cb4: 0xdfb30028
    ctx->pc = 0x164cb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_164cb8:
    // 0x164cb8: 0xae220048
    ctx->pc = 0x164cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
label_164cbc:
    // 0x164cbc: 0xdfb40030
    ctx->pc = 0x164cbcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_164cc0:
    // 0x164cc0: 0xaeb00000
    ctx->pc = 0x164cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
label_164cc4:
    // 0x164cc4: 0xdfb10018
    ctx->pc = 0x164cc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_164cc8:
    // 0x164cc8: 0xdfb00010
    ctx->pc = 0x164cc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_164ccc:
    // 0x164ccc: 0xdfb50038
    ctx->pc = 0x164cccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_164cd0:
    // 0x164cd0: 0xdfbf0040
    ctx->pc = 0x164cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_164cd4:
    // 0x164cd4: 0x3e00008
label_164cd8:
    if (ctx->pc == 0x164CD8u) {
        ctx->pc = 0x164CD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x164CDCu;
        goto label_164cdc;
    }
    ctx->pc = 0x164CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164CD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x164BA0u: goto label_164ba0;
            case 0x164BA4u: goto label_164ba4;
            case 0x164BA8u: goto label_164ba8;
            case 0x164BACu: goto label_164bac;
            case 0x164BB0u: goto label_164bb0;
            case 0x164BB4u: goto label_164bb4;
            case 0x164BB8u: goto label_164bb8;
            case 0x164BBCu: goto label_164bbc;
            case 0x164BC0u: goto label_164bc0;
            case 0x164BC4u: goto label_164bc4;
            case 0x164BC8u: goto label_164bc8;
            case 0x164BCCu: goto label_164bcc;
            case 0x164BD0u: goto label_164bd0;
            case 0x164BD4u: goto label_164bd4;
            case 0x164BD8u: goto label_164bd8;
            case 0x164BDCu: goto label_164bdc;
            case 0x164BE0u: goto label_164be0;
            case 0x164BE4u: goto label_164be4;
            case 0x164BE8u: goto label_164be8;
            case 0x164BECu: goto label_164bec;
            case 0x164BF0u: goto label_164bf0;
            case 0x164BF4u: goto label_164bf4;
            case 0x164BF8u: goto label_164bf8;
            case 0x164BFCu: goto label_164bfc;
            case 0x164C00u: goto label_164c00;
            case 0x164C04u: goto label_164c04;
            case 0x164C08u: goto label_164c08;
            case 0x164C0Cu: goto label_164c0c;
            case 0x164C10u: goto label_164c10;
            case 0x164C14u: goto label_164c14;
            case 0x164C18u: goto label_164c18;
            case 0x164C1Cu: goto label_164c1c;
            case 0x164C20u: goto label_164c20;
            case 0x164C24u: goto label_164c24;
            case 0x164C28u: goto label_164c28;
            case 0x164C2Cu: goto label_164c2c;
            case 0x164C30u: goto label_164c30;
            case 0x164C34u: goto label_164c34;
            case 0x164C38u: goto label_164c38;
            case 0x164C3Cu: goto label_164c3c;
            case 0x164C40u: goto label_164c40;
            case 0x164C44u: goto label_164c44;
            case 0x164C48u: goto label_164c48;
            case 0x164C4Cu: goto label_164c4c;
            case 0x164C50u: goto label_164c50;
            case 0x164C54u: goto label_164c54;
            case 0x164C58u: goto label_164c58;
            case 0x164C5Cu: goto label_164c5c;
            case 0x164C60u: goto label_164c60;
            case 0x164C64u: goto label_164c64;
            case 0x164C68u: goto label_164c68;
            case 0x164C6Cu: goto label_164c6c;
            case 0x164C70u: goto label_164c70;
            case 0x164C74u: goto label_164c74;
            case 0x164C78u: goto label_164c78;
            case 0x164C7Cu: goto label_164c7c;
            case 0x164C80u: goto label_164c80;
            case 0x164C84u: goto label_164c84;
            case 0x164C88u: goto label_164c88;
            case 0x164C8Cu: goto label_164c8c;
            case 0x164C90u: goto label_164c90;
            case 0x164C94u: goto label_164c94;
            case 0x164C98u: goto label_164c98;
            case 0x164C9Cu: goto label_164c9c;
            case 0x164CA0u: goto label_164ca0;
            case 0x164CA4u: goto label_164ca4;
            case 0x164CA8u: goto label_164ca8;
            case 0x164CACu: goto label_164cac;
            case 0x164CB0u: goto label_164cb0;
            case 0x164CB4u: goto label_164cb4;
            case 0x164CB8u: goto label_164cb8;
            case 0x164CBCu: goto label_164cbc;
            case 0x164CC0u: goto label_164cc0;
            case 0x164CC4u: goto label_164cc4;
            case 0x164CC8u: goto label_164cc8;
            case 0x164CCCu: goto label_164ccc;
            case 0x164CD0u: goto label_164cd0;
            case 0x164CD4u: goto label_164cd4;
            case 0x164CD8u: goto label_164cd8;
            case 0x164CDCu: goto label_164cdc;
            case 0x164CE0u: goto label_164ce0;
            case 0x164CE4u: goto label_164ce4;
            case 0x164CE8u: goto label_164ce8;
            case 0x164CECu: goto label_164cec;
            case 0x164CF0u: goto label_164cf0;
            case 0x164CF4u: goto label_164cf4;
            case 0x164CF8u: goto label_164cf8;
            case 0x164CFCu: goto label_164cfc;
            case 0x164D00u: goto label_164d00;
            case 0x164D04u: goto label_164d04;
            case 0x164D08u: goto label_164d08;
            case 0x164D0Cu: goto label_164d0c;
            case 0x164D10u: goto label_164d10;
            case 0x164D14u: goto label_164d14;
            case 0x164D18u: goto label_164d18;
            case 0x164D1Cu: goto label_164d1c;
            case 0x164D20u: goto label_164d20;
            case 0x164D24u: goto label_164d24;
            case 0x164D28u: goto label_164d28;
            case 0x164D2Cu: goto label_164d2c;
            case 0x164D30u: goto label_164d30;
            case 0x164D34u: goto label_164d34;
            case 0x164D38u: goto label_164d38;
            case 0x164D3Cu: goto label_164d3c;
            case 0x164D40u: goto label_164d40;
            case 0x164D44u: goto label_164d44;
            case 0x164D48u: goto label_164d48;
            case 0x164D4Cu: goto label_164d4c;
            case 0x164D50u: goto label_164d50;
            case 0x164D54u: goto label_164d54;
            case 0x164D58u: goto label_164d58;
            case 0x164D5Cu: goto label_164d5c;
            case 0x164D60u: goto label_164d60;
            case 0x164D64u: goto label_164d64;
            case 0x164D68u: goto label_164d68;
            case 0x164D6Cu: goto label_164d6c;
            case 0x164D70u: goto label_164d70;
            case 0x164D74u: goto label_164d74;
            case 0x164D78u: goto label_164d78;
            case 0x164D7Cu: goto label_164d7c;
            case 0x164D80u: goto label_164d80;
            case 0x164D84u: goto label_164d84;
            case 0x164D88u: goto label_164d88;
            case 0x164D8Cu: goto label_164d8c;
            case 0x164D90u: goto label_164d90;
            case 0x164D94u: goto label_164d94;
            case 0x164D98u: goto label_164d98;
            case 0x164D9Cu: goto label_164d9c;
            case 0x164DA0u: goto label_164da0;
            case 0x164DA4u: goto label_164da4;
            case 0x164DA8u: goto label_164da8;
            case 0x164DACu: goto label_164dac;
            case 0x164DB0u: goto label_164db0;
            case 0x164DB4u: goto label_164db4;
            case 0x164DB8u: goto label_164db8;
            case 0x164DBCu: goto label_164dbc;
            case 0x164DC0u: goto label_164dc0;
            case 0x164DC4u: goto label_164dc4;
            case 0x164DC8u: goto label_164dc8;
            case 0x164DCCu: goto label_164dcc;
            case 0x164DD0u: goto label_164dd0;
            case 0x164DD4u: goto label_164dd4;
            case 0x164DD8u: goto label_164dd8;
            case 0x164DDCu: goto label_164ddc;
            case 0x164DE0u: goto label_164de0;
            case 0x164DE4u: goto label_164de4;
            case 0x164DE8u: goto label_164de8;
            case 0x164DECu: goto label_164dec;
            case 0x164DF0u: goto label_164df0;
            case 0x164DF4u: goto label_164df4;
            case 0x164DF8u: goto label_164df8;
            case 0x164DFCu: goto label_164dfc;
            case 0x164E00u: goto label_164e00;
            case 0x164E04u: goto label_164e04;
            case 0x164E08u: goto label_164e08;
            case 0x164E0Cu: goto label_164e0c;
            case 0x164E10u: goto label_164e10;
            case 0x164E14u: goto label_164e14;
            case 0x164E18u: goto label_164e18;
            case 0x164E1Cu: goto label_164e1c;
            case 0x164E20u: goto label_164e20;
            case 0x164E24u: goto label_164e24;
            case 0x164E28u: goto label_164e28;
            case 0x164E2Cu: goto label_164e2c;
            case 0x164E30u: goto label_164e30;
            case 0x164E34u: goto label_164e34;
            case 0x164E38u: goto label_164e38;
            case 0x164E3Cu: goto label_164e3c;
            case 0x164E40u: goto label_164e40;
            case 0x164E44u: goto label_164e44;
            case 0x164E48u: goto label_164e48;
            case 0x164E4Cu: goto label_164e4c;
            case 0x164E50u: goto label_164e50;
            case 0x164E54u: goto label_164e54;
            case 0x164E58u: goto label_164e58;
            case 0x164E5Cu: goto label_164e5c;
            case 0x164E60u: goto label_164e60;
            case 0x164E64u: goto label_164e64;
            case 0x164E68u: goto label_164e68;
            case 0x164E6Cu: goto label_164e6c;
            case 0x164E70u: goto label_164e70;
            case 0x164E74u: goto label_164e74;
            case 0x164E78u: goto label_164e78;
            case 0x164E7Cu: goto label_164e7c;
            case 0x164E80u: goto label_164e80;
            case 0x164E84u: goto label_164e84;
            case 0x164E88u: goto label_164e88;
            case 0x164E8Cu: goto label_164e8c;
            case 0x164E90u: goto label_164e90;
            case 0x164E94u: goto label_164e94;
            case 0x164E98u: goto label_164e98;
            case 0x164E9Cu: goto label_164e9c;
            case 0x164EA0u: goto label_164ea0;
            case 0x164EA4u: goto label_164ea4;
            case 0x164EA8u: goto label_164ea8;
            case 0x164EACu: goto label_164eac;
            case 0x164EB0u: goto label_164eb0;
            case 0x164EB4u: goto label_164eb4;
            case 0x164EB8u: goto label_164eb8;
            case 0x164EBCu: goto label_164ebc;
            case 0x164EC0u: goto label_164ec0;
            case 0x164EC4u: goto label_164ec4;
            case 0x164EC8u: goto label_164ec8;
            case 0x164ECCu: goto label_164ecc;
            case 0x164ED0u: goto label_164ed0;
            case 0x164ED4u: goto label_164ed4;
            case 0x164ED8u: goto label_164ed8;
            case 0x164EDCu: goto label_164edc;
            case 0x164EE0u: goto label_164ee0;
            case 0x164EE4u: goto label_164ee4;
            case 0x164EE8u: goto label_164ee8;
            case 0x164EECu: goto label_164eec;
            case 0x164EF0u: goto label_164ef0;
            case 0x164EF4u: goto label_164ef4;
            case 0x164EF8u: goto label_164ef8;
            case 0x164EFCu: goto label_164efc;
            case 0x164F00u: goto label_164f00;
            case 0x164F04u: goto label_164f04;
            case 0x164F08u: goto label_164f08;
            case 0x164F0Cu: goto label_164f0c;
            case 0x164F10u: goto label_164f10;
            case 0x164F14u: goto label_164f14;
            case 0x164F18u: goto label_164f18;
            case 0x164F1Cu: goto label_164f1c;
            case 0x164F20u: goto label_164f20;
            case 0x164F24u: goto label_164f24;
            case 0x164F28u: goto label_164f28;
            case 0x164F2Cu: goto label_164f2c;
            case 0x164F30u: goto label_164f30;
            case 0x164F34u: goto label_164f34;
            case 0x164F38u: goto label_164f38;
            case 0x164F3Cu: goto label_164f3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x164CDCu;
label_164cdc:
    // 0x164cdc: 0x0
    ctx->pc = 0x164cdcu;
    // NOP
label_164ce0:
    // 0x164ce0: 0x27bdff90
    ctx->pc = 0x164ce0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
label_164ce4:
    // 0x164ce4: 0xffbe0060
    ctx->pc = 0x164ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_164ce8:
    // 0x164ce8: 0xe0f02d
    ctx->pc = 0x164ce8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_164cec:
    // 0x164cec: 0xffb10028
    ctx->pc = 0x164cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_164cf0:
    // 0x164cf0: 0xffb40040
    ctx->pc = 0x164cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_164cf4:
    // 0x164cf4: 0x80a02d
    ctx->pc = 0x164cf4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_164cf8:
    // 0x164cf8: 0xffb50048
    ctx->pc = 0x164cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_164cfc:
    // 0x164cfc: 0xc0a82d
    ctx->pc = 0x164cfcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_164d00:
    // 0x164d00: 0xffb70058
    ctx->pc = 0x164d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_164d04:
    // 0x164d04: 0xa0b82d
    ctx->pc = 0x164d04u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_164d08:
    // 0x164d08: 0xffb00020
    ctx->pc = 0x164d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_164d0c:
    // 0x164d0c: 0x27a60004
    ctx->pc = 0x164d0cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
label_164d10:
    // 0x164d10: 0xffb20030
    ctx->pc = 0x164d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_164d14:
    // 0x164d14: 0x3a0282d
    ctx->pc = 0x164d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_164d18:
    // 0x164d18: 0xffb30038
    ctx->pc = 0x164d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_164d1c:
    // 0x164d1c: 0x26910cc0
    ctx->pc = 0x164d1cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 20), 3264));
label_164d20:
    // 0x164d20: 0xffb60050
    ctx->pc = 0x164d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_164d24:
    // 0x164d24: 0xffbf0068
    ctx->pc = 0x164d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_164d28:
    // 0x164d28: 0xafc00000
    ctx->pc = 0x164d28u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
label_164d2c:
    // 0x164d2c: 0xc0594b2
label_164d30:
    if (ctx->pc == 0x164D30u) {
        ctx->pc = 0x164D30u;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 20), 7028)));
        ctx->pc = 0x164D34u;
        goto label_164d34;
    }
    ctx->pc = 0x164D2Cu;
    SET_GPR_U32(ctx, 31, 0x164D34u);
    ctx->pc = 0x164D30u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 20), 7028)));
    ctx->pc = 0x1652C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001652C8_0x1652c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D34u; }
    }
    if (ctx->pc != 0x164D34u) { return; }
    ctx->pc = 0x164D34u;
label_164d34:
    // 0x164d34: 0x54400010
label_164d38:
    if (ctx->pc == 0x164D38u) {
        ctx->pc = 0x164D38u;
        SET_GPR_U32(ctx, 2, ((uint32_t)22 << 16));
        ctx->pc = 0x164D3Cu;
        goto label_164d3c;
    }
    ctx->pc = 0x164D34u;
    {
        const bool branch_taken_0x164d34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x164d34) {
            ctx->pc = 0x164D38u;
            SET_GPR_U32(ctx, 2, ((uint32_t)22 << 16));
            ctx->pc = 0x164D78u;
            goto label_164d78;
        }
    }
    ctx->pc = 0x164D3Cu;
label_164d3c:
    // 0x164d3c: 0x8fa50004
    ctx->pc = 0x164d3cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_164d40:
    // 0x164d40: 0xc05d830
label_164d44:
    if (ctx->pc == 0x164D44u) {
        ctx->pc = 0x164D44u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x164D48u;
        goto label_164d48;
    }
    ctx->pc = 0x164D40u;
    SET_GPR_U32(ctx, 31, 0x164D48u);
    ctx->pc = 0x164D44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1760C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001760C0_0x1760c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D48u; }
    }
    if (ctx->pc != 0x164D48u) { return; }
    ctx->pc = 0x164D48u;
label_164d48:
    // 0x164d48: 0x40902d
    ctx->pc = 0x164d48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_164d4c:
    // 0x164d4c: 0x640006f
label_164d50:
    if (ctx->pc == 0x164D50u) {
        ctx->pc = 0x164D50u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x164D54u;
        goto label_164d54;
    }
    ctx->pc = 0x164D4Cu;
    {
        const bool branch_taken_0x164d4c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x164D50u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x164d4c) {
            ctx->pc = 0x164F0Cu;
            goto label_164f0c;
        }
    }
    ctx->pc = 0x164D54u;
label_164d54:
    // 0x164d54: 0xc05d58a
label_164d58:
    if (ctx->pc == 0x164D58u) {
        ctx->pc = 0x164D58u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x164D5Cu;
        goto label_164d5c;
    }
    ctx->pc = 0x164D54u;
    SET_GPR_U32(ctx, 31, 0x164D5Cu);
    ctx->pc = 0x164D58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D5Cu; }
    }
    if (ctx->pc != 0x164D5Cu) { return; }
    ctx->pc = 0x164D5Cu;
label_164d5c:
    // 0x164d5c: 0x5440000a
label_164d60:
    if (ctx->pc == 0x164D60u) {
        ctx->pc = 0x164D60u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x164D64u;
        goto label_164d64;
    }
    ctx->pc = 0x164D5Cu;
    {
        const bool branch_taken_0x164d5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x164d5c) {
            ctx->pc = 0x164D60u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->pc = 0x164D88u;
            goto label_164d88;
        }
    }
    ctx->pc = 0x164D64u;
label_164d64:
    // 0x164d64: 0x8fa60004
    ctx->pc = 0x164d64u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_164d68:
    // 0x164d68: 0x220202d
    ctx->pc = 0x164d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_164d6c:
    // 0x164d6c: 0xc05d862
label_164d70:
    if (ctx->pc == 0x164D70u) {
        ctx->pc = 0x164D70u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x164D74u;
        goto label_164d74;
    }
    ctx->pc = 0x164D6Cu;
    SET_GPR_U32(ctx, 31, 0x164D74u);
    ctx->pc = 0x164D70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x176188u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00176188_0x176188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D74u; }
    }
    if (ctx->pc != 0x164D74u) { return; }
    ctx->pc = 0x164D74u;
label_164d74:
    // 0x164d74: 0x3c020016
    ctx->pc = 0x164d74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)22 << 16));
label_164d78:
    // 0x164d78: 0x24424c28
    ctx->pc = 0x164d78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19496));
label_164d7c:
    // 0x164d7c: 0x10000063
label_164d80:
    if (ctx->pc == 0x164D80u) {
        ctx->pc = 0x164D80u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
        ctx->pc = 0x164D84u;
        goto label_164d84;
    }
    ctx->pc = 0x164D7Cu;
    {
        const bool branch_taken_0x164d7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x164D80u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
        if (branch_taken_0x164d7c) {
            ctx->pc = 0x164F0Cu;
            goto label_164f0c;
        }
    }
    ctx->pc = 0x164D84u;
label_164d84:
    // 0x164d84: 0x0
    ctx->pc = 0x164d84u;
    // NOP
label_164d88:
    // 0x164d88: 0x220202d
    ctx->pc = 0x164d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_164d8c:
    // 0x164d8c: 0xc05d844
label_164d90:
    if (ctx->pc == 0x164D90u) {
        ctx->pc = 0x164D90u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 8));
        ctx->pc = 0x164D94u;
        goto label_164d94;
    }
    ctx->pc = 0x164D8Cu;
    SET_GPR_U32(ctx, 31, 0x164D94u);
    ctx->pc = 0x164D90u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 8));
    ctx->pc = 0x176110u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00176110_0x176110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D94u; }
    }
    if (ctx->pc != 0x164D94u) { return; }
    ctx->pc = 0x164D94u;
label_164d94:
    // 0x164d94: 0x40802d
    ctx->pc = 0x164d94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_164d98:
    // 0x164d98: 0x600005c
label_164d9c:
    if (ctx->pc == 0x164D9Cu) {
        ctx->pc = 0x164D9Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x164DA0u;
        goto label_164da0;
    }
    ctx->pc = 0x164D98u;
    {
        const bool branch_taken_0x164d98 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x164D9Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x164d98) {
            ctx->pc = 0x164F0Cu;
            goto label_164f0c;
        }
    }
    ctx->pc = 0x164DA0u;
label_164da0:
    // 0x164da0: 0x8fa60004
    ctx->pc = 0x164da0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_164da4:
    // 0x164da4: 0x200282d
    ctx->pc = 0x164da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_164da8:
    // 0x164da8: 0xc05d862
label_164dac:
    if (ctx->pc == 0x164DACu) {
        ctx->pc = 0x164DACu;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x164DB0u;
        goto label_164db0;
    }
    ctx->pc = 0x164DA8u;
    SET_GPR_U32(ctx, 31, 0x164DB0u);
    ctx->pc = 0x164DACu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x176188u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00176188_0x176188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164DB0u; }
    }
    if (ctx->pc != 0x164DB0u) { return; }
    ctx->pc = 0x164DB0u;
label_164db0:
    // 0x164db0: 0x2121823
    ctx->pc = 0x164db0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_164db4:
    // 0x164db4: 0x8e620038
    ctx->pc = 0x164db4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_164db8:
    // 0x164db8: 0x621823
    ctx->pc = 0x164db8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_164dbc:
    // 0x164dbc: 0x460003c
label_164dc0:
    if (ctx->pc == 0x164DC0u) {
        ctx->pc = 0x164DC0u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x164DC4u;
        goto label_164dc4;
    }
    ctx->pc = 0x164DBCu;
    {
        const bool branch_taken_0x164dbc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x164DC0u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x164dbc) {
            ctx->pc = 0x164EB0u;
            goto label_164eb0;
        }
    }
    ctx->pc = 0x164DC4u;
label_164dc4:
    // 0x164dc4: 0x31943
    ctx->pc = 0x164dc4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_164dc8:
    // 0x164dc8: 0x651818
    ctx->pc = 0x164dc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
label_164dcc:
    // 0x164dcc: 0x310c0
    ctx->pc = 0x164dccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
label_164dd0:
    // 0x164dd0: 0x431021
    ctx->pc = 0x164dd0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_164dd4:
    // 0x164dd4: 0x28840
    ctx->pc = 0x164dd4u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 2), 1));
label_164dd8:
    // 0x164dd8: 0x1a200022
label_164ddc:
    if (ctx->pc == 0x164DDCu) {
        ctx->pc = 0x164DDCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x164DE0u;
        goto label_164de0;
    }
    ctx->pc = 0x164DD8u;
    {
        const bool branch_taken_0x164dd8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x164DDCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        if (branch_taken_0x164dd8) {
            ctx->pc = 0x164E64u;
            goto label_164e64;
        }
    }
    ctx->pc = 0x164DE0u;
label_164de0:
    // 0x164de0: 0x510c0
    ctx->pc = 0x164de0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
label_164de4:
    // 0x164de4: 0x2e0202d
    ctx->pc = 0x164de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_164de8:
    // 0x164de8: 0x451021
    ctx->pc = 0x164de8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_164dec:
    // 0x164dec: 0x27a6000c
    ctx->pc = 0x164decu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 12));
label_164df0:
    // 0x164df0: 0x21040
    ctx->pc = 0x164df0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_164df4:
    // 0x164df4: 0x2a2001a
    ctx->pc = 0x164df4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 21);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_164df8:
    // 0x164df8: 0x50400001
label_164dfc:
    if (ctx->pc == 0x164DFCu) {
        ctx->pc = 0x164DFCu;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x164E00u;
        goto label_164e00;
    }
    ctx->pc = 0x164DF8u;
    {
        const bool branch_taken_0x164df8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x164df8) {
            ctx->pc = 0x164DFCu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x164E00u;
            goto label_164e00;
        }
    }
    ctx->pc = 0x164E00u;
label_164e00:
    // 0x164e00: 0x1812
    ctx->pc = 0x164e00u;
    SET_GPR_U32(ctx, 3, ctx->lo);
label_164e04:
    // 0x164e04: 0x651818
    ctx->pc = 0x164e04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
label_164e08:
    // 0x164e08: 0x310c0
    ctx->pc = 0x164e08u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
label_164e0c:
    // 0x164e0c: 0x431021
    ctx->pc = 0x164e0cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_164e10:
    // 0x164e10: 0x21040
    ctx->pc = 0x164e10u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_164e14:
    // 0x164e14: 0x40802d
    ctx->pc = 0x164e14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_164e18:
    // 0x164e18: 0x51102a
    ctx->pc = 0x164e18u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 17)));
label_164e1c:
    // 0x164e1c: 0x222800a
    ctx->pc = 0x164e1cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 17));
label_164e20:
    // 0x164e20: 0x200282d
    ctx->pc = 0x164e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_164e24:
    // 0x164e24: 0xc0593d0
label_164e28:
    if (ctx->pc == 0x164E28u) {
        ctx->pc = 0x164E28u;
        SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->pc = 0x164E2Cu;
        goto label_164e2c;
    }
    ctx->pc = 0x164E24u;
    SET_GPR_U32(ctx, 31, 0x164E2Cu);
    ctx->pc = 0x164E28u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->pc = 0x164F40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00164F40_0x164f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164E2Cu; }
    }
    if (ctx->pc != 0x164E2Cu) { return; }
    ctx->pc = 0x164E2Cu;
label_164e2c:
    // 0x164e2c: 0x8fa30000
    ctx->pc = 0x164e2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_164e30:
    // 0x164e30: 0x40b02d
    ctx->pc = 0x164e30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_164e34:
    // 0x164e34: 0x310c0
    ctx->pc = 0x164e34u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
label_164e38:
    // 0x164e38: 0x431021
    ctx->pc = 0x164e38u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_164e3c:
    // 0x164e3c: 0x21040
    ctx->pc = 0x164e3cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_164e40:
    // 0x164e40: 0x2c2001a
    ctx->pc = 0x164e40u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 22);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_164e44:
    // 0x164e44: 0x50400001
label_164e48:
    if (ctx->pc == 0x164E48u) {
        ctx->pc = 0x164E48u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x164E4Cu;
        goto label_164e4c;
    }
    ctx->pc = 0x164E44u;
    {
        const bool branch_taken_0x164e44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x164e44) {
            ctx->pc = 0x164E48u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x164E4Cu;
            goto label_164e4c;
        }
    }
    ctx->pc = 0x164E4Cu;
label_164e4c:
    // 0x164e4c: 0x8e630038
    ctx->pc = 0x164e4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_164e50:
    // 0x164e50: 0x2012
    ctx->pc = 0x164e50u;
    SET_GPR_U32(ctx, 4, ctx->lo);
label_164e54:
    // 0x164e54: 0x42140
    ctx->pc = 0x164e54u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 5));
label_164e58:
    // 0x164e58: 0x641821
    ctx->pc = 0x164e58u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_164e5c:
    // 0x164e5c: 0x1e00000b
label_164e60:
    if (ctx->pc == 0x164E60u) {
        ctx->pc = 0x164E60u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 3));
        ctx->pc = 0x164E64u;
        goto label_164e64;
    }
    ctx->pc = 0x164E5Cu;
    {
        const bool branch_taken_0x164e5c = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x164E60u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 3));
        if (branch_taken_0x164e5c) {
            ctx->pc = 0x164E8Cu;
            goto label_164e8c;
        }
    }
    ctx->pc = 0x164E64u;
label_164e64:
    // 0x164e64: 0x8fa20008
    ctx->pc = 0x164e64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_164e68:
    // 0x164e68: 0x10400008
label_164e6c:
    if (ctx->pc == 0x164E6Cu) {
        ctx->pc = 0x164E6Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)22 << 16));
        ctx->pc = 0x164E70u;
        goto label_164e70;
    }
    ctx->pc = 0x164E68u;
    {
        const bool branch_taken_0x164e68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x164E6Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)22 << 16));
        if (branch_taken_0x164e68) {
            ctx->pc = 0x164E8Cu;
            goto label_164e8c;
        }
    }
    ctx->pc = 0x164E70u;
label_164e70:
    // 0x164e70: 0x2e0202d
    ctx->pc = 0x164e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_164e74:
    // 0x164e74: 0x24424c28
    ctx->pc = 0x164e74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19496));
label_164e78:
    // 0x164e78: 0x2a0282d
    ctx->pc = 0x164e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_164e7c:
    // 0x164e7c: 0xae62003c
    ctx->pc = 0x164e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
label_164e80:
    // 0x164e80: 0xc04cc90
label_164e84:
    if (ctx->pc == 0x164E84u) {
        ctx->pc = 0x164E84u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x164E88u;
        goto label_164e88;
    }
    ctx->pc = 0x164E80u;
    SET_GPR_U32(ctx, 31, 0x164E88u);
    ctx->pc = 0x164E84u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x133240u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164E88u; }
    }
    if (ctx->pc != 0x164E88u) { return; }
    ctx->pc = 0x164E88u;
label_164e88:
    // 0x164e88: 0xafa2000c
    ctx->pc = 0x164e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_164e8c:
    // 0x164e8c: 0x8fa2000c
    ctx->pc = 0x164e8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_164e90:
    // 0x164e90: 0x1040001d
label_164e94:
    if (ctx->pc == 0x164E94u) {
        ctx->pc = 0x164E94u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x164E98u;
        goto label_164e98;
    }
    ctx->pc = 0x164E90u;
    {
        const bool branch_taken_0x164e90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x164E94u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x164e90) {
            ctx->pc = 0x164F08u;
            goto label_164f08;
        }
    }
    ctx->pc = 0x164E98u;
label_164e98:
    // 0x164e98: 0x24050006
    ctx->pc = 0x164e98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
label_164e9c:
    // 0x164e9c: 0xc05d518
label_164ea0:
    if (ctx->pc == 0x164EA0u) {
        ctx->pc = 0x164EA0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x164EA4u;
        goto label_164ea4;
    }
    ctx->pc = 0x164E9Cu;
    SET_GPR_U32(ctx, 31, 0x164EA4u);
    ctx->pc = 0x164EA0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175460_0x175460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164EA4u; }
    }
    if (ctx->pc != 0x164EA4u) { return; }
    ctx->pc = 0x164EA4u;
label_164ea4:
    // 0x164ea4: 0x10000019
label_164ea8:
    if (ctx->pc == 0x164EA8u) {
        ctx->pc = 0x164EA8u;
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 22));
        ctx->pc = 0x164EACu;
        goto label_164eac;
    }
    ctx->pc = 0x164EA4u;
    {
        const bool branch_taken_0x164ea4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x164EA8u;
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 22));
        if (branch_taken_0x164ea4) {
            ctx->pc = 0x164F0Cu;
            goto label_164f0c;
        }
    }
    ctx->pc = 0x164EACu;
label_164eac:
    // 0x164eac: 0x0
    ctx->pc = 0x164eacu;
    // NOP
label_164eb0:
    // 0x164eb0: 0x8fa20008
    ctx->pc = 0x164eb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_164eb4:
    // 0x164eb4: 0x10400014
label_164eb8:
    if (ctx->pc == 0x164EB8u) {
        ctx->pc = 0x164EB8u;
        SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        ctx->pc = 0x164EBCu;
        goto label_164ebc;
    }
    ctx->pc = 0x164EB4u;
    {
        const bool branch_taken_0x164eb4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x164EB8u;
        SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        if (branch_taken_0x164eb4) {
            ctx->pc = 0x164F08u;
            goto label_164f08;
        }
    }
    ctx->pc = 0x164EBCu;
label_164ebc:
    // 0x164ebc: 0x2482001f
    ctx->pc = 0x164ebcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 31));
label_164ec0:
    // 0x164ec0: 0x28830000
    ctx->pc = 0x164ec0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 0));
label_164ec4:
    // 0x164ec4: 0x43200b
    ctx->pc = 0x164ec4u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
label_164ec8:
    // 0x164ec8: 0x42143
    ctx->pc = 0x164ec8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
label_164ecc:
    // 0x164ecc: 0x48140
    ctx->pc = 0x164eccu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 4), 5));
label_164ed0:
    // 0x164ed0: 0x5a00000b
label_164ed4:
    if (ctx->pc == 0x164ED4u) {
        ctx->pc = 0x164ED4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)22 << 16));
        ctx->pc = 0x164ED8u;
        goto label_164ed8;
    }
    ctx->pc = 0x164ED0u;
    {
        const bool branch_taken_0x164ed0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x164ed0) {
            ctx->pc = 0x164ED4u;
            SET_GPR_U32(ctx, 2, ((uint32_t)22 << 16));
            ctx->pc = 0x164F00u;
            goto label_164f00;
        }
    }
    ctx->pc = 0x164ED8u;
label_164ed8:
    // 0x164ed8: 0x8fa50000
    ctx->pc = 0x164ed8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_164edc:
    // 0x164edc: 0x280202d
    ctx->pc = 0x164edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_164ee0:
    // 0x164ee0: 0xc0593f2
label_164ee4:
    if (ctx->pc == 0x164EE4u) {
        ctx->pc = 0x164EE4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x164EE8u;
        goto label_164ee8;
    }
    ctx->pc = 0x164EE0u;
    SET_GPR_U32(ctx, 31, 0x164EE8u);
    ctx->pc = 0x164EE4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x164FC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00164FC8_0x164fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164EE8u; }
    }
    if (ctx->pc != 0x164EE8u) { return; }
    ctx->pc = 0x164EE8u;
label_164ee8:
    // 0x164ee8: 0x8e630038
    ctx->pc = 0x164ee8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_164eec:
    // 0x164eec: 0x2022023
    ctx->pc = 0x164eecu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_164ef0:
    // 0x164ef0: 0x621823
    ctx->pc = 0x164ef0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_164ef4:
    // 0x164ef4: 0x1c800004
label_164ef8:
    if (ctx->pc == 0x164EF8u) {
        ctx->pc = 0x164EF8u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 3));
        ctx->pc = 0x164EFCu;
        goto label_164efc;
    }
    ctx->pc = 0x164EF4u;
    {
        const bool branch_taken_0x164ef4 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x164EF8u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 3));
        if (branch_taken_0x164ef4) {
            ctx->pc = 0x164F08u;
            goto label_164f08;
        }
    }
    ctx->pc = 0x164EFCu;
label_164efc:
    // 0x164efc: 0x3c020016
    ctx->pc = 0x164efcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)22 << 16));
label_164f00:
    // 0x164f00: 0x24424c28
    ctx->pc = 0x164f00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19496));
label_164f04:
    // 0x164f04: 0xae62003c
    ctx->pc = 0x164f04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
label_164f08:
    // 0x164f08: 0xafd60000
    ctx->pc = 0x164f08u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 22));
label_164f0c:
    // 0x164f0c: 0xdfb00020
    ctx->pc = 0x164f0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_164f10:
    // 0x164f10: 0xdfb10028
    ctx->pc = 0x164f10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_164f14:
    // 0x164f14: 0xdfb20030
    ctx->pc = 0x164f14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_164f18:
    // 0x164f18: 0xdfb30038
    ctx->pc = 0x164f18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_164f1c:
    // 0x164f1c: 0xdfb40040
    ctx->pc = 0x164f1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_164f20:
    // 0x164f20: 0xdfb50048
    ctx->pc = 0x164f20u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_164f24:
    // 0x164f24: 0xdfb60050
    ctx->pc = 0x164f24u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_164f28:
    // 0x164f28: 0xdfb70058
    ctx->pc = 0x164f28u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_164f2c:
    // 0x164f2c: 0xdfbe0060
    ctx->pc = 0x164f2cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_164f30:
    // 0x164f30: 0xdfbf0068
    ctx->pc = 0x164f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_164f34:
    // 0x164f34: 0x3e00008
label_164f38:
    if (ctx->pc == 0x164F38u) {
        ctx->pc = 0x164F38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x164F3Cu;
        goto label_164f3c;
    }
    ctx->pc = 0x164F34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164F38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x164BA0u: goto label_164ba0;
            case 0x164BA4u: goto label_164ba4;
            case 0x164BA8u: goto label_164ba8;
            case 0x164BACu: goto label_164bac;
            case 0x164BB0u: goto label_164bb0;
            case 0x164BB4u: goto label_164bb4;
            case 0x164BB8u: goto label_164bb8;
            case 0x164BBCu: goto label_164bbc;
            case 0x164BC0u: goto label_164bc0;
            case 0x164BC4u: goto label_164bc4;
            case 0x164BC8u: goto label_164bc8;
            case 0x164BCCu: goto label_164bcc;
            case 0x164BD0u: goto label_164bd0;
            case 0x164BD4u: goto label_164bd4;
            case 0x164BD8u: goto label_164bd8;
            case 0x164BDCu: goto label_164bdc;
            case 0x164BE0u: goto label_164be0;
            case 0x164BE4u: goto label_164be4;
            case 0x164BE8u: goto label_164be8;
            case 0x164BECu: goto label_164bec;
            case 0x164BF0u: goto label_164bf0;
            case 0x164BF4u: goto label_164bf4;
            case 0x164BF8u: goto label_164bf8;
            case 0x164BFCu: goto label_164bfc;
            case 0x164C00u: goto label_164c00;
            case 0x164C04u: goto label_164c04;
            case 0x164C08u: goto label_164c08;
            case 0x164C0Cu: goto label_164c0c;
            case 0x164C10u: goto label_164c10;
            case 0x164C14u: goto label_164c14;
            case 0x164C18u: goto label_164c18;
            case 0x164C1Cu: goto label_164c1c;
            case 0x164C20u: goto label_164c20;
            case 0x164C24u: goto label_164c24;
            case 0x164C28u: goto label_164c28;
            case 0x164C2Cu: goto label_164c2c;
            case 0x164C30u: goto label_164c30;
            case 0x164C34u: goto label_164c34;
            case 0x164C38u: goto label_164c38;
            case 0x164C3Cu: goto label_164c3c;
            case 0x164C40u: goto label_164c40;
            case 0x164C44u: goto label_164c44;
            case 0x164C48u: goto label_164c48;
            case 0x164C4Cu: goto label_164c4c;
            case 0x164C50u: goto label_164c50;
            case 0x164C54u: goto label_164c54;
            case 0x164C58u: goto label_164c58;
            case 0x164C5Cu: goto label_164c5c;
            case 0x164C60u: goto label_164c60;
            case 0x164C64u: goto label_164c64;
            case 0x164C68u: goto label_164c68;
            case 0x164C6Cu: goto label_164c6c;
            case 0x164C70u: goto label_164c70;
            case 0x164C74u: goto label_164c74;
            case 0x164C78u: goto label_164c78;
            case 0x164C7Cu: goto label_164c7c;
            case 0x164C80u: goto label_164c80;
            case 0x164C84u: goto label_164c84;
            case 0x164C88u: goto label_164c88;
            case 0x164C8Cu: goto label_164c8c;
            case 0x164C90u: goto label_164c90;
            case 0x164C94u: goto label_164c94;
            case 0x164C98u: goto label_164c98;
            case 0x164C9Cu: goto label_164c9c;
            case 0x164CA0u: goto label_164ca0;
            case 0x164CA4u: goto label_164ca4;
            case 0x164CA8u: goto label_164ca8;
            case 0x164CACu: goto label_164cac;
            case 0x164CB0u: goto label_164cb0;
            case 0x164CB4u: goto label_164cb4;
            case 0x164CB8u: goto label_164cb8;
            case 0x164CBCu: goto label_164cbc;
            case 0x164CC0u: goto label_164cc0;
            case 0x164CC4u: goto label_164cc4;
            case 0x164CC8u: goto label_164cc8;
            case 0x164CCCu: goto label_164ccc;
            case 0x164CD0u: goto label_164cd0;
            case 0x164CD4u: goto label_164cd4;
            case 0x164CD8u: goto label_164cd8;
            case 0x164CDCu: goto label_164cdc;
            case 0x164CE0u: goto label_164ce0;
            case 0x164CE4u: goto label_164ce4;
            case 0x164CE8u: goto label_164ce8;
            case 0x164CECu: goto label_164cec;
            case 0x164CF0u: goto label_164cf0;
            case 0x164CF4u: goto label_164cf4;
            case 0x164CF8u: goto label_164cf8;
            case 0x164CFCu: goto label_164cfc;
            case 0x164D00u: goto label_164d00;
            case 0x164D04u: goto label_164d04;
            case 0x164D08u: goto label_164d08;
            case 0x164D0Cu: goto label_164d0c;
            case 0x164D10u: goto label_164d10;
            case 0x164D14u: goto label_164d14;
            case 0x164D18u: goto label_164d18;
            case 0x164D1Cu: goto label_164d1c;
            case 0x164D20u: goto label_164d20;
            case 0x164D24u: goto label_164d24;
            case 0x164D28u: goto label_164d28;
            case 0x164D2Cu: goto label_164d2c;
            case 0x164D30u: goto label_164d30;
            case 0x164D34u: goto label_164d34;
            case 0x164D38u: goto label_164d38;
            case 0x164D3Cu: goto label_164d3c;
            case 0x164D40u: goto label_164d40;
            case 0x164D44u: goto label_164d44;
            case 0x164D48u: goto label_164d48;
            case 0x164D4Cu: goto label_164d4c;
            case 0x164D50u: goto label_164d50;
            case 0x164D54u: goto label_164d54;
            case 0x164D58u: goto label_164d58;
            case 0x164D5Cu: goto label_164d5c;
            case 0x164D60u: goto label_164d60;
            case 0x164D64u: goto label_164d64;
            case 0x164D68u: goto label_164d68;
            case 0x164D6Cu: goto label_164d6c;
            case 0x164D70u: goto label_164d70;
            case 0x164D74u: goto label_164d74;
            case 0x164D78u: goto label_164d78;
            case 0x164D7Cu: goto label_164d7c;
            case 0x164D80u: goto label_164d80;
            case 0x164D84u: goto label_164d84;
            case 0x164D88u: goto label_164d88;
            case 0x164D8Cu: goto label_164d8c;
            case 0x164D90u: goto label_164d90;
            case 0x164D94u: goto label_164d94;
            case 0x164D98u: goto label_164d98;
            case 0x164D9Cu: goto label_164d9c;
            case 0x164DA0u: goto label_164da0;
            case 0x164DA4u: goto label_164da4;
            case 0x164DA8u: goto label_164da8;
            case 0x164DACu: goto label_164dac;
            case 0x164DB0u: goto label_164db0;
            case 0x164DB4u: goto label_164db4;
            case 0x164DB8u: goto label_164db8;
            case 0x164DBCu: goto label_164dbc;
            case 0x164DC0u: goto label_164dc0;
            case 0x164DC4u: goto label_164dc4;
            case 0x164DC8u: goto label_164dc8;
            case 0x164DCCu: goto label_164dcc;
            case 0x164DD0u: goto label_164dd0;
            case 0x164DD4u: goto label_164dd4;
            case 0x164DD8u: goto label_164dd8;
            case 0x164DDCu: goto label_164ddc;
            case 0x164DE0u: goto label_164de0;
            case 0x164DE4u: goto label_164de4;
            case 0x164DE8u: goto label_164de8;
            case 0x164DECu: goto label_164dec;
            case 0x164DF0u: goto label_164df0;
            case 0x164DF4u: goto label_164df4;
            case 0x164DF8u: goto label_164df8;
            case 0x164DFCu: goto label_164dfc;
            case 0x164E00u: goto label_164e00;
            case 0x164E04u: goto label_164e04;
            case 0x164E08u: goto label_164e08;
            case 0x164E0Cu: goto label_164e0c;
            case 0x164E10u: goto label_164e10;
            case 0x164E14u: goto label_164e14;
            case 0x164E18u: goto label_164e18;
            case 0x164E1Cu: goto label_164e1c;
            case 0x164E20u: goto label_164e20;
            case 0x164E24u: goto label_164e24;
            case 0x164E28u: goto label_164e28;
            case 0x164E2Cu: goto label_164e2c;
            case 0x164E30u: goto label_164e30;
            case 0x164E34u: goto label_164e34;
            case 0x164E38u: goto label_164e38;
            case 0x164E3Cu: goto label_164e3c;
            case 0x164E40u: goto label_164e40;
            case 0x164E44u: goto label_164e44;
            case 0x164E48u: goto label_164e48;
            case 0x164E4Cu: goto label_164e4c;
            case 0x164E50u: goto label_164e50;
            case 0x164E54u: goto label_164e54;
            case 0x164E58u: goto label_164e58;
            case 0x164E5Cu: goto label_164e5c;
            case 0x164E60u: goto label_164e60;
            case 0x164E64u: goto label_164e64;
            case 0x164E68u: goto label_164e68;
            case 0x164E6Cu: goto label_164e6c;
            case 0x164E70u: goto label_164e70;
            case 0x164E74u: goto label_164e74;
            case 0x164E78u: goto label_164e78;
            case 0x164E7Cu: goto label_164e7c;
            case 0x164E80u: goto label_164e80;
            case 0x164E84u: goto label_164e84;
            case 0x164E88u: goto label_164e88;
            case 0x164E8Cu: goto label_164e8c;
            case 0x164E90u: goto label_164e90;
            case 0x164E94u: goto label_164e94;
            case 0x164E98u: goto label_164e98;
            case 0x164E9Cu: goto label_164e9c;
            case 0x164EA0u: goto label_164ea0;
            case 0x164EA4u: goto label_164ea4;
            case 0x164EA8u: goto label_164ea8;
            case 0x164EACu: goto label_164eac;
            case 0x164EB0u: goto label_164eb0;
            case 0x164EB4u: goto label_164eb4;
            case 0x164EB8u: goto label_164eb8;
            case 0x164EBCu: goto label_164ebc;
            case 0x164EC0u: goto label_164ec0;
            case 0x164EC4u: goto label_164ec4;
            case 0x164EC8u: goto label_164ec8;
            case 0x164ECCu: goto label_164ecc;
            case 0x164ED0u: goto label_164ed0;
            case 0x164ED4u: goto label_164ed4;
            case 0x164ED8u: goto label_164ed8;
            case 0x164EDCu: goto label_164edc;
            case 0x164EE0u: goto label_164ee0;
            case 0x164EE4u: goto label_164ee4;
            case 0x164EE8u: goto label_164ee8;
            case 0x164EECu: goto label_164eec;
            case 0x164EF0u: goto label_164ef0;
            case 0x164EF4u: goto label_164ef4;
            case 0x164EF8u: goto label_164ef8;
            case 0x164EFCu: goto label_164efc;
            case 0x164F00u: goto label_164f00;
            case 0x164F04u: goto label_164f04;
            case 0x164F08u: goto label_164f08;
            case 0x164F0Cu: goto label_164f0c;
            case 0x164F10u: goto label_164f10;
            case 0x164F14u: goto label_164f14;
            case 0x164F18u: goto label_164f18;
            case 0x164F1Cu: goto label_164f1c;
            case 0x164F20u: goto label_164f20;
            case 0x164F24u: goto label_164f24;
            case 0x164F28u: goto label_164f28;
            case 0x164F2Cu: goto label_164f2c;
            case 0x164F30u: goto label_164f30;
            case 0x164F34u: goto label_164f34;
            case 0x164F38u: goto label_164f38;
            case 0x164F3Cu: goto label_164f3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x164F3Cu;
label_164f3c:
    // 0x164f3c: 0x0
    ctx->pc = 0x164f3cu;
    // NOP
}
