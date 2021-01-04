/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 23:47:51 by jvaquer           #+#    #+#             */
/*   Updated: 2020/05/22 00:05:09 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name):
    ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5)
{
	std::cout << "FR4G-TP " << getName() << " was created." << std::endl;
}

void FragTrap::rangedAttack(const std::string &target) const
{
	std::cout << "FR4G-TP " << getName() << " attacks " << target << " at range, causing " << getRangedAttackDamage() << " dmg pts!" << std::endl;
}

void FragTrap::meleeAttack(const std::string &target) const
{
	std::cout << "FR4G-TP " << getName() << " attacks " << target << " at melee, causing " << getMeleeAttackDamage() << " dmg pts!" << std::endl;
}

static const std::string FUNNY_ATTACKS[] = {
	"I have no idea what frag trap is!",
	"I guess frag trap is a borderland reference...",
	"Please. Can someone explain what frag trap is. I can't find anything on google.",
	"C++ is a very nice language. Compared to C and assembly ofc.",
	"These attacks are super funny...",
};

void FragTrap::vaulthunter_dot_exe(const std::string &target)
{
	if (getEnergyPoints() < 25)
	{
		std::cout << "FR4G-TP " << getName() << " cannot attack " << target << " because it's out of energy!" << std::endl;
	return;
	}

	setEnergyPoints(getEnergyPoints() - 25);
	std::string attack = FUNNY_ATTACKS[rand() % 5];
	std::cout << "FR4G-TP " << getName() << " attacks " << target << ": \"" << attack << "\"" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << getName() << " was destroyed." << std::endl;
}
