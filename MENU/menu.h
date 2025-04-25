//
// Created by vitto on 22/04/2025.
//
#pragma once
#include <string>
#include "../CHARACTERS/Player.h"
#define N_CLASSES 6

#ifndef MENU_H
#define MENU_H

struct CharacterClass {
    std::string name;
    int health;
    int damage;
    int defence;
    int stamina;
};

inline CharacterClass classes[N_CLASSES] = {
    {"NOT VALID", -1, -1, -1, -1},
    {"Cavaliere", 450, 90, 500, 30},
    {"Ladro", 300, 160, 30, 12},
    {"Mago", 280, 130, 60, 10},
    {"Barbaro", 400, 120, 55, 18},
    {"Cavaliere", 420, 110, 38, 35}
};

CharacterClass chooseClass(char choice);

Player setClassToPlayer(CharacterClass class_);

Player chooseClassMenu();

void area_tranquilla();

void combatti(Player& player, Enemy& enemy);
#endif //MENU_H
