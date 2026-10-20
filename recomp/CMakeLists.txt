# REO Recompiled Game Build
#
# Builds TWO executables from PS2Recomp output:
#   reo_recomp       — RE Outbreak File #1 (SLUS-20765, 3,209 functions)
#   reo_recomp_file2 — RE Outbreak File #2 (SLUS-20984, 3,525 functions)
#
# Both share the bootstrap, overrides, runtime HLE, and link against PS2Recomp runtime.

cmake_minimum_required(VERSION 3.20)

# Compile parallelism. Was hard-coded /MP4 "to avoid OOM"; each cl instance on
# the larger generated files peaks around 2 GB, so 8 needs ~16 GB. Lower this on
# a memory-constrained machine: -DREO_COMPILE_JOBS=4
set(REO_COMPILE_JOBS "8" CACHE STRING "Number of parallel cl.exe jobs (MSVC /MP)")
project(reo_recomp CXX)

# PS2Recomp paths (shared between both targets)
set(PS2RECOMP_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../third_party/PS2Recomp")
set(PS2RECOMP_BUILD "${PS2RECOMP_DIR}/out/build-upstream")

# REO runtime sources (hardware emulation subsystems)
set(REO_RUNTIME_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../runtime")

set(PS2RECOMP_INCLUDES
    "${PS2RECOMP_DIR}/ps2xRuntime/include"
    "${PS2RECOMP_DIR}/ps2xRuntime/src/lib/Kernel"
    "${PS2RECOMP_DIR}/ps2xRecomp/include"
    "${PS2RECOMP_DIR}/ps2xIOP/include"
    "${PS2RECOMP_BUILD}/_deps/elfio-src/include"
    "${PS2RECOMP_BUILD}/_deps/fmt-src/include"
    "${PS2RECOMP_BUILD}/_deps/raylib-src/src"
)

set(PS2RECOMP_LIBS
    "${PS2RECOMP_BUILD}/ps2xRuntime/Release/ps2_runtime.lib"
    "${PS2RECOMP_BUILD}/ps2xIOP/Release/ps2_iop.lib"
    "${PS2RECOMP_BUILD}/_deps/raylib-build/raylib/Release/raylib.lib"
    "${PS2RECOMP_BUILD}/_deps/raylib-build/raylib/external/glfw/src/glfw.dir/Release/glfw.lib"
    "${PS2RECOMP_BUILD}/_deps/fmt-build/Release/fmt.lib"
    "${PS2RECOMP_BUILD}/_deps/libdwarf-build/src/lib/libdwarf/Release/dwarf.lib"
)

# REO runtime HLE sources — compiled into each recomp target
set(REO_RUNTIME_SOURCES
    "${REO_RUNTIME_DIR}/gs/gs_renderer.cpp"
    "${REO_RUNTIME_DIR}/vu/vu_interpreter.cpp"
    "${REO_RUNTIME_DIR}/input/input.cpp"
    "${REO_RUNTIME_DIR}/cdvd/cdvd.cpp"
)

# Helper function to set up a recomp target
function(add_recomp_target TARGET_NAME OUTPUT_DIR GAME_DEFINE)
    file(GLOB RECOMP_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/config/${OUTPUT_DIR}/*.cpp")
    list(LENGTH RECOMP_SOURCES RECOMP_COUNT)
    message(STATUS "REO [${TARGET_NAME}]: Found ${RECOMP_COUNT} recompiled source files in ${OUTPUT_DIR}")

    if(RECOMP_COUNT EQUAL 0)
        message(WARNING "No recompiled source files found in config/${OUTPUT_DIR}/")
        message(WARNING "Run ps2xAnalyzer and ps2xRecomp first (see README)")
        return()
    endif()

    # Overlay functions. One dir per overlay, config/output_ovl_<name>, made by
    # tools/gen_overlay.py from game_data/BIN/*.DAT and dispatched by reo_overlays.cpp.
    # Globbing the dirs
    # means a new overlay needs no edit here.
    set(OVERLAY_SOURCES "")
    set(OVERLAY_INCLUDES "")
    file(GLOB OVERLAY_DIRS LIST_DIRECTORIES true "${CMAKE_CURRENT_SOURCE_DIR}/config/output_ovl_*")
    foreach(_ovl_dir ${OVERLAY_DIRS})
        if(IS_DIRECTORY "${_ovl_dir}")
            file(GLOB _ovl_srcs "${_ovl_dir}/*.cpp")
            list(LENGTH _ovl_srcs _ovl_count)
            if(_ovl_count GREATER 0)
                list(APPEND OVERLAY_SOURCES ${_ovl_srcs})
                list(APPEND OVERLAY_INCLUDES "${_ovl_dir}")
                message(STATUS "REO [${TARGET_NAME}]: Found ${_ovl_count} overlay sources in ${_ovl_dir}")
            endif()
        endif()
    endforeach()

    add_executable(${TARGET_NAME}
        reo_bootstrap.cpp
        reo_overlays.cpp
        overrides/reo_override.cpp
        overrides/reo_hw_bridge.cpp
        overrides/reo_trace_logger.cpp
        overrides/reo_netbio.cpp
        "${CMAKE_CURRENT_SOURCE_DIR}/../game/formats/nbd_parser.cpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/../game/formats/amo_parser.cpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/../game/formats/nbd_renderer.cpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/../media/tim2/tim2_loader.cpp"
        ${REO_RUNTIME_SOURCES}
        ${RECOMP_SOURCES}
        ${OVERLAY_SOURCES}
    )

    target_include_directories(${TARGET_NAME} PRIVATE
        ${PS2RECOMP_INCLUDES}
        "${CMAKE_CURRENT_SOURCE_DIR}/config/${OUTPUT_DIR}"
        ${OVERLAY_INCLUDES}
        "${CMAKE_CURRENT_SOURCE_DIR}/overrides"
        "${CMAKE_CURRENT_SOURCE_DIR}/.."
        "${CMAKE_CURRENT_SOURCE_DIR}/../game"
        "${CMAKE_CURRENT_SOURCE_DIR}/../media"
    )

    target_link_libraries(${TARGET_NAME} PRIVATE ${PS2RECOMP_LIBS})

    if(WIN32)
        target_link_libraries(${TARGET_NAME} PRIVATE
            opengl32 gdi32 winmm user32 shell32 ole32 advapi32
        )
    endif()

    target_compile_features(${TARGET_NAME} PRIVATE cxx_std_20)

    if(MSVC)
        target_compile_options(${TARGET_NAME} PRIVATE
            /W0           # Disable warnings for generated code
            /bigobj       # Generated files can be large
            /MP${REO_COMPILE_JOBS}  # Parallel compilation; see REO_COMPILE_JOBS above
            /O2           # Optimize
        )
        # A map file lets PS2X_PROFILE samples (exe-relative addresses) be named without a PDB.
        target_link_options(${TARGET_NAME} PRIVATE /MAP)
    endif()

    target_compile_definitions(${TARGET_NAME} PRIVATE
        _CRT_SECURE_NO_WARNINGS
        NOMINMAX
        WIN32_LEAN_AND_MEAN
        REO_PLATFORM_WINDOWS
        ${GAME_DEFINE}
    )
endfunction()

# ── File #1: RE Outbreak (SLUS-20765) ──────────────────────────────
add_recomp_target(reo_recomp "output" "REO_GAME_FILE1")

# ── File #2: RE Outbreak File #2 (SLUS-20984) ─────────────────────
add_recomp_target(reo_recomp_file2 "output_file2" "REO_GAME_FILE2")
