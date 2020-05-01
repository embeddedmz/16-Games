project(Mahjong)

find_package(SFML REQUIRED network audio graphics window system)

file(COPY "${CMAKE_CURRENT_SOURCE_DIR}/files" DESTINATION "${CMAKE_CURRENT_BINARY_DIR}/")

add_executable(mahjong main.cpp)

target_link_libraries(mahjong PRIVATE sfml-system sfml-window sfml-graphics sfml-network sfml-audio)