cmake_minimum_required(VERSION 3.15)
project(SimpleGraph)

set(CMAKE_CXX_STANDARD 14)

add_executable(SimpleGraph main.cpp graph.cpp graph.h node.cpp node.h)