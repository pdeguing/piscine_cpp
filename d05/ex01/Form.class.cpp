#include "Form.class.hpp"

Form::Form(Form const & src) :
_name(src.getName()), _signed(src.getSigned()), _gradeSign(src.getGradeSign()),
		_gradeExe(src.getGradeExe()) {
}

Form::Form( std::string name, int gradeSign, int gradeExe) :
_name(name), _signed(false), _gradeSign(gradeSign), _gradeExe(gradeExe) {
	if (gradeSign < 1 || gradeExe < 1)
		throw GradeTooHighException();
	if (gradeSign > 150 || gradeExe > 150)
		throw GradeTooLowException();
}

Form::~Form(void) {}

Form &	Form::operator=(Form const & tmp) {
	if (this == &tmp)
		return *this;
	return *this;
}

void		Form::beSigned(Bureaucrat const & b) {
	if (b.getGrade() > this->_gradeSign)
		throw GradeTooLowException();
	this->_signed = 1;
}

const char*	Form::GradeTooHighException::what() const throw() {
	return "Form grade is too high";
}

const char*	Form::GradeTooLowException::what() const throw() {
	return "Form grade is too low";
}

std::string	Form::getName() const {
	return this->_name;
}

bool		Form::getSigned() const {
	return this->_signed;
}

int		Form::getGradeSign() const {
	return this->_gradeSign;
}

int		Form::getGradeExe() const {
	return this->_gradeExe;
}

std::ostream &	operator<<(std::ostream & ofs, Form const & f) {
	ofs
		<< f.getName()
		<< " signed " << f.getSigned()
		<< ", requires grade " << f.getGradeSign()
		<< " to sign and grade " << f.getGradeExe()
		<< " to execute."
		<< std::endl;
	return ofs;
}
