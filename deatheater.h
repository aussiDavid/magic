#ifndef DEATHEATER_H
#define DEATHEATER_H

#include <string>

#include "wizard.h"

class DeathEater : public Wizard {
	public:
		DeathEater(string name);
		Spell* cast(string spell);
};

#endif //DEATHEATER_H