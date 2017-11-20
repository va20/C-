cmake_minimum_required(VERSION 3.8)
project(Cours_class)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp CompteEnBanque.cpp CompteEnBanque.h Pile.cpp Pile.h Individu.cpp Individu.h Nombre.cpp Nombre.h)
add_executable(Cours_class ${SOURCE_FILES})