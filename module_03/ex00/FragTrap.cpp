/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 23:47:51 by jvaquer           #+#    #+#             */
/*   Updated: 2020/05/17 17:57:28 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int		max_value(const int x, const int y)
{
	return x > y ? x : y;
}

int		min_value(const int x, const int y)
{
	return x < y ? x : y;
}

FragTrap::FragTrap(std::string n): name(n)
{
	std::cout << "FR4G-TP " << name << " was created." << std::endl;
}

void	FragTrap::meleeAttack(const std::string &target) const
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " at melee, causing "  << this->melee_dmg << " pts of dmg!" << std::endl;
}

void	FragTrap::rangedAttack(const std::string &target) const
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " at range, causing "  << this->range_dmg << " pts of dmg!" << std::endl;

}

void	FragTrap::takeDamage(unsigned int amount)
{
	int		newHp = max_value(this->hitPts - (amount - this->armor_red), 0);
	std::cout << "FR4G-TP " << this->name << " has taken " << amount << " of damage and has " << newHp << " hit points left." << std::endl;
	this->hitPts = newHp;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	int		newHp = min_value(this->hitPts + amount , this->maxHitPts);
	std::cout << "FR4g-TP " << this->name << " has recovered " << amount << "health and has " << newHp << " hit points left." << std::endl;
	this->hitPts = newHp;
}

void	FragTrap::vaulthunter_dot_exe(const std::string &target)
{
	if (this->energyPts < 25)
	{
		std::cout << "FR4G-TP " << this->name << " cannot attack " << target << " because it's out of energy pts!" << std::endl;
		return ;
	}
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << name << " was destroyed." << std::endl;
}
