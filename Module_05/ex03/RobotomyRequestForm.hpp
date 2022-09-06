#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <cstdlib>
#include <fstream>

class RobotomyRequestForm : public Form
{
	private:
		std::string	_target;

	public:
		virtual void	function() const;
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &original);
		~RobotomyRequestForm();
		RobotomyRequestForm &operator=(const RobotomyRequestForm &original);
};

#endif
