#include "PresidentialPardonForm.class.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
Form("PresidentialPardonForm", 25, 5), _target(target) {}

void	PresidentialPardonForm::action() const {
	std::cout
		<< this->_target
		<< "  has been pardoned by Zaphod Beeblebrox."
		<< std::endl;
}
