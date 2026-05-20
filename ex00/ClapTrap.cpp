/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 14:54:40 by gshekari          #+#    #+#             */
/*   Updated: 2026/05/20 21:02:24 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "ClapTrap \"" << name << "\" created" << std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap \"" << name << "\" destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if(hitPoints <= 0)
	{
		std::cout << name << " can not attack because hit point is 0" << std::endl;
	}
	else if (energyPoints <= 0)
	{
		std::cout << name << " can not attack because energy point is 0" << std::endl;
	}
	else
		energyPoints -= 1;
	std::cout <<  name << " attacks " << target << " and points of damage is : " << attackDamage  << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->attackDamage += amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(hitPoints <= 0)
	{
		std::cout << name << " has no hit points and can not be repaired" << std::endl;
		return ;
	}
	else if(energyPoints <= 0)
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
