#include <iostream>
#include <string>

#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "FileHandling.h"

TEST_CASE( "File reading" ) {

    FileHandling filehandling("Input.txt", "Output.txt");

    REQUIRE( filehandling.read_file() == "This text has to be read in\n"  );
    REQUIRE_FALSE( filehandling.read_file() == "" );
}

TEST_CASE( "File writing" ) {

    FileHandling filehandling("Input.txt", "Output.txt");
    filehandling.write_file("This is the text I write into the file");

    REQUIRE( filehandling.read_file() == "This is the text I write into the file\n"  );
    REQUIRE_FALSE( filehandling.read_file() == "" );
}
