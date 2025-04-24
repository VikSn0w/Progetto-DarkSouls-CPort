//
// Created by vitto on 19/04/2025.
//

#include "NPC.h"

#include <conio.h>
#include <iostream>
#include <ostream>

NPC::NPC(std::string name) {
    this->name = name;
}

std::string NPC::getName() {
    return this->name;
}

std::string NPC::getDialog(int index) {
    return this->dialogs[index];
}

int NPC::getDialogCount() {
    return this->dialogCount;
}

int NPC::loadDialogs(std::string dialogs[], int dialogCount) {
    for (int i = 0; i < dialogCount; i++) {
        this->dialogs[i] = dialogs[i];
    }
    this->dialogCount = dialogCount;
    return dialogCount;
}

void NPC::doSpeaking() {
    std::cout << this->name << ": " << std::endl;
    for (int i = 0; i < this->dialogCount; i++) {
        std::cout << this->dialogs[i] << std::endl;
        getch();
    }
}



