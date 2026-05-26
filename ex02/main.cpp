/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 14:54:51 by gshekari          #+#    #+#             */
/*   Updated: 2026/05/26 20:50:04 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	std::cout << "\n--- ClapTrap test ---\n" << std::endl;

	ClapTrap ct("Robot1");

	ct.attack("Enemy");
	ct.takeDamage(5);
	ct.beRepaired(3);

	std::cout << "\n--- ScavTrap test ---\n" << std::endl;

	ScavTrap st("Guardian");

	st.attack("Enemy");
	st.takeDamage(20);
	st.beRepaired(10);
	st.guardGate();

	std::cout << "\n--- Copy constructor test ---\n" << std::endl;

	ScavTrap copy(st);

	copy.attack("CopyEnemy");

	std::cout << "\n--- Assignment operator test ---\n" << std::endl;

	ScavTrap assigned;
	assigned = st;

	assigned.attack("AssignedEnemy");

	std::cout << "\n--- End of program ---\n" << std::endl;

	return 0;
}
