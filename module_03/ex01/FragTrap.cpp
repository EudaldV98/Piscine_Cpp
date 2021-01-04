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

static int	max_value(const int x, const int y)
{
	return x > y ? x : y;
}

static int	min_value(const int x, const int y)
{
	return x < y ? x : y;
}

static const std::string FUNNY_ATTACKS[] = {
    "WTF is Frag Trap! They choose such weird names at 42.",
    "Is Frag Trap a reference to Borderlands? I guess yes...",
    "Please. Can someone explain what frag trap is!",
    "C++ is a very nice language. Compared to assembly and C of course.",
    "I don't know what to say.",
};

FragTrap::FragTrap(std::string n): _name(n)
{
	_hitPts = 100;
	_maxHitPts = 100;
	_energyPts = 100;
	_maxEnergyPts = 100;
	_level = 1;
	_melee_dmg = 30;
	_range_dmg = 20;
	_armor_red = 5;
	std::cout << "FR4G-TP " << _name << " was created." << std::endl;
}

void				FragTrap::meleeAttack(const std::string &target) const
{
	std::cout << "FR4G-TP " << _name << " attacks " << target << " at melee, causing "  << _melee_dmg << " pts of dmg!" << std::endl;
}

void				FragTrap::rangedAttack(const std::string &target) const
{
	std::cout << "FR4G-TP " << _name << " attacks " << target << " at range, causing "  << _range_dmg << " pts of dmg!" << std::endl;

}

void				FragTrap::takeDamage(unsigned int amount)
{
	int		newHp = max_value(_hitPts - (amount - _armor_red), 0);
	std::cout << "FR4G-TP " << _name << " has taken " << amount << " of damage and has " << newHp << " hit points left." << std::endl;
	_hitPts = newHp;
}

void				FragTrap::beRepaired(unsigned int amount)
{
	int		newHp = min_value(_hitPts + amount , _maxHitPts);
	std::cout << "FR4G-TP " << _name << " has recovered " << amount << " health and has " << newHp << " hit points left." << std::endl;
	_hitPts = newHp;
}

void				FragTrap::vaulthunter_dot_exe(const std::string &target)
{
	if (_energyPts < 25)
	{
		std::cout << "FR4G-TP " << _name << " cannot attack " << target << " because it's out of energy pts!" << std::endl;
		return ;
	}
	_energyPts -= 25;
	std::string attack = FUNNY_ATTACKS[rand() % 5];
	std::cout << "FR4G-TP " << _name << " attacks " << target << ": \"" << attack << "\"" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << _name << " was destroyed." << std::endl;
}
