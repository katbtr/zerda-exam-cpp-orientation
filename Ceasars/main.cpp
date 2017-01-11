#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    if (argc == 1) {
        cout << "No filename is provided" << endl;
    } else if (string(argv[2]) != "-s") {
        cout << "No shift is provided" << endl;
    }

}