//
// Created by vitto on 19/04/2025.
//

#include "Character.h"
Character::Character(std::string name, int max_health, int max_stamina) {
    this->max_health = max_health;
    this->max_stamina = max_stamina;
    this->current_health = max_health;
    this->current_stamina = max_stamina;
    this->name = name;
}
