#ifndef ROBOTOMYREQUESTFORM_CLASS_HPP
# define ROBOTOMYREQUESTFORM_CLASS_HPP

#include <iostream>

#include "Form.class.hpp"

class RobotomyRequestForm : public Form {

	public:

		RobotomyRequestForm(std::string target);

	private:

		std::string	_target;
		void		action() const;
};

#endif // ROBOTOMYREQUESTFORM_CLASS_HPP
