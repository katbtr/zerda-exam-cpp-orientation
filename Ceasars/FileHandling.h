#include <iostream>
#include <fstream>

#ifndef CAESARS_FILEHANDLING_H
#define CAESARS_FILEHANDLING_H


class FileHandling {
private:
    std::string input_filename;
    std::string output_filename;
    std::string input_text;
    std::ofstream my_file;
public:
    FileHandling();
    ~FileHandling();
    std::string read_file(std::string);
    void write_file(std::string, std::string);
};


#endif //CAESARS_FILEHANDLING_H
