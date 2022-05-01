cmake_minimum_required(VERSION 3.0)
project(ColorfulChar VERSION 1.0)

add_library(ccl main.cpp) #ColorfunCharLib

add_executable(test test.cpp)
target_link_libraries(test ccl)
