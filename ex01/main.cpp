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

		std::cout << "\n=== Copy Constructor Test ===" << std::endl;

		ScavTrap copy(robot);
		copy.attack("Enemy");

		std::cout << "\n=== Copy Assignment Test ===" << std::endl;

		ScavTrap another;
		another = robot;
		another.attack("Enemy");
	}
}
