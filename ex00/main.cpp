/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 14:54:51 by gshekari          #+#    #+#             */
/*   Updated: 2026/05/20 20:59:48 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"


int main(void)
{
	ClapTrap ct1("clapT");
	ClapTrap ct2("cl2");
	ct1.attack("cl2");
	ct1.takeDamage(5);
	ct1.beRepaired(3);

	return 0;
}
