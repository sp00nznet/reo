add_library(reo_runtime STATIC
    core/context.cpp
    core/memory.cpp
    core/syscall.cpp
    gs/gs_renderer.cpp
    spu2/spu2.cpp
    vu/vu_interpreter.cpp
    iop/iop_hle.cpp
    input/input.cpp
    cdvd/cdvd.cpp
    timer/timer.cpp
)

target_include_directories(reo_runtime PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}
)

if(Vulkan_FOUND)
    target_link_libraries(reo_runtime PUBLIC Vulkan::Vulkan)
    target_compile_definitions(reo_runtime PUBLIC REO_HAS_VULKAN)
endif()

if(WIN32)
    target_link_libraries(reo_runtime PUBLIC winmm ole32 avrt user32 gdi32 xinput)
endif()
