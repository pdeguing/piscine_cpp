/**
 * File              : AssaultTerminator.class.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 04.05.2019
 * Last Modified Date: 04.05.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "AssaultTerminator.class.hpp"

AssaultTerminator::AssaultTerminator(void) {
	std::cout
		<< "* teleports from space *"
		<< std::endl;
	return ;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & src) {
	*this = src;
	std::cout
		<< "* teleports from space *"
		<< std::endl;
	return ;
}

AssaultTerminator::~AssaultTerminator(void) {
	std::cout
		<< "I’ll be back ..."
		<< std::endl;
	return ;
}

AssaultTerminator &	AssaultTerminator::operator=(AssaultTerminator const & tmp) {
	(void)tmp;
	return *this;
}

AssaultTerminator*	AssaultTerminator::clone() const {
	AssaultTerminator *t = new AssaultTerminator;
	return t;
}

void			AssaultTerminator::battleCry() const {
	std::cout
		<< "This code is unclean. PURIFY IT !"
		<< std::endl;
	return ;
}

void			AssaultTerminator::rangedAttack() const {
	std::cout
		<< "* does nothin *"
		<< std::endl;
	return ;
}

void			AssaultTerminator::meleeAttack() const {
	std::cout
		<< "* attacks with chainfists *"
		<< std::endl;
	return ;
}
