/**
 * File              : Enemy.class.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 02.05.2019
 * Last Modified Date: 02.05.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "Enemy.class.hpp"

Enemy::Enemy(void) {
	return ;
}

Enemy::Enemy(Enemy const & src) {
	*this = src;
	return ;
}

Enemy::Enemy(int hp, std::string const & type) : _type(type), _hp(hp) {
	return ;
}

Enemy::~Enemy(void) {
	return ;
}

Enemy &	Enemy::operator=(Enemy const & tmp) {
	if (this == &tmp)
		return *this;
	this->_type = tmp.getType();
	this->_hp = tmp.getHP();
	return *this;
}

void	Enemy::takeDamage(int d) {
	if (d <= 0)
		return ;
	if (this->_hp > d)
		this->_hp -= d;
	else
		this->_hp = 0;
	return ;
}

std::string const	Enemy::getType(void) const {
	return this->_type;
}

int			Enemy::getHP(void) const {
	return this->_hp;
}
