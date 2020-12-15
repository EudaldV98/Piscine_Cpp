/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 11:49:38 by jvaquer           #+#    #+#             */
/*   Updated: 2020/12/15 10:22:46 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(std::string name)
{
	_name = name;
	_weapon = NULL;
}

std::string HumanB::getName() const
{
	return _name;
}

void	HumanB::setName(std::string new_name)
{
	_name = new_name;
}

void	HumanB::setWeapon(Weapon &new_weapon)
{
	_weapon = &new_weapon;
}

void	HumanB::attack() const
{
	std::cout << _name << "attacks with his " << _weapon->getType() << std::endl;
}

HumanB::~HumanB()
{
}