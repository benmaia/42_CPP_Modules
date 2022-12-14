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
	for (int i = 0; i < 4; i++)
		if (!level.compare(comment[i].comment))
		{
			(this->*comment[i].level)();
			return ;
		}
}
