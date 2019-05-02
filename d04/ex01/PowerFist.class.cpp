/**
 * File              : PowerFist.class.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 02.05.2019
 * Last Modified Date: 02.05.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "PowerFist.class.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 50, 8) {
	return ;
}

PowerFist::~PowerFist(void) {
	return ;
}

void	PowerFist::attack(void) const {
	std::cout
		<< "* pschhh... SBAM! *"
		<< std::endl;
	return ;
}
