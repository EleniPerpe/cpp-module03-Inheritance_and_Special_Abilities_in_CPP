/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:48:22 by eperperi          #+#    #+#             */
/*   Updated: 2024/11/21 12:39:59 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

void	alice_rundown(void)
{
	ScavTrap alice("Alice");
	FragTrap eleni("Fabian"); 

	alice.attack("Bob");
	alice.attack("Chris");
	eleni.attack("Diana");
	alice.attack("Elisa");
	alice.attack("Fred");
	alice.attack("Gemma");
	eleni.attack("Henry");
	eleni.attack("Isabella");
	alice.attack("Jack");
	alice.attack("Kevin");
	alice.attack("Laura");
	alice.attack("Mike");
	alice.guardGate();
	eleni.highFivesGuys();
}

void	bob_rundown(void)
{
	ScavTrap	bob("Bob");

	bob.takeDamage(1);
	bob.attack("Jenne");
	bob.attack("Eleni");
	bob.attack("Mattias");
	bob.attack("Fabian");
	bob.guardGate();
}

int	main(void)
{
	std::cout << std::endl << std::endl << "Performing Alice's rundown..." << std::endl << std::endl;
	alice_rundown();
	std::cout << std::endl << std::endl << "Performing Bob's rundown..." << std::endl << std::endl;
	bob_rundown();
}