//
// Created by vitto on 18/04/2025.
//

#ifndef ENEMY_H
#define ENEMY_H
#include <string>
#include "../GENERAL/gpfs.h"

class Player;

class Enemy {
    protected:
        int max_health = 0;
        int max_stamina = 0;
        int current_health = 0;
        int current_stamina = 0;
        bool isBoss = false;
        short int whatType; // 1 base; 2 medium; 3 hard
        std::string name;
        int resistance = 0;
    public:
        ~Enemy() = default;

        Enemy(std::string name, int health, int stamina, int resistance, short int whatType, bool isBoss);

        void lightAttack(Player& player);
        void heavyAttack(Player& player);
        void receiveDamage(int damage);
        void resetStamina();

        [[nodiscard]] int getMaxHealth() const {
            return max_health;
        }

        [[nodiscard]] int getMaxStamina() const {
            return max_stamina;
        }

        [[nodiscard]] int getCurrentHealth() const {
            return current_health;
        }

        [[nodiscard]] int getCurrentStamina() const {
            return current_stamina;
        }

        [[nodiscard]] bool getIsBoss() const {
            return isBoss;
        }

        [[nodiscard]] short int getEnemyType() const {
            return whatType;
        }

        [[nodiscard]] std::string getLevel() const {
            switch (this->whatType) {
                case 1:
                    return "Base";
                case 2:
                    return "Medium";
                case 3:
                    return "Hard";
                default:
                    return "Base";
            }
        }

        [[nodiscard]] std::string getName() const {
            return name;
        }

        [[nodiscard]] int getResistance() const {
            return resistance;
        }

        std::string getName();
};



#endif //ENEMY_H
