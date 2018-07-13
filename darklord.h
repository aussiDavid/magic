#ifndef DARKLORD_H
#define DARKLORD_H

#include <string>

#include "wizard.h"

class DarkLord : public Wizard {
	public:
		DarkLord(string name);
		Spell* cast(string spell);
		bool isAlive();

	private:
		int _deathCounter;
};

#endif //DARKLORD_H