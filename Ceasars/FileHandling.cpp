
#include "FileHandling.h"

using namespace std;

FileHandling::FileHandling() {

}

FileHandling::~FileHandling() {

}

string FileHandling::read_file(string input_filename) {
    std::ifstream source_file(input_filename.c_str());
    std::string buffer;
    std::string content = "";
    while (getline(source_file, buffer)) {
        content += buffer + "\n";
    }
    source_file.close();
    return content;
}

void FileHandling::write_file(string output_filename, string result) {
    my_file.open(output_filename.c_str());
    my_file << result << endl;
    my_file.close();
}