#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>

int main(void)
{
    Bureaucrat bur("Amelia", 150);
    std::cout << bur.getName() << std::endl;
    std::cout << bur.getGrade() << std::endl;

    std::cout << "--------------------" << std::endl;

    Bureaucrat other("Maria", 1);
    std::cout << other.getName() << std::endl;
    std::cout << other.getGrade() << std::endl;

    std::cout << "-----TO LOW---------------" << std::endl;

	 Form bubbles("bubbles", 30, 30);
	 try
	 {
		std::cout << bubbles.getSigned() << std::endl;
	 	bubbles.beSigned(bur);
		std::cout << bubbles.getSigned() << std::endl;
	 }
	 catch (std::exception &error)
	 {
		std::cout << error.what() << std::endl;
	 }
    return (0);
}
