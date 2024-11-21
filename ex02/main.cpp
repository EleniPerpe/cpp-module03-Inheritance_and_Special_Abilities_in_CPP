/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:48:22 by eperperi          #+#    #+#             */
/*   Updated: 2024/11/21 16:05:21 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void	alice_rundown(void)
{
	ClapTrap clap("Alice");
	FragTrap frag("Fabian"); 

	clap.attack("Bob");
	clap.attack("Chris");
	frag.attack("Diana");
	frag.attack("Henry");
	frag.highFivesGuys();
}

int	main(void)
{
	std::cout << std::endl << std::endl << "Performing Traps' rundown..." << std::endl << std::endl;
	alice_rundown();
}