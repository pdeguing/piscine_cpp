/**
 * File              : ZombieEvent.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 08.04.2019
 * Last Modified Date: 08.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "ZombieEvent.hpp"

Zombie::Zombie(void) {
	return ;
}

Zombie::~Zombie(void) {
	return ;
}

void	Zombie::setZombieType(std::string type) {
	this->_type = type;
	return ;
}

Zombie	*Zombie::newZombie(std::string name) {
	Zombie	*nz;

	nz = new Zombie(name, this->_type);
	return nz;
}

void	randomChump(void) {
	Zombie	randomZombie;
}
