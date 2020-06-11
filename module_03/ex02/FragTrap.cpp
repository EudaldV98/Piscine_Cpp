/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 23:47:51 by jvaquer           #+#    #+#             */
/*   Updated: 2020/05/25 19:06:54 by jvaquer          ###   ########.fr       */
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

FragTrap::FragTrap(std::string n): ClapTrap(n, 100, 100, 100, 100, 1, 30, 20, 5)
{
	std::cout << "FR4G-TP " << getName() << " was created." << std::endl;
}

void	FragTrap::meleeAttack(const std::string &target) const
{
	std::cout << "FR4G-TP " << getName() << " attacks " << target << " at melee, causing "  << getMeleeAttackDamage() << " pts of dmg!" << std::endl;
}

void	FragTrap::rangedAttack(const std::string &target) const
{
	std::cout << "FR4G-TP " << getName() << " attacks " << target << " at range, causing "  << getRangedAttackDamage() << " pts of dmg!" << std::endl;

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

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << getName() << " was destroyed." << std::endl;
}
