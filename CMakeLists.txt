cmake_minimum_required(VERSION 3.12 FATAL_ERROR)
project(cpp-template)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED)

add_subdirectory(lib/ut)
add_subdirectory(src)
add_subdirectory(test)