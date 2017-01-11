#include <iostream>
#include <string>

#ifndef CAESARS_CIPHERLOGIC_H
#define CAESARS_CIPHERLOGIC_H


class CipherLogic {
private:
    std::string input_text;
    std::string result;
    std::string shift;
    int shift_in_int;
public:
    CipherLogic(std::string, std::string);
    ~CipherLogic();
    void decrypt_text();
    std::string get_result_text();

};

#endif //CAESARS_CIPHERLOGIC_H