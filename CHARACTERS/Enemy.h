//
// Created by vitto on 19/04/2025.
//

#ifndef ENEMY_H
#define ENEMY_H

#include "Character.h"

class Enemy: public Character {
protected:
    int base_attack = 0;
public:
    Enemy(std::string name, int max_health, int max_stamina, int base_attack);
    virtual void receiveDamage(std::string foo_name, int damage) = 0;
    virtual int doAttack(std::string foo_name, char selection) = 0;
};



#endif //ENEMY_H
