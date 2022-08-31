#include "Form.hpp"

Form::Form() : _name("NULL"), _gradeSign(150), _gradeExec(150)
{
	std::cout << "Form Default Constructor" << std::endl;
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

std::string	Form::getName()
{
	return (this->_name);
}

std::string	Form::getSigned()
{
	if (this->_signed == true)
		return ("Yes");
	return ("No");
}

int	Form::getSignGrade()
{
	return (this->_gradeSign);
}

int	Form::getExecGrade()
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
	if (bur.getGrade() <= this->_gradeSign)
	{
		this->_signed = true;
		bur.signForm(getName(), this->_signed);
	}
	else
	{
		bur.signForm(getName(), this->_signed);
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
