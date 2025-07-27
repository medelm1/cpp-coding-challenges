cmake_minimum_required(VERSION 3.10)
project(MatrixMultiplication)

set(CMAKE_CXX_STANDARD 17)

include_directories(
    ${CMAKE_SOURCE_DIR}/include
)

add_executable(
    matrixMult
    
    src/main.cpp 
    src/helpers.cpp
)