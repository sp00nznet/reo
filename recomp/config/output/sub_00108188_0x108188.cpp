#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00108188
// Address: 0x108188 - 0x108248
void sub_00108188_0x108188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x108188u;

    // 0x108188: 0x8c850000
    ctx->pc = 0x108188u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10818c: 0x30a20007
    ctx->pc = 0x10818cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 7));
    // 0x108190: 0x1040000d
    ctx->pc = 0x108190u;
    {
        const bool branch_taken_0x108190 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x108194u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x108190) {
            ctx->pc = 0x1081C8u;
            goto label_1081c8;
        }
    }
    ctx->pc = 0x108198u;
    // 0x108198: 0x14600028
    ctx->pc = 0x108198u;
    {
        const bool branch_taken_0x108198 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x10819Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x108198) {
            ctx->pc = 0x10823Cu;
            goto label_10823c;
        }
    }
    ctx->pc = 0x1081A0u;
    // 0x1081a0: 0x30a20002
    ctx->pc = 0x1081a0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 2));
    // 0x1081a4: 0x10400004
    ctx->pc = 0x1081A4u;
    {
        const bool branch_taken_0x1081a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1081A8u;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x1081a4) {
            ctx->pc = 0x1081B8u;
            goto label_1081b8;
        }
    }
    ctx->pc = 0x1081ACu;
    // 0x1081ac: 0x24020001
    ctx->pc = 0x1081acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1081b0: 0x3e00008
    ctx->pc = 0x1081B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1081B4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1081B8u: goto label_1081b8;
            case 0x1081C8u: goto label_1081c8;
            case 0x1081DCu: goto label_1081dc;
            case 0x1081F4u: goto label_1081f4;
            case 0x108208u: goto label_108208;
            case 0x10821Cu: goto label_10821c;
            case 0x108238u: goto label_108238;
            case 0x10823Cu: goto label_10823c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1081B8u;
label_1081b8:
    // 0x1081b8: 0x51882
    ctx->pc = 0x1081b8u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 5), 2));
    // 0x1081bc: 0x24020002
    ctx->pc = 0x1081bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1081c0: 0x3e00008
    ctx->pc = 0x1081C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1081C4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1081B8u: goto label_1081b8;
            case 0x1081C8u: goto label_1081c8;
            case 0x1081DCu: goto label_1081dc;
            case 0x1081F4u: goto label_1081f4;
            case 0x108208u: goto label_108208;
            case 0x10821Cu: goto label_10821c;
            case 0x108238u: goto label_108238;
            case 0x10823Cu: goto label_10823c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1081C8u;
label_1081c8:
    // 0x1081c8: 0x30a2ffff
    ctx->pc = 0x1081c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 65535));
    // 0x1081cc: 0x14400003
    ctx->pc = 0x1081CCu;
    {
        const bool branch_taken_0x1081cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1081D0u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1081cc) {
            ctx->pc = 0x1081DCu;
            goto label_1081dc;
        }
    }
    ctx->pc = 0x1081D4u;
    // 0x1081d4: 0x24030010
    ctx->pc = 0x1081d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1081d8: 0x52c02
    ctx->pc = 0x1081d8u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 16));
label_1081dc:
    // 0x1081dc: 0x30a200ff
    ctx->pc = 0x1081dcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 255));
    // 0x1081e0: 0x14400004
    ctx->pc = 0x1081E0u;
    {
        const bool branch_taken_0x1081e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1081E4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 15));
        if (branch_taken_0x1081e0) {
            ctx->pc = 0x1081F4u;
            goto label_1081f4;
        }
    }
    ctx->pc = 0x1081E8u;
    // 0x1081e8: 0x24630008
    ctx->pc = 0x1081e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1081ec: 0x52a02
    ctx->pc = 0x1081ecu;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 8));
    // 0x1081f0: 0x30a2000f
    ctx->pc = 0x1081f0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 15));
label_1081f4:
    // 0x1081f4: 0x14400004
    ctx->pc = 0x1081F4u;
    {
        const bool branch_taken_0x1081f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1081F8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 3));
        if (branch_taken_0x1081f4) {
            ctx->pc = 0x108208u;
            goto label_108208;
        }
    }
    ctx->pc = 0x1081FCu;
    // 0x1081fc: 0x24630004
    ctx->pc = 0x1081fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x108200: 0x52902
    ctx->pc = 0x108200u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 4));
    // 0x108204: 0x30a20003
    ctx->pc = 0x108204u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 3));
label_108208:
    // 0x108208: 0x14400004
    ctx->pc = 0x108208u;
    {
        const bool branch_taken_0x108208 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10820Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x108208) {
            ctx->pc = 0x10821Cu;
            goto label_10821c;
        }
    }
    ctx->pc = 0x108210u;
    // 0x108210: 0x24630002
    ctx->pc = 0x108210u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x108214: 0x52882
    ctx->pc = 0x108214u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 2));
    // 0x108218: 0x30a20001
    ctx->pc = 0x108218u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 1));
label_10821c:
    // 0x10821c: 0x54400006
    ctx->pc = 0x10821Cu;
    {
        const bool branch_taken_0x10821c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x10821c) {
            ctx->pc = 0x108220u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
            ctx->pc = 0x108238u;
            goto label_108238;
        }
    }
    ctx->pc = 0x108224u;
    // 0x108224: 0x52842
    ctx->pc = 0x108224u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 1));
    // 0x108228: 0x24630001
    ctx->pc = 0x108228u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x10822c: 0x10a00003
    ctx->pc = 0x10822Cu;
    {
        const bool branch_taken_0x10822c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x108230u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x10822c) {
            ctx->pc = 0x10823Cu;
            goto label_10823c;
        }
    }
    ctx->pc = 0x108234u;
    // 0x108234: 0xac850000
    ctx->pc = 0x108234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_108238:
    // 0x108238: 0x60102d
    ctx->pc = 0x108238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_10823c:
    // 0x10823c: 0x3e00008
    ctx->pc = 0x10823Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1081B8u: goto label_1081b8;
            case 0x1081C8u: goto label_1081c8;
            case 0x1081DCu: goto label_1081dc;
            case 0x1081F4u: goto label_1081f4;
            case 0x108208u: goto label_108208;
            case 0x10821Cu: goto label_10821c;
            case 0x108238u: goto label_108238;
            case 0x10823Cu: goto label_10823c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x108244u;
    // 0x108244: 0x0
    ctx->pc = 0x108244u;
    // NOP
}
