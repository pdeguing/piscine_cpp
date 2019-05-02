/**
 * File              : main.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 02.05.2019
 * Last Modified Date: 02.05.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include <iostream>
#include "AWeapon.class.hpp"
#include "Character.class.hpp"
#include "Enemy.class.hpp"
#include "RadScorpion.class.hpp"
#include "SuperMutant.class.hpp"
#include "PlasmaRifle.class.hpp"
#include "PowerFist.class.hpp"

int main() {
	/*
	Character* zaz = new Character("Zaz");
	std::cout << *zaz;

	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	zaz->equip(pr);
	std::cout << *zaz;

	zaz->equip(pf);
	zaz->attack(b);

	std::cout << *zaz;

	zaz->equip(pr);
	std::cout << *zaz;

	zaz->attack(b);
	std::cout << *zaz;

	zaz->attack(b);
	std::cout << *zaz;
	*/

	Character* zaz = new Character("zaz");
	Character* zaz2 = new Character(*zaz);
	std::cout << *zaz;

	RadScorpion* b = new RadScorpion();
	PlasmaRifle* pr = new PlasmaRifle();
	PowerFist* pf = new PowerFist();
	Enemy* b2 = new RadScorpion(*b);
	AWeapon* pr2 = new PlasmaRifle(*pr);
	AWeapon* pf2 = new PowerFist(*pf);

	zaz->equip(pr);
	std::cout << *zaz;

	zaz->equip(pr2);
	std::cout << *zaz;

	zaz->equip(pf);
	std::cout << *zaz;

	zaz->equip(pf2);
	zaz->attack(b);
	std::cout << *zaz;

	zaz->attack(b2);
	std::cout << *zaz;

	zaz->equip(pr);
	std::cout << *zaz;

	zaz->attack(b);
	std::cout << *zaz;

	zaz->attack(b);
	std::cout << *zaz;

	zaz2->attack(b);
	std::cout << "copy of zaz is unchanged\n";
	std::cout << *zaz2;

	return 0;
}
