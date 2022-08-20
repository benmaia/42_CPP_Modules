#include "Harl.hpp"

int main (void)
{
	Harl		Harl;

	Harl.complain("DEBUG");
	std::cout << std::endl;
	Harl.complain("INFO");
	std::cout << std::endl;
	Harl.complain("WARNING");
	std::cout << std::endl;
	Harl.complain("ERROR");
	std::cout << std::endl;
	Harl.complain("DEBUGS");
	std::cout << std::endl;
	Harl.complain("INFO info");
	std::cout << std::endl;
	Harl.complain("info info");
	std::cout << std::endl;
	Harl.complain("debug warning");
	std::cout << std::endl;
	Harl.complain("ERROR INFO");
	std::cout << std::endl;
	Harl.complain("");
	return (0);
}
