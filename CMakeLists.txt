cmake_minimum_required(VERSION 3.30)
project(untitled8)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled8 main.cpp
        ENEMY/Enemy.cpp
        ENEMY/Enemy.h
        GENERAL/gpfs.cpp
        GENERAL/gpfs.h
        CHARACTERS/Character.cpp
        CHARACTERS/Character.h
        CHARACTERS/Player.cpp
        CHARACTERS/Player.h
        CHARACTERS/NPC.cpp
        CHARACTERS/NPC.h
        CHARACTERS/Enemy.cpp
        CHARACTERS/Enemy.h
        MENU/menu.cpp
        MENU/menu.h)
