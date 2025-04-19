//
// Created by vitto on 18/04/2025.
//

#include "EnemyMedium.h"

#include <iostream>
#include <ostream>

#include "../GENERAL/gpfs.h"
EnemyMedium::EnemyMedium(std::string name,
                     int health,
                     int stamina,
                     bool isBoss)
  : Enemy(name, health, stamina, isBoss)
{
}

int EnemyMedium::enemyLightAttack() {
    if (gpfs::generateRandomFloatLOHI(0,1) > 0.05 and this->current_stamina >= 10) {
        int damage = gpfs::generateRandomIntLOHI(50,80);
        std::cout << this->name << " ti ha colpito! Hai perso " << damage << " punti vita." << std::endl;
        this->current_stamina -= 10;
        return damage;
    }
    this->resetStamina();
    std::cout << this->name << " ti ha mancato!" << std::endl;
    return 0;
};

int EnemyMedium::enemyHeavyAttack() {
    if (gpfs::generateRandomFloatLOHI(0,1) > 0.2 and this->current_stamina >= 15) {
        int damage = gpfs::generateRandomIntLOHI(90,110);
        std::cout << this->name << " ti ha colpito! Hai perso " << damage << " punti vita." << std::endl;
        this->current_stamina -= 15;
        return damage;
    }
    this->resetStamina();
    std::cout << this->name << " ti ha mancato!" << std::endl;
    return 0;
};

void EnemyMedium::enemyReceiveDamage(int damage) {
    if (gpfs::generateRandomFloatLOHI(0,1) > 0.12) {
        this->current_health -= damage;
        std::cout << "Attacco riuscito! Il nemico ha ancora " << this->current_health << " punti vita." << std::endl;
    } else {
        std::cout << "Hai mancato il nemico " << this->name << "!" << std::endl;
    }
};