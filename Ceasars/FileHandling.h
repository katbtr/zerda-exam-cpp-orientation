#include <iostream>
#include <fstream>

#ifndef CAESARS_FILEHANDLING_H
#define CAESARS_FILEHANDLING_H


class FileHandling {
private:
    std::string input_filename;
    std::string output_filename;
    std::string content;
    std::string input_text;
    std::ofstream my_file;
public:
    FileHandling(std::string, std::string);
    ~FileHandling();
    std::string read_file();
    void write_file(std::string);
};

#endif //CAESARS_FILEHANDLING_H
