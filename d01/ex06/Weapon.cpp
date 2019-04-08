/**
 * File              : Weapon.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 08.04.2019
 * Last Modified Date: 08.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "Weapon.hpp"

Weapon::Weapon(std::string t) : _type(t) {}

Weapon::~Weapon(void) {}

const std::string	&Weapon::getType(void) {
	return this->_type;
}

void			Weapon::setType(std::string t) {
	this->_type = t;
	return ;
}
