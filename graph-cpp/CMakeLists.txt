cmake_minimum_required(VERSION 3.17)
project(graph-cpp)

set(CMAKE_CXX_STANDARD 17)
add_executable(graph-adjacency-matrix graph-adjacency-matrix.cpp driver-adjacency-matrix.cpp)