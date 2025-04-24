#include <string>

//
// Created by vitto on 18/04/2025.
//

#ifndef ENEMYMEDIUM_H
#define ENEMYMEDIUM_H

#include "Enemy.h"      // bring in the base-class declaration
#include <string>       // for std::string
#include "../CHARACTERS/Player.h"



class EnemyMedium : public Enemy {
public:
    EnemyMedium(std::string name, int health, int stamina, bool isBoss);

    virtual void enemyLightAttack(Player& player);
    virtual void enemyHeavyAttack(Player& player);
    virtual void enemyReceiveDamage(int damage);
};

#endif // ENEMYMEDIUM_H

