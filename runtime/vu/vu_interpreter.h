#pragma once

#include "runtime/core/types.h"
#include <cstdint>

namespace reo {

/*
 * Vector Unit Interpreter
 *
 * The PS2 has two Vector Units (VU0, VU1) that execute microprograms
 * for geometry transforms, lighting, skinning, and clipping.
 *
 * VU0 can operate in:
 *   - Macro mode (COP2): Instructions inline with EE code
 *   - Micro mode: Independent execution from VU0 code memory
 *
 * VU1 operates ONLY in micro mode and is the primary geometry processor.
 * VU1 has XGKICK to submit primitives directly to the GS via PATH1.
 *
 * For static recompilation, VU microprograms present a major challenge:
 *   - They are uploaded at runtime via DMA (VIF unpack)
 *   - Each game has custom VU programs
 *   - Dual-issue FMAC+FDIV pipeline with pipeline latencies
 *
 * Strategy:
 *   1. Start with an interpreter for correctness
 *   2. Cache and JIT-compile frequently used microprograms
 *   3. Manually identify and replace key programs (transforms, lighting)
 *      with optimized SSE/AVX equivalents
 */

// VU instruction types
enum class VUPipeline {
    Upper,  // FMAC operations (runs every cycle)
    Lower   // Integer ops, branches, memory access (paired with upper)
};

struct VUState {
    VF128 vf[32];       // Vector float registers
    uint16_t vi[16];    // Integer registers
    float acc[4];       // Accumulator (xyzw)
    float q;            // Division/sqrt result
    float p;            // EFU result (VU1 only)
    uint32_t pc;        // Micro program counter
    bool running;       // Currently executing
    int stall_cycles;   // Pipeline stall counter

    // Status flags
    uint16_t status;    // MAC flags (ZSO per element)
    uint16_t clip;      // Clipping flags

    void reset() {
        for (int i = 0; i < 32; i++) vf[i].clear();
        for (int i = 0; i < 16; i++) vi[i] = 0;
        for (int i = 0; i < 4; i++) acc[i] = 0.0f;
        q = 0.0f;
        p = 0.0f;
        pc = 0;
        running = false;
        stall_cycles = 0;
        status = 0;
        clip = 0;
    }
};

class VUInterpreter {
public:
    VUInterpreter(int unit_id, uint8_t* code_mem, uint32_t code_size,
                  uint8_t* data_mem, uint32_t data_size);

    void reset();

    // Start micro program execution at given address
    void start(uint32_t addr);

    // Execute one cycle (one instruction pair)
    void step();

    // Run until program ends (STOP instruction or timeout)
    void run(int max_cycles = 65536);

    bool is_running() const { return m_state.running; }

    VUState& state() { return m_state; }
    const VUState& state() const { return m_state; }

private:
    void execute_upper(uint32_t instruction);
    void execute_lower(uint32_t instruction);

    // Upper instructions (FMAC)
    void vu_add(uint32_t inst);
    void vu_sub(uint32_t inst);
    void vu_mul(uint32_t inst);
    void vu_madd(uint32_t inst);
    void vu_msub(uint32_t inst);
    void vu_max(uint32_t inst);
    void vu_min(uint32_t inst);
    void vu_ftoi(uint32_t inst);
    void vu_itof(uint32_t inst);

    // Lower instructions
    void vu_div(uint32_t inst);
    void vu_sqrt(uint32_t inst);
    void vu_rsqrt(uint32_t inst);
    void vu_iadd(uint32_t inst);
    void vu_isub(uint32_t inst);
    void vu_iand(uint32_t inst);
    void vu_ior(uint32_t inst);
    void vu_ilw(uint32_t inst);
    void vu_isw(uint32_t inst);
    void vu_lq(uint32_t inst);
    void vu_sq(uint32_t inst);
    void vu_branch(uint32_t inst);
    void vu_xgkick(uint32_t inst);  // VU1 only

    int m_unit_id;
    VUState m_state;
    uint8_t* m_code_mem;
    uint32_t m_code_size;
    uint8_t* m_data_mem;
    uint32_t m_data_size;
};

} // namespace reo
