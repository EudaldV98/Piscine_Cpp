/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 18:14:21 by jvaquer           #+#    #+#             */
/*   Updated: 2020/06/11 12:59:46 by jvaquer          ###   ########.fr       */
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

ClapTrap::ClapTrap(std::string n, int hitPoints, int energyPoints)
{
	_name = n;
	_hitPts = hitPoints;
	_energyPts = energyPoints;
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

const int &ClapTrap::getEnergyPoints() const
{
	return _energyPts;
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
	std::cout << "CL4P-TP " << _name << " took " <<  _hitPts - newHp << " dmg pts!" << std::endl;
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
	std::cout << "CL4P-TP " << _name << " is now a dead new-born star." << std::endl;
}
