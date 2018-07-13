#include <iostream>
#include <vector>

#include "wizard.h"
#include "headmaster.h"
#include "deatheater.h"
#include "darklord.h"

using namespace std;

int main(){
	srand (time(NULL));

	cout << "Duel!" << endl;

	vector<Wizard*>* heroes = new vector<Wizard*>();

	heroes->push_back(new DeathEater("Severus"));
	heroes->push_back(new DarkLord("Voldermort"));

	for(int i = 0; i < heroes->size(); i++) {
		Wizard* albus = new Headmaster("Albus");
		Wizard* rival = heroes->at(i);

		while (albus->isAlive() && rival->isAlive()) {
		 	if(albus->isAlive())
				albus->attack(rival);
			if(rival->isAlive())
				rival->attack(albus);
		}

	 	if(albus->isAlive())
			cout << albus->name() << " wins" << endl << endl;
		if(rival->isAlive())
			cout << rival->name() << " wins" << endl << endl;
	}
}