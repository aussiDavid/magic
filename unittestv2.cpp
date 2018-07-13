#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "headmaster.h"
#include "deatheater.h"
#include "darklord.h"

#include "icespell.h"
#include "transfigurationspell.h"

TEST_CASE( "Create all types of wizards", "[wizard]" ) {
	Wizard* wizard;

	wizard = new Headmaster("Albus");
	wizard = new DeathEater("Severus");
	wizard = new DarkLord("Voldermolt");
}

TEST_CASE( "Headmaster can cast magic", "[wizard]" ) {
	Wizard* wizard = new Headmaster("Albus");

	REQUIRE_FALSE( wizard->cast("ice") );
	REQUIRE_FALSE( wizard->cast("transfiguration") );
}

TEST_CASE( "Death eater can cast magic", "[wizard]" ) {
	Wizard* wizard = new DeathEater("severus");

	REQUIRE_FALSE( wizard->cast("ice") );
	REQUIRE_FALSE( wizard->cast("transfiguration") );
}

TEST_CASE( "Dark lord can cast magic", "[wizard]" ) {
	Wizard* wizard = new DarkLord("Voldermolt");

	REQUIRE_FALSE( wizard->cast("ice") );
	REQUIRE_FALSE( wizard->cast("transfiguration") );
}