cmake_minimum_required(VERSION 3.3)

project(Chronos)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 20)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ./bin)

include_directories(
    ./include
)

add_executable(hello ./src/hello.cpp)