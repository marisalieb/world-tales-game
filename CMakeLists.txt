cmake_minimum_required(VERSION 3.28)
project(world_tales_game)

set(CMAKE_CXX_STANDARD 20)

add_executable(world_tales_game main.cpp
        src/FilmStudio.cpp
        include/FilmStudio.h
        src/GarmentFactory.cpp
        include/GarmentFactory.h
        src/FishingDock.cpp
        include/FishingDock.h
        src/CommunityGarden.cpp
        include/CommunityGarden.h
        src/Kitchen.cpp
        include/Kitchen.h
        src/HeritageHall.cpp
        include/HeritageHall.h
        src/Game.cpp
        include/Game.h
        include/Room.h)
