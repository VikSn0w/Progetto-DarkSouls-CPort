//
// Created by vitto on 19/04/2025.
//

#include "Player.h"

#include <conio.h>
#include <iostream>
#include <memory>

#include "../ENEMY/Enemy.h"

Player::Player(std::string name, int max_health,
               int max_stamina, int base_attack, int defence) : Character(name, max_health, max_stamina) {
    this->base_attack = base_attack;
    this->defence = defence;
}
void Player::heavyAttack(Enemy& enemy) {
    if (this->current_stamina >= 10) {
        this->current_stamina -= 10;
        enemy.receiveDamage(this->base_attack * 2);
        std::cout << this->name << " esegue un attacco pesante- contro " << enemy.getName() << std::endl;
    }
    std::cout << this->name << " non ha abbastanza stamina per esegire un attacco pesante su " << enemy.getName() << std::endl;
}

void Player::lightAttack(Enemy& enemy) {
    if (this->current_stamina >= 5) {
        this->current_stamina -= 5;
        std::cout << this->name << " esegue un attacco leggero contro " << enemy.getName() << std::endl;
        enemy.receiveDamage(this->base_attack);
    }
    std::cout << this->name << " non ha abbastanza stamina per esegire un attacco leggero su " << enemy.getName() << std::endl;
}


void Player::doAttack(Enemy& enemy) {
    std::cout << "Scegli il tipo di attacco - leggero (l) o pesante (p)" << std::endl;
    char selection = 'l';
    std::cin >> selection;
    switch (tolower(selection)) {
        case 'p':
            this->heavyAttack(enemy);
        break;
        case 'l':
            this->lightAttack(enemy);
        break;
        default:
            std::cout << "Tipo di attacco non valido, turno sprecato!" << std::endl;
        break;
    }
}

void Player::receiveDamage(int damage) {
    this->current_health -= damage;
}

