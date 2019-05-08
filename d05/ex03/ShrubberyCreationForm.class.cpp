#include "ShrubberyCreationForm.class.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	Form("ShrubberyCreationForm", 145, 137), _target(target) {}

void	ShrubberyCreationForm::action() const {
	std::ofstream tree(this->_target + "_shrubbery");

	tree <<	"       _-_   " << std::endl;
	tree << "    /~~   ~~\\    " << std::endl;
	tree << " /~~         ~~\\ " << std::endl;
	tree << "{               }" << std::endl;
	tree << " \\  _-     -_  / " << std::endl;
	tree << "   ~  \\\\ //  ~ " << std::endl;
	tree << "_- -   | | _- _ " << std::endl;
	tree << "  _ -  | |   -_ " << std::endl;
	tree << "      // \\\\     " << std::endl;

	tree.close();
}
