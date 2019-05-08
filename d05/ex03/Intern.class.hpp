#ifndef INTERN_CLASS_HPP
# define INTERN_CLASS_HPP

#include <iostream>
#include <stdexcept>

#include "Form.class.hpp"
#include "PresidentialPardonForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "ShrubberyCreationForm.class.hpp"

class Intern {

	public:

		Intern(void);
		Intern(Intern const & src);
		virtual	~Intern(void);

		Intern &	operator=(Intern const &tmp);

		Form*		makeForm(std::string name, std::string target) const;
};

#endif // INTERN_CLASS_HPP
