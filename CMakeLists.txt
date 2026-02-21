cmake_minimum_required(VERSION 3.20)
project(reo VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Options
option(REO_BUILD_TOOLS "Build extraction and analysis tools" ON)
option(REO_BUILD_RUNTIME "Build the game runtime" ON)
option(REO_BUILD_NETWORK "Build online play support" ON)
option(REO_USE_VULKAN "Use Vulkan for GS rendering" ON)

# Platform detection
if(WIN32)
    add_definitions(-DREO_PLATFORM_WINDOWS)
    add_definitions(-D_CRT_SECURE_NO_WARNINGS)
    add_definitions(-DNOMINMAX)
    add_definitions(-DWIN32_LEAN_AND_MEAN)
endif()

# Find packages
if(REO_USE_VULKAN)
    find_package(Vulkan QUIET)
    if(Vulkan_FOUND)
        message(STATUS "Vulkan found: ${Vulkan_INCLUDE_DIRS}")
    else()
        message(WARNING "Vulkan SDK not found - GS renderer will be stubbed")
    endif()
endif()

# Third-party dependencies
# SDL3 - windowing, input, audio fallback
# add_subdirectory(third_party/SDL3)

# Project-wide include paths
include_directories(${CMAKE_SOURCE_DIR})

# Tools
if(REO_BUILD_TOOLS)
    add_subdirectory(tools)
endif()

# Runtime HAL
if(REO_BUILD_RUNTIME)
    add_subdirectory(runtime)
endif()

# Network
if(REO_BUILD_NETWORK)
    add_subdirectory(network)
endif()

# Media decoders
add_subdirectory(media)

# Game-specific code
add_subdirectory(game)

# Main executable
add_executable(reo
    src/main.cpp
    src/config.cpp
)

target_link_libraries(reo PRIVATE
    reo_runtime
    reo_network
    reo_media
    reo_game
)

target_include_directories(reo PRIVATE
    ${CMAKE_SOURCE_DIR}/src
)

# Install
install(TARGETS reo DESTINATION bin)
