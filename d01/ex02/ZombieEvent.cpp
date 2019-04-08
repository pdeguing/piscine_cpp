/**
 * File              : ZombieEvent.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 08.04.2019
 * Last Modified Date: 08.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) {
	return ;
}

ZombieEvent::~ZombieEvent(void) {
	return ;
}

void	ZombieEvent::setZombieType(std::string type) {
	this->_type = type;
	return ;
}

Zombie	*ZombieEvent::newZombie(std::string name) {
	Zombie	*nz;

	nz = new Zombie(name, this->_type);
	return nz;
}

void	ZombieEvent::randomChump(void) {
	std::string	rand_name;
	std::string	rand_alpha = "abcdefghijklmnopqrstuvwxyz";
	Zombie		*z;

	for (int i = 0; i < 7; i++) {
		rand_name += rand_alpha[rand() % 26];
	}
	z = this->newZombie(rand_name);
	z->announce();
	delete z;
	return ;
}
