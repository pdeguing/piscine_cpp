/**
 * File              : main.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 04.05.2019
 * Last Modified Date: 04.05.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "ISquad.class.hpp"
#include "Squad.class.hpp"
#include "ISpaceMarine.class.hpp"
#include "TacticalMarine.class.hpp"
#include "AssaultTerminator.class.hpp"

int main() {
	/*
	ISpaceMarine*	bob = new TacticalMarine;
	ISpaceMarine*	jim = new AssaultTerminator;
	ISquad* 	vlc = new Squad;

	vlc->push(bob);
	vlc->push(jim);

	for (int i = 0; i < vlc->getCount(); ++i) {
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	delete vlc;
	*/

	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISpaceMarine* joe = new AssaultTerminator;

	Squad* vlc = new Squad;

	std::cout << "squad created, adding Bob\n";
	vlc->push(bob);
	std::cout << "Adding Bob again, nothing happens\n";
	vlc->push(bob);

	std::cout << "Make copy of squad\n";
	Squad* vlc2 = new Squad(*vlc);

	std::cout << "Adding Jim\n";
	vlc->push(jim);

	std::cout << "Adding Joe\n";
	vlc->push(joe);

	for (int i = 0; i < vlc->getCount(); ++i) {
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	std::cout << "Copy of squad stay 2 marines\n";
	for (int i = 0; i < vlc2->getCount(); ++i) {
		ISpaceMarine* cur = vlc2->getUnit(i);
		cur->battleCry();
	}

	delete vlc2;
	delete vlc;

	return 0;
}
