/**
 * File              : TacticalMarine.class.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 04.05.2019
 * Last Modified Date: 04.05.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "TacticalMarine.class.hpp"

TacticalMarine::TacticalMarine(void) {
	std::cout
		<< "Tactical Marine ready for battle"
		<< std::endl;
	return ;
}

TacticalMarine::TacticalMarine(TacticalMarine const & src) {
	*this = src;
	std::cout
		<< "Tactical Marine ready for battle"
		<< std::endl;
	return ;
}

TacticalMarine::~TacticalMarine(void) {
	std::cout
		<< "Aaargh ..."
		<< std::endl;
	return ;
}

TacticalMarine &	TacticalMarine::operator=(TacticalMarine const & tmp) {
	(void)tmp;
	return *this;
}

TacticalMarine*		TacticalMarine::clone() const {
	TacticalMarine*	t = new TacticalMarine;
	return t;
}

void			TacticalMarine::battleCry() const {
	std::cout
		<< "For the holy PLOT !"
		<< std::endl;
	return ;
}

void			TacticalMarine::rangedAttack() const {
	std::cout
		<< "* attacks with bolter *"
		<< std::endl;
	return ;
}

void			TacticalMarine::meleeAttack() const {
	std::cout
		<< "* attacks with chainsword *"
		<< std::endl;
	return ;
}
