#include "Harl.hpp"

Harl::Harl()
{
	comment[0].comment = "DEBUG";
	comment[0].level = &Harl::debug;
	comment[1].comment = "INFO";
	comment[1].level = &Harl::info;
	comment[2].comment = "WARNING";
	comment[2].level = &Harl::warning;
	comment[3].comment = "ERROR";
	comment[3].level = &Harl::error;
}

Harl::~Harl(){}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more! " << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now!" << std::endl;
}

void	Harl::complain(std::string level)
{
	int	i = -1;
	while (++i < 4)
		if (!level.compare(comment[i].comment))
			break ;
	switch (i){
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			std::cout << std::endl;
			(this->*comment[0].level)();
			std::cout << std::endl;
			(this->*comment[1].level)();
			std::cout << std::endl;
			(this->*comment[2].level)();
			std::cout << std::endl;
			(this->*comment[3].level)();
			break ;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			std::cout << std::endl;
			(this->*comment[1].level)();
			std::cout << std::endl;
			(this->*comment[2].level)();
			std::cout << std::endl;
			(this->*comment[3].level)();
			break ;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			std::cout << std::endl;
			(this->*comment[2].level)();
			std::cout << std::endl;
			(this->*comment[3].level)();
			break ;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			std::cout << std::endl;
			(this->*comment[3].level)();
			break ;
		default:
			std::cout << "Please select one of the 4 levels" << std::endl;
			std::cout << "1st -> DEBUG | 2nd -> INFO | 3rd -> WARNING | 4th -> ERROR" << std::endl;
			exit(1);
	}
}
