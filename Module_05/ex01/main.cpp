#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>

int main(void)
{
    Bureaucrat bur("Ricardo", 40);
    std::cout << bur.getName() << std::endl;
    std::cout << bur.getGrade() << std::endl;


    std::cout << "----- EXCEPTIONS ---------------" << std::endl;
	 try
	 {
		 Form a("a", 151, 151);
	 }
	 catch (std::exception &error)
	 {
		 std::cout << error.what() << std::endl;
	 }

	 try
	 {
	 	Form b("b", 0, 0);
	 }
	 catch (std::exception &error)
	 {
		 std::cout << error.what() << std::endl;
	 }
    std::cout << "----- WORKING ---------------" << std::endl;

	 Form troll("troll", 60, 60);
	 try
	 {
		std::cout << troll.getSigned() << std::endl;
	 	troll.beSigned(bur);
		std::cout << troll.getSigned() << std::endl;
	 }
	 catch (std::exception &error)
	 {
		std::cout << error.what() << std::endl;
	 }

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
