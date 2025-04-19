//
// Created by vitto on 18/04/2025.
//

#include "EnemyHard.h"

#include <iostream>
#include <ostream>

#include "../GENERAL/gpfs.h"
EnemyHard::EnemyHard(std::string name, int health,
    int stamina, int resistance, bool isBoss) : Enemy(name, health, stamina, isBoss) {
    this->resistance = resistance;
}

bool EnemyHard::isItBoss() {
    return this->isBoss;
}

int EnemyHard::enemyLightAttack() {
    if (gpfs::generateRandomFloatLOHI(0,1) > 0.3 and this->current_stamina >= 10) {
        int damage = gpfs::generateRandomIntLOHI(100,110);
        std::cout << this->name << " ti ha colpito! Hai perso " << damage << " punti vita." << std::endl;
        this->current_stamina -= 10;
        return damage;
    }
    this->resetStamina();
    std::cout << this->name << " ti ha mancato!" << std::endl;
    return 0;
};

int EnemyHard::enemyHeavyAttack() {
    if (gpfs::generateRandomFloatLOHI(0,1) > 0.5 and this->current_stamina >= 15) {
        int damage = gpfs::generateRandomIntLOHI(120,130);
        std::cout << this->name << " ti ha colpito! Hai perso " << damage << " punti vita." << std::endl;
        this->current_stamina -= 15;
        return damage;
    }
    this->resetStamina();
    std::cout << this->name << " ti ha mancato!" << std::endl;
    return 0;
};

void EnemyHard::enemyReceiveDamage(int damage) {
    int effectiveDamage = this->isItBoss() ? damage - this->resistance : damage;
    if (gpfs::generateRandomFloatLOHI(0,1) > 0.2) {
        this->current_health -= effectiveDamage;
        std::cout << "Attacco riuscito! Il nemico ha ancora " << this->current_health << " punti vita." << std::endl;
    } else {
        std::cout << "Hai mancato il nemico " << this->name << "!" << std::endl;
    }
};