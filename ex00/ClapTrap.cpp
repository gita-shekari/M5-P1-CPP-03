/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 14:54:40 by gshekari          #+#    #+#             */
/*   Updated: 2026/05/26 20:53:36 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
		: name("Default"),
		hitPoints(10),
		energyPoints(10),
		attackDamage(0)
{
	std::cout << "ClapTrap " << name << " created" << std::endl;
}
ClapTrap::ClapTrap(std::string name)
		: name(name),
		hitPoints(10),
		energyPoints(10),
		attackDamage(0)
{
	std::cout << "ClapTrap " << name << " created" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &other)
	 : name(other.name),
	  hitPoints(other.hitPoints),
	  energyPoints(other.energyPoints),
	  attackDamage(other.attackDamage)
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " destroyed" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if(hitPoints == 0)
	{
		std::cout << name << " can not attack because hit point is 0" << std::endl;
		return ;
	}
	if (energyPoints == 0)
	{
		std::cout << name << " can not attack because energy point is 0" << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= hitPoints)
		hitPoints = 0;
	else
		hitPoints -= amount;
	std::cout << name << " takes " << amount << " damage and hit point is : " << hitPoints << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(hitPoints == 0)
	{
		std::cout << name << " has no hit points and can not be repaired" << std::endl;
		return ;
	}
	else if(energyPoints == 0)
	{
		std::cout << name << " has no energy points and can not be repaired" << std::endl;
		return ;
	}
	else
	{
		hitPoints += amount;
		energyPoints--;
	}
	std::cout << name << " is repaired and hit point is : " << hitPoints << " and energy point is : " << energyPoints << std::endl;
}
