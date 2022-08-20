#include "Harl.hpp"

int main (void)
{
	Harl		Harl;

	Harl.complain("debug");
	std::cout << std::endl;
	Harl.complain("info");
	std::cout << std::endl;
	Harl.complain("warning");
	std::cout << std::endl;
	Harl.complain("error");
	std::cout << std::endl;
	Harl.complain("debugs");
	std::cout << std::endl;
	Harl.complain("info info");
	std::cout << std::endl;
	Harl.complain("debug warning");
	std::cout << std::endl;
	Harl.complain("");
	return (0);
}
