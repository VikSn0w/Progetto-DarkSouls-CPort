//
// Created by vitto on 19/04/2025.
//

#include "NPC.h"

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

int NPC::loadDialogs(std::string fileName) {
    std::cout << fileName << std::endl;
}



