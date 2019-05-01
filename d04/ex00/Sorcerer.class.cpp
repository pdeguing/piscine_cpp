/**
 * File              : Sorcerer.class.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 01.05.2019
 * Last Modified Date: 01.05.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "Sorcerer.class.hpp"

Sorcerer::Sorcerer(void) {
	return ;
}

Sorcerer::Sorcerer(Sorcerer const & other) {
	*this = other;
	return ;
}

Sorcerer::Sorcerer(std::string const name, std::string const title) : 
_name(name), _title(title) {
	std::cout << this->_name << ", " << this->_title << ", is born !"
		<< std::endl;
	return ;
}

Sorcerer::~Sorcerer(void) {
	std::cout << this->_name << ", " << this->_title 
		<< ", is dead. Consequences will never be the same !" 
		<< std::endl;
	return ;
}

Sorcerer &	Sorcerer::operator=(Sorcerer const & tmp) {
	if (this == &tmp)
		return *this;
	this->_name = tmp.getName();
	this->_title = tmp.getTitle();

	return *this;
}

std::ostream &	operator<<(std::ostream & ofs, const Sorcerer & s) {
	ofs << "I am " << s.getName() << ", " << s.getTitle()
		<< ", and I like ponies !" << std::endl;
	return ofs;
}

void		Sorcerer::polymorph(Victim const & v) const {
	v.getPolymorphed();
	return ;
}

std::string	Sorcerer::getName() const {
	return this->_name;
}

std::string	Sorcerer::getTitle() const {
	return this->_title;
}
