#include <string>

//
// Created by vitto on 18/04/2025.
//

#ifndef ENEMYBASE_H
#define ENEMYBASE_H

#include "Enemy.h"      // bring in the base-class declaration
#include <string>       // for std::string

class EnemyBase : public Enemy {
public:
    EnemyBase(std::string name, int health, int stamina, bool isBoss);

    virtual int enemyLightAttack() = 0;
    virtual int enemyHeavyAttack() = 0;
    virtual void enemyReceiveDamage(int damage) = 0;
};

#endif // ENEMYBASE_H

