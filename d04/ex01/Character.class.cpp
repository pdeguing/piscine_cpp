/**
 * File              : Character.class.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 02.05.2019
 * Last Modified Date: 02.05.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "Character.class.hpp"

Character::Character(void) {
	return ;
}

Character::Character(Character const & src) {
	*this = src;
	return ;
}

Character::Character(std::string const & name) :
ap(40), weapon(NULL), _name(name) {
	return ;
}

Character::~Character(void) {
	return ;
}

Character &	Character::operator=(Character const & tmp) {
	if (this == &tmp)
		return *this;
	this->_name = tmp.getName();
	this->ap = tmp.ap;
	this->weapon = tmp.weapon;
	return *this;
}

std::ostream &	operator<<(std::ostream & ofs, const Character & s) {
	if (s.weapon)
		ofs
			<< s.getName() << " has " << s.ap
			<< " AP and wields a "
			<< s.weapon->getName()
			<< std::endl;
	else
		ofs
			<< s.getName() << " has "
			<< s.ap << " AP and is unarmed"
			<< std::endl;
	return ofs;
}

void		Character::recoverAP(void) {
	if (this->ap == 40)
		return ;
	if (this->ap <= 30)
		this->ap += 10;
	else
		this->ap = 40;
	return ;
}

void		Character::equip(AWeapon * w) {
	this->weapon = w;
	return ;
}

void		Character::attack(Enemy * e) {
	if (!this->weapon || this->ap < this->weapon->getAPCost())
		return ;
	std::cout
		<< this->_name
		<< " attacks "
		<< e->getType()
		<< " with a "
		<< this->weapon->getName()
		<< std::endl;
	this->ap -= this->weapon->getAPCost();
	if (this->ap < 0)
		this->ap = 0;
	this->weapon->attack();
	e->takeDamage(this->weapon->getDamage());
	if (e->getHP() <= 0)
		delete e;
	return ;
}

std::string const	Character::getName(void) const {
	return this->_name;
}
