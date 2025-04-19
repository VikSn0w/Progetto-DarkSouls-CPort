//
// Created by vitto on 18/04/2025.
//

#include "Enemy.h"
Enemy::Enemy(std::string name, int health, int stamina, bool isBoss) {
    this->max_health = health;
    this->max_stamina = stamina;
    this->current_stamina = stamina;
    this->current_health = health;
    this->isBoss = isBoss;
    this->name = name;
}

void Enemy::resetStamina() {
    this->current_stamina = this->max_stamina;
}
