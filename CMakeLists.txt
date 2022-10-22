cmake_minimum_required(VERSION 3.3)

project(chrono)

set(CMAKE_CXX_STANDARD 20)
# set(CMAKE_MODULE_PATH ./bin)

include_directories(
    ./include
)

set(EXECUTABLE_OUTPUT_PATH ./bin)

add_executable(hello ./src/hello.cpp)
add_executable(use ./src/use_pkg.cpp)
add_executable(chronos ./src/chrono_test.cpp)

