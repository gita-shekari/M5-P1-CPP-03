/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 14:54:51 by gshekari          #+#    #+#             */
/*   Updated: 2026/05/26 21:58:01 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	 std::cout << "\n--- FragTrap test ---\n" << std::endl;

	FragTrap ft1("Fraggy");

	ft1.attack("Enemy");
	ft1.takeDamage(40);
	ft1.beRepaired(20);
	ft1.highFivesGuys();

	std::cout << "\n--- Copy constructor test ---\n" << std::endl;

	FragTrap ft2(ft1);

	ft2.attack("CopyEnemy");
	ft2.highFivesGuys();

	std::cout << "\n--- Assignment operator test ---\n" << std::endl;

	FragTrap ft3;

	ft3 = ft1;

	ft3.attack("AssignedEnemy");
	ft3.highFivesGuys();

	std::cout << "\n--- Death test ---\n" << std::endl;

	ft1.takeDamage(200);
	ft1.attack("Nobody");
	ft1.beRepaired(10);

	std::cout << "\n--- End of program ---\n" << std::endl;
	return 0;
}
