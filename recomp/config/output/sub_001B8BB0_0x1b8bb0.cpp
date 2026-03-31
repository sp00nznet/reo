#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B8BB0
// Address: 0x1b8bb0 - 0x1b8f40
void sub_001B8BB0_0x1b8bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b8bb0u;

    // 0x1b8bb0: 0x27bdfff0
    ctx->pc = 0x1b8bb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b8bb4: 0xffbf0000
    ctx->pc = 0x1b8bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8bb8: 0x90830002
    ctx->pc = 0x1b8bb8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1b8bbc: 0x14600008
    ctx->pc = 0x1B8BBCu;
    {
        const bool branch_taken_0x1b8bbc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b8bbc) {
            ctx->pc = 0x1B8BE0u;
            goto label_1b8be0;
        }
    }
    ctx->pc = 0x1B8BC4u;
    // 0x1b8bc4: 0x90860003
    ctx->pc = 0x1b8bc4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1b8bc8: 0x24870038
    ctx->pc = 0x1b8bc8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 4), 56));
    // 0x1b8bcc: 0x24080001
    ctx->pc = 0x1b8bccu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8bd0: 0x482d
    ctx->pc = 0x1b8bd0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8bd4: 0x502d
    ctx->pc = 0x1b8bd4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8bd8: 0xc06e4f4
    ctx->pc = 0x1B8BD8u;
    SET_GPR_U32(ctx, 31, 0x1B8BE0u);
    ctx->pc = 0x1B8BDCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 4));
    ctx->pc = 0x1B93D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B93D0_0x1b93d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8BE0u; }
    }
    if (ctx->pc != 0x1B8BE0u) { return; }
    ctx->pc = 0x1B8BE0u;
label_1b8be0:
    // 0x1b8be0: 0xdfbf0000
    ctx->pc = 0x1b8be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8be4: 0x3e00008
    ctx->pc = 0x1B8BE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8BE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B8BE0u: goto label_1b8be0;
            case 0x1B8C40u: goto label_1b8c40;
            case 0x1B8C58u: goto label_1b8c58;
            case 0x1B8C5Cu: goto label_1b8c5c;
            case 0x1B8CB4u: goto label_1b8cb4;
            case 0x1B8CD4u: goto label_1b8cd4;
            case 0x1B8CE8u: goto label_1b8ce8;
            case 0x1B8CF0u: goto label_1b8cf0;
            case 0x1B8D2Cu: goto label_1b8d2c;
            case 0x1B8D30u: goto label_1b8d30;
            case 0x1B8DCCu: goto label_1b8dcc;
            case 0x1B8DECu: goto label_1b8dec;
            case 0x1B8DF4u: goto label_1b8df4;
            case 0x1B8DFCu: goto label_1b8dfc;
            case 0x1B8E14u: goto label_1b8e14;
            case 0x1B8E18u: goto label_1b8e18;
            case 0x1B8E64u: goto label_1b8e64;
            case 0x1B8E68u: goto label_1b8e68;
            case 0x1B8E6Cu: goto label_1b8e6c;
            case 0x1B8EA8u: goto label_1b8ea8;
            case 0x1B8EC4u: goto label_1b8ec4;
            case 0x1B8F1Cu: goto label_1b8f1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B8BECu;
    // 0x1b8bec: 0x0
    ctx->pc = 0x1b8becu;
    // NOP
    // 0x1b8bf0: 0x27bdffe0
    ctx->pc = 0x1b8bf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b8bf4: 0xffbf0010
    ctx->pc = 0x1b8bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b8bf8: 0x7fb00000
    ctx->pc = 0x1b8bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b8bfc: 0x80802d
    ctx->pc = 0x1b8bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8c00: 0xc06bb20
    ctx->pc = 0x1B8C00u;
    SET_GPR_U32(ctx, 31, 0x1B8C08u);
    ctx->pc = 0x1B8C04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AEC80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEC80_0x1aec80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8C08u; }
    }
    if (ctx->pc != 0x1B8C08u) { return; }
    ctx->pc = 0x1B8C08u;
    // 0x1b8c08: 0x92040002
    ctx->pc = 0x1b8c08u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1b8c0c: 0x3043ffff
    ctx->pc = 0x1b8c0cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1b8c10: 0x30630001
    ctx->pc = 0x1b8c10u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x1b8c14: 0x1480000a
    ctx->pc = 0x1B8C14u;
    {
        const bool branch_taken_0x1b8c14 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B8C18u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x1b8c14) {
            ctx->pc = 0x1B8C40u;
            goto label_1b8c40;
        }
    }
    ctx->pc = 0x1B8C1Cu;
    // 0x1b8c1c: 0x92060003
    ctx->pc = 0x1b8c1cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1b8c20: 0x26070038
    ctx->pc = 0x1b8c20u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 56));
    // 0x1b8c24: 0x24080001
    ctx->pc = 0x1b8c24u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8c28: 0x482d
    ctx->pc = 0x1b8c28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8c2c: 0x502d
    ctx->pc = 0x1b8c2cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8c30: 0xc06e4f4
    ctx->pc = 0x1B8C30u;
    SET_GPR_U32(ctx, 31, 0x1B8C38u);
    ctx->pc = 0x1B8C34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 4));
    ctx->pc = 0x1B93D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B93D0_0x1b93d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8C38u; }
    }
    if (ctx->pc != 0x1B8C38u) { return; }
    ctx->pc = 0x1B8C38u;
    // 0x1b8c38: 0x10000008
    ctx->pc = 0x1B8C38u;
    {
        const bool branch_taken_0x1b8c38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B8C3Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1b8c38) {
            ctx->pc = 0x1B8C5Cu;
            goto label_1b8c5c;
        }
    }
    ctx->pc = 0x1B8C40u;
label_1b8c40:
    // 0x1b8c40: 0x24030001
    ctx->pc = 0x1b8c40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8c44: 0x14830004
    ctx->pc = 0x1B8C44u;
    {
        const bool branch_taken_0x1b8c44 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1b8c44) {
            ctx->pc = 0x1B8C58u;
            goto label_1b8c58;
        }
    }
    ctx->pc = 0x1B8C4Cu;
    // 0x1b8c4c: 0x200202d
    ctx->pc = 0x1b8c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8c50: 0xc06e2c8
    ctx->pc = 0x1B8C50u;
    SET_GPR_U32(ctx, 31, 0x1B8C58u);
    ctx->pc = 0x1B8C54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->pc = 0x1B8B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8B20_0x1b8b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8C58u; }
    }
    if (ctx->pc != 0x1B8C58u) { return; }
    ctx->pc = 0x1B8C58u;
label_1b8c58:
    // 0x1b8c58: 0xdfbf0010
    ctx->pc = 0x1b8c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b8c5c:
    // 0x1b8c5c: 0x7bb00000
    ctx->pc = 0x1b8c5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8c60: 0x3e00008
    ctx->pc = 0x1B8C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8C64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B8BE0u: goto label_1b8be0;
            case 0x1B8C40u: goto label_1b8c40;
            case 0x1B8C58u: goto label_1b8c58;
            case 0x1B8C5Cu: goto label_1b8c5c;
            case 0x1B8CB4u: goto label_1b8cb4;
            case 0x1B8CD4u: goto label_1b8cd4;
            case 0x1B8CE8u: goto label_1b8ce8;
            case 0x1B8CF0u: goto label_1b8cf0;
            case 0x1B8D2Cu: goto label_1b8d2c;
            case 0x1B8D30u: goto label_1b8d30;
            case 0x1B8DCCu: goto label_1b8dcc;
            case 0x1B8DECu: goto label_1b8dec;
            case 0x1B8DF4u: goto label_1b8df4;
            case 0x1B8DFCu: goto label_1b8dfc;
            case 0x1B8E14u: goto label_1b8e14;
            case 0x1B8E18u: goto label_1b8e18;
            case 0x1B8E64u: goto label_1b8e64;
            case 0x1B8E68u: goto label_1b8e68;
            case 0x1B8E6Cu: goto label_1b8e6c;
            case 0x1B8EA8u: goto label_1b8ea8;
            case 0x1B8EC4u: goto label_1b8ec4;
            case 0x1B8F1Cu: goto label_1b8f1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B8C68u;
    // 0x1b8c68: 0x0
    ctx->pc = 0x1b8c68u;
    // NOP
    // 0x1b8c6c: 0x0
    ctx->pc = 0x1b8c6cu;
    // NOP
    // 0x1b8c70: 0x27bdffd0
    ctx->pc = 0x1b8c70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b8c74: 0xffbf0020
    ctx->pc = 0x1b8c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b8c78: 0x7fb10010
    ctx->pc = 0x1b8c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b8c7c: 0x7fb00000
    ctx->pc = 0x1b8c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b8c80: 0x80882d
    ctx->pc = 0x1b8c80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8c84: 0x92230002
    ctx->pc = 0x1b8c84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1b8c88: 0x90840c7c
    ctx->pc = 0x1b8c88u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3196)));
    // 0x1b8c8c: 0x10600018
    ctx->pc = 0x1B8C8Cu;
    {
        const bool branch_taken_0x1b8c8c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B8C90u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b8c8c) {
            ctx->pc = 0x1B8CF0u;
            goto label_1b8cf0;
        }
    }
    ctx->pc = 0x1B8C94u;
    // 0x1b8c94: 0x16000007
    ctx->pc = 0x1B8C94u;
    {
        const bool branch_taken_0x1b8c94 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B8C98u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x1b8c94) {
            ctx->pc = 0x1B8CB4u;
            goto label_1b8cb4;
        }
    }
    ctx->pc = 0x1B8C9Cu;
    // 0x1b8c9c: 0x220202d
    ctx->pc = 0x1b8c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8ca0: 0xc06e2c8
    ctx->pc = 0x1B8CA0u;
    SET_GPR_U32(ctx, 31, 0x1B8CA8u);
    ctx->pc = 0x1B8CA4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x1B8B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8B20_0x1b8b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8CA8u; }
    }
    if (ctx->pc != 0x1B8CA8u) { return; }
    ctx->pc = 0x1B8CA8u;
    // 0x1b8ca8: 0x1000000f
    ctx->pc = 0x1B8CA8u;
    {
        const bool branch_taken_0x1b8ca8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b8ca8) {
            ctx->pc = 0x1B8CE8u;
            goto label_1b8ce8;
        }
    }
    ctx->pc = 0x1B8CB0u;
    // 0x1b8cb0: 0x24030006
    ctx->pc = 0x1b8cb0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
label_1b8cb4:
    // 0x1b8cb4: 0x16030007
    ctx->pc = 0x1B8CB4u;
    {
        const bool branch_taken_0x1b8cb4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 3));
        ctx->pc = 0x1B8CB8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 25));
        if (branch_taken_0x1b8cb4) {
            ctx->pc = 0x1B8CD4u;
            goto label_1b8cd4;
        }
    }
    ctx->pc = 0x1B8CBCu;
    // 0x1b8cbc: 0x220202d
    ctx->pc = 0x1b8cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8cc0: 0xc06e2c8
    ctx->pc = 0x1B8CC0u;
    SET_GPR_U32(ctx, 31, 0x1B8CC8u);
    ctx->pc = 0x1B8CC4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x1B8B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8B20_0x1b8b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8CC8u; }
    }
    if (ctx->pc != 0x1B8CC8u) { return; }
    ctx->pc = 0x1B8CC8u;
    // 0x1b8cc8: 0x10000007
    ctx->pc = 0x1B8CC8u;
    {
        const bool branch_taken_0x1b8cc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b8cc8) {
            ctx->pc = 0x1B8CE8u;
            goto label_1b8ce8;
        }
    }
    ctx->pc = 0x1B8CD0u;
    // 0x1b8cd0: 0x24030019
    ctx->pc = 0x1b8cd0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 25));
label_1b8cd4:
    // 0x1b8cd4: 0x16030015
    ctx->pc = 0x1B8CD4u;
    {
        const bool branch_taken_0x1b8cd4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 3));
        if (branch_taken_0x1b8cd4) {
            ctx->pc = 0x1B8D2Cu;
            goto label_1b8d2c;
        }
    }
    ctx->pc = 0x1B8CDCu;
    // 0x1b8cdc: 0x220202d
    ctx->pc = 0x1b8cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8ce0: 0xc06e2c8
    ctx->pc = 0x1B8CE0u;
    SET_GPR_U32(ctx, 31, 0x1B8CE8u);
    ctx->pc = 0x1B8CE4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x1B8B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8B20_0x1b8b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8CE8u; }
    }
    if (ctx->pc != 0x1B8CE8u) { return; }
    ctx->pc = 0x1B8CE8u;
label_1b8ce8:
    // 0x1b8ce8: 0x10000011
    ctx->pc = 0x1B8CE8u;
    {
        const bool branch_taken_0x1b8ce8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B8CECu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1b8ce8) {
            ctx->pc = 0x1B8D30u;
            goto label_1b8d30;
        }
    }
    ctx->pc = 0x1B8CF0u;
label_1b8cf0:
    // 0x1b8cf0: 0xc16d338
    ctx->pc = 0x1B8CF0u;
    SET_GPR_U32(ctx, 31, 0x1B8CF8u);
    ctx->pc = 0x5B4CE0u;
    {
        auto targetFn = runtime->lookupFunction(0x5B4CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8CF8u; }
        if (ctx->pc != 0x1B8CF8u) { return; }
    }
    ctx->pc = 0x1B8CF8u;
    // 0x1b8cf8: 0x2263c
    ctx->pc = 0x1b8cf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1b8cfc: 0x2403ffff
    ctx->pc = 0x1b8cfcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b8d00: 0x4263f
    ctx->pc = 0x1b8d00u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x1b8d04: 0x10830009
    ctx->pc = 0x1B8D04u;
    {
        const bool branch_taken_0x1b8d04 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1b8d04) {
            ctx->pc = 0x1B8D2Cu;
            goto label_1b8d2c;
        }
    }
    ctx->pc = 0x1B8D0Cu;
    // 0x1b8d0c: 0x92260003
    ctx->pc = 0x1b8d0cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x1b8d10: 0x200282d
    ctx->pc = 0x1b8d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8d14: 0x26270038
    ctx->pc = 0x1b8d14u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 17), 56));
    // 0x1b8d18: 0x24080001
    ctx->pc = 0x1b8d18u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8d1c: 0x482d
    ctx->pc = 0x1b8d1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8d20: 0x502d
    ctx->pc = 0x1b8d20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8d24: 0xc06e4f4
    ctx->pc = 0x1B8D24u;
    SET_GPR_U32(ctx, 31, 0x1B8D2Cu);
    ctx->pc = 0x1B8D28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 8));
    ctx->pc = 0x1B93D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B93D0_0x1b93d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D2Cu; }
    }
    if (ctx->pc != 0x1B8D2Cu) { return; }
    ctx->pc = 0x1B8D2Cu;
label_1b8d2c:
    // 0x1b8d2c: 0xdfbf0020
    ctx->pc = 0x1b8d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b8d30:
    // 0x1b8d30: 0x7bb10010
    ctx->pc = 0x1b8d30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8d34: 0x7bb00000
    ctx->pc = 0x1b8d34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8d38: 0x3e00008
    ctx->pc = 0x1B8D38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8D3Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B8BE0u: goto label_1b8be0;
            case 0x1B8C40u: goto label_1b8c40;
            case 0x1B8C58u: goto label_1b8c58;
            case 0x1B8C5Cu: goto label_1b8c5c;
            case 0x1B8CB4u: goto label_1b8cb4;
            case 0x1B8CD4u: goto label_1b8cd4;
            case 0x1B8CE8u: goto label_1b8ce8;
            case 0x1B8CF0u: goto label_1b8cf0;
            case 0x1B8D2Cu: goto label_1b8d2c;
            case 0x1B8D30u: goto label_1b8d30;
            case 0x1B8DCCu: goto label_1b8dcc;
            case 0x1B8DECu: goto label_1b8dec;
            case 0x1B8DF4u: goto label_1b8df4;
            case 0x1B8DFCu: goto label_1b8dfc;
            case 0x1B8E14u: goto label_1b8e14;
            case 0x1B8E18u: goto label_1b8e18;
            case 0x1B8E64u: goto label_1b8e64;
            case 0x1B8E68u: goto label_1b8e68;
            case 0x1B8E6Cu: goto label_1b8e6c;
            case 0x1B8EA8u: goto label_1b8ea8;
            case 0x1B8EC4u: goto label_1b8ec4;
            case 0x1B8F1Cu: goto label_1b8f1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B8D40u;
    // 0x1b8d40: 0xa0382d
    ctx->pc = 0x1b8d40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8d44: 0x80102d
    ctx->pc = 0x1b8d44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8d48: 0xc0282d
    ctx->pc = 0x1b8d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8d4c: 0x24440008
    ctx->pc = 0x1b8d4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1b8d50: 0x24080001
    ctx->pc = 0x1b8d50u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8d54: 0x40302d
    ctx->pc = 0x1b8d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8d58: 0x482d
    ctx->pc = 0x1b8d58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8d5c: 0x806e4f4
    ctx->pc = 0x1B8D5Cu;
    ctx->pc = 0x1B8D60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B93D0u;
    sub_001B93D0_0x1b93d0(rdram, ctx, runtime); return;
    ctx->pc = 0x1B8D64u;
    // 0x1b8d64: 0x0
    ctx->pc = 0x1b8d64u;
    // NOP
    // 0x1b8d68: 0x0
    ctx->pc = 0x1b8d68u;
    // NOP
    // 0x1b8d6c: 0x0
    ctx->pc = 0x1b8d6cu;
    // NOP
    // 0x1b8d70: 0x27bdff60
    ctx->pc = 0x1b8d70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1b8d74: 0x24030004
    ctx->pc = 0x1b8d74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b8d78: 0xffbf0040
    ctx->pc = 0x1b8d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b8d7c: 0x7fb30030
    ctx->pc = 0x1b8d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b8d80: 0x7fb20020
    ctx->pc = 0x1b8d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b8d84: 0x7fb10010
    ctx->pc = 0x1b8d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b8d88: 0x7fb00000
    ctx->pc = 0x1b8d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b8d8c: 0x5863c
    ctx->pc = 0x1b8d8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) << (32 + 24));
    // 0x1b8d90: 0x10863f
    ctx->pc = 0x1b8d90u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
    // 0x1b8d94: 0x12030019
    ctx->pc = 0x1B8D94u;
    {
        const bool branch_taken_0x1b8d94 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        ctx->pc = 0x1B8D98u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b8d94) {
            ctx->pc = 0x1B8DFCu;
            goto label_1b8dfc;
        }
    }
    ctx->pc = 0x1B8D9Cu;
    // 0x1b8d9c: 0x24020003
    ctx->pc = 0x1b8d9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b8da0: 0x12020014
    ctx->pc = 0x1B8DA0u;
    {
        const bool branch_taken_0x1b8da0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x1B8DA4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1b8da0) {
            ctx->pc = 0x1B8DF4u;
            goto label_1b8df4;
        }
    }
    ctx->pc = 0x1B8DA8u;
    // 0x1b8da8: 0x12020010
    ctx->pc = 0x1B8DA8u;
    {
        const bool branch_taken_0x1b8da8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        if (branch_taken_0x1b8da8) {
            ctx->pc = 0x1B8DECu;
            goto label_1b8dec;
        }
    }
    ctx->pc = 0x1B8DB0u;
    // 0x1b8db0: 0x24020001
    ctx->pc = 0x1b8db0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8db4: 0x12020005
    ctx->pc = 0x1B8DB4u;
    {
        const bool branch_taken_0x1b8db4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x1B8DB8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1b8db4) {
            ctx->pc = 0x1B8DCCu;
            goto label_1b8dcc;
        }
    }
    ctx->pc = 0x1B8DBCu;
    // 0x1b8dbc: 0x12000003
    ctx->pc = 0x1B8DBCu;
    {
        const bool branch_taken_0x1b8dbc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b8dbc) {
            ctx->pc = 0x1B8DCCu;
            goto label_1b8dcc;
        }
    }
    ctx->pc = 0x1B8DC4u;
    // 0x1b8dc4: 0x10000014
    ctx->pc = 0x1B8DC4u;
    {
        const bool branch_taken_0x1b8dc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B8DC8u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
        if (branch_taken_0x1b8dc4) {
            ctx->pc = 0x1B8E18u;
            goto label_1b8e18;
        }
    }
    ctx->pc = 0x1B8DCCu;
label_1b8dcc:
    // 0x1b8dcc: 0xc06bb20
    ctx->pc = 0x1B8DCCu;
    SET_GPR_U32(ctx, 31, 0x1B8DD4u);
    ctx->pc = 0x1AEC80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEC80_0x1aec80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8DD4u; }
    }
    if (ctx->pc != 0x1B8DD4u) { return; }
    ctx->pc = 0x1B8DD4u;
    // 0x1b8dd4: 0x3043ffff
    ctx->pc = 0x1b8dd4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1b8dd8: 0x101040
    ctx->pc = 0x1b8dd8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 1));
    // 0x1b8ddc: 0x30630001
    ctx->pc = 0x1b8ddcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x1b8de0: 0x431021
    ctx->pc = 0x1b8de0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b8de4: 0x1000000b
    ctx->pc = 0x1B8DE4u;
    {
        const bool branch_taken_0x1b8de4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B8DE8u;
        SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 2), 65535));
        if (branch_taken_0x1b8de4) {
            ctx->pc = 0x1B8E14u;
            goto label_1b8e14;
        }
    }
    ctx->pc = 0x1B8DECu;
label_1b8dec:
    // 0x1b8dec: 0x10000009
    ctx->pc = 0x1B8DECu;
    {
        const bool branch_taken_0x1b8dec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B8DF0u;
        SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 3), 65535));
        if (branch_taken_0x1b8dec) {
            ctx->pc = 0x1B8E14u;
            goto label_1b8e14;
        }
    }
    ctx->pc = 0x1B8DF4u;
label_1b8df4:
    // 0x1b8df4: 0x10000007
    ctx->pc = 0x1B8DF4u;
    {
        const bool branch_taken_0x1b8df4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B8DF8u;
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)5);
        if (branch_taken_0x1b8df4) {
            ctx->pc = 0x1B8E14u;
            goto label_1b8e14;
        }
    }
    ctx->pc = 0x1B8DFCu;
label_1b8dfc:
    // 0x1b8dfc: 0xc06bb20
    ctx->pc = 0x1B8DFCu;
    SET_GPR_U32(ctx, 31, 0x1B8E04u);
    ctx->pc = 0x1B8E00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AEC80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEC80_0x1aec80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8E04u; }
    }
    if (ctx->pc != 0x1B8E04u) { return; }
    ctx->pc = 0x1B8E04u;
    // 0x1b8e04: 0x3042ffff
    ctx->pc = 0x1b8e04u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1b8e08: 0x30420001
    ctx->pc = 0x1b8e08u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x1b8e0c: 0x24420006
    ctx->pc = 0x1b8e0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6));
    // 0x1b8e10: 0x3051ffff
    ctx->pc = 0x1b8e10u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 2), 65535));
label_1b8e14:
    // 0x1b8e14: 0x92620002
    ctx->pc = 0x1b8e14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_1b8e18:
    // 0x1b8e18: 0x14400012
    ctx->pc = 0x1B8E18u;
    {
        const bool branch_taken_0x1b8e18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B8E1Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b8e18) {
            ctx->pc = 0x1B8E64u;
            goto label_1b8e64;
        }
    }
    ctx->pc = 0x1B8E20u;
    // 0x1b8e20: 0xc06e3d0
    ctx->pc = 0x1B8E20u;
    SET_GPR_U32(ctx, 31, 0x1B8E28u);
    ctx->pc = 0x1B8E24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B8F40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8F40_0x1b8f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8E28u; }
    }
    if (ctx->pc != 0x1B8E28u) { return; }
    ctx->pc = 0x1B8E28u;
    // 0x1b8e28: 0x21e3c
    ctx->pc = 0x1b8e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1b8e2c: 0x31e3f
    ctx->pc = 0x1b8e2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1b8e30: 0x3222ffff
    ctx->pc = 0x1b8e30u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 65535));
    // 0x1b8e34: 0x431021
    ctx->pc = 0x1b8e34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b8e38: 0x9263054f
    ctx->pc = 0x1b8e38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1359)));
    // 0x1b8e3c: 0x3052ffff
    ctx->pc = 0x1b8e3cu;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1b8e40: 0x2402002b
    ctx->pc = 0x1b8e40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 43));
    // 0x1b8e44: 0x14620009
    ctx->pc = 0x1B8E44u;
    {
        const bool branch_taken_0x1b8e44 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1B8E48u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 56));
        if (branch_taken_0x1b8e44) {
            ctx->pc = 0x1B8E6Cu;
            goto label_1b8e6c;
        }
    }
    ctx->pc = 0x1B8E4Cu;
    // 0x1b8e4c: 0x92630009
    ctx->pc = 0x1b8e4cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 9)));
    // 0x1b8e50: 0x2402006d
    ctx->pc = 0x1b8e50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 109));
    // 0x1b8e54: 0x14620004
    ctx->pc = 0x1B8E54u;
    {
        const bool branch_taken_0x1b8e54 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1b8e54) {
            ctx->pc = 0x1B8E68u;
            goto label_1b8e68;
        }
    }
    ctx->pc = 0x1B8E5Cu;
    // 0x1b8e5c: 0x10000002
    ctx->pc = 0x1B8E5Cu;
    {
        const bool branch_taken_0x1b8e5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B8E60u;
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)1);
        if (branch_taken_0x1b8e5c) {
            ctx->pc = 0x1B8E68u;
            goto label_1b8e68;
        }
    }
    ctx->pc = 0x1B8E64u;
label_1b8e64:
    // 0x1b8e64: 0x3232ffff
    ctx->pc = 0x1b8e64u;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 17), 65535));
label_1b8e68:
    // 0x1b8e68: 0x26640038
    ctx->pc = 0x1b8e68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 56));
label_1b8e6c:
    // 0x1b8e6c: 0xc15d1a0
    ctx->pc = 0x1B8E6Cu;
    SET_GPR_U32(ctx, 31, 0x1B8E74u);
    ctx->pc = 0x574680u;
    {
        auto targetFn = runtime->lookupFunction(0x574680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8E74u; }
        if (ctx->pc != 0x1B8E74u) { return; }
    }
    ctx->pc = 0x1B8E74u;
    // 0x1b8e74: 0x1200000c
    ctx->pc = 0x1B8E74u;
    {
        const bool branch_taken_0x1b8e74 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B8E78u;
        SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 2), 65535));
        if (branch_taken_0x1b8e74) {
            ctx->pc = 0x1B8EA8u;
            goto label_1b8ea8;
        }
    }
    ctx->pc = 0x1B8E7Cu;
    // 0x1b8e7c: 0x3c050032
    ctx->pc = 0x1b8e7cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x1b8e80: 0x27a40050
    ctx->pc = 0x1b8e80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b8e84: 0xc06450c
    ctx->pc = 0x1B8E84u;
    SET_GPR_U32(ctx, 31, 0x1B8E8Cu);
    ctx->pc = 0x1B8E88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16608));
    ctx->pc = 0x191430u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00191430_0x191430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8E8Cu; }
    }
    if (ctx->pc != 0x1B8E8Cu) { return; }
    ctx->pc = 0x1B8E8Cu;
    // 0x1b8e8c: 0xc7a20080
    ctx->pc = 0x1b8e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b8e90: 0xc7a10084
    ctx->pc = 0x1b8e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b8e94: 0xc7a00088
    ctx->pc = 0x1b8e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b8e98: 0xe7a20090
    ctx->pc = 0x1b8e98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1b8e9c: 0xe7a10094
    ctx->pc = 0x1b8e9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1b8ea0: 0x10000008
    ctx->pc = 0x1B8EA0u;
    {
        const bool branch_taken_0x1b8ea0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B8EA4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        if (branch_taken_0x1b8ea0) {
            ctx->pc = 0x1B8EC4u;
            goto label_1b8ec4;
        }
    }
    ctx->pc = 0x1B8EA8u;
label_1b8ea8:
    // 0x1b8ea8: 0xc6620038
    ctx->pc = 0x1b8ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b8eac: 0x27a20090
    ctx->pc = 0x1b8eacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 144));
    // 0x1b8eb0: 0xc661003c
    ctx->pc = 0x1b8eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b8eb4: 0xc6600040
    ctx->pc = 0x1b8eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b8eb8: 0xe4420000
    ctx->pc = 0x1b8eb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b8ebc: 0xe4410004
    ctx->pc = 0x1b8ebcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b8ec0: 0xe4400008
    ctx->pc = 0x1b8ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1b8ec4:
    // 0x1b8ec4: 0x92660003
    ctx->pc = 0x1b8ec4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x1b8ec8: 0x3250ffff
    ctx->pc = 0x1b8ec8u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 18), 65535));
    // 0x1b8ecc: 0x322a00ff
    ctx->pc = 0x1b8eccu;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 17), 255));
    // 0x1b8ed0: 0x24040003
    ctx->pc = 0x1b8ed0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b8ed4: 0x200282d
    ctx->pc = 0x1b8ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8ed8: 0x27a70090
    ctx->pc = 0x1b8ed8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 144));
    // 0x1b8edc: 0x24080001
    ctx->pc = 0x1b8edcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8ee0: 0x482d
    ctx->pc = 0x1b8ee0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8ee4: 0xc06e4f4
    ctx->pc = 0x1B8EE4u;
    SET_GPR_U32(ctx, 31, 0x1B8EECu);
    ctx->pc = 0x1B8EE8u;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 17), 65535));
    ctx->pc = 0x1B93D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B93D0_0x1b93d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8EECu; }
    }
    if (ctx->pc != 0x1B8EECu) { return; }
    ctx->pc = 0x1B8EECu;
    // 0x1b8eec: 0x121a03
    ctx->pc = 0x1b8eecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 8));
    // 0x1b8ef0: 0x3063ffff
    ctx->pc = 0x1b8ef0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 65535));
    // 0x1b8ef4: 0x10600009
    ctx->pc = 0x1B8EF4u;
    {
        const bool branch_taken_0x1b8ef4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b8ef4) {
            ctx->pc = 0x1B8F1Cu;
            goto label_1b8f1c;
        }
    }
    ctx->pc = 0x1B8EFCu;
    // 0x1b8efc: 0x92660003
    ctx->pc = 0x1b8efcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x1b8f00: 0x306affff
    ctx->pc = 0x1b8f00u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 3), 65535));
    // 0x1b8f04: 0x200282d
    ctx->pc = 0x1b8f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8f08: 0x24040003
    ctx->pc = 0x1b8f08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b8f0c: 0x27a70090
    ctx->pc = 0x1b8f0cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 144));
    // 0x1b8f10: 0x24080001
    ctx->pc = 0x1b8f10u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8f14: 0xc06e4f4
    ctx->pc = 0x1B8F14u;
    SET_GPR_U32(ctx, 31, 0x1B8F1Cu);
    ctx->pc = 0x1B8F18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B93D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B93D0_0x1b93d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8F1Cu; }
    }
    if (ctx->pc != 0x1B8F1Cu) { return; }
    ctx->pc = 0x1B8F1Cu;
label_1b8f1c:
    // 0x1b8f1c: 0xdfbf0040
    ctx->pc = 0x1b8f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b8f20: 0x7bb30030
    ctx->pc = 0x1b8f20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b8f24: 0x7bb20020
    ctx->pc = 0x1b8f24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8f28: 0x7bb10010
    ctx->pc = 0x1b8f28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8f2c: 0x7bb00000
    ctx->pc = 0x1b8f2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8f30: 0x3e00008
    ctx->pc = 0x1B8F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8F34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B8BE0u: goto label_1b8be0;
            case 0x1B8C40u: goto label_1b8c40;
            case 0x1B8C58u: goto label_1b8c58;
            case 0x1B8C5Cu: goto label_1b8c5c;
            case 0x1B8CB4u: goto label_1b8cb4;
            case 0x1B8CD4u: goto label_1b8cd4;
            case 0x1B8CE8u: goto label_1b8ce8;
            case 0x1B8CF0u: goto label_1b8cf0;
            case 0x1B8D2Cu: goto label_1b8d2c;
            case 0x1B8D30u: goto label_1b8d30;
            case 0x1B8DCCu: goto label_1b8dcc;
            case 0x1B8DECu: goto label_1b8dec;
            case 0x1B8DF4u: goto label_1b8df4;
            case 0x1B8DFCu: goto label_1b8dfc;
            case 0x1B8E14u: goto label_1b8e14;
            case 0x1B8E18u: goto label_1b8e18;
            case 0x1B8E64u: goto label_1b8e64;
            case 0x1B8E68u: goto label_1b8e68;
            case 0x1B8E6Cu: goto label_1b8e6c;
            case 0x1B8EA8u: goto label_1b8ea8;
            case 0x1B8EC4u: goto label_1b8ec4;
            case 0x1B8F1Cu: goto label_1b8f1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B8F38u;
    // 0x1b8f38: 0x0
    ctx->pc = 0x1b8f38u;
    // NOP
    // 0x1b8f3c: 0x0
    ctx->pc = 0x1b8f3cu;
    // NOP
}
