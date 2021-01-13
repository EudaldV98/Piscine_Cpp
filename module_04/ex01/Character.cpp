/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 19:31:49 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/13 03:34:35 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name)
{
	_name = name;
	_aP = 40;
	_Weapon = NULL;
}

void	Character::recoverAP()
{
	_aP += 10;
	_aP = (_aP > 40) ? 40 : _aP;
}

void	Character::equip(AWeapon *weapon)
{
	_Weapon = weapon;
}

const std::string	&Character::getName() const
{
	return _name;
}

const AWeapon	*Character::getWeapon() const
{
	return	_Weapon;
}

int		Character::getAP() const
{
	return _aP;
}

void	Character::attack(Enemy *target)
{
	if (!_Weapon)
		std::cout << _name << " has no weapon!" << std::endl;
	if	(_aP < _Weapon->getAPCost())
		std::cout << _name << " doesn't have enough AP!" << std::endl;
	else
	{
		_aP -= _Weapon->getAPCost();
		std::cout << this->_name << " attcks " << target->getType() << " with a " << this->_Weapon->getName() << "." << std::endl;
		_Weapon->attack();
		target->takeDamage(_Weapon->getDamage());
		if (target->getHp() <= 0)
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
	return out << c.getName() << " has " << c.getAP() << " AP and is unarmed." << std::endl;
}
