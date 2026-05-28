/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 12:56:11 by gshekari          #+#    #+#             */
/*   Updated: 2026/05/28 13:35:34 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():
	ClapTrap("default_clap_name"),
	ScavTrap(),
	FragTrap(),
	name("default")
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 30;
	std::cout << "DiamondTrap " << name << " created" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name):
	ClapTrap(name + "_clap_name"),
	ScavTrap(),
	FragTrap(),
	name(name)
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 30;
	std::cout << "DiamondTrap " << name << " created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other):
	ClapTrap(other),
	ScavTrap(other),
	FragTrap(other),
	name(other.name)
{
	std::cout << "Copy constructor of DiamondTrap called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
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
	std::cout << "ClapTrap name: " << ClapTrap::name << std::endl;
}
