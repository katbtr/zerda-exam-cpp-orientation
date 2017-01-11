
#include "FileHandling.h"

using namespace std;

FileHandling::FileHandling(std::string filename1, std::string filename2) {
    content = "";
    this->input_filename = filename1;
    this->output_filename = filename2;
}

FileHandling::~FileHandling() {

}

string FileHandling::read_file() {
    ifstream source_file(input_filename);
    string buffer;
    while (getline(source_file, buffer)) {
        content += buffer + "\n";
    }
    source_file.close();
    return content;
}

void FileHandling::write_file(string result) {
    my_file.open(output_filename.c_str());
    my_file << result << endl;
    my_file.close();
}