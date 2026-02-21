#pragma once

#include <string>

#define REO_VERSION_MAJOR 0
#define REO_VERSION_MINOR 1
#define REO_VERSION_PATCH 0
#define REO_VERSION_STRING "0.1.0"

namespace reo {

struct Config {
    // Paths
    std::string game_data_path = "game_data";
    std::string save_path = "saves";

    // Display
    int window_width = 1280;
    int window_height = 720;
    bool fullscreen = false;
    bool vsync = true;
    int fps_target = 60; // Original was 30, we aim for 60

    // Audio
    int audio_sample_rate = 48000;
    float master_volume = 1.0f;

    // Network
    bool online_enabled = false;
    std::string server_address = "obsrv.org";
    int server_port = 8200;
    std::string player_name = "Survivor";

    // Input
    bool prefer_controller = true;

    bool load(int argc, char* argv[]);
    bool save() const;
};

} // namespace reo
