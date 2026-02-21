add_executable(reo-elfinfo
    main.cpp
)

target_include_directories(reo-elfinfo PRIVATE
    ${CMAKE_SOURCE_DIR}
)
