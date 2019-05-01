/**
 * File              : Victim.class.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 01.05.2019
 * Last Modified Date: 01.05.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "Victim.class.hpp"

Victim::Victim(void) { return ; }

Victim::Victim(Victim const & other) {
	*this = other;
	return ;
}

Victim::Victim(std::string const name) : _name(name) {
	std::cout << "Some random victim called "
		<< this->_name
		<< " just popped !" << std::endl;
	return ;
}

Victim::~Victim(void) {
	std::cout
		<< "Victim " << this->_name
		<< " just died for no apparent reason !"
		<< std::endl;
	return ;
}

Victim &	Victim::operator=(Victim const & tmp) {
	if (this == &tmp)
		return *this;
	this->_name = tmp.getName();
	return *this;
}

std::ostream &	operator<<(std::ostream & ofs, Victim const & v) {
	ofs
		<< "I'm " << v.getName()
		<< " and I like otters !"
		<< std::endl;
	return ofs;
}

void		Victim::getPolymorphed(void) const {
	std::cout
		<< this->_name
		<< " has been turned into a cute a little sheep !"
		<< std::endl;
	return ;
}

std::string	Victim::getName(void) const {
	return this->_name;
}
