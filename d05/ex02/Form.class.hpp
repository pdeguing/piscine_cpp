#ifndef FORM_CLASS_HPP
# define FORM_CLASS_HPP

#include <iostream>
#include <stdexcept>

#include "Bureaucrat.class.hpp"

class Bureaucrat;

class Form {

	public:

		Form(Form const & src);
		Form(std::string name, int gradeSign, int gradeExe);
		virtual	~Form(void);

		Form &	operator=(Form const &tmp);

		void		beSigned(Bureaucrat const & b);
		
		void		execute(Bureaucrat const & executor) const;

		std::string	getName() const;
		bool		getSigned() const;
		int		getGradeSign() const;
		int		getGradeExe() const;

		class GradeTooHighException : public std::exception {

			public:

				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			
			public:

				virtual const char* what() const throw();
		};

		class FormNotSignedException : public std::exception {

			public:
				virtual const char* what() const throw();
		};

	private:

		const std::string	_name;
		bool			_signed;
		const int		_gradeSign;
		const int		_gradeExe;

		Form(void);

		virtual void		action() const = 0;

};

std::ostream &	operator<<(std::ostream & ofs, Form const & f);

#endif // FORM_CLASS_HPP
