#include "deatheater.h"
#include "darkspell.h"

DeathEater::DeathEater(string name):Wizard(name) {
	_MaxHP += _MaxHP*.10;

	// _spell = new Spell();
	_fireBonus = -2;
}

Spell* DeathEater::cast(string spell) {
	if (spell == "dark")
		return new DarkSpell();
	else
		return Wizard::cast(spell);
}