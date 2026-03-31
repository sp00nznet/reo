#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00112178
// Address: 0x112178 - 0x112298
void sub_00112178_0x112178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x112178u;

    // 0x112178: 0x8c860000
    ctx->pc = 0x112178u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11217c: 0x2cc20002
    ctx->pc = 0x11217cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 2));
    // 0x112180: 0x14400005
    ctx->pc = 0x112180u;
    {
        const bool branch_taken_0x112180 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x112180) {
            ctx->pc = 0x112198u;
            goto label_112198;
        }
    }
    ctx->pc = 0x112188u;
    // 0x112188: 0x8ca30000
    ctx->pc = 0x112188u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11218c: 0x2c620002
    ctx->pc = 0x11218cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 2));
    // 0x112190: 0x50400003
    ctx->pc = 0x112190u;
    {
        const bool branch_taken_0x112190 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x112190) {
            ctx->pc = 0x112194u;
            SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 6), 4));
            ctx->pc = 0x1121A0u;
            goto label_1121a0;
        }
    }
    ctx->pc = 0x112198u;
label_112198:
    // 0x112198: 0x3e00008
    ctx->pc = 0x112198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11219Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x112198u: goto label_112198;
            case 0x1121A0u: goto label_1121a0;
            case 0x1121C0u: goto label_1121c0;
            case 0x1121E0u: goto label_1121e0;
            case 0x112208u: goto label_112208;
            case 0x112214u: goto label_112214;
            case 0x112228u: goto label_112228;
            case 0x11226Cu: goto label_11226c;
            case 0x112278u: goto label_112278;
            case 0x112284u: goto label_112284;
            case 0x112290u: goto label_112290;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1121A0u;
label_1121a0:
    // 0x1121a0: 0x14400007
    ctx->pc = 0x1121A0u;
    {
        const bool branch_taken_0x1121a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1121A4u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x1121a0) {
            ctx->pc = 0x1121C0u;
            goto label_1121c0;
        }
    }
    ctx->pc = 0x1121A8u;
    // 0x1121a8: 0x5440001a
    ctx->pc = 0x1121A8u;
    {
        const bool branch_taken_0x1121a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1121a8) {
            ctx->pc = 0x1121ACu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->pc = 0x112214u;
            goto label_112214;
        }
    }
    ctx->pc = 0x1121B0u;
    // 0x1121b0: 0x8ca30004
    ctx->pc = 0x1121b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1121b4: 0x8c820004
    ctx->pc = 0x1121b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1121b8: 0x3e00008
    ctx->pc = 0x1121B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1121BCu;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x112198u: goto label_112198;
            case 0x1121A0u: goto label_1121a0;
            case 0x1121C0u: goto label_1121c0;
            case 0x1121E0u: goto label_1121e0;
            case 0x112208u: goto label_112208;
            case 0x112214u: goto label_112214;
            case 0x112228u: goto label_112228;
            case 0x11226Cu: goto label_11226c;
            case 0x112278u: goto label_112278;
            case 0x112284u: goto label_112284;
            case 0x112290u: goto label_112290;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1121C0u;
label_1121c0:
    // 0x1121c0: 0x54400007
    ctx->pc = 0x1121C0u;
    {
        const bool branch_taken_0x1121c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1121c0) {
            ctx->pc = 0x1121C4u;
            SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 6), 2));
            ctx->pc = 0x1121E0u;
            goto label_1121e0;
        }
    }
    ctx->pc = 0x1121C8u;
    // 0x1121c8: 0x8ca40004
    ctx->pc = 0x1121c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1121cc: 0x2403ffff
    ctx->pc = 0x1121ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1121d0: 0x24020001
    ctx->pc = 0x1121d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1121d4: 0x3e00008
    ctx->pc = 0x1121D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1121D8u;
        if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x112198u: goto label_112198;
            case 0x1121A0u: goto label_1121a0;
            case 0x1121C0u: goto label_1121c0;
            case 0x1121E0u: goto label_1121e0;
            case 0x112208u: goto label_112208;
            case 0x112214u: goto label_112214;
            case 0x112228u: goto label_112228;
            case 0x11226Cu: goto label_11226c;
            case 0x112278u: goto label_112278;
            case 0x112284u: goto label_112284;
            case 0x112290u: goto label_112290;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1121DCu;
    // 0x1121dc: 0x0
    ctx->pc = 0x1121dcu;
    // NOP
label_1121e0:
    // 0x1121e0: 0x54400009
    ctx->pc = 0x1121E0u;
    {
        const bool branch_taken_0x1121e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1121e0) {
            ctx->pc = 0x1121E4u;
            SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 2));
            ctx->pc = 0x112208u;
            goto label_112208;
        }
    }
    ctx->pc = 0x1121E8u;
    // 0x1121e8: 0x38630002
    ctx->pc = 0x1121e8u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 2));
    // 0x1121ec: 0x10600028
    ctx->pc = 0x1121ECu;
    {
        const bool branch_taken_0x1121ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1121F0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1121ec) {
            ctx->pc = 0x112290u;
            goto label_112290;
        }
    }
    ctx->pc = 0x1121F4u;
    // 0x1121f4: 0x8ca40004
    ctx->pc = 0x1121f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1121f8: 0x24030001
    ctx->pc = 0x1121f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1121fc: 0x2402ffff
    ctx->pc = 0x1121fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x112200: 0x3e00008
    ctx->pc = 0x112200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112204u;
        if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x112198u: goto label_112198;
            case 0x1121A0u: goto label_1121a0;
            case 0x1121C0u: goto label_1121c0;
            case 0x1121E0u: goto label_1121e0;
            case 0x112208u: goto label_112208;
            case 0x112214u: goto label_112214;
            case 0x112228u: goto label_112228;
            case 0x11226Cu: goto label_11226c;
            case 0x112278u: goto label_112278;
            case 0x112284u: goto label_112284;
            case 0x112290u: goto label_112290;
            default: break;
        }
        return;
    }
    ctx->pc = 0x112208u;
label_112208:
    // 0x112208: 0x54400007
    ctx->pc = 0x112208u;
    {
        const bool branch_taken_0x112208 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x112208) {
            ctx->pc = 0x11220Cu;
            SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->pc = 0x112228u;
            goto label_112228;
        }
    }
    ctx->pc = 0x112210u;
    // 0x112210: 0x8c840004
    ctx->pc = 0x112210u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_112214:
    // 0x112214: 0x24030001
    ctx->pc = 0x112214u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x112218: 0x2402ffff
    ctx->pc = 0x112218u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11221c: 0x3e00008
    ctx->pc = 0x11221Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112220u;
        if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x112198u: goto label_112198;
            case 0x1121A0u: goto label_1121a0;
            case 0x1121C0u: goto label_1121c0;
            case 0x1121E0u: goto label_1121e0;
            case 0x112208u: goto label_112208;
            case 0x112214u: goto label_112214;
            case 0x112228u: goto label_112228;
            case 0x11226Cu: goto label_11226c;
            case 0x112278u: goto label_112278;
            case 0x112284u: goto label_112284;
            case 0x112290u: goto label_112290;
            default: break;
        }
        return;
    }
    ctx->pc = 0x112224u;
    // 0x112224: 0x0
    ctx->pc = 0x112224u;
    // NOP
label_112228:
    // 0x112228: 0x8ca20004
    ctx->pc = 0x112228u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x11222c: 0x14e2000f
    ctx->pc = 0x11222Cu;
    {
        const bool branch_taken_0x11222c = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        ctx->pc = 0x112230u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x11222c) {
            ctx->pc = 0x11226Cu;
            goto label_11226c;
        }
    }
    ctx->pc = 0x112234u;
    // 0x112234: 0x8c860008
    ctx->pc = 0x112234u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x112238: 0x8ca30008
    ctx->pc = 0x112238u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x11223c: 0x66102a
    ctx->pc = 0x11223cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 6)));
    // 0x112240: 0x5440000a
    ctx->pc = 0x112240u;
    {
        const bool branch_taken_0x112240 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x112240) {
            ctx->pc = 0x112244u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x11226Cu;
            goto label_11226c;
        }
    }
    ctx->pc = 0x112248u;
    // 0x112248: 0xc3102a
    ctx->pc = 0x112248u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 3)));
    // 0x11224c: 0x1440000d
    ctx->pc = 0x11224Cu;
    {
        const bool branch_taken_0x11224c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x112250u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x11224c) {
            ctx->pc = 0x112284u;
            goto label_112284;
        }
    }
    ctx->pc = 0x112254u;
    // 0x112254: 0xdc830010
    ctx->pc = 0x112254u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x112258: 0xdca40010
    ctx->pc = 0x112258u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x11225c: 0x83102b
    ctx->pc = 0x11225cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x112260: 0x50400005
    ctx->pc = 0x112260u;
    {
        const bool branch_taken_0x112260 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x112260) {
            ctx->pc = 0x112264u;
            SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
            ctx->pc = 0x112278u;
            goto label_112278;
        }
    }
    ctx->pc = 0x112268u;
    // 0x112268: 0x24030001
    ctx->pc = 0x112268u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_11226c:
    // 0x11226c: 0x2402ffff
    ctx->pc = 0x11226cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x112270: 0x3e00008
    ctx->pc = 0x112270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112274u;
        if (GPR_U32(ctx, 7) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x112198u: goto label_112198;
            case 0x1121A0u: goto label_1121a0;
            case 0x1121C0u: goto label_1121c0;
            case 0x1121E0u: goto label_1121e0;
            case 0x112208u: goto label_112208;
            case 0x112214u: goto label_112214;
            case 0x112228u: goto label_112228;
            case 0x11226Cu: goto label_11226c;
            case 0x112278u: goto label_112278;
            case 0x112284u: goto label_112284;
            case 0x112290u: goto label_112290;
            default: break;
        }
        return;
    }
    ctx->pc = 0x112278u;
label_112278:
    // 0x112278: 0x50400005
    ctx->pc = 0x112278u;
    {
        const bool branch_taken_0x112278 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x112278) {
            ctx->pc = 0x11227Cu;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x112290u;
            goto label_112290;
        }
    }
    ctx->pc = 0x112280u;
    // 0x112280: 0x2403ffff
    ctx->pc = 0x112280u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_112284:
    // 0x112284: 0x24020001
    ctx->pc = 0x112284u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x112288: 0x3e00008
    ctx->pc = 0x112288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11228Cu;
        if (GPR_U32(ctx, 7) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x112198u: goto label_112198;
            case 0x1121A0u: goto label_1121a0;
            case 0x1121C0u: goto label_1121c0;
            case 0x1121E0u: goto label_1121e0;
            case 0x112208u: goto label_112208;
            case 0x112214u: goto label_112214;
            case 0x112228u: goto label_112228;
            case 0x11226Cu: goto label_11226c;
            case 0x112278u: goto label_112278;
            case 0x112284u: goto label_112284;
            case 0x112290u: goto label_112290;
            default: break;
        }
        return;
    }
    ctx->pc = 0x112290u;
label_112290:
    // 0x112290: 0x3e00008
    ctx->pc = 0x112290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x112198u: goto label_112198;
            case 0x1121A0u: goto label_1121a0;
            case 0x1121C0u: goto label_1121c0;
            case 0x1121E0u: goto label_1121e0;
            case 0x112208u: goto label_112208;
            case 0x112214u: goto label_112214;
            case 0x112228u: goto label_112228;
            case 0x11226Cu: goto label_11226c;
            case 0x112278u: goto label_112278;
            case 0x112284u: goto label_112284;
            case 0x112290u: goto label_112290;
            default: break;
        }
        return;
    }
    ctx->pc = 0x112298u;
}
