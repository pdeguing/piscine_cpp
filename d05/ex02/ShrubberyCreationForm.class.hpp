#ifndef SHRUBBERYCREATIONFORM_CLASS_HPP
# define SHRUBBERYCREATIONFORM_CLASS_HPP

#include <iostream>
#include <fstream>

#include "Form.class.hpp"

class ShrubberyCreationForm : public Form {

	public:

		ShrubberyCreationForm(std::string target);

	private:

		std::string	_target;
		void		action() const;

};

#endif // SHRUBBERYCREATIONFORM_CLASS_HPP
