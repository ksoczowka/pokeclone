cmake_minimum_required(VERSION 3.10)
project(Pokeclone)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(
    ${PROJECT_SOURCE_DIR}/include/pc
    ${PROJECT_SOURCE_DIR}/include/raylib
)

file(GLOB_RECURSE SOURCES
    src/*.cpp
    src/pc/*.cpp
)

add_executable(Pokeclone ${SOURCES})

target_link_libraries(Pokeclone
    ${PROJECT_SOURCE_DIR}/include/raylib/libraylib.a
    winmm
    gdi32
    opengl32
)
