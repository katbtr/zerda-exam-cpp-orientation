#include <iostream>
#include <string>
#include "CipherLogic.h"
#include "FileHandling.h"

#ifndef CAESARS_USERINTERFACE_H
#define CAESARS_USERINTERFACE_H


class UserInterface {
private:
    int argc;
    char** argv;
    FileHandling* filehandling;
    CipherLogic* cipherlogic;
public:
    UserInterface(int argc, char**);
    ~UserInterface();
    void run();
};


#endif //CAESARS_USERINTERFACE_H
