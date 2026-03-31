#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00145C40
// Address: 0x145c40 - 0x145d60
void sub_00145C40_0x145c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x145c40u;

    // 0x145c40: 0x27bdff60
    ctx->pc = 0x145c40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x145c44: 0xffb60080
    ctx->pc = 0x145c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x145c48: 0xffb50070
    ctx->pc = 0x145c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x145c4c: 0x24160005
    ctx->pc = 0x145c4cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 5));
    // 0x145c50: 0xffb40060
    ctx->pc = 0x145c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x145c54: 0x241501b3
    ctx->pc = 0x145c54u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 435));
    // 0x145c58: 0xffb30050
    ctx->pc = 0x145c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x145c5c: 0x24140100
    ctx->pc = 0x145c5cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 256));
    // 0x145c60: 0xffb20040
    ctx->pc = 0x145c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x145c64: 0x241301b7
    ctx->pc = 0x145c64u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 439));
    // 0x145c68: 0xffb10030
    ctx->pc = 0x145c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x145c6c: 0x241201b8
    ctx->pc = 0x145c6cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 440));
    // 0x145c70: 0xffb00020
    ctx->pc = 0x145c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x145c74: 0x2411ffff
    ctx->pc = 0x145c74u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x145c78: 0xffbf0090
    ctx->pc = 0x145c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x145c7c: 0x80802d
    ctx->pc = 0x145c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145c80: 0x8e0210a0
    ctx->pc = 0x145c80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4256)));
    // 0x145c84: 0x0
    ctx->pc = 0x145c84u;
    // NOP
label_145c88:
    // 0x145c88: 0x1440002a
    ctx->pc = 0x145C88u;
    {
        const bool branch_taken_0x145c88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x145C8Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x145c88) {
            ctx->pc = 0x145D34u;
            goto label_145d34;
        }
    }
    ctx->pc = 0x145C90u;
    // 0x145c90: 0xc0516d6
    ctx->pc = 0x145C90u;
    SET_GPR_U32(ctx, 31, 0x145C98u);
    ctx->pc = 0x145C94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00145B58_0x145b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145C98u; }
    }
    if (ctx->pc != 0x145C98u) { return; }
    ctx->pc = 0x145C98u;
    // 0x145c98: 0x200202d
    ctx->pc = 0x145c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145c9c: 0xc05167a
    ctx->pc = 0x145C9Cu;
    SET_GPR_U32(ctx, 31, 0x145CA4u);
    ctx->pc = 0x145CA0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x1459E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001459E8_0x1459e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145CA4u; }
    }
    if (ctx->pc != 0x145CA4u) { return; }
    ctx->pc = 0x145CA4u;
    // 0x145ca4: 0x40182d
    ctx->pc = 0x145ca4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145ca8: 0x1075000d
    ctx->pc = 0x145CA8u;
    {
        const bool branch_taken_0x145ca8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 21));
        ctx->pc = 0x145CACu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 436));
        if (branch_taken_0x145ca8) {
            ctx->pc = 0x145CE0u;
            goto label_145ce0;
        }
    }
    ctx->pc = 0x145CB0u;
    // 0x145cb0: 0x10400005
    ctx->pc = 0x145CB0u;
    {
        const bool branch_taken_0x145cb0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x145cb0) {
            ctx->pc = 0x145CC8u;
            goto label_145cc8;
        }
    }
    ctx->pc = 0x145CB8u;
    // 0x145cb8: 0x10740011
    ctx->pc = 0x145CB8u;
    {
        const bool branch_taken_0x145cb8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 20));
        if (branch_taken_0x145cb8) {
            ctx->pc = 0x145D00u;
            goto label_145d00;
        }
    }
    ctx->pc = 0x145CC0u;
    // 0x145cc0: 0x1000fff1
    ctx->pc = 0x145CC0u;
    {
        const bool branch_taken_0x145cc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x145CC4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4256)));
        if (branch_taken_0x145cc0) {
            ctx->pc = 0x145C88u;
            goto label_145c88;
        }
    }
    ctx->pc = 0x145CC8u;
label_145cc8:
    // 0x145cc8: 0x1073001a
    ctx->pc = 0x145CC8u;
    {
        const bool branch_taken_0x145cc8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 19));
        ctx->pc = 0x145CCCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x145cc8) {
            ctx->pc = 0x145D34u;
            goto label_145d34;
        }
    }
    ctx->pc = 0x145CD0u;
    // 0x145cd0: 0x10720007
    ctx->pc = 0x145CD0u;
    {
        const bool branch_taken_0x145cd0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 18));
        if (branch_taken_0x145cd0) {
            ctx->pc = 0x145CF0u;
            goto label_145cf0;
        }
    }
    ctx->pc = 0x145CD8u;
    // 0x145cd8: 0x1000ffeb
    ctx->pc = 0x145CD8u;
    {
        const bool branch_taken_0x145cd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x145CDCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4256)));
        if (branch_taken_0x145cd8) {
            ctx->pc = 0x145C88u;
            goto label_145c88;
        }
    }
    ctx->pc = 0x145CE0u;
label_145ce0:
    // 0x145ce0: 0xc05227a
    ctx->pc = 0x145CE0u;
    SET_GPR_U32(ctx, 31, 0x145CE8u);
    ctx->pc = 0x145CE4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1489E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001489E8_0x1489e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145CE8u; }
    }
    if (ctx->pc != 0x145CE8u) { return; }
    ctx->pc = 0x145CE8u;
    // 0x145ce8: 0x1000ffe7
    ctx->pc = 0x145CE8u;
    {
        const bool branch_taken_0x145ce8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x145CECu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4256)));
        if (branch_taken_0x145ce8) {
            ctx->pc = 0x145C88u;
            goto label_145c88;
        }
    }
    ctx->pc = 0x145CF0u;
label_145cf0:
    // 0x145cf0: 0xc051880
    ctx->pc = 0x145CF0u;
    SET_GPR_U32(ctx, 31, 0x145CF8u);
    ctx->pc = 0x145CF4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x146200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00146200_0x146200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145CF8u; }
    }
    if (ctx->pc != 0x145CF8u) { return; }
    ctx->pc = 0x145CF8u;
    // 0x145cf8: 0x1000ffe3
    ctx->pc = 0x145CF8u;
    {
        const bool branch_taken_0x145cf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x145CFCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4256)));
        if (branch_taken_0x145cf8) {
            ctx->pc = 0x145C88u;
            goto label_145c88;
        }
    }
    ctx->pc = 0x145D00u;
label_145d00:
    // 0x145d00: 0xc051758
    ctx->pc = 0x145D00u;
    SET_GPR_U32(ctx, 31, 0x145D08u);
    ctx->pc = 0x145D04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145D60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00145D60_0x145d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D08u; }
    }
    if (ctx->pc != 0x145D08u) { return; }
    ctx->pc = 0x145D08u;
    // 0x145d08: 0x8e040870
    ctx->pc = 0x145d08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2160)));
    // 0x145d0c: 0x3a0282d
    ctx->pc = 0x145d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145d10: 0xafb60000
    ctx->pc = 0x145d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    // 0x145d14: 0xffb10010
    ctx->pc = 0x145d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x145d18: 0xc051fda
    ctx->pc = 0x145D18u;
    SET_GPR_U32(ctx, 31, 0x145D20u);
    ctx->pc = 0x145D1Cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    ctx->pc = 0x147F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00147F68_0x147f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D20u; }
    }
    if (ctx->pc != 0x145D20u) { return; }
    ctx->pc = 0x145D20u;
    // 0x145d20: 0xdfa20010
    ctx->pc = 0x145d20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145d24: 0xdfa30008
    ctx->pc = 0x145d24u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x145d28: 0xfe020848
    ctx->pc = 0x145d28u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2120), GPR_U64(ctx, 2));
    // 0x145d2c: 0xfe030840
    ctx->pc = 0x145d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2112), GPR_U64(ctx, 3));
    // 0x145d30: 0x8e020168
    ctx->pc = 0x145d30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 360)));
label_145d34:
    // 0x145d34: 0xdfbf0090
    ctx->pc = 0x145d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x145d38: 0xdfb60080
    ctx->pc = 0x145d38u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x145d3c: 0xdfb50070
    ctx->pc = 0x145d3cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x145d40: 0xdfb40060
    ctx->pc = 0x145d40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x145d44: 0xdfb30050
    ctx->pc = 0x145d44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x145d48: 0xdfb20040
    ctx->pc = 0x145d48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x145d4c: 0xdfb10030
    ctx->pc = 0x145d4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x145d50: 0xdfb00020
    ctx->pc = 0x145d50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145d54: 0x3e00008
    ctx->pc = 0x145D54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145D58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x145C88u: goto label_145c88;
            case 0x145CC8u: goto label_145cc8;
            case 0x145CE0u: goto label_145ce0;
            case 0x145CF0u: goto label_145cf0;
            case 0x145D00u: goto label_145d00;
            case 0x145D34u: goto label_145d34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x145D5Cu;
    // 0x145d5c: 0x0
    ctx->pc = 0x145d5cu;
    // NOP
}
