/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 11:49:38 by jvaquer           #+#    #+#             */
/*   Updated: 2020/04/27 23:50:43 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(std::string name): name(name), weapon(NULL)
{
}

std::string HumanB::getName() const
{
	return this->name;
}

void	HumanB::setName(std::string new_name)
{
	this->name = new_name;
}

void	HumanB::setWeapon(Weapon &new_weapon)
{
	this->weapon = &new_weapon;
}

void	HumanB::attack() const
{
	std::cout << name << "attacks with his " << weapon->getType() << std::endl;
}

HumanB::~HumanB()
{
}