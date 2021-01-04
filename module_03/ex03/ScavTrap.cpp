/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 20:13:30 by jvaquer           #+#    #+#             */
/*   Updated: 2020/05/22 00:04:50 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name):
    ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3)
{
	std::cout << "SC4V-TP " << getName() << " was born." << std::endl;
}

void ScavTrap::rangedAttack(const std::string &target) const
{
	std::cout << "SC4V-TP " << getName() << " attacks " << target << " at range, causing " << getRangedAttackDamage() << " dmg pts!" << std::endl;
}

void ScavTrap::meleeAttack(const std::string &target) const
{
	std::cout << "SC4V-TP " << getName() << " attacks " << target << " at melee, causing " << getMeleeAttackDamage() << " dmg pts!" << std::endl;
}

static const std::string FUNNY_CHALLENGES[] = {
	"I have no idea what to challenge you to.",
	"This day is fcking annoying.",
	"I can't believe they are wasting our time like that.",
	"You thought this would be an in-game quote, but it was me, L.",
	"I am challenging you, newcomer.",
};

void ScavTrap::challengeNewcomer(const std::string &target)
{
	if (getEnergyPoints() < 25)
	{
		std::cout << "SC4V-TP " << getName() << " cannot challenge " << target << " because it's out of energy!" << std::endl;
		return;
	}
	setEnergyPoints(getEnergyPoints() - 25);
	std::string attack = FUNNY_CHALLENGES[rand() % 5];
	std::cout << "SC4V-TP " << getName() << " challenges " << target << ": \"" << attack << "\"" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP " << getName() << " died in a tornado." << std::endl;
}
