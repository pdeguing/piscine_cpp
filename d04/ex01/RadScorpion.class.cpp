/**
 * File              : RadScorpion.class.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 02.05.2019
 * Last Modified Date: 02.05.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "RadScorpion.class.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion") {
	std::cout
		<< "* click click click *"
		<< std::endl;
	return ;
}

RadScorpion::~RadScorpion(void) {
	std::cout
		<< "* SPROTCH *"
		<< std::endl;
	return ;
}
