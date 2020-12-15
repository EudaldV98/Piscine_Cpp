/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 11:57:32 by jvaquer           #+#    #+#             */
/*   Updated: 2020/12/15 10:25:54 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"
# include <string>
# include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
}

std::string HumanA::getName() const
{
	return _name;
}

void	HumanA::setName(std::string new_name)
{
	_name = new_name;
}

void	HumanA::setWeapon(Weapon &new_weapon)
{
	_weapon = new_weapon;
}

void	HumanA::attack() const
{
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
}
