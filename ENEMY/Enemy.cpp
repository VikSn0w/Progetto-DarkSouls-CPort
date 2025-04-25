//
// Created by vitto on 18/04/2025.
//

#include "Enemy.h"

#include <iostream>
#include "../CHARACTERS/Player.h"

Enemy::Enemy(std::string name, int health, int stamina,int resistance, short int whatType, bool isBoss) {
    this->max_health = health;
    this->max_stamina = stamina;
    this->current_stamina = stamina;
    this->current_health = health;
    this->isBoss = isBoss;
    this->whatType = whatType;
    this->resistance = resistance;
    this->name = name;
}

void Enemy::resetStamina() {
    this->current_stamina = this->max_stamina;
}

void Enemy::lightAttack(Player& player) {
    switch (this->whatType) {
        case 1: //BASE
            if (gpfs::generateRandomFloatLOHI(0,1) > 0.1 and this->current_stamina >= 10) {
                int damage = gpfs::generateRandomIntLOHI(30,50);
                std::cout << this->name << " ti ha colpito! Hai perso " << damage << " punti vita." << std::endl;
                this->current_stamina -= 10;
                player.receiveDamage(damage);
            }
            this->resetStamina();
            std::cout << this->name << " ti ha mancato!" << std::endl;
        break;

        case 2: //MEDIUM
            if (gpfs::generateRandomFloatLOHI(0,1) > 0.05 and this->current_stamina >= 10) {
                int damage = gpfs::generateRandomIntLOHI(50,80);
                std::cout << this->name << " ti ha colpito! Hai perso " << damage << " punti vita." << std::endl;
                this->current_stamina -= 10;
                player.receiveDamage(damage);
            }
            this->resetStamina();
            std::cout << this->name << " ti ha mancato!" << std::endl;
        break;

        case 3: //HARD
            if (gpfs::generateRandomFloatLOHI(0,1) > 0.3 and this->current_stamina >= 10) {
                int damage = gpfs::generateRandomIntLOHI(100,110);
                std::cout << this->name << " ti ha colpito! Hai perso " << damage << " punti vita." << std::endl;
                this->current_stamina -= 10;
                player.receiveDamage(damage);
            }
            this->resetStamina();
            std::cout << this->name << " ti ha mancato!" << std::endl;
        break;

        default: //BASE
            if (gpfs::generateRandomFloatLOHI(0,1) > 0.1 and this->current_stamina >= 10) {
                int damage = gpfs::generateRandomIntLOHI(30,50);
                std::cout << this->name << " ti ha colpito! Hai perso " << damage << " punti vita." << std::endl;
                this->current_stamina -= 10;
                player.receiveDamage(damage);
            }
            this->resetStamina();
            std::cout << this->name << " ti ha mancato!" << std::endl;
        break;
    }
}

void Enemy::heavyAttack(Player& player) {
    switch (this->whatType) {
        case 1: //BASE
            this->lightAttack(player);
        break;

        case 2: //MEDIUM
            if (gpfs::generateRandomFloatLOHI(0,1) > 0.2 and this->current_stamina >= 15) {
                int damage = gpfs::generateRandomIntLOHI(90,110);
                std::cout << this->name << " ti ha colpito! Hai perso " << damage << " punti vita." << std::endl;
                this->current_stamina -= 15;
                player.receiveDamage(damage);
            }
            this->resetStamina();
            std::cout << this->name << " ti ha mancato!" << std::endl;
        break;

        case 3: //HARD
            if (gpfs::generateRandomFloatLOHI(0,1) > 0.5 and this->current_stamina >= 15) {
                int damage = gpfs::generateRandomIntLOHI(120,130);
                std::cout << this->name << " ti ha colpito! Hai perso " << damage << " punti vita." << std::endl;
                this->current_stamina -= 15;
                player.receiveDamage(damage);
            }
            this->resetStamina();
            std::cout << this->name << " ti ha mancato!" << std::endl;
        break;

        default: //BASE
            this->lightAttack(player);
        break;
    }
}

void Enemy::receiveDamage(int damage) {
    int effectiveDamage = this->isBoss ? damage - this->resistance : damage;
    float chances;
    switch (this->whatType) {
        case 1: //BASE
            chances = 0.1;
        break;

        case 2: //MEDIUM
            chances = 0.12;
        break;

        case 3: //HARD
            chances = 0.2;
        break;

        default: //BASE
            chances = 0.1;
        break;
    }

    if (gpfs::generateRandomFloatLOHI(0,1) > chances) {
        this->current_health -= effectiveDamage;
        std::cout << "Attacco riuscito! Il nemico ha ancora " << this->current_health << " punti vita." << std::endl;
    } else {
        std::cout << "Hai mancato il nemico " << this->name << "!" << std::endl;
    }
}

std::string Enemy::getName() {
    return this->name;
}