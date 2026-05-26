/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 14:54:51 by gshekari          #+#    #+#             */
/*   Updated: 2026/05/26 15:49:45 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap ct1("Robot1");
	ScavTrap ct2("Robot2");
	ct1.takeDamage(5);
	ct1.attack("Robot1");
	ct1.takeDamage(4);
	ct1.attack("Robot2");
	ct1.takeDamage(1);
	ct1.beRepaired(10);
	return 0;
}
