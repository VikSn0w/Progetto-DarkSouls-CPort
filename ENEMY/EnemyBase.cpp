//
// Created by vitto on 18/04/2025.
//

#include "EnemyBase.h"

#include <iostream>
#include <ostream>

#include "../CHARACTERS/Player.h"
#include "../GENERAL/gpfs.h"
EnemyBase::EnemyBase(std::string name,
                     int health,
                     int stamina,
                     bool isBoss)
  : Enemy(name, health, stamina, isBoss)
{
}


void EnemyBase::enemyLightAttack(Player& player) {
    if (gpfs::generateRandomFloatLOHI(0,1) > 0.1 and this->current_stamina >= 10) {
        int damage = gpfs::generateRandomIntLOHI(30,50);
        std::cout << this->name << " ti ha colpito! Hai perso " << damage << " punti vita." << std::endl;
        this->current_stamina -= 10;
        player.receiveDamage(damage);
    }
    this->resetStamina();
    std::cout << this->name << " ti ha mancato!" << std::endl;
};

void EnemyBase::enemyHeavyAttack(Player& player) {
    return this->enemyLightAttack(player);
};

void EnemyBase::enemyReceiveDamage(int damage) {
    if (gpfs::generateRandomFloatLOHI(0,1) > 0.1) {
        this->current_health -= damage;
        std::cout << "Attacco riuscito! Il nemico ha ancora " << this->current_health << " punti vita." << std::endl;
    } else {
        std::cout << "Hai mancato il nemico " << this->name << "!" << std::endl;
    }
};