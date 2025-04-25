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

        [[nodiscard]] std::string getName() const {
            return name;
        }

        [[nodiscard]] int getMaxHealth() const {
            return max_health;
        }

        [[nodiscard]] int getCurrentHealth() const {
            return current_health;
        }

        [[nodiscard]] int getCurrentStamina() const {
            return current_stamina;
        }

        [[nodiscard]] int getMaxStamina() const {
            return max_stamina;
        }

        [[nodiscard]] void resetCurrentStamina()  {
            this->current_stamina = this->max_stamina;
        }

        [[nodiscard]] void resetCurrentHealth()  {
            this->current_health = this->max_health;
        }
};


#endif //CHARACTER_H
