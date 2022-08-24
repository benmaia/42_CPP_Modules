#include "DiamondTrap.hpp"

int main(void)
{
	std::cout << "==============================================\n";
	ClapTrap clap("A1");
	ScavTrap momma("A2");
	DiamondTrap baby("A3");
	DiamondTrap jeff;
	std::cout << std::endl;
	jeff.takeDamage(0);
	jeff.attack("Old Guy");
	baby.highFivesGuys();
	baby.guardGate();
	baby.whoAmI();
	jeff.attack("Baby");
	baby.takeDamage(30);
	baby.takeDamage(30);
	jeff.attack("Baby");
	baby.takeDamage(30);
	baby.takeDamage(30);
	jeff.attack("Baby");
	baby.takeDamage(30);
	jeff = baby;
	baby.beRepaired(100);
	baby.whoAmI();
	jeff.whoAmI();
	std::cout << "==============================================\n";
}
//{
    //ClapTrap claptrap("Demon");
    //ScavTrap scavtrap("Devil");
    //FragTrap fragtrap("Love");

    //std::cout << "--------------------" << std::endl;

    //claptrap.attack("Angel");
    //claptrap.takeDamage(20);
    //claptrap.beRepaired(10);

    //scavtrap.attack("Other");
    //scavtrap.takeDamage(20);
    //scavtrap.beRepaired(10);
    //scavtrap.guardGate();

    //fragtrap.attack("Evol");
    //fragtrap.takeDamage(20);
    //fragtrap.beRepaired(10);
    //fragtrap.highFivesGuys();

    //std::cout << std::endl;
    //std::cout << "-------DIAMOND-------------" << std::endl;

    //DiamondTrap diamond("Rachel");

    //std::cout << "--------------------" << std::endl;

    //std::cout << "Rachel Has " << diamond.getHeatlh() << " hit_points" << std::endl;
    //std::cout << "Rachel Has " << diamond.getEnergy() << " energy_points" << std::endl;
    //std::cout << "Rachel Has " << diamond.getAttack() << " attack_points" << std::endl;
    //std::cout << "--------------------" << std::endl;

    //diamond.attack("Other");
    //diamond.takeDamage(20);
    //diamond.beRepaired(10);
    //diamond.highFivesGuys();
    //diamond.guardGate();

    //std::cout << "--------------------" << std::endl;

    //diamond.whoAmI();

    //std::cout << "--------------------" << std::endl;


    //return (0);
//}
