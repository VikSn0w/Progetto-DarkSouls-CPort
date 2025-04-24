#include <string>

//
// Created by vitto on 18/04/2025.
//

#ifndef ENEMYHARD_H
#define ENEMYHARD_H

#include "Enemy.h"      // bring in the base-class declaration
#include <string>       // for std::string
#include "../CHARACTERS/Player.h"

class EnemyHard : public Enemy {
protected:
    int resistance = 0;
public:
    EnemyHard(std::string name, int health, int stamina, int resistance, bool isBoss);

    virtual void enemyLightAttack(Player& player);
    virtual void enemyHeavyAttack(Player& player);
    virtual void enemyReceiveDamage(int damage);
    bool isItBoss();
};

#endif //ENEMYHARD_H

