#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    std::cout << std::endl;
    std::cout << "Form Creation Tests" << std::endl;
    std::cout << std::endl;

    Form *temp;
    Intern john;
	 temp = john.makeForm("", "A1");
	 temp = john.makeForm("NULL", "A1");
	 temp = john.makeForm("TX", "A1");
	 temp = john.makeForm("HJ", "Official Shrub");
	 delete temp;
	 temp = john.makeForm("shrubbery creation", "Official Robot");
	 std::cout << temp->getName() << std::endl;
	 delete temp;
    temp = john.makeForm("robotomy request", "Official Robot");
	 std::cout << temp->getName() << std::endl;
    delete temp;
    temp = john.makeForm("presidential pardon", "Official Presi");
	 std::cout << temp->getName() << std::endl;
    delete temp;
}
