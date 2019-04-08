/**
 * File              : Human.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 08.04.2019
 * Last Modified Date: 08.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "Human.hpp"

Human::Human(void) {
	return ;
}

Human::~Human(void) {
	return ;
}

const Brain	&Human::getBrain(void) const {
	return this->_brain;
}

std::string	Human::identify(void) const {
	return this->_brain.identify();
}
