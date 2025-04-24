//
// Created by vitto on 22/04/2025.
//
#include "menu.h"
#include <conio.h>

#include <iostream>
#include <ostream>

#include "../CHARACTERS/NPC.h"

CharacterClass chooseClass(char choice) {
    if (choice - '0' > 0 and choice - '0' <= N_CLASSES - 1) {
        return classes[choice - '0'];
    }
    return classes[0];
}

Player setClassToPlayer(CharacterClass class_) {
    Player player = Player(class_.name, class_.health, class_.stamina, class_.damage, class_.defence);
    return player;
}

Player chooseClassMenu() {
    std::cout << "Scegli la tua classe:" << std::endl;
    CharacterClass class_ = chooseClass(0);
    while (class_.name == classes[0].name) {
        for (int i = 1; i < N_CLASSES; i++) {
            std::cout << i << ") " << classes[i].name << " - "
            << "Att: " << classes[i].damage << " | "
            << "Def: " << classes[i].defence << " | "
            << "HP: " << classes[i].health << " | "
            << "St.: " << classes[i].stamina
            << std::endl;
        }
        char choice = getch();
        class_ = chooseClass(choice);
    }
    return setClassToPlayer(class_);
}

void area_tranquilla() {
    NPC npc1 = NPC("Maestro Aleric");
    short int npc1_dialogCount = 2;
    std::string npc1_dialogs[npc1_dialogCount] = {"Hai molto da imparare, giovane guerriero...", "Ogni scelta che fai ti cambia."};
    npc1.loadDialogs(npc1_dialogs, npc1_dialogCount);

    NPC npc2 = NPC("Mercante Lyra");
    short int npc2_dialogCount = 2;
    std::string npc2_dialogs[npc2_dialogCount] = {"Non ho nulla da vendere oggi...", "Ma forse domani tornerai con più fortuna."};
    npc2.loadDialogs(npc2_dialogs, npc2_dialogCount);

    NPC npc3 = NPC("Guerriero Errante");
    short int npc3_dialogCount = 2;
    std::string npc3_dialogs[npc3_dialogCount] = {"La battaglia è la mia vita.", "Torna quando sarai un guerriero vero."};
    npc3.loadDialogs(npc2_dialogs, npc3_dialogCount);

    short int choice = '0';
    while (choice != '4') {
        std::cout << "|----Area Tranquilla----|" << std::endl;
        std::cout << "1) " << npc1.getName() << std::endl;
        std::cout << "2) " << npc2.getName() << std::endl;
        std::cout << "3) " << npc3.getName() << std::endl;
        std::cout << "4) " << "Esci e affronta il prossimo nemico" << std::endl;
        choice = getch();
        switch (choice) {
            case '1':
                npc1.doSpeaking();
                break;
            case '2':
                npc2.doSpeaking();
                break;
            case '3':
                npc3.doSpeaking();
            break;
                break;
            case '4':
                choice = '4';
                break;
            default:
                choice = '0';
                std::cout << "Scelta non valida." << std::endl;
                break;
        }
    }
}

