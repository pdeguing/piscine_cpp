#include "Intern.class.hpp"

Intern::Intern(void) {}

Intern::Intern(Intern const & src) {
	*this = src;
	return ;
}

Intern::~Intern(void) {}

Intern &	Intern::operator=(Intern const & tmp) {
	(void)tmp;
	return *this;
}

Form*	Intern::makeForm(std::string name, std::string target) const {
	if (name == "robotomy request") {
		std::cout
			<< "Intern creates " << name
			<< std::endl;
		return new RobotomyRequestForm(target);
	} else if (name == "shrubbery creation") {
		std::cout
			<< "Intern creates " << name
			<< std::endl;
		return new  ShrubberyCreationForm(target);
	} else if (name == "presidential pardon" ) {
		std::cout
			<< "Intern creates " << name
			<< std::endl;
		return new PresidentialPardonForm(target);
	} else {
		std::cout << "An explicit error message"
			<< std::endl;
		return NULL;
	}
}
