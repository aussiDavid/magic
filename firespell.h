#ifndef FIRESPELL_H
#define FIRESPELL_H

#include "spell.h"

class FireSpell : public Spell {
	public:
		FireSpell();
		int damage();
};

#endif //FIRESPELL_H