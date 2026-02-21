#pragma once

#include <cstdint>
#include <vector>
#include <string>

namespace reo {

/*
 * AMO (Animated Model Object) Parser
 *
 * AMO files contain 3D model data for RE Outbreak:
 * - Vertices (XYZ float positions)
 * - Normals
 * - Texture coordinates (UV)
 * - Vertex colors
 * - Skeletal bone weights
 * - Triangle strip indices
 * - Material tables
 *
 * Based on Outbreak Research documentation.
 */

struct AmoVertex {
    float x, y, z;
};

struct AmoNormal {
    float nx, ny, nz;
};

struct AmoTexCoord {
    float u, v;
};

struct AmoVertexColor {
    uint8_t r, g, b, a;
};

struct AmoMaterial {
    uint32_t texture_index;
    uint32_t flags;
    float ambient[4];
    float diffuse[4];
};

struct AmoMesh {
    std::vector<AmoVertex> vertices;
    std::vector<AmoNormal> normals;
    std::vector<AmoTexCoord> texcoords;
    std::vector<AmoVertexColor> colors;
    std::vector<uint16_t> indices;  // Triangle strip indices
    int material_index;
};

struct AmoBone {
    uint32_t parent;
    float position[3];
    float rotation[4]; // Quaternion
    float scale[3];
};

class AmoParser {
public:
    AmoParser() = default;

    bool parse(const uint8_t* data, uint32_t size);

    const std::vector<AmoMesh>& meshes() const { return m_meshes; }
    const std::vector<AmoMaterial>& materials() const { return m_materials; }
    const std::vector<AmoBone>& bones() const { return m_bones; }

private:
    std::vector<AmoMesh> m_meshes;
    std::vector<AmoMaterial> m_materials;
    std::vector<AmoBone> m_bones;
};

} // namespace reo
