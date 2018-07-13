#ifndef SPELL_H
#define SPELL_H

#include <string>

using namespace std;

class Spell {
	public:
		static Spell* make_spell(string spell);
		virtual ~Spell() {};
};

#endif //SPELL_H