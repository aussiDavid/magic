#ifndef WIZARD_H
#define WIZARD_H

#include <string>

#include "spell.h"

using namespace std;

class Wizard {
	public:
		Wizard(string name);
		void attack(Wizard* wizard);
		bool isAlive();
		string name();
		virtual Spell* cast(string spell);

	protected:
		string _name;
		int _HP;
		int _MaxHP;
		Spell* _spell;

		int _fireBonus;
		int _darkBonus;
		int _fireResistance;
		int _darkResistance;

		string HPColor();
		int attackResolution(Wizard* attacker, Wizard* deffender, Spell* spell);

};

#endif //WIZARD_H