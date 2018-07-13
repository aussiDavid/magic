#include "headmaster.h"
#include "firespell.h"

Headmaster::Headmaster(string name):Wizard(name) {
	_spell = new FireSpell();
	_fireBonus = 5;
	_fireResistance = 5;
}


Spell* Headmaster::cast(string spell) {
	if (spell == "fire")
		return new FireSpell();
	else
		return Wizard::cast(spell);
}