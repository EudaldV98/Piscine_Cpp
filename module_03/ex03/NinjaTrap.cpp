/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 12:24:51 by jvaquer           #+#    #+#             */
/*   Updated: 2020/05/29 12:30:03 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include <iostream>

NinjaTrap::NinjaTrap(std::string name):
	ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0)
{
	std::cout << "CL4P-TP" << getName() << " was born as a NINJ4-TP." << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NINJ4-TP " << getName() << " died suiciding for his ninja honor." << std::endl;
}

void NinjaTrap::rangedAttack(const std::string &target) const
{
	std::cout << "NINJ4-TP " << getName() << " attacks " << target << " at range, causing " << getRangedAttackDamage() << " dmg pts! Not bad!" << std::endl;
}

void NinjaTrap::meleeAttack(const std::string &target) const
{
	std::cout << "NINJ4-TP " << getName() << " attacks " << target << " at melee, causing " << getMeleeAttackDamage() << " dmg pts! Not bad!" << std::endl;
}

void NinjaTrap::ninjaShoebox(const FragTrap &target)
{
	if (getEnergyPoints() < 30)
	{
		std::cout << "NINJ4-TP " << getName() << " cannot ninja shoebox " << target.getName() << " because it is out of energy!" << std::endl;
		return;
	}
	setEnergyPoints(getEnergyPoints() - 30);
	std::cout << "NINJ4-TP " << getName() << " ninja shoebox " << target.getName() << ": CRACK!" << std::endl;
}

void NinjaTrap::ninjaShoebox(const ScavTrap &target)
{
	if (getEnergyPoints() < 30)
	{
		std::cout << "NINJ4-TP " << getName() << " cannot ninja shoebox " << target.getName() << " because it is out of energy!" << std::endl;
		return;
	}
	setEnergyPoints(getEnergyPoints() - 30);
	std::cout << "NINJ4-TP " << getName() << " destroyed with ninja shoebox " << target.getName() << "!" << std::endl;
}

void NinjaTrap::ninjaShoebox(const NinjaTrap &target)
{
	if (getEnergyPoints() < 30)
	{
		std::cout << "NINJ4-TP " << getName() << " cannot ninja shoebox " << target.getName() << " because it is out of energy!" << std::endl;
		return;
	}
	setEnergyPoints(getEnergyPoints() - 30);
	std::cout << "NINJ4-TP " << getName() << " ninja shoebox " << target.getName() << ": BOOM." << std::endl;
}
