cmake_minimum_required(VERSION 3.21)
project(TP2)

set(CMAKE_CXX_STANDARD 20)

file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "src/*.cpp" "src/*.hpp" "main.cpp")
add_executable(TP2 ${SOURCES})