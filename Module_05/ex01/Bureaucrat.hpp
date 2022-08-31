#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <exception>
#include <iostream>
#include <ostream>
#include <string.h>

class Bureaucrat
{
	protected:
		const std::string _name;
		int					_grade;

	public:
		void	signForm(std::string form, bool isSigned);
		std::string	getName(void);
		int	getGrade(void);
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

std::ostream &operator<<(std::ostream &stream, Bureaucrat &Bureaucrat);

#endif
