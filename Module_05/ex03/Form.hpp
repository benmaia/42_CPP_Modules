#ifndef FROM_HPP
# define FROM_HPP

#include <exception>
#include <iostream>
#include <string.h>

class Bureaucrat;

class Form
{
	private:
		const std::string _name;
		bool					_signed;
		const int			_gradeSign;
		const int			_gradeExec;

	protected:
		virtual void function() const = 0;


	public:
		void	execute(Bureaucrat const &executor) const;
		void	beSigned(Bureaucrat &bur);
		std::string	getName() const;
		std::string	getSigned() const;
		bool	isItSigned() const;
		int	getSignGrade() const;
		int	getExecGrade() const;
		Form();
		Form(std::string name, int sign, int exec);
		Form(const Form &original);
		Form &operator=(const Form &original);
		virtual ~Form();
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
		class NotSignedException : public std::exception {
			private:
				virtual const char* what() const throw();
		};
};

#include "Bureaucrat.hpp"
std::ostream &operator<<(std::ostream *stream, Form &form);

#endif
