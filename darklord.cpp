#include "darklord.h"
#include "darkspell.h"
#include "lightningspell.h"

DarkLord::DarkLord(string name):Wizard(name) {
}



bool DarkLord::isAlive() {
	return _deathCounter >= 3 && Wizard::isAlive();
}

Spell* DarkLord::cast(string spell) {
	if (spell == "dark")
		return new DarkSpell();

	else if (spell == "lightning")
		return new LightningSpell();
	
	else
		return Wizard::cast(spell);
}