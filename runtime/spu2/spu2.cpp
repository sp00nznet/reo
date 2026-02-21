#include "spu2.h"
#include <cstdio>
#include <cstring>
#include <algorithm>

namespace reo {

bool SPU2::init() {
    memset(m_ram, 0, sizeof(m_ram));
    memset(m_voices, 0, sizeof(m_voices));

    for (auto& v : m_voices) {
        v.env_phase = SPU2Voice::EnvPhase::Off;
        v.playing = false;
    }

    m_initialized = true;

    // TODO: Initialize WASAPI audio device
    // - Create audio client
    // - Set format: 48kHz, 16-bit, stereo
    // - Start audio render thread
    printf("[SPU2] Software mixer initialized (%d voices)\n", SPU2_TOTAL_VOICES);

    return true;
}

void SPU2::shutdown() {
    if (!m_initialized) return;
    // TODO: Stop audio thread, release WASAPI device
    m_initialized = false;
    printf("[SPU2] Shutdown\n");
}

uint16_t SPU2::read_register(uint32_t addr) {
    // SPU2 registers are at 0x1F900000 - 0x1F9007FF (core 0)
    //                    and 0x1F900400 - 0x1F900BFF (core 1)
    // TODO: Map register addresses to voice/core parameters
    return 0;
}

void SPU2::write_register(uint32_t addr, uint16_t value) {
    // TODO: Full register mapping
    // For now, log key register writes
}

void SPU2::dma_write(int core, const void* data, uint32_t addr, uint32_t size) {
    if (addr + size > SPU2_RAM_SIZE) {
        fprintf(stderr, "[SPU2] DMA write overflow: addr=0x%06X size=0x%X\n", addr, size);
        size = SPU2_RAM_SIZE - addr;
    }
    memcpy(m_ram + addr, data, size);
}

void SPU2::dma_read(int core, void* data, uint32_t addr, uint32_t size) {
    if (addr + size > SPU2_RAM_SIZE) {
        size = SPU2_RAM_SIZE - addr;
    }
    memcpy(data, m_ram + addr, size);
}

// ADPCM coefficient table (Sony PS-ADPCM)
static const int32_t adpcm_coef[5][2] = {
    {   0,   0 },
    {  60,   0 },
    { 115, -52 },
    {  98, -55 },
    { 122, -60 },
};

void SPU2::decode_adpcm_block(SPU2Voice& voice, int16_t* output) {
    // Each ADPCM block is 16 bytes → 28 samples
    uint8_t* block = m_ram + (voice.current_addr & (SPU2_RAM_SIZE - 1));

    uint8_t shift_filter = block[0];
    uint8_t flags = block[1];

    int shift = shift_filter & 0x0F;
    int filter = (shift_filter >> 4) & 0x07;
    if (filter > 4) filter = 4;

    bool loop_end = flags & 1;
    bool loop_start = flags & 4;

    if (loop_start) {
        voice.loop_addr = voice.current_addr;
    }

    int32_t f0 = adpcm_coef[filter][0];
    int32_t f1 = adpcm_coef[filter][1];

    for (int i = 0; i < 28; i++) {
        int nibble_byte = block[2 + i / 2];
        int32_t nibble = (i & 1) ? (nibble_byte >> 4) : (nibble_byte & 0x0F);

        // Sign extend
        if (nibble > 7) nibble -= 16;

        int32_t sample = (nibble << 12) >> shift;
        sample += (voice.prev_sample[0] * f0 + voice.prev_sample[1] * f1 + 32) >> 6;

        sample = std::clamp(sample, -32768, 32767);

        voice.prev_sample[1] = voice.prev_sample[0];
        voice.prev_sample[0] = sample;

        output[i] = (int16_t)sample;
    }

    voice.current_addr += 16;

    if (loop_end) {
        if (voice.looping) {
            voice.current_addr = voice.loop_addr;
        } else {
            voice.playing = false;
            voice.env_phase = SPU2Voice::EnvPhase::Off;
        }
    }
}

void SPU2::mix_samples(int16_t* output, int num_samples) {
    memset(output, 0, num_samples * 2 * sizeof(int16_t)); // Stereo

    // TODO: Mix all active voices into the output buffer
    // For each sample:
    //   1. Decode ADPCM if needed
    //   2. Apply pitch interpolation
    //   3. Apply envelope
    //   4. Apply volume
    //   5. Accumulate to left/right channels
    //   6. Apply reverb
}

void SPU2::process_envelope(SPU2Voice& voice) {
    // TODO: Full ADSR envelope processing
    // For now, simple on/off
    switch (voice.env_phase) {
    case SPU2Voice::EnvPhase::Attack:
        voice.envelope_level = 0x7FFF;
        voice.env_phase = SPU2Voice::EnvPhase::Sustain;
        break;
    case SPU2Voice::EnvPhase::Release:
        voice.envelope_level = 0;
        voice.env_phase = SPU2Voice::EnvPhase::Off;
        voice.playing = false;
        break;
    default:
        break;
    }
}

} // namespace reo
