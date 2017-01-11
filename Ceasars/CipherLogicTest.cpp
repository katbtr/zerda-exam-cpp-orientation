#include <iostream>
#include <string>

#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "CipherLogic.h"

TEST_CASE( "Cipher Logic is working" ) {

    CipherLogic cipherlogic;

    std::string text = "Itmd";
    int shift = 1;

    REQUIRE( cipherlogic.decrypt_text(text, shift) == "June"  );
    REQUIRE_FALSE( cipherlogic.decrypt_text(text, shift) == "" );
}

TEST_CASE( "Cipher Logic with negative shift" ) {

    CipherLogic cipherlogic;

    std::string text = "Kvof";
    int shift = -1;

    REQUIRE( cipherlogic.decrypt_text(text, shift) == "June"  );
    REQUIRE_FALSE( cipherlogic.decrypt_text(text, shift) == "" );
}

TEST_CASE( "Cipher Logic with numbers" ) {

    CipherLogic cipherlogic;

    std::string text = "Itmd 28";
    int shift = 1;

    REQUIRE( cipherlogic.decrypt_text(text, shift) == "June 28"  );
    REQUIRE_FALSE( cipherlogic.decrypt_text(text, shift) == "JuneUMS" );
}