/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:48:22 by eperperi          #+#    #+#             */
/*   Updated: 2024/11/21 16:12:05 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "FragTrap.hpp"
// #include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

void	traps_rundown(void);

int	main(void)
{
	std::cout << std::endl << std::endl << "\033[33m Performing Traps' rundown..." << std::endl << std::endl;
	traps_rundown();
}

void	traps_rundown(void)
{	
	std::cout << std::endl << "\033[1m \033[34m CONSTRUCTORS\033[0m" << std::endl << std::endl;
	
	ScavTrap scav("Alice");
	FragTrap frag("Fabian"); 
	DiamondTrap diamond("Eleni");

	std::cout << std::endl << "\033[1m \033[32m FUNCTION MEMBERS\033[0m" << std::endl << std::endl;

	scav.attack("Bob");
	scav.attack("Chris");
	scav.guardGate();
	frag.attack("Diana");
	frag.attack("Fabian");
	frag.highFivesGuys();
	diamond.attack("Ramy");
	diamond.attack("Thalia");
	diamond.guardGate();
	diamond.highFivesGuys();
	diamond.whoAmI();
	
	std::cout << std::endl << "\033[1m \033[31m DESTRUCTORS\033[0m" << std::endl << std::endl;
}
