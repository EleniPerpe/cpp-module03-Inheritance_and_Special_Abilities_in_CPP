/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:13:20 by eperperi          #+#    #+#             */
/*   Updated: 2024/11/21 16:00:03 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &copy);
		~FragTrap();
		FragTrap &operator=(const FragTrap &copy);

		void highFivesGuys(void);
};
