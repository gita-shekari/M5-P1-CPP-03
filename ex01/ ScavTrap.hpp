/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ScavTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 20:52:19 by gshekari          #+#    #+#             */
/*   Updated: 2026/05/22 21:21:27 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVETRAP_HPP
#define SCAVETRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& other);
		ScavTrap& operator=(const ScavTrap& other);
		~ScavTrap();
		void attack(const std::string& target);
		void guardGate();
};

#endif
