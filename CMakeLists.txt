cmake_minimum_required(VERSION 3.30)
project(untitled8)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled8 main.cpp
        ENEMY/Enemy.cpp
        ENEMY/Enemy.h
        ENEMY/EnemyBase.cpp
        ENEMY/EnemyBase.h
        ENEMY/EnemyMedium.cpp
        ENEMY/EnemyMedium.h
        ENEMY/EnemyHard.cpp
        ENEMY/EnemyHard.h
        GENERAL/gpfs.cpp
        GENERAL/gpfs.h
        CHARACTERS/Character.cpp
        CHARACTERS/Character.h)
