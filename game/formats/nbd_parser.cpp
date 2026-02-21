#include "nbd_parser.h"
#include <cstdio>
#include <cstring>
#include <fstream>

namespace reo {

bool NbdParser::parse(const std::string& path) {
    std::ifstream file(path, std::ios::binary | std::ios::ate);
    if (!file) return false;

    auto size = file.tellg();
    file.seekg(0);
    std::vector<uint8_t> data((size_t)size);
    file.read((char*)data.data(), size);

    return parse(data.data(), (uint32_t)data.size());
}

bool NbdParser::parse(const uint8_t* data, uint32_t size) {
    m_chunks.clear();

    if (size < 8) return false;

    // NBD format is chunk-based
    // Each chunk has a type header followed by size and data
    // The exact format varies — this is a basic scanner

    uint32_t pos = 0;
    while (pos + 8 <= size) {
        uint32_t chunk_type = *(uint32_t*)(data + pos);
        uint32_t chunk_size = *(uint32_t*)(data + pos + 4);

        if (chunk_size == 0 || pos + 8 + chunk_size > size) break;

        NbdChunk chunk;
        chunk.type = chunk_type;
        chunk.offset = pos;
        chunk.size = chunk_size;
        chunk.data.assign(data + pos + 8, data + pos + 8 + chunk_size);

        m_chunks.push_back(std::move(chunk));
        pos += 8 + chunk_size;

        // Align to 16 bytes (PS2 DMA alignment)
        pos = (pos + 15) & ~15;
    }

    printf("[NBD] Parsed %d chunks\n", (int)m_chunks.size());
    return !m_chunks.empty();
}

std::vector<int> NbdParser::find_chunks(uint32_t type) const {
    std::vector<int> result;
    for (int i = 0; i < (int)m_chunks.size(); i++) {
        if (m_chunks[i].type == type) {
            result.push_back(i);
        }
    }
    return result;
}

} // namespace reo
