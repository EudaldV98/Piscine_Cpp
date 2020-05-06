/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 11:57:32 by jvaquer           #+#    #+#             */
/*   Updated: 2020/04/27 23:49:27 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"
# include <string>
# include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(weapon)
{
}

std::string HumanA::getName() const
{
	return this->name;
}

void	HumanA::setName(std::string new_name)
{
	this->name = new_name;
}

void	HumanA::setWeapon(Weapon &new_weapon)
{
	this->weapon = new_weapon;
}

void	HumanA::attack() const
{
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
}
