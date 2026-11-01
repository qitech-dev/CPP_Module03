#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	std::cout << "=== ScavTrap Test ===" << std::endl;

	{
		ScavTrap robot("Serena");

		robot.attack("Enemy");
		robot.takeDamage(30);
		robot.beRepaired(10);
		robot.guardGate();

		std::cout << "\n=== Copy Test ===" << std::endl;

		ScavTrap copy(robot);
		copy.attack("Enemy");
	}
}
