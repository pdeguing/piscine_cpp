#include "Bureaucrat.class.hpp"

Bureaucrat::Bureaucrat(void) {}

Bureaucrat::Bureaucrat(Bureaucrat const & src) :
	_name(src.getName()), _grade(src.getGrade()) {}

Bureaucrat::Bureaucrat(std::string name, int grade) :
	_name(name) {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & tmp) {
	if (this == &tmp)
		return *this;
	this->_grade = tmp.getGrade();
	return *this;
}

std::ostream &	operator<<(std::ostream & ofs, Bureaucrat const & b) {
	ofs
		<< b.getName()
		<< ", bureaucrat grade "
		<< b.getGrade()
		<< std::endl;
	return ofs;
}

std::string	Bureaucrat::getName() const {
	return this->_name;
}

int		Bureaucrat::getGrade() const {
	return this->_grade;
}

void		Bureaucrat::incGrade() {
	this->_grade--;
	if (this->_grade < 1)
		throw GradeTooHighException();
}

void		Bureaucrat::decGrade() {
	this->_grade++;
	if (this->_grade > 150)
		throw GradeTooLowException();
}

void		Bureaucrat::signForm(Form* f) {
	try {
		f->beSigned(*this);
		std::cout
			<< this->_name << " signs "
			<< f->getName()
			<< std::endl;
	} catch (std::exception & e) {
		std::cout
			<< this->_name << " cannot sign "
			<< f->getName() << " because "
			<< e.what()
			<< std::endl;
	}
}

void		Bureaucrat::executeForm(Form const & form) {
	try {
		form.execute(*this);
		std::cout
			<< this->_name << " executes "
			<< form.getName()
			<< std::endl;
	} catch (std::exception & e) {
		std::cout
			<< this->_name << " cannot execute "
			<< form.getName() << " because "
			<< e.what()
			<< std::endl;
	}
}

const char*	Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade is too high");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade is too low");
}
