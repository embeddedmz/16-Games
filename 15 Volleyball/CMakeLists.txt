project(Volleyball)

find_package(SFML REQUIRED network audio graphics window system)

if(VCPKG_TOOLCHAIN)
find_package(box2d REQUIRED)
set(Box2D_LIBRARY box2d::box2d)
else(VCPKG_TOOLCHAIN)
set(Box2D_LIBRARY Box2D) 
endif(VCPKG_TOOLCHAIN)

file(COPY "${CMAKE_CURRENT_SOURCE_DIR}/images" DESTINATION "${CMAKE_CURRENT_BINARY_DIR}/")

add_executable(volleyball main.cpp)

target_link_libraries(volleyball PRIVATE ${Box2D_LIBRARY} sfml-system sfml-window sfml-graphics sfml-network sfml-audio)
