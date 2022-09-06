#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <exception>
#include <iostream>
#include <ostream>
#include <string.h>

class Form;

class Bureaucrat
{
	protected:
		const std::string _name;
		int					_grade;

	public:
		void	executeForm(const Form &form);
		void	signForm(Form &form);
		std::string	getName(void);
		int	getGrade(void) const;
		void	incrementGrade(void);
		void	decrementGrade(void);
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &original);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &original);
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
#include "Form.hpp"

std::ostream &operator<<(std::ostream &stream, Bureaucrat &Bureaucrat);

#endif
