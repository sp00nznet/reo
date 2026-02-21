add_library(reo_network STATIC
    snap_client/snap_protocol.cpp
    dnas/dnas_bypass.cpp
    lobby/lobby_client.cpp
)

target_include_directories(reo_network PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}
)

if(WIN32)
    target_link_libraries(reo_network PUBLIC ws2_32 crypt32)
endif()
