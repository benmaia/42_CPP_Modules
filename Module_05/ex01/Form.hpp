#ifndef FROM_HPP
# define FROM_HPP

#include <exception>
#include <iostream>
#include <string.h>
#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string _name;
		bool					_signed;
		const int			_gradeSign;
		const int			_gradeExec;

	public:
		void	beSigned(Bureaucrat &bur);
		std::string	getName();
		std::string	getSigned();
		int	getSignGrade();
		int	getExecGrade();
		Form();
		Form(std::string name, int sign, int exec);
		Form(const Form &original);
		Form &operator=(const Form &original);
		~Form();
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream *stream, Form &form);

#endif
