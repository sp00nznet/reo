# REO Recompiled Game Build
#
# This compiles:
#   - All 3,831 generated C++ files from ps2xRecomp output
#   - The function registration table
#   - Game-specific overrides
#   - Bootstrap main()
#
# Against the PS2Recomp runtime library.

cmake_minimum_required(VERSION 3.20)

# Collect all generated source files
file(GLOB RECOMP_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/config/output/*.cpp"
)

# Count them for the user
list(LENGTH RECOMP_SOURCES RECOMP_COUNT)
message(STATUS "REO: Found ${RECOMP_COUNT} recompiled source files")

if(RECOMP_COUNT EQUAL 0)
    message(WARNING "No recompiled source files found in config/output/")
    message(WARNING "Run ps2xAnalyzer and ps2xRecomp first (see README)")
    return()
endif()

# Build the recompiled game executable
add_executable(reo_recomp
    reo_bootstrap.cpp
    overrides/reo_override.cpp
    ${RECOMP_SOURCES}
)

# PS2Recomp runtime includes and library
set(PS2RECOMP_DIR "${CMAKE_SOURCE_DIR}/third_party/PS2Recomp")
set(PS2RECOMP_BUILD "${PS2RECOMP_DIR}/out/build")

target_include_directories(reo_recomp PRIVATE
    "${PS2RECOMP_DIR}/ps2xRuntime/include"
    "${PS2RECOMP_DIR}/ps2xRecomp/include"
    "${PS2RECOMP_BUILD}/_deps/elfio-src/include"
    "${PS2RECOMP_BUILD}/_deps/fmt-src/include"
    "${PS2RECOMP_BUILD}/_deps/raylib-src/src"
    "${CMAKE_CURRENT_SOURCE_DIR}/config/output"
)

# Link PS2Recomp runtime and its dependencies
target_link_libraries(reo_recomp PRIVATE
    "${PS2RECOMP_BUILD}/ps2xRuntime/Release/ps2_runtime.lib"
    "${PS2RECOMP_BUILD}/_deps/raylib-build/raylib/Release/raylib.lib"
    "${PS2RECOMP_BUILD}/_deps/raylib-build/raylib/external/glfw/src/glfw.dir/Release/glfw.lib"
    "${PS2RECOMP_BUILD}/_deps/fmt-build/Release/fmt.lib"
    "${PS2RECOMP_BUILD}/_deps/libdwarf-build/src/lib/libdwarf/Release/dwarf.lib"
)

# Windows system libraries needed by raylib/glfw
if(WIN32)
    target_link_libraries(reo_recomp PRIVATE
        opengl32 gdi32 winmm user32 shell32 ole32 advapi32
    )
endif()

# C++20 required for PS2Recomp runtime
target_compile_features(reo_recomp PRIVATE cxx_std_20)

# MSVC specific: disable some warnings in generated code, enable SSE4.1
if(MSVC)
    target_compile_options(reo_recomp PRIVATE
        /W0           # Disable warnings for generated code
        /bigobj       # Generated files can be large
        /MP8          # Parallel compilation (8 threads, avoids file locking)
        /O2           # Optimize
    )
endif()

target_compile_definitions(reo_recomp PRIVATE
    _CRT_SECURE_NO_WARNINGS
    NOMINMAX
    WIN32_LEAN_AND_MEAN
)
