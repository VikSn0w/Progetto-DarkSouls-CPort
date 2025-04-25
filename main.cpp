#include <conio.h>
#include <iostream>
#include <string>
#include <unistd.h>

#include <ctime>
#include <limits>

#include "CHARACTERS/NPC.h"
#include "GENERAL/gpfs.h"
#include "ENEMY/Enemy.h"
#include "MENU/menu.h"

void introNarrativa();
void mainGameLoop();
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    std::srand (static_cast <unsigned> (time(nullptr)));

    mainGameLoop();
    return 0xA113;
}

void introNarrativa() {
    int intro_lines = 5;
    std::string intro[intro_lines] = {
        "...Il fuoco si spegne lentamente...",
        "Un'epoca oscura si avvicina...",
        "Solo il Non Morto prescelto puo' invertire il destino...",
        "Che sia tu?",
        "O solo un altro rigurgito di follia..."
    };

    for (int i = 0; i < intro_lines; i++) {
        std::cout << intro[i] << std::endl;
        sleep(2);
    }

    std::cout << "CHE IL GIOCO INIZI - premi un pulsante per continuare..." << std::endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clean buffer
    std::cin.get(); // Waits for Enter
}

void mainGameLoop() {
    bool inGamePool = true;
    introNarrativa();
    Player player = chooseClassMenu();
    std::cout << "Hai scelto la classe " << player.getName() << ". Preparati per il viaggio..." << std::endl;

    NPC npc0 = NPC("Vergine Misteriosa");
    short int npc0_dialogCount = 3;
    std::string npc0_dialogs[npc0_dialogCount] = {
        "Benvenuto, guerriero.",
        "Solo i forti sopravvivono.",
        "Buona fortuna."
    };
    npc0.loadDialogs(npc0_dialogs, npc0_dialogCount);
    npc0.doSpeaking();

    Enemy enemyPresetBase = Enemy("Goblin", 80, 50, 0, 1, false);
    Enemy enemyPresetMedium = Enemy("Servitore di Mirko", 120, 150, 0, 2, false);
    Enemy enemyPresetBoss = Enemy("Mirko Re di OOP", 250, 200, 50, 3, true);
    Enemy current_enemy = enemyPresetBase;
    while (inGamePool) {
        area_tranquilla();
        std::cout << "Stai per affrontare un nemico..." << std::endl;
        if (player.getEnemyCount() % 3 == 0 and player.getEnemyCount() > 0) {
            current_enemy = enemyPresetBoss;
            std::cout << "Incontri il boss." << std::endl;
        } else {
            current_enemy = gpfs::generateRandomIntLOHI(1,2) == 1 ? enemyPresetMedium : enemyPresetBase;
        }
        combatti(player, current_enemy);

        if (player.getCurrentHealth() <= 0) {
            inGamePool = false;
            std::cout << "Sei morto." << std::endl;
        } else {
            std::cout << "Premi enter per tornare all'area tranquilla..." << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clean buffer
            std::cin.get(); // Waits for Enter
            if (current_enemy.getIsBoss() and current_enemy.getCurrentHealth() <= 0) {
                inGamePool = false;
                std::cout << "Hai vinto!" << std::endl;
                std::cout << "----\nComplimenti hai ottenuto il ricettacolo della conoscenza proibita..." << std::endl;
                std::cout << "Si distruggono alcune rune... OOP" << std::endl;
                std::cout << "Le rune brillano... \n Un sussuro ti chiede: \nRiuscirai a trovare il Lord?" << std::endl;
            }
        }
    }
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.