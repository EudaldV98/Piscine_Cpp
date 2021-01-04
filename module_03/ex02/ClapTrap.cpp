/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 18:14:21 by jvaquer           #+#    #+#             */
/*   Updated: 2020/06/11 11:23:01 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

static int max(int a, int b)
{
    return a > b ? a : b;
}

static int min(int a, int b)
{
    return a < b ? a : b;
}

ClapTrap::ClapTrap(std::string n, int hitPoints, int maxHitPoints,
					int energyPoints, int maxEnergyPoints, int level,
					int meleeAttackDamage, int rangedAttackDamage,
					int armorAttackReduction)
{
	_name = n;
	_hitPts = hitPoints;
	_maxHitPts = maxHitPoints;
	_energyPts = energyPoints;
	_maxEnergyPts = maxEnergyPoints;
	_lvl = level;
	_melee_dmg = meleeAttackDamage;
	_range_dmg = rangedAttackDamage;
	_dmg_armorRed = armorAttackReduction;
	std::cout << "CL4P-TP " << _name << " is a CL4P-TP!" << std::endl;
}

const std::string &ClapTrap::getName() const
{
	return _name;
}

const int &ClapTrap::getHitPoints() const
{
	return _hitPts;
}

const int &ClapTrap::getMaxHitPoints() const
{
	return _maxHitPts;
}

const int &ClapTrap::getEnergyPoints() const
{
	return _energyPts;
}

const int &ClapTrap::getMaxEnergyPoints() const
{
	return _maxEnergyPts;
}

const int &ClapTrap::getLevel() const
{
	return _lvl;
}

const int &ClapTrap::getMeleeAttackDamage() const
{
	return _melee_dmg;
}

const int &ClapTrap::getRangedAttackDamage() const
{
	return _range_dmg;
}

const int &ClapTrap::getArmorAttackReduction() const
{
	return _dmg_armorRed;
}

void ClapTrap::setEnergyPoints(const int &energyPoints)
{
	_energyPts = energyPoints;
}

void ClapTrap::setHitPoints(const int &hitPoints)
{
	_hitPts = hitPoints;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	int newHp = max(_hitPts - int(amount / (_dmg_armorRed + 1)), 0);
	std::cout << "CL4P-TP " << _name << " took " <<  _hitPts - newHp << " points of damage!" << std::endl;
	_hitPts = newHp;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	int newHp = min(_hitPts + int(amount), _maxHitPts);
	std::cout << "CL4P-TP " << _name << " was repaired by " << newHp - _hitPts << " points!" << std::endl;
	_hitPts = newHp;
}

ClapTrap::~ClapTrap()
{
	std::cout << "CL4P-TP " << _name << " is now a dead CL4P-TP." << std::endl;
}
