/**
 * File              : Zombie.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 08.04.2019
 * Last Modified Date: 08.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "Zombie.hpp"

Zombie::Zombie(std::string n, std::string t) : _name(n), _type(t) {
	return ;
}

Zombie::Zombie(void) {
	return ;
}

Zombie::~Zombie(void) {
	std::cout << this->_name << " is destroyed" << std::endl;
	return ;
}

void	Zombie::setName(std::string n) {
	this->_name = n;
	return ;
}

void	Zombie::setType(std::string t) {
	this->_type = t;
	return ;
}

void	Zombie::announce(void) {
	std::cout << "<" << this->_name << " (" << this->_type << ")> ";
	std::cout << "For the Horde!!!" << std::endl;
	return ;
}
