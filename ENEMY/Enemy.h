//
// Created by vitto on 18/04/2025.
//

#ifndef ENEMY_H
#define ENEMY_H
#include <string>

class Enemy {
    protected:
        int max_health = 0;
        int max_stamina = 0;
        int current_health = 0;
        int current_stamina = 0;
        bool isBoss = false;
        std::string name;
    public:
        virtual ~Enemy() = default;

        Enemy(std::string name, int health, int stamina, bool isBoss);

        virtual void enemyLightAttack() = 0;
        virtual void enemyHeavyAttack() = 0;
        virtual void enemyReceiveDamage(int damage) = 0;
        void resetStamina();
};



#endif //ENEMY_H
