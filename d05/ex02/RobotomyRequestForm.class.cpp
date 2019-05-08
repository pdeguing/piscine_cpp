#include "RobotomyRequestForm.class.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
Form("RobotomyRequesdtForm", 72, 45), _target(target) {}

void	RobotomyRequestForm::action() const {
	if (rand() % 2) {
		std::cout
			<< "* drilling noise * - "
			<< this->_target
			<< " has been robotomized."
			<< std::endl;
	} else {
		std::cout
			<< "* drilling noise * - "
			<< "* LOUD MECHANIC BANG * - "
			<< " something went wrong on "
			<< this->_target
			<< "."
			<< std::endl;
	}
}
