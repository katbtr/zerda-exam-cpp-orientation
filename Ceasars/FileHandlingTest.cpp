#include <iostream>
#include <string>

#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "FileHandling.h"

TEST_CASE( "File reading" ) {

    FileHandling filehandling;

    REQUIRE( filehandling.read_file("Input.txt") == "This text has to be read in\n"  );
    REQUIRE_FALSE( filehandling.read_file("Input.txt") == "" );
}

TEST_CASE( "File writing" ) {

    FileHandling filehandling;
    filehandling.write_file("Output.txt", "This is the text I write into the file");

    REQUIRE( filehandling.read_file("Output.txt") == "This is the text I write into the file\n"  );
    REQUIRE_FALSE( filehandling.read_file("Output.txt") == "" );
}
