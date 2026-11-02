#include "FragTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "=== Basic Test ===" << std::endl;

    {
        FragTrap robot("Serena");

        robot.attack("Enemy");
        robot.takeDamage(20);
        robot.beRepaired(10);
        robot.highFivesGuys();

        std::cout << "\n=== Copy Constructor Test ===" << std::endl;

        FragTrap copy(robot);
        copy.attack("Enemy");

        std::cout << "\n=== Copy Assignment Test ===" << std::endl;

        FragTrap another;
        another = robot;
        another.attack("Enemy");
    }

    return 0;
}