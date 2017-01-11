#include <iostream>
#include <string>

#ifndef CAESARS_CIPHERLOGIC_H
#define CAESARS_CIPHERLOGIC_H


class CipherLogic {
private:
    std::string input_text;
    std::string result;
    int shift;
public:
    CipherLogic();
    ~CipherLogic();
    std::string decrypt_text(std::string, int);

};

#endif //CAESARS_CIPHERLOGIC_H
