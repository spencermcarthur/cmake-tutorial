cmake_minimum_required(VERSION 3.18)
project(cmake-tutorial)

set(SRCS ${CMAKE_SOURCE_DIR}/source)
set(INCL ${CMAKE_SOURCE_DIR}/include)

add_subdirectory(bin)
add_subdirectory(lib)
