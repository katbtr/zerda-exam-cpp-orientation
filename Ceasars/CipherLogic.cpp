#include <iostream>
#include <string>
#include <cstdlib>

#include "CipherLogic.h"

using namespace std;

CipherLogic::CipherLogic(string text, string shift) {
    this->input_text = text;
    this->shift_in_int = atoi(shift.c_str());
    result = "";
}

Decryptor::Decryptor(std::string input_text, std::string number) {

}

CipherLogic::~CipherLogic() {

}

void CipherLogic::decrypt_text() {
    for (int i = 0; i < input_text.length(); i++) {
        if (isupper(input_text[i])) {
            result += char(int(input_text[i] + shift_in_int - 65) % 26 + 65);
        } else if (islower(input_text[i])) {
            result += char(int(input_text[i] + shift_in_int - 97) % 26 + 97);
        } else {
            result += input_text[i];
        }
    }
}

std::string CipherLogic::get_result_text() {
    return result;
}