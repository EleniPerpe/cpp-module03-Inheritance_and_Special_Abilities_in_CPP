/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:31:14 by eperperi          #+#    #+#             */
/*   Updated: 2024/11/21 15:44:08 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Scavtrap default constructor is called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const std:: string &name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor with name \"" << _name << "\" is called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;	
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "ScavTrap copy constructor is called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor is called for ScavTrap " << _name << std::endl;	
}
ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << "ScavTrap assignment operator is called" << std::endl;
	ClapTrap::operator = (copy);
	return *this;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	// this->ClapTrap::attack(target);
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		std::cout << "with ScavTrap's attack, " << target << " loses " << this->_attackDamage << " points!" << std::endl;
		this->_energyPoints--;
	}
	else if (this->_hitPoints == 0)
		std::cout << "ScavTrap cannot attack to " << target << " because he has no more hit points!" << std::endl;
	else
		std::cout << "ScavTrap cannot attack to " << target << " because he has no more energy points!" << std::endl;
}
