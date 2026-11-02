#include "DiamondTrap.hpp"
#include <iostream>

int main()
{
	std::cout << "\n=== Basic Test ===" << std::endl;

	{
		DiamondTrap robot("Alice");

		robot.whoAmI();
		robot.attack("Enemy");
		robot.takeDamage(20);
		robot.beRepaired(10);

		std::cout << "\n=== Special Abilities ===" << std::endl;

		robot.guardGate();
		robot.highFivesGuys();

		std::cout << "\n=== Energy Test ===" << std::endl;

		DiamondTrap energyTest("EnergyRobot");

		for (int i = 0; i < 50; i++)
			energyTest.attack("Enemy");
		
		energyTest.attack("Enemy");
		energyTest.beRepaired(10);

		std::cout << "\n=== Copy constructor ===" << std::endl;

		DiamondTrap copy(robot);
		copy.whoAmI();

		std::cout << "\n=== Copy Assignment ===" << std::endl;

		DiamondTrap another("Bob");
		another = robot;
		another.whoAmI();
	}

	std::cout << "\n=== End ===" << std::endl;

	return 0;
}