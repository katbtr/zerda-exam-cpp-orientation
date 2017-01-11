
#include "UserInterface.h"

UserInterface::UserInterface(int input_argc, char** input_argv) {
    argc = input_argc;
    argv = input_argv;
}

UserInterface::~UserInterface() {

}

void UserInterface::run() {
    if (argc == 1) {
        std::cout << "No filename is provided!" << std::endl;
    }
    else if (argc == 6) {
        this->filehandling = new FileHandling((std::string)argv[1], (std::string)argv[5]);
        this->cipherlogic = new CipherLogic(filehandling->read_file(), (std::string)argv[3]);
        cipherlogic->decrypt_text();
        filehandling->write_file(cipherlogic->get_result_text());
    }
}

/*
if (argc == 1) {
cout << "No filename is provided" << endl;
} else if (string(argv[2]) != "-s") {
cout << "No shift is provided" << endl;
}*/