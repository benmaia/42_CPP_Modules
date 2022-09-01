#ifndef PRESIDENTPARDONFORM_HPP
# define PRESIDENTPARDONFORM_HPP

#include "Form.hpp"
#include <fstream>

class PresidentPardonForm : public Form
{
	private:
		std::string	_target;

	public:
		virtual void	function() const;
		PresidentPardonForm();
		PresidentPardonForm(std::string target);
		PresidentPardonForm(const PresidentPardonForm &original);
		~PresidentPardonForm();
		PresidentPardonForm &operator=(const PresidentPardonForm &original);
};

#endif
