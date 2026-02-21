#pragma once

#include <cstdint>
#include <vector>
#include <string>

namespace reo {

/*
 * NBD (NETBIO Data) Parser
 *
 * NBD files are the master 3D data containers in RE Outbreak.
 * They contain embedded AMO (model) and TEX (texture) chunks.
 *
 * Based on Outbreak Research documentation:
 * https://outbreak-research.github.io/Documentation/
 */

struct NbdChunk {
    uint32_t type;     // Chunk type identifier
    uint32_t offset;   // Offset within NBD file
    uint32_t size;     // Chunk size in bytes
    std::vector<uint8_t> data;
};

class NbdParser {
public:
    NbdParser() = default;

    bool parse(const uint8_t* data, uint32_t size);
    bool parse(const std::string& path);

    int chunk_count() const { return (int)m_chunks.size(); }
    const NbdChunk& chunk(int index) const { return m_chunks[index]; }

    // Find chunks by type
    std::vector<int> find_chunks(uint32_t type) const;

private:
    std::vector<NbdChunk> m_chunks;
};

} // namespace reo
