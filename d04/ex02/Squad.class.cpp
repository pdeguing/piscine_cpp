/**
 * File              : Squad.class.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 04.05.2019
 * Last Modified Date: 04.05.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "Squad.class.hpp"

Squad::Squad(void) : _units(NULL), _count(0) {
	return ;
}

Squad::Squad(Squad const & src) : _units(NULL), _count(0) {
	*this = src;
	return ;
}

Squad::~Squad(void) {
	for (int i = 0; i < this->_count; i++) {
		delete this->_units[i];
	}
	delete this->_units;
	return ;
}

Squad &	Squad::operator=(Squad const & rhs) {
	if (this->_units) {
		for (int i = 0; i < this->_count; i++) {
			delete this->_units[i];
		}
		delete this->_units;
	}
	this->_count = rhs.getCount();
	this->_units = new ISpaceMarine*[rhs.getCount()];
	for (int i = 0; i < this->_count; i++) {
		this->_units[i] = rhs.getUnit(i)->clone();
	}
	return *this;
}

int	Squad::getCount() const {
	return this->_count;
}

ISpaceMarine*	Squad::getUnit(int i) const {
	if (0 <= i && i < this->_count)
		return this->_units[i];
	return NULL;
}

int		Squad::push(ISpaceMarine* p) {
	if (!p)
		return this->_count;
	for (int i = 0; i < this->_count; i++) {
		if (this->_units[i] == p)
			return this->_count;
	}
	ISpaceMarine** tmp = new ISpaceMarine*[this->_count + 1];
	for (int i = 0; i < this->_count; i++) {
		tmp[i] = this->_units[i];
	}
	tmp[this->_count] = p;
	delete this->_units;
	this->_count++;
	this->_units = tmp;
	return this->_count;
}
