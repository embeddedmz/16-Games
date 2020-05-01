project(Bejeweled)

find_package(SFML REQUIRED network audio graphics window system)

file(COPY "${CMAKE_CURRENT_SOURCE_DIR}/images" DESTINATION "${CMAKE_CURRENT_BINARY_DIR}/")

add_executable(bejeweled main.cpp)

target_link_libraries(bejeweled PRIVATE sfml-system sfml-window sfml-graphics sfml-network sfml-audio)