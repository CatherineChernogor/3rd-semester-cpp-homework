cmake_minimum_required(VERSION 3.15)
project(fraction)

set(CMAKE_CXX_STANDARD 14)

add_executable(fraction main.cpp rational.h rational.cpp)