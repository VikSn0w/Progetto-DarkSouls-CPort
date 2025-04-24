//
// Created by vitto on 19/04/2025.
//

#ifndef PLAYER_H
#define PLAYER_H
#include "Character.h"

class Player: public Character {
    private:
        int enemyCount = 0;
    protected:
        int base_attack = 0;
        int defence = 0;
    public:
        Player(std::string name, int max_health, int max_stamina, int base_attack, int defence);
        virtual int lightAttack(std::string foo_name);
        virtual int heavyAttack(std::string foo_name);
        void receiveDamage(int damage);
        virtual int doAttack(std::string foo_name, char selection) ;
};

#endif //PLAYER_H
