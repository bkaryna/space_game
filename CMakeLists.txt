cmake_minimum_required(VERSION 3.17)
project(space_game)

set(CMAKE_CXX_STANDARD 14)

add_executable(space_game main.cpp planet.cpp planet.h creature.h)