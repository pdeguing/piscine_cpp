/**
 * File              : Peon.class.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 01.05.2019
 * Last Modified Date: 01.05.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "Peon.class.hpp"

Peon::Peon(std::string const name) : Victim(name) {
	this->_name = name;
	std::cout
		<< "Zog zog."
		<< std::endl;
	return ;
}

Peon::Peon(Peon const & other) {
	*this = other;
	std::cout
		<< "Zog zog."
		<< std::endl;
	return ;
}

Peon::~Peon(void) {
	std::cout
		<< "Bleuark..."
		<< std::endl;
	return ;
}

void	Peon::getPolymorphed(void) const {
	std::cout
		<< this->_name
		<< " has been turned into a pink pony !"
		<< std::endl;
	return ;
}
