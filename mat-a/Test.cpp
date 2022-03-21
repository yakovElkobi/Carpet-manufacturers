/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 *
 * AUTHORS: <yakov elkobi>
 * 
 * Date: 2022-03
 */
#include "doctest.h"
#include "mat.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}


TEST_CASE("Good input") {
	CHECK(nospaces(mat(9, 7, '@', '-')) == nospaces("@@@@@@@@@\n"
	                                                "@-------@\n"
													"@-@@@@@-@\n"
													"@-@---@-@\n"
													"@-@@@@@-@\n"
													"@-------@\n"
													"@@@@@@@@@"));
	CHECK(nospaces(mat(1, 1, '-', '$')) == nospaces("-"));
	CHECK(nospaces(mat(13, 5, '@', '-')) == nospaces("@@@@@@@@@@@@@\n"
                                                     "@-----------@\n"
													 "@-@@@@@@@@@-@\n"
													 "@-----------@\n"
													 "@@@@@@@@@@@@@"));
    CHECK(nospaces(mat(3, 5, '$', '+')) == nospaces("$$$\n"
	                                                "$+$\n"
													"$+$\n"
													"$+$\n"
													"$$$"));
	CHECK(nospaces(mat(1, 1, '$', '-')) == nospaces("$"));
	CHECK(nospaces(mat(1, 1, '$', '$')) == nospaces("$"));
	CHECK(nospaces(mat(1, 1, '@', '@')) == nospaces("@"));
	/* Add more test here */
}

TEST_CASE("Bad input even numbers") {
    CHECK_THROWS(mat(10, 5, '$', '%'));
	CHECK_THROWS(mat(3, 6, '%', '$'));
	CHECK_THROWS(mat(0, 3, '%', '$'));
	CHECK_THROWS(mat(3, 0, '%', '$'));
	CHECK_THROWS(mat(0, 0, '%', '$'));
	CHECK_THROWS(mat(100, 51, '%', '$'));
	CHECK_THROWS(mat(1000, 51, '%', '$'));
	CHECK_THROWS(mat(5000, 1001, '%', '$'));
	CHECK_THROWS(mat(2, 2, '%', '$'));
	
    /* Add more test here */
}

TEST_CASE("Bad input negative numbers") {
	CHECK_THROWS(mat(-5, 3, '$', '-'));
	CHECK_THROWS(mat(7, -14, '&', '-'));
	CHECK_THROWS(mat(-1, -1, '&', '-'));
	CHECK_THROWS(mat(-150, -200, '&', '-'));
	
/* Add more test cases here */
}