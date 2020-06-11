/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 18:14:21 by jvaquer           #+#    #+#             */
/*   Updated: 2020/06/11 11:23:20 by jvaquer          ###   ########.fr       */
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
    name = n;
	hitPts = hitPoints;
	maxHitPts = maxHitPoints;
	energyPts = energyPoints;
	maxEnergyPts = maxEnergyPoints;
	lvl = level;
	melee_dmg = meleeAttackDamage;
	range_dmg = rangedAttackDamage;
	dmg_armorRed = armorAttackReduction;
    std::cout << "CL4P-TP " << this->name << " is a new-born star!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "CL4P-TP " << name << " is now a dead new-born star." << std::endl;
}

const std::string &ClapTrap::getName() const
{
    return name;
}

const int &ClapTrap::getHitPoints() const
{
    return hitPts;
}

const int &ClapTrap::getMaxHitPoints() const
{
    return maxHitPts;
}

const int &ClapTrap::getEnergyPoints() const
{
    return energyPts;
}

const int &ClapTrap::getMaxEnergyPoints() const
{
    return maxEnergyPts;
}

const int &ClapTrap::getLevel() const
{
    return lvl;
}

const int &ClapTrap::getMeleeAttackDamage() const
{
    return melee_dmg;
}

const int &ClapTrap::getRangedAttackDamage() const
{
    return range_dmg;
}

const int &ClapTrap::getArmorAttackReduction() const
{
    return dmg_armorRed;
}

void ClapTrap::setEnergyPoints(const int &energyPoints)
{
    energyPts = energyPoints;
}

void ClapTrap::setHitPoints(const int &hitPoints)
{
    hitPts = hitPoints;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    int newHp = max(hitPts - int(amount / (dmg_armorRed + 1)), 0);
    std::cout << "CL4P-TP " << name
        << " took " <<  hitPts - newHp
        << " points of damage!" << std::endl;
    hitPts = newHp;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    int newHp = min(hitPts + int(amount), maxHitPts);
    std::cout << "CL4P-TP " << name << " was repaired by " << newHp - hitPts << " points!" << std::endl;
    hitPts = newHp;
}