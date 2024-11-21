/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:13:20 by eperperi          #+#    #+#             */
/*   Updated: 2024/11/21 15:13:39 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#pragma once

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string _name;
	public:
		DiamondTrap();
		DiamondTrap(const std::string &name);
		DiamondTrap(const DiamondTrap &copy);
		virtual ~DiamondTrap();
		DiamondTrap &operator=(const DiamondTrap &copy);

		void whoAmI();
		void attack(std::string const &target);
};
