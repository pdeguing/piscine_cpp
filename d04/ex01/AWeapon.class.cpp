/**
 * File              : AWeapon.class.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 02.05.2019
 * Last Modified Date: 02.05.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "AWeapon.class.hpp"

AWeapon::AWeapon(void) {
	return ;
}

AWeapon::AWeapon(AWeapon const & src) {
	*this = src;
	return ;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) :
_name(name), _apcost(apcost), _damage(damage) {
	return ;
}

AWeapon &	AWeapon::operator=(AWeapon const & tmp) {
	if (this == &tmp)
		return *this;
	this->_name = tmp.getName();
	this->_damage = tmp.getDamage();
	this->_apcost = tmp.getAPCost();
	return *this;
}

AWeapon::~AWeapon(void) {
	return ;
}

std::string const	AWeapon::getName(void) const {
	return this->_name;
}

int	AWeapon::getAPCost(void) const {
	return this->_apcost;
}

int	AWeapon::getDamage(void) const {
	return this->_damage;
}
