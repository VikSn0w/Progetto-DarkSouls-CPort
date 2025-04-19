#include <string>

//
// Created by vitto on 18/04/2025.
//

#ifndef ENEMYMEDIUM_H
#define ENEMYMEDIUM_H

#include "Enemy.h"      // bring in the base-class declaration
#include <string>       // for std::string

class EnemyMedium : public Enemy {
public:
    EnemyMedium(std::string name, int health, int stamina, bool isBoss);

    virtual int enemyLightAttack() = 0;
    virtual int enemyHeavyAttack() = 0;
    virtual void enemyReceiveDamage(int damage) = 0;
};

#endif // ENEMYMEDIUM_H

