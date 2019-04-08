/**
 * File              : HumanA.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 08.04.2019
 * Last Modified Date: 08.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon &w) : _name(n), _weapon(w) {}

HumanA::~HumanA(void) {}

void	HumanA::attack(void) {
	std::cout << this->_name << " attacks with his ";
	std::cout << this->_weapon.getType() << std::endl;
	return ;
}
