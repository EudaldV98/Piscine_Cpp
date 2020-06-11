/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 13:00:21 by jvaquer           #+#    #+#             */
/*   Updated: 2020/06/11 12:54:48 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string n): ClapTrap(n, baseHitPoints(), baseEnergyPoints()), NinjaTrap(n), FragTrap(n)
{
    std::cout << "SUPER-TP " << getName() << " popped as super trap!" << std::endl;
}

int SuperTrap::baseHitPoints() const
{
    return FragTrap::baseHitPoints();
}

int SuperTrap::maxHitPoints() const
{
    return FragTrap::maxHitPoints();
}

int SuperTrap::baseEnergyPoints() const
{
    return NinjaTrap::baseEnergyPoints();
}

int SuperTrap::maxEnergyPoints() const
{
    return NinjaTrap::maxEnergyPoints();
}

int SuperTrap::level() const
{
    return 1;
}

int SuperTrap::meleeAttackDamage() const
{
    return NinjaTrap::meleeAttackDamage();
}

int SuperTrap::rangedAttackDamage() const
{
    return FragTrap::rangedAttackDamage();
}

int SuperTrap::armorAttackReduction() const
{
    return FragTrap::armorAttackReduction();
}

void SuperTrap::rangedAttack(const std::string &target) const
{
    FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(const std::string &target) const
{
    NinjaTrap::meleeAttack(target);
}

SuperTrap::~SuperTrap()
{
    std::cout << "SUPER-TP " << getName() << " was deleted from the database!" << std::endl;
}
