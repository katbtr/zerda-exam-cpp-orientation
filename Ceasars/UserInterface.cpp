
#include "UserInterface.h"

using namespace std;

UserInterface::UserInterface(int input_argc, char** input_argv) {
    argc = input_argc;
    argv = input_argv;
}

UserInterface::~UserInterface() {

}

void UserInterface::run() {
    if (argc == 1) {
        std::cout << "No filename is provided!" << std::endl;
    } else if (argc == 6) {
        this->filehandling = new FileHandling((std::string) argv[1], (std::string) argv[5]);
        this->cipherlogic = new CipherLogic(filehandling->read_file(), (std::string) argv[3]);
        cipherlogic->decrypt_text();
        filehandling->write_file(cipherlogic->get_result_text());
    } else if (argc == 5) {
        string temp = argv[1];
        if (temp == "-s" || temp == "-o") {
            cout << "No filename is provided." << endl;
        } else {
            cout << "No argument is provided." << endl;
        }
    } else if (argc < 4) {
        string temp = argv[1];
        if (temp == "-s" || temp == "-o") {
            cout << "No filename is provided." << endl;
        } else {
            cout << "No shift is provided." << endl;
        }
    } else if (argc == 4) {
        string temp3 = argv[3];
        string temp2 = argv[2];
        string temp1 = argv[1];
        if (temp1 == "-s" || temp1 == "-o") {
            cout << "No filename is provided." << endl;
        } else if (temp2 == "-o" && temp3 == "-s") {
            cout << "No argument is provided." << endl;
        } else {
            cout << "No shift is provided." << endl;
        }
    }
}

