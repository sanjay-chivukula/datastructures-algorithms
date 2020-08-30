cmake_minimum_required(VERSION 3.17)
project(graph-cpp)

set(CMAKE_CXX_STANDARD 17)
add_executable(graph-adjacency-matrix graph-adjacency-matrix.cpp driver-adjacency-matrix.cpp)
add_executable(graph-adjacency-list graph-adjacency-list.cpp driver-adjacency-list.cpp)