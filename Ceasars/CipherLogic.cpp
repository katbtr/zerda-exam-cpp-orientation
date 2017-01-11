#include <iostream>
#include <string>

#include "CipherLogic.h"

using namespace std;

CipherLogic::CipherLogic() {
    result = "";
}

CipherLogic::~CipherLogic() {

}

std::string CipherLogic::decrypt_text(string input_text, int shift) {
    for (int i = 0;i < input_text.length(); i++) {
        if (isupper(input_text[i])) {
            result += char(int(input_text[i] + shift - 65) % 26 + 65);
        } else if (islower(input_text[i])) {
            result += char(int(input_text[i] + shift - 97) % 26 + 97);
        } else {
            result += input_text[i];
        }
    }
    return result;
}