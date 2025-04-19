#include <iostream>
#include <string>

#include <ctime>
#include "GENERAL/gpfs.h"
#include "ENEMY/Enemy.h"
#include "ENEMY/EnemyBase.h"
#include "ENEMY/EnemyMedium.h"
#include "ENEMY/EnemyHard.h"

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    std::srand (static_cast <unsigned> (time(nullptr)));

    int test = gpfs::generateRandomIntLOHI(4, 10);
    std::cout << test << std::endl;
    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.