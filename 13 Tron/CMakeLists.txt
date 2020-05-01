project(Tron)

find_package(SFML REQUIRED network audio graphics window system)

file(COPY "${CMAKE_CURRENT_SOURCE_DIR}/background.jpg" DESTINATION "${CMAKE_CURRENT_BINARY_DIR}/")

add_executable(tron main.cpp)

target_link_libraries(tron PRIVATE sfml-system sfml-window sfml-graphics sfml-network sfml-audio)