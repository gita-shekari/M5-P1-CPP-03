/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 14:54:51 by gshekari          #+#    #+#             */
/*   Updated: 2026/05/28 13:27:15 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	std::cout << "\n========== DIAMONDTRAP TEST ==========\n" << std::endl;

	DiamondTrap dt("DT_Robot");

	dt.attack("Boss");
	dt.takeDamage(30);
	dt.beRepaired(15);
	dt.guardGate();
	dt.highFivesGuys();
	dt.whoAmI();

	std::cout << "\n========== COPY CONSTRUCTOR TEST ==========\n" << std::endl;

	DiamondTrap copy(dt);

	copy.whoAmI();
	copy.attack("CopyTarget");

	std::cout << "\n========== ASSIGNMENT OPERATOR TEST ==========\n" << std::endl;

	DiamondTrap assigned;

	assigned = dt;

	assigned.whoAmI();
	assigned.attack("AssignedTarget");

	std::cout << "\n========== END OF PROGRAM ==========\n" << std::endl;

	return 0;
}
