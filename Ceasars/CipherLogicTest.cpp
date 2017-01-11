#include <iostream>
#include <string>

#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "CipherLogic.h"

TEST_CASE( "Cipher Logic is working" ) {

    CipherLogic cipherlogic("Itmd", "1");
    cipherlogic.decrypt_text();

    REQUIRE( cipherlogic.get_result_text() == "June"  );
    REQUIRE_FALSE( cipherlogic.get_result_text() == "" );
}

TEST_CASE( "Cipher Logic with negative shift" ) {

    CipherLogic cipherlogic("Kvof", "-1");
    cipherlogic.decrypt_text();

    REQUIRE( cipherlogic.get_result_text() == "June"  );
    REQUIRE_FALSE( cipherlogic.get_result_text() == "" );
}

TEST_CASE( "Cipher Logic with numbers" ) {

    CipherLogic cipherlogic("Itmd 28", "1");
    cipherlogic.decrypt_text();

    REQUIRE( cipherlogic.get_result_text() == "June 28"  );
    REQUIRE_FALSE( cipherlogic.get_result_text() == "JuneUMS" );
}