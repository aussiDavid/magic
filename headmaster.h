#ifndef HEADMASTER_H
#define HEADMASTER_H

#include <string>

#include "wizard.h"
#include "spell.h"

class Headmaster : public Wizard {
	public:
		Headmaster(string name);
		Spell* cast(string name);
};

#endif //HEADMASTER_H