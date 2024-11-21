/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:17:39 by eperperi          #+#    #+#             */
/*   Updated: 2024/11/21 15:36:36 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructors and destructor
ClapTrap::ClapTrap(): _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) 
{
	std::cout << "ClapTrap constructor with parameter name \"" << name << "\" called" << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap& original)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = original;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& original)
{
	std::cout << "ClapTrap assignment operator called" << std::endl;
	if (this != &original)
	{
		this->_name = original._name;
		this->_attackDamage = original._attackDamage;
		this->_energyPoints = original._energyPoints;
		this->_hitPoints = original._hitPoints;
	}
	return *this;
}

ClapTrap::~ClapTrap() 
{
	std::cout << "ClapTrap destructor for " << _name << " called" << std::endl;
}

// Action members
void ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		std::cout << "with Claptrap's attack, " << target << " loses " << this->_attackDamage << " points!" << std::endl;
		this->_energyPoints--;
	}
	else if (this->_hitPoints == 0)
		std::cout << "Claptrap cannot attack to " << target << " because he has no more hit points!" << std::endl;
	else
		std::cout << "Claptrap cannot attack to " << target << " because he has no more energy points!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	
if (this->_hitPoints > 0 && this->_energyPoints > 0)
{
	std::cout << "Claptrap is repaired with " << amount << " hit points!" << std::endl;
	this->_energyPoints--;
	this->_hitPoints += amount;
}
else if (this->_hitPoints == 0)
	std::cout << "Claptrap cannot be repaired because he has no more hit points!" << std::endl;
else
	std::cout << "Claptrap cannot be repaired because he has no more energy points!" << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > amount)
	{
		this->_hitPoints -= amount;
		std::cout << "Claptrap " << this->_name << " got attacked and lost " << amount << " hit points so ";
	}
	else if(this->_hitPoints > 0)
	{
		std::cout << "Claptrap " << this->_name << " got attacked and lost " << this->_hitPoints << " hip points so ";
		this->_hitPoints = 0;	
	}
	else
	{
		std::cout << "Claptrap " << this->_name << " cannot be attacked because he has no more hit points to lose so ";
	}
	std::cout <<"Claptrap " << this->_name << " has " << this->_hitPoints << " hit points left!" << std::endl;
}
