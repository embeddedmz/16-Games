project(Volleyball)

find_package(SFML REQUIRED network audio graphics window system)
find_package(unofficial-box2d REQUIRED)

file(COPY "${CMAKE_CURRENT_SOURCE_DIR}/images" DESTINATION "${CMAKE_CURRENT_BINARY_DIR}/")

add_executable(volleyball main.cpp)

target_link_libraries(volleyball PRIVATE unofficial::box2d::box2d sfml-system sfml-window sfml-graphics sfml-network sfml-audio)