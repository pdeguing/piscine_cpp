/**
 * File              : Brain.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 08.04.2019
 * Last Modified Date: 08.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "Brain.hpp"

Brain::Brain(void) {
	return;
}

Brain::~Brain(void) {
	return ;
}

std::string	Brain::identify(void) const {
	std::ostringstream	buff;

	buff << this;
	return buff.str();
}
