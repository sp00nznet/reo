#pragma once

#include <cstdint>
#include <vector>
#include <string>

namespace reo {

/*
 * TIM2 Texture Loader
 *
 * TIM2 (.tm2) is Sony's PS2 texture format, successor to the PS1 TIM format.
 * RE Outbreak stores textures as LZSS-compressed TIM2 files inside .tex containers.
 *
 * TIM2 format:
 *   Header: signature "TIM2", version, texture count
 *   Per texture: pixel format, width, height, mipmap levels, CLUT info
 *   Pixel data follows
 *
 * Supported pixel formats:
 *   32-bit RGBA (PSMCT32)
 *   24-bit RGB (PSMCT24)
 *   16-bit RGBA (PSMCT16)
 *   8-bit indexed (PSMT8) with CLUT
 *   4-bit indexed (PSMT4) with CLUT
 */

struct Tim2Texture {
    uint32_t width;
    uint32_t height;
    uint8_t  pixel_format;   // PS2 GS pixel storage format
    uint8_t  mipmap_count;
    bool     has_clut;       // Has color lookup table (palette)
    uint16_t clut_colors;    // Number of CLUT entries

    // Decoded pixel data (always converted to RGBA8888)
    std::vector<uint8_t> rgba_data;
};

class Tim2Loader {
public:
    Tim2Loader() = default;

    // Load from file
    bool load(const std::string& path);

    // Load from memory (for embedded textures in .tex/.nbd containers)
    bool load(const uint8_t* data, uint32_t size);

    // Get loaded textures
    int texture_count() const { return (int)m_textures.size(); }
    const Tim2Texture& texture(int index) const { return m_textures[index]; }

    // LZSS decompression (for .tex files)
    static bool decompress_lzss(const uint8_t* input, uint32_t input_size,
                                std::vector<uint8_t>& output);

private:
    bool parse_tim2(const uint8_t* data, uint32_t size);
    bool decode_texture(const uint8_t* data, uint32_t size, Tim2Texture& tex);
    void unswizzle_ps2(uint8_t* data, int width, int height, int bpp);

    std::vector<Tim2Texture> m_textures;
};

} // namespace reo
