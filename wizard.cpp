#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

#include <stdlib.h>
#include <algorithm>
#include <iostream>

#include "wizard.h"

using namespace std;

Wizard::Wizard(string name) {
	_name = name;
	_HP = 60;
	_MaxHP = _HP;
	_spell = new Spell();

	_fireBonus = 0;
	_darkBonus = 0;
	_fireResistance = 0;
	_darkResistance = 0;
}

void Wizard::attack(Wizard* wizard) {

	int damage = attackResolution(this, wizard, _spell);

	wizard->_HP -= damage;

	printf("[%-10s %s%2d%s/%2d HP] \t >> %s took %d damage\n",
		_name.c_str(),
		HPColor().c_str(),
		_HP,
		KWHT,
		_MaxHP,
		wizard->name().c_str(),
		damage);
}

bool Wizard::isAlive() {
	return _HP > 0;
}

string Wizard::name() {
	return _name;
}

string Wizard::HPColor() {
	
	if (_HP < _MaxHP*.25 )
		return KRED;
	else if (_HP < _MaxHP*.50)
		return KYEL;
	else if (_HP < _MaxHP*.80)
		return KWHT;
	else
		return KGRN;
}

int Wizard::attackResolution(Wizard* attacker, Wizard* deffender, Spell* spell) {
	return 0;
// 	return max(spell->firePts() + attacker->_fireBonus - deffender->_fireResistance, 0) + 
// 			max(spell->darkPts() + attacker->_darkBonus - deffender->_darkResistance, 0);
}

Spell* Wizard::cast(string spell) {
	return NULL;
}