#include "Form.hpp"

Form::Form() : _name("NULL"), _gradeSign(150), _gradeExec(150)
{
	std::cout << "Form Default Constructor" << std::endl;
}

Form::Form(std::string name, int sign, int exec) : _name(name), _gradeSign(sign), _gradeExec(exec)
{
	if (sign > 150 || exec > 150)
		throw(Form::GradeTooLowException());
	else if (sign < 1 || exec < 1)
		throw(Form::GradeTooHighException());
	this->_signed = false;
	std::cout << "Form Constructor" << std::endl;
}

Form::Form(const Form &original) : _name(original._name), _signed(original._signed), _gradeSign(original._gradeSign), _gradeExec(original._gradeExec)
{
	std::cout << "Form Copy Constructor" << std::endl;
}

Form::~Form()
{
	std::cout << "Form Destructor" << std::endl;
}

Form &Form::operator=(const Form &original)
{
	this->_signed = original._signed;
	return (*this);
}

std::string	Form::getName() const
{
	return (this->_name);
}

bool	Form::isItSigned()const
{
	return (this->_signed);
}

std::string	Form::getSigned() const
{
	if (this->_signed == true)
		return ("Yes");
	return ("No");
}

int	Form::getSignGrade() const
{
	return (this->_gradeSign);
}

int	Form::getExecGrade() const
{
	return (this->_gradeExec);
}

std::ostream &operator<<(std::ostream &stream, Form &form)
{
	stream << "Name: " << form.getName() << "Signed: " << form.getSigned() << "Sign Grade: " << form.getSignGrade() << "Exec Grade: " << form.getExecGrade() << std::endl;
	return (stream);
}

void	Form::beSigned(Bureaucrat &bur)
{
	if (isItSigned())
		std::cout << getName() << " already signed " << getName() << std::endl;
	else if (bur.getGrade() <= getSignGrade())
	{
		this->_signed = true;
		bur.signForm(*this);
	}
	else
	{
		bur.signForm(*this);
		throw(Form::GradeTooLowException());
	}
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return "Form GradeTooHighException";
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return "Form GradeTooLowException";
}

const char* Form::NotSignedException::what() const throw()
{
	return "Form Not Signed";
}

void	Form::execute(Bureaucrat const &executor) const
{
	if (isItSigned() == false)
		throw (Form::NotSignedException());
	else if (executor.getGrade() > getExecGrade())
		throw (Bureaucrat::GradeTooLowException());
	else
		function();
}

