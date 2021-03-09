#include "doctest.h"
#include "snowman.hpp"
#include <iostream>
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;




string nospaces(string input) {
    remove(input.begin(), input.end(), ' ');
	return input;
}
TEST_CASE("Checking input wrong lenght") {
        CHECK_THROWS(snowman(111));
        CHECK_THROWS(snowman(11));
        CHECK_THROWS(snowman(1));
        CHECK_THROWS(snowman(1111));
        CHECK_THROWS(snowman(11111));
        CHECK_THROWS(snowman(111111));
        CHECK_THROWS(snowman(1111111));
        CHECK_THROWS(snowman(11111111));
        CHECK_THROWS(snowman(1111111111));
   
}

TEST_CASE("Checking input wrong numbers , above 4 below 1") {
        CHECK_THROWS(snowman(29387643));
        CHECK_THROWS(snowman(21347892));
        CHECK_THROWS(snowman(19876543));
        CHECK_THROWS(snowman(10000000));
        CHECK_THROWS(snowman(55555555));
        CHECK_THROWS(snowman(12345678));
        CHECK_THROWS(snowman(12312355));
        CHECK_THROWS(snowman(12312345));
        CHECK_THROWS(snowman(52352352));
        CHECK_THROWS(snowman(25654624));
        CHECK_THROWS(snowman(12315662));
        CHECK_THROWS(snowman(12312355));
    
}

TEST_CASE("Check checking hats") {
        //checking hats
        CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
        CHECK(nospaces(snowman(21114411)) == nospaces(" ___\n.....\n(.,.)\n( : )\n( : )"));
        CHECK(nospaces(snowman(41114411)) == nospaces(" ___\n(_*_)\n(.,.)\n( : )\n( : )"));
}
TEST_CASE("Check checking nose") {
        //checking nose
        CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
        CHECK(nospaces(snowman(12114411)) == nospaces("_===_\n(...)\n( : )\n( : )"));
        CHECK(nospaces(snowman(13114411)) == nospaces("_===_\n(._.)\n( : )\n( : )"));
        CHECK(nospaces(snowman(14114411)) == nospaces("_===_\n(. .)\n( : )\n( : )"));
}
TEST_CASE("Check left eye") {
        //checking left eye
        CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
        CHECK(nospaces(snowman(11214411)) == nospaces("_===_\n(o,.)\n( : )\n( : )"));
        CHECK(nospaces(snowman(11314411)) == nospaces("_===_\n(O.)\n( : )\n( : )"));
        CHECK(nospaces(snowman(11414411)) == nospaces("_===_\n(-,.)\n( : )\n( : )"));
}
TEST_CASE("Check right eye") {

        //checking right eye
        CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
        CHECK(nospaces(snowman(11124411)) == nospaces("_===_\n(.,o)\n( : )\n( : )"));
        CHECK(nospaces(snowman(11134411)) == nospaces("_===_\n(.,O)\n( : )\n( : )"));
        CHECK(nospaces(snowman(11144411)) == nospaces("_===_\n(.,-)\n( : )\n( : )"));
}
TEST_CASE("Check left arm ") {

        //checking left arm pos 5
        CHECK(nospaces(snowman(11111411)) == nospaces("_===_\n(.,.)\n<( : )\n( : )"));
        CHECK(nospaces(snowman(11133411)) == nospaces("_===_\n(.,O)\n( : )\n/( : )"));
        CHECK(nospaces(snowman(11144411)) == nospaces("_===_\n(.,-)\n( : )\n( : )"));
}
TEST_CASE("Check right arm ") {
        //checking right arm pos 6
        CHECK(nospaces(snowman(11114111)) == nospaces("_===_\n(.,.)\n( : )>\n( : )"));
        CHECK(nospaces(snowman(11134211)) == nospaces("_===_\n(.,O)/\n( : )\n( : )"));
        CHECK(nospaces(snowman(11144411)) == nospaces("_===_\n(.,-)\n( : )\n( : )"));
}
TEST_CASE("Check torso") {
        //checking torso pos 7
        CHECK(nospaces(snowman(11114111)) == nospaces("_===_\n(.,.)\n( : )>\n( : )"));
        CHECK(nospaces(snowman(11134221)) == nospaces("_===_\n(.,O)/\n(] [)\n( : )"));
        CHECK(nospaces(snowman(11134231)) == nospaces("_===_\n(.,O)\n(> <)\n( : )"));
        CHECK(nospaces(snowman(11144441)) == nospaces("_===_\n(.,-)\n(   )\n( : )"));
}
TEST_CASE("Check legs") {
        //checking legs pos 8
        CHECK(nospaces(snowman(11114111)) == nospaces("_===_\n(.,.)\n( : )>\n( : )"));
        CHECK(nospaces(snowman(11134233)) == nospaces("_===_\n(.,O)\n(> <)\n(___)"));
        CHECK(nospaces(snowman(11144444)) == nospaces("_===_\n(.,-)\n(   )\n(   )"));
}

