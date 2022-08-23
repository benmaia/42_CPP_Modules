#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a;
	ClapTrap b ("Alberto");
	ClapTrap c ("Joao");
	ClapTrap d (b);

	
std::cout << "\n" << std::endl;
	std::cout << "a -> " << a.getName() << std::endl;
	std::cout << "b -> " << b.getName() << std::endl;
	std::cout << "c -> " << c.getName() << std::endl;
	std::cout << "d -> " << d.getName() << std::endl;
std::cout << std::endl;
	std::cout << "===================== TEST ===================" << std::endl;
std::cout << "\n" << std::endl;
	b.setAttack(5);
	b.attack(c.getName());
	c.takeDamage(b.getAttack());
	c.attack(b.getName());
	b.takeDamage(c.getAttack());
	c.beRepaired(6);
	b.attack(c.getName());
	c.takeDamage(b.getAttack());
	c.attack(b.getName());
	b.takeDamage(c.getAttack());
	c.beRepaired(6);
	b.attack(c.getName());
	c.takeDamage(b.getAttack());
	c.attack(b.getName());
	b.takeDamage(c.getAttack());
	c.beRepaired(6);
	b.attack(c.getName());
	c.takeDamage(b.getAttack());
	c.attack(b.getName());
	b.takeDamage(c.getAttack());
	c.beRepaired(6);
	b.attack(c.getName());
	c.takeDamage(b.getAttack());
	c.attack(b.getName());
	b.takeDamage(c.getAttack());
	c.beRepaired(6);
	b.attack(c.getName());
	c.takeDamage(b.getAttack());
	c.attack(b.getName());
	b.takeDamage(c.getAttack());
	c.beRepaired(6);
	b.attack(c.getName());
	c.takeDamage(b.getAttack());
	c.attack(b.getName());
	b.takeDamage(c.getAttack());
	c.beRepaired(6);
	b.attack(c.getName());
	b.beRepaired(10);
	b.attack(c.getName());
	b.beRepaired(10);
	return 0;
}
