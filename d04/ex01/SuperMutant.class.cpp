/**
 * File              : SuperMutant.class.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 02.05.2019
 * Last Modified Date: 02.05.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "SuperMutant.class.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant") {
	std::cout
		<< "Gaaah. Me want smash heads !"
		<< std::endl;
	return ;
}

SuperMutant::~SuperMutant(void) {
	std::cout
		<< "Aaargh ..."
		<< std::endl;
	return ;
}

void	SuperMutant::takeDamage(int d) {
	Enemy::takeDamage(d - 3);
	return ;
}
