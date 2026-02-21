add_executable(reo-extract
    main.cpp
    iso9660.cpp
)

target_include_directories(reo-extract PRIVATE
    ${CMAKE_SOURCE_DIR}
)
