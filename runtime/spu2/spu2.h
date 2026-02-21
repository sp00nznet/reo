#pragma once

#include <cstdint>

namespace reo {

/*
 * SPU2 — Sound Processing Unit 2
 *
 * The PS2 SPU2 has 2 cores, each with 24 voices (48 total).
 * Each voice plays ADPCM compressed audio from 2MB of dedicated sound RAM.
 * Hardware effects include reverb, pitch modulation, and noise generation.
 *
 * Our replacement:
 *   - Software ADPCM decoder
 *   - Software voice mixer
 *   - Software reverb (based on SPU2 algorithm)
 *   - Output via WASAPI (Windows) or SDL audio
 *
 * The IOP communicates with SPU2 via DMA and register writes.
 * Games send ADPCM sample data to SPU2 RAM, then configure voices
 * to play from specific offsets with pitch/volume/envelope settings.
 */

// SPU2 constants
constexpr int SPU2_NUM_CORES = 2;
constexpr int SPU2_VOICES_PER_CORE = 24;
constexpr int SPU2_TOTAL_VOICES = SPU2_NUM_CORES * SPU2_VOICES_PER_CORE;
constexpr int SPU2_RAM_SIZE = 2 * 1024 * 1024; // 2 MB
constexpr int SPU2_SAMPLE_RATE = 48000;

struct SPU2Voice {
    uint32_t start_addr;    // Start address in SPU2 RAM
    uint32_t loop_addr;     // Loop address
    uint32_t current_addr;  // Current playback position

    uint16_t volume_left;
    uint16_t volume_right;
    uint16_t pitch;         // Pitch (4096 = 44100 Hz base)

    // ADPCM decoding state
    int32_t prev_sample[2]; // Previous 2 samples for ADPCM

    // Envelope
    uint16_t adsr1;
    uint16_t adsr2;
    int32_t envelope_level;
    enum class EnvPhase { Off, Attack, Decay, Sustain, Release } env_phase;

    bool key_on;
    bool key_off;
    bool looping;
    bool playing;
};

class SPU2 {
public:
    SPU2() = default;
    ~SPU2() = default;

    bool init();
    void shutdown();

    // Register access (from IOP)
    uint16_t read_register(uint32_t addr);
    void write_register(uint32_t addr, uint16_t value);

    // DMA transfer (IOP → SPU2 RAM)
    void dma_write(int core, const void* data, uint32_t addr, uint32_t size);
    void dma_read(int core, void* data, uint32_t addr, uint32_t size);

    // Generate audio samples (called from audio thread)
    void mix_samples(int16_t* output, int num_samples);

    // SPU2 RAM access
    uint8_t* ram() { return m_ram; }

private:
    void decode_adpcm_block(SPU2Voice& voice, int16_t* output);
    void process_envelope(SPU2Voice& voice);
    int32_t interpolate_sample(SPU2Voice& voice);

    SPU2Voice m_voices[SPU2_TOTAL_VOICES] = {};
    uint8_t m_ram[SPU2_RAM_SIZE] = {};

    // Core registers
    uint16_t m_core_attr[2] = {};
    uint16_t m_core_volume_l[2] = {};
    uint16_t m_core_volume_r[2] = {};

    // Reverb
    uint32_t m_reverb_start[2] = {};
    uint32_t m_reverb_current[2] = {};

    bool m_initialized = false;

    // TODO: WASAPI audio device handle
};

} // namespace reo
