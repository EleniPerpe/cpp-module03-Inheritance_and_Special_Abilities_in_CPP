/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:31:14 by eperperi          #+#    #+#             */
/*   Updated: 2024/11/21 17:17:55 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap default constructor is called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const std:: string &name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor with parameter name \"" << _name << "\" is called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;	
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "FragTrap copy constructor is called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor is called for FragTrap " << _name << std::endl;	
}
FragTrap &FragTrap::operator=(const FragTrap &copy)
{
	std::cout << "FragTrap assignment operator is called" << std::endl;
	ClapTrap::operator = (copy);
	return *this;
}
		
void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << ": Have a high five" << std::endl << std::endl << "  o/    \\o\n   |     |\n  / \\    /\\" << std::endl << std::endl;
}
