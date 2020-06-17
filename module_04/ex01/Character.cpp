/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 19:31:49 by jvaquer           #+#    #+#             */
/*   Updated: 2020/06/17 21:04:14 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name)
{
	Name = name;
	AP = 40;
	Weapon = NULL;
}

void	Character::recoverAP()
{
	AP += 10;
	AP = (AP > 40) ? 40 : AP;
}

void	Character::equip(AWeapon *weapon)
{
	Weapon = weapon;
}

const std::string	&Character::getName() const
{
	return Name;
}

const AWeapon	*Character::getWeapon() const
{
	return	Weapon;
}

int		Character::getAP() const
{
	return AP;
}

void	Character::attack(Enemy *target)
{
	if (!Weapon)
		std::cout << Name << " has no weapon!" << std::endl;
	if	(AP < Weapon->getAPCost())
		std::cout << Name << " doesn't have enough AP!" << std::endl;
	else
	{
		AP -= Weapon->getAPCost();
		std::cout << this->Name << " attcks " << target->getType() << " with a " << this->Weapon->getName() << "." << std::endl;
		Weapon->attack();
		target->takeDamage(Weapon->getDamage());
		if (target->getHP() <= 0)
			delete target;
	}
}

Character::~Character()
{
}

std::ostream &operator << (std::ostream &out, const Character &c)
{
	if (c.getWeapon() != NULL)
		return out << c.getName() << " has " << c.getAP() << " AP and wields a " << c.getWeapon()->getName() << "." << std::endl;
	return out << c.getName() << " has " << c.getAP() << "and is unarmed." << std::endl;
}
