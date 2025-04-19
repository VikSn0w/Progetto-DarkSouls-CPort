//
// Created by vitto on 19/04/2025.
//

#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>


class Character {
    protected:
        std::string name;
        int max_health = 0;
        int current_health = 0;
        int current_stamina = 0;
        int max_stamina = 0;
    public:
        virtual ~Character() = default;

        Character(std::string name, int max_health, int max_stamina);
        virtual int doAttack() = 0;
        virtual void receiveDamage(int damage) = 0;
};


#endif //CHARACTER_H
