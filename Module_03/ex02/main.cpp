#include "FragTrap.hpp"

int main(void)
{
	std::cout << "\n==================== CONSTRUCTORS ======================\n" << std::endl;
	FragTrap a("Sergio");
	FragTrap b (a);
	FragTrap d("Alberto");
	FragTrap c;
	c = d;
	std::cout << c.getName() << std::endl;
	std::cout << a.getAttack() << std::endl;
	std::cout << b.getAttack() << std::endl;
	std::cout << c.getName() << " here " << std::endl;
	std::cout << c.getHeatlh() << " here " << std::endl;
	std::cout << c.getEnergy() << " here " << std::endl;
	std::cout << c.getAttack() << " here " << std::endl;
	std::cout << "\n==================== FUNCTIONS ======================\n" << std::endl;
	std::cout << "Testing energy points + health recovery after to much heal" <<std::endl;
	for (int i = 0; i <= b.getEnergy() + 2; i++)
		c.beRepaired(1);
	std::cout << "C life = " << c.getHeatlh() << std::endl;
	std::cout << "\n" << std::endl;
	while (d.getHeatlh() > 0)
	{
		a.attack(d.getName());
		d.takeDamage(a.getAttack());
		d.attack(a.getName());
		if (d.getHeatlh() > 0)
			a.takeDamage(d.getAttack());
	}
	std::cout << "Sergio hp = " << a.getHeatlh() << std::endl;
	a.beRepaired(100);
	std::cout << "Sergio hp = " << a.getHeatlh() << std::endl;
	std::cout << std::endl;
	a.highFiveGuys();
	std::cout << std::endl;
	return 0;
}
