cmake_minimum_required(VERSION 3.10)
project(ASCII-Tower-Defense)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES
  src/main.cpp
  src/board.cpp
)

set(HEADERS
  headers/board.hpp
)

add_executable(ASCII-Tower-Defense ${SOURCES})
