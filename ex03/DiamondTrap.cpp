#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
    : ScavTrap("default_clap_name"),
      FragTrap("default_clap_name"),
      name("default")
{
    std::cout << "DiamondTrap " << name << " created" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
    : ScavTrap(name + "_clap_name"),
      FragTrap(name + "_clap_name"),
      name(name)
{
    std::cout << "DiamondTrap " << name << " created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
    : ScavTrap(other),
      FragTrap(other),
      name(other.name)
{
    std::cout << "Copy constructor of DiamondTrap called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    if (this != &other)
    {
        ScavTrap::operator=(other);
        FragTrap::operator=(other);
        name = other.name;
    }

    std::cout << "Copy assignment operator of DiamondTrap called" << std::endl;
    return *this;
}


DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << name << " destroyed" << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name: " << name << std::endl;
    std::cout << "ClapTrap name: " << ScavTrap::name << std::endl;
}