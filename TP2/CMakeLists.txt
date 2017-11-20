cmake_minimum_required(VERSION 3.8)
project(TP2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp exo1.cpp exo2.cpp Fractions.cpp Fractions.h)
add_executable(TP2 ${SOURCE_FILES})