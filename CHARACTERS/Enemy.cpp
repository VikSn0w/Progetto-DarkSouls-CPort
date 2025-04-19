//
// Created by vitto on 19/04/2025.
//

#include "Enemy.h"

#include <iostream>

Enemy::Enemy(std::string name, int max_health,
             int max_stamina, int base_attack) : Character(name, max_health, max_stamina) {
    this->base_attack = base_attack;
}

int Enemy::doAttack(std::string foo_name, char selection) {
    std::cout << this->name << " attacca " << foo_name << std::endl;
    return this->base_attack;
}

void Enemy::receiveDamage(std::string foo_name, int damage) {
    this->current_health -= damage;
    std::cout << this->name << " ha subito " << damage << " danni da " << foo_name << ". Salute rimanente: " << this->current_health<< std::endl;
}
