#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "headmaster.h"
#include "deatheater.h"
#include "darklord.h"
#include "firespell.h"
#include "darkspell.h"
#include "lightningspell.h"

TEST_CASE( "Create all types of wizards", "[wizard]" ) {
	Wizard* wizard;

	wizard = new Headmaster("Albus");
	wizard = new DeathEater("Severus");
	wizard = new DarkLord("Voldermolt");
}

TEST_CASE( "Headmaster can cast magic", "[wizard]" ) {
	Wizard* wizard = new Headmaster("Albus");

	REQUIRE( dynamic_cast<FireSpell*> (wizard->cast("fire")) );
	REQUIRE_FALSE( wizard->cast("dark") );
	REQUIRE_FALSE( wizard->cast("ice") );
	REQUIRE_FALSE( wizard->cast("lightning") );
}

TEST_CASE( "Death eater can cast magic", "[wizard]" ) {
	Wizard* wizard = new DeathEater("severus");

	REQUIRE_FALSE( wizard->cast("fire") );
	REQUIRE( dynamic_cast<DarkSpell*> (wizard->cast("dark")) );
	REQUIRE_FALSE( wizard->cast("ice") );
	REQUIRE_FALSE( wizard->cast("lightning") );
}

TEST_CASE( "Dark lord can cast magic", "[wizard]" ) {
	Wizard* wizard = new DarkLord("Voldermolt");

	REQUIRE_FALSE( wizard->cast("fire") );
	REQUIRE( dynamic_cast<DarkSpell*> (wizard->cast("dark")) );
	REQUIRE_FALSE( wizard->cast("ice") );
	REQUIRE( dynamic_cast<LightningSpell*> (wizard->cast("lightning")) );
}

TEST_CASE( "Cast spell on a headmaster", "[wizard]" ) {
	Wizard* wizard = new DarkLord("Voldermolt");

	REQUIRE_FALSE( wizard->cast("fire") );
	REQUIRE( dynamic_cast<DarkSpell*> (wizard->cast("dark")) );
	REQUIRE_FALSE( wizard->cast("ice") );
	REQUIRE( dynamic_cast<LightningSpell*> (wizard->cast("lightning")) );
}


