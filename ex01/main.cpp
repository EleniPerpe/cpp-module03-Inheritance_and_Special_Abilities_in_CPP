/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:48:22 by eperperi          #+#    #+#             */
/*   Updated: 2024/11/21 16:05:36 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void	trap_rundown(void)
{
	ScavTrap scav("Alice");
	ClapTrap clap("Carlos");

	clap.attack("Fabian");
	clap.attack("Jenne");
	scav.attack("Bob");
	scav.attack("Chris");
	scav.guardGate();
}

int	main(void)
{
	std::cout << std::endl << std::endl << "Performing Traps' rundown..." << std::endl << std::endl;
	trap_rundown();
}