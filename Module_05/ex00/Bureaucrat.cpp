#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("NULL"), _grade(150)
{
	std::cout << getName() << " ";
	std::cout << "Bureaucrat Default Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw(Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw(Bureaucrat::GradeTooLowException());
	std::cout << getName() << " ";
	std::cout << "Bureaucrat Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &original)
{
	*this = original;
	std::cout << getName() << " ";
	std::cout << "Bureaucrat Copy Constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << getName() << " ";
	std::cout << "Bureaucrat Destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &original)
{
	this->_grade = original._grade;
	return (*this);
}

std::string	Bureaucrat::getName()
{
	return (this->_name);
}

int	Bureaucrat::getGrade()
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade()
{
	if (_grade == 1)
		throw(Bureaucrat::GradeTooHighException());
	else
		this->_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (_grade == 150)
		throw(Bureaucrat::GradeTooLowException());
	else
		this->_grade++;
}

std::ostream &operator<<(std::ostream &stream, Bureaucrat &Bureaucrat)
{
	stream << Bureaucrat.getName() << ", Bureaucrat grade: " << Bureaucrat.getGrade();
	return (stream);
}
