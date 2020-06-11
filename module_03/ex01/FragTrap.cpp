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

int		max_value(const int x, const int y)
{
	return x > y ? x : y;
}

int		min_value(const int x, const int y)
{
	return x < y ? x : y;
}

static const std::string FUNNY_ATTACKS[] = {
    "I have no idea what frag trap is!",
    "I guess frag trap is a Borderlands reference, but I haven't played the game!",
    "Please. Can someone explain what frag trap is!",
    "C++ is a very nice language. Compared to assembly and C of course.",
    "I don't know what to say.",
};

FragTrap::FragTrap(std::string n): name(n)
{
	hitPts = 100;
	maxHitPts = 100;
	energyPts = 100;
	maxEnergyPts = 100;
	level = 1;
	melee_dmg = 30;
	range_dmg = 20;
	armor_red = 5;
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
	std::cout << "FR4g-TP " << this->name << " has recovered " << amount << " health and has " << newHp << " hit points left." << std::endl;
	this->hitPts = newHp;
}

void	FragTrap::vaulthunter_dot_exe(const std::string &target)
{
	if (this->energyPts < 25)
	{
		std::cout << "FR4G-TP " << this->name << " cannot attack " << target << " because it's out of energy pts!" << std::endl;
		return ;
	}
	this->energyPts -= 25;
	std::string attack = FUNNY_ATTACKS[rand() % 5];
	std::cout << "FR4G-TP " << this->name << " attacks " << target << ": \"" << attack << "\"" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << name << " was destroyed." << std::endl;
}
