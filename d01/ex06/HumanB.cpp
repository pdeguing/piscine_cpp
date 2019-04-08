/**
 * File              : HumanA.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 08.04.2019
 * Last Modified Date: 08.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "HumanB.hpp"

HumanB::HumanB(std::string n) : _name(n) {}

HumanB::~HumanB(void) {}

void	HumanB::setWeapon(Weapon &w) {
	this->_weapon = &w;
	return ;
}

void	HumanB::attack(void) {
	std::cout << this->_name << " attacks with his ";
	std::cout << this->_weapon->getType() << std::endl;
	return ;
}
