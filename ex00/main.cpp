#include "ClapTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "\n=== Basic Test ===" << std::endl;

    ClapTrap robot("Alice");

    robot.attack("Enemy");
    robot.takeDamage(5);
    robot.beRepaired(3);

    std::cout << "\n=== Death Test ===" << std::endl;

    robot.takeDamage(100);
    robot.attack("Enemy");
    robot.beRepaired(5);

    std::cout << "\n=== Energy Test ===" << std::endl;

    ClapTrap robot2("Bob");

    for (int i = 0; i < 10; i++)
    {
        robot2.attack("Enemy");
    }

    robot2.attack("Enemy");
    robot2.beRepaired(5);

    std::cout << "\n=== Copy Test ===" << std::endl;

    ClapTrap original("Original");
    ClapTrap copy(original);

    ClapTrap assigned;
    assigned = original;

    copy.attack("Enemy");
    assigned.attack("Enemy");

    return 0;
}
