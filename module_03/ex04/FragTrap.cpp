/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 23:47:51 by jvaquer           #+#    #+#             */
/*   Updated: 2020/06/11 12:57:48 by jvaquer          ###   ########.fr       */
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

FragTrap::FragTrap(std::string n): ClapTrap(n, baseHitPoints(), baseEnergyPoints())
{
	std::cout << "FR4G-TP " << getName() << " was created." << std::endl;
}

void	FragTrap::meleeAttack(const std::string &target) const
{
	std::cout << "FR4G-TP " << getName() << " attacks " << target << " at melee, causing "  << meleeAttackDamage() << " pts of dmg!" << std::endl;
}

void	FragTrap::rangedAttack(const std::string &target) const
{
	std::cout << "FR4G-TP " << getName() << " attacks " << target << " at range, causing "  << rangedAttackDamage() << " pts of dmg!" << std::endl;

}

void	FragTrap::vaulthunter_dot_exe(const std::string &target)
{
	if (getEnergyPoints()< 25)
	{
		std::cout << "FR4G-TP " << getName() << " cannot attack " << target << " because it's out of energy pts!" << std::endl;
		return ;
	}
	setEnergyPoints(getEnergyPoints() - 25);
	std::string attack = FUNNY_ATTACKS[rand() % 5];
	std::cout << "FR4G-TP " << getName() << " attacks " << target << ": \"" << attack << "\"" << std::endl;
}

int FragTrap::baseHitPoints() const
{
    return 100;
}

int FragTrap::maxHitPoints() const
{
    return 100;
}

int FragTrap::baseEnergyPoints() const
{
    return 100;
}

int FragTrap::maxEnergyPoints() const
{
    return 100;
}

int FragTrap::level() const
{
    return 1;
}

int FragTrap::meleeAttackDamage() const
{
    return 30;
}

int FragTrap::rangedAttackDamage() const
{
    return 20;
}

int FragTrap::armorAttackReduction() const
{
    return 5;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << getName() << " was destroyed." << std::endl;
}
