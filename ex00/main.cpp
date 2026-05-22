/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 14:54:51 by gshekari          #+#    #+#             */
/*   Updated: 2026/05/22 21:09:55 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap ct1("Robot1");
	ClapTrap ct2("Robot2");
	ClapTrap ct3(ct1);
	ct1.takeDamage(5);
	ct1.attack("Robot2");
	ct1.takeDamage(4);
	ct3.attack("Robot2");
	ct2.takeDamage(1);
	ct1.beRepaired(10);
	return 0;
}
