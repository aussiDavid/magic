#include "spell.h"
#include "firespell.h"
#include "darkspell.h"
#include "lightningspell.h"
#include "icespell.h"

Spell* Spell::make_spell(string spell){
	if (spell == "fire")
		return new FireSpell();
	
	else if (spell == "dark")
		return new DarkSpell();

	else if (spell == "lightning")
		return new LightningSpell();

	else if (spell == "ice")
		return new IceSpell();
	
	else 
		return NULL;
}