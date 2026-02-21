add_library(reo_media STATIC
    adx/adx_decoder.cpp
    sofdec/sofdec_decoder.cpp
    tim2/tim2_loader.cpp
)

target_include_directories(reo_media PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}
)
