/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:31:14 by eperperi          #+#    #+#             */
/*   Updated: 2024/11/21 13:24:22 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_trap")
{
	std::cout << "DiamondTrap default constructor is called" << std::endl;
	ClapTrap::_name = "diamond_default_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

DiamondTrap::DiamondTrap(const std:: string &name) : ClapTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap constructor with name \"" << _name << "\" is called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;	
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	std::cout << "DiamondTrap copy constructor is called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor is called for DiamondTrap " << _name << std::endl;	
}
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
	std::cout << "DiamondTrap assignment operator is called" << std::endl;
	FragTrap::operator = (copy);
	return *this;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}
