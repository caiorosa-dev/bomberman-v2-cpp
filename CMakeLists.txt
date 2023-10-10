cmake_minimum_required(VERSION 3.25)
project(Bombervali)

set(CMAKE_CXX_STANDARD 17)

add_executable(Bombervali main.cpp src/Game.h src/base/Entity.h src/utils/List.h src/entities/Player.h src/base/LivedEntity.h src/base/GameMap.h src/utils/MapReader.h src/utils/StringUtils.h src/utils/Path.h
        src/base/MapRender.h
        src/enums/GameChar.h
        src/enums/PowerupType.h)
