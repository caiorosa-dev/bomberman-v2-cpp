cmake_minimum_required(VERSION 3.25)
project(Bombervali)

set(CMAKE_CXX_STANDARD 17)

add_executable(Bombervali main.cpp src/Game.h src/base/Entity.h src/utils/List.h src/entities/Player.h)
