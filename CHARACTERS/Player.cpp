//
// Created by vitto on 19/04/2025.
//

#include "Player.h"

#include <iostream>

Player::Player(std::string name, int max_health,
               int max_stamina, int base_attack, int defence) : Character(name, max_health, max_stamina) {
    this->base_attack = base_attack;
    this->defence = defence;
}
int Player::heavyAttack(std::string foo_name) {
    if (this->current_stamina >= 10) {
        this->current_stamina -= 10;
        int damage = this->base_attack * 2;
        std::cout << this->name << " esegue un attacco pesante- contro " << foo_name << std::endl;
        return damage;
    }
    std::cout << this->name << " non ha abbastanza stamina per esegire un attacco pesante su " << foo_name << std::endl;
    return 0;
}

int Player::lightAttack(std::string foo_name) {
    if (this->current_stamina >= 5) {
        this->current_stamina -= 5;
        int damage = this->base_attack;
        std::cout << this->name << " esegue un attacco leggero contro " << foo_name << std::endl;
        return damage;
    }
    std::cout << this->name << " non ha abbastanza stamina per esegire un attacco leggero su " << foo_name << std::endl;
    return 0;
}


int Player::doAttack(Enemy, char selection) {
    if (selection == 'p') {
        return this->heavyAttack(foo_name);
    }
    return this->lightAttack(foo_name);
}

void Player::receiveDamage(int damage) {
    this->current_health -= damage;
}

