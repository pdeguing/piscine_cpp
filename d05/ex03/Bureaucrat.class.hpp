#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP

#include <iostream>
#include <stdexcept>

#include "Form.class.hpp"

class Form;

class Bureaucrat {

	public:

		Bureaucrat(Bureaucrat const & src);
		Bureaucrat(std::string name, int grade);
		virtual	~Bureaucrat(void);

		Bureaucrat &	operator=(Bureaucrat const &tmp);

		std::string	getName() const;
		int			getGrade() const;

		void			incGrade();
		void			decGrade();

		void			signForm(Form* f);
		void			executeForm(Form const & form);

		class GradeTooHighException: public std::exception {

			public:

				virtual const char* what() const throw();
		};

		class GradeTooLowException: public std::exception {

			public:

				virtual const char* what() const throw();
		};

	private:

		const std::string	_name;
		int			_grade;

		Bureaucrat(void);
};

std::ostream &	operator<<(std::ostream & ofs, Bureaucrat const & b);

#endif // BUREAUCRAT_CLASS_HPP
