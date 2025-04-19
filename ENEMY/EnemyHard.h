#include <string>

//
// Created by vitto on 18/04/2025.
//

#ifndef ENEMYHARD_H
#define ENEMYHARD_H

#include "Enemy.h"      // bring in the base-class declaration
#include <string>       // for std::string

class EnemyHard : public Enemy {
protected:
    int resistance = 0;
public:
    EnemyHard(std::string name, int health, int stamina, int resistance, bool isBoss);

    virtual int enemyLightAttack() = 0;
    virtual int enemyHeavyAttack() = 0;
    virtual void enemyReceiveDamage(int damage) = 0;
    bool isItBoss();
};

#endif //ENEMYHARD_H

