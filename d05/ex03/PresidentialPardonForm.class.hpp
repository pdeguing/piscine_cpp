#ifndef PRESIDENTIALPARDONFORM_CLASS_HPP
# define PRESIDENTIALPARDONFORM_CLASS_HPP

#include <iostream>

#include "Form.class.hpp"

class PresidentialPardonForm : public Form {

	public:

		PresidentialPardonForm(std::string target);

	private:

		std::string	_target;
		void		action() const;
};

#endif // PRESIDENTIALPARDONFORM_CLASS_HPP
