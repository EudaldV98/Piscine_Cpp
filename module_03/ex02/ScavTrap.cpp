/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 20:13:30 by jvaquer           #+#    #+#             */
/*   Updated: 2020/05/25 19:11:26 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

static const std::string FUNNY_CHALLENGES[] = {
    "I have no idea what this challenge should be. Write a sentence without looking the keyboard.",
    "I challenge you to write this in assembly.",
    "I can't believe they are wasting our time like that. I challenge you to go away.",
    "I challenge you to go to the BOCAL without your card.",
    "I challenge you to check who leaves before.",
};

ScavTrap::ScavTrap(std::string n): ClapTrap(n, 100, 100, 100, 100, 1, 30, 20, 5)
{
	std::cout << "SC4V-TP " << getName() << " has spawned." << std::endl;
}

void	ScavTrap::rangedAttack(const std::string &target) const
{
	std::cout << "SC4V-TP " << getName() << " damages " << target << " at melee, causing "  << getMeleeAttackDamage() << " pts of destruction!" << std::endl;

}

void	ScavTrap::meleeAttack(const std::string &target) const
{
	std::cout << "SC4V-TP " << getName() << " damges " << target << " at range, causing " << getRangedAttackDamage() << " pts of destruction!" << std::endl;
}

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
	std::cout << "SC4V-TP " << getName() << " has disappeared." << std::endl;
}
