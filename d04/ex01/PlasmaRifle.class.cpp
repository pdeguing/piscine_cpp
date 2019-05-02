/**
 * File              : PlasmaRifle.class.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 02.05.2019
 * Last Modified Date: 02.05.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "PlasmaRifle.class.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21) {
	return ;
}

PlasmaRifle::~PlasmaRifle(void) {
	return ;
}

void	PlasmaRifle::attack(void) const {
	std::cout
		<< "* piouuu piouuu piouuu *
		<< std::endl;
	return ;
}
