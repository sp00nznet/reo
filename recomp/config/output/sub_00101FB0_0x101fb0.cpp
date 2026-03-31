#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00101FB0
// Address: 0x101fb0 - 0x102298
void sub_00101FB0_0x101fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x101fb0u;

    // 0x101fb0: 0x4842d000
    ctx->pc = 0x101fb0u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->vu0_p);
    // 0x101fb4: 0x3e00008
    ctx->pc = 0x101FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101FB8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102118u: goto label_102118;
            case 0x102280u: goto label_102280;
            default: break;
        }
        return;
    }
    ctx->pc = 0x101FBCu;
    // 0x101fbc: 0x0
    ctx->pc = 0x101fbcu;
    // NOP
    // 0x101fc0: 0x27bdffd0
    ctx->pc = 0x101fc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x101fc4: 0xffb00000
    ctx->pc = 0x101fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x101fc8: 0xffb10010
    ctx->pc = 0x101fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x101fcc: 0x80802d
    ctx->pc = 0x101fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101fd0: 0xffbf0020
    ctx->pc = 0x101fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x101fd4: 0xc040780
    ctx->pc = 0x101FD4u;
    SET_GPR_U32(ctx, 31, 0x101FDCu);
    ctx->pc = 0x101FD8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x101E00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00101E00_0x101e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101FDCu; }
    }
    if (ctx->pc != 0x101FDCu) { return; }
    ctx->pc = 0x101FDCu;
    // 0x101fdc: 0x1440004e
    ctx->pc = 0x101FDCu;
    {
        const bool branch_taken_0x101fdc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x101FE0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x101fdc) {
            ctx->pc = 0x102118u;
            goto label_102118;
        }
    }
    ctx->pc = 0x101FE4u;
    // 0x101fe4: 0xfa200000
    ctx->pc = 0x101fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x101fe8: 0xfa210010
    ctx->pc = 0x101fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x101fec: 0xfa220020
    ctx->pc = 0x101fecu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x101ff0: 0xfa230030
    ctx->pc = 0x101ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x101ff4: 0xfa240040
    ctx->pc = 0x101ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x101ff8: 0xfa250050
    ctx->pc = 0x101ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x101ffc: 0xfa260060
    ctx->pc = 0x101ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 96), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x102000: 0xfa270070
    ctx->pc = 0x102000u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x102004: 0xfa280080
    ctx->pc = 0x102004u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 128), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x102008: 0xfa290090
    ctx->pc = 0x102008u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x10200c: 0xfa2a00a0
    ctx->pc = 0x10200cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 160), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x102010: 0xfa2b00b0
    ctx->pc = 0x102010u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 176), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x102014: 0xfa2c00c0
    ctx->pc = 0x102014u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 192), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x102018: 0xfa2d00d0
    ctx->pc = 0x102018u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 208), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x10201c: 0xfa2e00e0
    ctx->pc = 0x10201cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 224), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x102020: 0xfa2f00f0
    ctx->pc = 0x102020u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 240), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x102024: 0xfa300100
    ctx->pc = 0x102024u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 256), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x102028: 0xfa310110
    ctx->pc = 0x102028u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 272), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x10202c: 0xfa320120
    ctx->pc = 0x10202cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 288), _mm_castps_si128(ctx->vu0_vf[18]));
    // 0x102030: 0xfa330130
    ctx->pc = 0x102030u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 304), _mm_castps_si128(ctx->vu0_vf[19]));
    // 0x102034: 0xfa340140
    ctx->pc = 0x102034u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 320), _mm_castps_si128(ctx->vu0_vf[20]));
    // 0x102038: 0xfa350150
    ctx->pc = 0x102038u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 336), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x10203c: 0xfa360160
    ctx->pc = 0x10203cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 352), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x102040: 0xfa370170
    ctx->pc = 0x102040u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 368), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x102044: 0xfa380180
    ctx->pc = 0x102044u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 384), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x102048: 0xfa390190
    ctx->pc = 0x102048u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 400), _mm_castps_si128(ctx->vu0_vf[25]));
    // 0x10204c: 0xfa3a01a0
    ctx->pc = 0x10204cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 416), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x102050: 0xfa3b01b0
    ctx->pc = 0x102050u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 432), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x102054: 0xfa3c01c0
    ctx->pc = 0x102054u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 448), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x102058: 0xfa3d01d0
    ctx->pc = 0x102058u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 464), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x10205c: 0xfa3e01e0
    ctx->pc = 0x10205cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 480), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x102060: 0xfa3f01f0
    ctx->pc = 0x102060u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 496), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x102064: 0x48428000
    ctx->pc = 0x102064u;
    SET_GPR_U32(ctx, 2, ctx->vu0_vpu_stat4);
    // 0x102068: 0xae020200
    ctx->pc = 0x102068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
    // 0x10206c: 0x48428800
    ctx->pc = 0x10206cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_cmsar3);
    // 0x102070: 0xae020204
    ctx->pc = 0x102070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 2));
    // 0x102074: 0x48429000
    ctx->pc = 0x102074u;
    SET_GPR_U32(ctx, 2, ctx->vu0_fbrst4);
    // 0x102078: 0xae020208
    ctx->pc = 0x102078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 2));
    // 0x10207c: 0x4842a000
    ctx->pc = 0x10207cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_acc));
    // 0x102080: 0xae02020c
    ctx->pc = 0x102080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 2));
    // 0x102084: 0x4842a800
    ctx->pc = 0x102084u;
    SET_GPR_U32(ctx, 2, ctx->vu0_info);
    // 0x102088: 0xae020210
    ctx->pc = 0x102088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 2));
    // 0x10208c: 0x4842b000
    ctx->pc = 0x10208cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_clip_flags2);
    // 0x102090: 0xae020214
    ctx->pc = 0x102090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x102094: 0x48420000
    ctx->pc = 0x102094u;
    SET_GPR_U32(ctx, 2, ctx->vu0_status);
    // 0x102098: 0xa6020218
    ctx->pc = 0x102098u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 536), (uint16_t)GPR_U32(ctx, 2));
    // 0x10209c: 0x48420800
    ctx->pc = 0x10209cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x1020a0: 0xa602021a
    ctx->pc = 0x1020a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 538), (uint16_t)GPR_U32(ctx, 2));
    // 0x1020a4: 0x48421000
    ctx->pc = 0x1020a4u;
    SET_GPR_U32(ctx, 2, ctx->vu0_vpu_stat);
    // 0x1020a8: 0xa602021c
    ctx->pc = 0x1020a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 540), (uint16_t)GPR_U32(ctx, 2));
    // 0x1020ac: 0x48421800
    ctx->pc = 0x1020acu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_r));
    // 0x1020b0: 0xa602021e
    ctx->pc = 0x1020b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 542), (uint16_t)GPR_U32(ctx, 2));
    // 0x1020b4: 0x48422000
    ctx->pc = 0x1020b4u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->vu0_i);
    // 0x1020b8: 0xa6020220
    ctx->pc = 0x1020b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 2));
    // 0x1020bc: 0x48422800
    ctx->pc = 0x1020bcu;
    SET_GPR_U32(ctx, 2, ctx->vu0_clip_flags);
    // 0x1020c0: 0xa6020222
    ctx->pc = 0x1020c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 546), (uint16_t)GPR_U32(ctx, 2));
    // 0x1020c4: 0x48423000
    ctx->pc = 0x1020c4u;
    SET_GPR_U32(ctx, 2, ctx->vu0_tpc);
    // 0x1020c8: 0xa6020224
    ctx->pc = 0x1020c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 548), (uint16_t)GPR_U32(ctx, 2));
    // 0x1020cc: 0x48423800
    ctx->pc = 0x1020ccu;
    SET_GPR_U32(ctx, 2, ctx->vu0_cmsar0);
    // 0x1020d0: 0xa6020226
    ctx->pc = 0x1020d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 550), (uint16_t)GPR_U32(ctx, 2));
    // 0x1020d4: 0x48424000
    ctx->pc = 0x1020d4u;
    SET_GPR_U32(ctx, 2, ctx->vu0_fbrst);
    // 0x1020d8: 0xa6020228
    ctx->pc = 0x1020d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 552), (uint16_t)GPR_U32(ctx, 2));
    // 0x1020dc: 0x48424800
    ctx->pc = 0x1020dcu;
    SET_GPR_U32(ctx, 2, ctx->vu0_vpu_stat2);
    // 0x1020e0: 0xa602022a
    ctx->pc = 0x1020e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 554), (uint16_t)GPR_U32(ctx, 2));
    // 0x1020e4: 0x48425000
    ctx->pc = 0x1020e4u;
    SET_GPR_U32(ctx, 2, ctx->vu0_tpc2);
    // 0x1020e8: 0xa602022c
    ctx->pc = 0x1020e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 556), (uint16_t)GPR_U32(ctx, 2));
    // 0x1020ec: 0x48425800
    ctx->pc = 0x1020ecu;
    SET_GPR_U32(ctx, 2, ctx->vu0_cmsar1);
    // 0x1020f0: 0xa602022e
    ctx->pc = 0x1020f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 558), (uint16_t)GPR_U32(ctx, 2));
    // 0x1020f4: 0x48426000
    ctx->pc = 0x1020f4u;
    SET_GPR_U32(ctx, 2, ctx->vu0_fbrst2);
    // 0x1020f8: 0xa6020230
    ctx->pc = 0x1020f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 560), (uint16_t)GPR_U32(ctx, 2));
    // 0x1020fc: 0x48426800
    ctx->pc = 0x1020fcu;
    SET_GPR_U32(ctx, 2, ctx->vu0_vpu_stat3);
    // 0x102100: 0xa6020232
    ctx->pc = 0x102100u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 562), (uint16_t)GPR_U32(ctx, 2));
    // 0x102104: 0x48427000
    ctx->pc = 0x102104u;
    SET_GPR_U32(ctx, 2, ctx->vu0_cmsar2);
    // 0x102108: 0xa6020234
    ctx->pc = 0x102108u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 564), (uint16_t)GPR_U32(ctx, 2));
    // 0x10210c: 0x48427800
    ctx->pc = 0x10210cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_fbrst3);
    // 0x102110: 0xa6020236
    ctx->pc = 0x102110u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 566), (uint16_t)GPR_U32(ctx, 2));
    // 0x102114: 0x24020001
    ctx->pc = 0x102114u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_102118:
    // 0x102118: 0xdfbf0020
    ctx->pc = 0x102118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10211c: 0xdfb10010
    ctx->pc = 0x10211cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102120: 0xdfb00000
    ctx->pc = 0x102120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102124: 0x3e00008
    ctx->pc = 0x102124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102128u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102118u: goto label_102118;
            case 0x102280u: goto label_102280;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10212Cu;
    // 0x10212c: 0x0
    ctx->pc = 0x10212cu;
    // NOP
    // 0x102130: 0x27bdffd0
    ctx->pc = 0x102130u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x102134: 0xffb00000
    ctx->pc = 0x102134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x102138: 0xffb10010
    ctx->pc = 0x102138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10213c: 0x80802d
    ctx->pc = 0x10213cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102140: 0xffbf0020
    ctx->pc = 0x102140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x102144: 0xc040780
    ctx->pc = 0x102144u;
    SET_GPR_U32(ctx, 31, 0x10214Cu);
    ctx->pc = 0x102148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x101E00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00101E00_0x101e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10214Cu; }
    }
    if (ctx->pc != 0x10214Cu) { return; }
    ctx->pc = 0x10214Cu;
    // 0x10214c: 0x1440004c
    ctx->pc = 0x10214Cu;
    {
        const bool branch_taken_0x10214c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x102150u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10214c) {
            ctx->pc = 0x102280u;
            goto label_102280;
        }
    }
    ctx->pc = 0x102154u;
    // 0x102154: 0xda200000
    ctx->pc = 0x102154u;
    ctx->vu0_vf[0] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x102158: 0xda210010
    ctx->pc = 0x102158u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x10215c: 0xda220020
    ctx->pc = 0x10215cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x102160: 0xda230030
    ctx->pc = 0x102160u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x102164: 0xda240040
    ctx->pc = 0x102164u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x102168: 0xda250050
    ctx->pc = 0x102168u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x10216c: 0xda260060
    ctx->pc = 0x10216cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x102170: 0xda270070
    ctx->pc = 0x102170u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x102174: 0xda280080
    ctx->pc = 0x102174u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x102178: 0xda290090
    ctx->pc = 0x102178u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x10217c: 0xda2a00a0
    ctx->pc = 0x10217cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x102180: 0xda2b00b0
    ctx->pc = 0x102180u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x102184: 0xda2c00c0
    ctx->pc = 0x102184u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x102188: 0xda2d00d0
    ctx->pc = 0x102188u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x10218c: 0xda2e00e0
    ctx->pc = 0x10218cu;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x102190: 0xda2f00f0
    ctx->pc = 0x102190u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x102194: 0xda300100
    ctx->pc = 0x102194u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x102198: 0xda310110
    ctx->pc = 0x102198u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x10219c: 0xda320120
    ctx->pc = 0x10219cu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x1021a0: 0xda330130
    ctx->pc = 0x1021a0u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x1021a4: 0xda340140
    ctx->pc = 0x1021a4u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x1021a8: 0xda350150
    ctx->pc = 0x1021a8u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1021ac: 0xda360160
    ctx->pc = 0x1021acu;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x1021b0: 0xda370170
    ctx->pc = 0x1021b0u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 368)));
    // 0x1021b4: 0xda380180
    ctx->pc = 0x1021b4u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1021b8: 0xda390190
    ctx->pc = 0x1021b8u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 400)));
    // 0x1021bc: 0xda3a01a0
    ctx->pc = 0x1021bcu;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x1021c0: 0xda3b01b0
    ctx->pc = 0x1021c0u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x1021c4: 0xda3c01c0
    ctx->pc = 0x1021c4u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x1021c8: 0xda3d01d0
    ctx->pc = 0x1021c8u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 464)));
    // 0x1021cc: 0xda3e01e0
    ctx->pc = 0x1021ccu;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 480)));
    // 0x1021d0: 0xda3f01f0
    ctx->pc = 0x1021d0u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x1021d4: 0x8e020200
    ctx->pc = 0x1021d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1021d8: 0x48c28000
    ctx->pc = 0x1021d8u;
    ctx->vu0_vpu_stat4 = GPR_U32(ctx, 2);
    // 0x1021dc: 0x8e020208
    ctx->pc = 0x1021dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x1021e0: 0x48c29000
    ctx->pc = 0x1021e0u;
    ctx->vu0_fbrst4 = GPR_U32(ctx, 2);
    // 0x1021e4: 0x8e02020c
    ctx->pc = 0x1021e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x1021e8: 0x48c2a000
    ctx->pc = 0x1021e8u;
    ctx->vu0_acc = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1021ec: 0x8e020210
    ctx->pc = 0x1021ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x1021f0: 0x48c2a800
    ctx->pc = 0x1021f0u;
    ctx->vu0_info = GPR_U32(ctx, 2);
    // 0x1021f4: 0x8e020214
    ctx->pc = 0x1021f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x1021f8: 0x48c2b000
    ctx->pc = 0x1021f8u;
    ctx->vu0_clip_flags2 = GPR_U32(ctx, 2);
    // 0x1021fc: 0x96020218
    ctx->pc = 0x1021fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 536)));
    // 0x102200: 0x48c20000
    ctx->pc = 0x102200u;
    ctx->vu0_status = GPR_U32(ctx, 2) & 0xFFFF;
    // 0x102204: 0x9602021a
    ctx->pc = 0x102204u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 538)));
    // 0x102208: 0x48c20800
    ctx->pc = 0x102208u;
    ctx->vu0_mac_flags = GPR_U32(ctx, 2);
    // 0x10220c: 0x9602021c
    ctx->pc = 0x10220cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x102210: 0x48c21000
    ctx->pc = 0x102210u;
    ctx->vu0_vpu_stat = GPR_U32(ctx, 2);
    // 0x102214: 0x9602021e
    ctx->pc = 0x102214u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 542)));
    // 0x102218: 0x48c21800
    ctx->pc = 0x102218u;
    ctx->vu0_r = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x10221c: 0x96020220
    ctx->pc = 0x10221cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x102220: 0x48c22000
    ctx->pc = 0x102220u;
    { uint32_t tmp = GPR_U32(ctx, 2); ctx->vu0_i = *reinterpret_cast<float*>(&tmp); }
    // 0x102224: 0x96020222
    ctx->pc = 0x102224u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 546)));
    // 0x102228: 0x48c22800
    ctx->pc = 0x102228u;
    ctx->vu0_clip_flags = GPR_U32(ctx, 2);
    // 0x10222c: 0x96020224
    ctx->pc = 0x10222cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x102230: 0x48c23000
    ctx->pc = 0x102230u;
    ctx->vu0_tpc = GPR_U32(ctx, 2);
    // 0x102234: 0x96020226
    ctx->pc = 0x102234u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 550)));
    // 0x102238: 0x48c23800
    ctx->pc = 0x102238u;
    ctx->vu0_cmsar0 = GPR_U32(ctx, 2);
    // 0x10223c: 0x96020228
    ctx->pc = 0x10223cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x102240: 0x48c24000
    ctx->pc = 0x102240u;
    ctx->vu0_fbrst = GPR_U32(ctx, 2);
    // 0x102244: 0x9602022a
    ctx->pc = 0x102244u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 554)));
    // 0x102248: 0x48c24800
    ctx->pc = 0x102248u;
    ctx->vu0_vpu_stat2 = GPR_U32(ctx, 2);
    // 0x10224c: 0x9602022c
    ctx->pc = 0x10224cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x102250: 0x48c25000
    ctx->pc = 0x102250u;
    ctx->vu0_tpc2 = GPR_U32(ctx, 2);
    // 0x102254: 0x9602022e
    ctx->pc = 0x102254u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 558)));
    // 0x102258: 0x48c25800
    ctx->pc = 0x102258u;
    ctx->vu0_cmsar1 = GPR_U32(ctx, 2);
    // 0x10225c: 0x96020230
    ctx->pc = 0x10225cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x102260: 0x48c26000
    ctx->pc = 0x102260u;
    ctx->vu0_fbrst2 = GPR_U32(ctx, 2);
    // 0x102264: 0x96020232
    ctx->pc = 0x102264u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 562)));
    // 0x102268: 0x48c26800
    ctx->pc = 0x102268u;
    ctx->vu0_vpu_stat3 = GPR_U32(ctx, 2);
    // 0x10226c: 0x96020234
    ctx->pc = 0x10226cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x102270: 0x48c27000
    ctx->pc = 0x102270u;
    ctx->vu0_cmsar2 = GPR_U32(ctx, 2);
    // 0x102274: 0x96020236
    ctx->pc = 0x102274u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 566)));
    // 0x102278: 0x48c27800
    ctx->pc = 0x102278u;
    ctx->vu0_fbrst3 = GPR_U32(ctx, 2);
    // 0x10227c: 0x24020001
    ctx->pc = 0x10227cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_102280:
    // 0x102280: 0xdfbf0020
    ctx->pc = 0x102280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102284: 0xdfb10010
    ctx->pc = 0x102284u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102288: 0xdfb00000
    ctx->pc = 0x102288u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10228c: 0x3e00008
    ctx->pc = 0x10228Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102290u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102118u: goto label_102118;
            case 0x102280u: goto label_102280;
            default: break;
        }
        return;
    }
    ctx->pc = 0x102294u;
    // 0x102294: 0x0
    ctx->pc = 0x102294u;
    // NOP
}
