//
// Created by vitto on 19/04/2025.
//

#ifndef PLAYER_H
#define PLAYER_H
#include "Character.h"
class Enemy;

class Player: public Character {
    private:
        int enemyCount = 0;
    protected:
        int base_attack = 0;
        int defence = 0;
    public:
        Player(std::string name, int max_health, int max_stamina, int base_attack, int defence);
        virtual void lightAttack(Enemy& enemy);
        virtual void heavyAttack(Enemy& enemy);
        void receiveDamage(int damage);
        void incrementEnemyCount() {
            this->enemyCount++;
        }
        int getEnemyCount() {
            return this->enemyCount;
        }
        virtual void doAttack(Enemy& enemy) ;
};

#endif //PLAYER_H
