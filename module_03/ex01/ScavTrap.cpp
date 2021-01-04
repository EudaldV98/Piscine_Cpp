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

static int			max_value(const int x, const int y)
{
	return x > y ? x : y;
}

static int			min_value(const int x, const int y)
{
	return x < y ? x : y;
}

static const std::string FUNNY_CHALLENGES[] = {
	"I have no idea what this challenge should be. Write a sentence without looking the keyboard.",
	"I challenge you to write this in assembly.",
	"I can't believe they are wasting our time like that. I challenge you to go away.",
	"I challenge you to go to the BOCAL without your card.",
	"I challenge you to check who leaves before.",
};

ScavTrap::ScavTrap(std::string n): _name(n)
{
	_hitPts = 100;
	_maxHitPts = 100;
	_energyPts = 100;
	_maxEnergyPts = 100;
	_level = 1;
	_melee_dmg = 30;
	_range_dmg = 20;
	_armorRed = 5;
	std::cout << "SC4V-TP " << _name << " has spawned." << std::endl;
}

void						ScavTrap::rangedAttack(const std::string &target) const
{
	std::cout << "SC4V-TP " << _name << " damages " << target << " at melee, causing "  << _melee_dmg << " pts of destruction!" << std::endl;

}

void						ScavTrap::meleeAttack(const std::string &target) const
{
	std::cout << "SC4V-TP " << _name << " damges " << target << " at range, causing " << _range_dmg << " pts of destruction!" << std::endl;
}

void						ScavTrap::takeDamage(unsigned int amount)
{
	int		newHp = max_value(_hitPts - (amount - _armorRed), 0);
	std::cout << "FR4G-TP " << _name << " has " << amount << " pieces destroyed and has " << newHp << " pieces left." << std::endl;
	_hitPts = newHp;
}

void						ScavTrap::beRepaired(unsigned int amount)
{
	int		newHp = min_value(_hitPts + amount , _maxHitPts);
	std::cout << "FR4G-TP " << _name << " has repaired " << amount << " pieces and has " << newHp << " pieces left." << std::endl;
	_hitPts = newHp;
}

void 					ScavTrap::challengeNewcomer(const std::string &target)
{
	if (_energyPts < 25)
	{
		std::cout << "SC4V-TP " << _name << " cannot challenge " << target << " because it's out of energy!" << std::endl;
		return;
	}

	_energyPts -= 25;
	std::string attack = FUNNY_CHALLENGES[rand() % 5];
	std::cout << "SC4V-TP " << _name << " challenges " << target << ": \"" << attack << "\"" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP " << _name << " has disappeared." << std::endl;
}
