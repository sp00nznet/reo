#include "tim2_loader.h"
#include <cstdio>
#include <cstring>
#include <fstream>

namespace reo {

bool Tim2Loader::load(const std::string& path) {
    std::ifstream file(path, std::ios::binary | std::ios::ate);
    if (!file) return false;

    auto size = file.tellg();
    file.seekg(0);
    std::vector<uint8_t> data((size_t)size);
    file.read((char*)data.data(), size);

    return load(data.data(), (uint32_t)data.size());
}

bool Tim2Loader::load(const uint8_t* data, uint32_t size) {
    m_textures.clear();
    return parse_tim2(data, size);
}

bool Tim2Loader::parse_tim2(const uint8_t* data, uint32_t size) {
    if (size < 16) return false;

    // TIM2 signature: "TIM2" (0x54494D32)
    if (data[0] != 'T' || data[1] != 'I' || data[2] != 'M' || data[3] != '2') {
        fprintf(stderr, "[TIM2] Invalid signature\n");
        return false;
    }

    uint8_t version = data[4];
    // uint8_t format = data[5]; // 0 = unaligned, 1 = 128-byte aligned
    uint16_t tex_count = *(uint16_t*)(data + 6);

    printf("[TIM2] Version %d, %d texture(s)\n", version, tex_count);

    uint32_t offset = 16; // Skip main header (could be 16 or 128 bytes)

    for (int i = 0; i < tex_count && offset < size; i++) {
        // Per-texture header
        if (offset + 48 > size) break;

        const uint8_t* th = data + offset;

        uint32_t total_size = *(uint32_t*)(th + 0);
        uint32_t palette_size = *(uint32_t*)(th + 4);
        uint32_t image_size = *(uint32_t*)(th + 8);
        uint16_t header_size = *(uint16_t*)(th + 12);
        uint16_t colors_used = *(uint16_t*)(th + 14);
        uint8_t  format = th[16];
        uint8_t  mipmaps = th[17];
        // uint8_t clut_format = th[18];
        // uint8_t bpp_type = th[19];
        uint16_t width = *(uint16_t*)(th + 20);
        uint16_t height = *(uint16_t*)(th + 22);

        Tim2Texture tex;
        tex.width = width;
        tex.height = height;
        tex.pixel_format = format;
        tex.mipmap_count = mipmaps;
        tex.has_clut = (palette_size > 0);
        tex.clut_colors = colors_used;

        printf("[TIM2] Texture %d: %dx%d fmt=%d mipmaps=%d clut=%d\n",
               i, width, height, format, mipmaps, colors_used);

        // Decode pixel data based on format
        const uint8_t* pixel_data = th + header_size;
        const uint8_t* clut_data = pixel_data + image_size;

        decode_texture(th, total_size, tex);

        m_textures.push_back(std::move(tex));
        offset += total_size;
    }

    return !m_textures.empty();
}

bool Tim2Loader::decode_texture(const uint8_t* data, uint32_t size, Tim2Texture& tex) {
    // Allocate RGBA output
    tex.rgba_data.resize(tex.width * tex.height * 4);

    // TODO: Full pixel format decoding
    // For now, fill with a placeholder pattern (magenta/black checkerboard)
    for (uint32_t y = 0; y < tex.height; y++) {
        for (uint32_t x = 0; x < tex.width; x++) {
            uint32_t idx = (y * tex.width + x) * 4;
            bool checker = ((x / 8) + (y / 8)) & 1;
            tex.rgba_data[idx + 0] = checker ? 255 : 0;   // R
            tex.rgba_data[idx + 1] = 0;                    // G
            tex.rgba_data[idx + 2] = checker ? 255 : 0;    // B
            tex.rgba_data[idx + 3] = 255;                  // A
        }
    }

    return true;
}

void Tim2Loader::unswizzle_ps2(uint8_t* data, int width, int height, int bpp) {
    // PS2 GS stores textures in a swizzled format for cache efficiency
    // The swizzle pattern depends on pixel format:
    //   32-bit: 8x8 pixel blocks
    //   8-bit:  16x4 pixel blocks
    //   4-bit:  32x4 pixel blocks
    // TODO: Implement proper GS unswizzle
}

bool Tim2Loader::decompress_lzss(const uint8_t* input, uint32_t input_size,
                                  std::vector<uint8_t>& output) {
    // LZSS decompression used by RE Outbreak for .tex files
    // Standard LZSS with 4KB sliding window

    output.clear();
    output.reserve(input_size * 4); // Estimate

    uint8_t window[4096];
    memset(window, 0, sizeof(window));
    int win_pos = 0xFEE; // Standard LZSS initial position

    uint32_t pos = 0;

    while (pos < input_size) {
        uint8_t flags = input[pos++];

        for (int bit = 0; bit < 8 && pos < input_size; bit++) {
            if (flags & (1 << bit)) {
                // Literal byte
                uint8_t byte = input[pos++];
                output.push_back(byte);
                window[win_pos] = byte;
                win_pos = (win_pos + 1) & 0xFFF;
            } else {
                // Back reference
                if (pos + 1 >= input_size) break;

                uint8_t lo = input[pos++];
                uint8_t hi = input[pos++];

                int offset = lo | ((hi & 0xF0) << 4);
                int length = (hi & 0x0F) + 3;

                for (int j = 0; j < length; j++) {
                    uint8_t byte = window[(offset + j) & 0xFFF];
                    output.push_back(byte);
                    window[win_pos] = byte;
                    win_pos = (win_pos + 1) & 0xFFF;
                }
            }
        }
    }

    return true;
}

} // namespace reo
