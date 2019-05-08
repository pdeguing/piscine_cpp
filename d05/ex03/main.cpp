#include "Bureaucrat.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"
#include "Intern.class.hpp"

int main () {
	Intern  someRandomIntern;
	Form*   rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << *rrf;
	delete rrf;
	rrf = someRandomIntern.makeForm("shrubbery creation", "Merci Qui");
	std::cout << *rrf;
	delete rrf;
	rrf = someRandomIntern.makeForm("presidential pardon", "Nanouch");
	std::cout << *rrf;
	delete rrf;
	rrf = someRandomIntern.makeForm("Random Form", "Jean-Patrick");
	std::cout << "rrf is NULL" << std::endl;
	delete rrf;
}
