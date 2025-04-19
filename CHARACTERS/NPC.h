//
// Created by vitto on 19/04/2025.
//

#ifndef NPC_H
#define NPC_H
#include <string>

class NPC {
    private:
        std::string name;
        std::string dialogs[32];
        int dialogCount = 0;
    public:
        NPC(std::string name);
        std::string getName();
        std::string getDialog(int index);
        int getDialogCount();
        int loadDialogs(std::string fileName);
};



#endif //NPC_H
