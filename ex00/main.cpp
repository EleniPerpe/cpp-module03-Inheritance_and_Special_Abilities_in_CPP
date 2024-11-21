/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:11:59 by eperperi          #+#    #+#             */
/*   Updated: 2024/11/21 16:02:48 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	std::cout << "### TESTING CLAPTRAP ###\n" << std::endl;
	
	{
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		ClapTrap a;
		ClapTrap b("Cody");

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		a.attack("Robocop");
		a.takeDamage(2);
		a.takeDamage(1);
		a.beRepaired(3);
		a.attack("Robicon");
		b.beRepaired(3);
		for (int i = 0; i < 12; i++)
			b.attack("Cody-Clone");
		b.beRepaired(3);
		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	}
	return (0);
}